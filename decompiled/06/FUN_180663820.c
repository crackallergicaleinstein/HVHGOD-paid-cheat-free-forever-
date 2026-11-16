// FUN_180663820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180663820(void)

{
  longlong lVar1;
  
  if (DAT_180c62d30 != 0) {
    lVar1 = DAT_180c62d30;
    if (0xfff < (ulonglong)(((DAT_180c62d40 - DAT_180c62d30) / 0x68) * 0x68)) {
      lVar1 = *(longlong *)(DAT_180c62d30 + -8);
      if (0x1f < (DAT_180c62d30 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0(lVar1);
    _DAT_180c62d38 = (undefined1  [16])0x0;
    DAT_180c62d30 = 0;
  }
  return;
}



