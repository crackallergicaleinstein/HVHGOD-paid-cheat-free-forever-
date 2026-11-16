// FUN_180642689 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642689 */

void FUN_180642689(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffefffff;
    FUN_1800aab30(param_2 + 0x348);
  }
  return;
}



