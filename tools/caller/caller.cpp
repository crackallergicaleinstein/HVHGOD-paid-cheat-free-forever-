// caller.cpp - invoke a manually mapped image's entry point.
//
// The image's entry (DllMainCRTStartup) takes three arguments:
//
//   DllMain(HINSTANCE imageBase, DLL_PROCESS_ATTACH, void* handshake)
//
// The third argument is a 112-byte block the runtime reads to bind itself to the
// process that mapped it:
//
//   0x00  32  launch key (random)
//   0x20  32  SHA-256 of the executable bytes as they sit in the target
//   0x40  32  SHA-256 of the image file
//   0x60   4  target process id
//   0x64   4  magic 826822732
//   0x68   8  handle to the target process, duplicated into itself
//
// This tool builds that block, writes a tiny stub that calls the entry with it,
// and runs the stub on a remote thread.
//
//   caller.exe <pid> <imageBaseHex> <entryRvaHex> <image.dll>
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <bcrypt.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

#pragma comment(lib, "bcrypt.lib")

static uint32_t Rd32(const uint8_t* p) { return *reinterpret_cast<const uint32_t*>(p); }
static uint16_t Rd16(const uint8_t* p) { return *reinterpret_cast<const uint16_t*>(p); }

struct Section { uint32_t va, vsize, rawSize, rawPtr, chars; };

struct PeInfo {
    uint32_t sizeOfHeaders = 0;
    std::vector<Section> sections;
};

static bool ParsePe(const std::vector<uint8_t>& img, PeInfo& out) {
    if (img.size() < 0x200) return false;
    const uint8_t* p = img.data();
    uint32_t lfanew = Rd32(p + 0x3C);
    if (lfanew + 0x100 > img.size()) return false;
    uint16_t magic = Rd16(p + lfanew + 24);
    if (magic != 0x20B && magic != 0x10B) return false;
    uint16_t numSec = Rd16(p + lfanew + 6);
    uint16_t optSize = Rd16(p + lfanew + 20);
    uint32_t opt = lfanew + 24;
    out.sizeOfHeaders = Rd32(p + opt + 60);
    uint32_t secStart = opt + optSize;
    for (uint16_t i = 0; i < numSec; i++) {
        const uint8_t* s = p + secStart + i * 40u;
        out.sections.push_back({ Rd32(s + 12), Rd32(s + 8), Rd32(s + 16), Rd32(s + 20), Rd32(s + 36) });
    }
    return true;
}

static bool Sha256(const std::vector<uint8_t>& data, uint8_t out[32]) {
    BCRYPT_ALG_HANDLE alg = nullptr;
    if (BCryptOpenAlgorithmProvider(&alg, BCRYPT_SHA256_ALGORITHM, nullptr, 0) < 0) return false;
    BCRYPT_HASH_HANDLE h = nullptr;
    bool ok = BCryptCreateHash(alg, &h, nullptr, 0, nullptr, 0, 0) >= 0 &&
              BCryptHashData(h, const_cast<PUCHAR>(data.data()),
                             static_cast<ULONG>(data.size()), 0) >= 0 &&
              BCryptFinishHash(h, out, 32, 0) >= 0;
    if (h) BCryptDestroyHash(h);
    BCryptCloseAlgorithmProvider(alg, 0);
    return ok;
}

// Executable bytes as they exist in the target: headers plus every section
// flagged IMAGE_SCN_MEM_EXECUTE, in mapping order.
static std::vector<uint8_t> RemoteCodeBytes(HANDLE proc, uint64_t base, const PeInfo& pi) {
    std::vector<uint8_t> out;
    if (pi.sizeOfHeaders) {
        std::vector<uint8_t> hdr(pi.sizeOfHeaders);
        SIZE_T got = 0;
        if (ReadProcessMemory(proc, reinterpret_cast<LPCVOID>(base), hdr.data(), hdr.size(), &got))
            out.insert(out.end(), hdr.begin(), hdr.end());
    }
    for (const auto& s : pi.sections) {
        if ((s.chars & 0x20000000u) == 0 || s.vsize == 0) continue;
        std::vector<uint8_t> sb(s.vsize);
        SIZE_T got = 0;
        if (ReadProcessMemory(proc, reinterpret_cast<LPCVOID>(base + s.va), sb.data(), sb.size(), &got))
            out.insert(out.end(), sb.begin(), sb.begin() + got);
    }
    return out;
}

