// FUN_1806477ca - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806477ca */

void FUN_1806477ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x68) & 0x20) != 0) {
    *(uint *)(param_2 + 0x68) = *(uint *)(param_2 + 0x68) & 0xffffffdf;
    thunk_FUN_180111b90(param_2 + 0x50);
  }
  return;
}



