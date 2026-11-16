// FUN_1805a0e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a0e60 */

int FUN_1805a0e60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int local_res8 [2];
  
  lVar1 = *param_1;
  local_res8[0] = 0;
  uVar2 = *(undefined8 *)(lVar1 + 0x30);
  if ((int)param_1[2] == 0) {
    return 0;
  }
  if (param_1[4] != 0) {
    return 0;
  }
  iVar7 = (int)param_1[2] + 1;
  uVar6 = (uint)*(byte *)((longlong)param_1 + 0x14);
  uVar9 = iVar7 * uVar6;
  lVar4 = FUN_18057ac40(uVar2,4,0,iVar7,0,local_res8);
  param_1[4] = lVar4;
  if (((local_res8[0] == 0) &&
      (local_res8[0] = FUN_1805788b0(lVar1,*(int *)((longlong)param_1 + 0xc) + (int)param_1[1]),
      local_res8[0] == 0)) && (local_res8[0] = FUN_180577bf0(lVar1,uVar9), local_res8[0] == 0)) {
    pbVar5 = *(byte **)(lVar1 + 0x38);
    puVar3 = (uint *)param_1[4];
    pbVar8 = pbVar5 + uVar9;
    if (uVar6 == 1) {
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + 1) {
        *puVar3 = (uint)*pbVar5;
        puVar3 = puVar3 + 1;
      }
    }
    else if (uVar6 == 2) {
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + 2) {
        *puVar3 = (uint)CONCAT11(*pbVar5,pbVar5[1]);
        puVar3 = puVar3 + 1;
      }
    }
    else if (uVar6 == 3) {
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + 3) {
        *puVar3 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]);
        puVar3 = puVar3 + 1;
      }
    }
    else {
      for (; pbVar5 < pbVar8; pbVar5 = pbVar5 + 4) {
        *puVar3 = CONCAT31(CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]),pbVar5[3]);
        puVar3 = puVar3 + 1;
      }
    }
    FUN_180577d30(lVar1);
    if (local_res8[0] == 0) {
      return 0;
    }
  }
  FUN_18057abd0(uVar2,param_1[4]);
  param_1[4] = 0;
  return local_res8[0];
}



