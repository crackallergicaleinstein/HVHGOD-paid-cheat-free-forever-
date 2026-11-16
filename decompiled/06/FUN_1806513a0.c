// FUN_1806513a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806513a0 */

void FUN_1806513a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x1a8) & 1) != 0) {
    *(uint *)(param_2 + 0x1a8) = *(uint *)(param_2 + 0x1a8) & 0xfffffffe;
    FUN_180265f10(*(undefined8 *)(param_2 + 0x1b8));
  }
  return;
}



