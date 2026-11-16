// launcher.cpp - HVHGOD SLUTS launcher (Win32 / GDI, one exe, no runtime deps)
//
// One window, one pipeline:
//   SUMMON   stop any stale cs2, stage the offsets manifest and the config
//            library, start cs2, map work\payload.stripped.dll with XMap,
//            invoke entry 0x41FCA0, then read the runtime's own log to prove
//            the session came up.
//   STATUS   parses %LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Logs for the
//            markers that mean features are actually running.
//
// Output is tailed from work\pipeline.log, not from the child's stdout: a
// redirected PowerShell block-buffers its host output, so stdout looks frozen
// until the process exits.
//
//   launcher.exe                 normal window
//   launcher.exe --render a.bmp  draw one frame to a file, no window
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <windowsx.h>
#include <objidl.h>
#include <gdiplus.h>
#include <shlobj.h>
#include <shellapi.h>
#include <tlhelp32.h>
#include <cstdio>
#include <cstdint>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include "anime_assets.h"

#pragma comment(lib, "user32.lib")
#pragma comment(lib, "gdi32.lib")
// gdiplus.lib: required for anti-aliased glassmorphism shapes, gradients, and embedded anime art
#pragma comment(lib, "gdiplus.lib")
#pragma comment(lib, "shell32.lib")
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "ole32.lib")

// ---------------------------------------------------------------- anime glass palette
static const COLORREF C_BG      = RGB( 11,  11,  24);
static const COLORREF C_PANEL   = RGB( 14,  13,  30);
static const COLORREF C_CARD    = RGB( 22,  20,  46);
static const COLORREF C_CARD2   = RGB( 34,  30,  68);
static const COLORREF C_STROKE  = RGB( 96,  90, 150);
static const COLORREF C_TEXT    = RGB(248, 250, 252);
static const COLORREF C_DIM     = RGB(164, 174, 212);
static const COLORREF C_PINK    = RGB(236,  72, 153);
static const COLORREF C_PINK2   = RGB(244, 114, 182);
static const COLORREF C_VIOLET  = RGB(139,  92, 246);
static const COLORREF C_CYAN    = RGB( 56, 189, 248);
static const COLORREF C_EMBER   = RGB(251, 191,  36);
static const COLORREF C_OK      = RGB( 52, 211, 153);
static const COLORREF C_RED     = RGB(251, 113, 133);

static const int W     = 960, H = 610;
static const int TITLE = 42;
static const int CW_H  = H + TITLE;

// ---------------------------------------------------------------- state
static std::wstring g_root;
static std::wstring g_game;
static std::wstring g_runtime = L"dead";
static std::vector<std::wstring> g_log;
static bool  g_running = false;
static int   g_hover = -1;
static HANDLE g_proc = nullptr;
static HANDLE g_overlay = nullptr;
static DWORD g_cs2Pid = 0;
static HWND  g_hwnd = nullptr;
static DWORD g_startTick = 0;
static size_t g_logSeen = 0;

struct Chip { const wchar_t* name; bool ok; };
static std::vector<Chip> g_chips;

// ---------------------------------------------------------------- embedded anime assets & anim state
static ULONG_PTR        g_gdipToken      = 0;
static Gdiplus::Bitmap* g_imgBg          = nullptr;
static Gdiplus::Bitmap* g_imgBgCached    = nullptr;
static Gdiplus::Bitmap* g_imgHero        = nullptr;
static Gdiplus::Bitmap* g_imgChibi       = nullptr;
static HDC              g_backDc         = nullptr;
static HBITMAP          g_backBmp        = nullptr;
static HGDIOBJ          g_backOld        = nullptr;
static int              g_backW          = 0;
static int              g_backH          = 0;
static ULONGLONG        g_animEpoch      = 0;
static ULONGLONG        g_lastStepTick   = 0;
static float            g_animTime       = 0.0f;
static bool             g_isRenderMode   = false;
static float            g_btnAnim[4]     = { 0.0f, 0.0f, 0.0f, 0.0f };

struct Particle {
    float x, y, vy, drift, size, phase, speed;
    COLORREF color;
    bool star;
};
static std::vector<Particle> g_bgParticles;
static std::vector<Particle> g_cardParticles;

static void InitParticles() {
    if (!g_bgParticles.empty()) return;
    static const COLORREF cols[4] = { C_PINK2, C_CYAN, C_VIOLET, RGB(248, 224, 255) };
    uint32_t rng = 0x9E3779B9u;
    auto nextF = [&]() -> float {
        rng = rng * 1664525u + 1013904223u;
        return static_cast<float>((rng >> 8) & 0xFFFFu) / 65535.0f;
    };
    for (int i = 0; i < 28; i++) {
        Particle p{};
        p.x     = nextF() * static_cast<float>(W);
        p.y     = nextF() * static_cast<float>(CW_H);
        p.vy    = 14.0f + nextF() * 24.0f;
        p.drift = 8.0f + nextF() * 14.0f;
        p.size  = 2.2f + nextF() * 4.5f;
        p.phase = nextF() * 6.28318f;
        p.speed = 1.4f + nextF() * 2.2f;
        p.color = cols[i % 4];
        p.star  = (i % 3 == 0);
        g_bgParticles.push_back(p);
    }
    for (int i = 0; i < 12; i++) {
        Particle p{};
        p.x     = 14.0f + nextF() * 246.0f;
        p.y     = 20.0f + nextF() * 350.0f;
        p.vy    = 16.0f + nextF() * 22.0f;
        p.drift = 5.0f + nextF() * 9.0f;
        p.size  = 3.0f + nextF() * 4.5f;
        p.phase = nextF() * 6.28318f;
        p.speed = 2.0f + nextF() * 2.5f;
        p.color = (i % 2 == 0) ? C_PINK2 : C_CYAN;
        p.star  = (i % 2 == 0);
        g_cardParticles.push_back(p);
    }
}

static void StepAnimations() {
    ULONGLONG now = GetTickCount64();
    if (g_animEpoch == 0) g_animEpoch = now;
    if (g_lastStepTick == 0) g_lastStepTick = now;
    float dt = static_cast<float>(now - g_lastStepTick) * 0.001f;
    if (dt > 0.1f) dt = 0.025f;
    g_lastStepTick = now;
    g_animTime = static_cast<float>(now - g_animEpoch) * 0.001f;

    // Smooth hover transition on action buttons
    float rate = dt * 10.0f;
    if (rate > 1.0f) rate = 1.0f;
    for (int i = 0; i < 4; i++) {
        float target = (g_hover == (i + 1)) ? 1.0f : 0.0f;
        g_btnAnim[i] += (target - g_btnAnim[i]) * rate;
    }

    for (auto& p : g_bgParticles) {
        p.y -= p.vy * dt;
        if (p.y < -16.0f) p.y = static_cast<float>(CW_H + 16);
    }
    for (auto& p : g_cardParticles) {
        p.y -= p.vy * dt;
        if (p.y < -14.0f) p.y = 394.0f + 14.0f;
    }
}

static Gdiplus::Bitmap* DecodeEmbeddedImage(const unsigned char* data, size_t size) {
    HGLOBAL hg = GlobalAlloc(GMEM_MOVEABLE, size);
    if (!hg) return nullptr;
    void* ptr = GlobalLock(hg);
    if (!ptr) { GlobalFree(hg); return nullptr; }
    std::memcpy(ptr, data, size);
    GlobalUnlock(hg);

    IStream* stm = nullptr;
    if (FAILED(CreateStreamOnHGlobal(hg, TRUE, &stm)) || !stm) {
        GlobalFree(hg);
        return nullptr;
    }
    Gdiplus::Bitmap* decoded = Gdiplus::Bitmap::FromStream(stm, FALSE);
    Gdiplus::Bitmap* cached = nullptr;
    if (decoded && decoded->GetLastStatus() == Gdiplus::Ok) {
        UINT w = decoded->GetWidth();
        UINT h = decoded->GetHeight();
        cached = new Gdiplus::Bitmap(static_cast<INT>(w), static_cast<INT>(h), PixelFormat32bppPARGB);
        Gdiplus::Graphics cg(cached);
        cg.DrawImage(decoded, 0, 0, static_cast<INT>(w), static_cast<INT>(h));
    }
    delete decoded;
    stm->Release();
    return cached;
}

static void BuildCachedBackdrop() {
    delete g_imgBgCached;
    g_imgBgCached = new Gdiplus::Bitmap(W, CW_H, PixelFormat32bppPARGB);
    Gdiplus::Graphics bg(g_imgBgCached);
    bg.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);
    if (g_imgBg) {
        bg.DrawImage(g_imgBg, Gdiplus::RectF(0.0f, 0.0f, static_cast<float>(W), static_cast<float>(CW_H)),
                     0.0f, 0.0f, static_cast<float>(g_imgBg->GetWidth()), static_cast<float>(g_imgBg->GetHeight()),
                     Gdiplus::UnitPixel);
    } else {
        Gdiplus::SolidBrush fb(Gdiplus::Color(255, 11, 11, 24));
        bg.FillRectangle(&fb, 0, 0, W, CW_H);
    }
    Gdiplus::LinearGradientBrush hVignette(
        Gdiplus::PointF(0.0f, 0.0f), Gdiplus::PointF(static_cast<float>(W), 0.0f),
        Gdiplus::Color(168, 10, 10, 26), Gdiplus::Color(122, 14, 12, 32));
    bg.FillRectangle(&hVignette, 0, 0, W, CW_H);

    Gdiplus::LinearGradientBrush vVignette(
        Gdiplus::PointF(0.0f, 0.0f), Gdiplus::PointF(0.0f, static_cast<float>(CW_H)),
        Gdiplus::Color(36, 10, 10, 26), Gdiplus::Color(166, 8, 8, 22));
    bg.FillRectangle(&vVignette, 0, 0, W, CW_H);

    Gdiplus::SolidBrush glowPink(Gdiplus::Color(22, 236, 72, 153));
    Gdiplus::SolidBrush glowCyan(Gdiplus::Color(18, 56, 189, 248));
    bg.FillEllipse(&glowPink, -60.0f, 40.0f, 340.0f, 260.0f);
    bg.FillEllipse(&glowCyan, static_cast<float>(W) - 340.0f, 180.0f, 380.0f, 320.0f);
}

static void InitAnimeAssets() {
    if (!g_imgBg)    g_imgBg    = DecodeEmbeddedImage(kBgAnimeJpg, sizeof(kBgAnimeJpg));
    if (!g_imgHero)  g_imgHero  = DecodeEmbeddedImage(kHeroAnimeJpg, sizeof(kHeroAnimeJpg));
    if (!g_imgChibi) g_imgChibi = DecodeEmbeddedImage(kChibiAnimeJpg, sizeof(kChibiAnimeJpg));
    if (!g_imgBgCached) BuildCachedBackdrop();
    InitParticles();
}

