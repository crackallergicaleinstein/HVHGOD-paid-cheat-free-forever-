// FUN_1801780e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801780e0 */

void FUN_1801780e0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  uVar2 = param_1[2] - lVar1 >> 3;
  if (uVar2 < param_3) {
    if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0x1fffffffffffffff - (uVar2 >> 1) < uVar2) {
      uVar3 = 0x1fffffffffffffff;
    }
    else {
      uVar3 = uVar2 + (uVar2 >> 1);
      if (uVar3 < param_3) {
        uVar3 = param_3;
      }
    }
    if (lVar1 != 0) {
      lVar4 = lVar1;
      if ((0xfff < uVar2 * 8) && (lVar4 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x1fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar1 = FUN_18015bca0(uVar3 * 8);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = uVar3 * 8 + lVar1;
    lVar4 = param_3 * 8;
  }
  else {
    uVar2 = param_1[1] - lVar1 >> 3;
    if (uVar2 < param_3) {
      FUN_18063aed0(lVar1,param_2,uVar2 * 8);
      lVar1 = param_1[1];
      lVar4 = (param_3 - uVar2) * 8;
      param_2 = uVar2 * 8 + param_2;
    }
    else {
      lVar4 = param_3 * 8;
    }
  }
  FUN_18063aed0(lVar1,param_2,lVar4);
  param_1[1] = lVar4 + lVar1;
  return;
}



