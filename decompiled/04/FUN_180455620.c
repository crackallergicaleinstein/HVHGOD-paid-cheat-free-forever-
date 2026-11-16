// FUN_180455620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180455620 */

void FUN_180455620(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

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
  }
  DAT_180c62c38 = param_2;
  DAT_180c62c40 = param_2 + param_3 * 8;
  DAT_180c62c48 = param_2 + param_4 * 8;
  return;
}



