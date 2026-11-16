// FUN_18044d360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044d360 */

void FUN_18044d360(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0xfffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar2 = param_1[2] - *param_1 >> 4;
  if (0xfffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0xfffffffffffffff;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
    else if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar1 = FUN_18015bca0(uVar2 * 0x10);
  lVar3 = param_2 - lVar4;
  if (lVar3 != 0) {
    FUN_18063ab10(lVar4 * 0x10 + lVar1,0,lVar3 * 0x10);
  }
  FUN_18063aed0(lVar1);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar3 = lVar4;
    if ((0xfff < (param_1[2] - lVar4 & 0xfffffffffffffff0U)) &&
       (lVar3 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
  }
  *param_1 = lVar1;
  param_1[1] = param_2 * 0x10 + lVar1;
  param_1[2] = uVar2 * 0x10 + lVar1;
  return;
}