static void FreeAnimeAssets() {
    delete g_imgBgCached; g_imgBgCached = nullptr;
    delete g_imgBg;       g_imgBg = nullptr;
    delete g_imgHero;     g_imgHero = nullptr;
    delete g_imgChibi;    g_imgChibi = nullptr;
}

// ---------------------------------------------------------------- GDI+ drawing helpers
static Gdiplus::Color GCol(BYTE a, COLORREF c) {
    return Gdiplus::Color(a, GetRValue(c), GetGValue(c), GetBValue(c));
}

static void MakeRoundPath(Gdiplus::GraphicsPath& path, float x, float y, float w, float h, float r) {
    float d = r * 2.0f;
    if (d > w) d = w;
    if (d > h) d = h;
    if (d <= 0.5f) {
        path.AddRectangle(Gdiplus::RectF(x, y, w, h));
        return;
    }
    path.AddArc(x, y, d, d, 180.0f, 90.0f);
    path.AddArc(x + w - d, y, d, d, 270.0f, 90.0f);
    path.AddArc(x + w - d, y + h - d, d, d, 0.0f, 90.0f);
    path.AddArc(x, y + h - d, d, d, 90.0f, 90.0f);
    path.CloseFigure();
}

static void FillRoundGlass(Gdiplus::Graphics& g, float x, float y, float w, float h, float r,
                           Gdiplus::Color c1, Gdiplus::Color c2,
                           Gdiplus::Color border = Gdiplus::Color(60, 255, 255, 255),
                           float borderW = 1.0f, bool topSheen = true) {
    Gdiplus::GraphicsPath path;
    MakeRoundPath(path, x, y, w, h, r);
    Gdiplus::LinearGradientBrush br(Gdiplus::PointF(x, y), Gdiplus::PointF(x + w, y + h), c1, c2);
    g.FillPath(&br, &path);

    if (topSheen && w > 24.0f) {
        Gdiplus::LinearGradientBrush sheen(
            Gdiplus::PointF(x + r, y + 1.0f),
            Gdiplus::PointF(x + w - r, y + 1.0f),
            Gdiplus::Color(0, 255, 255, 255),
            Gdiplus::Color(70, 255, 255, 255));
        Gdiplus::Pen sp(&sheen, 1.0f);
        g.DrawLine(&sp, x + r, y + 1.0f, x + w * 0.5f, y + 1.0f);
    }

    if (border.GetAlpha() > 0 && borderW > 0.0f) {
        Gdiplus::Pen pen(border, borderW);
        g.DrawPath(&pen, &path);
    }
}

static void FillRoundSolid(Gdiplus::Graphics& g, float x, float y, float w, float h, float r,
                           Gdiplus::Color fill,
                           Gdiplus::Color border = Gdiplus::Color(0, 0, 0, 0),
                           float borderW = 1.0f) {
    Gdiplus::GraphicsPath path;
    MakeRoundPath(path, x, y, w, h, r);
    Gdiplus::SolidBrush br(fill);
    g.FillPath(&br, &path);
    if (border.GetAlpha() > 0 && borderW > 0.0f) {
        Gdiplus::Pen pen(border, borderW);
        g.DrawPath(&pen, &path);
    }
}

static void DrawTextG(Gdiplus::Graphics& g, float x, float y, const std::wstring& s,
                      Gdiplus::Color col, float pxSize, int style = Gdiplus::FontStyleRegular,
                      const wchar_t* family = L"Segoe UI") {
    Gdiplus::FontFamily ff(family);
    Gdiplus::Font font(&ff, pxSize, style, Gdiplus::UnitPixel);
    Gdiplus::SolidBrush br(col);
    const Gdiplus::StringFormat* fmt = Gdiplus::StringFormat::GenericTypographic();
    g.DrawString(s.c_str(), static_cast<INT>(s.size()), &font, Gdiplus::PointF(x, y), fmt, &br);
}

static float MeasureTextG(Gdiplus::Graphics& g, const std::wstring& s,
                          float pxSize, int style = Gdiplus::FontStyleRegular,
                          const wchar_t* family = L"Segoe UI") {
    if (s.empty()) return 0.0f;
    Gdiplus::FontFamily ff(family);
    Gdiplus::Font font(&ff, pxSize, style, Gdiplus::UnitPixel);
    const Gdiplus::StringFormat* fmt = Gdiplus::StringFormat::GenericTypographic();
    Gdiplus::RectF box;
    g.MeasureString(s.c_str(), static_cast<INT>(s.size()), &font, Gdiplus::PointF(0.0f, 0.0f), fmt, &box);
    return box.Width;
}

static void DrawImageClippedRound(Gdiplus::Graphics& g, Gdiplus::Bitmap* img,
                                  float dx, float dy, float dw, float dh, float r,
                                  float sx, float sy, float sw, float sh,
                                  float zoom = 1.0f, float ox = 0.0f, float oy = 0.0f) {
    if (!img) return;
    Gdiplus::GraphicsState st = g.Save();
    Gdiplus::GraphicsPath path;
    MakeRoundPath(path, dx, dy, dw, dh, r);
    g.SetClip(&path);
    float zw = dw * zoom;
    float zh = dh * zoom;
    float zx = dx - (zw - dw) * 0.5f + ox;
    float zy = dy - (zh - dh) * 0.5f + oy;
    g.DrawImage(img, Gdiplus::RectF(zx, zy, zw, zh), sx, sy, sw, sh, Gdiplus::UnitPixel);
    g.Restore(st);
}

static void DrawImageClippedCircle(Gdiplus::Graphics& g, Gdiplus::Bitmap* img,
                                   float dx, float dy, float size,
                                   float sx, float sy, float sw, float sh,
                                   float zoom = 1.0f, float ox = 0.0f, float oy = 0.0f) {
    if (!img) return;
    Gdiplus::GraphicsState st = g.Save();
    Gdiplus::GraphicsPath path;
    path.AddEllipse(dx, dy, size, size);
    g.SetClip(&path);
    float zs = size * zoom;
    float zx = dx - (zs - size) * 0.5f + ox;
    float zy = dy - (zs - size) * 0.5f + oy;
    g.DrawImage(img, Gdiplus::RectF(zx, zy, zs, zs), sx, sy, sw, sh, Gdiplus::UnitPixel);
    g.Restore(st);
}

static void DrawGlowDot(Gdiplus::Graphics& g, float cx, float cy, float r, COLORREF c) {
    Gdiplus::SolidBrush halo1(GCol(48, c));
    Gdiplus::SolidBrush halo2(GCol(110, c));
    Gdiplus::SolidBrush core(GCol(255, c));
    g.FillEllipse(&halo1, cx - r * 2.2f, cy - r * 2.2f, r * 4.4f, r * 4.4f);
    g.FillEllipse(&halo2, cx - r * 1.45f, cy - r * 1.45f, r * 2.9f, r * 2.9f);
    g.FillEllipse(&core, cx - r, cy - r, r * 2.0f, r * 2.0f);
}

static void DrawPulseRing(Gdiplus::Graphics& g, float cx, float cy, float baseR, float phase, COLORREF c) {
    float p = std::fmodf(phase, 1.0f);
    if (p < 0.0f) p += 1.0f;
    float r = baseR + p * (baseR * 2.4f);
    BYTE a = static_cast<BYTE>((1.0f - p) * (1.0f - p) * 165.0f);
    if (a < 4) return;
    Gdiplus::Pen pen(GCol(a, c), 1.3f);
    g.DrawEllipse(&pen, cx - r, cy - r, r * 2.0f, r * 2.0f);
}

static void DrawSparkleStar(Gdiplus::Graphics& g, float cx, float cy, float r, BYTE alpha, COLORREF c) {
    if (alpha < 6 || r < 0.8f) return;
    Gdiplus::SolidBrush glow(GCol(static_cast<BYTE>(alpha / 3), c));
    g.FillEllipse(&glow, cx - r * 1.1f, cy - r * 1.1f, r * 2.2f, r * 2.2f);
    float inner = r * 0.28f;
    Gdiplus::PointF pts[8] = {
        { cx,         cy - r     },
        { cx + inner, cy - inner },
        { cx + r,     cy         },
        { cx + inner, cy + inner },
        { cx,         cy + r     },
        { cx - inner, cy + inner },
        { cx - r,     cy         },
        { cx - inner, cy - inner },
    };
    Gdiplus::SolidBrush br(GCol(alpha, c));
    g.FillPolygon(&br, pts, 8);
}

static void DrawShineSweep(Gdiplus::Graphics& g, float x, float y, float w, float h, float r,
                           float periodSec, float sweepDur, float t, BYTE maxAlpha) {
    float cycle = std::fmodf(t, periodSec);
    if (cycle > sweepDur) return;
    float p = cycle / sweepDur; // 0..1
    float bandW = w * 0.36f;
    float sx = x - bandW + (w + bandW * 2.0f) * p;

    Gdiplus::GraphicsState st = g.Save();
    Gdiplus::GraphicsPath clipPath;
    MakeRoundPath(clipPath, x, y, w, h, r);
    g.SetClip(&clipPath);

    Gdiplus::PointF quad[4] = {
        { sx,                y },
        { sx + bandW,        y },
        { sx + bandW - 32.f, y + h },
        { sx - 32.f,         y + h },
    };
    Gdiplus::LinearGradientBrush sheen(
        Gdiplus::PointF(sx - 16.0f, y),
        Gdiplus::PointF(sx + bandW - 16.0f, y + h),
        Gdiplus::Color(0, 255, 255, 255),
        Gdiplus::Color(maxAlpha, 255, 255, 255));
    Gdiplus::REAL pos[3] = { 0.0f, 0.5f, 1.0f };
    Gdiplus::Color cols[3] = {
        Gdiplus::Color(0, 255, 255, 255),
        Gdiplus::Color(maxAlpha, 255, 255, 255),
        Gdiplus::Color(0, 255, 255, 255)
    };
    sheen.SetInterpolationColors(cols, pos, 3);
    g.FillPolygon(&sheen, quad, 4);
    g.Restore(st);
}

static void DrawParticleField(Gdiplus::Graphics& g, const std::vector<Particle>& list,
                              float offX, float offY, float t) {
    for (const auto& p : list) {
        float px = offX + p.x + std::sinf(t * 0.9f + p.phase) * p.drift;
        float py = offY + p.y;
        float twinkle = 0.45f + 0.55f * std::sinf(t * p.speed + p.phase);
        BYTE alpha = static_cast<BYTE>(twinkle * 185.0f);
        if (p.star) {
            DrawSparkleStar(g, px, py, p.size * (0.75f + 0.4f * twinkle), alpha, p.color);
        } else {
            Gdiplus::SolidBrush halo(GCol(static_cast<BYTE>(alpha / 3), p.color));
            Gdiplus::SolidBrush core(GCol(alpha, p.color));
            float r = p.size * 0.65f;
            g.FillEllipse(&halo, px - r * 2.0f, py - r * 2.0f, r * 4.0f, r * 4.0f);
            g.FillEllipse(&core, px - r, py - r, r * 2.0f, r * 2.0f);
        }
    }
}

