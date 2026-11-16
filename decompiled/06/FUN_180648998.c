// FUN_180648998 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648998 */

void FUN_180648998(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 4) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x30);
  }
  return;
}



