# rage_seed.ps1 - set the two config flags the rage bot checks before it fires.
#
#   pwsh -File tools\rage_seed.ps1 -ProcessId <cs2 pid> -Base <image base hex>
#
# The six licence patches ungate the module. They do not enable the rage bot:
# the aim path reads two config values every command and bails out when they are
# zero. With the vendor loader gone, nothing ever writes them - the menu toggle
# goes into a config library that is no longer fed - so they sit at 0 forever and
# rage.log repeats `reason=rage_inactive`.
#
#   image + 0xCAD2E0  int32  rage master      must be 1   (else rage_inactive)
#   image + 0xC7E1F0  byte   autofire          must be 1   (else auto_fire_disabled)
#
# This seeds both in the mapped image. Values read back after the write; if the
# runtime rewrites them from config, the line says so instead of pretending.
param(
    [Alias('Pid')][Parameter(Mandatory = $true)][int]$ProcessId,
    [Parameter(Mandatory = $true)][string]$Base
)

$ErrorActionPreference = 'Stop'

if (-not ('RageSeed' -as [type])) {
    Add-Type -TypeDefinition @'
using System;
using System.Runtime.InteropServices;

public static class RageSeed
{
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr OpenProcess(uint access, bool inherit, int pid);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool CloseHandle(IntPtr h);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool ReadProcessMemory(IntPtr h, ulong addr, byte[] buf, UIntPtr size, out UIntPtr got);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool WriteProcessMemory(IntPtr h, ulong addr, byte[] buf, UIntPtr size, out UIntPtr got);

    const uint PROCESS_VM_READ = 0x0010;
    const uint PROCESS_VM_WRITE = 0x0020;
    const uint PROCESS_VM_OPERATION = 0x0008;

    static IntPtr Open(int pid, bool write)
    {
        uint access = PROCESS_VM_READ | (write ? (PROCESS_VM_WRITE | PROCESS_VM_OPERATION) : 0);
        IntPtr h = OpenProcess(access, false, pid);
        if (h == IntPtr.Zero) throw new Exception("OpenProcess failed: " + Marshal.GetLastWin32Error());
        return h;
    }

    public static int ReadInt(int pid, ulong addr)
    {
        IntPtr h = Open(pid, false);
        try
        {
            byte[] b = new byte[4];
            UIntPtr got;
            if (!ReadProcessMemory(h, addr, b, (UIntPtr)4, out got)) throw new Exception("RPM failed: " + Marshal.GetLastWin32Error());
            return BitConverter.ToInt32(b, 0);
        }
        finally { CloseHandle(h); }
    }

    public static int ReadByte(int pid, ulong addr)
    {
        IntPtr h = Open(pid, false);
        try
        {
            byte[] b = new byte[1];
            UIntPtr got;
            if (!ReadProcessMemory(h, addr, b, (UIntPtr)1, out got)) throw new Exception("RPM failed: " + Marshal.GetLastWin32Error());
            return b[0];
        }
        finally { CloseHandle(h); }
    }

    public static void Write(int pid, ulong addr, byte[] data)
    {
        IntPtr h = Open(pid, true);
        try
        {
            UIntPtr got;
            if (!WriteProcessMemory(h, addr, data, (UIntPtr)(uint)data.Length, out got) || (uint)got != (uint)data.Length)
                throw new Exception("WPM failed: " + Marshal.GetLastWin32Error());
        }
        finally { CloseHandle(h); }
    }
}
'@
}

$image = [Convert]::ToUInt64(($Base -replace '^0x', ''), 16)
$rageRva = [uint64]0xCAD2E0
$fireRva = [uint64]0xC7E1F0

$rageBefore = [RageSeed]::ReadInt($ProcessId, $image + $rageRva)
$fireBefore = [RageSeed]::ReadByte($ProcessId, $image + $fireRva)
Write-Output ("[rage] base 0x{0:X}  master={1}  autofire={2}" -f $image, $rageBefore, $fireBefore)

if ($rageBefore -ne 1) {
    [RageSeed]::Write($ProcessId, $image + $rageRva, [BitConverter]::GetBytes([int]1))
}
if ($fireBefore -ne 1) {
    [RageSeed]::Write($ProcessId, $image + $fireRva, [byte[]]@(1))
}

Start-Sleep -Milliseconds 250
$rageAfter = [RageSeed]::ReadInt($ProcessId, $image + $rageRva)
$fireAfter = [RageSeed]::ReadByte($ProcessId, $image + $fireRva)
Write-Output ("[rage] read back  master={0}  autofire={1}" -f $rageAfter, $fireAfter)

if ($rageAfter -eq 1 -and $fireAfter -eq 1) {
    Write-Output '[rage] seeded: the aim path no longer bails on rage_inactive'
} else {
    Write-Output '[rage] refused: the runtime rewrote the flags - config is overriding them'
    exit 1
}
