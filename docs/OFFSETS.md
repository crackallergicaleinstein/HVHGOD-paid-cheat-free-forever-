# Offsets — what the committed manifest is, and why it stopped working

## The two files

| File | Built for | Entries | Status |
|---|---|---|---|
| `data\offsets.genuine.bridge` | `client.dll` sha256 `99a6720b…`, 2026-11-11 | 3,071 | **stale** |
| `data\offsets.current.bridge` | `client.dll` sha256 `07103341…`, build 14200, 2026-11-20 | 30 | current |

`offsets.genuine.bridge` is the manifest captured from the vendor's own bundle.
It was true for the build it named. It is not true for the build installed now.

## How that was proven

`client.dll` on disk today:

```
sha256      07103341bc9e0ae2c596b2929075c5094cb397d7e370ea00986c720ed72414e1
SizeOfImage 43,573,248
```

Manifest declares:

```
sha256      99a6720b29d8b477d55f0a2d7fd4333b5df13f354ba723804e996bead1231aa8
SizeOfImage 43,556,864
```

The manifest also records, for each resolved symbol, a `pattern hit at 0x…`
address. Decoding those hits against the installed binary produced 0 matches out
of 24 — the addresses land mid-instruction because they belong to a different
image. `sdk\tools\verify-manifest.ps1` reproduces this check.

A second, independent check: for a candidate RVA, the address should be
referenced by at least one RIP-relative instruction if it is live.
`sdk\bin\probe.exe --xref client.dll <rva,…>` scans executable sections for
every `[rip+disp]` reference. Stale RVAs come back with zero references; live
ones come back with the actual instruction sites.

## Where the current numbers come from

`cs2-dumper` (a2x, release 0.1.3, sha256 `501368ff…`) was run against the live
process (build 14200) and its output converted into the same record format by
`sdk\tools\make-manifest.ps1`:

```
module  client.dll            43573248
build   client.dll            07103341bc9e0ae2c596b2929075c5094cb397d7e370ea00986c720ed72414e1
offset  client.dll  dwEntityList            0x0270D5B0  resolved
offset  client.dll  dwLocalPlayerPawn       0x02557AB8  resolved
offset  client.dll  dwViewMatrix            0x0255D3D0  resolved
offset  client.dll  dwViewAngles            0x0256DBE8  resolved
offset  client.dll  dwGlobalVars            0x02223AD0  resolved
…
offset  client.dll  dwPlantedC4             0           unresolved  pattern outdated in cs2-dumper run
offset  client.dll  dwSensitivity           0           unresolved  pattern outdated in cs2-dumper run
```

Two symbols are deliberately `unresolved` rather than carrying a guessed
address: a gap is honest, a wrong address is not.

## Verified live

```
[attach] client.dll base=0x7FFB5CC80000 size=43573248
[check]  manifest client.dll size=43573248  matches
[read]   dwLocalPlayerPawn slot=0x7FFB5F1D7AB8  null (menu / not in a match)
[read]   dwViewMatrix  row0 = -0.000 -0.750 +0.000 +0.000
[read]   dwViewMatrix  row3 = +1.000 -0.000 +0.000 -0.000
```

The matrix is a real view matrix, and the null pawn is reported as "menu", not as
a failure — the read path distinguishes "zero" from "could not read".

## Regenerating after a game update

```powershell
# 1. run the dumper against the running game
sdk\work\dumper\cs2-dumper.exe

# 2. convert its output into our manifest
pwsh -File sdk\tools\make-manifest.ps1

# 3. confirm the manifest agrees with the installed binary
pwsh -File sdk\tools\verify-manifest.ps1
sdk\bin\probe.exe --manifest sdk\data\offsets.current.bridge --live
```

The generator records the module `SizeOfImage` and sha256 for every module it
touches, so a later run can tell at a glance whether a manifest still belongs to
the binary on disk.
