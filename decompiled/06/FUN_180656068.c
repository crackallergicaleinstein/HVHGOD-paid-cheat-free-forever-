// FUN_180656068 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180656068 */

void FUN_180656068(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x2d0);
  }
  return;
}



