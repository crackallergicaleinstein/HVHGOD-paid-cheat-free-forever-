// FUN_18064d363 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d363 */

void FUN_18064d363(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffbffff;
    thunk_FUN_18015c010(param_2 + 0xf0);
  }
  return;
}



