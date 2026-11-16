// FUN_180657758 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657758 */

void FUN_180657758(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 200);
  }
  return;
}



