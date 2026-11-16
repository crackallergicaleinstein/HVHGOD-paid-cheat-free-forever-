// FUN_180654727 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654727 */

void FUN_180654727(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x108) & 1) != 0) {
    *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xc0);
  }
  return;
}



