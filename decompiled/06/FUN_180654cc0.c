// FUN_180654cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654cc0 */

void FUN_180654cc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 1) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x300);
  }
  return;
}



