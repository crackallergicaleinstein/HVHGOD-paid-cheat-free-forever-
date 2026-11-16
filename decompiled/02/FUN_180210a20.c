// FUN_180210a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180210a20 */

void FUN_180210a20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x18) {
      FUN_180113710(lVar1);
    }
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0x18) * 0x18)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



