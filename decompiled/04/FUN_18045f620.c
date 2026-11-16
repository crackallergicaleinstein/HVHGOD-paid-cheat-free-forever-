// FUN_18045f620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f620 */

longlong FUN_18045f620(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *param_1;
  lVar6 = (param_1[1] - lVar4) / 0x68;
  uVar5 = 0x276276276276276;
  if (lVar6 == 0x276276276276276) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar2 = (param_1[2] - lVar4) / 0x68;
  if (uVar2 <= 0x276276276276276 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0x276276276276276 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar5 * 0x68);
  lVar7 = ((param_2 - lVar4) / 0x68) * 0x68 + lVar3;
  FUN_18045f840(lVar7 + 0x68,lVar7,param_3);
  lVar4 = param_1[1];
  lVar6 = *param_1;
  if (param_2 == lVar4) {
    if (lVar6 != lVar4) {
      do {
        FUN_18045f840();
        lVar6 = lVar6 + 0x68;
      } while (lVar6 != lVar4);
    }
  }
  else {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x68) {
      FUN_18045f840();
    }
    lVar4 = param_1[1];
    if (param_2 != lVar4) {
      do {
        FUN_18045f840();
        param_2 = param_2 + 0x68;
      } while (param_2 != lVar4);
    }
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar6 = param_1[1];
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0x68) {
      FUN_18015c010(lVar4);
    }
    lVar4 = *param_1;
    lVar6 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0x68) * 0x68)) &&
       (lVar6 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = lVar3;
  param_1[1] = uVar1 * 0x68 + lVar3;
  param_1[2] = lVar3 + uVar5 * 0x68;
  return lVar7;
}



