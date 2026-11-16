// FUN_1806423f5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806423f5 */

void FUN_1806423f5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x80) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffffff7f;
    FUN_1800aab30(param_2 + 0x330);
  }
  return;
}



