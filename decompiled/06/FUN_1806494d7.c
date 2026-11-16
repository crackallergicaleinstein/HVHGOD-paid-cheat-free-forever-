// FUN_1806494d7 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806494d7 */

void FUN_1806494d7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18015b930(param_2 + 0xf0);
  }
  return;
}



