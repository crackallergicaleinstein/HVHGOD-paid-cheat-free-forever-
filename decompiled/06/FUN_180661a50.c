// FUN_180661a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180661a50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180661a50(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (DAT_180b8f968 != 0) {
    lVar1 = DAT_180b8f970;
    for (lVar2 = DAT_180b8f968; lVar2 != lVar1; lVar2 = lVar2 + 0x88) {
      FUN_1801b36e0(lVar2 + 0x38);
      FUN_1801b36e0(lVar2 + 0x20);
    }
    lVar2 = DAT_180b8f968;
    if ((0xfff < (ulonglong)(((DAT_180b8f978 - DAT_180b8f968) / 0x88) * 0x88)) &&
       (lVar2 = *(longlong *)(DAT_180b8f968 + -8), 0x1f < (DAT_180b8f968 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    DAT_180b8f968 = 0;
    _DAT_180b8f970 = (undefined1  [16])0x0;
  }
  return;
}



