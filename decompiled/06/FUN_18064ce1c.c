// FUN_18064ce1c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064ce1c */

void FUN_18064ce1c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 1) != 0) {
    *(uint *)(param_2 + 0x90) = *(uint *)(param_2 + 0x90) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xe8);
  }
  return;
}



