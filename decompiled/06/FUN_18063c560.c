// FUN_18063c560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c560 */

void FUN_18063c560(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_1800aab30(param_2 + 0x130);
  }
  return;
}



