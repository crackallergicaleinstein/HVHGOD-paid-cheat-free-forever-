// FUN_180657572 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657572 */

void FUN_180657572(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_1801abba0(param_2 + 0x38);
  }
  return;
}



