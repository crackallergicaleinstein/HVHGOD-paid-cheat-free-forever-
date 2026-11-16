// FUN_180648961 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648961 */

void FUN_180648961(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 0x100) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffeff;
    thunk_FUN_18015c010(param_2 + 0x30);
  }
  return;
}



