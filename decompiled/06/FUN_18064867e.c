// FUN_18064867e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064867e */

void FUN_18064867e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_180113f90(param_2 + 0x50);
  }
  return;
}



