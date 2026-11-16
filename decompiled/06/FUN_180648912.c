// FUN_180648912 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648912 */

void FUN_180648912(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 1) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x50);
  }
  return;
}



