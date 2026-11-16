// FUN_1802f42c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f42c0 */

longlong FUN_1802f42c0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *param_1;
  lVar7 = (param_1[1] - lVar5) / 0x88;
  uVar6 = 0x1e1e1e1e1e1e1e1;
  if (lVar7 == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar5) / 0x88;
  if (uVar2 <= 0x1e1e1e1e1e1e1e1 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0x1e1e1e1e1e1e1e1 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar6 * 0x88);
  lVar8 = ((param_2 - lVar5) / 0x88) * 0x88 + lVar4;
  FUN_1802f4900(lVar8,param_3);
  lVar5 = param_1[1];
  lVar7 = *param_1;
  lVar3 = lVar4;
  if (param_2 == lVar5) {
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0x88) {
      FUN_1802f4900(lVar3,lVar7);
      lVar3 = lVar3 + 0x88;
    }
  }
  else {
    for (; lVar7 != param_2; lVar7 = lVar7 + 0x88) {
      FUN_1802f4900(lVar3,lVar7);
      lVar3 = lVar3 + 0x88;
    }
    lVar5 = param_1[1];
    lVar7 = lVar8;
    if (param_2 != lVar5) {
      do {
        FUN_1802f4900(lVar7 + 0x88,param_2);
        param_2 = param_2 + 0x88;
        lVar7 = lVar7 + 0x88;
      } while (param_2 != lVar5);
    }
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar7 = param_1[1];
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x88) {
      FUN_1801b36e0(lVar5 + 0x38);
      FUN_1801b36e0(lVar5 + 0x20);
    }
    lVar5 = *param_1;
    lVar7 = lVar5;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar5) / 0x88) * 0x88)) &&
       (lVar7 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0x88 + lVar4;
  param_1[2] = lVar4 + uVar6 * 0x88;
  return lVar8;
}



