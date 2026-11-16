// FUN_180654785 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654785 */

void FUN_180654785(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x108) & 4) != 0) {
    *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0xe0);
  }
  return;
}



