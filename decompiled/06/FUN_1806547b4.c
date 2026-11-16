// FUN_1806547b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806547b4 */

void FUN_1806547b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x108) & 8) != 0) {
    *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x80);
  }
  return;
}



