// FUN_180299550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180299550 */

void FUN_180299550(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1800efed0(lVar1 + 0x68);
    FUN_1801bd3e0(lVar1 + 0x40);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (0x1f < (lVar1 - *(longlong *)(lVar1 + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(*(longlong *)(lVar1 + -8),0x10c7);
  }
  return;
}



