// FUN_18063c601 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c601 */

void FUN_18063c601(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_1800aab30(param_2 + 0xf0);
  }
  return;
}



