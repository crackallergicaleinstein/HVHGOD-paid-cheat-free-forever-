// FUN_180649ea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649ea0 */

void FUN_180649ea0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 1) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffe;
    FUN_1801ab370(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}



