// FUN_18065a45c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a45c */

void FUN_18065a45c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0x338);
  }
  return;
}



