// FUN_18064d224 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d224 */

void FUN_18064d224(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x648);
  }
  return;
}



