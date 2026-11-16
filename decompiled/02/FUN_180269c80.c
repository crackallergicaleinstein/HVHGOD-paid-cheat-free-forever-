// FUN_180269c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180269c80 */

void FUN_180269c80(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if (param_5 <= param_4) {
LAB_180269e01:
    if (param_1 != param_2) {
      param_3 = param_3 - param_1;
      do {
        FUN_1802668f0(param_3 + param_1,param_1);
        param_1 = param_1 + 0x20;
      } while (param_1 != param_2);
    }
    return;
  }
  lVar5 = param_1;
LAB_180269ce0:
  param_5 = param_5 - param_4;
  lVar1 = param_4 * 0x20 + lVar5;
  lVar3 = param_4;
  if (param_5 < param_4) {
    lVar3 = param_5;
  }
  param_5 = param_5 - lVar3;
  param_1 = lVar3 * 0x20 + lVar1;
  lVar3 = lVar1;
  lVar4 = param_3;
  do {
    while( true ) {
      param_3 = lVar4 + 0x20;
      lVar2 = **(longlong **)(param_6 + 8);
      fVar6 = (float)FUN_18025e110((longlong)**(int **)(lVar3 + 8),
                                   (longlong)**(int **)(lVar3 + 8) * 0x98 + lVar2);
      fVar7 = (float)FUN_18025e110(fVar6,(longlong)**(int **)(lVar5 + 8) * 0x98 + lVar2);
      if (fVar7 <= fVar6) break;
      FUN_1802668f0(lVar4,lVar3);
      lVar3 = lVar3 + 0x20;
      lVar4 = param_3;
      if (lVar3 == param_1) goto joined_r0x000180269d69;
    }
    FUN_1802668f0(lVar4,lVar5);
    lVar5 = lVar5 + 0x20;
    lVar4 = param_3;
  } while (lVar5 != lVar1);
  for (; lVar3 != param_1; lVar3 = lVar3 + 0x20) {
    FUN_1802668f0(param_3,lVar3);
    param_3 = param_3 + 0x20;
  }
  goto LAB_180269dbc;
joined_r0x000180269d69:
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x20) {
    FUN_1802668f0(param_3,lVar5);
    param_3 = param_3 + 0x20;
  }
LAB_180269dbc:
  lVar5 = param_1;
  if (param_5 <= param_4) goto LAB_180269e01;
  goto LAB_180269ce0;
}



