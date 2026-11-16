// FUN_1803cfc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803cfc30 */

longlong * FUN_1803cfc30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    lVar3 = *param_1;
    if (lVar3 != 0) {
      lVar5 = lVar3;
      if ((0xfff < (ulonglong)(((param_1[2] - lVar3) / 0x38) * 0x38)) &&
         (lVar5 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar5) - 8U)) goto LAB_1803cfeb0;
      FUN_1804547d0(lVar5);
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
      lVar5 = lVar3;
      if ((0xfff < (param_1[5] - lVar3 & 0xfffffffffffffff0U)) &&
         (lVar5 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar5) - 8U)) {
LAB_1803cfeb0:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar5);
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
    FUN_1801c6b70(plVar2);
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
    FUN_1801c6ab0(plVar2);
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
    FUN_1801c69f0(plVar2);
    *plVar2 = *plVar1;
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    *plVar1 = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
  }
  FUN_18020f7a0(param_1 + 0xf,param_2 + 0xf);
  FUN_18020f7a0(param_1 + 0x12,param_2 + 0x12);
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(char *)(param_1 + 0x16) = (char)param_2[0x16];
  *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_2 + 0xb1);
  *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_2 + 0xb2);
  *(undefined1 *)((longlong)param_1 + 0xb3) = *(undefined1 *)((longlong)param_2 + 0xb3);
  *(undefined1 *)((longlong)param_1 + 0xb4) = *(undefined1 *)((longlong)param_2 + 0xb4);
  lVar3 = param_2[0x18];
  lVar5 = param_2[0x19];
  lVar4 = param_2[0x1a];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = lVar3;
  param_1[0x19] = lVar5;
  param_1[0x1a] = lVar4;
  lVar3 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = lVar3;
  *(int *)(param_1 + 0x1d) = (int)param_2[0x1d];
  return param_1;
}



