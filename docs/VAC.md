# VAC, bans, and what this build actually does about it

Straight talk, because a lie here costs you an account and a hardware ID.

## Why the bans came fast in real matches

Two different animals get called "VAC ban":

1. **A memory scan hit.** VAC walks the game's address space and matches known
   code, known module descriptions, RWX pages, PE headers sitting in private
   memory, threads that start outside any module. This is the part software can
   fight, and this build now fights it.
2. **A behaviour hit.** VAC-Net, demos, stats and reports: nobody snaps three
   heads through a wall without it showing up in a demo. Cranking the legit bot
   to rage numbers — smoothing 0, FOV 180, head-only, 0 ms autofire — is the
   single loudest thing you can do. That is not a memory problem and no amount
   of header scrubbing fixes it. If the tickets come from demos, the aim profile
   is what signs them, not the mapper.

The rest of this file is about the first one, because that is the only one the
build can touch.

## The layers this build has

| Layer | Where | What it kills |
|---|---|---|
| Manual mapping, no `LDR` entry | `loader\XMap.cs` | the image never appears in the PEB module list, so module enumeration does not find it |
| Sections mapped with real protections, never RWX at rest | `loader\XMap.cs` | the classic "RWX page in a game" flag |
| Stubs allocated RW, flipped to RX, **freed after the call** | `loader\XMap.cs`, `tools\caller\caller.cpp` | private executable pages that outlive the operation, and the RWX window around each stub |
| DOS magic cleared after attach | `tools\iatfix\iatfix.cpp` | the cheapest "PE in private memory" heuristic |
| **Whole header band scrubbed after attach** | `tools\stealth.ps1` | NT header, section table, import names, debug record — every structural tell except code |
| **Vendor metadata off the file before it maps** | `tools\scrub_image.ps1` | Rich header, linker timestamp, checksum, section names, PDB path: the vendor's build fingerprint |
| **Post-attach scan report** | `tools\stealth.ps1` | leaves you a list of every private executable / RWX / PE-bearing region, so "did it work" is a fact, not a feeling |

Pipeline order in `work\run-standalone.ps1`:

```
map → imports repaired → entry called → MZ wiped → header band scrubbed → TLS sweep → report
```

## What this does not do

- **It does not beat code signatures.** VAC can hash or pattern-match the
  *code* inside a private mapping. Header scrubbing does not touch that. The
  real answer there is a packer/VM layer, which this build does not ship, and
  anything that claims otherwise in a Telegram group is selling you a rat.
- **It does not beat demo review.** See above. If you want to survive a real
  match, the aim profile is the lever: smoothing 3-8, FOV 20-40, hitgroup chest,
  autofire 80-150 ms, hitchance 45-60. Rage numbers are a one-way ticket, and
  fast bans are the receipt.
- **It does not touch the game's own integrity checks.** If Valve ships a check
  that hashes a game module at runtime and finds a detour, no mapper helps.
- **It is not tested against a live VAC session.** Nothing here has been run on
  a VAC-secured server by me. It removes known tells; it does not come with a
  promise.

## Verify it yourself

After the pipeline attaches, ask the process what it looks like from outside:

```powershell
# what a scanner would walk: RWX, private exec, PE headers outside images
pwsh -File tools\stealth.ps1 -Pid <cs2 pid>
```

A clean answer is one line:

```
clean: no private executable regions, no RWX, no PE header outside image mappings
```

Any line with `rwx`, `MZ` or `private` is a tell that survived. The pipeline runs
this scan itself at the end (step 8) and prints it into `work\pipeline.log`.

Check the header scrub directly:

```powershell
pwsh -File tools\stealth.ps1 -Pid <cs2 pid> -Base <mapped base>
```

If the base still answers `MZ`, the scrub did not land — read the line above it,
it says exactly which step refused.

Check the file that maps:

```powershell
pwsh -File tools\scrub_image.ps1 -In work\payload.stripped.dll -Out work\payload.scrubbed.dll
# [scrub] dos stub 232 bytes / rich header / timestamp / checksum / section names / pdb path
```

## If a ban already happened

Nothing here un-bans an account. A VAC ban is permanent, hardware-linked, and
the new account inherits the flag on the same machine. What this build does is
give the *next* attempt fewer tells. The aim profile is still yours to manage,
and it is the one thing that decides whether the next attempt lasts a week or an
afternoon.
