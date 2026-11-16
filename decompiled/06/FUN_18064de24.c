// FUN_18064de24 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064de24 */

void FUN_18064de24(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0x60);
  }
  return;
}



