// FUN_180648bdd - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648bdd */

void FUN_180648bdd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 0x20) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0x90);
  }
  return;
}



