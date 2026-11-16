// FUN_1806421e3 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806421e3 */

void FUN_1806421e3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 2) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffd;
    FUN_1800aab30(param_2 + 0x348);
  }
  return;
}



