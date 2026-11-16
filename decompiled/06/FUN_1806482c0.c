// FUN_1806482c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806482c0 */

void FUN_1806482c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 1) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffe;
    FUN_18015ab90(*(longlong *)(param_2 + 0x60) + 0x90);
  }
  return;
}



