// FUN_180656ce1 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180656ce1 */

void FUN_180656ce1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 8) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0xc0);
  }
  return;
}



