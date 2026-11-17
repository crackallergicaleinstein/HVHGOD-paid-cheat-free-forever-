# File map

Everything in this folder, and where the source lives. The folders are not
empty — Windows Explorer shows folders at the top level, so open them.

## Source code

| File | Size | What it is |
|---|---|---|
| `launcher\src\launcher.cpp` | 62 KB | Win32 / GDI+ launcher: frosted glass UI, animations, state, pipeline driver |
| `launcher\src\anime_assets.h` | 1.3 MB | embedded anime artworks & transparent chibi assets |
| `tools\caller\caller.cpp` | 7 KB | builds the handshake block and invokes the image entry point |
| `tools\iatfix\iatfix.cpp` | 13 KB | repairs unresolved imports, clears the DOS magic |
| `loader\XMap.cs` | 37 KB | manual PE mapper (relocations, imports, `.pdata`, TLS) |
| `work\run-standalone.ps1` | 14 KB | the pipeline: preflight, stage, launch, map, attach, verify |
| `tools\strip_gates.ps1` | 5 KB | applies the six payload patches |
| `tools\bytepatch.ps1` | 4 KB | applies arbitrary byte edits from a JSON list, with an expect-check |
| `tools\split_decomp.ps1` | 2 KB | splits a Ghidra `decompiled.c` into the `decompiled\` tree |
| `tools\stealth.ps1` | 9 KB | scans a live process for RWX / private PE tells, scrubs the mapped header band |
| `tools\rage_seed.ps1` | 5 KB | seeds the rage master + autofire config flags the aim path checks |
| `tools\scrub_image.ps1` | 6 KB | zeroes vendor metadata (Rich header, timestamp, section names, PDB path) |
| `tools\gates.json` | 1 KB | the six patches expressed as data instead of code |
| `tools\ghidra\DumpDecomp.java` | 3 KB | regenerates the decompiled reference from the payload |
| `tools\overlay\overlay.cpp` | 8 KB | the loading card drawn over the game, driven by real progress |
| `tools\check-clean.ps1` | 2 KB | blocks personal data from being committed |
| `build.ps1` | 3 KB | builds all three binaries and runs the scan |

## Build files

| File | Builds |
|---|---|
| `launcher\build.bat` | `launcher\bin\hvhgod-launcher.exe` |
| `tools\overlay\build.bat` | `tools\overlay\bin\overlay.exe` |
| `tools\caller\build.bat` | `tools\caller\bin\caller.exe` |
| `tools\iatfix\build.bat` | `tools\iatfix\bin\iatfix.exe` |

## Binaries (built, not committed)

| File | Produced by |
|---|---|
| `launcher\bin\hvhgod-launcher.exe` | `launcher\build.bat` |
| `tools\caller\bin\caller.exe` | `tools\caller\build.bat` |
| `tools\iatfix\bin\iatfix.exe` | `tools\iatfix\build.bat` |

## Data

| File | What it is |
|---|---|
| `payload\payload.clean.dll` | the original internal image (60 MB, committed in this repo) |
| `work\payload.stripped.dll` | the same image with the six gates removed, built by `strip_gates.ps1` |
| `data\offsets.genuine.bridge` | signed offsets manifest (275 KB, 3,071 entries) |

## Approximate source

| Path | What it is |
|---|---|
| `decompiled\00\` .. `decompiled\06\` | 11,150 functions, one `FUN_<address>.c` per file, bucketed by RVA |
| `decompiled\README.md` | what the reconstruction is, how to grep it, how to regenerate it |

Every function body is Ghidra output. It is not the original source, it does not
compile, and nothing here pretends otherwise.

## Documentation

| File | Content |
|---|---|
| `README.md` | what it does, how to install it, how to use it, what breaks |
| `docs\ARCHITECTURE.md` | the six patches with RVAs, pipeline, VAC notes |
| `docs\DECOMPILED.md` | what the decompiled reference is, and what it is not |
| `docs\TROUBLESHOOTING.md` | every known error and its fix |
| `docs\VAC.md` | what VAC actually catches, the stealth layers, and the honest limits |
| `docs\STANDALONE-HOWTO.md` | long-form engineering notes from the build-out |
| `launcher\DESIGN.md` | brief for restyling the launcher |
| `payload\README.txt` | where the payload goes |
| `docs\launcher.png`, `docs\loading.png` | launcher skin and the real loading card |
| `docs\screenshots\` | in-game menu screenshots (legitbot, profile panel) |

## Rebuild everything

```powershell
pwsh -File build.ps1
```

Requires Visual Studio 2022 BuildTools (`vcvars64.bat`). If a toolchain is
missing, `build.ps1` stops with the exact `winget` line to run.

