// FUN_180649592 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649592 */

void FUN_180649592(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015b930(param_2 + 0x70);
  }
  return;
}



