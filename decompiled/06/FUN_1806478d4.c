// FUN_1806478d4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806478d4 */

void FUN_1806478d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x220);
  }
  return;
}



