// FUN_18065d5b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d5b0 */

void FUN_18065d5b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 1) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x110);
  }
  return;
}



