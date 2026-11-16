// FUN_18064697f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064697f */

void FUN_18064697f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 8) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0xa8);
  }
  return;
}



