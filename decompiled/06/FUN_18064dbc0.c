// FUN_18064dbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dbc0 */

void FUN_18064dbc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x10) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0xa8);
  }
  return;
}



