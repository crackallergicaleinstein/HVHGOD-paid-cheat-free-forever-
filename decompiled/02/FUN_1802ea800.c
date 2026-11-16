// FUN_1802ea800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ea800 */

longlong FUN_1802ea800(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar4 = *param_1;
  lVar6 = (param_2 - lVar4) + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_2 - lVar4),8);
  lVar3 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[1] - lVar4),8) +
          (param_1[1] - lVar4);
  lVar3 = (lVar3 >> 8) - (lVar3 >> 0x3f);
  uVar7 = 0xa3d70a3d70a3d7;
  if (lVar3 == 0xa3d70a3d70a3d7) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar3 + 1;
  lVar4 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[2] - lVar4),8) +
          (param_1[2] - lVar4);
  uVar5 = (lVar4 >> 8) - (lVar4 >> 0x3f);
  if (uVar5 <= 0xa3d70a3d70a3d7 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0xa3d70a3d70a3d7 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_18015bca0(uVar7 * 400);
  lVar8 = ((lVar6 >> 8) - (lVar6 >> 0x3f)) * 400 + lVar2;
  FUN_1802ec470(lVar8,param_3);
  lVar6 = param_1[1];
  lVar4 = *param_1;
  lVar3 = lVar2;
  if (param_2 == lVar6) {
    for (; lVar4 != lVar6; lVar4 = lVar4 + 400) {
      FUN_1802ec470(lVar3,lVar4);
      lVar3 = lVar3 + 400;
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 400) {
      FUN_1802ec470(lVar3,lVar4);
      lVar3 = lVar3 + 400;
    }
    lVar6 = param_1[1];
    lVar4 = lVar8;
    for (; param_2 != lVar6; param_2 = param_2 + 400) {
      lVar4 = lVar4 + 400;
      FUN_1802ec470(lVar4,param_2);
    }
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar4 = param_1[1];
    for (; lVar6 != lVar4; lVar6 = lVar6 + 400) {
      FUN_1801bc3d0(lVar6);
    }
    lVar6 = *param_1;
    lVar3 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(param_1[2] - lVar6),8) +
            (param_1[2] - lVar6);
    lVar4 = lVar6;
    if ((0xfff < (ulonglong)(((lVar3 >> 8) - (lVar3 >> 0x3f)) * 400)) &&
       (lVar4 = *(longlong *)(lVar6 + -8), 0x1f < (lVar6 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar4);
  }
  *param_1 = lVar2;
  param_1[1] = uVar1 * 400 + lVar2;
  param_1[2] = uVar7 * 400 + lVar2;
  return lVar8;
}



