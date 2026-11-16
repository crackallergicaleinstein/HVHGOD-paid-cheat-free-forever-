// FUN_18065805c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065805c */

void FUN_18065805c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 1) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x90);
  }
  return;
}



