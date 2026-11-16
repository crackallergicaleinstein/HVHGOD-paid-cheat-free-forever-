// FUN_180642423 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642423 */

void FUN_180642423(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x100) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffeff;
    FUN_1800aab30(param_2 + 0x348);
  }
  return;
}



