// FUN_1802668f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802668f0 */

undefined8 * FUN_1802668f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  plVar2 = param_1 + 1;
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((0xfff < (param_1[3] - lVar3 & 0xfffffffffffffffcU)) &&
         (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar4);
      *plVar2 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    *plVar2 = *plVar1;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    *plVar1 = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return param_1;
}



