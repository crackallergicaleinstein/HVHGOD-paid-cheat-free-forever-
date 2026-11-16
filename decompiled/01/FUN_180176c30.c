// FUN_180176c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176c30 */

longlong * FUN_180176c30(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      lVar1 = *param_1;
      lVar3 = lVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (lVar3 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar3);
    }
    param_1[2] = 0;
    param_1[3] = 7;
    *(undefined2 *)param_1 = 0;
    lVar1 = param_2[1];
    lVar3 = param_2[2];
    lVar2 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    param_1[2] = lVar3;
    param_1[3] = lVar2;
    *(undefined2 *)param_2 = 0;
    param_2[2] = 0;
    param_2[3] = 7;
  }
  return param_1;
}



