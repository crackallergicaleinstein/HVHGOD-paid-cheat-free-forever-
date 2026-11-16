// FUN_1801d5850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d5850 */

void FUN_1801d5850(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = param_4 * 0x168 + param_3;
  lVar3 = param_1;
  if (param_4 < 0x21) {
LAB_1801d59b5:
    if (lVar3 != param_2) {
      lVar3 = lVar3 - param_3;
      do {
        if (param_3 == lVar5) {
          return;
        }
        FUN_18017a9c0(param_3,lVar3 + param_3);
        param_3 = param_3 + 0x168;
      } while (lVar3 + param_3 != param_2);
    }
    return;
  }
LAB_1801d58a0:
  param_4 = param_4 + -0x20;
  lVar4 = 0x20;
  if (param_4 < 0x20) {
    lVar4 = param_4;
  }
  param_4 = param_4 - lVar4;
  lVar1 = param_1 + 0x2d00;
  lVar3 = lVar4 * 0x168 + lVar1;
  lVar6 = param_3 + 0x2d00 + lVar4 * 0x168;
  lVar4 = lVar1;
  do {
    while (cVar2 = FUN_1801d5040(), cVar2 != '\0') {
      FUN_18017a9c0(param_3,lVar4);
      param_3 = param_3 + 0x168;
      lVar4 = lVar4 + 0x168;
      if (lVar4 == lVar3) goto joined_r0x0001801d5918;
    }
    FUN_18017a9c0(param_3,param_1);
    param_3 = param_3 + 0x168;
    param_1 = param_1 + 0x168;
  } while (param_1 != lVar1);
  for (; (lVar4 != lVar3 && (param_3 != lVar6)); param_3 = param_3 + 0x168) {
    FUN_18017a9c0(param_3,lVar4);
    lVar4 = lVar4 + 0x168;
  }
  goto LAB_1801d5994;
joined_r0x0001801d5918:
  for (; (param_1 != lVar1 && (param_3 != lVar6)); param_3 = param_3 + 0x168) {
    FUN_18017a9c0(param_3,param_1);
    param_1 = param_1 + 0x168;
  }
LAB_1801d5994:
  param_1 = lVar3;
  if (param_4 < 0x21) goto LAB_1801d59b5;
  goto LAB_1801d58a0;
}



