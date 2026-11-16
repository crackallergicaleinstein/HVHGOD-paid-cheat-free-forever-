// FUN_180267cf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180267cf0 */

void FUN_180267cf0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  uVar2 = param_1[2] - lVar1 >> 2;
  if (uVar2 < param_3) {
    if (0x3fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0x3fffffffffffffff - (uVar2 >> 1) < uVar2) {
      uVar3 = 0x3fffffffffffffff;
    }
    else {
      uVar3 = uVar2 + (uVar2 >> 1);
      if (uVar3 < param_3) {
        uVar3 = param_3;
      }
    }
    if (lVar1 != 0) {
      lVar4 = lVar1;
      if ((0xfff < uVar2 * 4) && (lVar4 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x3fffffffffffffff < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar1 = FUN_18015bca0(uVar3 * 4);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = uVar3 * 4 + lVar1;
    lVar4 = param_3 * 4;
  }
  else {
    uVar2 = param_1[1] - lVar1 >> 2;
    if (uVar2 < param_3) {
      FUN_18063aed0(lVar1,param_2,uVar2 * 4);
      lVar1 = param_1[1];
      lVar4 = (param_3 - uVar2) * 4;
      param_2 = uVar2 * 4 + param_2;
    }
    else {
      lVar4 = param_3 * 4;
    }
  }
  FUN_18063aed0(lVar1,param_2,lVar4);
  param_1[1] = lVar4 + lVar1;
  return;
}



