// FUN_18056d360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056d360 */

void FUN_18056d360(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar6 = (longlong *)*param_1;
  uVar2 = param_1[2] - (longlong)plVar6 >> 6;
  if (param_3 <= uVar2) {
    plVar4 = (longlong *)param_1[1];
    uVar2 = (longlong)plVar4 - (longlong)plVar6 >> 6;
    if (uVar2 < param_3) {
      if (plVar6 != plVar4) {
        plVar7 = plVar6 + 4;
        do {
          if (plVar6 != param_2) {
            plVar4 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              plVar4 = (longlong *)*param_2;
            }
            FUN_180113930(plVar6,plVar4,param_2[2]);
          }
          plVar4 = param_2 + 4;
          if (plVar7 != plVar4) {
            if (0xf < (ulonglong)param_2[7]) {
              plVar4 = (longlong *)*plVar4;
            }
            FUN_180113930(plVar7,plVar4,param_2[6]);
          }
          plVar6 = plVar6 + 8;
          plVar7 = plVar7 + 8;
          param_2 = param_2 + 8;
          plVar4 = (longlong *)param_1[1];
        } while (plVar6 != plVar4);
      }
      lVar1 = FUN_18056f510(param_2,param_3 - uVar2,plVar4,param_1);
      param_1[1] = lVar1;
      return;
    }
    plVar4 = plVar6 + param_3 * 8;
    if (param_3 != 0) {
      plVar7 = plVar6 + 4;
      param_2 = param_2 + 2;
      do {
        plVar5 = param_2 + -2;
        if (plVar6 != plVar5) {
          if (0xf < (ulonglong)param_2[1]) {
            plVar5 = (longlong *)*plVar5;
          }
          FUN_180113930(plVar6,plVar5,*param_2);
        }
        plVar5 = param_2 + 2;
        if (plVar7 != plVar5) {
          if (0xf < (ulonglong)param_2[5]) {
            plVar5 = (longlong *)*plVar5;
          }
          FUN_180113930(plVar7,plVar5,param_2[4]);
        }
        plVar6 = plVar6 + 8;
        plVar7 = plVar7 + 8;
        param_2 = param_2 + 8;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    plVar6 = (longlong *)param_1[1];
    for (plVar7 = plVar4; plVar7 != plVar6; plVar7 = plVar7 + 8) {
      FUN_18015c010(plVar7 + 4);
      FUN_18015c010(plVar7);
    }
    param_1[1] = (longlong)plVar4;
    return;
  }
  if (0x3ffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  if (0x3ffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar2 = 0x3ffffffffffffff;
  }
  else {
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < param_3) {
      uVar2 = param_3;
    }
  }
  if (plVar6 != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[1];
    for (; plVar6 != plVar4; plVar6 = plVar6 + 8) {
      FUN_18015c010(plVar6 + 4);
      FUN_18015c010(plVar6);
    }
    lVar1 = *param_1;
    lVar3 = lVar1;
    if ((0xfff < (param_1[2] - lVar1 & 0xffffffffffffffc0U)) &&
       (lVar3 = *(longlong *)(lVar1 + -8), 0x1f < (lVar1 - lVar3) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (0x3ffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar1 = FUN_18015bca0(uVar2 * 0x40);
  *param_1 = lVar1;
  param_1[1] = lVar1;
  param_1[2] = uVar2 * 0x40 + lVar1;
  lVar1 = FUN_18056f510(param_2,param_3,lVar1,param_1);
  param_1[1] = lVar1;
  return;
}



