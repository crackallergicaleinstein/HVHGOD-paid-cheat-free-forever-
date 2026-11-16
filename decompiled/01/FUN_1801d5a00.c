// FUN_1801d5a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d5a00 */

void FUN_1801d5a00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_5 <= param_4) {
LAB_1801d5b40:
    if (param_1 != param_2) {
      param_3 = param_3 - param_1;
      do {
        FUN_180175280(param_3 + param_1,param_1);
        param_1 = param_1 + 0x168;
      } while (param_1 != param_2);
    }
    return;
  }
  lVar3 = param_1;
LAB_1801d5a50:
  param_5 = param_5 - param_4;
  lVar1 = param_4 * 0x168 + lVar3;
  lVar4 = param_4;
  if (param_5 < param_4) {
    lVar4 = param_5;
  }
  param_5 = param_5 - lVar4;
  param_1 = lVar4 * 0x168 + lVar1;
  lVar4 = lVar1;
  lVar5 = param_3;
  do {
    while( true ) {
      param_3 = lVar5 + 0x168;
      cVar2 = FUN_1801d5040();
      if (cVar2 == '\0') break;
      FUN_180175280(lVar5,lVar4);
      lVar4 = lVar4 + 0x168;
      lVar5 = param_3;
      if (lVar4 == param_1) goto joined_r0x0001801d5aa4;
    }
    FUN_180175280(lVar5,lVar3);
    lVar3 = lVar3 + 0x168;
    lVar5 = param_3;
  } while (lVar3 != lVar1);
  for (; lVar4 != param_1; lVar4 = lVar4 + 0x168) {
    FUN_180175280(param_3,lVar4);
    param_3 = param_3 + 0x168;
  }
  goto LAB_1801d5b0e;
joined_r0x0001801d5aa4:
  for (; lVar3 != lVar1; lVar3 = lVar3 + 0x168) {
    FUN_180175280(param_3,lVar3);
    param_3 = param_3 + 0x168;
  }
LAB_1801d5b0e:
  lVar3 = param_1;
  if (param_5 <= param_4) goto LAB_1801d5b40;
  goto LAB_1801d5a50;
}



