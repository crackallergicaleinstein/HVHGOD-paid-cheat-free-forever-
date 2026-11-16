// FUN_1805a2c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a2c60 */

int FUN_1805a2c60(int *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  ulonglong uVar20;
  int local_res20 [2];
  undefined4 *local_48;
  
  uVar14 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  local_res20[0] = 3;
  local_48 = (undefined4 *)0x0;
  if (param_4 != 0) {
    local_res20[0] = FUN_1805788b0(param_2,param_3 + param_4);
    if ((local_res20[0] != 0) || (local_res20[0] = FUN_180578910(param_2,2), local_res20[0] != 0))
    goto LAB_1805a2cfa;
    iVar8 = FUN_1805780f0(param_2);
    sVar4 = FUN_180578720(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_1805a2cfa;
    if (sVar4 != 1) {
      local_res20[0] = 3;
      goto LAB_1805a2cfa;
    }
    iVar9 = FUN_180578540(param_2,local_res20);
    if (((local_res20[0] != 0) || (uVar5 = FUN_180578720(param_2,local_res20), local_res20[0] != 0))
       || (local_48 = (undefined4 *)FUN_18057ac40(uVar3,4,0,uVar5,0,local_res20),
          local_res20[0] != 0)) goto LAB_1805a2cfa;
    if (uVar5 != 0) {
      puVar18 = local_48;
      do {
        uVar10 = FUN_180578540(param_2,local_res20);
        *puVar18 = uVar10;
        if (local_res20[0] != 0) goto LAB_1805a2cfa;
        uVar14 = uVar14 + 1;
        puVar18 = puVar18 + 1;
      } while (uVar14 < uVar5);
    }
    local_res20[0] = FUN_1805788b0(param_2,iVar8 + iVar9);
    if (local_res20[0] != 0) goto LAB_1805a2cfa;
    uVar6 = FUN_180578720(param_2,local_res20);
    *(undefined2 *)(param_1 + 4) = uVar6;
    if (local_res20[0] != 0) goto LAB_1805a2cfa;
    uVar7 = FUN_180578720(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_1805a2cfa;
    uVar20 = 0;
    param_1[5] = 0;
    uVar11 = FUN_18057ac40(uVar3,8,0,(uint)uVar7,0,local_res20);
    *(undefined8 *)(param_1 + 6) = uVar11;
    if (local_res20[0] != 0) goto LAB_1805a2cfa;
    if (uVar7 != 0) {
      do {
        uVar17 = 0;
        plVar1 = (longlong *)(*(longlong *)(param_1 + 6) + uVar20 * 8);
        lVar12 = FUN_18057ac40(uVar3,0xc,0,(short)param_1[4],0,local_res20);
        *plVar1 = lVar12;
        if (local_res20[0] != 0) goto LAB_1805a2cfa;
        param_1[5] = param_1[5] + 1;
        if ((short)param_1[4] != 0) {
          do {
            piVar2 = (int *)(*plVar1 + uVar17 * 0xc);
            sVar4 = FUN_180578720(param_2,local_res20);
            iVar9 = (int)sVar4;
            if (local_res20[0] != 0) goto LAB_1805a2cfa;
            sVar4 = FUN_180578720(param_2,local_res20);
            iVar15 = (int)sVar4;
            if (local_res20[0] != 0) goto LAB_1805a2cfa;
            sVar4 = FUN_180578720(param_2,local_res20);
            iVar13 = (int)sVar4;
            if (local_res20[0] != 0) goto LAB_1805a2cfa;
            if (((iVar9 < 0) && (0 < iVar13)) || ((iVar15 < iVar9 || (iVar13 < iVar15)))) {
              iVar15 = 0;
            }
            uVar14 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar14;
            *piVar2 = iVar9 * 4;
            piVar2[1] = iVar15 * 4;
            piVar2[2] = iVar13 * 4;
          } while (uVar14 < *(ushort *)(param_1 + 4));
        }
        uVar14 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar14;
      } while (uVar14 < uVar7);
    }
    uVar14 = (uint)uVar5;
    *param_1 = 0;
    uVar11 = FUN_18057ac40(uVar3,0x10,0,uVar14,0,local_res20);
    *(undefined8 *)(param_1 + 2) = uVar11;
    if (local_res20[0] != 0) goto LAB_1805a2cfa;
    uVar20 = 0;
    if (uVar14 != 0) {
      do {
        uVar17 = 0;
        puVar19 = (uint *)(uVar20 * 0x10 + *(longlong *)(param_1 + 2));
        local_res20[0] = FUN_1805788b0(param_2,iVar8 + local_48[uVar20]);
        if ((local_res20[0] != 0) ||
           (local_res20[0] = FUN_180578910(param_2,4), local_res20[0] != 0)) goto LAB_1805a2cfa;
        uVar5 = FUN_180578720(param_2,local_res20);
        *puVar19 = (uint)uVar5;
        if (local_res20[0] != 0) goto LAB_1805a2cfa;
        uVar11 = FUN_18057ac40(uVar3,4,0,uVar5,0,local_res20);
        *(undefined8 *)(puVar19 + 2) = uVar11;
        if (local_res20[0] != 0) goto LAB_1805a2cfa;
        *param_1 = *param_1 + 1;
        if (*puVar19 != 0) {
          do {
            uVar5 = FUN_180578720(param_2,local_res20);
            *(uint *)(*(longlong *)(puVar19 + 2) + uVar17 * 4) = (uint)uVar5;
            if (local_res20[0] != 0) goto LAB_1805a2cfa;
            uVar16 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
          } while (uVar16 < *puVar19);
        }
        uVar16 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar16;
      } while (uVar16 < uVar14);
      local_res20[0] = 0;
      goto LAB_1805a2cfa;
    }
  }
  local_res20[0] = 0;
LAB_1805a2cfa:
  FUN_18057abd0(uVar3,local_48);
  if (local_res20[0] != 0) {
    FUN_1805a2b90(param_1,uVar3);
  }
  return local_res20[0];
}



