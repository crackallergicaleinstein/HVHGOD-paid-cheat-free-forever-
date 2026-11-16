// FUN_180654eba - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654eba */

void FUN_180654eba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xe0) & 4) != 0) {
    *(uint *)(param_2 + 0xe0) = *(uint *)(param_2 + 0xe0) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x1008);
  }
  return;
}



