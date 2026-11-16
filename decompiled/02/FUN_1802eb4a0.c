// FUN_1802eb4a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eb4a0 */

undefined1 (*) [16] FUN_1802eb4a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  
  lVar10 = *param_1;
  lVar9 = (param_1[1] - lVar10) / 0x28;
  if (lVar9 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar9 + 1;
  uVar3 = (param_1[2] - lVar10) / 0x28;
  if (0x666666666666666 - (uVar3 >> 1) < uVar3) {
    uVar8 = 0x666666666666666;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar1;
    if (uVar1 <= uVar3) {
      uVar8 = uVar3;
    }
    if (0x666666666666666 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar7 = (undefined1 *)FUN_18015bca0(uVar8 * 0x28);
  pauVar2 = (undefined1 (*) [16])(puVar7 + ((param_2 - lVar10) / 0x28) * 0x28);
  *pauVar2 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar2[1] = 0;
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)*pauVar2 = *param_3;
  *(undefined8 *)(*pauVar2 + 8) = uVar4;
  *(undefined8 *)pauVar2[1] = uVar5;
  *(undefined8 *)(pauVar2[1] + 8) = uVar6;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined4 *)pauVar2[2] = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(pauVar2[2] + 4) = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar9 = param_1[1];
  lVar10 = *param_1;
  puVar11 = puVar7;
  if (param_2 != lVar9) {
    FUN_1802ebba0(lVar10,param_2,puVar7);
    lVar9 = param_1[1];
    lVar10 = param_2;
    puVar11 = pauVar2[2] + 8;
  }
  FUN_1802ebba0(lVar10,lVar9,puVar11);
  lVar10 = *param_1;
  if (lVar10 != 0) {
    lVar9 = param_1[1];
    for (; lVar10 != lVar9; lVar10 = lVar10 + 0x28) {
      FUN_18015c010(lVar10);
    }
    lVar10 = *param_1;
    lVar9 = lVar10;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar10) / 0x28) * 0x28)) &&
       (lVar9 = *(longlong *)(lVar10 + -8), 0x1f < (lVar10 - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar9);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1 * 0x28);
  param_1[2] = (longlong)(puVar7 + uVar8 * 0x28);
  return pauVar2;
}



