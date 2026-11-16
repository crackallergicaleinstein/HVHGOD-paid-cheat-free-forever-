// FUN_180338920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338920 */

void FUN_180338920(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0x28) * 0x28)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar2) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 0x28;
  param_1[2] = param_2 + param_4 * 0x28;
  return;
}



