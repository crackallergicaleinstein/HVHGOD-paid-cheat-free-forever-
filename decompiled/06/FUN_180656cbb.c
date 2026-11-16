// FUN_180656cbb - decompiled reference (Ghidra). Not original source, does not compile.

/* 180656cbb */

void FUN_180656cbb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x40);
  }
  return;
}



