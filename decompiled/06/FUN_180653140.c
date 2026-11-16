// FUN_180653140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653140 */

void FUN_180653140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



