// FUN_1806422d9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806422d9 */

void FUN_1806422d9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x40) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0xa30);
  }
  return;
}