static std::wstring LogDir() {
    wchar_t buf[MAX_PATH]{};
    if (FAILED(SHGetFolderPathW(nullptr, CSIDL_LOCAL_APPDATA, nullptr, 0, buf))) return L"";
    return std::wstring(buf) + L"\\HVHGOD\\CS2 Runtime\\Internal\\Logs";
}
static std::wstring ReadTail(const std::wstring& path, int maxBytes = 65536) {
    HANDLE h = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
                           nullptr, OPEN_EXISTING, 0, nullptr);
    if (h == INVALID_HANDLE_VALUE) return L"";
    LARGE_INTEGER sz{};
    GetFileSizeEx(h, &sz);
    LONGLONG start = sz.QuadPart > maxBytes ? sz.QuadPart - maxBytes : 0;
    LARGE_INTEGER pos{}; pos.QuadPart = start;
    SetFilePointerEx(h, pos, nullptr, FILE_BEGIN);
    std::string buf(static_cast<size_t>(sz.QuadPart - start), '\0');
    DWORD got = 0;
    ReadFile(h, buf.data(), static_cast<DWORD>(buf.size()), &got, nullptr);
    CloseHandle(h);
    buf.resize(got);
    if (buf.empty()) return L"";
    int n = MultiByteToWideChar(CP_UTF8, 0, buf.data(), static_cast<int>(buf.size()), nullptr, 0);
    std::wstring out(static_cast<size_t>(n), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, buf.data(), static_cast<int>(buf.size()), out.data(), n);
    return out;
}
static bool Has(const std::wstring& hay, const wchar_t* needle) {
    return hay.find(needle) != std::wstring::npos;
}
static bool Exists(const std::wstring& p) {
    return GetFileAttributesW(p.c_str()) != INVALID_FILE_ATTRIBUTES;
}
static std::wstring FileSizeStr(const std::wstring& p) {
    HANDLE h = CreateFileW(p.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr,
                           OPEN_EXISTING, 0, nullptr);
    if (h == INVALID_HANDLE_VALUE) return L"-";
    LARGE_INTEGER sz{}; GetFileSizeEx(h, &sz); CloseHandle(h);
    wchar_t buf[64];
    swprintf_s(buf, L"%.1f MB", sz.QuadPart / 1048576.0);
    return buf;
}
static DWORD FindCs2Real() {
    HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    if (snap == INVALID_HANDLE_VALUE) return 0;
    PROCESSENTRY32W pe{}; pe.dwSize = sizeof(pe);
    DWORD pid = 0;
    if (Process32FirstW(snap, &pe)) {
        do {
            if (!_wcsicmp(pe.szExeFile, L"cs2.exe")) { pid = pe.th32ProcessID; break; }
        } while (Process32NextW(snap, &pe));
    }
    CloseHandle(snap);
    return pid;
}

// ---------------------------------------------------------------- pipeline log
static void LoadPipelineLog() {
    static const size_t kMax = 600;
    std::wstring path = g_root + L"\\work\\pipeline.log";
    std::wstring raw = ReadTail(path, 131072);
    if (raw.empty()) return;
    std::vector<std::wstring> lines;
    size_t i = 0;
    while (i < raw.size()) {
        size_t j = raw.find(L'\n', i);
        if (j == std::wstring::npos) j = raw.size();
        std::wstring line = raw.substr(i, j - i);
        while (!line.empty() && (line.back() == L'\r')) line.pop_back();
        if (!line.empty()) lines.push_back(line);
        i = j + 1;
    }
    if (lines.size() > kMax) lines.erase(lines.begin(), lines.begin() + (lines.size() - kMax));
    if (lines.size() > g_log.size()) {
        // Only grow: the child's stderr also arrives through the pipe, so a
        // wholesale replace would erase an error line the file does not carry.
        g_log.swap(lines);
        InvalidateRect(g_hwnd, nullptr, FALSE);
    }
}

// ---------------------------------------------------------------- refresh
static void RefreshState() {
    g_cs2Pid = FindCs2Real();
    std::wstring logs = LogDir();
    std::wstring rtPath = logs + L"\\Lifecycle\\runtime.log";
    std::wstring rt = ReadTail(rtPath);
    std::wstring br = ReadTail(logs + L"\\Bridge\\bridge.log");
    std::wstring feat = ReadTail(logs + L"\\Misc\\features.log");

    // A log left over from an earlier run still says INITIALIZATION_SUCCESS.
    bool fresh = false;
    if (g_cs2Pid) {
        WIN32_FILE_ATTRIBUTE_DATA fad{};
        if (GetFileAttributesExW(rtPath.c_str(), GetFileExInfoStandard, &fad)) {
            ULARGE_INTEGER t{};
            t.LowPart  = fad.ftLastWriteTime.dwLowDateTime;
            t.HighPart = fad.ftLastWriteTime.dwHighDateTime;
            FILETIME nowFt{};
            GetSystemTimeAsFileTime(&nowFt);
            ULONGLONG cur = (static_cast<ULONGLONG>(nowFt.dwHighDateTime) << 32) | nowFt.dwLowDateTime;
            fresh = (cur > t.QuadPart) && ((cur - t.QuadPart) < 3000000000ULL); // < 5 min
        }
    }
    bool init   = fresh && Has(rt, L"INITIALIZATION_SUCCESS");
    bool rage   = fresh && Has(rt, L"RAGE_BOT_INIT_SUCCESS");
    bool legit  = fresh && Has(rt, L"LEGIT_BOT_INIT_SUCCESS");
    bool render = fresh && Has(rt, L"RENDER_RUNTIME_READY");
    bool failed = Has(rt, L"INITIALIZATION_FAILURE");
    // A successful init followed by an unload request is not a live runtime.
    // Compare positions so a fresh success after an old teardown still counts.
    size_t initPos   = rt.rfind(L"INITIALIZATION_SUCCESS");
    size_t tearPos   = rt.rfind(L"UNLOAD_REQUESTED");
    size_t incomPos  = rt.rfind(L"UNLOAD_INCOMPLETE");
    if (tearPos  == std::wstring::npos) tearPos  = 0;
    if (incomPos == std::wstring::npos) incomPos = 0;
    size_t lastTear = tearPos > incomPos ? tearPos : incomPos;
    bool tornDown = (lastTear != 0) && (initPos == std::wstring::npos || initPos < lastTear);
    if (tornDown) { init = rage = legit = render = false; }

    g_chips.clear();
    g_chips.push_back({ L"awake",  init && !failed });
    g_chips.push_back({ L"rage",   rage });
    g_chips.push_back({ L"legit",  legit });
    g_chips.push_back({ L"vision", render });
    g_chips.push_back({ L"hooks",  fresh && Has(feat, L"NATIVE_SELF_OVERHEAD_BINDINGS") });
    g_chips.push_back({ L"sync",   fresh && Has(br, L"SYNC_ROSTER") });

    wchar_t lad[MAX_PATH]{};
    bool cfg = false;
    if (SUCCEEDED(SHGetFolderPathW(nullptr, CSIDL_LOCAL_APPDATA, nullptr, 0, lad))) {
        cfg = Exists(std::wstring(lad) +
              L"\\HVHGOD\\CS2 Runtime\\Internal\\Bridge\\Configuration\\config-library.bridge");
    }
    g_chips.push_back({ L"configs", cfg });

    if (g_running)      g_runtime = L"summoning";
    else if (g_cs2Pid)  g_runtime = (init && !failed) ? L"loose" : L"body only";
    else                g_runtime = L"dead";
}

// ---------------------------------------------------------------- job thread
struct Job { std::wstring script; std::wstring args; };

static void PumpLine(const std::string& s) {
    if (s.empty() || !g_hwnd) return;
    int n = MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), nullptr, 0);
    std::wstring w(static_cast<size_t>(n), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), w.data(), n);
    PostMessageW(g_hwnd, WM_APP + 2, 0, reinterpret_cast<LPARAM>(new std::wstring(w)));
}

// The pipeline uses Add-Type on a C# file with local functions, which needs a
// modern compiler. Windows PowerShell 5.1 uses the old CodeDom compiler and
// fails with SOURCE_CODE_ERROR, so pwsh (PowerShell 7) must win when installed.
static std::wstring ShellPath() {
    wchar_t found[MAX_PATH]{};
    if (SearchPathW(nullptr, L"pwsh.exe", nullptr, MAX_PATH, found, nullptr)) return found;
    wchar_t pf[MAX_PATH]{};
    if (GetEnvironmentVariableW(L"ProgramFiles", pf, MAX_PATH)) {
        std::wstring p = std::wstring(pf) + L"\\PowerShell\\7\\pwsh.exe";
        if (Exists(p)) return p;
    }
    return L"powershell.exe";
}

static DWORD WINAPI JobThread(LPVOID p) {
    Job* j = static_cast<Job*>(p);
    std::wstring cmd = L"\"" + ShellPath() + L"\" -NoProfile -ExecutionPolicy Bypass -File \"" +
                       j->script + L"\" " + j->args;
    SECURITY_ATTRIBUTES sa{ sizeof(sa), nullptr, TRUE };
    HANDLE rd = nullptr, wr = nullptr;
    CreatePipe(&rd, &wr, &sa, 0);
    SetHandleInformation(rd, HANDLE_FLAG_INHERIT, 0);

    STARTUPINFOW si{}; si.cb = sizeof(si);
    si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
    si.hStdOutput = wr; si.hStdError = wr; si.hStdInput = nullptr;
    si.wShowWindow = SW_HIDE;
    PROCESS_INFORMATION pi{};
    std::wstring mutableCmd = cmd;
    BOOL ok = CreateProcessW(nullptr, mutableCmd.data(), nullptr, nullptr, TRUE,
                             CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi);
    CloseHandle(wr);
    if (!ok) {
        if (g_hwnd) PostMessageW(g_hwnd, WM_APP + 1, 0, 0);
        delete j;
        return 0;
    }
    g_proc = pi.hProcess;
    char buf[4096];
    DWORD got = 0;
    std::string acc;
    while (ReadFile(rd, buf, sizeof(buf), &got, nullptr) && got > 0) {
        acc.append(buf, got);
        size_t pos;
        while ((pos = acc.find('\n')) != std::string::npos) {
            std::string line = acc.substr(0, pos);
            while (!line.empty() && line.back() == '\r') line.pop_back();
            PumpLine(line);
            acc.erase(0, pos + 1);
        }
    }
    if (!acc.empty()) PumpLine(acc);
    CloseHandle(rd);
    WaitForSingleObject(pi.hProcess, INFINITE);
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    g_proc = nullptr;
    if (g_hwnd) PostMessageW(g_hwnd, WM_APP + 3, 0, 0);
    delete j;
    return 0;
}

