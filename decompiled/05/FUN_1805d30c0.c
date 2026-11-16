// FUN_1805d30c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d30c0 */

ulonglong FUN_1805d30c0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  uint local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  longlong local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_res8[0] = 0;
  local_b8 = 0;
  if ((param_1 == (longlong *)0x0) || (param_2 == (undefined8 *)0x0)) {
    return 6;
  }
  if (*(int *)(param_2 + 2) != 8) {
    return 0x61;
  }
  lVar3 = param_2[1];
  piVar4 = (int *)*param_2;
  if ((lVar3 == 0) || (piVar4 == (int *)0x0)) {
    return 6;
  }
  lVar11 = *param_1;
  if (lVar11 == 0) {
    return 0x20;
  }
  if (0x1e < *(int *)(param_2 + 10) - 2U) {
    return 6;
  }
  local_res10 = lVar11;
  lVar7 = FUN_18057ac40(lVar11,piVar4[1] << 4,0,*piVar4,0,local_res8);
  uVar8 = (ulonglong)local_res8[0];
  local_res18 = lVar7;
  local_b8 = lVar7;
  if (local_res8[0] != 0) goto LAB_1805d3341;
  local_a8 = *param_2;
  uStack_a0 = param_2[1];
  iVar1 = piVar4[1];
  local_98 = param_2[2];
  uStack_90 = param_2[3];
  local_88 = param_2[4];
  uStack_80 = param_2[5];
  iVar2 = *piVar4;
  local_78 = param_2[6];
  uStack_70 = param_2[7];
  local_68 = *(undefined4 *)(param_2 + 8);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_60 = *(undefined4 *)(param_2 + 9);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_58 = param_2[10];
  local_b0 = iVar1;
  local_ac = iVar2;
  uVar8 = FUN_1805d46c0(lVar3,&local_b8);
  local_res8[0] = (uint)uVar8;
  if (local_res8[0] == 0) {
    if (lVar7 == 0) {
LAB_1805d3325:
      uVar8 = 6;
    }
    else {
      iVar14 = 0;
      if (0 < iVar2) {
        local_res8[0] = 0;
        do {
          iVar10 = 0;
          if (0 < iVar1) {
            iVar13 = iVar1 * iVar14;
            do {
              lVar3 = (longlong)iVar13 * 0x10 + lVar7;
              puVar12 = (undefined4 *)(lVar7 + (longlong)iVar13 * 0x10);
              cVar5 = FUN_1805d4980(lVar3,iVar10,iVar14,iVar1,iVar2);
              if (cVar5 == '\0') {
                puVar12[1] = 0xc80000;
                uVar6 = 0x1900000;
                puVar12[2] = 0xc80000;
              }
              else {
                uVar9 = FUN_1805d4b30(lVar3,iVar10,iVar14);
                *(undefined8 *)(puVar12 + 1) = uVar9;
                uVar6 = FUN_180578a00(puVar12 + 1);
              }
              iVar10 = iVar10 + 1;
              *puVar12 = uVar6;
              iVar13 = iVar13 + 1;
              lVar7 = local_res18;
            } while (iVar10 < iVar1);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar2);
      }
      local_res8[0] = 0;
      if (lVar7 == 0) goto LAB_1805d3325;
      FUN_1805d4fc0(&local_b8);
      FUN_1805d6650(&local_b8);
      local_res8[0] = 0;
      uVar8 = FUN_1805d4de0(&local_b8,piVar4);
    }
    local_res8[0] = (uint)uVar8;
  }
  lVar11 = local_res10;
LAB_1805d3341:
  if (lVar7 != 0) {
    FUN_18057abd0(lVar11,lVar7);
    uVar8 = (ulonglong)local_res8[0];
  }
  return uVar8;
}



