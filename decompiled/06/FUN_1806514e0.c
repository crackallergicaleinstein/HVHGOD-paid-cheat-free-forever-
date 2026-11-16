// FUN_1806514e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806514e0 */

void FUN_1806514e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    FUN_180265f10(*(undefined8 *)(param_2 + 0x160));
  }
  return;
}



