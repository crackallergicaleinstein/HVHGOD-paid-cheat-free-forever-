// FUN_18029a520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029a520 */

void FUN_18029a520(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  if (0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_1804547d0(*(longlong *)(lVar1 + -8),0x10c7);
  return;
}



