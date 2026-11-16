// FUN_180646a12 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646a12 */

void FUN_180646a12(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x100) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffeff;
    thunk_FUN_18015c010(param_2 + 0x108);
  }
  return;
}



