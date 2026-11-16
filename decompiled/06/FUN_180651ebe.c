// FUN_180651ebe - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651ebe */

void FUN_180651ebe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    FUN_18018f700(param_2 + 0x130);
  }
  return;
}



