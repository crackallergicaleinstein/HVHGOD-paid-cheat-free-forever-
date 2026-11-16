// FUN_180662b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662b00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180662b00(void)

{
  longlong lVar1;
  
  if (DAT_180bbef60 != 0) {
    lVar1 = DAT_180bbef60;
    if (0xfff < (ulonglong)(((DAT_180bbef70 - DAT_180bbef60) / 0x38) * 0x38)) {
      lVar1 = *(longlong *)(DAT_180bbef60 + -8);
      if (0x1f < (DAT_180bbef60 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0(lVar1);
    _DAT_180bbef68 = (undefined1  [16])0x0;
    DAT_180bbef60 = 0;
  }
  return;
}



