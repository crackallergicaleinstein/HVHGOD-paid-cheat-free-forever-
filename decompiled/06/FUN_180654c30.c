// FUN_180654c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654c30 */

void FUN_180654c30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}



