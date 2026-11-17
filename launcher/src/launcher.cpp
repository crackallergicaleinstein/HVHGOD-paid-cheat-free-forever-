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

// ---------------------------------------------------------------- anime frosted glass palette
static const COLORREF C_BG      = RGB( 13,  14,  22);
static const COLORREF C_PANEL   = RGB( 16,  18,  28);
static const COLORREF C_CARD    = RGB( 22,  24,  38);
static const COLORREF C_CARD2   = RGB( 34,  36,  56);
static const COLORREF C_STROKE  = RGB( 96, 102, 128);
static const COLORREF C_TEXT    = RGB(244, 246, 250);
static const COLORREF C_DIM     = RGB(166, 176, 198);
static const COLORREF C_ROSE    = RGB(188,  54, 108);
static const COLORREF C_ROSE2   = RGB(214,  76, 132);
static const COLORREF C_PLUM    = RGB(120,  42,  92);
static const COLORREF C_SLATE   = RGB(132, 168, 216);
static const COLORREF C_EMBER   = RGB(240, 185,  85);
static const COLORREF C_OK      = RGB( 74, 212, 148);
static const COLORREF C_RED     = RGB(235,  95, 118);

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
static Gdiplus::Bitmap* g_imgBgClear     = nullptr;
static Gdiplus::Bitmap* g_imgBgBlurred   = nullptr;
static Gdiplus::Bitmap* g_imgHero        = nullptr;
static Gdiplus::Bitmap* g_imgAvatar      = nullptr;
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
static int              g_hoverCard      = -1;
static float            g_btnAnim[4]     = { 0.0f, 0.0f, 0.0f, 0.0f };
static float            g_cardAnim[3]    = { 0.0f, 0.0f, 0.0f };
static float            g_winAnim[2]     = { 0.0f, 0.0f };

struct SakuraPetal {
    float x, y, vx, vy, rot, vrot, scale, phase;
    BYTE alpha;
    bool warm;
};
struct RainStreak {
    float x, y, len, speed;
    BYTE alpha;
};
static std::vector<SakuraPetal> g_petals;
static std::vector<RainStreak>  g_rain;

static void InitParticles() {
    if (!g_petals.empty()) return;
    uint32_t rng = 0x517CC1B7u;
    auto nextF = [&]() -> float {
        rng = rng * 1664525u + 1013904223u;
        return static_cast<float>((rng >> 8) & 0xFFFFu) / 65535.0f;
    };
    for (int i = 0; i < 18; i++) {
        SakuraPetal p{};
        p.x     = nextF() * static_cast<float>(W);
        p.y     = nextF() * static_cast<float>(CW_H);
        p.vx    = 14.0f + nextF() * 18.0f;
        p.vy    = 16.0f + nextF() * 18.0f;
        p.rot   = nextF() * 360.0f;
        p.vrot  = (nextF() - 0.5f) * 65.0f;
        p.scale = 0.65f + nextF() * 0.65f;
        p.phase = nextF() * 6.28318f;
        p.alpha = static_cast<BYTE>(55 + nextF() * 65.0f);
        p.warm  = (i % 3 == 0);
        g_petals.push_back(p);
    }
    for (int i = 0; i < 26; i++) {
        RainStreak r{};
        r.x     = nextF() * 274.0f;
        r.y     = nextF() * 394.0f;
        r.len   = 14.0f + nextF() * 16.0f;
        r.speed = 340.0f + nextF() * 190.0f;
        r.alpha = static_cast<BYTE>(18 + nextF() * 24.0f);
        g_rain.push_back(r);
    }
}

static void StepAnimations() {
    ULONGLONG now = GetTickCount64();
    if (g_animEpoch == 0) g_animEpoch = now;
    if (g_lastStepTick == 0) g_lastStepTick = now;
    float dt = static_cast<float>(now - g_lastStepTick) * 0.001f;
    if (dt > 0.08f) dt = 0.016f;
    g_lastStepTick = now;
    g_animTime = static_cast<float>(now - g_animEpoch) * 0.001f;

    float rate = dt * 12.0f;
    if (rate > 1.0f) rate = 1.0f;
    for (int i = 0; i < 4; i++) {
        float target = (g_hover == (i + 1)) ? 1.0f : 0.0f;
        g_btnAnim[i] += (target - g_btnAnim[i]) * rate;
    }
    for (int i = 0; i < 3; i++) {
        float target = (g_hoverCard == i) ? 1.0f : 0.0f;
        g_cardAnim[i] += (target - g_cardAnim[i]) * rate;
    }
    g_winAnim[0] += (((g_hover == 100) ? 1.0f : 0.0f) - g_winAnim[0]) * rate;
    g_winAnim[1] += (((g_hover == 101) ? 1.0f : 0.0f) - g_winAnim[1]) * rate;

    for (auto& p : g_petals) {
        p.x += (p.vx + std::sinf(g_animTime * 0.9f + p.phase) * 7.0f) * dt;
        p.y += p.vy * dt;
        p.rot += p.vrot * dt;
        if (p.y > static_cast<float>(CW_H + 18)) {
            p.y = -18.0f;
            p.x -= 120.0f;
        }
        if (p.x > static_cast<float>(W + 24)) p.x = -24.0f;
        if (p.x < -24.0f) p.x += static_cast<float>(W + 40);
    }
    for (auto& r : g_rain) {
        r.y += r.speed * dt;
        r.x -= r.speed * 0.08f * dt;
        if (r.y > 394.0f + r.len) {
            r.y = -r.len;
            r.x += 32.0f;
            if (r.x > 274.0f) r.x -= 274.0f;
        }
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
        cg.Clear(Gdiplus::Color(0, 0, 0, 0));
        cg.DrawImage(decoded, 0, 0, static_cast<INT>(w), static_cast<INT>(h));
    }
    delete decoded;
    stm->Release();
    return cached;
}

