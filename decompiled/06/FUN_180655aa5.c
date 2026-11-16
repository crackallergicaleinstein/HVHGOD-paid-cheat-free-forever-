// FUN_180655aa5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655aa5 */

void FUN_180655aa5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015b930(param_2 + 0x50);
  }
  return;
}



