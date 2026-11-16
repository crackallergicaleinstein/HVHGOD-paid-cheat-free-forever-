// FUN_180653306 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653306 */

void FUN_180653306(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x40);
  }
  return;
}



