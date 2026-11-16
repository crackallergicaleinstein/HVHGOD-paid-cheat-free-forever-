// XMap - in-process manual mapper. Same pipeline as _loader\xload.cpp:
// sections, base relocations, imports, exception table, TLS callbacks, entry.
// Runs inside the calling assembly so the map uses the caller's token instead
// of a spawned child process.
using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using System.Text;

public static class XMap
{
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr OpenProcess(uint access, bool inherit, int pid);
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr VirtualAllocEx(IntPtr h, IntPtr addr, UIntPtr size, uint type, uint protect);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool VirtualProtectEx(IntPtr h, IntPtr addr, UIntPtr size, uint protect, out uint old);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool WriteProcessMemory(IntPtr h, IntPtr addr, byte[] buf, UIntPtr size, out UIntPtr done);
    [DllImport("kernel32.dll", SetLastError = true)] static extern bool ReadProcessMemory(IntPtr h, IntPtr addr, byte[] buf, UIntPtr size, out UIntPtr done);
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr CreateRemoteThread(IntPtr h, IntPtr attr, UIntPtr stack, IntPtr start, IntPtr param, uint flags, out uint tid);
    [DllImport("kernel32.dll")] static extern uint WaitForSingleObject(IntPtr h, uint ms);
    [DllImport("kernel32.dll")] static extern bool CloseHandle(IntPtr h);
    [DllImport("kernel32.dll", CharSet = CharSet.Ansi)] static extern IntPtr LoadLibraryA(string name);
    [DllImport("kernel32.dll", CharSet = CharSet.Ansi)] static extern IntPtr GetProcAddress(IntPtr mod, string name);
    [DllImport("kernel32.dll", EntryPoint = "GetProcAddress")] static extern IntPtr GetProcAddressOrd(IntPtr mod, IntPtr ordinal);
    [DllImport("kernel32.dll", CharSet = CharSet.Ansi)] static extern IntPtr GetModuleHandleA(string name);

    const uint PROCESS_ALL = 0x1F0FFF;
    const uint MIN_RIGHTS = 0x0008 | 0x0010 | 0x0020 | 0x0002 | 0x0400;

    static IntPtr H;
    static readonly StringBuilder Log = new StringBuilder();
    static void W(string s) { Log.AppendLine(s); }

    static bool WPM(IntPtr at, byte[] data, int len)
    {
        UIntPtr done;
        return WriteProcessMemory(H, at, data, (UIntPtr)(uint)len, out done);
    }

    static bool WPM64(IntPtr at, ulong value)
    {
        byte[] b = BitConverter.GetBytes(value);
        return WPM(at, b, 8);
    }

    static bool RPM(IntPtr at, byte[] buf, int len)
    {
        UIntPtr done;
        return ReadProcessMemory(H, at, buf, (UIntPtr)(uint)len, out done);
    }

    static int RvaToOff(byte[] raw, int nsec, int secOff, uint rva)
    {
        for (int i = 0; i < nsec; i++)
        {
            int o = secOff + i * 40;
            uint vs = BitConverter.ToUInt32(raw, o + 8);
            uint va = BitConverter.ToUInt32(raw, o + 12);
            uint rs = BitConverter.ToUInt32(raw, o + 16);
            uint rp = BitConverter.ToUInt32(raw, o + 20);
            uint span = vs > rs ? vs : rs;
            if (rva >= va && rva < va + span)
            {
                uint d = rva - va;
                if (d >= rs) return -1;
                return (int)(rp + d);
            }
        }
        return -1;
    }

    static string Str(byte[] raw, int off)
    {
        if (off < 0 || off >= raw.Length) return null;
        int end = off;
        while (end < raw.Length && raw[end] != 0 && end < off + 256) end++;
        return Encoding.ASCII.GetString(raw, off, end - off);
    }

