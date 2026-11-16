// FUN_180251140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180251140 */

undefined8 * FUN_180251140(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar4 = *param_1;
  lVar9 = (param_2 - lVar4) / 6 + (param_2 - lVar4 >> 0x3f);
  lVar10 = (param_1[1] - lVar4) / 0x18;
  if (lVar10 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar10 + 1;
  uVar3 = (param_1[2] - lVar4) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar3 >> 1) < uVar3) {
    uVar7 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar7 = uVar1;
    if (uVar1 <= uVar3) {
      uVar7 = uVar3;
    }
    if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar6 = (undefined8 *)FUN_18015bca0(uVar7 * 0x18);
  puVar2 = puVar6 + ((lVar9 >> 2) - (lVar9 >> 0x3f)) * 3;
  uVar5 = param_3[1];
  *puVar2 = *param_3;
  puVar2[1] = uVar5;
  puVar2[2] = param_3[2];
  lVar4 = *param_1;
  if (param_2 == param_1[1]) {
    lVar10 = param_1[1] - lVar4;
    puVar8 = puVar6;
    param_2 = lVar4;
  }
  else {
    FUN_18063aed0(puVar6,lVar4,param_2 - lVar4);
    lVar10 = param_1[1] - param_2;
    puVar8 = puVar2 + 3;
  }
  FUN_18063aed0(puVar8,param_2,lVar10);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar10 = lVar4;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar4) / 0x18) * 0x18)) &&
       (lVar10 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar10) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar10);
  }
  *param_1 = (longlong)puVar6;
  param_1[1] = (longlong)(puVar6 + uVar1 * 3);
  param_1[2] = (longlong)(puVar6 + uVar7 * 3);
  return puVar2;
}



