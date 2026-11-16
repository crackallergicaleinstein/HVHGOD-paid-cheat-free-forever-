// FUN_1806466d8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806466d8 */

void FUN_1806466d8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0x70);
  }
  return;
}



