// FUN_1802ea280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ea280 */

longlong FUN_1802ea280(longlong *param_1,longlong param_2,undefined8 param_3)

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
  lVar6 = (param_2 - lVar4) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - lVar4),8);
  lVar3 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[1] - lVar4),8) +
          (param_1[1] - lVar4);
  lVar3 = (lVar3 >> 7) - (lVar3 >> 0x3f);
  uVar7 = 0x1642c8590b21642;
  if (lVar3 == 0x1642c8590b21642) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar3 + 1;
  lVar4 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar4),8) +
          (param_1[2] - lVar4);
  uVar5 = (lVar4 >> 7) - (lVar4 >> 0x3f);
  if (uVar5 <= 0x1642c8590b21642 - (uVar5 >> 1)) {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar7 = uVar1;
    if (uVar1 <= uVar5) {
      uVar7 = uVar5;
    }
    if (0x1642c8590b21642 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_18015bca0(uVar7 * 0xb8);
  lVar8 = ((lVar6 >> 7) - (lVar6 >> 0x3f)) * 0xb8 + lVar2;
  FUN_1802ec3a0(lVar8,param_3);
  lVar6 = param_1[1];
  lVar4 = *param_1;
  lVar3 = lVar2;
  if (param_2 == lVar6) {
    for (; lVar4 != lVar6; lVar4 = lVar4 + 0xb8) {
      FUN_1802ec3a0(lVar3,lVar4);
      lVar3 = lVar3 + 0xb8;
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0xb8) {
      FUN_1802ec3a0(lVar3,lVar4);
      lVar3 = lVar3 + 0xb8;
    }
    lVar6 = param_1[1];
    lVar4 = lVar8;
    if (param_2 != lVar6) {
      do {
        lVar4 = lVar4 + 0xb8;
        FUN_1802ec3a0(lVar4,param_2);
        param_2 = param_2 + 0xb8;
      } while (param_2 != lVar6);
    }
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    lVar4 = param_1[1];
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0xb8) {
      FUN_1801b36e0(lVar6 + 0x10);
    }
    lVar6 = *param_1;
    lVar3 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar6),8) +
            (param_1[2] - lVar6);
    lVar4 = lVar6;
    if ((0xfff < (ulonglong)(((lVar3 >> 7) - (lVar3 >> 0x3f)) * 0xb8)) &&
       (lVar4 = *(longlong *)(lVar6 + -8), 0x1f < (lVar6 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar4);
  }
  *param_1 = lVar2;
  param_1[1] = uVar1 * 0xb8 + lVar2;
  param_1[2] = lVar2 + uVar7 * 0xb8;
  return lVar8;
}



