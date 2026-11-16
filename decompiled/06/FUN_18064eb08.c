// FUN_18064eb08 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064eb08 */

void FUN_18064eb08(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    thunk_FUN_18015b930(param_2 + 400);
  }
  return;
}



