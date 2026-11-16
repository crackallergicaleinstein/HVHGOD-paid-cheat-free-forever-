// FUN_18063f280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063f280 */

void FUN_18063f280(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x2e8));
  }
  return;
}



