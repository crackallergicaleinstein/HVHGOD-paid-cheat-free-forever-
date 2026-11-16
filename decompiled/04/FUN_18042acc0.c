// FUN_18042acc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042acc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042acc0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,char param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int **ppiVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  undefined1 in_ZMM2 [64];
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auStack_108 [32];
  int local_e8;
  int *local_e0;
  int *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_90;
  int *local_88;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_90 = param_5;
  piVar11 = (int *)0x0;
  local_88 = (int *)0x0;
  iVar17 = 0;
  local_b0 = 0;
  auVar20 = ZEXT1664(in_ZMM2._0_16_);
  if (0 < *(int *)(param_1 + 0x74)) {
    lVar14 = 0;
    fVar19 = 0.5;
    local_a0 = 0;
    local_a4 = 0;
    do {
      iVar12 = local_a4;
      FUN_18063ab10(*(undefined8 *)(param_1 + 0x58),0,(longlong)*(int *)(param_1 + 0x70));
      local_b8 = *(int *)(param_1 + 0x70);
      local_b4 = 0;
      local_ac = 0;
      local_a8 = iVar12;
      do {
        ppiVar10 = &local_88;
        auVar18 = ZEXT464((uint)((float)local_a8 + fVar19));
        if (piVar11 != (int *)0x0) {
          do {
            if ((float)local_a8 + fVar19 < (float)piVar11[2]) {
              *piVar11 = *piVar11 + piVar11[1];
              ppiVar10 = (int **)(*ppiVar10 + 4);
            }
            else {
              *ppiVar10 = *(int **)(piVar11 + 4);
              *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(param_1 + 0x40);
              *(int **)(param_1 + 0x40) = piVar11;
            }
            piVar11 = *ppiVar10;
          } while (piVar11 != (int *)0x0);
          piVar11 = local_88;
        }
        do {
          ppiVar10 = &local_88;
          bVar6 = false;
          if (piVar11 == (int *)0x0) break;
          do {
            piVar9 = *(int **)(piVar11 + 4);
            if (piVar9 == (int *)0x0) break;
            if (*piVar9 < *piVar11) {
              bVar6 = true;
              *(undefined8 *)(piVar11 + 4) = *(undefined8 *)(piVar9 + 4);
              *(int **)(piVar9 + 4) = piVar11;
              *ppiVar10 = piVar9;
              piVar11 = piVar9;
            }
            ppiVar10 = (int **)(piVar11 + 4);
            piVar11 = *(int **)(piVar11 + 4);
          } while (piVar11 != (int *)0x0);
          piVar11 = local_88;
        } while (bVar6);
        if (iVar17 < *(int *)(param_1 + 0x18)) {
          lVar15 = lVar14 << 5;
          do {
            lVar2 = *(longlong *)(param_1 + 0x10);
            if (auVar18._0_4_ < *(float *)(lVar15 + 4 + lVar2)) break;
            if (auVar18._0_4_ < *(float *)(lVar15 + 0xc + lVar2)) {
              piVar9 = (int *)FUN_18042a390(param_1,(longlong)iVar17 * 0x20 + lVar2,auVar18._0_8_);
              if (piVar9 == (int *)0x0) break;
              if (piVar11 == (int *)0x0) {
                local_88 = piVar9;
                piVar11 = piVar9;
              }
              else if (*piVar9 < *piVar11) {
                *(int **)(piVar9 + 4) = piVar11;
                local_88 = piVar9;
                piVar11 = piVar9;
              }
              else {
                lVar2 = *(longlong *)(piVar11 + 4);
                piVar7 = piVar11;
                while ((lVar2 != 0 && (piVar3 = *(int **)(piVar7 + 4), *piVar3 < *piVar9))) {
                  lVar2 = *(longlong *)(piVar3 + 4);
                  piVar7 = piVar3;
                }
                *(undefined8 *)(piVar9 + 4) = *(undefined8 *)(piVar7 + 4);
                *(int **)(piVar7 + 4) = piVar9;
              }
            }
            iVar17 = iVar17 + 1;
            lVar14 = lVar14 + 1;
            lVar15 = lVar15 + 0x20;
          } while (iVar17 < *(int *)(param_1 + 0x18));
          local_a0 = lVar14;
        }
        if (piVar11 != (int *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 0x70);
          iVar12 = 0;
          uVar4 = *(undefined8 *)(param_1 + 0x58);
          uVar13 = 0;
          piVar9 = piVar11;
          if (param_6 == '\0') {
            do {
              if (uVar13 == 0) {
                iVar12 = *piVar9;
                uVar13 = piVar9[3];
              }
              else {
                uVar13 = uVar13 + piVar9[3];
                if (uVar13 == 0) {
                  local_d8 = &local_b4;
                  local_e0 = &local_b8;
                  FUN_18042a5d0(uVar4,uVar1,iVar12,*piVar9);
                }
              }
              piVar9 = *(int **)(piVar9 + 4);
            } while (piVar9 != (int *)0x0);
          }
          else if (param_6 == '\x01') {
            do {
              if (uVar13 != 0) {
                local_d8 = &local_b4;
                local_e0 = &local_b8;
                FUN_18042a5d0(uVar4,uVar1,iVar12);
              }
              else {
                iVar12 = *piVar9;
              }
              uVar13 = (uint)(uVar13 == 0);
              piVar9 = *(int **)(piVar9 + 4);
            } while (piVar9 != (int *)0x0);
          }
          lVar14 = local_a0;
        }
        iVar12 = local_b0;
        local_ac = local_ac + 1;
        local_a8 = local_a8 + 1;
      } while (local_ac < 5);
      iVar16 = local_b8;
      if (local_b8 < 0) {
        iVar16 = 0;
      }
      iVar8 = *(int *)(param_1 + 0x70) + -1;
      iVar5 = local_b4;
      if (iVar8 < local_b4) {
        iVar5 = iVar8;
      }
      if (iVar16 <= iVar5) {
        local_c8 = local_90;
        local_d8 = (int *)CONCAT44(local_d8._4_4_,auVar20._0_4_);
        local_e0 = (int *)CONCAT44(local_e0._4_4_,param_2);
        local_e8 = local_b0;
        local_d0 = param_4;
        FUN_18042a7d0((longlong)(local_b0 * *(int *)(param_1 + 0x78)) + (longlong)(iVar16 * 4) +
                      *(longlong *)(param_1 + 0x68),(iVar5 - iVar16) + 1,
                      (longlong)iVar16 + *(longlong *)(param_1 + 0x58));
      }
      local_b0 = iVar12 + 1;
      local_a4 = local_a4 + 5;
    } while (local_b0 < *(int *)(param_1 + 0x74));
  }
}



