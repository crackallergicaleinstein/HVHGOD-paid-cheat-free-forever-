// FUN_1806501e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806501e0 */

void FUN_1806501e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_1800cf8e0(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



