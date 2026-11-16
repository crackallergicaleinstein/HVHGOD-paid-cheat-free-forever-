// FUN_18065f91c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f91c */

void FUN_18065f91c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x168);
  }
  return;
}



