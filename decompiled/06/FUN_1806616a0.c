// FUN_1806616a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806616a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1806616a0(void)

{
  longlong lVar1;
  
  if (DAT_180b0df80 != 0) {
    lVar1 = DAT_180b0df80;
    if ((0xfff < (DAT_180b0df90 - DAT_180b0df80 & 0xfffffffffffffff8U)) &&
       (lVar1 = *(longlong *)(DAT_180b0df80 + -8), 0x1f < (DAT_180b0df80 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    _DAT_180b0df88 = (undefined1  [16])0x0;
    DAT_180b0df80 = 0;
  }
  return;
}



