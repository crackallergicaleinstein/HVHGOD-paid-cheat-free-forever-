// FUN_1801810b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801810b0 */

void FUN_1801810b0(longlong param_1)

{
  longlong lVar1;
  
  FUN_1800f0160(param_1 + 0x18);
  FUN_1801b6980();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
  if (0x1f < (*(longlong *)(param_1 + 8) - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_1804547d0(lVar1,0x10c7);
  return;
}



