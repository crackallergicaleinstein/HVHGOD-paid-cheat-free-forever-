// FUN_180648658 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648658 */

void FUN_180648658(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180113f90(param_2 + 0x30);
  }
  return;
}



