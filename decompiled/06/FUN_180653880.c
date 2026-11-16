// FUN_180653880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653880 */

void FUN_180653880(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x90);
  }
  return;
}



