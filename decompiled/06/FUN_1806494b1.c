// FUN_1806494b1 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806494b1 */

void FUN_1806494b1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0x30);
  }
  return;
}



