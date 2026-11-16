// FUN_1802e8440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e8440 */

void FUN_1802e8440(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  uVar1 = (param_1[2] - lVar2) / 0x28;
  if (uVar1 < param_3) {
    if (0x666666666666666 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0x666666666666666 - (uVar1 >> 1) < uVar1) {
      uVar3 = 0x666666666666666;
    }
    else {
      uVar3 = uVar1 + (uVar1 >> 1);
      if (uVar3 < param_3) {
        uVar3 = param_3;
      }
    }
    if (lVar2 != 0) {
      lVar4 = lVar2;
      if ((0xfff < uVar1 * 0x28) && (lVar4 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar4) - 8U)
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0x666666666666666 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar2 = FUN_18015bca0(uVar3 * 0x28);
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + uVar3 * 0x28;
  }
  else {
    uVar1 = (param_1[1] - lVar2) / 0x28;
    if (uVar1 < param_3) {
      FUN_18063aed0(lVar2,param_2,uVar1 * 0x28);
      lVar2 = param_1[1];
      param_3 = param_3 - uVar1;
      param_2 = uVar1 * 0x28 + param_2;
    }
  }
  FUN_18063aed0(lVar2,param_2,param_3 * 0x28);
  param_1[1] = param_3 * 0x28 + lVar2;
  return;
}



