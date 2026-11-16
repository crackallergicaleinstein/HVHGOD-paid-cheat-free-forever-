// FUN_18065d5eb - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d5eb */

void FUN_18065d5eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 8) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xfffffff7;
    FUN_180113f90(param_2 + 0x50);
  }
  return;
}



