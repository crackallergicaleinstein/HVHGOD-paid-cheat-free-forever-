# HVHGOD SLUTS — the whole cheat, the whole crack, one repo

> ## STATUS, READ THIS FIRST, IT IS NOT A FOOTNOTE
>
> **RAGE BOT IS TEMPORARILY OFF.** It is disabled in this build. Rage bot,
> auto wall, the resolver, everything that belongs to it — nothing fires. Do not
> open an issue saying "rage bot does nothing", read this block again. It does
> nothing because it is switched off, on purpose, for now.
>
> **YOU GET LEGIT BOT. AND THE LEGIT BOT IS NOT A TOY.** Every number that makes
> a rage bot lethal lives in the legit bot's own settings: smoothing at zero,
> FOV at 180, head-only hitgroup, zero autofire delay, backtracks maxed, trigger
> delay zero. Configure it like a rage bot and it behaves like one — same
> hit registration, same eagerness, just aimed through a "legit" menu that the
> vendor never intended you to crank this far. [Settings that do it](#legit-bot-with-rage-numbers).
>
> **DONATIONS BRING THE RAGE BOT BACK.** When the pot grows enough to cover the
> work, the rage bot gets re-enabled and pushed to this repo — same tree, same
> "clone and build", no release dance ever. Address is right here:
>
> ```
> bc1qxgr0etjnvf733nqcad9wmrdjtl7gfcnjsewht8
> ```
>
> Every sat is a vote for the rage bot. Broke? Use it anyway, that is the point.
> Read the whole story in [Donate](#donate--fund-the-rage-bot-back).

**The 60 MB internal is committed. The launcher, mapper, patcher and pipeline
are committed. All 11,150 decompiled functions are committed.** Clone it and you
own every byte of this thing: the binary, the tools that break it, and the
approximate source that tells you what is inside it. No release tab, no download
link, no "join the Discord and verify", no reseller gatekeeping a file that costs
him nothing to copy.

A cracked, serverless build of the HVHGOD internal for Counter-Strike 2. No
loader, no account, no subscription, no vendor backend sniffing your machine, no
telemetry. Sixty megabytes of paid software, undone with thirty-five bytes and a
free afternoon.

> It is cheat software. It injects into `cs2.exe`, it is unsigned, and VAC bans
> are permanent and hardware-linked. Read [docs/TROUBLESHOOTING.md](docs/TROUBLESHOOTING.md)
> before you drag it onto a VAC-secured server, and eat the first test on an
> account you do not mind losing. That is not a label for show — the machine does
> what the machine does, and crying about it afterwards changes nothing.

## Right now, in one table

| Feature | State |
|---|---|
| Legit bot | **on** — and it will happily run rage-grade settings |
| Triggerbot, ESP, vision, world visuals | **on** |
| Antiaim, movement, skin changer | **on** |
| Menu, watermark, radar, profiles | **on** |
| **Rage bot / auto wall / resolver** | **OFF — temporarily disabled in this build** |
| Rage bot comes back | when donations cover the work (see above) |

## VAC — what this build does about bans

Two different things get called a VAC ban, and only one of them is code.

| What caught you | What it is | Fixed here? |
|---|---|---|
| memory scan | RWX pages, PE header in private memory, module-less threads, known metadata | **yes** — see below |
| demo / behaviour | rage-grade aim in a real match: 0 smoothing, 180 FOV, 0 ms autofire | **no** — that is your config, not the mapper |

The stealth layers, all of them on by default in the pipeline:

- image mapped manually with real section protections — never RWX at rest, never in the module list
- every stub allocated RW, flipped to RX, **freed right after the call** (`loader\XMap.cs`, `tools\caller\caller.cpp`)
- DOS magic wiped after attach (`tools\iatfix`)
- **whole PE header band scrubbed after attach** — NT header, section table, import names, debug record (`tools\stealth.ps1`)
- **vendor metadata zeroed off the file before mapping** — Rich header, timestamp, checksum, section names, PDB path (`tools\scrub_image.ps1`)
- a post-attach report that lists every region a scanner would care about, so "did it work" is a fact

```powershell
# what a memory scanner sees once the runtime is up
pwsh -File tools\stealth.ps1 -Pid <cs2 pid>
# clean: no private executable regions, no RWX, no PE header outside image mappings

# turn the stealth pass off (debugging only)
pwsh -File work\run-standalone.ps1 -NoStealth
```

What it does **not** do: beat code signatures inside the mapping, and it does not
make rage-grade legit settings look human in a demo. Fast bans in real matches
come from the demo more often than from a memory walk — crank the smoothing, not
the ego. Full threat model and the honest limits: [docs/VAC.md](docs/VAC.md).

## What it is / what it is not

| It is | It is not |
|---|---|
| the vendor's internal image, gates removed | a cheat somebody wrote in this repo |
| a local launcher that maps it into `cs2.exe` | a loader that phones home |
| a patch toolkit (`gates.json`, `bytepatch.ps1`) | a licence server, an account, a subscription |
| 11,150 decompiled functions to read | the original source — that does not exist anywhere |

## Legit bot with rage numbers

The legit bot is the only aimbot in this build, so make it behave like the one
that is missing. In the menu — INSERT — open the legit tab and do this:

| Setting | Default pussy numbers | Set it to |
|---|---|---|
| Smoothing | 25-40 | **0-2** |
| FOV | 4-12 | **90-180** |
| Hit group | nearest / body | **head, chest fallback** |
| Autofire delay | 50-150 ms | **0 ms** |
| Backtrack ticks | off / 3 | **max** |
| Trigger delay | 60+ ms | **0 ms** |
| Trigger hitchance | 40 | **80-100** |
| Autowall / penetration | off | **on, if the build exposes it** |
| Target switch delay | on | **0** |

That combination is not a "legit" config any more — it snaps like a rage bot and
fires before the enemy finishes the peek. The only thing it will not do is the
rage bot's own resolver and its target selection, because those live in the module
that is currently switched off. Everything else is yours to crank.

The vendor sold the same numbers in two menus and called one of them safe. Crank
the "safe" one and see what that was worth.

## What the cheat does

- **Legit bot** — smoothing, FOV, hit group, backtrack, autofire, triggerbot,
  the whole ladder up to rage-grade values (see the table above)
- **Vision** — ESP boxes, health, name, weapon, skeleton, bomb, radar, world visuals
- **Antiaim** — pitch, yaw, jitter, desync
- **Skin changer** — weapon and knife skins, gloves
- **Movement** — bunny hop, auto strafe, edge jump
- **Menu** — profile panel, watermark, clan tag, accent colour, day theme
- **Rage bot** — **off in this build.** Not "broken", not "needs a config",
  switched off. Donations are what turns it back on.

## Screenshots

The launcher:

![launcher](docs/launcher.png)

The loading card that sits over the game while the pipeline does real work
(preflight → staging → launch → map → imports → attach → verify):

![loading](docs/loading.png)

The menu in game — legitbot, triggerbot, auto wall tab present but inactive until
the rage bot returns:

![legitbot](docs/screenshots/menu-legitbot.png)

Profile panel, radar, watermark, clan tag, accent colour, day theme:

![profile](docs/screenshots/menu-profile.png)

Those numbers on the loading card are not a fake animation for smoothbrains who
need a progress bar to feel something. `run-standalone.ps1` writes a progress
file at every real stage and the overlay reads it — see
`tools/overlay/overlay.cpp` and `work/progress.txt`.

## What is in the repo

| Path | What it is |
|---|---|
| `payload\payload.clean.dll` | the internal image, 60,192,400 bytes, committed |
| `decompiled\00` .. `06` | 11,150 functions, `FUN_<address>.c` each, approximate source |
| `launcher\src\launcher.cpp` | the Win32 launcher: window, drawing, pipeline driver |
| `loader\XMap.cs` | manual PE mapper — relocations, imports, `.pdata`, TLS |
| `work\run-standalone.ps1` | the pipeline: preflight, stage, launch, map, repair, scrub, attach, verify |
| `tools\strip_gates.ps1`, `tools\gates.json` | the six patches, as code and as data |
| `tools\bytepatch.ps1` | any byte edit from a JSON list, with an expect-check |
| `tools\stealth.ps1` | scan a live process for RWX / private PE tells, scrub the mapped header band |
| `tools\scrub_image.ps1` | strip Rich header, timestamp, checksum, section names, PDB path |
| `tools\iatfix`, `tools\caller`, `tools\overlay` | import repair, entry caller, loading card |
| `tools\ghidra\DumpDecomp.java`, `tools\split_decomp.ps1` | regenerate and split the reference |
| `data\offsets.genuine.bridge` | signed offsets manifest, 3,071 entries, v28 |
| `docs\` | architecture, decompiled notes, troubleshooting, build-out notes |

Full file map: [FILES.md](FILES.md).

## Requirements

- Windows 10 19044+ or Windows 11, x64
- Steam, signed in, with Counter-Strike 2 installed
- PowerShell 7 — `winget install Microsoft.PowerShell`
- Visual Studio 2022 BuildTools with the Desktop C++ workload —
  `winget install Microsoft.VisualStudio.2022.BuildTools`

Nothing is prebuilt except the closed-source image the vendor already compiled.
`build.ps1` compiles four small tools with `cl /W4`. If you cannot compile four
small tools on your own machine, this is not for you — go buy the subscription
and get fleeced like the rest of the paste-eaters.

## Install — the whole thing, in order

```powershell
# 1. get the tree (the payload is in it, you do not download anything else)
git clone https://github.com/crackallergicaleinstein/HVHGOD-paid-cheat-free-forever-.git
cd HVHGOD-paid-cheat-free-forever-

# 2. check your toolchain is there before you blame the repo
where.exe cl.exe

# 3. build: strip the six gates, compile launcher/iatfix/caller/overlay, scan the tree
pwsh -File build.ps1

# 4. run it
.\launcher\bin\hvhgod-launcher.exe
```

Expect this at the end of `build.ps1`:

```
[build] payload.stripped.dll 60,192,400 bytes
[scrub] vendor metadata removed (dos stub, rich header, timestamp, section names, pdb path)
[build] launcher        ... bytes
[build] iatfix          ... bytes
[build] caller          ... bytes
[build] overlay         ... bytes
[check-clean] clean - no personal paths, no configs, no credentials
[build] ready
```

Only want the tools, not the 60 MB strip pass?

```powershell
pwsh -File build.ps1 -NoPayload
```

## Using it, click by click

1. **Double-click `launcher\bin\hvhgod-launcher.exe`.** No install, no service,
   no admin by default.
2. **Read the chips before you press anything.** `PAYLOAD`, `OFFSETS`, `RUNTIME`,
   `LOGS`, `SECURITY`, `TARGET` — each one is a real check, and the status line
   tells you `STANDBY`, `READY`, `SUMMONING`, `FEASTING` or `DEAD`.
3. **Press SUMMON.** The pipeline opens CS2 through Steam
   (`steam://rungameid/730`), waits for the engine, maps the patched image into
   `cs2.exe`, repairs the imports, invokes the entry point, wipes the DOS magic,
   then reads the runtime's own log and tells you the truth.
4. **Wait for the loading card to finish and the launcher to say it is alive.**
   If the card stalls, the launcher will tell you at which stage — read the
   console output, it is not decorative.
5. **Press INSERT in game.** That is the menu key. Every feature, every tab,
   every slider lives behind it. Rage tab will be dead in this build; legit tab
   is where you earn your bans.
6. **Press BANISH to unload** before you close the game or the launcher. Two
   seconds of patience saves you the retained-mapping dance in the next section.

| Control | What it does |
|---|---|
| `SUMMON` | full pipeline: steam launch → map → repair → scrub → attach → verify |
| `BANISH` | unload, release the mapping, stop the runtime |
| `REFRESH` | re-run the preflight checks and re-read state |
| `MENU KEY` | INSERT, always has been |
| `SPAWN LOG` | dumps the runtime log to your screen |

## The in-game menu

INSERT opens it. Everything is user state, not licence state — nothing is
disabled behind an account you do not have. Profiles panel, radar, watermark,
clan tag, accent colour, day theme, and the feature tabs.

Rage tab: present, inactive, temporary. Legit tab: crank it per the table above.
That is the whole aim story for now.

**Configs are the other honestly broken part.** The Configs tab loads but the
profiles list is empty and saving from the menu does not stick, because the
runtime expected the vendor loader to hand it a config library through an
in-process callback, and that callback is dead. Workaround: the runtime still
writes `loaded-profile.json` on exit, so a session keeps whatever was loaded at
start. Do not plan on switching profiles mid-match.

## Logs — where the truth lives

```
%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Logs\
```

| File | What it tells you |
|---|---|
| `Lifecycle\runtime.log` | init and lifecycle events, `INITIALIZATION_FAILURE` details |
| `Bridge\bridge.log` | the feature handshake |
| `Misc\features.log` | feature bindings |
| `Crashes\errors.log` | `NATIVE_EXCEPTION` records with `location=` offsets |
| `work\pipeline.log` | everything the pipeline printed, verbatim |

A clean run looks like this in this build — note what is missing:

```
INITIALIZATION_SUCCESS  state=loader_signaled core=validated render_input=ready
LEGIT_BOT_INIT_SUCCESS  state=hooks_active
RENDER_RUNTIME_READY    backend=ready fonts=ready window_input=ready
MENU_INPUT_OWNERSHIP_ACQUIRED
```

No `RAGE_BOT_INIT_SUCCESS` line, because the rage bot is not initialising in this
build. When the feature comes back, that line comes back with it.

## Game updates, offsets, and why features go quiet

The runtime reads its offsets manifest from
`%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Bridge\Offsets\offsets.bridge`, and
`data\offsets.genuine.bridge` is what the pipeline stages there. The six patches
are build-independent; the offsets are not. After a CS2 update the manifest goes
stale and features lose their addresses. Replace the file; do not touch the
patches. A game update is not the repo's fault, so do not open an issue about it
like it is a personal betrayal.

## How the crack works (short version)

The internal gates every feature on one byte. Six patches turn the permission
request into a constant:

```
0x001950  delivery verifier        mov al,1 ; ret
0x0A9120  bridge init              mov al,1 ; ret
0x166F60  process binding          mov al,1 ; ret
0x0E5780  lease watchdog           ret
0x41F290  unload/disable routine   ret
0x0E4230  AUTH + readiness seeds   3 byte writes + mov al,1 ; ret
```

35 bytes change out of 60,192,400. Everything else is the vendor's code,
untouched. Every RVA, every crash analysis and every memory-layout decision is
in [docs/ARCHITECTURE.md](docs/ARCHITECTURE.md).

The rage bot is not gated by those six bytes — it is a separate piece of work in
this tree and it is off until the work is paid for. That is why the six patches
still run clean while the rage tab does nothing. Don't "fix" it with a patch you
found in a Telegram group; that is how people get ratted.

## Editing the binary yourself

The approximate source is here so you can stop guessing. Example — find out what
the AUTH stub used to do before it got patched, then change something else:

```powershell
# the gate function itself
Get-Content decompiled\00\FUN_1800e4230.c

# grep the whole reconstruction for the byte that enables everything
Get-ChildItem decompiled -Recurse -Filter *.c | Select-String -Pattern 'DAT_21468219048'

# apply your own edits, with an expect-check so a wrong offset fails loudly
pwsh -File tools\bytepatch.ps1 -List my-patches.json -In payload\payload.clean.dll -Out work\payload.stripped.dll
```

`tools\gates.json` is the six-patch list as data — copy its shape for your own.
The reference does not compile, by design; it is there to read, not to build.
More: [decompiled/README.md](decompiled/README.md) and
[docs/DECOMPILED.md](docs/DECOMPILED.md).

## Command line

```powershell
pwsh -File work\run-standalone.ps1
pwsh -File work\run-standalone.ps1 -BootSeconds 30 -WatchMinutes 2
pwsh -File work\run-standalone.ps1 -NoSweep
```

`-DirectLaunch` starts `cs2.exe` without Steam. Debug only — VAC refuses secure
servers for a game that is not part of Steam's launch chain, and that is exactly
the "no signatures" dialog you get if you skip Steam. There is no clever trick
around it, so put the idea down.

## Known shit that does not work

Honesty instead of pretending:

- **Rage bot is off.** Temporarily disabled in this build; legit bot only. Comes
  back when donations cover the work. Everything else in this list is a
  consequence of running without a vendor loader, not a missing feature.
- **Configs in-game** — empty list, no saving, one loaded profile per session.
  Broken by removing the loader, and not worth rebuilding a vendor callback.
- **Offsets are pinned to a CS2 build.** Replace the manifest after a game update.
- **No vendor account features.** Cloud configs, subscription status, injected
  user data — all dead. That was the point.
- **Unsigned.** Defender, SmartScreen and every AV on earth will scream. It
  injects into another process; of course it will. Whining about a false positive
  is a waste of both our lives.

## Troubleshooting, the fast table

| Symptom | Fix |
|---|---|
| banned fast in a real match | demo/behaviour, not the mapper — see [docs/VAC.md](docs/VAC.md) and raise the smoothing |
| rage bot does nothing | **by design, it is off** — crank the legit bot instead, or donate |
| VAC: "no signatures or invalid signatures" | launch through Steam, never `-DirectLaunch` |
| "cs2 never appeared" | start CS2 once from the Steam library, then retry |
| "access denied" mapping | Steam is elevated — run the launcher as administrator |
| runtime initialises then disables everything | BANISH, wait two seconds, SUMMON |
| "runtime did not become ready" | read `Lifecycle\runtime.log`, then `Crashes\errors.log` |
| Configs tab crashes the game | `iatfix` did not run — confirm `iatfix: N slots repaired` |
| features dead after a CS2 update | replace `data\offsets.genuine.bridge` |
| launcher shows chips, game is empty | press INSERT and check the feature master |

Every one of these with the exact console output and cause:
[docs/TROUBLESHOOTING.md](docs/TROUBLESHOOTING.md).

## Building from source

```powershell
pwsh -File build.ps1            # strip payload + compile tools + clean scan
pwsh -File build.ps1 -NoPayload # tools only
```

```
payload\       payload.clean.dll (60 MB, committed) + readme
decompiled\    approximate source, one file per function
launcher\      Win32 launcher (source + build.bat)
loader\        XMap.cs — manual PE mapper
work\          run-standalone.ps1 — the pipeline
tools\         strip_gates, bytepatch, gates.json, iatfix, caller, overlay, ghidra, split_decomp, check-clean, stealth, scrub_image
data\          signed offsets manifest
docs\          architecture, decompiled notes, troubleshooting
```

## Donate — fund the rage bot back

```
bc1qxgr0etjnvf733nqcad9wmrdjtl7gfcnjsewht8
```

That is a Bitcoin address. The pot has one job right now: **put the rage bot back
in this tree.** The rage bot and its resolver are temporarily disabled in this
build; every sat goes toward finishing that work, and the moment the pot covers
it, the feature gets re-enabled and pushed here — same repo, same clone-and-build,
no release, no "premium tier", no reseller middleman.

What your coins buy, in order:

1. **rage bot re-enabled** — the thing you actually want, first in the queue
2. resolver work and target selection, so it is not just "aim at head fast"
3. more payloads reversed and released
4. more loaders replaced with open launchers
5. better decompiled references and tooling

If this saved you money, send something back. If you are broke, use it anyway and
hand it to someone else who is broke — but understand that the rage bot is the
one thing that stays off until the people who can pay, pay. And if you are a
reseller selling this exact tree back to kids at twenty bucks a month, you are the
reason this exists, and you can go fuck yourself sideways.

## Contributing

Pull requests welcome. Before you open one:

```powershell
pwsh -File build.ps1 -NoPayload
pwsh -File tools\check-clean.ps1   # must print "clean"
```

`check-clean.ps1` blocks absolute user paths, config libraries and captured
credentials. CI runs the same check plus a PowerShell parse pass. If your PR
turns the badge red, you did not read this paragraph, and you deserve the shame.

## No licence

There is no licence file. Do whatever you want with the code in this repository:
fork it, rewrite it, ship it, sell it, claim you wrote it — I do not care, and I
am not going to play lawyer about a cheat. The internal image
(`payload.clean.dll`) is third-party software and is not mine to license either
way; it ships in this repo so nobody has to beg for a download link. The
decompiled reference is a derived work of that binary, not a copy of any source.

## Final word

The vendor charges a subscription to flip six booleans in a binary you already
downloaded, then calls it a product. Fuck that, and fuck every reseller who
gatekeeps a file that costs him nothing to copy. The binary is in the tree, the
patches are in `tools\gates.json`, the approximate source is in `decompiled\`,
and every address is written down in `docs\`. Compile it, read it, break it, fix
it — that is what a repo is for.

And when the pot fills up, the rage bot comes back and this README gets one line
shorter. Until then: legit bot, rage numbers, cheeks out.
