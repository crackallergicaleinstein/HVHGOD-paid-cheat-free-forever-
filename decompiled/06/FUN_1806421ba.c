// FUN_1806421ba - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806421ba */

void FUN_1806421ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 1) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffe;
    FUN_1800aab30(param_2 + 0x330);
  }
  return;
}



