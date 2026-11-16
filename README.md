# HVHGOD SLUTS

A cracked, serverless build of the HVHGOD internal for Counter-Strike 2. The
60 MB binary, the launcher, the mapper, the patch toolkit and 11,150 decompiled
functions all live in this repo. Clone it, build it, play. No account, no
subscription, no vendor server, no release tab, no reseller whore selling a file
that costs him nothing to copy.

> ## STATUS
>
> **Rage bot is temporarily off.** No rage bot, no auto wall, no resolver. It
> comes back when donations cover the work — see [Donate](#donate).
>
> **You get legit bot, and it takes rage-grade numbers.** Smoothing 0-2, FOV
> 90-180, head-only, autofire 0 ms: that is the [settings table](#legit-bot-with-rage-numbers).
>
> ```
> bc1qxgr0etjnvf733nqcad9wmrdjtl7gfcnjsewht8
> ```

## Contents

- [What you get](#what-you-get)
- [Screenshots](#screenshots)
- [Requirements](#requirements)
- [Install and start](#install-and-start)
- [Using it](#using-it)
- [Stealth: what it does against VAC](#stealth-what-it-does-against-vac)
- [Legit bot with rage numbers](#legit-bot-with-rage-numbers)
- [Logs, offsets, command line](#logs-offsets-command-line)
- [What is broken](#what-is-broken)
- [Troubleshooting](#troubleshooting)
- [Build from source](#build-from-source)
- [Donate](#donate)

## What you get

| Path | What it is |
|---|---|
| `payload\payload.clean.dll` | the internal image, 60,192,400 bytes, committed |
| `decompiled\00` .. `06` | 11,150 functions, one `FUN_<address>.c` per file |
| `launcher\src\launcher.cpp` | Win32 launcher: window, drawing, state, pipeline driver |
| `loader\XMap.cs` | manual PE mapper: relocations, imports, `.pdata`, TLS |
| `work\run-standalone.ps1` | the pipeline: preflight, stage, launch, map, repair, scrub, attach, verify |
| `tools\strip_gates.ps1` + `tools\gates.json` | the six licence patches, as code and as data |
| `tools\bytepatch.ps1` | any byte edit from a JSON list, with an expect-check |
| `tools\stealth.ps1` | scan a live process for tells, scrub the mapped header band |
| `tools\scrub_image.ps1` | strip Rich header, timestamp, section names, PDB path |
| `tools\iatfix`, `tools\caller`, `tools\overlay` | import repair, entry caller, loading card |
| `data\offsets.genuine.bridge` | signed offsets manifest, 3,071 entries |
| `docs\` | architecture, decompiled notes, VAC threat model, troubleshooting |

It is the vendor's binary with six booleans forced true. It is not a cheat
written here, and the decompiled tree is not the original source — that does not
exist anywhere, stop asking.

## Screenshots

The launcher — chips, status, SUMMON / BANISH:

![launcher](docs/launcher.png)

The loading card that sits over the game while the pipeline does real work
(preflight → staging → launch → map → imports → attach → scrub → verify). Those
numbers read `work\progress.txt`; nothing on it is a fake animation:

![loading](docs/loading.png)

The menu in game — legitbot, triggerbot, auto wall. The rage side is off in this
build, the legit side is where the filth happens:

![legitbot](docs/screenshots/menu-legitbot.png)

Profile panel, radar, watermark, clan tag, accent colour, day theme:

![profile](docs/screenshots/menu-profile.png)

## Requirements

- Windows 10 19044+ or Windows 11, x64
- Steam signed in, Counter-Strike 2 installed
- PowerShell 7 — `winget install Microsoft.PowerShell`
- Visual Studio 2022 BuildTools, Desktop C++ workload —
  `winget install Microsoft.VisualStudio.2022.BuildTools`

## Install and start

```powershell
# 1. clone - the payload is inside, there is nothing else to download
git clone https://github.com/crackallergicaleinstein/HVHGOD-paid-cheat-free-forever-.git
cd HVHGOD-paid-cheat-free-forever-

# 2. build - strips the gates, scrubs vendor metadata, compiles four tools
pwsh -File build.ps1

# 3. run
.\launcher\bin\hvhgod-launcher.exe
```

`build.ps1` ends with:

```
[build] payload.stripped.dll 60,192,400 bytes
[scrub] vendor metadata removed
[build] launcher / iatfix / caller / overlay  ... bytes
[check-clean] clean - no personal paths, no configs, no credentials
[build] ready
```

Tools only, no payload pass — `pwsh -File build.ps1 -NoPayload`.

Then, in the launcher:

1. **Check the chips** — `PAYLOAD`, `OFFSETS`, `RUNTIME`, `LOGS`, `SECURITY`,
   `TARGET`. Status reads `STANDBY` until everything is green.
2. **Press SUMMON**. It launches CS2 through Steam, waits for the engine, maps
   the patched image, repairs imports, wipes the DOS magic, scrubs the mapped
   header band, arms the TLS sweep, then reads the runtime log and tells you what
   actually happened.
3. **Press INSERT in game.** That is the menu key. Rage tab is dead in this
   build; legit tab is where the bans are made.
4. **Press BANISH before closing** — it unloads and releases the mapping.

| Control | Does |
|---|---|
| `SUMMON` | full pipeline: Steam launch → map → repair → scrub → attach → verify |
| `BANISH` | unload, release the mapping, stop the runtime |
| `REFRESH` | re-run preflight and re-read state |
| `SPAWN LOG` | dump the runtime log to screen |

Pipeline by hand, same thing without the window:

```powershell
pwsh -File work\run-standalone.ps1
pwsh -File work\run-standalone.ps1 -BootSeconds 30 -WatchMinutes 2
pwsh -File work\run-standalone.ps1 -NoStealth      # skip the scrub, debugging only
```

`-DirectLaunch` starts `cs2.exe` without Steam — VAC answers with "no
signatures" and refuses secure servers. Debug only, and no, there is no trick
around it.

## Stealth: what it does against VAC

Two different things get called a ban. Only one is code.

| Caught by | What it is | Handled here |
|---|---|---|
| memory scan | RWX pages, PE header in private memory, module-less threads, vendor metadata | **yes** |
| demo / behaviour | 0 smoothing, 180 FOV, 0 ms autofire in a real match | **no** — that is your config, you slut |

The layers, all on by default:

1. **Manual mapping, no `LDR` entry** — the image never appears in the PEB module
   list, so module enumeration misses it.
2. **Real section protections** — never RWX at rest; each section gets its own
   `PAGE_*`.
3. **Stubs are RW, then RX, then freed** — `loader\XMap.cs` and
   `tools\caller\caller.cpp` no longer leave a private executable page behind,
   and never leave an RWX window open.
4. **DOS magic wiped after attach** — `tools\iatfix` kills the cheapest "PE in
   private memory" heuristic.
5. **Whole header band scrubbed after attach** — `tools\stealth.ps1` zeroes the
   NT header, section table, import names and debug record, then leaves the page
   read-only. A runtime that still reads its own header gets zeros, not a crash.
6. **Vendor metadata gone before mapping** — `tools\scrub_image.ps1` zeroes the
   Rich header, linker timestamp, checksum, section names and PDB path.
7. **A scan report at the end** — step 8 prints every region a scanner would
   still care about, so "did it work" is a fact.

Verify it while the runtime is up:

```powershell
pwsh -File tools\stealth.ps1 -Pid <cs2 pid>
# clean: no private executable regions, no RWX, no PE header outside image mappings
```

Any line with `rwx`, `MZ` or `private` is a tell that survived. The same report
lands in `work\pipeline.log`.

What it does **not** do: beat code signatures inside the mapping, and make rage
numbers look human in a demo. Fast bans in real matches are demos more often than
memory walks. Full threat model: [docs/VAC.md](docs/VAC.md).

## Legit bot with rage numbers

INSERT → legit tab:

| Setting | Default pussy numbers | Set it to |
|---|---|---|
| Smoothing | 25-40 | **0-2** |
| FOV | 4-12 | **90-180** |
| Hit group | nearest / body | **head** |
| Autofire delay | 50-150 ms | **0 ms** |
| Backtrack | off / 3 | **max** |
| Trigger delay | 60+ ms | **0 ms** |
| Trigger hitchance | 40 | **80-100** |

That snaps like the module that is switched off. If you want to survive more
than an afternoon, use 3-8 smoothing and 20-40 FOV instead — rage numbers are a
one-way ticket, bitch.

## Logs, offsets, command line

```
%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Logs\
```

| File | Content |
|---|---|
| `Lifecycle\runtime.log` | init and lifecycle events |
| `Bridge\bridge.log` | feature handshake |
| `Misc\features.log` | feature bindings |
| `Crashes\errors.log` | `NATIVE_EXCEPTION` records with `location=` offsets |
| `work\pipeline.log` | everything the pipeline printed |

A healthy attach in this build:

```
INITIALIZATION_SUCCESS  state=loader_signaled core=validated render_input=ready
LEGIT_BOT_INIT_SUCCESS  state=hooks_active
RENDER_RUNTIME_READY    backend=ready fonts=ready window_input=ready
MENU_INPUT_OWNERSHIP_ACQUIRED
```

No `RAGE_BOT_INIT_SUCCESS` — the rage bot is off, remember.

Offsets live in `data\offsets.genuine.bridge` and get staged to
`%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Bridge\Offsets\offsets.bridge`.
The six patches are build-independent; offsets are not. After a CS2 update you
replace the manifest, not the patches.

The six patches, for the record:

```
0x001950  delivery verifier        mov al,1 ; ret
0x0A9120  bridge init              mov al,1 ; ret
0x166F60  process binding          mov al,1 ; ret
0x0E5780  lease watchdog           ret
0x41F290  unload/disable routine   ret
0x0E4230  AUTH + readiness seeds   3 byte writes + mov al,1 ; ret
```

35 bytes out of 60,192,400. Details: [docs/ARCHITECTURE.md](docs/ARCHITECTURE.md).

Tweak the binary yourself:

```powershell
Get-Content decompiled\00\FUN_1800e4230.c
pwsh -File tools\bytepatch.ps1 -List my-patches.json -In payload\payload.clean.dll -Out work\payload.stripped.dll
```

## What is broken

- **Rage bot** — off in this build, temporary.
- **Configs in-game** — profile list is empty, saving does not stick. The
  runtime expected the vendor loader to hand it a config library over a callback
  that no longer exists. It still writes `loaded-profile.json` on exit.
- **Offsets are pinned to a CS2 build** — replace the manifest after an update.
- **No vendor account features** — cloud configs, subscription, injected user
  data, all dead. That was the point.
- **Unsigned** — every AV on earth will scream. It injects into another process;
  of course it will, you whore of a build.

## Troubleshooting

| Symptom | Fix |
|---|---|
| rage bot does nothing | by design, it is off — crank the legit bot or donate |
| banned fast in a real match | demo/behaviour, not the mapper — [docs/VAC.md](docs/VAC.md) |
| VAC: "no signatures or invalid signatures" | launch through Steam, never `-DirectLaunch` |
| "cs2 never appeared" | start CS2 once from the library, then retry |
| "access denied" mapping | Steam is elevated — run the launcher as administrator |
| runtime initialises, then unloads | BANISH, wait two seconds, SUMMON |
| "runtime did not become ready" | read `Lifecycle\runtime.log`, then `Crashes\errors.log` |
| Configs tab crashes | `iatfix` did not run — look for `iatfix: N slots repaired` |
| features dead after a CS2 update | replace `data\offsets.genuine.bridge` |
| game empty, chips fine | press INSERT, check the feature master |

Exact console output and causes: [docs/TROUBLESHOOTING.md](docs/TROUBLESHOOTING.md).

## Build from source

```powershell
pwsh -File build.ps1            # strip + scrub + compile + clean scan
pwsh -File build.ps1 -NoPayload # tools only
```

```
payload\       payload.clean.dll (60 MB)
decompiled\    approximate source, one file per function
launcher\      Win32 launcher
loader\        XMap.cs manual mapper
work\          run-standalone.ps1 pipeline
tools\         strip_gates, bytepatch, gates.json, iatfix, caller, overlay, ghidra, split_decomp, stealth, scrub_image, check-clean
data\          signed offsets manifest
docs\          architecture, VAC, decompiled, troubleshooting
```

Nobody cares whether you fork it, rewrite it, ship it or sell it. There is no
licence and I am not playing lawyer about a cheat. The binary is third-party and
ships here so nobody has to beg for a link.

## Donate

```
bc1qxgr0etjnvf733nqcad9wmrdjtl7gfcnjsewht8
```

Every sat goes to bringing the rage bot back and releasing more of these. Broke?
Use it anyway, hand it to the next broke bastard. Reseller selling this tree to
kids at twenty bucks a month: you are the reason this exists, and you can go fuck
yourself sideways, ass first.

## Final word

The vendor charges a subscription to flip six booleans in a binary you already
downloaded, then calls it a product. Fuck that. The binary is in the tree, the
patches are in `tools\gates.json`, the approximate source is in `decompiled\`,
and every address is written down in `docs\`. Compile it, read it, break it,
butt-plug the resellers — that is what a repo is for.
