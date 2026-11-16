// FUN_180114410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180114410 */

ulonglong FUN_180114410(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (param_5 == 0) {
    if (param_2 < param_3) {
      param_3 = param_2;
    }
    return param_3;
  }
  if (param_2 < param_5) {
    return 0xffffffffffffffff;
  }
  if (param_2 - param_5 < param_3) {
    param_3 = param_2 - param_5;
  }
  lVar3 = param_5 + param_3 + param_1;
  lVar1 = thunk_FUN_1805f7970(param_1,lVar3,param_4);
  uVar2 = 0xffffffffffffffff;
  if (lVar1 != lVar3) {
    uVar2 = lVar1 - param_1;
  }
  return uVar2;
}



