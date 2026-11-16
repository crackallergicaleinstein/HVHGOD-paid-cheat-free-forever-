// FUN_18036fe10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036fe10 */

void FUN_18036fe10(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0x40) {
      FUN_18015c010(lVar2 + 0x20);
      FUN_18015c010(lVar2);
    }
    lVar2 = *param_1;
    lVar1 = lVar2;
    if ((0xfff < (param_1[2] - lVar2 & 0xffffffffffffffc0U)) &&
       (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar1) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar1);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x40 + param_2;
  param_1[2] = param_4 * 0x40 + param_2;
  return;
}



