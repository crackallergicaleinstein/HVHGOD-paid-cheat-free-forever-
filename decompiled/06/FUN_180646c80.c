// FUN_180646c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646c80 */

void FUN_180646c80(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x28);
  }
  return;
}



