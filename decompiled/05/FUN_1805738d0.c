// FUN_1805738d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805738d0 */

uint FUN_1805738d0(longlong param_1)

{
  uint uVar1;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x88) == 0)) {
    return 0;
  }
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + 0x18))();
  if (*(uint *)(param_1 + 0x10) <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}



