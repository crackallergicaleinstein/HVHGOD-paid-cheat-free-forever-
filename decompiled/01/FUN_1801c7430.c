// FUN_1801c7430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801c7430 */

void FUN_1801c7430(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x30) - lVar1 & 0xfffffffffffffff0U)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_180159650(param_1 + 8);
  return;
}



