// FUN_180654d91 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654d91 */

void FUN_180654d91(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x180);
  }
  return;
}



