// FUN_18065a627 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a627 */

void FUN_18065a627(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x90);
  }
  return;
}



