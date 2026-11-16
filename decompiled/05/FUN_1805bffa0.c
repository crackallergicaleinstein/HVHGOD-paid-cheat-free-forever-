// FUN_1805bffa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bffa0 */

void FUN_1805bffa0(uint *param_1,ushort *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  int local_res8 [2];
  longlong local_res10;
  longlong local_res18;
  undefined8 *local_res20;
  undefined8 uVar24;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_18063ab10(param_1,0,200);
  uVar13 = *param_4;
  *(undefined8 *)(param_1 + 6) = uVar13;
  uVar24 = uVar13;
  uVar5 = FUN_18057ac40(uVar13,0x40,0,param_2[1],0,local_res8,uVar13);
  *(undefined8 *)(param_1 + 2) = uVar5;
  if (local_res8[0] == 0) {
    puVar6 = (undefined8 *)FUN_18057ac40(uVar13,0x10,0,*param_2,0,local_res8);
    *(undefined8 **)(param_1 + 4) = puVar6;
    if (local_res8[0] == 0) {
      uVar16 = 0;
      lVar3 = *(longlong *)(param_1 + 2);
      *param_1 = (uint)param_2[1];
      uVar2 = *param_2;
      param_1[1] = (uint)uVar2;
      uVar15 = 0;
      if (uVar2 != 0) {
        do {
          uVar19 = *(ushort *)(*(longlong *)(param_2 + 0xc) + (ulonglong)uVar16 * 2) + 1;
          uVar14 = uVar19 - (int)uVar15;
          plVar18 = (longlong *)(uVar15 * 0x40 + lVar3);
          *(uint *)(puVar6 + 1) = uVar14;
          *puVar6 = plVar18;
          if (uVar14 != 0) {
            plVar18[2] = (longlong)puVar6;
            *plVar18 = (ulonglong)uVar19 * 0x40 + -0x40 + lVar3;
            plVar8 = plVar18;
            if (1 < uVar14) {
              uVar15 = (ulonglong)(uVar14 - 1);
              plVar7 = plVar18;
              do {
                plVar7[8] = (longlong)plVar7;
                plVar8 = plVar7 + 8;
                plVar7[1] = (longlong)plVar8;
                plVar7[10] = (longlong)puVar6;
                uVar15 = uVar15 - 1;
                plVar7 = plVar8;
              } while (uVar15 != 0);
            }
            plVar8[1] = (longlong)plVar18;
          }
          puVar6 = puVar6 + 2;
          uVar15 = (ulonglong)uVar19;
          uVar16 = uVar16 + 1;
        } while (uVar16 < param_1[1]);
      }
      uVar16 = 0;
      local_res10 = *(longlong *)(param_2 + 4);
      lVar3 = *(longlong *)(param_1 + 2);
      if (*param_1 != 0) {
        puVar11 = (uint *)(lVar3 + 0x18);
        uVar13 = uVar24;
        do {
          *puVar11 = 0;
          uVar15 = (ulonglong)uVar16;
          bVar23 = (*(byte *)(uVar15 + *(longlong *)(param_2 + 8)) & 1) == 0;
          if (bVar23) {
            *puVar11 = 1;
          }
          uVar19 = (uint)bVar23;
          piVar1 = (int *)(local_res10 + uVar15 * 8);
          uVar14 = 0;
          lVar9 = (longlong)(int)(*(longlong *)(puVar11 + -6) - lVar3 >> 6);
          iVar12 = *(int *)(local_res10 + uVar15 * 8) - *(int *)(local_res10 + lVar9 * 8);
          iVar22 = piVar1[1] - *(int *)(local_res10 + 4 + lVar9 * 8);
          iVar4 = -iVar12;
          if (-iVar12 < 0) {
            iVar4 = iVar12;
          }
          iVar17 = -iVar22;
          if (-iVar22 < 0) {
            iVar17 = iVar22;
          }
          if (iVar17 * 0xc < iVar4) {
            uVar14 = (iVar12 >> 0x1f & 0xfffffffcU) + 8;
          }
          else if (iVar4 * 0xc < iVar17) {
            uVar14 = (iVar22 >> 0x1f & 1U) + 1;
          }
          lVar9 = (longlong)(int)(*(longlong *)(puVar11 + -4) - lVar3 >> 6);
          uVar10 = 0;
          puVar11[2] = uVar14;
          iVar17 = *(int *)(local_res10 + lVar9 * 8) - *piVar1;
          iVar20 = *(int *)(local_res10 + 4 + lVar9 * 8) - piVar1[1];
          iVar4 = -iVar17;
          if (-iVar17 < 0) {
            iVar4 = iVar17;
          }
          iVar21 = -iVar20;
          if (-iVar20 < 0) {
            iVar21 = iVar20;
          }
          if (iVar21 * 0xc < iVar4) {
            uVar10 = (iVar17 >> 0x1f & 0xfffffffcU) + 8;
          }
          else if (iVar4 * 0xc < iVar21) {
            uVar10 = (iVar20 >> 0x1f & 1U) + 1;
          }
          puVar11[3] = uVar10;
          if (uVar19 == 0) {
            if (uVar14 == uVar10) {
              if (uVar10 == 0) {
                iVar4 = FUN_180579b90(iVar12,iVar22,iVar17,iVar20);
                if (iVar4 == 0) goto LAB_1805c023a;
              }
              *puVar11 = *puVar11 | 2;
            }
          }
          else {
            *puVar11 = uVar19 | 2;
          }
LAB_1805c023a:
          uVar16 = uVar16 + 1;
          puVar11 = puVar11 + 0x10;
        } while (uVar16 < *param_1);
        param_3 = local_res18;
      }
      *(ushort **)(param_1 + 8) = param_2;
      *(undefined8 **)(param_1 + 10) = local_res20;
      local_res8[0] =
           FUN_1805c0f20(param_1 + 0xc,param_3 + 0x18,param_3 + 0x28,param_3 + 0x38,uVar13);
      if (local_res8[0] == 0) {
        FUN_1805c0f20(param_1 + 0x1e,param_3 + 0x48,param_3 + 0x58,param_3 + 0x68,uVar13);
      }
    }
  }
  return;
}