static void WriteSmallFile(const std::wstring& path, const std::wstring& text);

static void StartOverlay() {
    if (g_overlay) return;
    std::wstring exe = g_root + L"\\tools\\overlay\\bin\\overlay.exe";
    if (!Exists(exe)) return;
    std::wstring prog = g_root + L"\\work\\progress.txt";
    WriteSmallFile(prog, L"0|starting");
    std::wstring cmd = L"\"" + exe + L"\" \"" + prog + L"\" 240";
    STARTUPINFOW si{}; si.cb = sizeof(si); si.dwFlags = STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_SHOWNOACTIVATE;
    PROCESS_INFORMATION pi{};
    std::wstring mutableCmd = cmd;
    if (CreateProcessW(nullptr, mutableCmd.data(), nullptr, nullptr, FALSE,
                       CREATE_NO_WINDOW, nullptr, nullptr, &si, &pi)) {
        g_overlay = pi.hProcess;
        CloseHandle(pi.hThread);
    }
}

static void StopOverlay() {
    if (!g_overlay) return;
    DWORD code = 0;
    if (GetExitCodeProcess(g_overlay, &code) && code == STILL_ACTIVE) {
        // let it paint the final frame, then close it
        Sleep(350);
        TerminateProcess(g_overlay, 0);
    }
    CloseHandle(g_overlay);
    g_overlay = nullptr;
}

static void StartJob(const std::wstring& args) {
    if (g_running) return;
    if (g_root.empty()) {
        MessageBoxW(g_hwnd,
                    L"Runtime folder not found.\n\n"
                    L"The launcher looks for work\\run-standalone.ps1 next to itself, "
                    L"in the folders above it, and in HVHGOD-SLUTS on each drive.\n\n"
                    L"Either keep the launcher inside the HVHGOD-SLUTS folder, or edit "
                    L"root.txt beside the exe so it contains the full path to that folder.",
                    L"HVHGOD SLUTS", MB_ICONWARNING | MB_OK);
        return;
    }
    std::wstring script = g_root + L"\\work\\run-standalone.ps1";
    if (!Exists(script)) return;
    g_running = true;
    g_startTick = GetTickCount();
    g_log.clear();
    StartOverlay();
    g_log.push_back(L"[launcher] summoning the pipeline " + args);
    InvalidateRect(g_hwnd, nullptr, FALSE);
    Job* j = new Job{ script, args };
    HANDLE t = CreateThread(nullptr, 0, JobThread, j, 0, nullptr);
    if (t) CloseHandle(t);
}

// ---------------------------------------------------------------- hit boxes
struct Btn { int x, y, w, h; const wchar_t* label; int id; };
static Btn g_btns[] = {
    {  22, 566, 206,  48, L"SUMMON",  1 },
    { 240, 566, 128,  48, L"BANISH",  2 },
    { 380, 566, 130,  48, L"REFRESH", 3 },
    { 522, 566, 126,  48, L"LOGS",    4 },
};

