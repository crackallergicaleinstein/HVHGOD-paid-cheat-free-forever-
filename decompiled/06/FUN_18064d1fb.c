// FUN_18064d1fb - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d1fb */

void FUN_18064d1fb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x668);
  }
  return;
}



