// FUN_180269e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180269e30 */

undefined8 * FUN_180269e30(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar5 = *param_1;
  lVar6 = param_1[1] - lVar5 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar7 = lVar6 + 1;
  uVar3 = param_1[2] - lVar5 >> 4;
  if (0xfffffffffffffff - (uVar3 >> 1) < uVar3) {
    uVar8 = 0xfffffffffffffff;
  }
  else {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar8 = uVar7;
    if (uVar7 <= uVar3) {
      uVar8 = uVar3;
    }
    if (0xfffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar2 = (undefined8 *)FUN_18015bca0(uVar8 * 0x10);
  puVar9 = (undefined8 *)((param_2 - lVar5 & 0xfffffffffffffff0U) + (longlong)puVar2);
  uVar1 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar1;
  lVar5 = *param_1;
  puVar4 = puVar2;
  if (param_2 != param_1[1]) {
    FUN_18063aed0(puVar2,lVar5,param_2 - lVar5);
    puVar4 = puVar9 + 2;
    lVar5 = param_2;
  }
  FUN_18063aed0(puVar4,lVar5);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar6 = lVar5;
    if ((0xfff < (param_1[2] - lVar5 & 0xfffffffffffffff0U)) &&
       (lVar6 = *(longlong *)(lVar5 + -8), 0x1f < (lVar5 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = (longlong)puVar2;
  param_1[1] = (longlong)(puVar2 + uVar7 * 2);
  param_1[2] = (longlong)(puVar2 + uVar8 * 2);
  return puVar9;
}



