// FUN_1806497d4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806497d4 */

void FUN_1806497d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa0) & 2) != 0) {
    *(uint *)(param_2 + 0xa0) = *(uint *)(param_2 + 0xa0) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x110);
  }
  return;
}



