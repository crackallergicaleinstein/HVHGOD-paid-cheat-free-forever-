// FUN_18036ff80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036ff80 */

void FUN_18036ff80(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  lVar6 = param_2;
  if (param_2 < lVar2) {
    do {
      lVar5 = (lVar6 * 2 + 2) * 0x40 + param_1;
      lVar4 = lVar5 + param_6;
      cVar1 = FUN_180114040(lVar4,lVar4 + -0x40);
      lVar4 = ((longlong)cVar1 >> 0x3f) + 2 + lVar6 * 2;
      lVar3 = lVar5 + -0x40;
      if (-1 < cVar1) {
        lVar3 = lVar5;
      }
      FUN_18036fee0(lVar6 * 0x40 + param_1,lVar3);
      lVar6 = lVar4;
    } while (lVar4 < lVar2);
  }
  if ((lVar4 == lVar2) && ((param_3 & 1) == 0)) {
    FUN_18036fee0(lVar4 * 0x40 + param_1,param_1 + -0x40 + param_3 * 0x40);
    lVar4 = param_3 - 1;
  }
  if (param_2 < lVar4) {
    do {
      lVar6 = lVar4 + -1 >> 1;
      cVar1 = FUN_180114040(lVar6 * 0x40 + (longlong)param_6 + param_1,param_7 + param_4);
      if (-1 < cVar1) break;
      FUN_18036fee0(lVar4 * 0x40 + param_1,lVar6 * 0x40 + param_1);
      lVar4 = lVar6;
    } while (param_2 < lVar6);
  }
  FUN_18036fee0(lVar4 * 0x40 + param_1,param_4);
  return;
}



