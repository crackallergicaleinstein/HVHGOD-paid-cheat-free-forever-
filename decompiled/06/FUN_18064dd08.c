// FUN_18064dd08 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dd08 */

void FUN_18064dd08(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0xb8);
  }
  return;
}



