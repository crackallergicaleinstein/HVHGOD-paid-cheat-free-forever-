# Approximate source — decompiled reference

Every function in `payload\payload.clean.dll`, dumped by Ghidra 12.2 and split
into one file per function so you can actually open the thing instead of
scrolling a 32 MB blob like an animal.

```
decompiled\
  00\   RVA 0x000000 - 0x0FFFFF    922 functions
  01\   RVA 0x100000 - 0x1FFFFF  1,980
  02\   RVA 0x200000 - 0x2FFFFF  1,206
  03\   RVA 0x300000 - 0x3FFFFF  1,165
  04\   RVA 0x400000 - 0x4FFFFF  1,531
  05\   RVA 0x500000 - 0x5FFFFF  2,096
  06\   RVA 0x600000 - 0x6FFFFF  2,250
  README.md
```

11,150 functions total. Six the decompiler could not reconstruct at all.

## Read this before you get excited

**This is not the original source code, and it never will be.** Compilation is
lossy in one direction: names, types, classes, templates, macros and comments are
gone at build time, and there is no inverse transform. A decompiler recovers
*behaviour*, never authorship.

| Original had | Here you get |
|---|---|
| `InitializeOffsets` | `FUN_1800e4230` |
| `std::string`, `uint32_t` | `undefined8`, `int`, raw pointers |
| classes and methods | `this` as an anonymous pointer |
| templates and inline code | the same body duplicated at every call site |
| macros and constants | the expanded value |
| comments | nothing — they never reached the binary |

**It does not compile.** Thousands of identifiers are undefined by construction,
the control flow is already flattened by the optimiser, and calling conventions
are guesses. Don't open an issue saying `cl.exe` screams at it — of course it
does, that is what "approximate" means.

## How to actually use it

Find a function by address, sanity-check what it does, then patch the binary:

```powershell
# what is at RVA 0x0E4230 (the AUTH gate)?
Get-Content decompiled\00\FUN_1800e4230.c

# grep the whole reconstruction for a constant or a string
Get-ChildItem decompiled -Recurse -Filter *.c | Select-String -Pattern 'DAT_21468219048'

# the six patched functions and what they used to do
Get-Content decompiled\00\FUN_180001950.c, decompiled\00\FUN_1800a9120.c
```

Then edit the binary with the tools in `tools\`:

```powershell
pwsh -File tools\bytepatch.ps1 -List tools\gates.json -In payload\payload.clean.dll -Out work\payload.stripped.dll
```

Typical uses:

- read a function before you patch it and see what the patch destroys
- find the comparison that decides a feature and patch the branch, not the call
- resolve a `location=` offset out of `Crashes\errors.log`
- check whether a behaviour exists in this build at all before chasing a ghost

## Regenerate it yourself

`tools\ghidra\DumpDecomp.java` is the script, included here, so the reference
can be rebuilt from the committed binary whenever you want. Ghidra 12.x + JDK:

```powershell
$env:JAVA_HOME = 'C:\Java\jdk-21'
& 'C:\ghidra\support\analyzeHeadless.bat' `
    C:\ghidra-proj HVHGOD `
    -import payload\payload.clean.dll `
    -scriptPath tools\ghidra `
    -postScript DumpDecomp.java `
    -deleteProject
```

That writes a single `decompiled.c`; the per-function split is a `Select-String`
and a directory walk away, or run `tools\split_decomp.ps1` which does exactly
that and rebuilds this folder.

Deeper notes on what was recovered and what was lost: [docs/DECOMPILED.md](../docs/DECOMPILED.md).
