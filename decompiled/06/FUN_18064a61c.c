// FUN_18064a61c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a61c */

void FUN_18064a61c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_1801ab310(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



