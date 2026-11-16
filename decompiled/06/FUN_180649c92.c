// FUN_180649c92 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649c92 */

void FUN_180649c92(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x10560);
  }
  return;
}