// ---------------------------------------------------------------- paint
static void Paint(HDC hdc, int cw) {
    if (!g_imgBg) InitAnimeAssets();

    float t = g_isRenderMode ? 1.45f : g_animTime;

    Gdiplus::Graphics g(hdc);
    g.SetSmoothingMode(Gdiplus::SmoothingModeHighQuality);
    g.SetInterpolationMode(g_isRenderMode ? Gdiplus::InterpolationModeHighQualityBicubic
                                          : Gdiplus::InterpolationModeBilinear);
    g.SetTextRenderingHint(Gdiplus::TextRenderingHintAntiAliasGridFit);

    // ---- 1. Cached anime backdrop + animated floating bokeh/starlight particles
    if (g_imgBgCached) {
        g.DrawImage(g_imgBgCached, 0, 0);
    } else {
        Gdiplus::SolidBrush fallback(GCol(255, C_BG));
        g.FillRectangle(&fallback, 0, 0, cw, CW_H);
    }

    // Subtle breathing ambient neon glow + floating particles
    {
        float pulse = 0.5f + 0.5f * std::sinf(t * 1.4f);
        Gdiplus::SolidBrush glowPink(Gdiplus::Color(static_cast<BYTE>(12 + 16 * pulse), 236, 72, 153));
        Gdiplus::SolidBrush glowCyan(Gdiplus::Color(static_cast<BYTE>(10 + 14 * (1.0f - pulse)), 56, 189, 248));
        g.FillEllipse(&glowPink, -40.0f, 36.0f, 340.0f, 250.0f);
        g.FillEllipse(&glowCyan, static_cast<float>(cw) - 350.0f, 180.0f, 380.0f, 320.0f);
        DrawParticleField(g, g_bgParticles, 0.0f, 0.0f, t);
    }

    // ---- 2. Title strip
    {
        Gdiplus::SolidBrush tb(Gdiplus::Color(188, 12, 12, 30));
        g.FillRectangle(&tb, 0, 0, cw, TITLE);

        Gdiplus::LinearGradientBrush tbLine(
            Gdiplus::PointF(0.0f, static_cast<float>(TITLE - 1)),
            Gdiplus::PointF(static_cast<float>(cw), static_cast<float>(TITLE - 1)),
            Gdiplus::Color(140, 56, 189, 248),
            Gdiplus::Color(140, 236, 72, 153));
        Gdiplus::Pen lp(&tbLine, 1.2f);
        g.DrawLine(&lp, 0.0f, static_cast<float>(TITLE - 1), static_cast<float>(cw), static_cast<float>(TITLE - 1));

        // Mini circular chibi emblem
        if (g_imgChibi) {
            DrawImageClippedCircle(g, g_imgChibi, 16.0f, 9.0f, 24.0f,
                                   0.0f, 0.0f, static_cast<float>(g_imgChibi->GetWidth()),
                                   static_cast<float>(g_imgChibi->GetHeight()));
        }
        Gdiplus::LinearGradientBrush ringBr(
            Gdiplus::PointF(16.0f, 9.0f), Gdiplus::PointF(40.0f, 33.0f),
            GCol(220, C_CYAN), GCol(220, C_PINK));
        Gdiplus::Pen ringPen(&ringBr, 1.5f);
        g.DrawEllipse(&ringPen, 16.0f, 9.0f, 24.0f, 24.0f);

        DrawTextG(g, 49.0f, 13.0f, L"HVHGOD SLUTS", GCol(255, C_TEXT), 13.5f, Gdiplus::FontStyleBold);

        {
            const std::wstring badge = L"ANIME UI";
            float bw = MeasureTextG(g, badge, 10.0f, Gdiplus::FontStyleBold) + 22.0f;
            float bx = 162.0f;
            FillRoundGlass(g, bx, 11.0f, bw, 20.0f, 10.0f,
                           Gdiplus::Color(90, 139, 92, 246), Gdiplus::Color(90, 236, 72, 153),
                           Gdiplus::Color(135, 216, 180, 254), 1.0f, false);
            float btw = MeasureTextG(g, badge, 10.0f, Gdiplus::FontStyleBold);
            DrawTextG(g, bx + (bw - btw) * 0.5f, 14.5f, badge,
                      Gdiplus::Color(255, 245, 235, 255), 10.0f, Gdiplus::FontStyleBold);
            DrawTextG(g, bx + bw + 12.0f, 14.0f, L"cracked internal \u00b7 v28", GCol(215, C_DIM), 11.0f);
        }

        // Window control buttons (minimize / close)
        float minX = static_cast<float>(cw - 88);
        float clsX = static_cast<float>(cw - 46);
        FillRoundSolid(g, minX, 6.0f, 36.0f, 30.0f, 8.0f,
                       g_hover == 100 ? Gdiplus::Color(70, 255, 255, 255) : Gdiplus::Color(0, 0, 0, 0),
                       g_hover == 100 ? Gdiplus::Color(70, 255, 255, 255) : Gdiplus::Color(0, 0, 0, 0));
        {
            Gdiplus::Pen mp(GCol(220, C_DIM), 1.6f);
            g.DrawLine(&mp, minX + 12.0f, 22.0f, minX + 24.0f, 22.0f);
        }

        FillRoundSolid(g, clsX, 6.0f, 36.0f, 30.0f, 8.0f,
                       g_hover == 101 ? Gdiplus::Color(200, 236, 72, 153) : Gdiplus::Color(0, 0, 0, 0),
                       g_hover == 101 ? Gdiplus::Color(140, 255, 255, 255) : Gdiplus::Color(0, 0, 0, 0));
        {
            Gdiplus::Pen cp(GCol(245, C_TEXT), 1.7f);
            g.DrawLine(&cp, clsX + 13.0f, 16.0f, clsX + 23.0f, 26.0f);
            g.DrawLine(&cp, clsX + 23.0f, 16.0f, clsX + 13.0f, 26.0f);
        }
    }

    // ---- 3. Left Column: Hero Header Banner (x=22, y=56, w=626, h=88)
    {
        float bx = 22.0f, by = 56.0f, bw = 626.0f, bh = 88.0f;
        FillRoundGlass(g, bx, by, bw, bh, 16.0f,
                       Gdiplus::Color(168, 34, 24, 72), Gdiplus::Color(150, 20, 28, 62),
                       Gdiplus::Color(80, 255, 255, 255), 1.0f, true);

        // Portrait avatar cropped from hero anime art (gentle breathing + rotating neon ring)
        float ax = bx + 14.0f, ay = by + 12.0f, as = 64.0f;
        float avBreath = std::sinf(t * 1.75f);
        if (g_imgHero) {
            float iw = static_cast<float>(g_imgHero->GetWidth());
            float ih = static_cast<float>(g_imgHero->GetHeight());
            float crop = iw * 0.62f;
            float sx = (iw - crop) * 0.5f;
            float sy = ih * 0.06f;
            DrawImageClippedCircle(g, g_imgHero, ax, ay, as, sx, sy, crop, crop,
                                   1.045f + 0.015f * avBreath, 0.0f, avBreath * 1.4f);
        }
        {
            float cxA = ax + as * 0.5f, cyA = ay + as * 0.5f;
            float ang = t * 1.5f;
            float rx = std::cosf(ang) * (as * 0.5f), ry = std::sinf(ang) * (as * 0.5f);
            Gdiplus::LinearGradientBrush avRing(
                Gdiplus::PointF(cxA - rx, cyA - ry), Gdiplus::PointF(cxA + rx, cyA + ry),
                GCol(255, C_CYAN), GCol(255, C_PINK));
            Gdiplus::Pen avPen(&avRing, 2.2f);
            g.DrawEllipse(&avPen, ax, ay, as, as);
        }

        // Small live dot + pulse ring on avatar corner
        COLORREF dotC = g_cs2Pid ? C_OK : C_PINK2;
        FillRoundSolid(g, ax + as - 14.0f, ay + as - 14.0f, 12.0f, 12.0f, 6.0f,
                       Gdiplus::Color(255, 18, 16, 36));
        DrawPulseRing(g, ax + as - 8.0f, ay + as - 8.0f, 3.8f, t * 0.65f, dotC);
        DrawGlowDot(g, ax + as - 8.0f, ay + as - 8.0f, 3.8f, dotC);

        // Title + subtitle
        DrawTextG(g, bx + 94.0f, by + 16.0f, L"HVHGOD SLUTS", Gdiplus::Color(110, 0, 0, 0), 23.0f, Gdiplus::FontStyleBold);
        DrawTextG(g, bx + 93.0f, by + 15.0f, L"HVHGOD SLUTS", GCol(255, C_TEXT), 23.0f, Gdiplus::FontStyleBold);
        DrawTextG(g, bx + 94.0f, by + 48.0f, L"cheat cracked \u2014 no loader, no server, no leash", GCol(220, C_DIM), 11.5f);

        // Right-aligned runtime status pill
        std::wstring state = L"runtime: " + g_runtime;
        COLORREF sc = g_runtime == L"loose" ? C_OK :
                      g_runtime == L"dead" ? C_DIM : C_EMBER;
        float stw = MeasureTextG(g, state, 11.0f, Gdiplus::FontStyleBold);
        float pw = stw + 34.0f;
        float px = bx + bw - 16.0f - pw;
        float py = by + 16.0f;
        FillRoundSolid(g, px, py, pw, 26.0f, 13.0f,
                       GCol(52, sc), GCol(140, sc), 1.0f);
        DrawPulseRing(g, px + 14.0f, py + 13.0f, 3.5f, t * 0.55f + 0.3f, sc);
        DrawGlowDot(g, px + 14.0f, py + 13.0f, 3.5f, sc);
        DrawTextG(g, px + 24.0f, py + 6.0f, state, GCol(255, sc), 11.0f, Gdiplus::FontStyleBold);

        std::wstring entryTxt = L"entry 0x41FCA0 \u00b7 6 gates torn out";
        float ew = MeasureTextG(g, entryTxt, 10.5f);
        DrawTextG(g, bx + bw - 16.0f - ew, by + 50.0f, entryTxt, GCol(195, C_DIM), 10.5f);
    }

    // ---- 4. Three status cards (y=158, h=82, w=200 each, gap=13 -> 626px total)
    {
        int y = 158;
        int gap = 13, cwid = 200;
        struct Card { const wchar_t* title; std::wstring a, b; bool ok; };
        std::wstring payload = g_root + L"\\work\\payload.stripped.dll";
        std::wstring manifest = g_root + L"\\data\\offsets.genuine.bridge";
        if (!Exists(manifest)) manifest = g_root + L"\\dump\\offsets.genuine.bridge";
        bool pOk = Exists(payload), mOk = Exists(manifest);
        Card cards[3] = {
            { L"TARGET",  g_cs2Pid ? (L"pid " + std::to_wstring(g_cs2Pid)) : L"nothing breathing",
                          g_game.empty() ? L"cs2.exe not found" : g_game, g_cs2Pid != 0 },
            { L"PAYLOAD", pOk ? FileSizeStr(payload) : L"missing",
                          pOk ? L"6 gates torn out" : L"run strip_gates.ps1", pOk },
            { L"OFFSETS", mOk ? FileSizeStr(manifest) : L"missing",
                          mOk ? L"signed manifest v28" : L"copy from capture", mOk },
        };
        for (int i = 0; i < 3; i++) {
            float x = 22.0f + static_cast<float>(i * (cwid + gap));
            float fy = static_cast<float>(y);
            float fw = static_cast<float>(cwid);
            COLORREF ac = cards[i].ok ? C_OK : C_RED;

            FillRoundGlass(g, x, fy, fw, 82.0f, 14.0f,
                           Gdiplus::Color(162, 20, 18, 46), Gdiplus::Color(152, 16, 15, 36),
                           Gdiplus::Color(60, 255, 255, 255), 1.0f, true);

            // Vertical neon accent bar on left edge
            FillRoundSolid(g, x + 1.5f, fy + 16.0f, 3.0f, 50.0f, 1.5f, GCol(215, ac));

            DrawTextG(g, x + 15.0f, fy + 12.0f, cards[i].title, GCol(215, C_DIM), 10.0f, Gdiplus::FontStyleBold);
            DrawGlowDot(g, x + fw - 18.0f, fy + 17.0f, 3.6f, ac);

            DrawTextG(g, x + 15.0f, fy + 30.0f, cards[i].a, GCol(255, C_TEXT), 14.5f, Gdiplus::FontStyleBold);

            std::wstring b = cards[i].b;
            if (MeasureTextG(g, b, 10.0f) > fw - 30.0f) {
                while (b.size() > 8 && MeasureTextG(g, L"\u2026" + b, 10.0f) > fw - 30.0f) {
                    b.erase(0, 1);
                }
                b = L"\u2026" + b;
            }
            DrawTextG(g, x + 15.0f, fy + 56.0f, b, GCol(185, C_DIM), 10.0f);
        }
    }

    // ---- 5. Feature chips (y=254)
    {
        float y = 254.0f;
        const std::wstring fLbl = L"FEASTING";
        float flw = MeasureTextG(g, fLbl, 9.5f, Gdiplus::FontStyleBold);
        float fbw = flw + 20.0f;
        FillRoundSolid(g, 22.0f, y, fbw, 24.0f, 12.0f,
                       Gdiplus::Color(85, 139, 92, 246), Gdiplus::Color(115, 196, 181, 253), 1.0f);
        DrawTextG(g, 22.0f + (fbw - flw) * 0.5f, y + 6.0f, fLbl,
                  Gdiplus::Color(255, 237, 233, 254), 9.5f, Gdiplus::FontStyleBold);

        float cx = 22.0f + fbw + 10.0f;
        for (auto& c : g_chips) {
            float tw = MeasureTextG(g, c.name, 10.5f, Gdiplus::FontStyleBold);
            float bw = tw + 28.0f;
            if (cx + bw > 648.0f) break;
            COLORREF cc = c.ok ? C_OK : C_RED;
            FillRoundSolid(g, cx, y, bw, 24.0f, 12.0f,
                           c.ok ? Gdiplus::Color(72, 16, 185, 129) : Gdiplus::Color(115, 28, 20, 52),
                           c.ok ? Gdiplus::Color(155, 52, 211, 153) : Gdiplus::Color(70, 244, 114, 182), 1.0f);
            DrawGlowDot(g, cx + 11.5f, y + 12.0f, 2.8f, cc);
            DrawTextG(g, cx + 20.0f, y + 5.0f, c.name,
                      c.ok ? Gdiplus::Color(255, 209, 250, 229) : Gdiplus::Color(235, 226, 208, 226),
                      10.5f, Gdiplus::FontStyleBold);
            cx += bw + 7.0f;
        }
    }

    // ---- 6. Glass Terminal / SPAWN LOG (x=22, y=292, w=626, h=260)
    {
        float tx = 22.0f, ty = 292.0f, tw = 626.0f, th = 260.0f;
        FillRoundGlass(g, tx, ty, tw, th, 16.0f,
                       Gdiplus::Color(196, 11, 11, 28), Gdiplus::Color(208, 9, 9, 24),
                       Gdiplus::Color(62, 255, 255, 255), 1.0f, true);

        // Terminal header strip
        Gdiplus::Pen divPen(Gdiplus::Color(35, 255, 255, 255), 1.0f);
        g.DrawLine(&divPen, tx + 1.0f, ty + 34.0f, tx + tw - 1.0f, ty + 34.0f);

        // Animated wave header dots
        COLORREF dotCols[3] = { C_PINK2, C_VIOLET, C_CYAN };
        for (int i = 0; i < 3; i++) {
            float wv = 0.55f + 0.45f * std::sinf(t * 3.0f - static_cast<float>(i) * 0.9f);
            BYTE da = static_cast<BYTE>(155 + 100 * wv);
            float dr = 7.4f + 1.4f * wv;
            float dcx = tx + 20.0f + static_cast<float>(i) * 13.0f;
            float dcy = ty + 17.0f;
            Gdiplus::SolidBrush db(GCol(da, dotCols[i]));
            g.FillEllipse(&db, dcx - dr * 0.5f, dcy - dr * 0.5f, dr, dr);
        }

        DrawTextG(g, tx + 62.0f, ty + 10.5f, L"SPAWN LOG", GCol(245, C_TEXT), 10.5f, Gdiplus::FontStyleBold);

        if (g_running) {
            DWORD el = (GetTickCount() - g_startTick) / 1000;
            wchar_t tb[64];
            swprintf_s(tb, L"%02u:%02u", el / 60, el % 60);
            float tbW = MeasureTextG(g, tb, 10.0f, Gdiplus::FontStyleBold);
            float pillW = tbW + 22.0f;
            float pillX = tx + tw - 14.0f - pillW;
            FillRoundSolid(g, pillX, ty + 7.0f, pillW, 20.0f, 10.0f,
                           GCol(55, C_EMBER), GCol(140, C_EMBER), 1.0f);
            DrawTextG(g, pillX + (pillW - tbW) * 0.5f, ty + 10.5f, tb, GCol(255, C_EMBER), 10.0f, Gdiplus::FontStyleBold);
        } else {
            const std::wstring rLbl = L"READY";
            float rw = MeasureTextG(g, rLbl, 9.5f, Gdiplus::FontStyleBold);
            float pillW = rw + 24.0f;
            float pillX = tx + tw - 14.0f - pillW;
            FillRoundSolid(g, pillX, ty + 7.0f, pillW, 20.0f, 10.0f,
                           GCol(40, C_CYAN), GCol(110, C_CYAN), 1.0f);
            DrawTextG(g, pillX + (pillW - rw) * 0.5f, ty + 11.0f, rLbl, GCol(240, C_CYAN), 9.5f, Gdiplus::FontStyleBold);
        }

        // Log lines + blinking terminal cursor
        int ch = static_cast<int>(th);
        float lineY = ty + 43.0f;
        int rows = (ch - 52) / 16;
        int total = static_cast<int>(g_log.size());
        int first = total > rows ? total - rows : 0;
        bool cursorOn = (std::fmodf(t, 1.05f) < 0.58f);
        if (total == 0) {
            std::wstring idleMsg = L"// awaiting summon sequence... press SUMMON to start runtime";
            DrawTextG(g, tx + 18.0f, ty + 46.0f, idleMsg,
                      Gdiplus::Color(145, 164, 174, 212), 10.5f, Gdiplus::FontStyleRegular, L"Consolas");
            if (cursorOn) {
                float iw = MeasureTextG(g, idleMsg, 10.5f, Gdiplus::FontStyleRegular, L"Consolas");
                Gdiplus::SolidBrush curBr(GCol(220, C_CYAN));
                g.FillRectangle(&curBr, tx + 21.0f + iw, ty + 47.0f, 6.5f, 12.0f);
            }
        }
        for (int i = first; i < total; i++) {
            const std::wstring& s = g_log[i];
            COLORREF c = C_DIM;
            if (s.find(L"[error]") != std::wstring::npos || s.find(L"FAIL") != std::wstring::npos ||
                s.find(L"failed") != std::wstring::npos) c = C_RED;
            else if (s.find(L"===") != std::wstring::npos) c = C_PINK2;
            else if (s.find(L"  ") == 0) c = C_TEXT;
            std::wstring lt = s;
            if (lt.size() > 96) lt = lt.substr(0, 95) + L"\u2026";
            DrawTextG(g, tx + 16.0f, lineY, lt, GCol(245, c), 10.5f, Gdiplus::FontStyleRegular, L"Consolas");
            if (i == total - 1 && cursorOn) {
                float lw = MeasureTextG(g, lt, 10.5f, Gdiplus::FontStyleRegular, L"Consolas");
                if (lw < tw - 44.0f) {
                    Gdiplus::SolidBrush curBr(GCol(215, C_PINK2));
                    g.FillRectangle(&curBr, tx + 19.0f + lw, lineY + 1.5f, 6.0f, 11.5f);
                }
            }
            lineY += 16.0f;
        }
    }

    // ---- 7. Action Buttons (y=566, h=48) with smooth hover lift & shine sweep
    for (int bi = 0; bi < 4; bi++) {
        const auto& b = g_btns[bi];
        bool disabled = (b.id == 1 && g_running) || (b.id == 2 && !g_running);
        float hoverAmt = g_isRenderMode ? (g_hover == b.id ? 1.0f : 0.0f) : g_btnAnim[bi];
        if (disabled) hoverAmt = 0.0f;
        float bx = static_cast<float>(b.x);
        float by = static_cast<float>(b.y) - hoverAmt * 2.0f;
        float bw = static_cast<float>(b.w);
        float bh = static_cast<float>(b.h);

        if (b.id == 1) {
            if (!disabled) {
                float glowPulse = 0.5f + 0.5f * std::sinf(t * 2.6f);
                BYTE ga = static_cast<BYTE>(28.0f + 22.0f * glowPulse + 42.0f * hoverAmt);
                FillRoundSolid(g, bx - 3.0f, by - 3.0f, bw + 6.0f, bh + 6.0f, 16.0f,
                               Gdiplus::Color(ga, 236, 72, 153));
                FillRoundGlass(g, bx, by, bw, bh, 13.0f,
                               hoverAmt > 0.3f ? GCol(255, C_PINK2) : GCol(245, C_PINK),
                               GCol(255, C_VIOLET),
                               Gdiplus::Color(static_cast<BYTE>(140 + 60 * hoverAmt), 255, 255, 255), 1.0f, true);
                DrawShineSweep(g, bx, by, bw, bh, 13.0f, 3.6f, 0.72f, t + 0.7f, 92);
            } else {
                FillRoundGlass(g, bx, by, bw, bh, 13.0f,
                               Gdiplus::Color(125, 34, 24, 58), Gdiplus::Color(125, 24, 20, 46),
                               Gdiplus::Color(45, 255, 255, 255), 1.0f, false);
            }
            Gdiplus::Color tc = disabled ? GCol(150, C_DIM) : GCol(255, C_TEXT);
            float tw = MeasureTextG(g, b.label, 13.0f, Gdiplus::FontStyleBold);
            float startX = bx + (bw - (tw + 18.0f)) * 0.5f;
            Gdiplus::PointF tri[3] = {
                { startX, by + 18.0f },
                { startX + 10.0f, by + 24.0f },
                { startX, by + 30.0f }
            };
            Gdiplus::SolidBrush tbr(tc);
            g.FillPolygon(&tbr, tri, 3);
            DrawTextG(g, startX + 16.0f, by + 16.5f, b.label, tc, 13.0f, Gdiplus::FontStyleBold);
        } else {
            COLORREF accent = (b.id == 2) ? C_RED : (b.id == 3 ? C_CYAN : C_VIOLET);
            BYTE aR = GetRValue(accent), aG = GetGValue(accent), aB = GetBValue(accent);
            BYTE bgA1 = static_cast<BYTE>(158.0f - 55.0f * hoverAmt);
            Gdiplus::Color bg1(bgA1,
                               static_cast<BYTE>(22.0f + (aR - 22.0f) * hoverAmt * 0.45f),
                               static_cast<BYTE>(20.0f + (aG - 20.0f) * hoverAmt * 0.45f),
                               static_cast<BYTE>(48.0f + (aB - 48.0f) * hoverAmt * 0.45f));
            Gdiplus::Color bg2(155,
                               static_cast<BYTE>(16.0f + 12.0f * hoverAmt),
                               static_cast<BYTE>(15.0f + 10.0f * hoverAmt),
                               static_cast<BYTE>(38.0f + 24.0f * hoverAmt));
            Gdiplus::Color brd(static_cast<BYTE>(60.0f + 145.0f * hoverAmt),
                               static_cast<BYTE>(255.0f + (aR - 255.0f) * hoverAmt),
                               static_cast<BYTE>(255.0f + (aG - 255.0f) * hoverAmt),
                               static_cast<BYTE>(255.0f + (aB - 255.0f) * hoverAmt));
            FillRoundGlass(g, bx, by, bw, bh, 13.0f, bg1, bg2, brd, 1.0f, true);
            Gdiplus::Color tc = disabled ? GCol(148, C_DIM) : GCol(255, C_TEXT);
            float tw = MeasureTextG(g, b.label, 12.0f, Gdiplus::FontStyleBold);
            DrawTextG(g, bx + (bw - tw) * 0.5f, by + 17.0f, b.label, tc, 12.0f, Gdiplus::FontStyleBold);
        }
    }

    // ---- 8. Right Column: Living Anime Showcase Panel (x=664, w=274)
    {
        float sx = 664.0f, sy = 56.0f, sw = 274.0f, sh = 394.0f;
        float heroBreath = std::sinf(t * 1.55f);
        float heroSwayX  = std::cosf(t * 0.78f) * 2.8f;
        float heroSwayY  = heroBreath * 5.2f;
        float heroZoom   = 1.055f + 0.018f * std::sinf(t * 1.55f + 0.35f);

        // Breathing neon aura behind character card
        BYTE auraA = static_cast<BYTE>(24.0f + 20.0f * (0.5f + 0.5f * heroBreath));
        FillRoundSolid(g, sx - 2.5f, sy - 2.5f, sw + 5.0f, sh + 5.0f, 20.0f,
                       Gdiplus::Color(auraA, 236, 72, 153));

        if (g_imgHero) {
            DrawImageClippedRound(g, g_imgHero, sx, sy, sw, sh, 18.0f,
                                  0.0f, 0.0f, static_cast<float>(g_imgHero->GetWidth()),
                                  static_cast<float>(g_imgHero->GetHeight()),
                                  heroZoom, heroSwayX, heroSwayY);
        } else {
            FillRoundSolid(g, sx, sy, sw, sh, 18.0f, GCol(255, C_CARD));
        }

        // Bottom dark fade + floating anime particles + light sweep inside character card
        {
            Gdiplus::GraphicsState st = g.Save();
            Gdiplus::GraphicsPath clipPath;
            MakeRoundPath(clipPath, sx, sy, sw, sh, 18.0f);
            g.SetClip(&clipPath);

            DrawParticleField(g, g_cardParticles, sx, sy, t);

            Gdiplus::LinearGradientBrush fade(
                Gdiplus::PointF(sx, sy + sh * 0.50f),
                Gdiplus::PointF(sx, sy + sh),
                Gdiplus::Color(0, 12, 10, 28),
                Gdiplus::Color(240, 11, 10, 28));
            g.FillRectangle(&fade, sx, sy + sh * 0.50f, sw, sh * 0.50f);

            Gdiplus::LinearGradientBrush topFade(
                Gdiplus::PointF(sx, sy),
                Gdiplus::PointF(sx, sy + 55.0f),
                Gdiplus::Color(70, 12, 10, 30),
                Gdiplus::Color(0, 12, 10, 30));
            g.FillRectangle(&topFade, sx, sy, sw, 55.0f);
            g.Restore(st);
        }
        DrawShineSweep(g, sx, sy, sw, sh, 18.0f, 5.4f, 0.95f, t + 1.1f, 44);

        // Card border
        {
            Gdiplus::GraphicsPath bp;
            MakeRoundPath(bp, sx, sy, sw, sh, 18.0f);
            Gdiplus::LinearGradientBrush brd(
                Gdiplus::PointF(sx, sy), Gdiplus::PointF(sx + sw, sy + sh),
                Gdiplus::Color(115, 255, 255, 255), Gdiplus::Color(135, 236, 72, 153));
            Gdiplus::Pen pen(&brd, 1.2f);
            g.DrawPath(&pen, &bp);
        }

        // Top-right badge on hero card with radar pulse
        {
            bool live = g_cs2Pid != 0;
            COLORREF bc = live ? C_OK : C_CYAN;
            const wchar_t* btxt = live ? L"TARGET LIVE" : L"STANDBY";
            float btw = MeasureTextG(g, btxt, 9.5f, Gdiplus::FontStyleBold);
            float bpw = btw + 26.0f;
            float bpx = sx + sw - 12.0f - bpw;
            float bpy = sy + 12.0f;
            FillRoundSolid(g, bpx, bpy, bpw, 22.0f, 11.0f,
                           Gdiplus::Color(175, 12, 12, 30), GCol(130, bc), 1.0f);
            DrawPulseRing(g, bpx + 11.0f, bpy + 11.0f, 2.8f, t * 0.7f, bc);
            DrawGlowDot(g, bpx + 11.0f, bpy + 11.0f, 2.8f, bc);
            DrawTextG(g, bpx + 19.0f, bpy + 5.0f, btxt, GCol(255, bc), 9.5f, Gdiplus::FontStyleBold);
        }

        // Bottom caption inside hero card
        {
            const std::wstring coreTag = L"VALKYRIE // CORE";
            float ctw = MeasureTextG(g, coreTag, 9.5f, Gdiplus::FontStyleBold);
            float cpw = ctw + 22.0f;
            FillRoundGlass(g, sx + 16.0f, sy + sh - 84.0f, cpw, 20.0f, 10.0f,
                           GCol(185, C_PINK), GCol(185, C_VIOLET),
                           Gdiplus::Color(130, 255, 255, 255), 0.8f, false);
            DrawTextG(g, sx + 16.0f + (cpw - ctw) * 0.5f, sy + sh - 79.5f,
                      coreTag, GCol(255, C_TEXT), 9.5f, Gdiplus::FontStyleBold);
        }
        DrawTextG(g, sx + 16.0f, sy + sh - 57.0f, L"HVHGOD Runtime", GCol(255, C_TEXT), 16.5f, Gdiplus::FontStyleBold);
        DrawTextG(g, sx + 16.0f, sy + sh - 32.0f, L"Pure local engine \u00b7 No server", GCol(215, C_DIM), 10.5f);

        // Live animated audio/signal equalizer bars on bottom right
        for (int i = 0; i < 5; i++) {
            float ex = sx + sw - 46.0f + static_cast<float>(i) * 6.0f;
            float wave = 0.5f + 0.5f * std::sinf(t * (3.2f + static_cast<float>(i) * 0.85f) + static_cast<float>(i) * 1.25f);
            float eh = 6.0f + 17.0f * wave;
            COLORREF ec = (i % 2 == 0) ? C_PINK2 : C_CYAN;
            FillRoundSolid(g, ex, sy + sh - 22.0f - eh, 3.5f, eh, 1.7f, GCol(220, ec));
        }

        // ---- 9. Bottom Right Bouncy Chibi & Specs Card (x=664, y=464, w=274, h=150)
        float cy = 464.0f, ch = 150.0f;
        FillRoundGlass(g, sx, cy, sw, ch, 18.0f,
                       Gdiplus::Color(166, 20, 18, 46), Gdiplus::Color(174, 26, 20, 56),
                       Gdiplus::Color(70, 255, 255, 255), 1.0f, true);

        // Bouncy chibi sticker frame
        float csx = sx + 13.0f, csy = cy + 14.0f, csw = 114.0f, csh = 122.0f;
        if (g_imgChibi) {
            float cBob  = std::sinf(t * 2.5f + 0.7f) * 3.4f;
            float cSway = std::sinf(t * 1.25f) * 1.8f;
            float cZoom = 1.075f + 0.022f * std::sinf(t * 2.5f);
            DrawImageClippedRound(g, g_imgChibi, csx, csy, csw, csh, 14.0f,
                                  0.0f, 0.0f, static_cast<float>(g_imgChibi->GetWidth()),
                                  static_cast<float>(g_imgChibi->GetHeight()),
                                  cZoom, cSway, cBob);
        }
        // Twinkling anime sparkles on chibi corners
        {
            float sp1 = 0.5f + 0.5f * std::sinf(t * 3.1f);
            float sp2 = 0.5f + 0.5f * std::sinf(t * 2.7f + 2.1f);
            DrawSparkleStar(g, csx + 14.0f, csy + 15.0f, 4.0f + 2.2f * sp1, static_cast<BYTE>(110 + 135 * sp1), C_CYAN);
            DrawSparkleStar(g, csx + csw - 14.0f, csy + csh - 16.0f, 3.5f + 2.0f * sp2, static_cast<BYTE>(95 + 145 * sp2), C_PINK2);
        }
        {
            Gdiplus::GraphicsPath cp;
            MakeRoundPath(cp, csx, csy, csw, csh, 14.0f);
            float shift = 0.5f + 0.5f * std::sinf(t * 2.0f);
            Gdiplus::LinearGradientBrush cbrd(
                Gdiplus::PointF(csx + shift * 20.0f, csy), Gdiplus::PointF(csx + csw, csy + csh),
                GCol(195, C_PINK2), GCol(195, C_CYAN));
            Gdiplus::Pen cpen(&cbrd, 1.4f);
            g.DrawPath(&cpen, &cp);
        }

        // 3 mini info pills beside chibi
        struct Spec { const wchar_t* k; const wchar_t* v; COLORREF c; };
        Spec specs[3] = {
            { L"MENU KEY", L"INSERT",     C_PINK2  },
            { L"SECURITY", L"6 STRIPPED", C_CYAN   },
            { L"RUNTIME",  L"WIN32 x64",  C_VIOLET },
        };
        float spX = csx + csw + 12.0f;
        float spW = sx + sw - 13.0f - spX;
        for (int i = 0; i < 3; i++) {
            float spY = cy + 14.0f + i * 42.0f;
            FillRoundGlass(g, spX, spY, spW, 37.0f, 10.0f,
                           Gdiplus::Color(135, 16, 15, 36), Gdiplus::Color(145, 24, 22, 52),
                           GCol(75, specs[i].c), 1.0f, false);
            FillRoundSolid(g, spX + 1.5f, spY + 9.0f, 2.5f, 19.0f, 1.2f, GCol(220, specs[i].c));
            DrawTextG(g, spX + 10.0f, spY + 4.5f, specs[i].k, GCol(195, C_DIM), 9.2f, Gdiplus::FontStyleBold);
            DrawTextG(g, spX + 10.0f, spY + 17.5f, specs[i].v, GCol(255, C_TEXT), 11.0f, Gdiplus::FontStyleBold);
        }
    }

    // ---- 10. Footer
    DrawTextG(g, 24.0f, static_cast<float>(CW_H - 25),
              L"press INSERT in game \u00b7 everything dies quietly", GCol(190, C_DIM), 10.0f);
    std::wstring fRight = L"HVHGOD ANIME EDITION \u00b7 LOCAL ENGINE";
    float frW = MeasureTextG(g, fRight, 10.0f, Gdiplus::FontStyleBold);
    DrawTextG(g, static_cast<float>(cw) - 24.0f - frW, static_cast<float>(CW_H - 25),
              fRight, GCol(185, C_VIOLET), 10.0f, Gdiplus::FontStyleBold);

    // Outer subtle rounded glass window border
    {
        Gdiplus::GraphicsPath wp;
        MakeRoundPath(wp, 0.5f, 0.5f, static_cast<float>(cw - 1), static_cast<float>(CW_H - 1), 19.0f);
        Gdiplus::Pen wpen(Gdiplus::Color(65, 255, 255, 255), 1.0f);
        g.DrawPath(&wpen, &wp);
    }
}

