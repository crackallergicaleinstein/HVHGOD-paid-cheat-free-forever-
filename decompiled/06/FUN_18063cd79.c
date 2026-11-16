// FUN_18063cd79 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063cd79 */

void FUN_18063cd79(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0xe0));
  }
  return;
}



