// FUN_180574630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180574630 */

undefined8 FUN_180574630(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + 0x18))();
    param_2 = 0;
    if (uVar1 < *(uint *)(param_1 + 0x10)) {
      param_2 = (ulonglong)uVar1;
    }
  }
  uVar2 = FUN_180574690(param_1,param_2,param_3);
  return uVar2;
}



