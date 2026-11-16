// FUN_1806403b5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806403b5 */

void FUN_1806403b5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}



