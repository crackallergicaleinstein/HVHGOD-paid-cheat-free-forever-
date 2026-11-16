// FUN_1806546f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806546f8 */

void FUN_1806546f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x108) & 0x10) != 0) {
    *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x118);
  }
  return;
}



