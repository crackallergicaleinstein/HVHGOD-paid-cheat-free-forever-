// FUN_18065d617 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d617 */

void FUN_18065d617(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 0x10) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xffffffef;
    FUN_180113f90(param_2 + 0x110);
  }
  return;
}



