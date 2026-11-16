// overlay.cpp - the loading card that sits over the game while the pipeline runs.
//
// It is not decoration: the numbers come from work\progress.txt, which
// run-standalone.ps1 writes at each real stage (preflight, stage, launch,
// engine, map, imports, attach, wipe, verify). The window is layered and
// click-through, follows the game window, and closes itself at 100%.
//
//   overlay.exe <progress-file> [timeout-seconds]
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <shellapi.h>
#include <tlhelp32.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>

static const int CW = 460, CH = 132;

static void Fill(HDC dc, int x, int y, int w, int h, COLORREF c) {
    RECT r{ x, y, x + w, y + h };
    HBRUSH b = CreateSolidBrush(c);
    FillRect(dc, &r, b);
    DeleteObject(b);
}
static void Round(HDC dc, int x, int y, int w, int h, int rad, COLORREF c) {
    HBRUSH b = CreateSolidBrush(c);
    HPEN p = static_cast<HPEN>(GetStockObject(NULL_PEN));
    HGDIOBJ ob = SelectObject(dc, b), op = SelectObject(dc, p);
    RoundRect(dc, x, y, x + w, y + h, rad, rad);
    SelectObject(dc, ob);
    SelectObject(dc, op);
    DeleteObject(b);
}
static void Text(HDC dc, int x, int y, const wchar_t* s, COLORREF c, int size, int weight) {
    HFONT f = CreateFontW(size, 0, 0, 0, weight, 0, 0, 0, DEFAULT_CHARSET, 0, 0,
                          CLEARTYPE_QUALITY, 0, L"Segoe UI");
    HGDIOBJ o = SelectObject(dc, f);
    SetTextColor(dc, c);
    SetBkMode(dc, TRANSPARENT);
    TextOutW(dc, x, y, s, static_cast<int>(wcslen(s)));
    SelectObject(dc, o);
    DeleteObject(f);
}
static int TextW(HDC dc, const wchar_t* s, int size, int weight) {
    HFONT f = CreateFontW(size, 0, 0, 0, weight, 0, 0, 0, DEFAULT_CHARSET, 0, 0,
                          CLEARTYPE_QUALITY, 0, L"Segoe UI");
    HGDIOBJ o = SelectObject(dc, f);
    SIZE z{};
    GetTextExtentPoint32W(dc, s, static_cast<int>(wcslen(s)), &z);
    SelectObject(dc, o);
    DeleteObject(f);
    return z.cx;
}

static HWND FindGameWindow() {
    struct Ctx { HWND best; DWORD bestArea; } ctx{ nullptr, 0 };
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    std::vector<DWORD> pids;
    if (snap != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32W pe{}; pe.dwSize = sizeof(pe);
        if (Process32FirstW(snap, &pe)) {
            do {
                if (!_wcsicmp(pe.szExeFile, L"cs2.exe")) pids.push_back(pe.th32ProcessID);
            } while (Process32NextW(snap, &pe));
        }
        CloseHandle(snap);
    }
    if (pids.empty()) return nullptr;

    EnumWindows([](HWND h, LPARAM lp) -> BOOL {
        auto* c = reinterpret_cast<Ctx*>(lp);
        DWORD pid = 0;
        GetWindowThreadProcessId(h, &pid);
        HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        bool isCs2 = false;
        if (snap != INVALID_HANDLE_VALUE) {
            PROCESSENTRY32W pe{}; pe.dwSize = sizeof(pe);
            if (Process32FirstW(snap, &pe)) {
                do {
                    if (pe.th32ProcessID == pid && !_wcsicmp(pe.szExeFile, L"cs2.exe")) { isCs2 = true; break; }
                } while (Process32NextW(snap, &pe));
            }
            CloseHandle(snap);
        }
        if (!isCs2 || !IsWindowVisible(h)) return TRUE;
        RECT r{};
        if (!GetClientRect(h, &r)) return TRUE;
        DWORD area = static_cast<DWORD>(r.right) * static_cast<DWORD>(r.bottom);
        if (area > c->bestArea) { c->bestArea = area; c->best = h; }
        return TRUE;
    }, reinterpret_cast<LPARAM>(&ctx));
    (void)pids;
    return ctx.best;
}

struct State { int pct; std::wstring stage; bool done; };

static State ReadProgress(const std::wstring& path) {
    State s{ 0, L"starting", false };
    HANDLE h = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                           nullptr, OPEN_EXISTING, 0, nullptr);
    if (h == INVALID_HANDLE_VALUE) return s;
    char buf[512]{};
    DWORD got = 0;
    ReadFile(h, buf, sizeof(buf) - 1, &got, nullptr);
    CloseHandle(h);
    std::string a(buf, got);
    int n = MultiByteToWideChar(CP_UTF8, 0, a.data(), static_cast<int>(a.size()), nullptr, 0);
    std::wstring w(static_cast<size_t>(n), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, a.data(), static_cast<int>(a.size()), w.data(), n);
    size_t bar = w.find(L'|');
    if (bar != std::wstring::npos) {
        s.pct = _wtoi(w.substr(0, bar).c_str());
        s.stage = w.substr(bar + 1);
        while (!s.stage.empty() && (s.stage.back() == L'\n' || s.stage.back() == L'\r' ||
                                    s.stage.back() == L' ')) s.stage.pop_back();
    }
    if (s.pct < 0) s.pct = 0;
    if (s.pct > 100) s.pct = 100;
    s.done = s.pct >= 100;
    return s;
}

