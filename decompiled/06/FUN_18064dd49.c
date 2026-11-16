// FUN_18064dd49 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dd49 */

void FUN_18064dd49(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x58);
  }
  return;
}



