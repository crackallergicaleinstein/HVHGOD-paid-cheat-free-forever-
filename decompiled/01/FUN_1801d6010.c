// FUN_1801d6010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6010 */

longlong FUN_1801d6010(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 != 0) {
    if ((param_5 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_5) {
        if (param_1 == param_2) {
          return param_3;
        }
        if (param_2 == param_3) {
          return param_1;
        }
        FUN_1801d6230(param_1);
        FUN_1801d6230(param_2,param_3);
        FUN_1801d6230(param_1,param_3);
        return ((param_3 - param_2) / 0x168) * 0x168 + param_1;
      }
      lVar1 = param_6;
      if (param_2 != param_3) {
        lVar3 = param_5 * 0x168 + param_6;
        lVar2 = param_2 - param_6;
        do {
          if (lVar1 == lVar3) break;
          FUN_18017a9c0(lVar1,lVar2 + lVar1);
          lVar1 = lVar1 + 0x168;
        } while (lVar2 + lVar1 != param_3);
      }
      if (param_2 != param_1) {
        param_3 = param_3 - param_2;
        do {
          param_2 = param_2 + -0x168;
          FUN_180175280(param_3 + param_2,param_2);
        } while (param_2 != param_1);
      }
      lVar2 = param_6;
      if (param_6 != lVar1) {
        do {
          FUN_180175280(param_1,lVar2);
          lVar2 = lVar2 + 0x168;
          param_1 = param_1 + 0x168;
        } while (lVar2 != lVar1);
        do {
          FUN_180152210(param_6);
          param_6 = param_6 + 0x168;
        } while (param_6 != lVar1);
        return param_1;
      }
    }
    else {
      lVar1 = param_6;
      if (param_1 != param_2) {
        lVar3 = param_4 * 0x168 + param_6;
        lVar2 = param_1 - param_6;
        do {
          if (lVar1 == lVar3) break;
          FUN_18017a9c0(lVar1,lVar2 + lVar1);
          lVar1 = lVar1 + 0x168;
        } while (lVar2 + lVar1 != param_2);
      }
      for (; param_2 != param_3; param_2 = param_2 + 0x168) {
        FUN_180175280(param_1,param_2);
        param_1 = param_1 + 0x168;
      }
      if (param_6 != lVar1) {
        lVar2 = param_6;
        do {
          FUN_180175280((param_1 - param_6) + lVar2,lVar2);
          lVar2 = lVar2 + 0x168;
        } while (lVar2 != lVar1);
        do {
          FUN_180152210(param_6);
          param_6 = param_6 + 0x168;
        } while (param_6 != lVar1);
      }
    }
  }
  return param_1;
}



