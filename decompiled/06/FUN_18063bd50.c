// FUN_18063bd50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063bd50 */

void FUN_18063bd50(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0xf0));
  }
  return;
}



