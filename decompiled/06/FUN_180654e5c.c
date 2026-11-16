// FUN_180654e5c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654e5c */

void FUN_180654e5c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xe0) & 1) != 0) {
    *(uint *)(param_2 + 0xe0) = *(uint *)(param_2 + 0xe0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x1148);
  }
  return;
}



