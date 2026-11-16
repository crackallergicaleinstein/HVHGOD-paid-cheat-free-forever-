// FUN_1806629b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806629b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1806629b0(void)

{
  longlong lVar1;
  
  if (DAT_180b92f60 != 0) {
    FUN_180282f00(DAT_180b92f60,DAT_180b92f68);
    lVar1 = DAT_180b92f60;
    if ((0xfff < (ulonglong)(((DAT_180b92f70 - DAT_180b92f60) / 0x50) * 0x50)) &&
       (lVar1 = *(longlong *)(DAT_180b92f60 + -8), 0x1f < (DAT_180b92f60 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    _DAT_180b92f68 = (undefined1  [16])0x0;
    DAT_180b92f60 = 0;
  }
  return;
}



