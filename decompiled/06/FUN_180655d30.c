// FUN_180655d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655d30 */

void FUN_180655d30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_1801b3410(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}



