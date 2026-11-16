// FUN_18065d730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d730 */

void FUN_18065d730(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x60);
  }
  return;
}



