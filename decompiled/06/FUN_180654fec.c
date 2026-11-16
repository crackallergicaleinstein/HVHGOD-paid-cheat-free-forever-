// FUN_180654fec - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654fec */

void FUN_180654fec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x248) & 1) != 0) {
    *(uint *)(param_2 + 0x248) = *(uint *)(param_2 + 0x248) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xb08);
  }
  return;
}