static void BoxBlurBitmap(Gdiplus::Bitmap* bmp, int radius, int passes) {
    if (!bmp || radius < 1) return;
    INT w = static_cast<INT>(bmp->GetWidth());
    INT h = static_cast<INT>(bmp->GetHeight());
    Gdiplus::Rect rect(0, 0, w, h);
    Gdiplus::BitmapData bd{};
    if (bmp->LockBits(&rect, Gdiplus::ImageLockModeRead | Gdiplus::ImageLockModeWrite,
                      PixelFormat32bppPARGB, &bd) != Gdiplus::Ok) {
        return;
    }
    int stride = bd.Stride / 4;
    std::vector<uint32_t> tmp(static_cast<size_t>(w) * static_cast<size_t>(h));
    uint32_t* px = static_cast<uint32_t*>(bd.Scan0);
    int win = radius * 2 + 1;

    for (int pass = 0; pass < passes; pass++) {
        for (int y = 0; y < h; y++) {
            uint32_t* row = px + y * stride;
            uint32_t* out = tmp.data() + y * w;
            int sr = 0, sg = 0, sb = 0;
            for (int k = -radius; k <= radius; k++) {
                int sx = (k < 0) ? 0 : (k >= w ? w - 1 : k);
                uint32_t c = row[sx];
                sr += (c >> 16) & 0xFF;
                sg += (c >> 8) & 0xFF;
                sb += c & 0xFF;
            }
            for (int x = 0; x < w; x++) {
                out[x] = 0xFF000000u |
                         (static_cast<uint32_t>(sr / win) << 16) |
                         (static_cast<uint32_t>(sg / win) << 8) |
                         static_cast<uint32_t>(sb / win);
                int addX = x + radius + 1; if (addX >= w) addX = w - 1;
                int remX = x - radius;     if (remX < 0) remX = 0;
                uint32_t cAdd = row[addX], cRem = row[remX];
                sr += static_cast<int>((cAdd >> 16) & 0xFF) - static_cast<int>((cRem >> 16) & 0xFF);
                sg += static_cast<int>((cAdd >> 8) & 0xFF) - static_cast<int>((cRem >> 8) & 0xFF);
                sb += static_cast<int>(cAdd & 0xFF) - static_cast<int>(cRem & 0xFF);
            }
        }
        for (int x = 0; x < w; x++) {
            int sr = 0, sg = 0, sb = 0;
            for (int k = -radius; k <= radius; k++) {
                int sy = (k < 0) ? 0 : (k >= h ? h - 1 : k);
                uint32_t c = tmp[static_cast<size_t>(sy) * w + x];
                sr += (c >> 16) & 0xFF;
                sg += (c >> 8) & 0xFF;
                sb += c & 0xFF;
            }
            for (int y = 0; y < h; y++) {
                px[y * stride + x] = 0xFF000000u |
                                     (static_cast<uint32_t>(sr / win) << 16) |
                                     (static_cast<uint32_t>(sg / win) << 8) |
                                     static_cast<uint32_t>(sb / win);
                int addY = y + radius + 1; if (addY >= h) addY = h - 1;
                int remY = y - radius;     if (remY < 0) remY = 0;
                uint32_t cAdd = tmp[static_cast<size_t>(addY) * w + x];
                uint32_t cRem = tmp[static_cast<size_t>(remY) * w + x];
                sr += static_cast<int>((cAdd >> 16) & 0xFF) - static_cast<int>((cRem >> 16) & 0xFF);
                sg += static_cast<int>((cAdd >> 8) & 0xFF) - static_cast<int>((cRem >> 8) & 0xFF);
                sb += static_cast<int>(cAdd & 0xFF) - static_cast<int>(cRem & 0xFF);
            }
        }
    }
    bmp->UnlockBits(&bd);
}

static void BuildBackdropLayers() {
    delete g_imgBgClear;
    delete g_imgBgBlurred;
    g_imgBgClear   = new Gdiplus::Bitmap(W, CW_H, PixelFormat32bppPARGB);
    g_imgBgBlurred = new Gdiplus::Bitmap(W, CW_H, PixelFormat32bppPARGB);

    {
        Gdiplus::Graphics gc(g_imgBgClear);
        gc.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);
        if (g_imgBg) {
            gc.DrawImage(g_imgBg, Gdiplus::RectF(0.0f, 0.0f, static_cast<float>(W), static_cast<float>(CW_H)),
                         0.0f, 0.0f, static_cast<float>(g_imgBg->GetWidth()), static_cast<float>(g_imgBg->GetHeight()),
                         Gdiplus::UnitPixel);
        } else {
            Gdiplus::SolidBrush fb(Gdiplus::Color(255, 13, 14, 22));
            gc.FillRectangle(&fb, 0, 0, W, CW_H);
        }
        Gdiplus::LinearGradientBrush shade(
            Gdiplus::PointF(0.0f, 0.0f), Gdiplus::PointF(static_cast<float>(W), static_cast<float>(CW_H)),
            Gdiplus::Color(92, 10, 11, 20), Gdiplus::Color(70, 12, 13, 24));
        gc.FillRectangle(&shade, 0, 0, W, CW_H);

        Gdiplus::LinearGradientBrush bottomFade(
            Gdiplus::PointF(0.0f, static_cast<float>(CW_H - 44)),
            Gdiplus::PointF(0.0f, static_cast<float>(CW_H)),
            Gdiplus::Color(0, 10, 11, 20), Gdiplus::Color(158, 10, 11, 20));
        gc.FillRectangle(&bottomFade, 0, CW_H - 44, W, 44);
    }

    {
        Gdiplus::Graphics gb(g_imgBgBlurred);
        gb.DrawImage(g_imgBgClear, 0, 0);
    }
    BoxBlurBitmap(g_imgBgBlurred, 11, 2);
    {
        Gdiplus::Graphics gb(g_imgBgBlurred);
        Gdiplus::SolidBrush frostTint(Gdiplus::Color(136, 12, 13, 22));
        gb.FillRectangle(&frostTint, 0, 0, W, CW_H);
    }
}

