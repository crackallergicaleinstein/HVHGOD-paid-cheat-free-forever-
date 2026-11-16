// FUN_180411300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180411300 */

undefined1 FUN_180411300(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  local_50 = (undefined1  [16])0x0;
  plVar10 = (longlong *)FUN_180416b80();
  auVar8 = local_50;
  lVar1 = *plVar10;
  local_50._0_8_ = lVar1;
  if (lVar1 == 0) {
    uVar16 = 0;
    local_50._12_4_ = auVar8._12_4_;
    local_50._0_12_ = ZEXT812(0);
  }
  else {
    FUN_18017bf40(&local_68);
    plVar10 = (longlong *)(lVar1 + 0x28 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8);
    *plVar10 = *plVar10 + (local_68 - *(longlong *)(lVar1 + 0x18));
    *(ulonglong *)(lVar1 + 0x18) = local_68;
    uVar16 = *(undefined4 *)(lVar1 + 0x20);
    *(undefined4 *)(lVar1 + 0x20) = 6;
    local_50._8_4_ = uVar16;
  }
  local_60 = ZEXT816(0x18081bcf8);
  FUN_18017bf40(local_60 + 8);
  uVar2 = *(undefined8 *)param_1[3];
  uVar3 = *(undefined8 *)param_1[2];
  uVar4 = *(undefined8 *)param_1[1];
  lVar12 = *(longlong *)*param_1;
  if (lVar12 == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    uVar9 = FUN_180416120(lVar12,uVar4,uVar3,uVar2);
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
  }
  FUN_18017bf40(&local_68);
  uVar7 = local_68;
  uVar15 = local_68 - local_60._8_8_;
  puVar13 = (ulonglong *)FUN_180416d20();
  uVar17 = *puVar13 + 1;
  *puVar13 = uVar17;
  uVar5 = puVar13[1];
  puVar13[1] = uVar5 + uVar15;
  uVar18 = puVar13[3] + (ulonglong)(999999 < uVar15);
  puVar13[3] = uVar18;
  uVar19 = puVar13[4] + (ulonglong)(4999999 < uVar15);
  puVar13[4] = uVar19;
  uVar20 = puVar13[5] + (ulonglong)(15999999 < uVar15);
  puVar13[5] = uVar20;
  uVar14 = puVar13[2];
  if (puVar13[2] < uVar15) {
    puVar13[2] = uVar15;
    uVar14 = uVar15;
  }
  if ((uVar7 == puVar13[7]) || ((longlong)puVar13[7] <= (longlong)uVar7)) {
    dVar23 = (double)(longlong)(uVar7 - puVar13[6]) / 1000000.0;
    dVar6 = (double)(uVar5 + uVar15);
    dVar22 = 0.0;
    if (0.0 < dVar23) {
      dVar22 = (dVar6 / 1000.0) / dVar23;
    }
    dVar21 = (dVar6 / (double)uVar17) / 1000.0;
    FUN_1801af8a0(dVar6 / (double)uVar17,dVar21,local_60._0_8_,uVar18,uVar17,dVar21,
                  (double)uVar14 / 1000.0,dVar6 / 1000000.0,dVar23,dVar22,uVar18,uVar19,uVar20);
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[3] = 0;
    puVar13[6] = uVar7;
    puVar13[7] = uVar7 + 5000000000;
  }
  if (lVar1 != 0) {
    FUN_18017bf40(&local_68);
    plVar10 = (longlong *)(lVar1 + 0x28 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8);
    *plVar10 = *plVar10 + (local_68 - *(longlong *)(lVar1 + 0x18));
    *(ulonglong *)(lVar1 + 0x18) = local_68;
    *(undefined4 *)(lVar1 + 0x20) = uVar16;
  }
  return uVar9;
}



