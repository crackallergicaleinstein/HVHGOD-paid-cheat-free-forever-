// FUN_18057a4a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a4a0 */

undefined4 FUN_18057a4a0(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  *(code **)(param_1 + 4) = FUN_18057c0a0;
  *(code **)(param_1 + 6) = FUN_18057c070;
  lVar1 = (**(code **)(param_2 + 8))(param_2,0x788);
  uVar2 = 0x40;
  if ((lVar1 != 0) && (uVar2 = 0, lVar1 != 0)) {
    FUN_18063ab10(lVar1,0,0x788);
  }
  *(longlong *)(param_1 + 8) = lVar1;
  return uVar2;
}



