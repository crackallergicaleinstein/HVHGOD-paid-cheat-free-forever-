// FUN_180579e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579e90 */

void FUN_180579e90(longlong param_1)

{
  uint *puVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    return;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  *puVar1 = *puVar1 & 0xfffffffe;
  return;
}



