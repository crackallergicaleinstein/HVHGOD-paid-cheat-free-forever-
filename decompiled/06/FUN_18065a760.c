// FUN_18065a760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a760 */

void FUN_18065a760(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_180159650(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}



