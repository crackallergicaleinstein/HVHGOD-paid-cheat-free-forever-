// iatfix.cpp - resolve import slots a manual mapper could not fill.
//
// XMap maps the payload by hand and resolves imports from modules already
// loaded in cs2. Anything owned by a module the game loads later (d2d1.dll is
// the one that bites us) stays 0xFFFFFFFFFFFFFFFF, and the first call through
// that slot faults - which is exactly what the Configs tab does:
//
//   hvhgod-cheat.dll+0x1CD1BC   call qword ptr [0x180665888]   ; d2d1!Ordinal1
//
// This tool loads the missing modules into the target and rewrites every
// unresolved slot with a real address.
//
//   iatfix.exe <pid> <imageBaseHex> <payload.dll>
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <tlhelp32.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

#pragma comment(lib, "user32.lib")

static uint32_t Rd32(const uint8_t* p) { return *reinterpret_cast<const uint32_t*>(p); }
static uint16_t Rd16(const uint8_t* p) { return *reinterpret_cast<const uint16_t*>(p); }

struct Rmt {
    HANDLE h = nullptr;
    bool   ok(HANDLE p) { h = p; return h != nullptr; }
    bool   rd(uint64_t addr, void* out, size_t n) {
        SIZE_T got = 0;
        return ReadProcessMemory(h, reinterpret_cast<LPCVOID>(addr), out, n, &got) && got == n;
    }
    bool   wr(uint64_t addr, const void* in, size_t n) {
        SIZE_T put = 0;
        return WriteProcessMemory(h, reinterpret_cast<LPVOID>(addr), in, n, &put) && put == n;
    }
};

static uint64_t ModuleBase(HANDLE snap, const wchar_t* name) {
    MODULEENTRY32W me{}; me.dwSize = sizeof(me);
    if (!Module32FirstW(snap, &me)) return 0;
    do {
        if (!_wcsicmp(me.szModule, name)) return reinterpret_cast<uint64_t>(me.modBaseAddr);
    } while (Module32NextW(snap, &me));
    return 0;
}

// Load a DLL inside the target and return its base address there.
static uint64_t RemoteLoadLibrary(HANDLE proc, const wchar_t* dll) {
    size_t bytes = (wcslen(dll) + 1) * sizeof(wchar_t);
    void* remote = VirtualAllocEx(proc, nullptr, bytes, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!remote) return 0;
    if (!WriteProcessMemory(proc, remote, dll, bytes, nullptr)) {
        VirtualFreeEx(proc, remote, 0, MEM_RELEASE);
        return 0;
    }
    HMODULE k32 = GetModuleHandleW(L"kernel32.dll");
    auto load = reinterpret_cast<LPTHREAD_START_ROUTINE>(GetProcAddress(k32, "LoadLibraryW"));
    HANDLE th = CreateRemoteThread(proc, nullptr, 0, load, remote, 0, nullptr);
    uint64_t base = 0;
    if (th) {
        WaitForSingleObject(th, 15000);
        DWORD code = 0;
        GetExitCodeThread(th, &code);
        base = code;
        CloseHandle(th);
    }
    VirtualFreeEx(proc, remote, 0, MEM_RELEASE);
    return base;
}

