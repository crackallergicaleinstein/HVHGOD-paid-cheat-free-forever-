// FUN_180655260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655260 */

void FUN_180655260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x230) & 1) != 0) {
    *(uint *)(param_2 + 0x230) = *(uint *)(param_2 + 0x230) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x330);
  }
  return;
}



