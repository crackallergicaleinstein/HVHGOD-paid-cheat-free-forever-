// FUN_180657fc3 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657fc3 */

void FUN_180657fc3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x50);
  }
  return;
}



