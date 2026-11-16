// FUN_18065372c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065372c */

void FUN_18065372c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x1c0) & 1) != 0) {
    *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x140);
  }
  return;
}



