// FUN_180655a4c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655a4c */

void FUN_180655a4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015b930(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}



