// FUN_1801584c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801584c0 */

undefined8 * FUN_1801584c0(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 4;
  if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar10 = param_1[2] - lVar3 >> 4;
  if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
    uVar11 = 0xfffffffffffffff;
  }
  else {
    uVar10 = (uVar10 >> 1) + uVar10;
    uVar11 = uVar1;
    if (uVar1 <= uVar10) {
      uVar11 = uVar10;
    }
    if (0xfffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar8 = (undefined8 *)FUN_18015bca0(uVar11 << 4);
  puVar2 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xfffffffffffffff0U) + (longlong)puVar8);
  *(undefined1 *)puVar2 = 0;
  FUN_180111d10(puVar2 + 1,0);
  puVar4 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  puVar6 = puVar8;
  if (param_2 == puVar4) {
    for (; puVar9 != puVar4; puVar9 = puVar9 + 2) {
      uVar5 = puVar9[1];
      *puVar6 = *puVar9;
      puVar6[1] = uVar5;
      *(undefined1 *)puVar9 = 0;
      puVar9[1] = 0;
      puVar6 = puVar6 + 2;
    }
  }
  else {
    for (; puVar9 != param_2; puVar9 = puVar9 + 2) {
      uVar5 = puVar9[1];
      *puVar6 = *puVar9;
      puVar6[1] = uVar5;
      *(undefined1 *)puVar9 = 0;
      puVar9[1] = 0;
      puVar6 = puVar6 + 2;
    }
    puVar4 = (undefined8 *)param_1[1];
    puVar9 = puVar2;
    for (; param_2 != puVar4; param_2 = param_2 + 2) {
      uVar5 = param_2[1];
      puVar9[2] = *param_2;
      puVar9[3] = uVar5;
      *(undefined1 *)param_2 = 0;
      param_2[1] = 0;
      puVar9 = puVar9 + 2;
    }
  }
  FUN_180156b10(param_1,puVar8,uVar1,uVar11);
  return puVar2;
}



