// FUN_1806469b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806469b4 */

void FUN_1806469b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x10) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x490);
  }
  return;
}



