// FUN_18066028e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18066028e */

void FUN_18066028e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1805fca24(param_2 + 0x30);
  }
  return;
}



