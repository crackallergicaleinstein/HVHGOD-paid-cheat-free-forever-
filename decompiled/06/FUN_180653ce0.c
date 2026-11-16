// FUN_180653ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653ce0 */

void FUN_180653ce0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x130) & 1) != 0) {
    *(uint *)(param_2 + 0x130) = *(uint *)(param_2 + 0x130) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x130);
  }
  return;
}



