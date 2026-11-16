// FUN_1802966d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802966d0 */

undefined8 * FUN_1802966d0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  plVar1 = param_2 + 5;
  plVar2 = param_1 + 5;
  if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar7 = lVar3;
      if ((0xfff < (ulonglong)(((param_1[7] - lVar3) / 0x1020) * 0x1020)) &&
         (lVar7 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar7);
      *plVar2 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    *plVar2 = *plVar1;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *plVar1 = 0;
    param_2[6] = 0;
    param_2[7] = 0;
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  FUN_1801787e0(param_1 + 10,param_2 + 10);
  FUN_18063aed0(param_1 + 0xc,param_2 + 0xc,0x1020);
  *(undefined1 *)(param_1 + 0x210) = *(undefined1 *)(param_2 + 0x210);
  *(undefined4 *)((longlong)param_1 + 0x1084) = *(undefined4 *)((longlong)param_2 + 0x1084);
  return param_1;
}



