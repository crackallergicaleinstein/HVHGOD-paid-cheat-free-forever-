// FUN_180651460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651460 */

void FUN_180651460(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 1) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffe;
    FUN_180265f10(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}



