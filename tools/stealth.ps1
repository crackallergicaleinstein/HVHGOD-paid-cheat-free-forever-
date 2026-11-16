# stealth.ps1 - the part of the build that keeps VAC's memory walk boring.
#
#   pwsh -File tools\stealth.ps1 -Pid 1234                     # scan only
#   pwsh -File tools\stealth.ps1 -Pid 1234 -Hide -Base 1A2B0000 # scan + hide headers
#
# What it does:
#   scan   walk the target's address space, list every committed region that is
#          executable but NOT backed by an image (that is what a signature walk
#          sees first), flag RWX, and flag MZ / PE headers inside private memory.
#   hide   zero the mapped image's header page in the target - DOS header, NT
#          header, section table, import directory names, the lot - so a scanner
#          looking for a PE inside a private region reads zeros. The pages stay
#          mapped and readable, so a runtime that still pokes at its own header
#          gets zeros instead of an access violation.
#
# Everything here is read/verify first: if a step cannot prove what it is about
# to touch, it refuses instead of guessing.
param(
    [Alias('Pid')][Parameter(Mandatory = $true)][int]$ProcessId,
    [switch]$Hide,
    [string]$Base = '',
    [switch]$Quiet
)

$ErrorActionPreference = 'Stop'

if (-not ('VacStealth' -as [type])) {
    Add-Type -TypeDefinition @'
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

public static class VacStealth
{
    [StructLayout(LayoutKind.Sequential)]
    public struct MBI
    {
        public ulong BaseAddress;
        public ulong AllocationBase;
        public uint  AllocationProtect;
        public uint  Alignment1;
        public ulong RegionSize;
        public uint  State;
        public uint  Protect;
        public uint  Type;
        public uint  Alignment2;
    }

    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr OpenProcess(uint access, bool inherit, int pid);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool CloseHandle(IntPtr h);
    [DllImport("kernel32.dll", SetLastError = true)] static extern UIntPtr VirtualQueryEx(IntPtr h, ulong addr, out MBI mbi, UIntPtr len);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool ReadProcessMemory(IntPtr h, ulong addr, byte[] buf, UIntPtr size, out UIntPtr got);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool WriteProcessMemory(IntPtr h, ulong addr, byte[] buf, UIntPtr size, out UIntPtr got);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool VirtualProtectEx(IntPtr h, ulong addr, UIntPtr size, uint prot, out uint old);

    const uint PROCESS_QUERY_INFORMATION = 0x0400;
    const uint PROCESS_VM_READ = 0x0010;
    const uint PROCESS_VM_WRITE = 0x0020;
    const uint PROCESS_VM_OPERATION = 0x0008;

    const uint MEM_COMMIT = 0x1000;
    const uint MEM_PRIVATE = 0x20000;
    const uint MEM_IMAGE = 0x1000000;

    const uint PAGE_EXECUTE = 0x10;
    const uint PAGE_EXECUTE_READ = 0x20;
    const uint PAGE_EXECUTE_READWRITE = 0x40;
    const uint PAGE_EXECUTE_WRITECOPY = 0x80;
    const uint PAGE_READWRITE = 0x04;
    const uint PAGE_READONLY = 0x02;

    static bool Exec(uint p)
    {
        return (p & 0xF0) == PAGE_EXECUTE || (p & 0xF0) == PAGE_EXECUTE_READ ||
               (p & 0xF0) == PAGE_EXECUTE_READWRITE || (p & 0xF0) == PAGE_EXECUTE_WRITECOPY;
    }

    static IntPtr Open(int pid, bool write)
    {
        uint access = PROCESS_QUERY_INFORMATION | PROCESS_VM_READ |
                      (write ? (PROCESS_VM_WRITE | PROCESS_VM_OPERATION) : 0);
        IntPtr h = OpenProcess(access, false, pid);
        if (h == IntPtr.Zero) throw new Exception("OpenProcess failed: " + Marshal.GetLastWin32Error());
        return h;
    }

    static bool Read(IntPtr h, ulong addr, byte[] buf)
    {
        UIntPtr got;
        return ReadProcessMemory(h, addr, buf, (UIntPtr)(uint)buf.Length, out got) && (ulong)got == (ulong)buf.Length;
    }

    // ---- scan ------------------------------------------------------------
    // one line per region: base|size|protect|type|flags|head16
    public static string[] Scan(int pid)
    {
        List<string> rows = new List<string>();
        IntPtr h = Open(pid, false);
        try
        {
            ulong addr = 0;
            for (int guard = 0; guard < 2000000; guard++)
            {
                MBI m;
                UIntPtr r = VirtualQueryEx(h, addr, out m, (UIntPtr)Marshal.SizeOf(typeof(MBI)));
                if (r == UIntPtr.Zero) break;

                if (m.State == MEM_COMMIT)
                {
                    byte[] head = new byte[16];
                    Read(h, m.BaseAddress, head);
                    bool mz = head.Length > 1 && head[0] == 0x4D && head[1] == 0x5A;
                    bool rwx = (m.Protect & 0xF0) == PAGE_EXECUTE_READWRITE || (m.Protect & 0xF0) == PAGE_EXECUTE_WRITECOPY;

                    // a PE signature at e_lfanew is a stronger tell than MZ alone
                    bool pe = false;
                    if (mz)
                    {
                        byte[] lf = new byte[4];
                        if (Read(h, m.BaseAddress + 0x3C, lf))
                        {
                            uint off = BitConverter.ToUInt32(lf, 0);
                            if (off > 0x3C && off < 0x1000)
                            {
                                byte[] sig = new byte[4];
                                if (Read(h, m.BaseAddress + off, sig))
                                    pe = sig[0] == 0x50 && sig[1] == 0x45 && sig[2] == 0 && sig[3] == 0;
                            }
                        }
                    }

                    // The interesting set: anything RWX anywhere, and anything in
                    // private memory that is executable or carries a PE header.
                    // Image-backed exec pages are the game's own modules - noise.
                    bool interesting = rwx || (m.Type == MEM_PRIVATE && (Exec(m.Protect) || mz || pe));
                    if (interesting)
                    {
                        string flags = (m.Type == MEM_PRIVATE ? "private" : m.Type == MEM_IMAGE ? "image" : "mapped") +
                                       (rwx ? ",rwx" : "") + (mz ? ",MZ" : "") + (pe ? ",PE" : "");
                        rows.Add(string.Format("{0:X16}|{1:X}|{2:X4}|{3}|{4}",
                            m.BaseAddress, m.RegionSize, m.Protect, m.Type, flags));
                    }
                }

                ulong next = m.BaseAddress + m.RegionSize;
                if (next <= addr) break;
                addr = next;
            }
        }
        finally { CloseHandle(h); }
        return rows.ToArray();
    }

    // ---- header scrub ----------------------------------------------------
    // Zero [base, base + SizeOfHeaders). Reads SizeOfHeaders out of the mapped
    // image first; if the header is already gone it falls back to one page.
    public static string HideHeaders(int pid, ulong baseAddr)
    {
        IntPtr h = Open(pid, true);
        try
        {
            byte[] dos = new byte[0x40];
            if (!Read(h, baseAddr, dos)) return "refused: cannot read DOS header at the given base";

            uint hdrSize = 0x1000;
            uint lfanew = BitConverter.ToUInt32(dos, 0x3C);
            if (lfanew > 0x3C && lfanew < 0x1000)
            {
                byte[] nt = new byte[0x20 + 0x40];
                if (Read(h, baseAddr + lfanew, nt))
                {
                    bool peSig = nt[0] == 0x50 && nt[1] == 0x45 && nt[2] == 0 && nt[3] == 0;
                    if (peSig)
                    {
                        ushort optSize = BitConverter.ToUInt16(nt, 20);
                        uint optStart = 24;
                        if (optSize >= 0x40)
                        {
                            uint candidate = BitConverter.ToUInt32(nt, (int)(optStart + 60));
                            if (candidate >= 0x200 && candidate <= 0x10000) hdrSize = candidate;
                        }
                    }
                }
            }

            // WPM needs write access; the image header page is normally committed
            // read/write, but a driver or a previous pass may have tightened it.
            uint oldProt;
            if (!VirtualProtectEx(h, baseAddr, (UIntPtr)hdrSize, PAGE_READWRITE, out oldProt))
                return "refused: cannot raise write access on the header page (" + Marshal.GetLastWin32Error() + ")";

            byte[] zeros = new byte[0x1000];
            uint done = 0;
            while (done < hdrSize)
            {
                int chunk = (int)Math.Min((uint)zeros.Length, hdrSize - done);
                byte[] piece = chunk == zeros.Length ? zeros : new byte[chunk];
                UIntPtr got;
                if (!WriteProcessMemory(h, baseAddr + done, piece, (UIntPtr)(uint)chunk, out got) || (uint)got != (uint)chunk)
                {
                    VirtualProtectEx(h, baseAddr, (UIntPtr)hdrSize, oldProt, out oldProt);
                    return "failed: write stopped at +0x" + done.ToString("X");
                }
                done += (uint)chunk;
            }

            uint ignored;
            VirtualProtectEx(h, baseAddr, (UIntPtr)hdrSize, PAGE_READONLY, out ignored);
            return string.Format("headers zeroed: 0x{0:X} bytes at 0x{1:X}, page left read-only", hdrSize, baseAddr);
        }
        finally { CloseHandle(h); }
    }

    // does a region still look like a PE at the given base?
    public static string Probe(int pid, ulong baseAddr)
    {
        IntPtr h = Open(pid, false);
        try
        {
            byte[] head = new byte[2];
            if (!Read(h, baseAddr, head)) return "unreadable";
            return head[0] == 0x4D && head[1] == 0x5A ? "MZ" : "no MZ";
        }
        finally { CloseHandle(h); }
    }
}
'@
}

$rows = [VacStealth]::Scan($ProcessId)

if (-not $Quiet) {
    Write-Output ("[stealth] pid {0} - regions a memory scanner would care about" -f $ProcessId)
    if ($rows.Count -eq 0) {
        Write-Output '  clean: no private executable regions, no RWX, no PE header outside image mappings'
    }
    foreach ($r in $rows) {
        $p = $r -split '\|'
        Write-Output ("  {0}  size {1,8}  prot {2}  {3}" -f $p[0], $p[1], $p[2], $p[4])
    }
    if ($rows.Count -gt 0) { Write-Output ("  => {0} region(s) with RWX, a private PE header or private exec" -f $rows.Count) }
}

if ($Hide) {
    if (-not $Base) { throw '-Hide needs -Base <hex image base> from the map log' }
    $b = [Convert]::ToUInt64(($Base -replace '^0x', ''), 16)
    Write-Output ("[stealth] hiding headers at 0x{0:X}" -f $b)
    $msg = [VacStealth]::HideHeaders($ProcessId, $b)
    Write-Output ("  " + $msg)
    if ($msg.StartsWith('headers zeroed')) {
        Write-Output ("  probe: " + [VacStealth]::Probe($ProcessId, $b))
    } else {
        exit 1
    }
}
