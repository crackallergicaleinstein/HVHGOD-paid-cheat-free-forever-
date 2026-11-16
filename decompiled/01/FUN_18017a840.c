// FUN_18017a840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017a840 */

void FUN_18017a840(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x168) {
      FUN_180152210(lVar1);
    }
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0x168) * 0x168)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x168 + param_2;
  param_1[2] = param_4 * 0x168 + param_2;
  return;
}



