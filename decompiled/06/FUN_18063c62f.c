// FUN_18063c62f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c62f */

void FUN_18063c62f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    FUN_1800aab30(param_2 + 0x30);
  }
  return;
}



