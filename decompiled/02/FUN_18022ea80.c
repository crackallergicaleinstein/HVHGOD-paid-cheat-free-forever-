// FUN_18022ea80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022ea80 */

undefined1 FUN_18022ea80(undefined8 *param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
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
  
  local_48 = ZEXT816(0x1807ce020);
  FUN_18017bf40(local_48 + 8);
  lVar7 = *(longlong *)param_1[1];
  uVar1 = *(undefined8 *)*param_1;
  cVar4 = FUN_1804513c0(uVar1,1,2);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    uVar5 = FUN_18022ff70(uVar1,lVar7 + 0x610,1);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
  }
  FUN_18017bf40(local_38);
  uVar10 = local_38[0] - local_48._8_8_;
  puVar8 = (ulonglong *)FUN_180230a80();
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
  return uVar5;
}



