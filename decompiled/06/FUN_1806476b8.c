// FUN_1806476b8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806476b8 */

void FUN_1806476b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}



