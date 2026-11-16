// FUN_180656c95 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180656c95 */

void FUN_180656c95(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    thunk_FUN_18015b930(param_2 + 0x60);
  }
  return;
}



