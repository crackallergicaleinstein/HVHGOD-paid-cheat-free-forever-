// FUN_1806427ea - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806427ea */

void FUN_1806427ea(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xf7ffffff;
    FUN_1800aab30(param_2 + 0x360);
  }
  return;
}



