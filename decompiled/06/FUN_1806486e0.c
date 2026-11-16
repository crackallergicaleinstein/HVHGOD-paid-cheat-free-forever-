// FUN_1806486e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806486e0 */

void FUN_1806486e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_180156fb0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



