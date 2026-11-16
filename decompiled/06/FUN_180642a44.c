// FUN_180642a44 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642a44 */

void FUN_180642a44(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0x7fffffff;
    thunk_FUN_18015c010(param_2 + 0xe8);
  }
  return;
}



