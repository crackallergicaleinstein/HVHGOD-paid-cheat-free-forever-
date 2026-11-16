// FUN_1801b86c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b86c0 */

void FUN_1801b86c0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (0x333333333333333 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  lVar1 = *param_1;
  uVar2 = (param_1[2] - lVar1) / 0x50;
  if (0x333333333333333 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x333333333333333;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    if (uVar2 < param_2) {
      uVar2 = param_2;
    }
  }
  if (lVar1 != 0) {
    lVar3 = param_1[1];
    for (; lVar1 != lVar3; lVar1 = lVar1 + 0x50) {
      FUN_18015b930(lVar1 + 0x20);
      FUN_18015c010(lVar1);
    }
    lVar1 = *param_1;
    lVar3 = lVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0x50) * 0x50)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (0x333333333333333 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar1 = FUN_18015bca0(uVar2 * 0x50);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = lVar1 + uVar2 * 0x50;
  return;
}



