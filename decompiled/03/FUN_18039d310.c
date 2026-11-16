// FUN_18039d310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039d310 */

void FUN_18039d310(undefined8 *param_1)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 local_68 [16];
  ulonglong local_58 [8];
  
  lVar3 = FUN_18017ea70();
  *(char **)(lVar3 + 8) = "create_move: pixelsurf";
  local_68 = ZEXT816(0x1808082f8);
  uVar12 = FUN_18017bf40(local_68 + 8);
  FUN_18032b600(uVar12,*(undefined8 *)*param_1);
  FUN_18017bf40(local_58);
  uVar5 = local_58[0];
  uVar6 = local_58[0] - local_68._8_8_;
  puVar4 = (ulonglong *)FUN_1803a5840();
  uVar8 = *puVar4 + 1;
  *puVar4 = uVar8;
  uVar1 = puVar4[1];
  puVar4[1] = uVar1 + uVar6;
  uVar9 = puVar4[3] + (ulonglong)(999999 < uVar6);
  puVar4[3] = uVar9;
  uVar10 = puVar4[4] + (ulonglong)(4999999 < uVar6);
  puVar4[4] = uVar10;
  uVar11 = puVar4[5] + (ulonglong)(15999999 < uVar6);
  puVar4[5] = uVar11;
  uVar7 = puVar4[2];
  if (puVar4[2] < uVar6) {
    puVar4[2] = uVar6;
    uVar7 = uVar6;
  }
  dVar18 = 1000000.0;
  dVar17 = 0.0;
  dVar16 = 1000.0;
  if ((uVar5 == puVar4[7]) || ((longlong)puVar4[7] <= (longlong)uVar5)) {
    dVar14 = (double)(longlong)(uVar5 - puVar4[6]) / 1000000.0;
    dVar2 = (double)(uVar1 + uVar6);
    if (dVar14 <= 0.0) {
      dVar15 = 0.0;
    }
    else {
      dVar15 = (dVar2 / 1000.0) / dVar14;
    }
    dVar13 = (dVar2 / (double)uVar8) / 1000.0;
    FUN_1801af8a0(dVar2 / (double)uVar8,dVar13,local_68._0_8_,uVar9,uVar8,dVar13,
                  (double)uVar7 / 1000.0,dVar2 / 1000000.0,dVar14,dVar15,uVar9,uVar10,uVar11);
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = uVar5;
    puVar4[7] = uVar5 + 5000000000;
  }
  lVar3 = FUN_18017ea70();
  *(char **)(lVar3 + 8) = "create_move: texturebug";
  local_68 = ZEXT816(0x180808248);
  uVar12 = FUN_18017bf40(local_68 + 8);
  FUN_1803021d0(uVar12,*(undefined8 *)*param_1);
  FUN_18017bf40(local_58);
  uVar5 = local_58[0];
  uVar6 = local_58[0] - local_68._8_8_;
  puVar4 = (ulonglong *)FUN_1803a5a20();
  uVar8 = *puVar4 + 1;
  *puVar4 = uVar8;
  uVar1 = puVar4[1];
  puVar4[1] = uVar1 + uVar6;
  uVar9 = puVar4[3] + (ulonglong)(999999 < uVar6);
  puVar4[3] = uVar9;
  uVar10 = puVar4[4] + (ulonglong)(4999999 < uVar6);
  puVar4[4] = uVar10;
  uVar11 = puVar4[5] + (ulonglong)(15999999 < uVar6);
  puVar4[5] = uVar11;
  uVar7 = puVar4[2];
  if (puVar4[2] < uVar6) {
    puVar4[2] = uVar6;
    uVar7 = uVar6;
  }
  if ((uVar5 == puVar4[7]) || ((longlong)puVar4[7] <= (longlong)uVar5)) {
    dVar14 = (double)(longlong)(uVar5 - puVar4[6]) / dVar18;
    dVar2 = (double)(uVar1 + uVar6);
    if (dVar14 <= dVar17) {
      dVar15 = 0.0;
    }
    else {
      dVar15 = (dVar2 / dVar16) / dVar14;
    }
    dVar13 = (dVar2 / (double)uVar8) / dVar16;
    FUN_1801af8a0(dVar2 / (double)uVar8,dVar13,local_68._0_8_,uVar9,uVar8,dVar13,
                  (double)uVar7 / dVar16,dVar2 / dVar18,dVar14,dVar15,uVar9,uVar10,uVar11);
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = uVar5;
    puVar4[7] = uVar5 + 5000000000;
  }
  lVar3 = FUN_18017ea70();
  *(char **)(lVar3 + 8) = "create_move: edgebug";
  local_68 = ZEXT816(0x180808288);
  FUN_18017bf40(local_68 + 8);
  FUN_180341230(&DAT_180b900c0,*(undefined8 *)*param_1);
  FUN_18017bf40(local_58);
  uVar7 = local_58[0] - local_68._8_8_;
  puVar4 = (ulonglong *)FUN_1803a5c00();
  uVar6 = *puVar4 + 1;
  *puVar4 = uVar6;
  uVar1 = puVar4[1];
  puVar4[1] = uVar1 + uVar7;
  uVar8 = puVar4[3] + (ulonglong)(999999 < uVar7);
  puVar4[3] = uVar8;
  uVar9 = puVar4[4] + (ulonglong)(4999999 < uVar7);
  puVar4[4] = uVar9;
  uVar10 = puVar4[5] + (ulonglong)(15999999 < uVar7);
  puVar4[5] = uVar10;
  uVar5 = puVar4[2];
  if (puVar4[2] < uVar7) {
    puVar4[2] = uVar7;
    uVar5 = uVar7;
  }
  if ((local_58[0] == puVar4[7]) || ((longlong)puVar4[7] <= (longlong)local_58[0])) {
    dVar14 = (double)(longlong)(local_58[0] - puVar4[6]) / dVar18;
    dVar2 = (double)(uVar1 + uVar7);
    if (dVar17 < dVar14) {
      dVar17 = (dVar2 / dVar16) / dVar14;
    }
    dVar15 = (dVar2 / (double)uVar6) / dVar16;
    FUN_1801af8a0(dVar2 / (double)uVar6,dVar15,local_68._0_8_,uVar8,uVar6,dVar15,
                  (double)uVar5 / dVar16,dVar2 / dVar18,dVar14,dVar17,uVar8,uVar9,uVar10);
    puVar4[2] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[6] = local_58[0];
    puVar4[7] = local_58[0] + 5000000000;
  }
  return;
}



