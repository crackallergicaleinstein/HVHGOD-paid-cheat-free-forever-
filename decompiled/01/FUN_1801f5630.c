// FUN_1801f5630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5630 */

longlong FUN_1801f5630(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = *param_1;
  lVar7 = (param_2 - lVar5) / 0x36 + (param_2 - lVar5 >> 0x3f);
  lVar8 = (param_1[1] - lVar5) / 0xd8;
  if (lVar8 == 0x12f684bda12f684) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar5) / 0xd8;
  if (0x12f684bda12f684 - (uVar2 >> 1) < uVar2) {
    uVar4 = 0x12f684bda12f684;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar4 = uVar1;
    if (uVar1 <= uVar2) {
      uVar4 = uVar2;
    }
    if (0x12f684bda12f684 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar4 * 0xd8);
  lVar9 = ((lVar7 >> 2) - (lVar7 >> 0x3f)) * 0xd8 + lVar3;
  lVar5 = lVar9 + 0xd8;
  FUN_1801b90e0(lVar9,param_3);
  lVar8 = param_1[1];
  lVar7 = *param_1;
  lVar6 = lVar3;
  if (param_2 == lVar8) {
    lVar5 = lVar3;
    if (lVar7 != lVar8) {
      do {
        FUN_1801b90e0();
        lVar5 = lVar5 + 0xd8;
        lVar7 = lVar7 + 0xd8;
      } while (lVar7 != lVar8);
    }
  }
  else {
    for (; lVar7 != param_2; lVar7 = lVar7 + 0xd8) {
      FUN_1801b90e0();
      lVar6 = lVar6 + 0xd8;
    }
    FUN_1801f5ae0(lVar6,lVar6);
    lVar8 = param_1[1];
    if (param_2 != lVar8) {
      do {
        FUN_1801b90e0(lVar5,param_2);
        lVar5 = lVar5 + 0xd8;
        param_2 = param_2 + 0xd8;
      } while (param_2 != lVar8);
    }
  }
  FUN_1801f5ae0(lVar5,lVar5);
  if (*param_1 != 0) {
    FUN_1801f5ae0(*param_1,param_1[1]);
    lVar5 = *param_1;
    lVar8 = lVar5;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar5) / 0xd8) * 0xd8)) &&
       (lVar8 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = lVar3;
  param_1[1] = uVar1 * 0xd8 + lVar3;
  param_1[2] = lVar3 + uVar4 * 0xd8;
  return lVar9;
}



