// FUN_18022ed00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022ed00 */

undefined1 FUN_18022ed00(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_48 [16];
  ulonglong local_38 [4];
  
  local_48 = ZEXT816(0x1807cdff8);
  FUN_18017bf40(local_48 + 8);
  uVar4 = DAT_180cd3b68;
  uVar1 = *(undefined8 *)*param_1;
  cVar5 = FUN_1804513c0(DAT_180cd3b68,1,2);
  if (cVar5 == '\0') {
    uVar6 = 0;
  }
  else {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    uVar6 = FUN_18022ff70(uVar4,uVar1,1);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
  }
  FUN_18017bf40(local_38);
  uVar10 = local_38[0] - local_48._8_8_;
  puVar8 = (ulonglong *)FUN_180230c60();
  uVar11 = *puVar8 + 1;
  *puVar8 = uVar11;
  uVar2 = puVar8[1];
  puVar8[1] = uVar2 + uVar10;
  uVar12 = puVar8[3] + (ulonglong)(999999 < uVar10);
  puVar8[3] = uVar12;
  uVar13 = puVar8[4] + (ulonglong)(4999999 < uVar10);
  puVar8[4] = uVar13;
  uVar14 = puVar8[5] + (ulonglong)(15999999 < uVar10);
  puVar8[5] = uVar14;
  uVar9 = puVar8[2];
  if (puVar8[2] < uVar10) {
    puVar8[2] = uVar10;
    uVar9 = uVar10;
  }
  if ((longlong)puVar8[7] <= (longlong)local_38[0]) {
    dVar17 = (double)(longlong)(local_38[0] - puVar8[6]) / 1000000.0;
    dVar3 = (double)(uVar2 + uVar10);
    dVar16 = 0.0;
    if (0.0 < dVar17) {
      dVar16 = (dVar3 / 1000.0) / dVar17;
    }
    dVar15 = (dVar3 / (double)uVar11) / 1000.0;
    FUN_1801af8a0(dVar3 / (double)uVar11,dVar15,local_48._0_8_,uVar12,uVar11,dVar15,
                  (double)uVar9 / 1000.0,dVar3 / 1000000.0,dVar17,dVar16,uVar12,uVar13,uVar14);
    puVar8[2] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    puVar8[6] = local_38[0];
    puVar8[7] = local_38[0] + 5000000000;
  }
  return uVar6;
}



