// FUN_1801d9b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d9b90 */

undefined1 (*) [16] FUN_1801d9b90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  
  lVar10 = *param_1;
  lVar9 = (param_2 - lVar10) / 0x26 + (param_2 - lVar10 >> 0x3f);
  lVar8 = (param_1[1] - lVar10) / 0x130;
  if (lVar8 == 0xd79435e50d7943) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar10) / 0x130;
  if (0xd79435e50d7943 - (uVar2 >> 1) < uVar2) {
    uVar7 = 0xd79435e50d7943;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0xd79435e50d7943 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  pauVar6 = (undefined1 (*) [16])FUN_18015bca0(uVar7 * 0x130);
  pauVar11 = pauVar6 + ((lVar9 >> 3) - (lVar9 >> 0x3f)) * 0x13;
  *pauVar11 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar11[1] = 0;
  *(undefined8 *)(pauVar11[1] + 8) = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined8 *)*pauVar11 = *param_3;
  *(undefined8 *)(*pauVar11 + 8) = uVar3;
  *(undefined8 *)pauVar11[1] = uVar4;
  *(undefined8 *)(pauVar11[1] + 8) = uVar5;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  FUN_1801d8a70(pauVar11 + 2,param_3 + 4);
  lVar10 = param_1[1];
  lVar8 = *param_1;
  pauVar12 = pauVar6;
  if (param_2 != lVar10) {
    FUN_1801da230(*param_1,param_2,pauVar6);
    pauVar12 = pauVar11 + 0x13;
    lVar10 = param_1[1];
    lVar8 = param_2;
  }
  FUN_1801da230(lVar8,lVar10,pauVar12);
  if (*param_1 != 0) {
    FUN_1801d9fe0(*param_1,param_1[1]);
    lVar10 = *param_1;
    lVar8 = lVar10;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar10) / 0x130) * 0x130)) &&
       (lVar8 = *(longlong *)(lVar10 + -8), 0x1f < (lVar10 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = (longlong)pauVar6;
  param_1[1] = (longlong)(pauVar6 + uVar1 * 0x13);
  param_1[2] = (longlong)(pauVar6 + uVar7 * 0x13);
  return pauVar11;
}



