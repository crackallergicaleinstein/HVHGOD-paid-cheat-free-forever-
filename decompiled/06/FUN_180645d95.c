// FUN_180645d95 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180645d95 */

void FUN_180645d95(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    thunk_FUN_18015b930(param_2 + 0x88);
  }
  return;
}



