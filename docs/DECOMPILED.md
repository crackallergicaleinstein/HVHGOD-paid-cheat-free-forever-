# Decompiled reference (approximate source)

**This is not the original source code.** It cannot be, and no tool can produce
the original from a compiled binary. What is available is *machine-decompiled
output*: a reconstruction that is useful for reading and analysis, not for
building.

## What it is

- produced by Ghidra 12.2 from `payload.clean.dll` with JDK 25
- 32.1 MB of C text, 11,150 functions, one `/* address */` header each (6 could not be reconstructed)
- every function body is the decompiler's best reconstruction

## What it is not

| Original had | Decompiled shows |
|---|---|
| names (`InitializeOffsets`) | synthetic labels (`FUN_21467744230`) |
| types (`std::string`, `uint32_t`) | inferred types (`undefined8`, `undefined4`) |
| classes, methods | raw pointers and offsets |
| templates and inline code | code duplicated at every use site |
| macros and constants | expanded values |
| comments | none — they never reached the binary |

It **does not compile**. Thousands of identifiers are undefined by construction,
and the structure of the code has already been flattened by the optimiser.

## Why the original is unrecoverable

Compilation is lossy in one direction only: source to machine code. Names, types,
scopes, templates and comments are discarded at build time. There is no inverse
transform. A decompiler recovers *behaviour*, never *authorship*.

This matters for the licence too: the decompiled text is a derived work of
the binary, not a copy of the source, and it carries the same restrictions as the
binary it came from.

## Where to get it

It is committed in this repository, split one file per function, so a clone has
it and GitHub can actually render it:

```
decompiled\
  00\  ..  06\     RVA buckets, one FUN_<address>.c per function
  README.md        what it is, how to grep it, how to regenerate
```

The single 32 MB `decompiled.c` that Ghidra writes is not committed — it is
regenerated on demand and split by `tools\split_decomp.ps1`:

```powershell
pwsh -File tools\split_decomp.ps1 -In decompiled.c -Out decompiled
```

## How to regenerate it yourself

```powershell
# 1. JDK 21 and Ghidra 12.x
# 2. headless analysis of the payload
$env:JAVA_HOME = 'D:\re-tools\jdk\jdk-21.0.13+9'
& 'D:\re-tools\ghidra\ghidra_12.2_PUBLIC\support\analyzeHeadless.bat' `
    D:\re-tools\proj HVHGOD `
    -import payload\payload.clean.dll `
    -scriptPath D:\re-tools\scripts `
    -postScript DumpDecomp.java `
    -deleteProject
```

`DumpDecomp.java` is the script that walks every function and writes its C. It is
included in this repository at `tools\ghidra\DumpDecomp.java` so the reference can
be rebuilt from the binary at any time.

## What to use it for

- reading what a function actually does before patching it
- finding constants and comparisons worth a byte patch (`tools\bytepatch.ps1`)
- understanding a crash address from `Crashes\errors.log`
- checking whether a behaviour exists in the binary at all

## What not to use it for

- rebuilding the cheat — it will not compile, and the result would not be the
  same program
- claiming it is the original source — it is a derived reconstruction