static void InitAnimeAssets() {
    if (!g_imgBg)     g_imgBg     = DecodeEmbeddedImage(kBgAnimeJpg, sizeof(kBgAnimeJpg));
    if (!g_imgHero)   g_imgHero   = DecodeEmbeddedImage(kHeroAnimeJpg, sizeof(kHeroAnimeJpg));
    if (!g_imgAvatar) g_imgAvatar = DecodeEmbeddedImage(kAvatarAnimeJpg, sizeof(kAvatarAnimeJpg));
    if (!g_imgChibi)  g_imgChibi  = DecodeEmbeddedImage(kChibiAnimePng, sizeof(kChibiAnimePng));
    if (!g_imgBgClear || !g_imgBgBlurred) BuildBackdropLayers();
    InitParticles();
}

static void FreeAnimeAssets() {
    delete g_imgBgClear;   g_imgBgClear = nullptr;
    delete g_imgBgBlurred; g_imgBgBlurred = nullptr;
    delete g_imgBg;        g_imgBg = nullptr;
    delete g_imgHero;      g_imgHero = nullptr;
    delete g_imgAvatar;    g_imgAvatar = nullptr;
    delete g_imgChibi;     g_imgChibi = nullptr;
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

static void FillFrostedCard(Gdiplus::Graphics& g, float x, float y, float w, float h, float r,
                            Gdiplus::Color extraTint = Gdiplus::Color(22, 16, 18, 30),
                            Gdiplus::Color border = Gdiplus::Color(58, 255, 255, 255),
                            bool specular = true) {
    Gdiplus::GraphicsPath path;
    MakeRoundPath(path, x, y, w, h, r);

    Gdiplus::GraphicsState st = g.Save();
    g.SetClip(&path);
    if (g_imgBgBlurred) {
        g.DrawImage(g_imgBgBlurred, Gdiplus::RectF(x, y, w, h), x, y, w, h, Gdiplus::UnitPixel);
    } else {
        Gdiplus::SolidBrush fb(Gdiplus::Color(220, 18, 20, 32));
        g.FillRectangle(&fb, x, y, w, h);
    }
    if (extraTint.GetAlpha() > 0) {
        Gdiplus::SolidBrush tb(extraTint);
        g.FillRectangle(&tb, x, y, w, h);
    }
    if (specular) {
        Gdiplus::LinearGradientBrush spec(
            Gdiplus::PointF(x, y), Gdiplus::PointF(x, y + h * 0.45f),
            Gdiplus::Color(22, 255, 255, 255), Gdiplus::Color(0, 255, 255, 255));
        g.FillRectangle(&spec, x, y, w, h * 0.45f);
    }
    g.Restore(st);

    if (border.GetAlpha() > 0) {
        Gdiplus::Pen pen(border, 1.0f);
        g.DrawPath(&pen, &path);
    }
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
            Gdiplus::PointF(x + w * 0.6f, y + 1.0f),
            Gdiplus::Color(15, 255, 255, 255),
            Gdiplus::Color(65, 255, 255, 255));
        Gdiplus::Pen sp(&sheen, 1.0f);
        g.DrawLine(&sp, x + r, y + 1.0f, x + w * 0.55f, y + 1.0f);
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
                                  float sx, float sy, float sw, float sh) {
    if (!img) return;
    Gdiplus::GraphicsState st = g.Save();
    Gdiplus::GraphicsPath path;
    MakeRoundPath(path, dx, dy, dw, dh, r);
    g.SetClip(&path);
    g.DrawImage(img, Gdiplus::RectF(dx, dy, dw, dh), sx, sy, sw, sh, Gdiplus::UnitPixel);
    g.Restore(st);
}

static void DrawImageClippedCircle(Gdiplus::Graphics& g, Gdiplus::Bitmap* img,
                                   float dx, float dy, float size,
                                   float sx, float sy, float sw, float sh) {
    if (!img) return;
    Gdiplus::GraphicsState st = g.Save();
    Gdiplus::GraphicsPath path;
    path.AddEllipse(dx, dy, size, size);
    g.SetClip(&path);
    g.DrawImage(img, Gdiplus::RectF(dx, dy, size, size), sx, sy, sw, sh, Gdiplus::UnitPixel);
    g.Restore(st);
}

static void DrawSoftDot(Gdiplus::Graphics& g, float cx, float cy, float r, COLORREF c, float pulse = 0.5f) {
    BYTE ha = static_cast<BYTE>(28.0f + 36.0f * pulse);
    Gdiplus::SolidBrush halo(GCol(ha, c));
    Gdiplus::SolidBrush core(GCol(255, c));
    g.FillEllipse(&halo, cx - r * 2.1f, cy - r * 2.1f, r * 4.2f, r * 4.2f);
    g.FillEllipse(&core, cx - r, cy - r, r * 2.0f, r * 2.0f);
}

