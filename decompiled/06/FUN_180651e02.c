// FUN_180651e02 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651e02 */

void FUN_180651e02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    FUN_18018f700(param_2 + 0xe0);
  }
  return;
}



