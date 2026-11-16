// FUN_180642528 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642528 */

void FUN_180642528(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffffdfff;
    FUN_1800aab30(param_2 + 0x330);
  }
  return;
}



