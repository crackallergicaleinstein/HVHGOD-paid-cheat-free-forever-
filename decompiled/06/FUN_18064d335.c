// FUN_18064d335 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d335 */

void FUN_18064d335(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffdffff;
    thunk_FUN_18015c010(param_2 + 0x648);
  }
  return;
}



