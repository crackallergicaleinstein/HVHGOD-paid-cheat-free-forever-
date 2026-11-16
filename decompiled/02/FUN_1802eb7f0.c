// FUN_1802eb7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eb7f0 */

void FUN_1802eb7f0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0x1642c8590b21642 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  lVar4 = *param_1;
  lVar1 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar4),8) +
          (param_1[2] - lVar4);
  uVar2 = (lVar1 >> 7) - (lVar1 >> 0x3f);
  if (0x1642c8590b21642 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x1642c8590b21642;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
  }
  if (lVar4 != 0) {
    lVar1 = param_1[1];
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0xb8) {
      FUN_1801b36e0(lVar4 + 0x10);
    }
    lVar4 = *param_1;
    lVar3 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar4),8) +
            (param_1[2] - lVar4);
    lVar1 = lVar4;
    if ((0xfff < (ulonglong)(((lVar3 >> 7) - (lVar3 >> 0x3f)) * 0xb8)) &&
       (lVar1 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (0x1642c8590b21642 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar4 = FUN_18015bca0(uVar2 * 0xb8);
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[2] = lVar4 + uVar2 * 0xb8;
  return;
}



