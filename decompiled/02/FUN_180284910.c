// FUN_180284910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180284910 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180284910(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = (DAT_180bbef70 - DAT_180bbef60) / 0x38;
  if (uVar1 < param_3) {
    if (0x492492492492492 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_1801baf80();
    }
    if (0x492492492492492 - (uVar1 >> 1) < uVar1) {
      uVar2 = 0x492492492492492;
    }
    else {
      uVar2 = uVar1 + (uVar1 >> 1);
      if (uVar2 < param_3) {
        uVar2 = param_3;
      }
    }
    if (DAT_180bbef60 != 0) {
      lVar3 = DAT_180bbef60;
      if ((0xfff < uVar1 * 0x38) &&
         (lVar3 = *(longlong *)(DAT_180bbef60 + -8), 0x1f < (DAT_180bbef60 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar3);
      _DAT_180bbef60 = (undefined1  [16])0x0;
      DAT_180bbef70 = 0;
    }
    if (0x492492492492492 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
    DAT_180bbef68 = FUN_18015bca0(uVar2 * 0x38);
    DAT_180bbef60 = DAT_180bbef68;
    DAT_180bbef70 = DAT_180bbef68 + uVar2 * 0x38;
    lVar3 = DAT_180bbef68;
  }
  else {
    uVar1 = (DAT_180bbef68 - DAT_180bbef60) / 0x38;
    if (param_3 <= uVar1) {
      lVar3 = param_3 * 0x38 + DAT_180bbef60;
      FUN_18063aed0(DAT_180bbef60,param_2);
      DAT_180bbef68 = lVar3;
      return;
    }
    FUN_18063aed0(DAT_180bbef60,param_2,uVar1 * 0x38);
    param_3 = param_3 - uVar1;
    param_2 = uVar1 * 0x38 + param_2;
    lVar3 = DAT_180bbef68;
  }
  FUN_18063aed0(lVar3,param_2,param_3 * 0x38);
  DAT_180bbef68 = param_3 * 0x38 + lVar3;
  return;
}



