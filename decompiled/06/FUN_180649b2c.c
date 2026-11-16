// FUN_180649b2c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649b2c */

void FUN_180649b2c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x1a0);
  }
  return;
}