int wmain(int argc, wchar_t** argv) {
    if (argc < 5) {
        wprintf(L"usage: caller <pid> <imageBaseHex> <entryRvaHex> <image.dll>\n");
        return 2;
    }
    DWORD pid = static_cast<DWORD>(_wtoi(argv[1]));
    uint64_t imageBase = _wcstoui64(argv[2], nullptr, 16);
    uint32_t entryRva = static_cast<uint32_t>(_wcstoui64(argv[3], nullptr, 16));
    const wchar_t* imagePath = argv[4];

    FILE* f = nullptr;
    if (_wfopen_s(&f, imagePath, L"rb") != 0 || !f) { wprintf(L"cannot open %s\n", imagePath); return 3; }
    fseek(f, 0, SEEK_END);
    long len = ftell(f);
    fseek(f, 0, SEEK_SET);
    std::vector<uint8_t> image(static_cast<size_t>(len));
    if (fread(image.data(), 1, image.size(), f) != image.size()) { fclose(f); return 3; }
    fclose(f);

    PeInfo pi;
    if (!ParsePe(image, pi)) { wprintf(L"bad PE\n"); return 3; }

    HANDLE proc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
    if (!proc) { wprintf(L"OpenProcess failed: %lu\n", GetLastError()); return 4; }

    uint8_t block[112] = {};
    for (int i = 0; i < 32; i++) block[i] = static_cast<uint8_t>(rand() & 0xFF);

    std::vector<uint8_t> remote = RemoteCodeBytes(proc, imageBase, pi);
    if (!Sha256(remote, block + 32)) { wprintf(L"sha256 failed\n"); return 5; }
    if (!Sha256(image, block + 64))  { wprintf(L"sha256 failed\n"); return 5; }
    memcpy(block + 96, &pid, 4);
    uint32_t magic = 826822732u;
    memcpy(block + 100, &magic, 4);

    HANDLE dup = nullptr;
    if (!DuplicateHandle(GetCurrentProcess(), proc, proc, &dup, 0x1FFFFF, FALSE, 0)) {
        wprintf(L"DuplicateHandle failed: %lu\n", GetLastError());
        CloseHandle(proc);
        return 5;
    }
    int64_t dupVal = reinterpret_cast<int64_t>(dup);
    memcpy(block + 104, &dupVal, 8);

    void* blockAddr = VirtualAllocEx(proc, nullptr, sizeof(block), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!blockAddr) { wprintf(L"block alloc failed\n"); CloseHandle(proc); return 5; }
    WriteProcessMemory(proc, blockAddr, block, sizeof(block), nullptr);

    // sub rsp,0x28 ; mov rcx,base ; mov rdx,1 ; mov r8,block ; mov rax,entry ; call rax ; add rsp,0x28 ; ret
    uint8_t stub[51] = {
        0x48, 0x83, 0xEC, 0x28,
        0x48, 0xB9, 0,0,0,0,0,0,0,0,
        0x48, 0xBA, 1,0,0,0,0,0,0,0,
        0x49, 0xB8, 0,0,0,0,0,0,0,0,
        0x48, 0xB8, 0,0,0,0,0,0,0,0,
        0xFF, 0xD0,
        0x48, 0x83, 0xC4, 0x28,
        0xC3
    };
    uint64_t blockVal = reinterpret_cast<uint64_t>(blockAddr);
    uint64_t entryVal = imageBase + entryRva;
    memcpy(stub + 6, &imageBase, 8);
    memcpy(stub + 26, &blockVal, 8);
    memcpy(stub + 36, &entryVal, 8);

    // RW at rest, RX only to execute: an RWX page inside the game is a scanner
    // magnet, and the two extra calls cost nothing.
    void* stubAddr = VirtualAllocEx(proc, nullptr, sizeof(stub), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (!stubAddr) { wprintf(L"stub alloc failed\n"); CloseHandle(proc); return 5; }
    WriteProcessMemory(proc, stubAddr, stub, sizeof(stub), nullptr);
    DWORD stubOld = 0;
    if (!VirtualProtectEx(proc, stubAddr, sizeof(stub), PAGE_EXECUTE_READ, &stubOld)) {
        wprintf(L"stub protect failed: %lu\n", GetLastError());
        VirtualFreeEx(proc, stubAddr, 0, MEM_RELEASE);
        CloseHandle(proc);
        return 5;
    }

    HANDLE th = CreateRemoteThread(proc, nullptr, 0,
                                   reinterpret_cast<LPTHREAD_START_ROUTINE>(stubAddr),
                                   nullptr, 0, nullptr);
    if (!th) {
        wprintf(L"CreateRemoteThread failed: %lu\n", GetLastError());
        VirtualFreeEx(proc, stubAddr, 0, MEM_RELEASE);
        CloseHandle(proc);
        return 6;
    }
    DWORD wait = WaitForSingleObject(th, 20000);
    DWORD code = 0;
    GetExitCodeThread(th, &code);
    CloseHandle(th);
    VirtualFreeEx(proc, stubAddr, 0, MEM_RELEASE);   // no private executable page left behind
    wprintf(L"entry call: wait=%lu exit=0x%lX base=0x%llX pid=%lu block=0x%llX\n",
            wait, code, imageBase, GetCurrentProcessId(), blockVal);
    CloseHandle(proc);
    return 0;
}
