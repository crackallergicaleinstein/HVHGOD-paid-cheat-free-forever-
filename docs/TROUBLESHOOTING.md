# Troubleshooting

Symptom → cause → fix. Everything the pipeline prints is also written to
`work\pipeline.log` and to `%LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Logs\`.

## VAC refuses secure servers

```
Valve Anti-Cheat
Some of your game files have been detected to have no signatures or invalid
signatures. You will not be allowed to join VAC secure servers.
```

Cause: the game was not launched through Steam. VAC verifies the game it started;
a `cs2.exe` started directly is not part of that chain.

Fix: run the pipeline without `-DirectLaunch` (the default). It opens the game via
`steam://rungameid/730` and maps the process Steam started.

If it still appears:

1. close the game and Steam completely, start Steam, then SUMMON
2. if mapping fails with *access denied*, Steam is running elevated — start the
   launcher as administrator
3. a 60 MB private mapping is still a private mapping; if VAC keeps flagging it,
   the next engineering step is to back the image with a section object instead of
   a private commit

## "cs2 never appeared"

Steam is not signed in, CS2 is not installed, or the Steam protocol handler is
broken. Start the game manually once from the Steam library, then retry.

## "this shell cannot open cs2 (access denied)"

The game is running at a higher integrity level than the launcher. Start
`hvhgod-launcher.exe` as administrator, or start the pipeline from an elevated
terminal.

## "VirtualAllocEx failed: 5"

The process was started but is not the game — usually `cs2.exe` spawned without a
Steam session and exited immediately. The pipeline now starts Steam first and
waits; if you see this, Steam was mid-update. Retry.

## Runtime initialises, then disables everything

```
[Lifecycle] UNLOAD_REQUESTED cleanup=game_and_render_threads
[Lifecycle] UNLOAD_INCOMPLETE phases=64 action=retain_mapping_and_ownership
```

This is the retained-mapping state, not a crash. The previous session never
released its image, so the new one cannot attach cleanly.

Fix: **BANISH**, wait two seconds, **SUMMON**. Repeat any time the game is killed
while the runtime still holds a mapping.

## "runtime did not become ready"

Check, in this order:

1. `Lifecycle\runtime.log` — is there an `INITIALIZATION_FAILURE` line? The step
   name in it points at the stage that failed.
2. `Crashes\errors.log` — a `NATIVE_EXCEPTION` record with a `location=` offset.
3. `work\pipeline.log` — did the entry call report `exit=0x1`? `exit=0x0` means
   `DllMain` returned false; usually the DOS magic was cleared too early or the
   image was mapped into the wrong process.

## The Configs tab crashes the game

Fixed in this build. If it returns, `iatfix` did not run or failed to resolve the
Direct2D slot:

```
hvhgod-cheat.dll+0x1CD1BC   call qword ptr [IAT]   ; d2d1!Ordinal 1
```

Run the pipeline and confirm it prints `iatfix: N slots repaired` and
`wipe: MZ cleared`.

## Features stop after a CS2 update

The offsets manifest is pinned to a game build. Replace
`data\offsets.genuine.bridge` with a manifest for the current build. The six
patches are build-independent; offsets are not.

## The launcher shows chips but the game is empty

`master` toggles and per-feature switches are user state, not licence state. Open
the menu with **INSERT** and check the feature master.

## Antivirus quarantines the launcher

Expected. The software injects into another process and is unsigned. Add an
exclusion or build from source.

## Reporting a bug

Include:

- the exact console output of the pipeline (`work\pipeline.log`)
- the tail of `Lifecycle\runtime.log`
- `Crashes\errors.log` if present
- your Windows build, CS2 build, and whether the game was Steam-launched
