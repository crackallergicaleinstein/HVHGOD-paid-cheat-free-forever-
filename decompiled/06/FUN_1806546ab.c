// FUN_1806546ab - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806546ab */

void FUN_1806546ab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x100) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffeff;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



