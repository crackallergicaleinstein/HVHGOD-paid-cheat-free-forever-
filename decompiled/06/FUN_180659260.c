// FUN_180659260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180659260 */

void FUN_180659260(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_1800a8b70(param_2 + 0x60);
  }
  return;
}



