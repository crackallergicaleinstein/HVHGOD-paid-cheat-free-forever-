// FUN_18064c0b6 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064c0b6 */

void FUN_18064c0b6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 8) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0xb0);
  }
  return;
}



