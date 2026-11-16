// FUN_18065faa4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065faa4 */

void FUN_18065faa4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x10) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0xe0);
  }
  return;
}



