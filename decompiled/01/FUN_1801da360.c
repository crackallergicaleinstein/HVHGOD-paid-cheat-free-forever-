// FUN_1801da360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801da360 */

void FUN_1801da360(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x78) {
      FUN_18015c010(lVar2);
    }
    lVar2 = *param_1;
    lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - lVar2),8) +
            (param_1[2] - lVar2);
    lVar3 = lVar2;
    if ((0xfff < (ulonglong)(((lVar1 >> 6) - (lVar1 >> 0x3f)) * 0x78)) &&
       (lVar3 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x78 + param_2;
  param_1[2] = param_4 * 0x78 + param_2;
  return;
}



