// FUN_18064d4a6 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d4a6 */

void FUN_18064d4a6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 4) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x170);
  }
  return;
}



