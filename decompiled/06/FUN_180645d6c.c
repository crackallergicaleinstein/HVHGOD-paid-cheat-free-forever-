// FUN_180645d6c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180645d6c */

void FUN_180645d6c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0x350);
  }
  return;
}



