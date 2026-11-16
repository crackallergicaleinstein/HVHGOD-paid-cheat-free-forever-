// FUN_1802e8770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e8770 */

void FUN_1802e8770(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar4 = (param_1[2] - lVar1) / 0x18;
  if (uVar4 < param_3) {
    if (0xaaaaaaaaaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    if (0xaaaaaaaaaaaaaaa - (uVar4 >> 1) < uVar4) {
      uVar3 = 0xaaaaaaaaaaaaaaa;
    }
    else {
      uVar3 = uVar4 + (uVar4 >> 1);
      if (uVar3 < param_3) {
        uVar3 = param_3;
      }
    }
    if (lVar1 != 0) {
      lVar2 = lVar1;
      if ((0xfff < uVar4 * 0x18) && (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)
         ) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (0xaaaaaaaaaaaaaaa < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    lVar1 = FUN_18015bca0(uVar3 * 0x18);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + uVar3 * 0x18;
  }
  else {
    lVar2 = (param_1[1] - lVar1) / 6 + (param_1[1] - lVar1 >> 0x3f);
    uVar4 = (lVar2 >> 2) - (lVar2 >> 0x3f);
    if (uVar4 < param_3) {
      FUN_18063aed0(lVar1,param_2,uVar4 * 0x18);
      lVar1 = param_1[1];
      param_3 = param_3 - uVar4;
      param_2 = uVar4 * 0x18 + param_2;
    }
  }
  FUN_18063aed0(lVar1,param_2,param_3 * 0x18);
  param_1[1] = param_3 * 0x18 + lVar1;
  return;
}



