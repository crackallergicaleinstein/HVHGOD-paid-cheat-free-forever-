// FUN_180663560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180663560 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180663560(void)

{
  if (DAT_180c62c38 != 0) {
    FUN_1804555b0(DAT_180c62c38,DAT_180c62c40);
    if (0xfff < (DAT_180c62c48 - DAT_180c62c38 & 0xfffffffffffffff8U)) {
      if (0x1f < (DAT_180c62c38 - *(longlong *)(DAT_180c62c38 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0();
    _DAT_180c62c40 = (undefined1  [16])0x0;
    DAT_180c62c38 = 0;
  }
  return;
}



