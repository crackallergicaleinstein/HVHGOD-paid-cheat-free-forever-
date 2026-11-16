# HVHGOD internal — standalone runtime, no loader / no service / no network

Status: **working**. Verified 2026-11-16 02:18–02:19 on cs2 pid 19996.

> The run below was captured before the rage bot was switched off in this build.
> Rage bot is currently disabled; the line and the module are not part of a
> working session any more. Legit bot, vision, antiaim, movement and skins are.
> See `docs\TROUBLESHOOTING.md` -> "The rage bot does nothing".

```
INITIALIZATION_SUCCESS  state=loader_signaled core=validated events=ready render_input=ready
RENDER_RUNTIME_READY    backend=ready fonts=ready window_input=ready
LEGIT_BOT_INIT_SUCCESS  state=hooks_active
RAGE_BOT_INIT_SUCCESS   state=hooks_active
UI_GRAPHICS_PREPARED    tabs=8
MENU_INPUT_OWNERSHIP_ACQUIRED focused=1 cursor_visible=1
```

## How to run

```powershell
Stop-Process -Name hvhgod-internal,hvhgod-dumper -Force -ErrorAction SilentlyContinue
pwsh -File tools\strip_gates.ps1 -In dump\payload.clean.dll -Out work\payload.stripped.dll
pwsh -File work\run-standalone.ps1
```

Or use the launcher (same pipeline, one button):

```powershell
launcher\bin\hvhgod-launcher.exe
```

LAUNCH runs the pipeline and streams its output into the console box; STOP kills
the game; REFRESH re-reads the runtime log; OPEN LOGS opens the log folder.
The chips across the middle are live feature state, not decoration:

| chip | green when |
|---|---|
| `init` | `INITIALIZATION_SUCCESS` in this session |
| `rage` / `legit` | `*_BOT_INIT_SUCCESS ... state=hooks_active` |
| `render` | `RENDER_RUNTIME_READY` |
| `hooks` | `NATIVE_SELF_OVERHEAD_BINDINGS` (camera/HUD hooks bound) |
| `sync` | `SYNC_ROSTER` (presence/sync alive) |
| `cfg` | the config library bridge is staged |

A green chip only counts when `cs2.exe` is alive and `runtime.log` was written in
the last five minutes, so a stale log from a previous run cannot light it up.

Build the launcher:

```powershell
launcher\build.bat        # cl /W4 /permissive- /std:c++20 -> launcher\bin\hvhgod-launcher.exe
```

## Game launch: Steam must already be running

`cs2.exe` started while Steam is closed just wakes Steam, shows the library and
exits — the mapper then fails with `VirtualAllocEx 5`. `run-standalone.ps1`
now starts Steam and waits for it before starting the game. Do not launch cs2
through Steam either: a Steam-started game is high-integrity and cannot be
opened from a medium-token launcher.

## VAC and ranked — what the signature error means

Symptom, on joining a VAC-secured server:

```
Valve Anti-Cheat
Some of your game files have been detected to have no signatures or invalid
signatures. You will not be allowed to join VAC secure servers.
```

That is VAC's module signature check, not a gameplay restriction. A manually
mapped image is a private memory region with a PE header and no file behind it,
so it has no Authenticode signature to verify. Two things in our loader made it
easy to find:

1. **The whole image was committed RWX.** `XMap.cs:442` allocated
   `VirtualAllocEx(..., 0x3000, 0x40)`. One private executable region of 60 MB is
   the single loudest signature a scanner can look for.
2. **The PE headers stayed intact at the base** — a valid `MZ`/`PE` pair in
   private memory is exactly what a fileless-module scan matches.

Fixed:

- **the game is now launched through Steam** (`steam://rungameid/730`), exactly
  like the official loader does, and the pipeline maps into the process Steam
  started. A `cs2.exe` started directly is not part of Steam's launch chain and
  VAC answers with the signature message on its own. `-DirectLaunch` still
  exists for debugging but must not be used on VAC-secured servers.
- the image is committed `PAGE_READWRITE` and each section is given its real
  protection afterwards, so nothing is RWX at rest
- `iatfix wipe <pid> <base>` clears the two `MZ` bytes **after** the entry call
  has returned, because the runtime reads `e_lfanew` at `+0x3C` during attach
  (clearing it earlier makes `DllMain` return 0 and init aborts)
- `XMAP_LINK` stays unset, so no `LDR_DATA_TABLE_ENTRY` is inserted and the image
  never appears in the PEB module list

Verified after the change: Steam-launched cs2, map, `iatfix`, entry call
`exit=0x1`, `INITIALIZATION_SUCCESS`, rage/legit hooks active, MZ cleared.

Still open:

- a 60 MB private mapping is still a private mapping. If VAC keeps flagging it,
  the next step is to back the image with a section object instead of private
  commit, which changes its memory classification.
- if mapping a Steam-launched game fails with access denied, Steam is running
  elevated; start the launcher as administrator.

Do not test this on an account you care about: VAC bans are permanent and
hardware-linked.

## The Configs tab crash — fixed

Symptom: click Configs in the in-game menu and the game dies.

