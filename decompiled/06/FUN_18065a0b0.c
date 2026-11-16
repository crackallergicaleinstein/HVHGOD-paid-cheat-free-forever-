// FUN_18065a0b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a0b0 */

void FUN_18065a0b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xf0) & 1) != 0) {
    *(uint *)(param_2 + 0xf0) = *(uint *)(param_2 + 0xf0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x50);
  }
  return;
}



