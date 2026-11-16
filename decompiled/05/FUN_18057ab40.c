// FUN_18057ab40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057ab40 */

longlong FUN_18057ab40(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_3 < 1) {
    if (param_3 < 0) {
      uVar1 = 6;
      goto LAB_18057ab9d;
    }
  }
  else {
    lVar2 = (**(code **)(param_1 + 8))(param_1,param_3);
    uVar1 = 0x40;
    if (lVar2 == 0) goto LAB_18057ab9d;
  }
  uVar1 = 0;
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_18063aed0(lVar2,param_2,param_3);
  }
LAB_18057ab9d:
  *param_4 = uVar1;
  return lVar2;
}



