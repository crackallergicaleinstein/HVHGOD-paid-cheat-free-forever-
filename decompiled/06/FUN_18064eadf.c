// FUN_18064eadf - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064eadf */

void FUN_18064eadf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0x150);
  }
  return;
}



