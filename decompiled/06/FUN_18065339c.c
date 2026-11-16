// FUN_18065339c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065339c */

void FUN_18065339c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x48);
  }
  return;
}



