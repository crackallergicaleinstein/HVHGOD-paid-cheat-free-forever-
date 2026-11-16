// FUN_180550a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180550a10 */

longlong * FUN_180550a10(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((0xfff < (ulonglong)(((param_1[2] - lVar3) / 0x14) * 0x14)) &&
         (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) goto LAB_180550d2a;
      FUN_1804547d0(lVar4);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  plVar1 = param_2 + 3;
  plVar2 = param_1 + 3;
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((0xfff < (param_1[5] - lVar3 & 0xfffffffffffffffcU)) &&
         (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) goto LAB_180550d2a;
      FUN_1804547d0(lVar4);
      *plVar2 = 0;
      param_1[4] = 0;
      param_1[5] = 0;
    }
    *plVar2 = *plVar1;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *plVar1 = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  plVar1 = param_2 + 6;
  plVar2 = param_1 + 6;
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((0xfff < (ulonglong)(((param_1[8] - lVar3) / 0x28) * 0x28)) &&
         (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) goto LAB_180550d2a;
      FUN_1804547d0(lVar4);
      *plVar2 = 0;
      param_1[7] = 0;
      param_1[8] = 0;
    }
    *plVar2 = *plVar1;
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    *plVar1 = 0;
    param_2[7] = 0;
    param_2[8] = 0;
  }
  plVar1 = param_2 + 9;
  plVar2 = param_1 + 9;
  if (plVar2 != plVar1) {
    FUN_180439200(plVar2);
    *plVar2 = *plVar1;
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    *plVar1 = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
  }
  plVar1 = param_2 + 0xc;
  plVar2 = param_1 + 0xc;
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((0xfff < (param_1[0xe] - lVar3 & 0xfffffffffffffff0U)) &&
         (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) goto LAB_180550d2a;
      FUN_1804547d0(lVar4);
      *plVar2 = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
    }
    *plVar2 = *plVar1;
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    *plVar1 = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
  }
  plVar1 = param_2 + 0xf;
  plVar2 = param_1 + 0xf;
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
      if ((0xfff < (ulonglong)(((param_1[0x11] - lVar3) / 0x2c) * 0x2c)) &&
         (lVar4 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar4) - 8U)) {
LAB_180550d2a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar4);
      *plVar2 = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
    }
    *plVar2 = *plVar1;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *plVar1 = 0;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
  }
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  return param_1;
}



