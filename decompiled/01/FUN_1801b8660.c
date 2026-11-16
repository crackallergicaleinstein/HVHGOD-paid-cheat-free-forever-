// FUN_1801b8660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b8660 */

void FUN_1801b8660(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2;
  if ((0xfff < (ulonglong)(param_3 * 0x30)) &&
     (lVar1 = *(longlong *)(param_2 + -8), 0x1f < (param_2 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_1804547d0(lVar1);
  return;
}



