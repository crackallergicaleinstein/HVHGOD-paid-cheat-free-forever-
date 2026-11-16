// FUN_180661730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180661730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180661730(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_180b0df98 != 0) {
    lVar1 = DAT_180b0dfa0;
    for (lVar2 = DAT_180b0df98; lVar2 != lVar1; lVar2 = lVar2 + 8) {
      FUN_1801bced0();
    }
    lVar2 = DAT_180b0df98;
    if ((0xfff < (DAT_180b0dfa8 - DAT_180b0df98 & 0xfffffffffffffff8U)) &&
       (lVar2 = *(longlong *)(DAT_180b0df98 + -8), 0x1f < (DAT_180b0df98 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    _DAT_180b0dfa0 = (undefined1  [16])0x0;
    DAT_180b0df98 = 0;
  }
  return;
}



