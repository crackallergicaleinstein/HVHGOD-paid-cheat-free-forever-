// FUN_1806633c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806633c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1806633c0(void)

{
  longlong lVar1;
  
  if (DAT_180c62bf0 != 0) {
    lVar1 = DAT_180c62bf0;
    if ((0xfff < (DAT_180c62c00 - DAT_180c62bf0 & 0xfffffffffffffff0U)) &&
       (lVar1 = *(longlong *)(DAT_180c62bf0 + -8), 0x1f < (DAT_180c62bf0 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    _DAT_180c62bf8 = (undefined1  [16])0x0;
    DAT_180c62bf0 = 0;
  }
  return;
}



