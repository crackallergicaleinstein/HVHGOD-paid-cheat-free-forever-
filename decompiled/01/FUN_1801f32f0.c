// FUN_1801f32f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f32f0 */

void FUN_1801f32f0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    FUN_1801f5ae0(*param_1,param_1[1]);
    lVar1 = *param_1;
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar1) / 0xd8) * 0xd8)) &&
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



