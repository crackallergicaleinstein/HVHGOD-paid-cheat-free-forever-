// FUN_180650e24 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180650e24 */

void FUN_180650e24(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 1) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffe;
    thunk_FUN_1801abba0(param_2 + 0x1a0);
  }
  return;
}



