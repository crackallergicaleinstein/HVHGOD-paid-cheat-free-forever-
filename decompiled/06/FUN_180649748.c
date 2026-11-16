// FUN_180649748 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649748 */

void FUN_180649748(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x80);
  }
  return;
}



