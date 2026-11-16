// FUN_180159df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159df0 */

ulonglong FUN_180159df0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  
  if ((param_5 <= param_2) && (param_3 <= param_2 - param_5)) {
    if (param_5 == 0) {
      return param_3;
    }
    lVar1 = thunk_FUN_1805f9970(param_1 + param_3,param_1 + param_2,param_4);
    if (lVar1 != param_1 + param_2) {
      return lVar1 - param_1;
    }
  }
  return 0xffffffffffffffff;
}



