// FUN_180662c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180662c20(void)

{
  longlong lVar1;
  
  if (DAT_180c6e498 != 0) {
    lVar1 = DAT_180c6e498;
    if (0xfff < (ulonglong)(((DAT_180c6e4a8 - DAT_180c6e498) / 0x18) * 0x18)) {
      lVar1 = *(longlong *)(DAT_180c6e498 + -8);
      if (0x1f < (DAT_180c6e498 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0(lVar1);
    _DAT_180c6e4a0 = (undefined1  [16])0x0;
    DAT_180c6e498 = 0;
  }
  return;
}



