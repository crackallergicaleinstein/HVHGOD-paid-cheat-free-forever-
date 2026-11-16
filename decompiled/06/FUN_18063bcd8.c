// FUN_18063bcd8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063bcd8 */

void FUN_18063bcd8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x70);
  }
  return;
}



