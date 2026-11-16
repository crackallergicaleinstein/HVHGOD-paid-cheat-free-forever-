// FUN_18064d477 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d477 */

void FUN_18064d477(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 2) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0xd0);
  }
  return;
}



