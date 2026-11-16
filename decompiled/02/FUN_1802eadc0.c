// FUN_1802eadc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eadc0 */

undefined8 * FUN_1802eadc0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar4 = *param_1;
  lVar11 = (param_2 - lVar4) / 0x12 + (param_2 - lVar4 >> 0x3f);
  lVar12 = (param_1[1] - lVar4) / 0x48;
  if (lVar12 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar12 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x48;
  if (0x38e38e38e38e38e - (uVar3 >> 1) < uVar3) {
    uVar9 = 0x38e38e38e38e38e;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar1;
    if (uVar1 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0x38e38e38e38e38e < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar9 * 0x48);
  puVar2 = puVar8 + ((lVar11 >> 2) - (lVar11 >> 0x3f)) * 9;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  puVar2[4] = param_3[4];
  puVar2[5] = uVar5;
  puVar2[6] = uVar6;
  puVar2[7] = uVar7;
  puVar2[8] = param_3[8];
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar12 = param_1[1] - lVar4;
    puVar10 = puVar8;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(puVar8,lVar4,param_2 - lVar4);
    lVar12 = param_1[1] - param_2;
    puVar10 = puVar2 + 9;
  }
  FUN_18063aed0(puVar10,param_2,lVar12);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar12 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0x48) * 0x48)) &&
       (lVar12 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar12) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar12);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 9);
  param_1[2] = (longlong)(puVar8 + uVar9 * 9);
  return puVar2;
}