static void DrawShineSweep(Gdiplus::Graphics& g, float x, float y, float w, float h, float r,
                           float periodSec, float sweepDur, float t, BYTE maxAlpha) {
    float cycle = std::fmodf(t, periodSec);
    if (cycle > sweepDur) return;
    float p = cycle / sweepDur;
    float bandW = w * 0.42f;
    float sx = x - bandW + (w + bandW * 2.0f) * p;

    Gdiplus::GraphicsState st = g.Save();
    Gdiplus::GraphicsPath clipPath;
    MakeRoundPath(clipPath, x, y, w, h, r);
    g.SetClip(&clipPath);

    Gdiplus::PointF quad[4] = {
        { sx,                y },
        { sx + bandW,        y },
        { sx + bandW - 28.f, y + h },
        { sx - 28.f,         y + h },
    };
    Gdiplus::LinearGradientBrush sheen(
        Gdiplus::PointF(sx - 14.0f, y),
        Gdiplus::PointF(sx + bandW - 14.0f, y + h),
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

static void DrawSakuraPetals(Gdiplus::Graphics& g) {
    Gdiplus::GraphicsPath petal;
    petal.AddBezier(0.0f, -5.0f,  4.2f, -2.5f,  4.5f, 3.0f,  0.0f, 5.2f);
    petal.AddBezier(0.0f,  5.2f, -4.5f,  3.0f, -4.2f, -2.5f, 0.0f, -5.0f);
    petal.CloseFigure();

    for (const auto& p : g_petals) {
        Gdiplus::GraphicsState st = g.Save();
        g.TranslateTransform(p.x, p.y);
        g.RotateTransform(p.rot);
        g.ScaleTransform(p.scale, p.scale * 0.72f);
        Gdiplus::Color col = p.warm
            ? Gdiplus::Color(p.alpha, 244, 212, 232)
            : Gdiplus::Color(p.alpha, 218, 206, 246);
        Gdiplus::SolidBrush br(col);
        g.FillPath(&br, &petal);
        g.Restore(st);
    }
}

static void DrawRainStreaks(Gdiplus::Graphics& g, float offX, float offY) {
    for (const auto& r : g_rain) {
        Gdiplus::Pen pen(Gdiplus::Color(r.alpha, 204, 218, 238), 1.0f);
        float rx = offX + r.x;
        float ry = offY + r.y;
        g.DrawLine(&pen, rx, ry, rx + r.len * 0.08f, ry - r.len);
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
    g.SetInterpolationMode(Gdiplus::InterpolationModeHighQualityBicubic);
    g.SetTextRenderingHint(Gdiplus::TextRenderingHintAntiAliasGridFit);

    // ---- 1. Crisp scenic anime backdrop + gentle drifting sakura petals
    if (g_imgBgClear) {
        g.DrawImage(g_imgBgClear, 0, 0);
    } else {
        Gdiplus::SolidBrush fallback(GCol(255, C_BG));
        g.FillRectangle(&fallback, 0, 0, cw, CW_H);
    }
    DrawSakuraPetals(g);

    // ---- 2. Minimal frosted title strip
    {
        FillFrostedCard(g, 0.0f, 0.0f, static_cast<float>(cw), static_cast<float>(TITLE), 0.0f,
                        Gdiplus::Color(86, 11, 12, 20), Gdiplus::Color(0, 0, 0, 0), false);
        Gdiplus::Pen sep(Gdiplus::Color(36, 255, 255, 255), 1.0f);
        g.DrawLine(&sep, 0.0f, static_cast<float>(TITLE - 1), static_cast<float>(cw), static_cast<float>(TITLE - 1));

        if (g_imgChibi) {
            g.DrawImage(g_imgChibi, Gdiplus::RectF(14.0f, 7.0f, 28.0f, 28.0f),
                        0.0f, 0.0f, static_cast<float>(g_imgChibi->GetWidth()),
                        static_cast<float>(g_imgChibi->GetHeight()), Gdiplus::UnitPixel);
        }

        DrawTextG(g, 48.0f, 13.0f, L"HVHGOD SLUTS", GCol(255, C_TEXT), 13.5f, Gdiplus::FontStyleBold);

        {
            const std::wstring badge = L"INTERNAL";
            float bw = MeasureTextG(g, badge, 9.5f, Gdiplus::FontStyleBold) + 18.0f;
            float bx = 158.0f;
            FillRoundSolid(g, bx, 11.5f, bw, 19.0f, 9.5f,
                           Gdiplus::Color(48, 255, 255, 255), Gdiplus::Color(70, 255, 255, 255), 1.0f);
            float btw = MeasureTextG(g, badge, 9.5f, Gdiplus::FontStyleBold);
            DrawTextG(g, bx + (bw - btw) * 0.5f, 15.0f, badge,
                      GCol(240, C_TEXT), 9.5f, Gdiplus::FontStyleBold);
            DrawTextG(g, bx + bw + 12.0f, 14.0f, L"local runtime \u00b7 v28", GCol(205, C_DIM), 11.0f);
        }

        float minX = static_cast<float>(cw - 88);
        float clsX = static_cast<float>(cw - 46);
        float mH = g_isRenderMode ? (g_hover == 100 ? 1.0f : 0.0f) : g_winAnim[0];
        float cH = g_isRenderMode ? (g_hover == 101 ? 1.0f : 0.0f) : g_winAnim[1];
        if (mH > 0.01f) {
            FillRoundSolid(g, minX, 6.0f, 36.0f, 30.0f, 8.0f,
                           Gdiplus::Color(static_cast<BYTE>(48.0f * mH), 255, 255, 255));
        }
        {
            Gdiplus::Pen mp(GCol(static_cast<BYTE>(205 + 50 * mH), C_DIM), 1.5f);
            g.DrawLine(&mp, minX + 12.0f, 21.5f, minX + 24.0f, 21.5f);
        }
        if (cH > 0.01f) {
            FillRoundSolid(g, clsX, 6.0f, 36.0f, 30.0f, 8.0f,
                           Gdiplus::Color(static_cast<BYTE>(185.0f * cH), 188, 54, 108));
        }
        {
            Gdiplus::Pen cp(GCol(245, C_TEXT), 1.6f);
            g.DrawLine(&cp, clsX + 13.0f, 16.0f, clsX + 23.0f, 26.0f);
            g.DrawLine(&cp, clsX + 23.0f, 16.0f, clsX + 13.0f, 26.0f);
        }
    }

    // ---- 3. Left Column: Frosted Hero Header Banner (x=22, y=56, w=626, h=88)
    {
        float bx = 22.0f, by = 56.0f, bw = 626.0f, bh = 88.0f;
        FillFrostedCard(g, bx, by, bw, bh, 16.0f,
                        Gdiplus::Color(28, 16, 17, 28), Gdiplus::Color(66, 255, 255, 255), true);

        float ax = bx + 14.0f, ay = by + 12.0f, as = 64.0f;
        if (g_imgAvatar) {
            DrawImageClippedCircle(g, g_imgAvatar, ax, ay, as,
                                   0.0f, 0.0f, static_cast<float>(g_imgAvatar->GetWidth()),
                                   static_cast<float>(g_imgAvatar->GetHeight()));
        }
        {
            Gdiplus::LinearGradientBrush avRing(
                Gdiplus::PointF(ax, ay), Gdiplus::PointF(ax + as, ay + as),
                Gdiplus::Color(185, 255, 255, 255), GCol(215, C_ROSE2));
            Gdiplus::Pen avPen(&avRing, 1.6f);
            g.DrawEllipse(&avPen, ax, ay, as, as);
        }

        DrawTextG(g, bx + 94.0f, by + 16.0f, L"HVHGOD SLUTS", Gdiplus::Color(90, 0, 0, 0), 23.0f, Gdiplus::FontStyleBold);
        DrawTextG(g, bx + 93.0f, by + 15.0f, L"HVHGOD SLUTS", GCol(255, C_TEXT), 23.0f, Gdiplus::FontStyleBold);
        DrawTextG(g, bx + 94.0f, by + 48.0f, L"cheat cracked \u2014 no loader, no server, no leash", GCol(215, C_DIM), 11.5f);

        std::wstring state = L"runtime: " + g_runtime;
        COLORREF sc = g_runtime == L"loose" ? C_OK :
                      g_runtime == L"dead" ? C_DIM : C_EMBER;
        float stw = MeasureTextG(g, state, 11.0f, Gdiplus::FontStyleBold);
        float pw = stw + 34.0f;
        float px = bx + bw - 16.0f - pw;
        float py = by + 16.0f;
        float dotPulse = 0.5f + 0.5f * std::sinf(t * 2.2f);
        FillRoundSolid(g, px, py, pw, 26.0f, 13.0f,
                       GCol(38, sc), GCol(115, sc), 1.0f);
        DrawSoftDot(g, px + 14.0f, py + 13.0f, 3.4f, sc, dotPulse);
        DrawTextG(g, px + 24.0f, py + 6.0f, state, GCol(255, sc), 11.0f, Gdiplus::FontStyleBold);

        std::wstring entryTxt = L"entry 0x41FCA0 \u00b7 6 gates torn out";
        float ew = MeasureTextG(g, entryTxt, 10.5f);
        DrawTextG(g, bx + bw - 16.0f - ew, by + 50.0f, entryTxt, GCol(195, C_DIM), 10.5f);
    }

    // ---- 4. Three frosted status cards (y=158, h=82, w=200 each, gap=13 -> 626px total)
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
        float pulse = 0.5f + 0.5f * std::sinf(t * 2.0f);
        for (int i = 0; i < 3; i++) {
            float x = 22.0f + static_cast<float>(i * (cwid + gap));
            float fy = static_cast<float>(y);
            float fw = static_cast<float>(cwid);
            float chov = g_isRenderMode ? 0.0f : g_cardAnim[i];
            COLORREF ac = cards[i].ok ? C_OK : C_RED;

            Gdiplus::Color tint(static_cast<BYTE>(28.0f - 14.0f * chov),
                                static_cast<BYTE>(18 + 30 * chov),
                                static_cast<BYTE>(20 + 32 * chov),
                                static_cast<BYTE>(32 + 42 * chov));
            Gdiplus::Color brd(static_cast<BYTE>(55.0f + 55.0f * chov), 255, 255, 255);
            FillFrostedCard(g, x, fy, fw, 82.0f, 14.0f, tint, brd, true);

            FillRoundSolid(g, x + 1.5f, fy + 16.0f, 2.5f, 50.0f, 1.2f, GCol(205, ac));
            DrawTextG(g, x + 15.0f, fy + 12.0f, cards[i].title, GCol(210, C_DIM), 10.0f, Gdiplus::FontStyleBold);
            DrawSoftDot(g, x + fw - 17.0f, fy + 17.0f, 3.4f, ac, pulse);

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
        FillFrostedCard(g, 22.0f, y, fbw, 24.0f, 12.0f,
                        Gdiplus::Color(40, 188, 54, 108), Gdiplus::Color(95, 214, 76, 132), false);
        DrawTextG(g, 22.0f + (fbw - flw) * 0.5f, y + 6.0f, fLbl,
                  GCol(255, C_TEXT), 9.5f, Gdiplus::FontStyleBold);

        float cx = 22.0f + fbw + 10.0f;
        for (auto& c : g_chips) {
            float tw = MeasureTextG(g, c.name, 10.5f, Gdiplus::FontStyleBold);
            float bw = tw + 28.0f;
            if (cx + bw > 648.0f) break;
            COLORREF cc = c.ok ? C_OK : C_RED;
            FillFrostedCard(g, cx, y, bw, 24.0f, 12.0f,
                            c.ok ? Gdiplus::Color(42, 16, 140, 96) : Gdiplus::Color(34, 24, 18, 30),
                            c.ok ? Gdiplus::Color(125, 74, 212, 148) : Gdiplus::Color(52, 255, 255, 255),
                            false);
            DrawSoftDot(g, cx + 11.5f, y + 12.0f, 2.7f, cc, 0.35f);
            DrawTextG(g, cx + 20.0f, y + 5.0f, c.name,
                      c.ok ? Gdiplus::Color(255, 215, 248, 232) : Gdiplus::Color(225, 218, 224, 235),
                      10.5f, Gdiplus::FontStyleBold);
            cx += bw + 7.0f;
        }
    }

    // ---- 6. Frosted Dark Glass Terminal / SPAWN LOG (x=22, y=292, w=626, h=260)
    {
        float tx = 22.0f, ty = 292.0f, tw = 626.0f, th = 260.0f;
        FillFrostedCard(g, tx, ty, tw, th, 16.0f,
                        Gdiplus::Color(118, 10, 11, 18), Gdiplus::Color(62, 255, 255, 255), true);

        Gdiplus::Pen divPen(Gdiplus::Color(32, 255, 255, 255), 1.0f);
        g.DrawLine(&divPen, tx + 1.0f, ty + 34.0f, tx + tw - 1.0f, ty + 34.0f);

        // Minimal clean chevron glyph >_
        {
            Gdiplus::Pen cpen(GCol(220, C_ROSE2), 1.5f);
            g.DrawLine(&cpen, tx + 16.0f, ty + 13.0f, tx + 21.0f, ty + 17.0f);
            g.DrawLine(&cpen, tx + 21.0f, ty + 17.0f, tx + 16.0f, ty + 21.0f);
            g.DrawLine(&cpen, tx + 23.0f, ty + 21.0f, tx + 29.0f, ty + 21.0f);
        }
        DrawTextG(g, tx + 38.0f, ty + 10.5f, L"SPAWN LOG", GCol(245, C_TEXT), 10.5f, Gdiplus::FontStyleBold);

        if (g_running) {
            DWORD el = (GetTickCount() - g_startTick) / 1000;
            wchar_t tb[64];
            swprintf_s(tb, L"%02u:%02u", el / 60, el % 60);
            float tbW = MeasureTextG(g, tb, 10.0f, Gdiplus::FontStyleBold);
            float pillW = tbW + 22.0f;
            float pillX = tx + tw - 14.0f - pillW;
            FillRoundSolid(g, pillX, ty + 7.0f, pillW, 20.0f, 10.0f,
                           GCol(48, C_EMBER), GCol(130, C_EMBER), 1.0f);
            DrawTextG(g, pillX + (pillW - tbW) * 0.5f, ty + 10.5f, tb, GCol(255, C_EMBER), 10.0f, Gdiplus::FontStyleBold);
        } else {
            const std::wstring rLbl = L"READY";
            float rw = MeasureTextG(g, rLbl, 9.5f, Gdiplus::FontStyleBold);
            float pillW = rw + 22.0f;
            float pillX = tx + tw - 14.0f - pillW;
            FillRoundSolid(g, pillX, ty + 7.0f, pillW, 20.0f, 10.0f,
                           GCol(34, C_SLATE), GCol(95, C_SLATE), 1.0f);
            DrawTextG(g, pillX + (pillW - rw) * 0.5f, ty + 11.0f, rLbl, GCol(240, C_SLATE), 9.5f, Gdiplus::FontStyleBold);
        }

        int ch = static_cast<int>(th);
        float lineY = ty + 43.0f;
        int rows = (ch - 52) / 16;
        int total = static_cast<int>(g_log.size());
        int first = total > rows ? total - rows : 0;
        if (total == 0) {
            DrawTextG(g, tx + 18.0f, ty + 46.0f, L"// awaiting summon sequence... press SUMMON to start runtime",
                      Gdiplus::Color(145, 166, 176, 198), 10.5f, Gdiplus::FontStyleRegular, L"Consolas");
        }
        for (int i = first; i < total; i++) {
            const std::wstring& s = g_log[i];
            COLORREF c = C_DIM;
            if (s.find(L"[error]") != std::wstring::npos || s.find(L"FAIL") != std::wstring::npos ||
                s.find(L"failed") != std::wstring::npos) c = C_RED;
            else if (s.find(L"===") != std::wstring::npos) c = C_ROSE2;
            else if (s.find(L"  ") == 0) c = C_TEXT;
            std::wstring lt = s;
            if (lt.size() > 96) lt = lt.substr(0, 95) + L"\u2026";
            DrawTextG(g, tx + 16.0f, lineY, lt, GCol(245, c), 10.5f, Gdiplus::FontStyleRegular, L"Consolas");
            lineY += 16.0f;
        }
    }

    // ---- 7. Action Buttons (y=566, h=48) with smooth ease-out hover
    for (int bi = 0; bi < 4; bi++) {
        const auto& b = g_btns[bi];
        bool disabled = (b.id == 1 && g_running) || (b.id == 2 && !g_running);
        float hoverAmt = g_isRenderMode ? (g_hover == b.id ? 1.0f : 0.0f) : g_btnAnim[bi];
        if (disabled) hoverAmt = 0.0f;
        float bx = static_cast<float>(b.x);
        float by = static_cast<float>(b.y) - hoverAmt * 1.5f;
        float bw = static_cast<float>(b.w);
        float bh = static_cast<float>(b.h);

        if (b.id == 1) {
            if (!disabled) {
                BYTE ga = static_cast<BYTE>(20.0f + 36.0f * hoverAmt);
                FillRoundSolid(g, bx - 2.5f, by - 2.5f, bw + 5.0f, bh + 5.0f, 15.5f,
                               Gdiplus::Color(ga, 188, 54, 108));
                FillRoundGlass(g, bx, by, bw, bh, 13.0f,
                               hoverAmt > 0.3f ? GCol(250, C_ROSE2) : GCol(240, C_ROSE),
                               GCol(245, C_PLUM),
                               Gdiplus::Color(static_cast<BYTE>(100 + 80 * hoverAmt), 255, 255, 255), 1.0f, true);
                DrawShineSweep(g, bx, by, bw, bh, 13.0f, 5.5f, 0.85f, t + 1.0f, 44);
            } else {
                FillFrostedCard(g, bx, by, bw, bh, 13.0f,
                                Gdiplus::Color(60, 16, 17, 28), Gdiplus::Color(40, 255, 255, 255), false);
            }
            Gdiplus::Color tc = disabled ? GCol(140, C_DIM) : GCol(255, C_TEXT);
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
            COLORREF accent = (b.id == 2) ? C_RED : (b.id == 3 ? C_SLATE : C_ROSE2);
            Gdiplus::Color tint(static_cast<BYTE>(28.0f + 44.0f * hoverAmt),
                                static_cast<BYTE>(18.0f + (GetRValue(accent) - 18.0f) * hoverAmt * 0.35f),
                                static_cast<BYTE>(20.0f + (GetGValue(accent) - 20.0f) * hoverAmt * 0.35f),
                                static_cast<BYTE>(32.0f + (GetBValue(accent) - 32.0f) * hoverAmt * 0.35f));
            Gdiplus::Color brd(static_cast<BYTE>(58.0f + 115.0f * hoverAmt),
                               static_cast<BYTE>(255.0f + (GetRValue(accent) - 255.0f) * hoverAmt),
                               static_cast<BYTE>(255.0f + (GetGValue(accent) - 255.0f) * hoverAmt),
                               static_cast<BYTE>(255.0f + (GetBValue(accent) - 255.0f) * hoverAmt));
            FillFrostedCard(g, bx, by, bw, bh, 13.0f, tint, brd, true);
            Gdiplus::Color tc = disabled ? GCol(135, C_DIM) : GCol(255, C_TEXT);
            float tw = MeasureTextG(g, b.label, 12.0f, Gdiplus::FontStyleBold);
            DrawTextG(g, bx + (bw - tw) * 0.5f, by + 17.0f, b.label, tc, 12.0f, Gdiplus::FontStyleBold);
        }
    }

    // ---- 8. Right Column: Crisp Anime Showcase Card (x=664, y=56, w=274, h=394) with gentle rain
    {
        float sx = 664.0f, sy = 56.0f, sw = 274.0f, sh = 394.0f;
        if (g_imgHero) {
            DrawImageClippedRound(g, g_imgHero, sx, sy, sw, sh, 18.0f,
                                  0.0f, 0.0f, static_cast<float>(g_imgHero->GetWidth()),
                                  static_cast<float>(g_imgHero->GetHeight()));
        } else {
            FillRoundSolid(g, sx, sy, sw, sh, 18.0f, GCol(255, C_CARD));
        }

        {
            Gdiplus::GraphicsState st = g.Save();
            Gdiplus::GraphicsPath clipPath;
            MakeRoundPath(clipPath, sx, sy, sw, sh, 18.0f);
            g.SetClip(&clipPath);

            // Subtle atmospheric rain streaks matching the rainy street artwork
            DrawRainStreaks(g, sx, sy);

            Gdiplus::LinearGradientBrush fade(
                Gdiplus::PointF(sx, sy + sh * 0.54f),
                Gdiplus::PointF(sx, sy + sh),
                Gdiplus::Color(0, 10, 11, 18),
                Gdiplus::Color(235, 10, 11, 18));
            g.FillRectangle(&fade, sx, sy + sh * 0.54f, sw, sh * 0.46f);
            g.Restore(st);
        }

        {
            Gdiplus::GraphicsPath bp;
            MakeRoundPath(bp, sx, sy, sw, sh, 18.0f);
            Gdiplus::Pen pen(Gdiplus::Color(72, 255, 255, 255), 1.0f);
            g.DrawPath(&pen, &bp);
        }

        // Top-right badge on showcase card
        {
            bool live = g_cs2Pid != 0;
            COLORREF bc = live ? C_OK : C_SLATE;
            const wchar_t* btxt = live ? L"TARGET LIVE" : L"STANDBY";
            float btw = MeasureTextG(g, btxt, 9.5f, Gdiplus::FontStyleBold);
            float bpw = btw + 26.0f;
            float bpx = sx + sw - 12.0f - bpw;
            float bpy = sy + 12.0f;
            float pulse = 0.5f + 0.5f * std::sinf(t * 2.1f);
            FillRoundSolid(g, bpx, bpy, bpw, 22.0f, 11.0f,
                           Gdiplus::Color(175, 12, 13, 22), GCol(110, bc), 1.0f);
            DrawSoftDot(g, bpx + 11.0f, bpy + 11.0f, 2.7f, bc, pulse);
            DrawTextG(g, bpx + 19.0f, bpy + 5.0f, btxt, GCol(255, bc), 9.5f, Gdiplus::FontStyleBold);
        }

        // Clean bottom caption
        {
            const std::wstring coreTag = L"HVHGOD // INTERNAL";
            float ctw = MeasureTextG(g, coreTag, 9.5f, Gdiplus::FontStyleBold);
            float cpw = ctw + 20.0f;
            FillRoundGlass(g, sx + 16.0f, sy + sh - 82.0f, cpw, 20.0f, 10.0f,
                           GCol(195, C_ROSE), GCol(195, C_PLUM),
                           Gdiplus::Color(100, 255, 255, 255), 0.8f, false);
            DrawTextG(g, sx + 16.0f + (cpw - ctw) * 0.5f, sy + sh - 77.5f,
                      coreTag, GCol(255, C_TEXT), 9.5f, Gdiplus::FontStyleBold);
        }
        DrawTextG(g, sx + 16.0f, sy + sh - 55.0f, L"Local Runtime", GCol(255, C_TEXT), 16.5f, Gdiplus::FontStyleBold);
        DrawTextG(g, sx + 16.0f, sy + sh - 30.0f, L"Standalone CS2 engine \u00b7 No server", GCol(215, C_DIM), 10.5f);

        // ---- 9. Bottom Right Frosted Chibi & Specs Card (x=664, y=464, w=274, h=150)
        float cy = 464.0f, ch = 150.0f;
        FillFrostedCard(g, sx, cy, sw, ch, 18.0f,
                        Gdiplus::Color(34, 16, 17, 28), Gdiplus::Color(62, 255, 255, 255), true);

        // Transparent chibi resting directly on the frosted glass
        float csx = sx + 14.0f, csy = cy + 18.0f, csw = 112.0f, csh = 112.0f;
        if (g_imgChibi) {
            g.DrawImage(g_imgChibi, Gdiplus::RectF(csx, csy, csw, csh),
                        0.0f, 0.0f, static_cast<float>(g_imgChibi->GetWidth()),
                        static_cast<float>(g_imgChibi->GetHeight()), Gdiplus::UnitPixel);
        }

        // 3 clean info pills beside chibi
        struct Spec { const wchar_t* k; const wchar_t* v; COLORREF c; };
        Spec specs[3] = {
            { L"MENU KEY", L"INSERT",     C_ROSE2 },
            { L"SECURITY", L"6 STRIPPED", C_SLATE },
            { L"RUNTIME",  L"WIN32 x64",  C_OK    },
        };
        float spX = csx + csw + 10.0f;
        float spW = sx + sw - 14.0f - spX;
        for (int i = 0; i < 3; i++) {
            float spY = cy + 15.0f + static_cast<float>(i) * 42.0f;
            FillRoundSolid(g, spX, spY, spW, 36.0f, 10.0f,
                           Gdiplus::Color(72, 12, 13, 22), Gdiplus::Color(44, 255, 255, 255), 1.0f);
            FillRoundSolid(g, spX + 1.5f, spY + 9.0f, 2.5f, 18.0f, 1.2f, GCol(215, specs[i].c));
            DrawTextG(g, spX + 10.0f, spY + 4.5f, specs[i].k, GCol(195, C_DIM), 9.2f, Gdiplus::FontStyleBold);
            DrawTextG(g, spX + 10.0f, spY + 17.5f, specs[i].v, GCol(255, C_TEXT), 11.0f, Gdiplus::FontStyleBold);
        }
    }

    // ---- 10. Footer
    DrawTextG(g, 24.0f, static_cast<float>(CW_H - 25),
              L"press INSERT in game \u00b7 everything dies quietly", GCol(195, C_DIM), 10.0f);
    std::wstring fRight = L"HVHGOD \u00b7 FROSTED ANIME EDITION";
    float frW = MeasureTextG(g, fRight, 10.0f, Gdiplus::FontStyleBold);
    DrawTextG(g, static_cast<float>(cw) - 24.0f - frW, static_cast<float>(CW_H - 25),
              fRight, GCol(190, C_DIM), 10.0f, Gdiplus::FontStyleBold);

    {
        Gdiplus::GraphicsPath wp;
        MakeRoundPath(wp, 0.5f, 0.5f, static_cast<float>(cw - 1), static_cast<float>(CW_H - 1), 19.0f);
        Gdiplus::Pen wpen(Gdiplus::Color(62, 255, 255, 255), 1.0f);
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
        int h = -1, hc = -1;
        RECT rc; GetClientRect(hwnd, &rc);
        if (x >= rc.right - 90 && x < rc.right - 49 && y < TITLE) h = 100;
        else if (x >= rc.right - 49 && y < TITLE) h = 101;
        for (auto& b : g_btns)
            if (x >= b.x && x < b.x + b.w && y >= b.y && y < b.y + b.h) h = b.id;
        for (int i = 0; i < 3; i++) {
            int cx = 22 + i * 213;
            if (x >= cx && x < cx + 200 && y >= 158 && y < 240) hc = i;
        }
        g_hoverCard = hc;
        if (h != g_hover) { g_hover = h; InvalidateRect(hwnd, nullptr, FALSE); }
        TRACKMOUSEEVENT tme{ sizeof(tme), TME_LEAVE, hwnd, 0 };
        TrackMouseEvent(&tme);
        return 0;
    }
    case WM_MOUSELEAVE:
        g_hover = -1;
        g_hoverCard = -1;
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
    SetTimer(g_hwnd, 3, 16, nullptr);     // 60fps smooth sakura, rain & hover easing

    MSG msg;
    while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    FreeAnimeAssets();
    Gdiplus::GdiplusShutdown(g_gdipToken);
    return 0;
}
