// FUN_18065f96e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f96e */

void FUN_18065f96e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x108);
  }
  return;
}



