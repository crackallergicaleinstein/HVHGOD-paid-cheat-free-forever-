// FUN_180571e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180571e00 */

void FUN_180571e00(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12)

{
  longlong lVar1;
  
  param_4 = param_4 - param_11;
  if (param_4 == 0) {
LAB_180571efd:
    lVar1 = param_10;
  }
  else {
    if (param_12 != 0) {
      if ((param_4 <= param_12) && (param_4 <= param_7)) {
        FUN_18063aed0(param_6,param_9,param_2 - param_9);
        FUN_18063aed0(param_9,param_2,param_10 - param_2);
        lVar1 = (param_10 - param_2) + param_9;
        FUN_18063aed0(lVar1,param_6,param_2 - param_9);
        goto LAB_180571f38;
      }
      if (param_12 <= param_7) {
        lVar1 = param_10 - param_2;
        FUN_18063aed0(param_6,param_2,lVar1);
        FUN_18063aed0(param_10 - (param_2 - param_9),param_9,param_2 - param_9);
        FUN_18063aed0(param_9,param_6,lVar1);
        lVar1 = lVar1 + param_9;
        goto LAB_180571f38;
      }
      if (param_9 == param_2) goto LAB_180571efd;
      if (param_2 != param_10) {
        FUN_1805fa0d0(param_9);
        FUN_1805fa0d0(param_2,param_10);
        FUN_1805fa0d0(param_9,param_10);
        lVar1 = param_9 + (param_10 - param_2 >> 3) * 8;
        goto LAB_180571f38;
      }
    }
    lVar1 = param_9;
  }
LAB_180571f38:
  FUN_18056e1d0(param_1,param_9,lVar1,param_11,param_12,param_6,param_7,param_8);
  FUN_18056e1d0(lVar1,param_10,param_3,param_4);
  return;
}



