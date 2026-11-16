// FUN_180652779 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180652779 */

void FUN_180652779(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 2) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



