// FUN_18065304c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065304c */

void FUN_18065304c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x90);
  }
  return;
}



