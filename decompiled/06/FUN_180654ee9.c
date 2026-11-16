// FUN_180654ee9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654ee9 */

void FUN_180654ee9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xe0) & 8) != 0) {
    *(uint *)(param_2 + 0xe0) = *(uint *)(param_2 + 0xe0) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0xfa8);
  }
  return;
}



