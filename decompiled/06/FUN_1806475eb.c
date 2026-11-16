// FUN_1806475eb - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806475eb */

void FUN_1806475eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0xb0);
  }
  return;
}



