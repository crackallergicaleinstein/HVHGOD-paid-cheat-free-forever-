// FUN_180655080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655080 */

void FUN_180655080(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x160) & 1) != 0) {
    *(uint *)(param_2 + 0x160) = *(uint *)(param_2 + 0x160) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x400);
  }
  return;
}



