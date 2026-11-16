// FUN_1801d5b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d5b70 */

void FUN_1801d5b70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_5 * 0x168 + param_4;
  lVar2 = param_4;
  if (param_2 != param_3) {
    lVar3 = param_2 - param_4;
    do {
      if (lVar2 == lVar4) break;
      FUN_18017a9c0(lVar2,lVar3 + lVar2);
      lVar2 = lVar2 + 0x168;
    } while (lVar3 + lVar2 != param_3);
  }
  param_3 = param_3 + -0x168;
  FUN_180175280(param_3,param_2 + -0x168);
  param_2 = param_2 + -0x2d0;
  lVar4 = lVar2 + -0x168;
  do {
    while( true ) {
      param_3 = param_3 + -0x168;
      cVar1 = FUN_1801d5040();
      if (cVar1 == '\0') break;
      FUN_180175280(param_3,param_2);
      if (param_1 == param_2) {
        lVar4 = lVar4 + 0x168;
        if (lVar4 != param_4) {
          param_3 = param_3 - lVar4;
          do {
            lVar4 = lVar4 + -0x168;
            FUN_180175280(param_3 + lVar4,lVar4);
          } while (lVar4 != param_4);
        }
        goto joined_r0x0001801d5c79;
      }
      param_2 = param_2 + -0x168;
    }
    FUN_180175280(param_3,lVar4);
    lVar4 = lVar4 + -0x168;
  } while (param_4 != lVar4);
  param_2 = param_2 + 0x168;
  if (param_2 != param_1) {
    param_3 = param_3 - param_2;
    do {
      param_2 = param_2 + -0x168;
      FUN_180175280(param_3 + param_2,param_2);
    } while (param_2 != param_1);
  }
  FUN_180175280(param_1,param_4);
joined_r0x0001801d5c79:
  for (; param_4 != lVar2; param_4 = param_4 + 0x168) {
    FUN_180152210(param_4);
  }
  return;
}



