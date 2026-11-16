// FUN_180653439 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653439 */

void FUN_180653439(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_1801b3620(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}



