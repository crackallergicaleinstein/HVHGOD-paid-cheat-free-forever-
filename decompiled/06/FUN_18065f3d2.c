// FUN_18065f3d2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f3d2 */

void FUN_18065f3d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0xf0);
  }
  return;
}



