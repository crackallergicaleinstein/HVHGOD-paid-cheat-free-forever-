// FUN_18014fc20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18014fc20 */

undefined8 * FUN_18014fc20(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  lVar2 = *param_1;
  lVar6 = param_1[1] - lVar2 >> 4;
  if (lVar6 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar9 = param_1[2] - lVar2 >> 4;
  if (0xfffffffffffffff - (uVar9 >> 1) < uVar9) {
    uVar11 = 0xfffffffffffffff;
  }
  else {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar11 = uVar1;
    if (uVar1 <= uVar9) {
      uVar11 = uVar9;
    }
    if (0xfffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar7 = (undefined8 *)FUN_18015bca0(uVar11 << 4);
  puVar10 = (undefined8 *)(((longlong)param_2 - lVar2 & 0xfffffffffffffff0U) + (longlong)puVar7);
  uVar4 = param_3[1];
  *puVar10 = *param_3;
  puVar10[1] = uVar4;
  *(undefined1 *)param_3 = 0;
  param_3[1] = 0;
  puVar3 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  puVar5 = puVar7;
  if (param_2 == puVar3) {
    for (; puVar8 != puVar3; puVar8 = puVar8 + 2) {
      uVar4 = puVar8[1];
      *puVar5 = *puVar8;
      puVar5[1] = uVar4;
      *(undefined1 *)puVar8 = 0;
      puVar8[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  else {
    for (; puVar8 != param_2; puVar8 = puVar8 + 2) {
      uVar4 = puVar8[1];
      *puVar5 = *puVar8;
      puVar5[1] = uVar4;
      *(undefined1 *)puVar8 = 0;
      puVar8[1] = 0;
      puVar5 = puVar5 + 2;
    }
    puVar3 = (undefined8 *)param_1[1];
    puVar8 = puVar10;
    for (; param_2 != puVar3; param_2 = param_2 + 2) {
      uVar4 = param_2[1];
      puVar8[2] = *param_2;
      puVar8[3] = uVar4;
      *(undefined1 *)param_2 = 0;
      param_2[1] = 0;
      puVar8 = puVar8 + 2;
    }
  }
  FUN_180156b10(param_1,puVar7,uVar1,uVar11);
  return puVar10;
}



