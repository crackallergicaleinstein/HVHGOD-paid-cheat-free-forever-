// FUN_1806495b8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806495b8 */

void FUN_1806495b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0xb0);
  }
  return;
}



