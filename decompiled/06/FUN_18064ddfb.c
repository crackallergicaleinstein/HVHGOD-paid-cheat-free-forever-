// FUN_18064ddfb - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064ddfb */

void FUN_18064ddfb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x268);
  }
  return;
}



