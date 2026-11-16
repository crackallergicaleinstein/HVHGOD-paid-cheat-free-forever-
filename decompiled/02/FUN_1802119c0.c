// FUN_1802119c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802119c0 */

longlong FUN_1802119c0(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar6 = *param_1;
  lVar3 = (param_2 - lVar6) + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - lVar6),8);
  lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[1] - lVar6),8) +
          (param_1[1] - lVar6);
  lVar5 = (lVar5 >> 7) - (lVar5 >> 0x3f);
  if (lVar5 == 0x147ae147ae147ae) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  lVar6 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[2] - lVar6),8) +
          (param_1[2] - lVar6);
  uVar7 = (lVar6 >> 7) - (lVar6 >> 0x3f);
  if (0x147ae147ae147ae - (uVar7 >> 1) < uVar7) {
    uVar8 = 0x147ae147ae147ae;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x147ae147ae147ae < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_18015bca0(uVar8 * 200);
  lVar9 = ((lVar3 >> 7) - (lVar3 >> 0x3f)) * 200 + lVar2;
  lVar3 = lVar9 + 200;
  FUN_180212600();
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar4 = lVar2;
  if (param_2 == lVar6) {
    lVar3 = lVar2;
    if (lVar5 != lVar6) {
      do {
        FUN_180212250();
        lVar3 = lVar3 + 200;
        lVar5 = lVar5 + 200;
      } while (lVar5 != lVar6);
    }
  }
  else {
    for (; lVar5 != param_2; lVar5 = lVar5 + 200) {
      FUN_180212250();
      lVar4 = lVar4 + 200;
    }
    FUN_1801b6890(lVar4,lVar4);
    lVar6 = param_1[1];
    if (param_2 != lVar6) {
      do {
        FUN_180212250(lVar3,param_2);
        lVar3 = lVar3 + 200;
        param_2 = param_2 + 200;
      } while (param_2 != lVar6);
    }
  }
  FUN_1801b6890(lVar3,lVar3);
  if (*param_1 != 0) {
    FUN_1801b6890(*param_1,param_1[1]);
    lVar3 = *param_1;
    lVar5 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[2] - lVar3),8) +
            (param_1[2] - lVar3);
    lVar6 = lVar3;
    if ((0xfff < (ulonglong)(((lVar5 >> 7) - (lVar5 >> 0x3f)) * 200)) &&
       (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = lVar2;
  param_1[1] = uVar1 * 200 + lVar2;
  param_1[2] = lVar2 + uVar8 * 200;
  return lVar9;
}



