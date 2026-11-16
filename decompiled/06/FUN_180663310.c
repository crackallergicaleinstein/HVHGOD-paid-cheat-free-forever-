// FUN_180663310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663310 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180663310(void)

{
  if (DAT_180c62bc8 != 0) {
    if (0xfff < (DAT_180c62bd8 - DAT_180c62bc8 & 0xfffffffffffffff8U)) {
      if (0x1f < (DAT_180c62bc8 - *(longlong *)(DAT_180c62bc8 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0();
    _DAT_180c62bd0 = (undefined1  [16])0x0;
    DAT_180c62bc8 = 0;
  }
  return;
}



