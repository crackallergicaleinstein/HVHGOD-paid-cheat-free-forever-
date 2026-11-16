// FUN_180642556 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642556 */

void FUN_180642556(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffffbfff;
    FUN_1800aab30(param_2 + 0x348);
  }
  return;
}



