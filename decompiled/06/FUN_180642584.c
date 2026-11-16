// FUN_180642584 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642584 */

void FUN_180642584(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffff7fff;
    FUN_1800aab30(param_2 + 0x360);
  }
  return;
}



