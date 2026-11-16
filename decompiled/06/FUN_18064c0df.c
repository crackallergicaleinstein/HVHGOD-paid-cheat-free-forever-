// FUN_18064c0df - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064c0df */

void FUN_18064c0df(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



