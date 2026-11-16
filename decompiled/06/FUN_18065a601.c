// FUN_18065a601 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a601 */

void FUN_18065a601(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x28);
  }
  return;
}



