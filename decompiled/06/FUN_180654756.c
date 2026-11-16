// FUN_180654756 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654756 */

void FUN_180654756(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x108) & 2) != 0) {
    *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



