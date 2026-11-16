// FUN_180652a84 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180652a84 */

void FUN_180652a84(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xb0) & 1) != 0) {
    *(uint *)(param_2 + 0xb0) = *(uint *)(param_2 + 0xb0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xc0);
  }
  return;
}



