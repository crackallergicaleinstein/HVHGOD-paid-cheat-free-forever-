// FUN_1803ceb90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ceb90 */

undefined1 (*) [16] FUN_1803ceb90(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  
  lVar9 = *param_1;
  lVar8 = (param_1[1] - lVar9) / 0x58;
  if (lVar8 == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar9) / 0x58;
  if (0x2e8ba2e8ba2e8ba - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x2e8ba2e8ba2e8ba;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x2e8ba2e8ba2e8ba < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar6 = (undefined1 *)FUN_18015bca0(uVar7 * 0x58);
  pauVar11 = (undefined1 (*) [16])(puVar6 + ((param_2 - lVar9) / 0x58) * 0x58);
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
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  pauVar11[2] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar11[3] = 0;
  *(undefined8 *)(pauVar11[3] + 8) = 0;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined8 *)pauVar11[2] = param_3[4];
  *(undefined8 *)(pauVar11[2] + 8) = uVar3;
  *(undefined8 *)pauVar11[3] = uVar4;
  *(undefined8 *)(pauVar11[3] + 8) = uVar5;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  param_3[7] = 0xf;
  *(undefined4 *)pauVar11[4] = *(undefined4 *)(param_3 + 8);
  pauVar11[4][4] = *(undefined1 *)((longlong)param_3 + 0x44);
  *(undefined8 *)(pauVar11[4] + 8) = param_3[9];
  *(undefined8 *)pauVar11[5] = param_3[10];
  lVar8 = param_1[1];
  lVar9 = *param_1;
  puVar10 = puVar6;
  if (param_2 != lVar8) {
    FUN_1803ceeb0(lVar9,param_2,puVar6);
    lVar8 = param_1[1];
    lVar9 = param_2;
    puVar10 = pauVar11[5] + 8;
  }
  FUN_1803ceeb0(lVar9,lVar8,puVar10);
  lVar9 = *param_1;
  if (lVar9 != 0) {
    lVar8 = param_1[1];
    for (; lVar9 != lVar8; lVar9 = lVar9 + 0x58) {
      FUN_18015c010(lVar9 + 0x20);
      FUN_18015c010(lVar9);
    }
    lVar9 = *param_1;
    lVar8 = lVar9;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar9) / 0x58) * 0x58)) &&
       (lVar8 = *(longlong *)(lVar9 + -8), 0x1f < (lVar9 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1 * 0x58);
  param_1[2] = (longlong)(puVar6 + uVar7 * 0x58);
  return pauVar11;
}



