// FUN_1802ea4d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ea4d0 */

undefined8 * FUN_1802ea4d0(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  
  lVar4 = *param_1;
  lVar11 = (param_1[1] - lVar4) / 0x28;
  if (lVar11 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar11 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x28;
  if (0x666666666666666 - (uVar3 >> 1) < uVar3) {
    uVar9 = 0x666666666666666;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar9 = uVar1;
    if (uVar1 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0x666666666666666 < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar9 * 0x28);
  puVar2 = puVar8 + ((param_2 - lVar4) / 0x28) * 5;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = param_3[4];
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar11 = param_1[1] - lVar4;
    puVar10 = puVar8;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(puVar8,lVar4,param_2 - lVar4);
    lVar11 = param_1[1] - param_2;
    puVar10 = puVar2 + 5;
  }
  FUN_18063aed0(puVar10,param_2,lVar11);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar11 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0x28) * 0x28)) &&
       (lVar11 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar11);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1 * 5);
  param_1[2] = (longlong)(puVar8 + uVar9 * 5);
  return puVar2;
}



