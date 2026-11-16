// FUN_18064eab9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064eab9 */

void FUN_18064eab9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x40);
  }
  return;
}