// Resolve an export RVA by parsing a PE file on disk. No loader, no
// GetProcAddress: those depend on the local process and answer differently.
static uint32_t ExportRva(const std::vector<uint8_t>& d, const char* fn) {
    if (d.size() < 0x200) return 0;
    const uint8_t* pe = d.data();
    uint32_t lfanew = Rd32(pe + 0x3C);
    if (lfanew + 24 >= d.size()) return 0;
    uint16_t magic = Rd16(pe + lfanew + 24);
    uint32_t dd = lfanew + 24 + (magic == 0x20B ? 112 : 96);
    uint32_t expRva = Rd32(pe + dd);
    if (!expRva) return 0;

    uint16_t numSec = Rd16(pe + lfanew + 6);
    uint16_t optSize = Rd16(pe + lfanew + 20);
    uint32_t secStart = lfanew + 24 + optSize;
    struct S { uint32_t va, vs, raw, rs; };
    std::vector<S> secs;
    for (uint16_t i = 0; i < numSec; i++) {
        const uint8_t* s = pe + secStart + i * 40u;
        secs.push_back({ Rd32(s + 12), Rd32(s + 8), Rd32(s + 20), Rd32(s + 16) });
    }
    auto off = [&](uint32_t rva) -> uint32_t {
        for (const auto& s : secs) {
            uint32_t span = s.vs > s.rs ? s.vs : s.rs;
            if (rva >= s.va && rva < s.va + span) return rva - s.va + s.raw;
        }
        return 0;
    };
    uint32_t eo = off(expRva);
    if (!eo || eo + 40 >= d.size()) return 0;
    uint32_t nNames = Rd32(pe + eo + 24);
    uint32_t rvaFuncs = Rd32(pe + eo + 28);
    uint32_t rvaNames = Rd32(pe + eo + 32);
    uint32_t rvaOrds  = Rd32(pe + eo + 36);
    uint32_t fo = off(rvaFuncs), no = off(rvaNames), oo = off(rvaOrds);
    if (!fo || !no || !oo) return 0;
    for (uint32_t i = 0; i < nNames && i < 10000; i++) {
        uint32_t nameRva = Rd32(pe + no + i * 4);
        uint32_t nameOff = off(nameRva);
        if (!nameOff) continue;
        const char* nm = reinterpret_cast<const char*>(pe + nameOff);
        if (strcmp(nm, fn) == 0) {
            uint16_t ord = Rd16(pe + oo + i * 2u);
            return Rd32(pe + fo + ord * 4u);
        }
    }
    return 0;
}

static bool ReadFileBytes(const wchar_t* path, std::vector<uint8_t>& out) {
    FILE* f = nullptr;
    if (_wfopen_s(&f, path, L"rb") != 0 || !f) return false;
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    fseek(f, 0, SEEK_SET);
    out.resize(static_cast<size_t>(n));
    size_t got = fread(out.data(), 1, out.size(), f);
    fclose(f);
    return got == out.size();
}

