// FUN_1802b5f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b5f40 */

void FUN_1802b5f40(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar4 = (param_1[2] - lVar1) / 0xc;
  if (uVar4 < param_3) {
    if (0x1555555555555555 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0x1555555555555555 - (uVar4 >> 1) < uVar4) {
      uVar3 = 0x1555555555555555;
    }
    else {
      uVar3 = uVar4 + (uVar4 >> 1);
      if (uVar3 < param_3) {
        uVar3 = param_3;
      }
    }
    if (lVar1 != 0) {
      lVar2 = lVar1;
      if ((0xfff < uVar4 * 0xc) && (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U))
      {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x1555555555555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar1 = FUN_18015bca0(uVar3 * 0xc);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + uVar3 * 0xc;
  }
  else {
    lVar2 = (param_1[1] - lVar1) / 6 + (param_1[1] - lVar1 >> 0x3f);
    uVar4 = (lVar2 >> 1) - (lVar2 >> 0x3f);
    if (uVar4 < param_3) {
      FUN_18063aed0(lVar1,param_2,uVar4 * 0xc);
      lVar1 = param_1[1];
      param_3 = param_3 - uVar4;
      param_2 = uVar4 * 0xc + param_2;
    }
  }
  FUN_18063aed0(lVar1,param_2,param_3 * 0xc);
  param_1[1] = param_3 * 0xc + lVar1;
  return;
}



