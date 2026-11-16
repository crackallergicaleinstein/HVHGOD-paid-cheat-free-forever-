// FUN_1805a64b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a64b0 */

int FUN_1805a64b0(longlong param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int local_res8 [2];
  
  local_res8[0] = 0;
  if ((byte *)(param_1 + 5U) <= param_2) {
    bVar1 = *(byte *)(param_1 + 4);
    uVar13 = (ulonglong)bVar1;
    uVar11 = (ulonglong)*(uint *)(param_3 + 0xf);
    pbVar9 = (byte *)(param_1 + 5);
    bVar2 = *(byte *)(param_1 + 3);
    uVar10 = *(uint *)(param_3 + 0xf) + (uint)bVar1;
    if (*(uint *)((longlong)param_3 + 0x7c) < uVar10) {
      uVar10 = uVar10 + 3 & 0xfffffffc;
      lVar4 = FUN_18057ad10(*param_3,0x28,uVar11,uVar10,param_3[0x10],local_res8);
      param_3[0x10] = lVar4;
      if (local_res8[0] != 0) goto LAB_1805a66aa;
      uVar11 = (ulonglong)*(uint *)(param_3 + 0xf);
      *(uint *)((longlong)param_3 + 0x7c) = uVar10;
    }
    else {
      lVar4 = param_3[0x10];
    }
    iVar6 = (bVar2 & 1) + 9;
    if ((bVar2 & 2) == 0) {
      iVar6 = (bVar2 & 1) + 8;
    }
    iVar3 = iVar6 + 1;
    if ((bVar2 & 4) == 0) {
      iVar3 = iVar6;
    }
    iVar6 = iVar3 + 1;
    if ((bVar2 & 8) == 0) {
      iVar6 = iVar3;
    }
    iVar3 = iVar6 + 1;
    if ((bVar2 & 0x10) == 0) {
      iVar3 = iVar6;
    }
    puVar12 = (uint *)(lVar4 + uVar11 * 0x28);
    uVar10 = (uint)bVar1;
    if (pbVar9 + iVar3 * uVar10 <= param_2) {
      if (uVar10 != 0) {
        do {
          if ((bVar2 & 1) == 0) {
            uVar7 = (uint)*pbVar9;
            lVar4 = 1;
          }
          else {
            uVar7 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
            lVar4 = 2;
          }
          *puVar12 = uVar7;
          pbVar9 = pbVar9 + lVar4;
          if ((bVar2 & 2) == 0) {
            uVar7 = (uint)*pbVar9;
            lVar4 = 1;
          }
          else {
            uVar7 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
            lVar4 = 2;
          }
          pbVar9 = pbVar9 + lVar4;
          puVar12[1] = uVar7;
          puVar12[2] = (uint)*pbVar9;
          pbVar5 = pbVar9 + 3;
          uVar7 = (uint)CONCAT11(pbVar9[1],pbVar9[2]);
          if ((bVar2 & 4) != 0) {
            bVar1 = *pbVar5;
            pbVar5 = pbVar9 + 4;
            uVar7 = (uint)CONCAT21(CONCAT11(pbVar9[1],pbVar9[2]),bVar1);
          }
          puVar12[5] = uVar7;
          uVar7 = (uint)*pbVar5 << 8;
          if ((bVar2 & 8) == 0) {
            uVar8 = (uint)pbVar5[1];
            pbVar9 = pbVar5 + 2;
          }
          else {
            pbVar9 = pbVar5 + 3;
            uVar8 = (uint)CONCAT11(*pbVar5,pbVar5[1]) << 8;
            uVar7 = (uint)pbVar5[2];
          }
          puVar12[6] = uVar8 | uVar7;
          uVar7 = (uint)*pbVar9;
          if ((bVar2 & 0x10) == 0) {
            lVar4 = 1;
          }
          else {
            uVar7 = (uint)CONCAT11(*pbVar9,pbVar9[1]);
            lVar4 = 2;
          }
          puVar12[7] = uVar7;
          pbVar9 = pbVar9 + lVar4;
          puVar12 = puVar12 + 10;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      *(uint *)(param_3 + 0xf) = *(int *)(param_3 + 0xf) + uVar10;
      goto LAB_1805a66aa;
    }
  }
  local_res8[0] = 8;
LAB_1805a66aa:
  return local_res8[0];
}



