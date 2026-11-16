// FUN_18064d2f8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d2f8 */

void FUN_18064d2f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xd0) & 0x400) != 0) {
    *(uint *)(param_2 + 0xd0) = *(uint *)(param_2 + 0xd0) & 0xfffffbff;
    FUN_1800aab30(param_2 + 0x40);
  }
  return;
}



