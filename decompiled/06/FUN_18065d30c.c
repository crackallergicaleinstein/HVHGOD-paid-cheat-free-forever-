// FUN_18065d30c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d30c */

void FUN_18065d30c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x60);
  }
  return;
}