// ---------------------------------------------------------------- window
static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_APP + 1:
        g_log.push_back(L"[error] pipeline could not start");
        g_running = false;
        InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    case WM_APP + 2: {
        std::wstring* s = reinterpret_cast<std::wstring*>(lp);
        if (s) { if (!s->empty()) g_log.push_back(*s); delete s; }
        InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    }
    case WM_APP + 3:
        g_running = false;
        StopOverlay();
        RefreshState();
        InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    case WM_TIMER:
        if (wp == 3) {
            StepAnimations();
            InvalidateRect(hwnd, nullptr, FALSE);
            return 0;
        }
        LoadPipelineLog();
        if (wp == 1) { RefreshState(); InvalidateRect(hwnd, nullptr, FALSE); }
        else InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    case WM_MOUSEMOVE: {
        int x = GET_X_LPARAM(lp), y = GET_Y_LPARAM(lp);
        int h = -1;
        RECT rc; GetClientRect(hwnd, &rc);
        if (x >= rc.right - 90 && x < rc.right - 49 && y < TITLE) h = 100;
        else if (x >= rc.right - 49 && y < TITLE) h = 101;
        for (auto& b : g_btns)
            if (x >= b.x && x < b.x + b.w && y >= b.y && y < b.y + b.h) h = b.id;
        if (h != g_hover) { g_hover = h; InvalidateRect(hwnd, nullptr, FALSE); }
        TRACKMOUSEEVENT tme{ sizeof(tme), TME_LEAVE, hwnd, 0 };
        TrackMouseEvent(&tme);
        return 0;
    }
    case WM_MOUSELEAVE:
        g_hover = -1;
        InvalidateRect(hwnd, nullptr, FALSE);
        return 0;
    case WM_LBUTTONDOWN: {
        int x = GET_X_LPARAM(lp), y = GET_Y_LPARAM(lp);
        RECT rc; GetClientRect(hwnd, &rc);
        if (y < TITLE) {
            if (x >= rc.right - 49) { DestroyWindow(hwnd); return 0; }
            if (x >= rc.right - 90 && x < rc.right - 49) { ShowWindow(hwnd, SW_MINIMIZE); return 0; }
            SendMessageW(hwnd, WM_NCLBUTTONDOWN, HTCAPTION, 0);
            return 0;
        }
        for (auto& b : g_btns) {
            if (x >= b.x && x < b.x + b.w && y >= b.y && y < b.y + b.h) {
                switch (b.id) {
                case 1:
                    if (!g_running) {
                        std::wstring args = L"-WatchMinutes 1";
                        if (!g_game.empty()) args += L" -Game \"" + g_game + L"\"";
                        StartJob(args);
                    }
                    break;
                case 2:
                    if (g_proc) TerminateProcess(g_proc, 0);
                    if (g_cs2Pid) {
                        HANDLE hp = OpenProcess(PROCESS_TERMINATE, FALSE, g_cs2Pid);
                        if (hp) { TerminateProcess(hp, 0); CloseHandle(hp); }
                    }
                    g_running = false;
                    RefreshState();
                    break;
                case 3:
                    RefreshState();
                    break;
                case 4:
                    ShellExecuteW(nullptr, L"open", LogDir().c_str(), nullptr, nullptr, SW_SHOWNORMAL);
                    break;
                }
                InvalidateRect(hwnd, nullptr, FALSE);
                return 0;
            }
        }
        return 0;
    }
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(hwnd, &ps);
        RECT rc; GetClientRect(hwnd, &rc);
        if (!g_backDc || g_backW != rc.right || g_backH != rc.bottom) {
            if (g_backDc) {
                SelectObject(g_backDc, g_backOld);
                DeleteObject(g_backBmp);
                DeleteDC(g_backDc);
            }
            g_backDc = CreateCompatibleDC(dc);
            g_backBmp = CreateCompatibleBitmap(dc, rc.right, rc.bottom);
            g_backOld = SelectObject(g_backDc, g_backBmp);
            g_backW = rc.right;
            g_backH = rc.bottom;
        }
        Paint(g_backDc, rc.right);
        BitBlt(dc, 0, 0, rc.right, rc.bottom, g_backDc, 0, 0, SRCCOPY);
        EndPaint(hwnd, &ps);
        return 0;
    }
    case WM_ERASEBKGND:
        return 1;
    case WM_DESTROY:
        if (g_backDc) {
            SelectObject(g_backDc, g_backOld);
            DeleteObject(g_backBmp);
            DeleteDC(g_backDc);
            g_backDc = nullptr; g_backBmp = nullptr; g_backOld = nullptr;
        }
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcW(hwnd, msg, wp, lp);
}

