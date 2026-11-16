// FUN_1802688c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802688c0 */

undefined8 * FUN_1802688c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  
  lVar7 = *param_1;
  lVar8 = param_1[1] - lVar7 >> 6;
  if (lVar8 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar9 = lVar8 + 1;
  uVar5 = param_1[2] - lVar7 >> 6;
  if (0x3ffffffffffffff - (uVar5 >> 1) < uVar5) {
    uVar10 = 0x3ffffffffffffff;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar10 = uVar9;
    if (uVar9 <= uVar5) {
      uVar10 = uVar5;
    }
    if (0x3ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar4 = (undefined8 *)FUN_18015bca0(uVar10 * 0x40);
  puVar11 = (undefined8 *)((param_2 - lVar7 & 0xffffffffffffffc0U) + (longlong)puVar4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *puVar11 = *param_3;
  puVar11[1] = uVar1;
  puVar11[2] = uVar2;
  puVar11[3] = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  puVar11[4] = param_3[4];
  puVar11[5] = uVar1;
  puVar11[6] = uVar2;
  puVar11[7] = uVar3;
  lVar7 = *param_1;
  puVar6 = puVar4;
  if (param_2 != param_1[1]) {
    FUN_18063aed0(puVar4,lVar7,param_2 - lVar7);
    puVar6 = puVar11 + 8;
    lVar7 = param_2;
  }
  FUN_18063aed0(puVar6,lVar7);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar8 = lVar7;
    if ((0xfff < (param_1[2] - lVar7 & 0xffffffffffffffc0U)) &&
       (lVar8 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = (longlong)puVar4;
  param_1[1] = (longlong)(puVar4 + uVar9 * 8);
  param_1[2] = (longlong)(puVar4 + uVar10 * 8);
  return puVar11;
}