```
[Crash] NATIVE_EXCEPTION exception=ACCESS_VIOLATION location=hvhgod-cheat.dll+0x1CD1BC
        access=read address=0xFFFFFFFFFFFFFFFF
        rip=...  rbx=0x00000000FFAFAFAF
```

Disassembling the payload at that RVA gives the real cause:

```
1801CD1BC: FF 15 C6 86 49 00   call qword ptr [180665888h]
```

`0x180665888` is the import address table entry for **`d2d1.dll` Ordinal 1**
(`D2D1CreateFactory`). The Configs tab redraws through Direct2D, and the manual
mapper resolved imports only from modules already loaded in `cs2.exe` — `d2d1.dll`
is not one of them, so the slot was left as `FFFFFFFFFFFFFFFF` and the first call
faulted. It was never a config-data problem.

Fix: `tools\iatfix` loads the missing module into the target and rewrites every
import slot, resolving the d2d1 ordinal from `C:\Windows\System32\d2d1.dll`'s own
export table rather than `GetProcAddress`:

```
d2d1.dll   loaded at 0x8F980000
d2d1.dll   D2D1CreateFactory rva 0x51F40 -> 0x8F9D1F40
iatfix: 271 slots repaired, 0 already resolved
```

`run-standalone.ps1` runs it as step 4b, between mapping and the entry call, with
`--force` (rewrite every slot, not just the empty ones). The image is mapped RX,
so it raises `PAGE_READWRITE` on the IAT page for the write and restores it.

Build it with `tools\iatfix\build.bat`.

The config library is still staged by step 2 (`config-library.bridge`, 708 KB,
four configs) because the tab lists those entries — but it is not what crashed.

## The six patches

`tools\strip_gates.ps1` applies these to `dump\payload.clean.dll`. All are
prologue replacements of bool-returning functions, plus one teardown kill.

| # | RVA | Function | Stub | Why |
|---|---|---|---|---|
| 1 | `0x001950` | signed-delivery verifier | `mov al,1; ret` | the header hash covers the whole image, so any patch fails it |
| 2 | `0x0A9120` | loader bridge init | `mov al,1; ret` | requires the loader's in-process bridge object |
| 3 | `0x166F60` | bridge pid binding | `mov al,1; ret` | requires the bridge bound to this pid |
| 4 | `0x0E5780` | 60 s lease watchdog | `ret` | otherwise clears the enable byte every second |
| 5 | `0x41F290` | unload / disable routine | `ret` | sets `DAT_21468218ad0 \|= 1`, which disables every feature in the render path |
| 6 | `0x0E4230` | AUTH | 3 byte writes + `ret 1` | seeds the enable byte and the render/input readiness flags |

Patch 6 body:

```asm
C6 05 11 4E AD 00 01   mov byte ptr [rip+0xAD4E11], 1   ; 0xBB9048 feature enable
C6 05 E3 CB B8 00 01   mov byte ptr [rip+0xB8CBE3], 1   ; 0xC70E21 input seen
C6 05 DB CB B8 00 01   mov byte ptr [rip+0xB8CBDB], 1   ; 0xC70E20 render seen
B0 01                  mov al, 1
C3                     ret
```

The two readiness flags matter because a manually mapped image never fires the
render detour while the game sits in a menu; the init thread waits 8000 ms for
`DAT_214682d0e20` and then tears the runtime down with
`RUNTIME_READINESS_FAILURE ... render_input=0`.

## Offsets manifest — no loader needed

`0x1C9570` reads the manifest from disk:

```
%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Bridge\Offsets\offsets.bridge
```

It validates a `HMAC-SHA256`-derived feature key over the bundle signature, not
the ECDSA certificate (that lives in the loader only). The genuine 275,418-byte
bundle — `dump\offsets.genuine.bridge`, SHA-256
`53E0DA2BE02BD5913D3790FE5C1ACD81F56200B5DB5031ED2B2A8A9874584039` — passes. The
runner copies it into place before starting the game.

## Why the earlier attempts failed

* Replaying the token / writing bridge files / emulating the loader: the bridge
  is an in-process callback, those are never read.
* The original 2-byte patch at `0x41DE2D` (`test al,al` -> `mov al,1`) sat on an
  unrelated branch and flipped nothing that gates features.
* `dump\payload.patched.dll` has only that 2-byte change; none of the licence
  gates were touched.

## Gotchas

* Stop the loader and any stale `cs2` first. `UNLOAD_INCOMPLETE ... retain_mapping_and_ownership`
  means the previous mapping was never released and the next map will not take.
* `XMAP_NOCB=1` is required — TLS callbacks fault inside ntdll when mapped.
* `hvinject --call` takes the base **without** the `0x` prefix.
* `entry call: exit=0x1` is just DllMain's return; the real verdict is in
  `%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Logs\Lifecycle\runtime.log`.
* `4 unavailable` feature hooks are optional pattern misses; init proceeds.
* `master=0` in `PROJECTILE_ESP_STATUS` is the user's own feature master toggle,
  not a licence state.
* The image is relocated (preferred base `0x180000000` is occupied), so the
  byte-write stubs in patch 6 must stay RIP-relative — they are.
