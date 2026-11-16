// FUN_18064d391 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d391 */

void FUN_18064d391(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfff7ffff;
    thunk_FUN_18015c010(param_2 + 0x648);
  }
  return;
}