static std::wstring ExeDir() {
    wchar_t buf[MAX_PATH]{};
    GetModuleFileNameW(nullptr, buf, MAX_PATH);
    std::wstring s(buf);
    size_t p = s.find_last_of(L"\\/");
    return p == std::wstring::npos ? L"." : s.substr(0, p);
}
static std::wstring Trim(const std::wstring& s) {
    size_t a = s.find_first_not_of(L" \t\r\n");
    if (a == std::wstring::npos) return L"";
    size_t b = s.find_last_not_of(L" \t\r\n");
    return s.substr(a, b - a + 1);
}
static std::wstring ReadSmallFile(const std::wstring& path) {
    HANDLE h = CreateFileW(path.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr,
                           OPEN_EXISTING, 0, nullptr);
    if (h == INVALID_HANDLE_VALUE) return L"";
    char buf[2048]{};
    DWORD got = 0;
    ReadFile(h, buf, sizeof(buf) - 1, &got, nullptr);
    CloseHandle(h);
    std::string s(buf, got);
    int n = MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), nullptr, 0);
    std::wstring w(static_cast<size_t>(n), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), w.data(), n);
    size_t nl = w.find_first_of(L"\r\n");
    if (nl != std::wstring::npos) w = w.substr(0, nl);
    return Trim(w);
}
static void WriteSmallFile(const std::wstring& path, const std::wstring& text) {
    HANDLE h = CreateFileW(path.c_str(), GENERIC_WRITE, 0, nullptr,
                           CREATE_ALWAYS, 0, nullptr);
    if (h == INVALID_HANDLE_VALUE) return;
    int n = WideCharToMultiByte(CP_UTF8, 0, text.data(), static_cast<int>(text.size()),
                                nullptr, 0, nullptr, nullptr);
    std::string s(static_cast<size_t>(n), '\0');
    WideCharToMultiByte(CP_UTF8, 0, text.data(), static_cast<int>(text.size()),
                        s.data(), n, nullptr, nullptr);
    DWORD put = 0;
    WriteFile(h, s.data(), static_cast<DWORD>(s.size()), &put, nullptr);
    CloseHandle(h);
}
// A folder is a runtime root when the pipeline lives in it.
static bool IsRoot(const std::wstring& dir) {
    return !dir.empty() && Exists(dir + L"\\work\\run-standalone.ps1");
}
static std::wstring LocalStateDir() {
    wchar_t buf[MAX_PATH]{};
    if (FAILED(SHGetFolderPathW(nullptr, CSIDL_LOCAL_APPDATA, nullptr, 0, buf))) return L"";
    std::wstring dir = std::wstring(buf) + L"\\HVHGOD-SLUTS";
    CreateDirectoryW(dir.c_str(), nullptr);
    return dir;
}

