// FUN_18063c6b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c6b4 */

void FUN_18063c6b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x160));
  }
  return;
}



