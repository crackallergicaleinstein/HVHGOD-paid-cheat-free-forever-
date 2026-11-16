// FUN_1802b64c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b64c0 */

undefined8 * FUN_1802b64c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  lVar3 = *param_1;
  lVar10 = (param_2 - lVar3) / 6 + (param_2 - lVar3 >> 0x3f);
  lVar11 = (param_1[1] - lVar3) / 0x30;
  if (lVar11 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar11 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x30;
  if (0x555555555555555 - (uVar2 >> 1) < uVar2) {
    uVar8 = 0x555555555555555;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar1;
    if (uVar1 <= uVar2) {
      uVar8 = uVar2;
    }
    if (0x555555555555555 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar7 = (undefined8 *)FUN_18015bca0(uVar8 * 0x30);
  puVar12 = puVar7 + ((lVar10 >> 3) - (lVar10 >> 0x3f)) * 6;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *puVar12 = *param_3;
  puVar12[1] = uVar4;
  puVar12[2] = uVar5;
  puVar12[3] = uVar6;
  uVar4 = param_3[5];
  puVar12[4] = param_3[4];
  puVar12[5] = uVar4;
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar11 = param_1[1] - lVar3;
    puVar9 = puVar7;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(puVar7,lVar3,param_2 - lVar3);
    lVar11 = param_1[1] - param_2;
    puVar9 = puVar12 + 6;
  }
  FUN_18063aed0(puVar9,param_2,lVar11);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar11 = lVar3;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar3) / 0x30) * 0x30)) &&
       (lVar11 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar11);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1 * 6);
  param_1[2] = (longlong)(puVar7 + uVar8 * 6);
  return puVar12;
}



