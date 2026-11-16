// FUN_180662d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180662d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180662d80(void)

{
  longlong lVar1;
  
  if (DAT_180bda1c0 != 0) {
    lVar1 = DAT_180bda1c0;
    if (0xfff < (ulonglong)(((DAT_180bda1d0 - DAT_180bda1c0) / 0x1c) * 0x1c)) {
      lVar1 = *(longlong *)(DAT_180bda1c0 + -8);
      if (0x1f < (DAT_180bda1c0 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0(lVar1);
    _DAT_180bda1c8 = (undefined1  [16])0x0;
    DAT_180bda1c0 = 0;
  }
  return;
}



