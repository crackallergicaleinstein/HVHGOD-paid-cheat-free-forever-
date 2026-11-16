// FUN_18065f239 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f239 */

void FUN_18065f239(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x130);
  }
  return;
}



