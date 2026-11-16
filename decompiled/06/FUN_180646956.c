// FUN_180646956 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646956 */

void FUN_180646956(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 4) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x210);
  }
  return;
}



