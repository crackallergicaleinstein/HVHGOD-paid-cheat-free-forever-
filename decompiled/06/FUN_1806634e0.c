// FUN_1806634e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806634e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1806634e0(void)

{
  longlong lVar1;
  
  if (DAT_180c62c20 != 0) {
    lVar1 = DAT_180c62c20;
    if ((0xfff < (DAT_180c62c30 - DAT_180c62c20 & 0xfffffffffffffff0U)) &&
       (lVar1 = *(longlong *)(DAT_180c62c20 + -8), 0x1f < (DAT_180c62c20 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    _DAT_180c62c28 = (undefined1  [16])0x0;
    DAT_180c62c20 = 0;
  }
  return;
}



