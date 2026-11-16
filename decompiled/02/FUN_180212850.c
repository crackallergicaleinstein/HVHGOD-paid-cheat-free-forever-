// FUN_180212850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212850 */

void FUN_180212850(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1801b6890(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = lVar1;
  if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0x10) * 200)) &&
     (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  FUN_1804547d0(lVar2);
  return;
}



