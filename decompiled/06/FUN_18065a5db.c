// FUN_18065a5db - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a5db */

void FUN_18065a5db(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x48);
  }
  return;
}



