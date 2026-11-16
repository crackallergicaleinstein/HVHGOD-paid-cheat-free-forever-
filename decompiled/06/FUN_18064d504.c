// FUN_18064d504 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d504 */

void FUN_18064d504(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 0x10) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x130);
  }
  return;
}



