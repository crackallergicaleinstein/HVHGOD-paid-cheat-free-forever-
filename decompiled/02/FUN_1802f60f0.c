// FUN_1802f60f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f60f0 */

void FUN_1802f60f0(void)

{
  ulonglong uVar1;
  double dVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 local_58 [16];
  ulonglong local_48 [8];
  
  local_58 = ZEXT816(0x180800978);
  FUN_18017bf40(local_58 + 8);
  FUN_1802f8000(&DAT_180b8f998);
  FUN_18017bf40(local_48);
  uVar4 = local_48[0];
  uVar5 = local_48[0] - local_58._8_8_;
  puVar3 = (ulonglong *)FUN_1802fb060();
  uVar7 = *puVar3 + 1;
  *puVar3 = uVar7;
  uVar1 = puVar3[1];
  puVar3[1] = uVar1 + uVar5;
  uVar8 = puVar3[3] + (ulonglong)(999999 < uVar5);
  puVar3[3] = uVar8;
  uVar9 = puVar3[4] + (ulonglong)(4999999 < uVar5);
  puVar3[4] = uVar9;
  uVar10 = puVar3[5] + (ulonglong)(15999999 < uVar5);
  puVar3[5] = uVar10;
  uVar6 = puVar3[2];
  if (puVar3[2] < uVar5) {
    puVar3[2] = uVar5;
    uVar6 = uVar5;
  }
  dVar16 = 1000000.0;
  dVar15 = 0.0;
  dVar14 = 1000.0;
  if ((uVar4 == puVar3[7]) || ((longlong)puVar3[7] <= (longlong)uVar4)) {
    dVar12 = (double)(longlong)(uVar4 - puVar3[6]) / 1000000.0;
    dVar2 = (double)(uVar1 + uVar5);
    if (dVar12 <= 0.0) {
      dVar13 = 0.0;
    }
    else {
      dVar13 = (dVar2 / 1000.0) / dVar12;
    }
    dVar11 = (dVar2 / (double)uVar7) / 1000.0;
    FUN_1801af8a0(dVar2 / (double)uVar7,dVar11,local_58._0_8_,uVar8,uVar7,dVar11,
                  (double)uVar6 / 1000.0,dVar2 / 1000000.0,dVar12,dVar13,uVar8,uVar9,uVar10);
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = uVar4;
    puVar3[7] = uVar4 + 5000000000;
  }
  local_58 = ZEXT816(0x180800a00);
  FUN_18017bf40(local_58 + 8);
  FUN_1802f6510();
  FUN_18017bf40(local_48);
  uVar6 = local_48[0] - local_58._8_8_;
  puVar3 = (ulonglong *)FUN_1802fb240();
  uVar5 = *puVar3 + 1;
  *puVar3 = uVar5;
  uVar1 = puVar3[1];
  puVar3[1] = uVar1 + uVar6;
  uVar7 = puVar3[3] + (ulonglong)(999999 < uVar6);
  puVar3[3] = uVar7;
  uVar8 = puVar3[4] + (ulonglong)(4999999 < uVar6);
  puVar3[4] = uVar8;
  uVar9 = puVar3[5] + (ulonglong)(15999999 < uVar6);
  puVar3[5] = uVar9;
  uVar4 = puVar3[2];
  if (puVar3[2] < uVar6) {
    puVar3[2] = uVar6;
    uVar4 = uVar6;
  }
  if ((local_48[0] == puVar3[7]) || ((longlong)puVar3[7] <= (longlong)local_48[0])) {
    dVar12 = (double)(longlong)(local_48[0] - puVar3[6]) / dVar16;
    dVar2 = (double)(uVar1 + uVar6);
    if (dVar15 < dVar12) {
      dVar15 = (dVar2 / dVar14) / dVar12;
    }
    dVar13 = (dVar2 / (double)uVar5) / dVar14;
    FUN_1801af8a0(dVar2 / (double)uVar5,dVar13,local_58._0_8_,uVar7,uVar5,dVar13,
                  (double)uVar4 / dVar14,dVar2 / dVar16,dVar12,dVar15,uVar7,uVar8,uVar9);
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = local_48[0];
    puVar3[7] = local_48[0] + 5000000000;
  }
  return;
}



