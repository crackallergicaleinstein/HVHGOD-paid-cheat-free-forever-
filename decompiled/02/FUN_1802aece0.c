// FUN_1802aece0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aece0 */

longlong FUN_1802aece0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    FUN_18063aed0(param_6,param_1,param_2 - param_1);
    FUN_18063aed0(param_1,param_2,param_3 - param_2);
    lVar1 = (param_3 - param_2) + param_1;
    FUN_18063aed0(lVar1,param_6,param_2 - param_1);
    return lVar1;
  }
  if (param_5 <= param_7) {
    lVar1 = param_3 - param_2;
    FUN_18063aed0(param_6,param_2,lVar1);
    FUN_18063aed0(param_3 - (param_2 - param_1),param_1,param_2 - param_1);
    FUN_18063aed0(param_1,param_6,lVar1);
    return lVar1 + param_1;
  }
  if (param_1 != param_2) {
    if (param_2 == param_3) {
      param_3 = param_1;
    }
    else {
      FUN_1805f9ff0(param_1);
      FUN_1805f9ff0(param_2,param_3);
      FUN_1805f9ff0(param_1,param_3);
      param_3 = param_1 + (param_3 - param_2 >> 2) * 4;
    }
  }
  return param_3;
}



