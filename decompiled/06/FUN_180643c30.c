// FUN_180643c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180643c30 */

void FUN_180643c30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



