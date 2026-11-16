// FUN_18064f7b2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064f7b2 */

void FUN_18064f7b2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 4) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x130);
  }
  return;
}



