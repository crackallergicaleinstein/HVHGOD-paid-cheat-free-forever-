// FUN_180647858 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647858 */

void FUN_180647858(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_1800f3250(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}



