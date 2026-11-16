// FUN_18065a427 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a427 */

void FUN_18065a427(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x268);
  }
  return;
}



