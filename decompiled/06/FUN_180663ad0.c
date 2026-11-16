// FUN_180663ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663ad0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180663ad0(void)

{
  if (DAT_180c7dfd0 != 0) {
    if (0xfff < (DAT_180c7dfe0 - DAT_180c7dfd0 & 0xfffffffffffffff8U)) {
      if (0x1f < (DAT_180c7dfd0 - *(longlong *)(DAT_180c7dfd0 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0();
    _DAT_180c7dfd8 = (undefined1  [16])0x0;
    DAT_180c7dfd0 = 0;
  }
  return;
}



