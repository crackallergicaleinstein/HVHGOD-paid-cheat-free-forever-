// FUN_18065ee1f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065ee1f */

void FUN_18065ee1f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x98);
  }
  return;
}