    static bool RunStub(byte[] code)
    {
        IntPtr mem = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)(uint)code.Length, 0x3000, 0x40);
        if (mem == IntPtr.Zero) { W("stub alloc failed: " + Marshal.GetLastWin32Error()); return false; }
        if (!WPM(mem, code, code.Length)) { W("stub write failed"); return false; }
        uint tid;
        IntPtr th = CreateRemoteThread(H, IntPtr.Zero, UIntPtr.Zero, mem, IntPtr.Zero, 0, out tid);
        if (th == IntPtr.Zero) { W("CreateRemoteThread failed: " + Marshal.GetLastWin32Error()); return false; }
        WaitForSingleObject(th, 20000);
        CloseHandle(th);
        return true;
    }

    // ---- module list linkage ----------------------------------------------
    // Adds an LDR_DATA_TABLE_ENTRY for the mapped image to the target's three
    // PEB module lists, so loader-level address lookups can find it.
    [DllImport("ntdll.dll")] static extern int NtQueryInformationProcess(IntPtr h, int cls, byte[] buf, int len, out int ret);

    static bool InsertTail(IntPtr h, ulong listHead, ulong nodeLinks)
    {
        byte[] head = new byte[16];
        UIntPtr got;
        if (!ReadProcessMemory(h, (IntPtr)(long)listHead, head, (UIntPtr)16, out got)) return false;
        ulong blink = BitConverter.ToUInt64(head, 8);
        byte[] node = new byte[16];
        BitConverter.GetBytes(listHead).CopyTo(node, 0);
        BitConverter.GetBytes(blink).CopyTo(node, 8);
        if (!WPM((IntPtr)(long)nodeLinks, node, 16)) return false;
        byte[] p = BitConverter.GetBytes(nodeLinks);
        if (!WPM((IntPtr)(long)blink, p, 8)) return false;
        if (!WPM((IntPtr)(long)(listHead + 8), p, 8)) return false;
        return true;
    }

    static string LinkModule(IntPtr h, ulong bas, byte[] raw, ulong preferred, uint imageSize, uint entryRva, string path)
    {
        byte[] pbi = new byte[48];
        int ret;
        if (NtQueryInformationProcess(h, 0, pbi, pbi.Length, out ret) < 0) return "NtQueryInformationProcess failed";
        ulong peb = BitConverter.ToUInt64(pbi, 8);
        if (peb == 0) return "no PEB";
        byte[] buf = new byte[8];
        UIntPtr got;
        if (!ReadProcessMemory(h, (IntPtr)(long)(peb + 0x18), buf, (UIntPtr)8, out got)) return "Ldr read failed";
        ulong ldr = BitConverter.ToUInt64(buf, 0);
        if (ldr == 0) return "no Ldr";

        IntPtr block = VirtualAllocEx(h, IntPtr.Zero, (UIntPtr)0x400, 0x3000, 0x04);
        if (block == IntPtr.Zero) return "entry alloc failed";
        ulong entry = (ulong)block.ToInt64();
        ulong fullBuf = entry + 0x200, baseBuf = entry + 0x300;

        string full = path;
        string name = path.Substring(path.LastIndexOf('\\') + 1);
        byte[] fw = Encoding.Unicode.GetBytes(full);
        byte[] nw = Encoding.Unicode.GetBytes(name);
        WPM((IntPtr)(long)fullBuf, fw, fw.Length);
        WPM((IntPtr)(long)baseBuf, nw, nw.Length);

        byte[] me = new byte[0x90];
        BitConverter.GetBytes(bas).CopyTo(me, 0x30);
        BitConverter.GetBytes(bas + entryRva).CopyTo(me, 0x38);
        BitConverter.GetBytes(imageSize).CopyTo(me, 0x40);
        BitConverter.GetBytes((ushort)(fw.Length)).CopyTo(me, 0x48);
        BitConverter.GetBytes((ushort)(fw.Length + 2)).CopyTo(me, 0x4A);
        BitConverter.GetBytes(fullBuf).CopyTo(me, 0x50);
        BitConverter.GetBytes((ushort)nw.Length).CopyTo(me, 0x58);
        BitConverter.GetBytes((ushort)(nw.Length + 2)).CopyTo(me, 0x5A);
        BitConverter.GetBytes(baseBuf).CopyTo(me, 0x60);
        BitConverter.GetBytes(0x00000004).CopyTo(me, 0x68);
        WPM((IntPtr)(long)entry, me, me.Length);

        bool a = InsertTail(h, ldr + 0x10, entry + 0x00);
        bool b = InsertTail(h, ldr + 0x20, entry + 0x10);
        bool c = InsertTail(h, ldr + 0x30, entry + 0x20);
        return "linked load=" + (a ? 1 : 0) + " mem=" + (b ? 1 : 0) + " init=" + (c ? 1 : 0);
    }

    // Shared section + vectored handler installed in the target. The handler
    // records fault code and address into the section, so the record survives
    // the target's death. Section layout: +0 addr(u64), +8 code(u32), +12 hit(u32)
    [DllImport("kernel32.dll", CharSet = CharSet.Ansi, SetLastError = true)]
    static extern IntPtr CreateFileMappingA(IntPtr file, IntPtr attr, uint protect, uint hi, uint lo, string name);
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr MapViewOfFile(IntPtr map, uint access, uint hi, uint lo, UIntPtr size);
    [DllImport("kernel32.dll")] static extern bool UnmapViewOfFile(IntPtr view);

    static IntPtr watchView = IntPtr.Zero;

    // ---- per-thread TLS sweep ---------------------------------------------
    // Windows zero-fills a new TLS slot for every thread, so threads the image
    // creates later see a null block. Walk the target's threads and point each
    // thread's TLS array entry at the initialised block.
    [StructLayout(LayoutKind.Sequential)]
    struct TBI
    {
        public int ExitStatus;
        public IntPtr TebBaseAddress;
        public IntPtr UniqueProcessId;
        public IntPtr UniqueThreadId;
        public IntPtr AffinityMask;
        public int Priority;
        public int BasePriority;
    }
    [StructLayout(LayoutKind.Sequential)]
    struct TE32
    {
        public uint dwSize, cntUsage, th32ThreadID, th32OwnerProcessID;
        public int tpBasePri, tpDeltaPri;
        public uint dwFlags;
    }
    [DllImport("ntdll.dll")] static extern int NtQueryInformationThread(IntPtr t, int cls, ref TBI info, int len, out int ret);
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr OpenThread(uint access, bool inherit, uint tid);
    [DllImport("kernel32.dll", SetLastError = true)] static extern IntPtr CreateToolhelp32Snapshot(uint flags, uint pid);
    [DllImport("kernel32.dll")] static extern bool Thread32First(IntPtr snap, ref TE32 e);
    [DllImport("kernel32.dll")] static extern bool Thread32Next(IntPtr snap, ref TE32 e);

    static int sweptCount;

    // Runs the sweep on a background thread inside the host process, so the
    // window between a thread starting and its TLS slot being filled is a few
    // milliseconds instead of a PowerShell sleep.
    public static string StartSweeper(int pid, uint slot, string blockHex, int intervalMs)
    {
        ulong block = Convert.ToUInt64(blockHex, 16);
        var th = new System.Threading.Thread(() =>
        {
            while (true)
            {
                try
                {
                    if (System.Diagnostics.Process.GetProcessById(pid) == null) break;
                }
                catch { break; }
                try { TlsSweep(pid, slot, blockHex); } catch { }
                System.Threading.Thread.Sleep(intervalMs);
            }
            _ = block;
        });
        th.IsBackground = true;
        th.Priority = System.Threading.ThreadPriority.AboveNormal;
        th.Start();
        return "sweeper thread started (" + intervalMs + " ms)";
    }


    public static string TlsSweep(int pid, uint slot, string blockHex)
    {
        IntPtr h = OpenProcess(PROCESS_ALL, false, pid);
        if (h == IntPtr.Zero) h = OpenProcess(MIN_RIGHTS, false, pid);
        if (h == IntPtr.Zero) return "open failed";
        ulong block = Convert.ToUInt64(blockHex, 16);
        IntPtr snap = CreateToolhelp32Snapshot(4, (uint)pid);
        if (snap == (IntPtr)(-1)) { CloseHandle(h); return "snapshot failed"; }
        var te = new TE32();
        te.dwSize = (uint)Marshal.SizeOf(typeof(TE32));
        int touched = 0;
        UIntPtr got;
        if (Thread32First(snap, ref te))
        {
            do
            {
                if (te.th32OwnerProcessID != (uint)pid) continue;
                IntPtr th = OpenThread(0x0040, false, te.th32ThreadID);
                if (th == IntPtr.Zero) continue;
                var tbi = new TBI();
                int ret;
                if (NtQueryInformationThread(th, 0, ref tbi, Marshal.SizeOf(typeof(TBI)), out ret) == 0)
                {
                    ulong teb = (ulong)tbi.TebBaseAddress.ToInt64();
                    byte[] arrBuf = new byte[8];
                    if (ReadProcessMemory(h, (IntPtr)(long)(teb + 0x58), arrBuf, (UIntPtr)8, out got))
                    {
                        ulong arr = BitConverter.ToUInt64(arrBuf, 0);
                        if (arr != 0)
                        {
                            byte[] cur = new byte[8];
                            if (ReadProcessMemory(h, (IntPtr)(long)(arr + slot * 8), cur, (UIntPtr)8, out got)
                                && BitConverter.ToUInt64(cur, 0) == 0)
                            {
                                byte[] p = BitConverter.GetBytes(block);
                                if (WriteProcessMemory(h, (IntPtr)(long)(arr + slot * 8), p, (UIntPtr)8, out got))
                                    touched++;
                            }
                        }
                    }
                }
                CloseHandle(th);
            } while (Thread32Next(snap, ref te));
        }
        CloseHandle(snap);
        CloseHandle(h);
        sweptCount += touched;
        return "touched=" + touched + " total=" + sweptCount;
    }

    const string watchName = "Local\\xdwatch";

    public static string ArmWatch(int pid)
    {
        H = OpenProcess(PROCESS_ALL, false, pid);
        if (H == IntPtr.Zero) H = OpenProcess(MIN_RIGHTS, false, pid);
        if (H == IntPtr.Zero) return "OpenProcess failed: " + Marshal.GetLastWin32Error();

        if (watchView != IntPtr.Zero) { UnmapViewOfFile(watchView); watchView = IntPtr.Zero; }
        IntPtr map = CreateFileMappingA((IntPtr)(-1), IntPtr.Zero, 0x04, 0, 0x1000, watchName);
        if (map == IntPtr.Zero) { CloseHandle(H); return "CreateFileMapping failed: " + Marshal.GetLastWin32Error(); }
        watchView = MapViewOfFile(map, 0xF001F, 0, 0, (UIntPtr)0x1000);
        if (watchView == IntPtr.Zero) { CloseHandle(H); return "MapViewOfFile failed"; }
        Marshal.Copy(new byte[16], 0, watchView, 16);

        byte[] nm = Encoding.ASCII.GetBytes(watchName + "\0");
        IntPtr nameMem = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)(uint)nm.Length, 0x3000, 0x04);
        if (nameMem == IntPtr.Zero) { CloseHandle(H); return "name alloc failed"; }
        WPM(nameMem, nm, nm.Length);
        IntPtr scratch = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)32, 0x3000, 0x04);
        if (scratch == IntPtr.Zero) { CloseHandle(H); return "scratch alloc failed"; }
        ulong scratchAddr = (ulong)scratch.ToInt64();

        IntPtr openMap = GetProcAddress(GetModuleHandleA("kernel32.dll"), "OpenFileMappingA");
        IntPtr mapView = GetProcAddress(GetModuleHandleA("kernel32.dll"), "MapViewOfFile");
        IntPtr addVeh = GetProcAddress(GetModuleHandleA("kernel32.dll"), "AddVectoredExceptionHandler");
        if (openMap == IntPtr.Zero || mapView == IntPtr.Zero || addVeh == IntPtr.Zero) { CloseHandle(H); return "api lookup failed"; }

        // OpenFileMappingA(FILE_MAP_WRITE, FALSE, name)
        List<byte> c1 = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
        c1.AddRange(new byte[] { 0xB9, 0x02, 0x00, 0x00, 0x00 });
        c1.AddRange(new byte[] { 0x33, 0xD2 });
        c1.AddRange(new byte[] { 0x49, 0xB8 }); c1.AddRange(BitConverter.GetBytes((ulong)nameMem.ToInt64()));
        c1.AddRange(new byte[] { 0x48, 0xB8 }); c1.AddRange(BitConverter.GetBytes((ulong)openMap.ToInt64()));
        c1.AddRange(new byte[] { 0xFF, 0xD0 });
        c1.AddRange(new byte[] { 0x48, 0xA3 }); c1.AddRange(BitConverter.GetBytes(scratchAddr));
        c1.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });
        if (!RunStub(c1.ToArray())) { CloseHandle(H); return "open call failed"; }

        byte[] hbuf = new byte[8];
        if (!RPM(scratch, hbuf, 8)) { CloseHandle(H); return "handle read failed"; }
        ulong hMap = BitConverter.ToUInt64(hbuf, 0);
        if (hMap == 0) { CloseHandle(H); return "target could not open section"; }

        // MapViewOfFile(h, FILE_MAP_WRITE, 0, 0, 0x1000)
        List<byte> c2 = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
        c2.AddRange(new byte[] { 0x48, 0xB9 }); c2.AddRange(BitConverter.GetBytes(hMap));
        c2.AddRange(new byte[] { 0xBA, 0x02, 0x00, 0x00, 0x00 });
        c2.AddRange(new byte[] { 0x45, 0x33, 0xC0, 0x45, 0x33, 0xC9 });
        c2.AddRange(new byte[] { 0x41, 0xBA, 0x00, 0x10, 0x00, 0x00 });
        c2.AddRange(new byte[] { 0x48, 0xB8 }); c2.AddRange(BitConverter.GetBytes((ulong)mapView.ToInt64()));
        c2.AddRange(new byte[] { 0xFF, 0xD0 });
        c2.AddRange(new byte[] { 0x48, 0xA3 }); c2.AddRange(BitConverter.GetBytes(scratchAddr + 8));
        c2.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });
        if (!RunStub(c2.ToArray())) { CloseHandle(H); return "map call failed"; }
        if (!RPM((IntPtr)(long)(scratchAddr + 8), hbuf, 8)) { CloseHandle(H); return "view read failed"; }
        ulong targetView = BitConverter.ToUInt64(hbuf, 0);
        if (targetView == 0) { CloseHandle(H); return "target view null"; }

        // handler writes into the shared view: +0 rip, +8 code, +12 hit, +16 rsp
        // Every store goes through rax with a full 64-bit immediate, the pattern
        // already proven to work; rcx (EXCEPTION_POINTERS) is never touched.
        var hnd = new List<byte> { 0x48, 0x83, 0xEC, 0x28 };
        hnd.AddRange(new byte[] { 0x49, 0x89, 0xCB });             // mov r11,rcx  (keep EXCEPTION_POINTERS)
        hnd.AddRange(new byte[] { 0x48, 0x8B, 0x01 });             // mov rax,[rcx]
        hnd.AddRange(new byte[] { 0x48, 0x85, 0xC0 });             // test rax,rax
        int jzAt = hnd.Count; hnd.AddRange(new byte[] { 0x0F, 0x84, 0, 0, 0, 0 });
        hnd.AddRange(new byte[] { 0x48, 0x8B, 0x50, 0x10 });       // mov rdx,[rax+0x10]  rip
        hnd.AddRange(new byte[] { 0x8B, 0x08 });                   // mov ecx,[rax]       code
        hnd.AddRange(new byte[] { 0x81, 0xF9, 0x05, 0x00, 0x00, 0xC0 });
        int jneAt = hnd.Count; hnd.AddRange(new byte[] { 0x0F, 0x85, 0, 0, 0, 0 });
        hnd.AddRange(new byte[] { 0x48, 0xB8 }); hnd.AddRange(BitConverter.GetBytes(targetView));
        hnd.AddRange(new byte[] { 0x48, 0x89, 0x10 });             // mov [view],rdx
        hnd.AddRange(new byte[] { 0x48, 0xB8 }); hnd.AddRange(BitConverter.GetBytes(targetView + 8));
        hnd.AddRange(new byte[] { 0x89, 0x08 });                   // mov [view+8],ecx
        hnd.AddRange(new byte[] { 0x48, 0xB8 }); hnd.AddRange(BitConverter.GetBytes(targetView + 12));
        hnd.AddRange(new byte[] { 0xC7, 0x00, 0x01, 0x00, 0x00, 0x00 }); // mov dword [rax],1
        // rsp from the context record (EXCEPTION_POINTERS+8, CONTEXT.Rsp at 0x98)
        hnd.AddRange(new byte[] { 0x49, 0x8B, 0x53, 0x08 });       // mov rdx,[r11+8]
        hnd.AddRange(new byte[] { 0x48, 0x8B, 0x92, 0x98, 0x00, 0x00, 0x00 }); // mov rdx,[rdx+0x98]
        hnd.AddRange(new byte[] { 0x48, 0xB8 }); hnd.AddRange(BitConverter.GetBytes(targetView + 16));
        hnd.AddRange(new byte[] { 0x48, 0x89, 0x10 });             // mov [view+16],rdx
        // six caller qwords from the faulting stack
        hnd.AddRange(new byte[] { 0x49, 0x89, 0xD0 });             // mov r8,rdx
        for (int qi = 0; qi < 6; qi++)
        {
            hnd.AddRange(new byte[] { 0x49, 0x8B, 0x90 });
            hnd.AddRange(BitConverter.GetBytes(8 * qi));           // mov rdx,[r8+disp]
            hnd.AddRange(new byte[] { 0x48, 0xB8 });
            hnd.AddRange(BitConverter.GetBytes(targetView + (ulong)(24 + 8 * qi)));
            hnd.AddRange(new byte[] { 0x48, 0x89, 0x10 });         // mov [rax],rdx
        }
        int doneAt = hnd.Count;
        hnd.AddRange(new byte[] { 0xB8, 0x01, 0x00, 0x00, 0x00 });
        hnd.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x28, 0xC3 });
        int relJz = doneAt - (jzAt + 6);
        int relJne = doneAt - (jneAt + 6);
        byte[] bjz = BitConverter.GetBytes(relJz);
        byte[] bjne = BitConverter.GetBytes(relJne);
        for (int k = 0; k < 4; k++) { hnd[jzAt + 2 + k] = bjz[k]; hnd[jneAt + 2 + k] = bjne[k]; }

        IntPtr hmem = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)(uint)hnd.Count, 0x3000, 0x40);
        if (hmem == IntPtr.Zero) { CloseHandle(H); return "handler alloc failed"; }
        WPM(hmem, hnd.ToArray(), hnd.Count);

        List<byte> call = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
        call.AddRange(new byte[] { 0x48, 0xB9 }); call.AddRange(BitConverter.GetBytes(1UL));
        call.AddRange(new byte[] { 0x48, 0xBA }); call.AddRange(BitConverter.GetBytes((ulong)hmem.ToInt64()));
        call.AddRange(new byte[] { 0x48, 0xB8 }); call.AddRange(BitConverter.GetBytes((ulong)addVeh.ToInt64()));
        call.AddRange(new byte[] { 0xFF, 0xD0 });
        call.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });
        bool ok = RunStub(call.ToArray());
        CloseHandle(H);
        return ok ? "armed view=0x" + targetView.ToString("X") : "veh call failed";
    }

    public static string ReadShared()
    {
        if (watchView == IntPtr.Zero) return "not armed";
        byte[] buf = new byte[80];
        Marshal.Copy(watchView, buf, 0, 72);
        ulong addr = BitConverter.ToUInt64(buf, 0);
        uint code = BitConverter.ToUInt32(buf, 8);
        uint hit = BitConverter.ToUInt32(buf, 12);
        ulong rsp = BitConverter.ToUInt64(buf, 16);
        if (hit == 0) return "no fault recorded";
        var sb = new StringBuilder();
        sb.Append("fault code=0x").Append(code.ToString("X8")).Append(" addr=0x").Append(addr.ToString("X"));
        sb.Append(" rsp=0x").Append(rsp.ToString("X")).Append(" frame=");
        for (int i = 0; i < 6; i++)
        {
            ulong q = BitConverter.ToUInt64(buf, 24 + 8 * i);
            sb.Append("0x").Append(q.ToString("X")).Append(' ');
        }
        return sb.ToString();
    }

    public static string Map(string path, int pid)
    {
        Log.Clear();
        byte[] raw = File.ReadAllBytes(path);
        if (raw.Length < 0x200) return "not a PE";
        int pe = BitConverter.ToInt32(raw, 0x3C);
        if (BitConverter.ToUInt32(raw, pe) != 0x00004550) return "bad NT header";
        ushort nsec = BitConverter.ToUInt16(raw, pe + 6);
        ushort optSize = BitConverter.ToUInt16(raw, pe + 20);
        int opt = pe + 24;
        if (BitConverter.ToUInt16(raw, opt) != 0x20B) return "not PE32+";
        uint entryRva = BitConverter.ToUInt32(raw, opt + 16);
        ulong preferred = BitConverter.ToUInt64(raw, opt + 24);
        uint imageSize = BitConverter.ToUInt32(raw, opt + 56);
        int secOff = opt + optSize;
        long dirBase = opt + 112;

        uint DirRva(int idx) { return BitConverter.ToUInt32(raw, (int)dirBase + idx * 8); }
        uint DirSize(int idx) { return BitConverter.ToUInt32(raw, (int)dirBase + idx * 8 + 4); }

        W("image    " + path);
        W("pref     0x" + preferred.ToString("X"));

        H = OpenProcess(PROCESS_ALL, false, pid);
        if (H == IntPtr.Zero)
        {
            H = OpenProcess(MIN_RIGHTS, false, pid);
            if (H == IntPtr.Zero) return "OpenProcess failed: " + Marshal.GetLastWin32Error();
            W("opened   minimal rights");
        }

        IntPtr remote = VirtualAllocEx(H, (IntPtr)(long)preferred, (UIntPtr)imageSize, 0x3000, 0x04);
        if (remote == IntPtr.Zero)
            remote = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)imageSize, 0x3000, 0x04);
        if (remote == IntPtr.Zero) return "VirtualAllocEx failed: " + Marshal.GetLastWin32Error();
        ulong bas = (ulong)remote.ToInt64();
        W("placed   0x" + bas.ToString("X") + (bas == preferred ? "  (preferred base)" : "  (relocated)"));

        uint hdrSize = BitConverter.ToUInt32(raw, opt + 60);
        byte[] hdr = new byte[hdrSize];
        Array.Copy(raw, hdr, hdrSize);
        WPM(remote, hdr, hdr.Length);

        for (int i = 0; i < nsec; i++)
        {
            int o = secOff + i * 40;
            uint rs = BitConverter.ToUInt32(raw, o + 16);
            uint rp = BitConverter.ToUInt32(raw, o + 20);
            uint va = BitConverter.ToUInt32(raw, o + 12);
            if (rs == 0 || rp + rs > raw.Length) continue;
            byte[] chunk = new byte[rs];
            Array.Copy(raw, rp, chunk, 0, rs);
            WPM((IntPtr)(long)(bas + va), chunk, chunk.Length);
        }

        ulong delta = bas - preferred;
        long relocs = 0;        if (delta != 0 && DirSize(5) != 0)
        {
            int off = RvaToOff(raw, nsec, secOff, DirRva(5));
            int done = 0;
            int total = (int)DirSize(5);
            while (off >= 0 && done < total && off + 8 <= raw.Length)
            {
                uint pageRva = BitConverter.ToUInt32(raw, off);
                uint blockSize = BitConverter.ToUInt32(raw, off + 4);
                if (blockSize < 8) break;
                int count = (int)((blockSize - 8) / 2);
                for (int i = 0; i < count; i++)
                {
                    int eo = off + 8 + i * 2;
                    if (eo + 2 > raw.Length) break;
                    int item = BitConverter.ToUInt16(raw, eo);
                    int type = item >> 12;
                    ulong at = bas + pageRva + (uint)(item & 0x0FFF);
                    if (type == 10)
                    {
                        byte[] cur = new byte[8];
                        if (!RPM((IntPtr)(long)at, cur, 8)) continue;
                        WPM64((IntPtr)(long)at, BitConverter.ToUInt64(cur, 0) + delta);
                        relocs++;
                    }
                    else if (type == 3)
                    {
                        byte[] cur = new byte[4];
                        if (!RPM((IntPtr)(long)at, cur, 4)) continue;
                        byte[] nb = BitConverter.GetBytes(BitConverter.ToUInt32(cur, 0) + (uint)delta);
                        WPM((IntPtr)(long)at, nb, 4);
                        relocs++;
                    }
                }
                done += (int)blockSize;
                off += (int)blockSize;
            }
        }
        W("relocs   " + relocs);

        long imports = 0;
        if (DirSize(1) != 0)
        {
            int off = RvaToOff(raw, nsec, secOff, DirRva(1));
            int slotIdx = 0;
            IntPtr lla = GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");
            IntPtr gpa = GetProcAddress(GetModuleHandleA("kernel32.dll"), "GetProcAddress");
            while (off >= 0)
            {
                int d = off + slotIdx * 20;
                if (d + 20 > raw.Length) break;
                uint nameRva = BitConverter.ToUInt32(raw, d + 12);
                uint ft = BitConverter.ToUInt32(raw, d + 16);
                uint oft = BitConverter.ToUInt32(raw, d);
                if (nameRva == 0 && ft == 0) break;
                string dll = Str(raw, RvaToOff(raw, nsec, secOff, nameRva));
                if (string.IsNullOrEmpty(dll)) { slotIdx++; continue; }

                // the name string lives in the target
                byte[] dllBytes = Encoding.ASCII.GetBytes(dll + "\0");
                IntPtr dllMem = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)(uint)dllBytes.Length, 0x3000, 0x04);
                if (dllMem == IntPtr.Zero) { slotIdx++; continue; }
                WPM(dllMem, dllBytes, dllBytes.Length);

                uint thunk = oft != 0 ? oft : ft;
                for (int k = 0; ; k++)
                {
                    int to = RvaToOff(raw, nsec, secOff, (uint)(thunk + k * 8));
                    if (to < 0 || to + 8 > raw.Length) break;
                    ulong entry = BitConverter.ToUInt64(raw, to);
                    if (entry == 0) break;
                    if ((entry & 0x8000000000000000UL) != 0) continue;   // ordinal: leave alone
                    int no = RvaToOff(raw, nsec, secOff, (uint)entry);
                    if (no < 0) continue;
                    string fn = Str(raw, no + 2);
                    if (string.IsNullOrEmpty(fn)) continue;

                    byte[] fnBytes = Encoding.ASCII.GetBytes(fn + "\0");
                    IntPtr fnMem = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)(uint)fnBytes.Length, 0x3000, 0x04);
                    if (fnMem == IntPtr.Zero) continue;
                    WPM(fnMem, fnBytes, fnBytes.Length);

                    // LoadLibraryA(dll) -> GetProcAddress(handle, fn) -> [iat] = result
                    ulong iatAddr = bas + ft + (uint)(k * 8);
                    List<byte> st = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
                    st.AddRange(new byte[] { 0x48, 0xB9 }); st.AddRange(BitConverter.GetBytes((ulong)dllMem.ToInt64()));
                    st.AddRange(new byte[] { 0x48, 0xB8 }); st.AddRange(BitConverter.GetBytes((ulong)lla.ToInt64()));
                    st.AddRange(new byte[] { 0xFF, 0xD0 });
                    st.AddRange(new byte[] { 0x48, 0x8B, 0xC8 });                       // mov rcx,rax
                    st.AddRange(new byte[] { 0x48, 0xBA }); st.AddRange(BitConverter.GetBytes((ulong)fnMem.ToInt64()));
                    st.AddRange(new byte[] { 0x48, 0xB8 }); st.AddRange(BitConverter.GetBytes((ulong)gpa.ToInt64()));
                    st.AddRange(new byte[] { 0xFF, 0xD0 });
                    st.AddRange(new byte[] { 0x48, 0xB9 }); st.AddRange(BitConverter.GetBytes(iatAddr));
                    st.AddRange(new byte[] { 0x48, 0x89, 0x01 });                       // mov [rcx],rax
                    st.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });
                    if (RunStub(st.ToArray())) imports++;
                }
                slotIdx++;
            }
        }
        W("imports  " + imports + " (resolved in target)");

        if (Environment.GetEnvironmentVariable("XMAP_LINK") == "1")
            W("module   " + LinkModule(H, bas, raw, preferred, imageSize, entryRva, path));

        uint excRva = DirRva(3), excSize = DirSize(3);
        uint funcCount = excSize / 12;
        IntPtr rtlAdd = GetProcAddress(GetModuleHandleA("kernel32.dll"), "RtlAddFunctionTable");

        List<ulong> cbs = new List<ulong>();
        ulong tlsIndexVa = 0, tlsStartVa = 0, tlsEndVa = 0;
        if (DirSize(9) != 0)
        {
            int to = RvaToOff(raw, nsec, secOff, DirRva(9));
            if (to >= 0 && to + 40 <= raw.Length)
            {
                tlsStartVa = BitConverter.ToUInt64(raw, to);
                tlsEndVa = BitConverter.ToUInt64(raw, to + 8);
                tlsIndexVa = BitConverter.ToUInt64(raw, to + 16);
                ulong cbAddr = BitConverter.ToUInt64(raw, to + 24);
                if (cbAddr != 0)
                {
                    uint arrRva = (uint)(cbAddr - preferred);
                    int ao = RvaToOff(raw, nsec, secOff, arrRva);
                    // the array can sit a few qwords into the referenced address;
                    // scan forward for the first pointer that lands inside the image
                    for (int k = 0; ao >= 0 && k < 16 && ao + 8 * (k + 1) <= raw.Length; k++)
                    {
                        ulong cb = BitConverter.ToUInt64(raw, ao + k * 8);
                        if (cb == 0) continue;
                        if (cb >= preferred && cb < preferred + imageSize)
                            cbs.Add(bas + (cb - preferred));
                        else if (cbs.Count > 0)
                            break;
                    }
                }
            }
        }
        W("tls      " + cbs.Count + " callbacks  pdata " + funcCount);

        IntPtr report = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)64, 0x3000, 0x04);
        ulong reportAddr = report == IntPtr.Zero ? 0 : (ulong)report.ToInt64();

        // bind a TLS index into the image directory, then give the calling thread
        // an initialised TLS block so thread-local reads do not hit a null slot
        uint tlsSlot = 0;
        ulong tlsBlock = 0;
        if (tlsIndexVa != 0 && reportAddr != 0)
        {
            IntPtr tlsAlloc = GetProcAddress(GetModuleHandleA("kernel32.dll"), "TlsAlloc");
            if (tlsAlloc != IntPtr.Zero)
            {
                List<byte> t = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
                t.AddRange(new byte[] { 0x48, 0xB8 }); t.AddRange(BitConverter.GetBytes((ulong)tlsAlloc.ToInt64()));
                t.AddRange(new byte[] { 0xFF, 0xD0 });
                t.AddRange(new byte[] { 0x48, 0xA3 }); t.AddRange(BitConverter.GetBytes(reportAddr + 8));
                t.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });
                if (RunStub(t.ToArray()))
                {
                    byte[] idx = new byte[8];
                    if (RPM((IntPtr)(long)(reportAddr + 8), idx, 8))
                    {
                        tlsSlot = BitConverter.ToUInt32(idx, 0);
                        WPM((IntPtr)(long)(bas + (tlsIndexVa - preferred)), BitConverter.GetBytes(tlsSlot), 4);
                        W("tlsindex " + tlsSlot);
                    }
                }
            }
        }

        if (tlsSlot != 0 && tlsStartVa != 0 && tlsEndVa > tlsStartVa)
        {
            int len = (int)(tlsEndVa - tlsStartVa);
            int sOff = RvaToOff(raw, nsec, secOff, (uint)(tlsStartVa - preferred));
            if (sOff >= 0 && sOff + len <= raw.Length)
            {
                IntPtr blk = VirtualAllocEx(H, IntPtr.Zero, (UIntPtr)(len + 16), 0x3000, 0x04);
                if (blk != IntPtr.Zero)
                {
                    byte[] data = new byte[len];
                    Array.Copy(raw, sOff, data, 0, len);
                    WPM(blk, data, len);
                    tlsBlock = (ulong)blk.ToInt64();
                    W("tlsblock 0x" + tlsBlock.ToString("X") + " len " + len);
                }
            }
        }

        if (funcCount != 0 && rtlAdd != IntPtr.Zero)
        {
            List<byte> c = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
            c.AddRange(new byte[] { 0x48, 0xB9 }); c.AddRange(BitConverter.GetBytes(bas + excRva));
            c.AddRange(new byte[] { 0xBA }); c.AddRange(BitConverter.GetBytes(funcCount));
            c.AddRange(new byte[] { 0x49, 0xB8 }); c.AddRange(BitConverter.GetBytes(bas));
            c.AddRange(new byte[] { 0x48, 0xB8 }); c.AddRange(BitConverter.GetBytes((ulong)rtlAdd.ToInt64()));
            c.AddRange(new byte[] { 0xFF, 0xD0 });
            if (reportAddr != 0) { c.AddRange(new byte[] { 0x48, 0xA3 }); c.AddRange(BitConverter.GetBytes(reportAddr)); }
            c.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });
            if (RunStub(c.ToArray()))
            {
                byte[] st = new byte[8];
                if (RPM((IntPtr)(long)reportAddr, st, 8))
                    W("pdata    " + (BitConverter.ToUInt64(st, 0) != 0 ? "registered" : "refused"));
            }
        }

        List<byte> e = new List<byte> { 0x48, 0x83, 0xEC, 0x48 };
        if (tlsSlot != 0 && tlsBlock != 0)
        {
            IntPtr tlsSet = GetProcAddress(GetModuleHandleA("kernel32.dll"), "TlsSetValue");
            if (tlsSet != IntPtr.Zero)
            {
                e.AddRange(new byte[] { 0xB9 }); e.AddRange(BitConverter.GetBytes(tlsSlot));   // mov ecx, slot
                e.AddRange(new byte[] { 0x48, 0xBA }); e.AddRange(BitConverter.GetBytes(tlsBlock));
                e.AddRange(new byte[] { 0x48, 0xB8 }); e.AddRange(BitConverter.GetBytes((ulong)tlsSet.ToInt64()));
                e.AddRange(new byte[] { 0xFF, 0xD0 });
            }
        }
        bool skipCbs = Environment.GetEnvironmentVariable("XMAP_NOCB") == "1";
        foreach (ulong cb in cbs)
        {
            if (skipCbs) break;
            e.AddRange(new byte[] { 0x48, 0xB9 }); e.AddRange(BitConverter.GetBytes(bas));
            e.AddRange(new byte[] { 0xBA, 0x01, 0x00, 0x00, 0x00, 0x45, 0x33, 0xC0 });
            e.AddRange(new byte[] { 0x48, 0xB8 }); e.AddRange(BitConverter.GetBytes(cb));
            e.AddRange(new byte[] { 0xFF, 0xD0 });
        }
        if (entryRva != 0)
        {
            e.AddRange(new byte[] { 0x48, 0xB9 }); e.AddRange(BitConverter.GetBytes(bas));
            e.AddRange(new byte[] { 0xBA, 0x01, 0x00, 0x00, 0x00, 0x45, 0x33, 0xC0 });
            e.AddRange(new byte[] { 0x48, 0xB8 }); e.AddRange(BitConverter.GetBytes(bas + entryRva));
            e.AddRange(new byte[] { 0xFF, 0xD0 });
        }
        e.AddRange(new byte[] { 0x48, 0x83, 0xC4, 0x48, 0xC3 });

        for (int i = 0; i < nsec; i++)
        {
            int o = secOff + i * 40;
            uint ch = BitConverter.ToUInt32(raw, o + 36);
            uint vs = BitConverter.ToUInt32(raw, o + 8);
            uint rs = BitConverter.ToUInt32(raw, o + 16);
            uint va = BitConverter.ToUInt32(raw, o + 12);
            bool exec = (ch & 0x20000000) != 0, write = (ch & 0x80000000) != 0;
            uint prot = exec && write ? 0x40u : exec ? 0x20u : write ? 0x04u : 0x02u;
            uint old;
            VirtualProtectEx(H, (IntPtr)(long)(bas + va), (UIntPtr)(vs != 0 ? vs : rs), prot, out old);
        }

        if (!RunStub(e.ToArray())) return Log + "entry stub failed";

        W("mapped   0x" + bas.ToString("X") + "  size " + imageSize);
        CloseHandle(H);
        return Log.ToString();
    }
}