int wmain(int argc, wchar_t** argv) {
    // wipe <pid> <baseHex> - drop the DOS magic so a memory scanner looking for
    // an MZ header does not find this image. e_lfanew at +0x3C and the NT header
    // stay intact, because the runtime reads its own headers during init.
    if (argc >= 4 && !wcscmp(argv[1], L"wipe")) {
        DWORD wpid = static_cast<DWORD>(_wtoi(argv[2]));
        uint64_t wbase = _wcstoui64(argv[3], nullptr, 16);
        HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, wpid);
        if (!h) { wprintf(L"open failed %lu\n", GetLastError()); return 4; }
        uint16_t zero = 0;
        DWORD old = 0;
        BOOL prot = VirtualProtectEx(h, reinterpret_cast<LPVOID>(wbase), 0x1000,
                                     PAGE_READWRITE, &old);
        SIZE_T put = 0;
        BOOL okw = WriteProcessMemory(h, reinterpret_cast<LPVOID>(wbase), &zero, 2, &put);
        if (prot) VirtualProtectEx(h, reinterpret_cast<LPVOID>(wbase), 0x1000, old, &old);
        CloseHandle(h);
        wprintf(L"wipe: MZ %s\n", okw ? L"cleared" : L"failed");
        return okw ? 0 : 1;
    }
    if (argc < 4) {
        wprintf(L"usage: iatfix <pid> <imageBaseHex> <payload.dll>\n");
        return 2;
    }
    DWORD pid = static_cast<DWORD>(_wtoi(argv[1]));
    uint64_t base = _wcstoui64(argv[2], nullptr, 16);
    const wchar_t* imagePath = argv[3];
    bool force = (argc > 4 && !wcscmp(argv[4], L"--force"));

    FILE* f = nullptr;
    if (_wfopen_s(&f, imagePath, L"rb") != 0 || !f) { wprintf(L"cannot open %ls\n", imagePath); return 3; }
    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    fseek(f, 0, SEEK_SET);
    std::vector<uint8_t> img(static_cast<size_t>(len));
    if (fread(img.data(), 1, img.size(), f) != img.size()) { fclose(f); return 3; }
    fclose(f);

    const uint8_t* pe = img.data();
    uint32_t e_lfanew = Rd32(pe + 0x3C);
    uint16_t optMagic = Rd16(pe + e_lfanew + 24);
    if (optMagic != 0x20B && optMagic != 0x10B) { wprintf(L"not a PE\n"); return 3; }
    uint32_t ddOff = e_lfanew + 24 + (optMagic == 0x20B ? 112 : 96);
    uint32_t importRva = Rd32(pe + ddOff + 8);      // DataDirectory[1]
    if (!importRva) { wprintf(L"no import directory\n"); return 0; }

    // Descriptor fields are RVAs; the file is not mapped at its image base, so
    // every RVA has to go through the section table before it is dereferenced.
    uint16_t numSec  = Rd16(pe + e_lfanew + 6);
    uint16_t optSize = Rd16(pe + e_lfanew + 20);
    uint32_t secStart = e_lfanew + 24 + optSize;
    struct Sec { uint32_t va, vsize, raw, rsize; };
    std::vector<Sec> secs;
    for (uint16_t i = 0; i < numSec; i++) {
        const uint8_t* s = pe + secStart + i * 40u;
        secs.push_back({ Rd32(s + 12), Rd32(s + 8), Rd32(s + 20), Rd32(s + 16) });
    }
    auto RvaOff = [&](uint32_t rva) -> uint32_t {
        for (const auto& s : secs) {
            uint32_t span = s.vsize > s.rsize ? s.vsize : s.rsize;
            if (rva >= s.va && rva < s.va + span) return rva - s.va + s.raw;
        }
        return 0;
    };

    HANDLE proc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (!proc) { wprintf(L"OpenProcess failed: %lu\n", GetLastError()); return 4; }
    Rmt m; m.ok(proc);
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid);

    int fixed = 0, already = 0;
    for (uint32_t d = 0;; d++) {
        const uint8_t* desc = pe + RvaOff(importRva + d * 20u);
        uint32_t oft = Rd32(desc + 0);
        uint32_t nameRva = Rd32(desc + 12);
        uint32_t ft = Rd32(desc + 16);
        if (!nameRva || !ft) break;
        const char* dllName = reinterpret_cast<const char*>(pe + RvaOff(nameRva));

        wchar_t wide[260];
        MultiByteToWideChar(CP_ACP, 0, dllName, -1, wide, 260);

        uint64_t modBase = snap ? ModuleBase(snap, wide) : 0;
        if (!modBase) {
            modBase = RemoteLoadLibrary(proc, wide);
            if (!modBase) { wprintf(L"  %-22ls  load failed\n", wide); continue; }
            wprintf(L"  %-22ls  loaded at 0x%llX\n", wide, modBase);
        }

        // local copy of the same file gives us export RVAs
        HMODULE local = LoadLibraryW(wide);
        uint64_t localBase = reinterpret_cast<uint64_t>(local);

        for (uint32_t i = 0;; i++) {
            uint64_t oftVal = 0, ftVal = 0;
            if (oft) m.rd(base + oft + static_cast<uint64_t>(i) * 8, &oftVal, 8);
            m.rd(base + ft + static_cast<uint64_t>(i) * 8, &ftVal, 8);
            if (!oftVal && !ftVal) break;

            uint64_t slotAddr = base + ft + static_cast<uint64_t>(i) * 8;
            uint64_t current = 0;
            m.rd(slotAddr, &current, 8);
            if (!force && current != 0xFFFFFFFFFFFFFFFFull && current != 0) { already++; continue; }

            uint64_t target = 0;
            if (local && (oftVal & 0x80000000u)) {
                uint32_t ord = static_cast<uint32_t>(oftVal & 0xFFFF);
                FARPROC p = GetProcAddress(local, reinterpret_cast<LPCSTR>(static_cast<uintptr_t>(ord)));
                if (!p) {
                    // Ordinal-only imports cannot be looked up by number when the
                    // export table is name-indexed. d2d1!1 is D2D1CreateFactory,
                    // the first entry of its .def, and the only ordinal import
                    // in this image.
                    if (!_wcsicmp(wide, L"d2d1.dll") && ord == 1)
                        p = GetProcAddress(local, "D2D1CreateFactory");
                }
                if (p) target = modBase + (reinterpret_cast<uint64_t>(p) - localBase);
                wprintf(L"  %-22ls  ordinal %u%s -> 0x%llX\n", wide, ord,
                        p ? L"" : L" (unsolved)", target);
            } else if (local && oftVal) {
                // oftVal is an RVA into the image's hint/name table
                const uint8_t* hn = pe + RvaOff(static_cast<uint32_t>(oftVal & 0x7FFFFFFF));
                const char* fn = reinterpret_cast<const char*>(hn + 2);
                FARPROC p = GetProcAddress(local, fn);
                if (p) target = modBase + (reinterpret_cast<uint64_t>(p) - localBase);
                wprintf(L"  %-22ls  %-30hs -> 0x%llX\n", wide, fn, target);
            }

            // Belt and braces: d2d1's single import slot is the first thunk and
            // it is D2D1CreateFactory. Resolve it from the on-disk export table
            // so it does not depend on how the local loader answers.
            if (!target && !_wcsicmp(wide, L"d2d1.dll") && i == 0) {
                wchar_t sys[MAX_PATH]{};
                GetSystemDirectoryW(sys, MAX_PATH);
                std::wstring path = std::wstring(sys) + L"\\d2d1.dll";
                std::vector<uint8_t> bytes;
                if (ReadFileBytes(path.c_str(), bytes)) {
                    uint32_t rva = ExportRva(bytes, "D2D1CreateFactory");
                    if (rva) target = modBase + rva;
                    wprintf(L"  %-22ls  D2D1CreateFactory rva 0x%X -> 0x%llX\n", wide, rva, target);
                }
            }

            if (target) {
                // The mapped image is RX; an unprotected WriteProcessMemory on
                // the IAT fails silently with ERROR_NOACCESS.
                DWORD old = 0;
                uint64_t page = slotAddr & ~0xFFFull;
                BOOL prot = VirtualProtectEx(proc, reinterpret_cast<LPVOID>(page), 0x1000,
                                             PAGE_READWRITE, &old);
                bool wrote = m.wr(slotAddr, &target, 8);
                if (prot) VirtualProtectEx(proc, reinterpret_cast<LPVOID>(page), 0x1000, old, &old);
                if (wrote) {
                    fixed++;
                    uint64_t back = 0;
                    m.rd(slotAddr, &back, 8);
                    if (back != target) wprintf(L"  verify mismatch at 0x%llX\n", slotAddr);
                } else {
                    wprintf(L"  write failed at 0x%llX err=%lu\n", slotAddr, GetLastError());
                }
            } else {
                wprintf(L"  %-22ls  unresolved slot at 0x%llX\n", wide, slotAddr);
            }
        }
        if (local) FreeLibrary(local);
    }

    if (snap) CloseHandle(snap);
    CloseHandle(proc);
    wprintf(L"iatfix: %d slots repaired, %d already resolved\n", fixed, already);
    return 0;
}
