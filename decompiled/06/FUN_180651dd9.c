// FUN_180651dd9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651dd9 */

void FUN_180651dd9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    FUN_18018f700(param_2 + 0x90);
  }
  return;
}



