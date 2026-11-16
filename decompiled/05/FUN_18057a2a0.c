// FUN_18057a2a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a2a0 */

void FUN_18057a2a0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  
  if ((*(longlong *)(param_1 + 0xf0) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x78) = param_2;
    return;
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  *puVar1 = *puVar1 & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return;
}



