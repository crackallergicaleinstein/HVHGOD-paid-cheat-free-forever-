// FUN_18065717c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065717c */

void FUN_18065717c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



