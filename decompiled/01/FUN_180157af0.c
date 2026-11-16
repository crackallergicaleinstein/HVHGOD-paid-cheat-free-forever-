// FUN_180157af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157af0 */

undefined1 * FUN_180157af0(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  lVar4 = *param_1;
  lVar8 = param_1[1] - lVar4 >> 4;
  if (lVar8 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar11 = param_1[2] - lVar4 >> 4;
  if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
    uVar12 = 0xfffffffffffffff;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar12 = uVar1;
    if (uVar1 <= uVar11) {
      uVar12 = uVar11;
    }
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  puVar9 = (undefined8 *)FUN_18015bca0(uVar12 << 4);
  puVar3 = (undefined1 *)(((longlong)param_2 - lVar4 & 0xfffffffffffffff0U) + (longlong)puVar9);
  puVar2 = (undefined8 *)(puVar3 + 0x10);
  *puVar3 = *param_3;
  plVar13 = param_1;
  puVar14 = puVar9;
  uVar11 = uVar12;
  puVar15 = puVar2;
  puVar16 = puVar2;
  FUN_180111d10();
  puVar5 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  puVar7 = puVar9;
  if (param_2 == puVar5) {
    for (; puVar10 != puVar5; puVar10 = puVar10 + 2) {
      uVar6 = puVar10[1];
      *puVar7 = *puVar10;
      puVar7[1] = uVar6;
      *(undefined1 *)puVar10 = 0;
      puVar10[1] = 0;
      puVar7 = puVar7 + 2;
    }
  }
  else {
    for (; puVar10 != param_2; puVar10 = puVar10 + 2) {
      uVar6 = puVar10[1];
      *puVar7 = *puVar10;
      puVar7[1] = uVar6;
      *(undefined1 *)puVar10 = 0;
      puVar10[1] = 0;
      puVar7 = puVar7 + 2;
    }
    puVar5 = (undefined8 *)param_1[1];
    for (; param_2 != puVar5; param_2 = param_2 + 2) {
      uVar6 = param_2[1];
      *puVar2 = *param_2;
      puVar2[1] = uVar6;
      *(undefined1 *)param_2 = 0;
      param_2[1] = 0;
      puVar2 = puVar2 + 2;
    }
  }
  FUN_180156b10(param_1,puVar9,uVar1,uVar12,plVar13,puVar14,uVar11,puVar15,puVar16);
  return puVar3;
}



