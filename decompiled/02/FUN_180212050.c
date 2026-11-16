// FUN_180212050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212050 */

void FUN_180212050(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    FUN_1801b6830(*param_1,param_1[1]);
    lVar1 = *param_1;
    lVar2 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar1),8) +
            (param_1[2] - lVar1);
    lVar3 = lVar1;
    if ((0xfff < (ulonglong)(((lVar2 >> 7) - (lVar2 >> 0x3f)) * 0xb8)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0xb8 + param_2;
  param_1[2] = param_4 * 0xb8 + param_2;
  return;
}



