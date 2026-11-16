// FUN_180657f74 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657f74 */

void FUN_180657f74(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 4) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



