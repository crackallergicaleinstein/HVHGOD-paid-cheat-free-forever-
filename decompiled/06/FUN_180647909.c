// FUN_180647909 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647909 */

void FUN_180647909(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;
    FUN_1800aab30(param_2 + 0xe8);
  }
  return;
}



