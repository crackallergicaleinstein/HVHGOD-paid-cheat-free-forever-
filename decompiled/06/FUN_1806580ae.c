// FUN_1806580ae - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806580ae */

void FUN_1806580ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 4) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x710);
  }
  return;
}



