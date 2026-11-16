// FUN_180212390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212390 */

void FUN_180212390(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar5) {
    lVar3 = (lVar4 * 2 + 2) * 200 + param_1;
    lVar2 = lVar3 + param_6;
    cVar1 = FUN_180114040(lVar2,lVar2 + -200);
    lVar2 = lVar3 + -200;
    if (-1 < cVar1) {
      lVar2 = lVar3;
    }
    FUN_180206c30(lVar4 * 200 + param_1,lVar2);
    lVar4 = lVar4 * 2 + ((longlong)cVar1 >> 0x3f) + 2;
  }
  if ((lVar4 == lVar5) && ((param_3 & 1) == 0)) {
    FUN_180206c30(lVar4 * 200 + param_1,param_3 * 200 + -200 + param_1);
    lVar4 = param_3 - 1;
  }
  if (param_2 < lVar4) {
    do {
      lVar5 = lVar4 + -1 >> 1;
      cVar1 = FUN_180114040(lVar5 * 200 + (longlong)param_6 + param_1,param_7 + param_4);
      if (-1 < cVar1) break;
      FUN_180206c30(lVar4 * 200 + param_1,lVar5 * 200 + param_1);
      lVar4 = lVar5;
    } while (param_2 < lVar5);
  }
  FUN_180206c30(lVar4 * 200 + param_1,param_4);
  return;
}



