// FUN_180645020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180645020 */

void FUN_180645020(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_180111b90(*(undefined8 *)(param_2 + 0x460));
  }
  return;
}



