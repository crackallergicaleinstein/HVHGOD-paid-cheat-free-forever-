// FUN_180649cbb - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649cbb */

void FUN_180649cbb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0x10530);
  }
  return;
}



