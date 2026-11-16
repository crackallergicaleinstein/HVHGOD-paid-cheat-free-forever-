# Architecture

How the standalone build works, and why each piece exists.

## The image

`payload.clean.dll` is a 60,192,400-byte PE32+ image (`ImageBase 0x180000000`,
entry `0x41FCA0`). It is the cheat itself: rage bot, legit bot, ESP, skin changer,
config system. It is not a loader and it is not a stub — everything is inside.

It ships gated. On a normal run it asks an external loader for permission before
it enables anything, and the loader answers over an in-process callback bound to
a 32-byte launch key. Without that answer the runtime initialises, reports
`INITIALIZATION_SUCCESS`, and then disables every feature.

## The six patches

`tools\strip_gates.ps1` rewrites six function prologues. All of them are
bool-returning functions, so `mov al,1 ; ret` is a complete replacement.

| # | RVA | Purpose | Patch |
|---|---|---|---|
| 1 | `0x001950` | signed-delivery verifier (header hash over the whole image) | `B0 01 C3` |
| 2 | `0x0A9120` | loader bridge init — requires the vendor bridge object | `B0 01 C3` |
| 3 | `0x166F60` | bridge process binding | `B0 01 C3` |
| 4 | `0x0E5780` | 60-second lease watchdog | `C3` (never runs) |
| 5 | `0x41F290` | unload/disable routine — sets the global that kills features | `C3` |
| 6 | `0x0E4230` | AUTH — the only writer of the feature-enable byte | see below |

Patch 6 is the interesting one. `DAT_21468219048` (RVA `0xBB9048`) is the single
byte that gates every feature; exactly one function reads it, and AUTH is the only
writer. AUTH also runs before the render/input readiness wait, and that wait
blocks on two more bytes (`0xC70E20`, `0xC70E21`) which a manually mapped image
never satisfies while the game sits in a menu. So the stub seeds all three and
returns success:

```asm
C6 05 11 4E AD 00 01   mov byte ptr [rip+0xAD4E11], 1   ; 0xBB9048 enable
C6 05 E3 CB B8 00 01   mov byte ptr [rip+0xB8CBE3], 1   ; 0xC70E21 input
C6 05 DB CB B8 00 01   mov byte ptr [rip+0xB8CBDB], 1   ; 0xC70E20 render
B0 01                  mov al, 1
C3                     ret
```

All three writes are RIP-relative, which keeps them valid when the image is
relocated — the preferred base `0x180000000` is usually taken.

## The pipeline

`work\run-standalone.ps1`, seven steps:

```
1  preflight      payload present, manifest present, no vendor loader alive
2  stage          copy the signed offsets manifest into the runtime bridge dir
3  launch         steam://rungameid/730, wait for cs2.exe, wait for the engine
4  map            loader\XMap.cs maps the patched image into cs2.exe
4b repair         iatfix --force rewrites every import slot
5  attach         caller.exe invokes entry 0x41FCA0 with the handshake block
5b wipe           iatfix wipe clears the DOS magic after attach
6  sweep          optional TLS slot sweep (the image has no TLS callbacks)
7  verify         read the runtime log and report
```

### Why Steam launches the game

VAC verifies the game it launched. A `cs2.exe` started directly by the pipeline is
not part of Steam's launch chain, and VAC answers with *"game files have been
detected to have no signatures or invalid signatures"* and refuses secure
servers. Launching through Steam and mapping the process Steam started is the
path the official loader uses too. `-DirectLaunch` exists for debugging only.

### Why imports are repaired

The mapper resolves imports from modules already loaded in the game. `d2d1.dll`
is not one of them, so its slot stays `FFFFFFFFFFFFFFFF` and the first Direct2D
call faults — that is the Configs-tab crash at `hvhgod-cheat.dll+0x1CD1BC`:

```
1801CD1BC: FF 15 C6 86 49 00   call qword ptr [180665888h]   ; d2d1!Ordinal 1
```

`iatfix` loads the missing module into the target and rewrites every slot,
resolving the d2d1 ordinal from `System32\d2d1.dll`'s export table rather than
`GetProcAddress`. It raises `PAGE_READWRITE` on the IAT page for the write,
because the image is mapped read-execute.

### Why the DOS magic is cleared

A private memory region that starts with `MZ`/`PE` is what a fileless-module
scanner looks for. Two bytes are zeroed after attach. It must happen *after*:
the runtime reads `e_lfanew` at `+0x3C` while attaching, and clearing it earlier
makes `DllMain` return 0 and the init aborts.

## Memory layout decisions

- the image is committed `PAGE_READWRITE` and each section is given its real
  protection afterwards, so nothing is `RWX` at rest
- `XMAP_LINK` stays unset, so no `LDR_DATA_TABLE_ENTRY` is inserted and the image
  never appears in the PEB module list
- TLS callbacks are disabled (`XMAP_NOCB=1`) because they fault inside ntdll when
  a manually mapped image is relocated

## Offsets

The runtime reads its offsets manifest from disk:

```
%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Bridge\Offsets\offsets.bridge
```

It validates a `HMAC-SHA256`-derived feature key over the bundle signature — the
ECDSA certificate check lives in the loader only, which is why a genuine captured
manifest is accepted with no loader present. `data\offsets.genuine.bridge` is that
manifest: 275,418 bytes, 3,071 entries, 168 modules, version 28.

After a CS2 update the manifest goes stale and features lose their addresses.
Replace the file; the patches do not change.

## Configs

The config library is read from `Bridge\Configuration\config-library.bridge` and
written by the runtime on save. It is per-machine by design: nothing ships it, so
no repository ever carries somebody else's profiles.

## Logs

Everything the verification step reads comes from

```
%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Logs\
```

`Lifecycle\runtime.log` holds init and lifecycle events, `Bridge\bridge.log` the
feature handshake, `Misc\features.log` the feature bindings, `Crashes\errors.log`
the fault records.
