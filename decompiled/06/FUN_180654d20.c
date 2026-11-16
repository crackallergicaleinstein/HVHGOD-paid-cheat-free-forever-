// FUN_180654d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654d20 */

void FUN_180654d20(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x200);
  }
  return;
}



