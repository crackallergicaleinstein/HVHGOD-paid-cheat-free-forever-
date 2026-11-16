// FUN_18064d533 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d533 */

void FUN_18064d533(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 0x20) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