// The launcher is portable: it finds the runtime folder wherever it was copied.
// Order: next to the exe, parents of the exe, a saved pointer, then common
// folder names on every fixed drive. The first hit is remembered so later runs
// skip the search.
static std::wstring ResolveRoot() {
    std::wstring dir = ExeDir();
    std::wstring probe = dir;
    for (int i = 0; i < 5; i++) {
        if (IsRoot(probe)) return probe;
        size_t p = probe.find_last_of(L"\\/");
        if (p == std::wstring::npos || p < 3) break;
        probe = probe.substr(0, p);
    }

    std::wstring state = LocalStateDir();
    const std::wstring pointers[] = { dir + L"\\root.txt", state + L"\\root.txt" };
    for (const auto& f : pointers) {
        std::wstring saved = ReadSmallFile(f);
        if (IsRoot(saved)) return saved;
    }

    wchar_t drives[256]{};
    GetLogicalDriveStringsW(255, drives);
    const wchar_t* names[] = { L"\\HVHGOD-SLUTS", L"\\hvhgod-sluts", L"\\HVHGOD",
                               L"\\Games\\HVHGOD-SLUTS", L"\\cheats\\HVHGOD-SLUTS" };
    for (const wchar_t* d = drives; *d; d += wcslen(d) + 1) {
        if (GetDriveTypeW(d) != DRIVE_FIXED && GetDriveTypeW(d) != DRIVE_REMOVABLE) continue;
        std::wstring root(d);
        if (!root.empty() && root.back() == L'\\') root.pop_back();
        for (const wchar_t* n : names) {
            std::wstring candidate = root + n;
            if (IsRoot(candidate)) return candidate;
        }
    }
    return L"";
}

static void RememberRoot(const std::wstring& root) {
    if (root.empty()) return;
    WriteSmallFile(ExeDir() + L"\\root.txt", root);
    std::wstring state = LocalStateDir();
    if (!state.empty()) WriteSmallFile(state + L"\\root.txt", root);
}

static void ResolvePaths() {
    g_root = ResolveRoot();
    if (!g_root.empty()) RememberRoot(g_root);
    const wchar_t* cands[] = {
        L"D:\\Program Files (x86)\\Steam\\steamapps\\common\\Counter-Strike Global Offensive\\game\\bin\\win64\\cs2.exe",
        L"C:\\Program Files (x86)\\Steam\\steamapps\\common\\Counter-Strike Global Offensive\\game\\bin\\win64\\cs2.exe",
        L"E:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\game\\bin\\win64\\cs2.exe",
        L"D:\\SteamLibrary\\steamapps\\common\\Counter-Strike Global Offensive\\game\\bin\\win64\\cs2.exe",
    };
    for (auto c : cands) if (Exists(c)) { g_game = c; break; }
    std::wstring gt = g_root + L"\\game.txt";
    if (Exists(gt)) {
        HANDLE h = CreateFileW(gt.c_str(), GENERIC_READ, FILE_SHARE_READ, nullptr, OPEN_EXISTING, 0, nullptr);
        if (h != INVALID_HANDLE_VALUE) {
            char buf[1024]{}; DWORD got = 0;
            ReadFile(h, buf, sizeof(buf) - 1, &got, nullptr);
            CloseHandle(h);
            std::string s(buf, got);
            int n = MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), nullptr, 0);
            std::wstring w(static_cast<size_t>(n), L'\0');
            MultiByteToWideChar(CP_UTF8, 0, s.data(), static_cast<int>(s.size()), w.data(), n);
            size_t nl = w.find_first_of(L"\r\n");
            if (nl != std::wstring::npos) w = w.substr(0, nl);
            w = Trim(w);
            if (!w.empty() && w[0] != L'#' && Exists(w)) g_game = w;
        }
    }
}

static int RenderToFile(const wchar_t* path) {
    const int w = W, h = CW_H;
    HDC screen = GetDC(nullptr);
    HDC dc = CreateCompatibleDC(screen);
    HBITMAP bmp = CreateCompatibleBitmap(screen, w, h);
    HGDIOBJ ob = SelectObject(dc, bmp);
    Paint(dc, w);
    BITMAPFILEHEADER fh{};
    BITMAPINFOHEADER ih{};
    ih.biSize = sizeof(ih); ih.biWidth = w; ih.biHeight = -h;
    ih.biPlanes = 1; ih.biBitCount = 32; ih.biCompression = BI_RGB;
    DWORD sz = static_cast<DWORD>(w * h * 4);
    fh.bfType = 0x4D42;
    fh.bfOffBits = sizeof(fh) + sizeof(ih);
    fh.bfSize = fh.bfOffBits + sz;
    std::vector<BYTE> px(sz);
    GetDIBits(dc, bmp, 0, h, px.data(), reinterpret_cast<BITMAPINFO*>(&ih), DIB_RGB_COLORS);
    for (DWORD i = 3; i < sz; i += 4) px[i] = 0xFF;
    HANDLE f = CreateFileW(path, GENERIC_WRITE, 0, nullptr, CREATE_ALWAYS, 0, nullptr);
    DWORD wrote = 0;
    if (f != INVALID_HANDLE_VALUE) {
        WriteFile(f, &fh, sizeof(fh), &wrote, nullptr);
        WriteFile(f, &ih, sizeof(ih), &wrote, nullptr);
        WriteFile(f, px.data(), sz, &wrote, nullptr);
        CloseHandle(f);
    }
    SelectObject(dc, ob);
    DeleteObject(bmp);
    DeleteDC(dc);
    ReleaseDC(nullptr, screen);
    return 0;
}

int WINAPI wWinMain(HINSTANCE inst, HINSTANCE, PWSTR cmdline, int show) {
    Gdiplus::GdiplusStartupInput gdipIn;
    Gdiplus::GdiplusStartup(&g_gdipToken, &gdipIn, nullptr);
    InitAnimeAssets();

    ResolvePaths();
    RefreshState();

    if (cmdline && wcsstr(cmdline, L"--render")) {
        g_isRenderMode = true;
        const wchar_t* p = wcsstr(cmdline, L"--render") + 8;
        while (*p == L' ') p++;
        int rc = RenderToFile(p);
        FreeAnimeAssets();
        Gdiplus::GdiplusShutdown(g_gdipToken);
        return rc;
    }

    g_animEpoch = GetTickCount64();
    g_lastStepTick = g_animEpoch;

    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(wc);
    wc.lpfnWndProc = WndProc;
    wc.hInstance = inst;
    wc.hCursor = LoadCursorW(nullptr, IDC_ARROW);
    wc.hbrBackground = nullptr;
    wc.lpszClassName = L"HVHGodSlutsLauncher";
    RegisterClassExW(&wc);

    g_hwnd = CreateWindowExW(0, wc.lpszClassName, L"HVHGOD SLUTS",
                             WS_POPUP, 220, 90, W, CW_H,
                             nullptr, nullptr, inst, nullptr);
    if (!g_hwnd) {
        FreeAnimeAssets();
        Gdiplus::GdiplusShutdown(g_gdipToken);
        return 1;
    }

    HRGN rgn = CreateRoundRectRgn(0, 0, W + 1, CW_H + 1, 38, 38);
    if (rgn) SetWindowRgn(g_hwnd, rgn, TRUE);

    ShowWindow(g_hwnd, show);
    UpdateWindow(g_hwnd);
    SetTimer(g_hwnd, 1, 1000, nullptr);   // state
    SetTimer(g_hwnd, 2, 400, nullptr);    // pipeline log tail
    SetTimer(g_hwnd, 3, 25, nullptr);     // 40fps anime motion & particles

    MSG msg;
    while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    FreeAnimeAssets();
    Gdiplus::GdiplusShutdown(g_gdipToken);
    return 0;
}
