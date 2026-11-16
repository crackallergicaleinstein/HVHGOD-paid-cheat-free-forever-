// FUN_1801bc530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bc530 */

undefined8 * FUN_1801bc530(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  lVar1 = *param_1;
  lVar6 = param_1[1] - lVar1 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar7 = lVar6 + 1;
  uVar4 = param_1[2] - lVar1 >> 4;
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar8 = 0xfffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar8 = uVar7;
    if (uVar7 <= uVar4) {
      uVar8 = uVar4;
    }
    if (0xfffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar3 = (undefined8 *)FUN_18015bca0(uVar8 * 0x10);
  uVar2 = param_3[1];
  puVar9 = (undefined8 *)((param_2 - lVar1 & 0xfffffffffffffff0U) + (longlong)puVar3);
  *puVar9 = *param_3;
  puVar9[1] = uVar2;
  lVar1 = *param_1;
  if (param_2 == param_1[1]) {
    lVar6 = param_1[1] - lVar1;
    puVar5 = puVar3;
    param_2 = lVar1;
  }
  else {
    FUN_18063aed0(puVar3,lVar1,param_2 - lVar1);
    puVar5 = puVar9 + 2;
    lVar6 = param_1[1] - param_2;
  }
  FUN_18063aed0(puVar5,param_2,lVar6);
  lVar1 = *param_1;
  if (lVar1 != 0) {
    FUN_18015bf60(lVar1,param_1[2] - lVar1 & 0xfffffffffffffff0);
  }
  *param_1 = (longlong)puVar3;
  param_1[1] = (longlong)(puVar3 + uVar7 * 2);
  param_1[2] = (longlong)(puVar3 + uVar8 * 2);
  return puVar9;
}



