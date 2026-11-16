# HVHGOD SLUTS launcher — design brief for an AI

This folder is a self-contained Win32 launcher skin. You may rewrite the drawing
code freely. Do not change the behaviour contract below.

- Source: `src/launcher.cpp` (single file, C++20, no dependencies beyond Win32)
- Build: `build.bat` → `bin\hvhgod-launcher.exe` (needs VS2022 BuildTools, `cl /W4`)
- Preview without a window: `bin\hvhgod-launcher.exe --render out.bmp`
- Window: `W = 860`, `H = 600` content, `TITLE = 38` strip on top, client `860x638`

## What the app is

A launcher for a game-internal cheat runtime that runs with no vendor loader and
no network. One button starts a PowerShell pipeline that launches the game, maps
a patched payload and invokes its entry; the window then reports live state read
from the runtime's own log files.

## Behaviour contract — do not break

| Surface | Keep these exact semantics |
|---|---|
| `ResolvePaths()` | walks up from the exe to find `work\run-standalone.ps1`; resolves `cs2.exe` from a candidate list then `game.txt` |
| `StartJob()` | spawns `powershell -File <root>\work\run-standalone.ps1 -WatchMinutes 1 [-Game <path>]` |
| `JobThread()` / `PumpLine()` | posts lines to `g_hwnd` with `WM_APP+2`; never use `GetActiveWindow()` from the worker |
| `RefreshState()` | sets `g_chips`; a chip is green only while the game is alive, the log is <5 min old, and no `UNLOAD_REQUESTED`/`UNLOAD_INCOMPLETE` follows the last `INITIALIZATION_SUCCESS` |
| Buttons | id 1 SUMMON (start pipeline), 2 BANISH (kill pipeline + cs2), 3 REFRESH, 4 open the log folder |
| Hit boxes | `g_btns[]` must stay in sync with whatever is drawn |

If a design needs more room, change `W`/`H` and the button rects together; nothing
else depends on the pixel size.

## The design surface

Everything visual lives in these places. Restyle only these.

1. **Palette** — the `static const COLORREF C_*` block at the top.
2. **Geometry constants** — `W`, `H`, `TITLE`, and the `g_btns[]` rects.
3. **`Paint(HDC, int cw)`** — the whole frame, top to bottom:
   - title strip, brand block, three status cards, feature chips, console, buttons, footer
4. **`DevilHead(...)`** — the demon mark, pure polygon geometry (horns, eye slits, teeth). No bitmap.
5. **`DsMark(...)`** — the horned tile mark: rounded square, glyph, two horns.

Helpers available: `Fill`, `Round`, `Poly`, `Text`, `TextW`, `Font`. All drawing is
GDI, double-buffered in `WM_PAINT`; the same `Paint` is used by `--render`.

## Live state the design can show

| Variable | Meaning |
|---|---|
| `g_runtime` | `dead` / `body only` / `loose` / `summoning` |
| `g_cs2Pid` | non-zero while `cs2.exe` runs |
| `g_chips` | `awake rage legit vision hooks sync configs`, each `ok` bool |
| `g_log` | pipeline output lines, oldest first, tail of the last N |
| `g_running` | a pipeline is in flight; `g_startTick` gives elapsed ms |
| `g_game` | resolved `cs2.exe` path |

Counts worth surfacing: `W*H` fixed, console rows = `(ch - 36) / 16`.

## House style the client asked for

Dark, violent, profane. Blood red `#AA1A1A` and ember `#E46A1C` over near-black.
Devil imagery, no real photographs. No vendor site links anywhere. Keep the copy
loud; keep the layout legible.

## Rules

- `/W4 /permissive-` must stay clean — no new warnings.
- No new link libraries without a comment saying why.
- No external resources at runtime: everything drawn, no PNG/ICO loading.
- Never write to the target process from this exe; it only spawns the pipeline.
- End every reply with a build that compiles and a `--render` frame.

## Verification

```
build.bat
bin\hvhgod-launcher.exe --render shot.bmp
bin\hvhgod-launcher.exe
```

A frame that renders and a window that opens is the acceptance test. Buttons must
highlight on hover and the console must fill while a pipeline runs.
