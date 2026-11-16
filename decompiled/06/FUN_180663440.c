// FUN_180663440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663440 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180663440(void)

{
  longlong lVar1;
  
  if (DAT_180c62c08 != 0) {
    lVar1 = DAT_180c62c08;
    if ((0xfff < (ulonglong)(((DAT_180c62c18 - DAT_180c62c08) / 0x18) * 0x18)) &&
       (lVar1 = *(longlong *)(DAT_180c62c08 + -8), 0x1f < (DAT_180c62c08 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    _DAT_180c62c10 = (undefined1  [16])0x0;
    DAT_180c62c08 = 0;
  }
  return;
}



