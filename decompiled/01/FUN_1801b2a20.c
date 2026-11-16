// FUN_1801b2a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b2a20 */

void FUN_1801b2a20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x20) {
      FUN_180113710(lVar2 + 8);
    }
    lVar2 = *param_1;
    lVar1 = lVar2;
    if ((0xfff < (param_1[2] - lVar2 & 0xffffffffffffffe0U)) &&
       (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



