// FUN_180644378 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180644378 */

void FUN_180644378(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1800aab30(param_2 + 0x70);
  }
  return;
}