int WINAPI wWinMain(HINSTANCE, HINSTANCE, PWSTR, int) {
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);
    if (!argv || argc < 2) {
        if (argv) LocalFree(argv);
        return 2;
    }
    std::wstring progressPath = argv[1];
    int timeout = argc > 2 ? _wtoi(argv[2]) : 180;
    LocalFree(argv);
    DWORD start = GetTickCount();

    HDC screen = GetDC(nullptr);
    HDC mem = CreateCompatibleDC(screen);
    BITMAPINFO bi{};
    bi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bi.bmiHeader.biWidth = CW;
    bi.bmiHeader.biHeight = -CH;
    bi.bmiHeader.biPlanes = 1;
    bi.bmiHeader.biBitCount = 32;
    bi.bmiHeader.biCompression = BI_RGB;
    void* bits = nullptr;
    HBITMAP dib = CreateDIBSection(screen, &bi, DIB_RGB_COLORS, &bits, nullptr, 0);
    HGDIOBJ old = SelectObject(mem, dib);

    HWND wnd = CreateWindowExW(WS_EX_LAYERED | WS_EX_TRANSPARENT | WS_EX_TOPMOST |
                               WS_EX_TOOLWINDOW | WS_EX_NOACTIVATE,
                               L"STATIC", L"HVHGOD overlay", WS_POPUP,
                               0, 0, CW, CH, nullptr, nullptr, nullptr, nullptr);
    if (!wnd) return 3;
    ShowWindow(wnd, SW_SHOWNOACTIVATE);

    bool wasDone = false;
    while (true) {
        if (GetTickCount() - start > static_cast<DWORD>(timeout) * 1000) break;
        State st = ReadProgress(progressPath);

        Fill(mem, 0, 0, CW, CH, RGB(0, 0, 0));
        Round(mem, 0, 0, CW, CH, 18, RGB(16, 12, 26));
        Round(mem, 0, 0, CW, 3, 2, RGB(150, 90, 240));
        Text(mem, 22, 16, L"HVHGOD SLUTS", RGB(236, 230, 250), 17, FW_BOLD);
        Text(mem, CW - 22 - TextW(mem, L"initialising", 11, FW_NORMAL), 22,
             L"initialising", RGB(150, 140, 175), 11, FW_NORMAL);

        int barX = 22, barY = 72, barW = CW - 44, barH = 12;
        Round(mem, barX, barY, barW, barH, 6, RGB(38, 30, 58));
        int fillW = barW * st.pct / 100;
        if (fillW > 4) Round(mem, barX, barY, fillW, barH, 6, RGB(150, 90, 240));

        wchar_t pct[16];
        swprintf_s(pct, L"%d%%", st.pct);
        Text(mem, barX, barY + 22, st.stage.c_str(), RGB(190, 180, 210), 12, FW_NORMAL);
        Text(mem, CW - 22 - TextW(mem, pct, 13, FW_BOLD), barY + 20, pct,
             RGB(210, 190, 255), 13, FW_BOLD);

        // alpha: opaque inside the rounded card, transparent outside
        BYTE* px = static_cast<BYTE*>(bits);
        const int rad = 18;
        for (int y = 0; y < CH; y++) {
            for (int x = 0; x < CW; x++) {
                bool inside = true;
                int cx = -1, cy = -1;
                if (x < rad && y < rad) { cx = rad; cy = rad; }
                else if (x >= CW - rad && y < rad) { cx = CW - rad - 1; cy = rad; }
                else if (x < rad && y >= CH - rad) { cx = rad; cy = CH - rad - 1; }
                else if (x >= CW - rad && y >= CH - rad) { cx = CW - rad - 1; cy = CH - rad - 1; }
                if (cx >= 0) {
                    int dx = x - cx, dy = y - cy;
                    inside = (dx * dx + dy * dy) <= rad * rad;
                }
                px[(y * CW + x) * 4 + 3] = inside ? 255 : 0;
            }
        }

        // Follow the game once it owns a real window; before that (splash, or
        // no game yet) sit in the middle of the work area.
        HWND game = FindGameWindow();
        int x = 0, y = 0;
        RECT gr{};
        bool haveGame = game && GetWindowRect(game, &gr) &&
                        (gr.right - gr.left) >= 800 && (gr.bottom - gr.top) >= 600;
        if (haveGame) {
            x = gr.left + ((gr.right - gr.left) - CW) / 2;
            y = gr.top + ((gr.bottom - gr.top) - CH) / 2;
        } else {
            RECT wa{};
            SystemParametersInfoW(SPI_GETWORKAREA, 0, &wa, 0);
            x = wa.left + ((wa.right - wa.left) - CW) / 2;
            y = wa.top + ((wa.bottom - wa.top) - CH) / 2;
        }
        POINT src{ 0, 0 };
        SIZE size{ CW, CH };
        POINT dst{ x, y };
        BLENDFUNCTION bf{ AC_SRC_OVER, 0, 255, AC_SRC_ALPHA };
        UpdateLayeredWindow(wnd, screen, &dst, &size, mem, &src, 0, &bf, ULW_ALPHA);

        if (st.done) {
            if (wasDone) break;
            wasDone = true;
        }
        if (st.pct == 0 && GetTickCount() - start > 15000) break;  // pipeline never started
        Sleep(90);
    }

    DestroyWindow(wnd);
    SelectObject(mem, old);
    DeleteObject(dib);
    DeleteDC(mem);
    ReleaseDC(nullptr, screen);
    return 0;
}
