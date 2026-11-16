// FUN_18064d4d5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d4d5 */

void FUN_18064d4d5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 8) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x150);
  }
  return;
}



