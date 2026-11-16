// FUN_180390c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180390c00 */

void FUN_180390c00(undefined8 *param_1)

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
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong local_res8;
  
  FUN_18017bf40(&local_res8);
  uVar5 = local_res8 - param_1[1];
  puVar3 = (ulonglong *)FUN_180391df0();
  uVar1 = puVar3[1];
  uVar6 = *puVar3 + 1;
  *puVar3 = uVar6;
  uVar7 = puVar3[3] + (ulonglong)(999999 < uVar5);
  puVar3[1] = uVar1 + uVar5;
  puVar3[3] = uVar7;
  uVar8 = puVar3[4] + (ulonglong)(4999999 < uVar5);
  puVar3[4] = uVar8;
  uVar9 = puVar3[5] + (ulonglong)(15999999 < uVar5);
  puVar3[5] = uVar9;
  uVar4 = puVar3[2];
  if (puVar3[2] < uVar5) {
    puVar3[2] = uVar5;
    uVar4 = uVar5;
  }
  if ((local_res8 == puVar3[7]) || ((longlong)puVar3[7] <= (longlong)local_res8)) {
    dVar12 = (double)(longlong)(local_res8 - puVar3[6]) / 1000000.0;
    dVar2 = (double)(uVar1 + uVar5);
    dVar11 = 0.0;
    if (0.0 < dVar12) {
      dVar11 = (dVar2 / 1000.0) / dVar12;
    }
    dVar10 = (dVar2 / (double)uVar6) / 1000.0;
    FUN_1801af8a0(dVar2 / (double)uVar6,dVar10,*param_1,uVar7,uVar6,dVar10,(double)uVar4 / 1000.0,
                  dVar2 / 1000000.0,dVar12,dVar11,uVar7,uVar8,uVar9);
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[7] = local_res8 + 5000000000;
    *puVar3 = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    puVar3[6] = local_res8;
  }
  return;
}



