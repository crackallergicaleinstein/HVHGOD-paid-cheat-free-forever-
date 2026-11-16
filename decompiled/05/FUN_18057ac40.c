// FUN_18057ac40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057ac40 */

longlong FUN_18057ac40(longlong param_1,uint param_2,int param_3,int param_4,longlong param_5,
                      undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  if (((param_3 < 0) || (param_4 < 0)) || ((int)param_2 < 0)) {
    uVar1 = 6;
  }
  else {
    if ((param_4 == 0) || (param_2 == 0)) {
      if (param_5 != 0) {
        (**(code **)(param_1 + 0x10))();
      }
      lVar2 = 0;
      goto LAB_18057acf7;
    }
    if (param_4 <= (int)(0x7fffffff / (ulonglong)param_2)) {
      if (param_3 == 0) {
        lVar2 = (**(code **)(param_1 + 8))(param_1,param_2 * param_4);
        uVar1 = 0x40;
        if (lVar2 != 0) {
          uVar1 = 0;
        }
      }
      else {
        lVar2 = (**(code **)(param_1 + 0x18))(param_1,param_2 * param_3,param_2 * param_4,param_5);
        if (lVar2 == 0) {
          uVar1 = 0x40;
          lVar2 = param_5;
        }
      }
      goto LAB_18057acf7;
    }
    uVar1 = 10;
  }
  lVar2 = param_5;
LAB_18057acf7:
  *param_6 = uVar1;
  return lVar2;
}



