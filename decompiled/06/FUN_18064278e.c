// FUN_18064278e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064278e */

void FUN_18064278e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfdffffff;
    FUN_1800aab30(param_2 + 0x330);
  }
  return;
}



