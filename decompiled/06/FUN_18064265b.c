// FUN_18064265b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064265b */

void FUN_18064265b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfff7ffff;
    FUN_1800aab30(param_2 + 0x330);
  }
  return;
}



