// FUN_18064cd26 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064cd26 */

void FUN_18064cd26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 4) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



