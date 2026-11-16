// FUN_1806426b7 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806426b7 */

void FUN_1806426b7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffdfffff;
    FUN_1800aab30(param_2 + 0x360);
  }
  return;
}



