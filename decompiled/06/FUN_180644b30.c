// FUN_180644b30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180644b30 */

void FUN_180644b30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



