// FUN_1806545c9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806545c9 */

void FUN_1806545c9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 2) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



