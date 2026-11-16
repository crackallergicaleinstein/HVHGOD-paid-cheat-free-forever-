// FUN_1806404f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806404f0 */

void FUN_1806404f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



