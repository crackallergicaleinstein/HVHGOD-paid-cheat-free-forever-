// FUN_1806427bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806427bc */

void FUN_1806427bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfbffffff;
    FUN_1800aab30(param_2 + 0x348);
  }
  return;
}



