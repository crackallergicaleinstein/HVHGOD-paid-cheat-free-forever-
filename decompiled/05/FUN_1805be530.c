// FUN_1805be530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805be530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805be530(undefined8 param_1,short *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  char local_128;
  int local_124;
  int local_120;
  int local_11c;
  uint local_118;
  uint local_114;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  int local_e8 [2];
  longlong local_e0 [3];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  bool local_54;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  if (param_2[1] == 0) {
  }
  if (*param_2 == 0) {
  }
  local_11c = FUN_1805bffa0(&local_118,param_2,param_1,param_3);
  if (local_11c != 0) goto LAB_1805bea8e;
  local_124 = *(int *)(local_f0 + 0x198);
  iVar17 = *(int *)(local_f0 + 0xcc);
  piVar1 = (int *)(param_3 + 0x1a0);
  local_128 = '\0';
  local_120 = iVar17;
  if (*piVar1 != 0) {
    lVar7 = (longlong)*(int *)(param_3 + 0x1a4) * (longlong)local_124;
    uVar19 = (uint)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    uVar15 = uVar19 + 0x20 & 0xffffffc0;
    if ((uVar15 != 0) && (uVar19 != uVar15)) {
      local_128 = '\x01';
      uVar6 = FUN_1805753e0(local_124,uVar15,uVar19);
      if ((int)uVar15 < (int)uVar19) {
        iVar14 = (int)((ulonglong)((longlong)iVar17 * -0x51eb851f) >> 0x20);
        iVar17 = iVar17 + ((iVar14 >> 4) - (iVar14 >> 0x1f));
      }
      local_138 = 0;
      FUN_1805bfd70(local_f0,iVar17,uVar6,0);
    }
  }
  uVar13 = 0;
  local_58 = 0x101;
  if (param_4 - 2U < 2) {
    local_56 = 1;
    if (param_4 != 2) goto LAB_1805be66c;
LAB_1805be676:
    local_55 = 1;
  }
  else {
    local_56 = 0;
LAB_1805be66c:
    if (param_4 == 4) goto LAB_1805be676;
    local_55 = 0;
  }
  local_54 = param_4 != 1;
  uVar22 = uVar13;
  do {
    lVar7 = local_f0;
    uVar16 = 0;
    iVar17 = (int)uVar13;
    if (local_118 != 0) {
      puVar9 = *(undefined4 **)(local_f8 + 8);
      puVar10 = (undefined8 *)(local_110 + 0x28);
      uVar19 = local_118;
      if (iVar17 == 0) {
        do {
          *(undefined4 *)((longlong)puVar10 + -0xc) = 0;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = *puVar9;
          *(undefined4 *)((longlong)puVar10 + 0xc) = puVar9[1];
          uVar19 = uVar19 - 1;
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 8;
        } while (uVar19 != 0);
      }
      else {
        do {
          *(undefined4 *)((longlong)puVar10 + -0xc) = 0;
          *puVar10 = 0;
          *(undefined4 *)(puVar10 + 1) = puVar9[1];
          *(undefined4 *)((longlong)puVar10 + 0xc) = *puVar9;
          uVar19 = uVar19 - 1;
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 8;
        } while (uVar19 != 0);
      }
    }
    if (local_114 != 0) {
      do {
        if (2 < *(uint *)(local_108 + 8 + uVar16 * 0x10)) {
          puVar10 = *(undefined8 **)(local_108 + uVar16 * 0x10);
          puVar4 = puVar10;
          puVar21 = (undefined8 *)*puVar10;
          do {
            puVar11 = puVar4;
            iVar14 = *(int *)(puVar11 + 6);
            puVar4 = (undefined8 *)puVar11[1];
            if (*(int *)(puVar21 + 6) < iVar14) {
              if (*(int *)(puVar4 + 6) <= iVar14) goto LAB_1805be751;
            }
            else if ((*(int *)(puVar21 + 6) <= iVar14) || (iVar14 <= *(int *)(puVar4 + 6))) {
LAB_1805be751:
              uVar19 = *(uint *)((longlong)puVar11 + 0x1c);
              *(uint *)((longlong)puVar11 + 0x1c) = uVar19 | 0x40;
              if (*(int *)((longlong)puVar21 + 0x34) < *(int *)((longlong)puVar4 + 0x34)) {
                uVar19 = uVar19 | 0xc0;
              }
              else {
                if (*(int *)((longlong)puVar21 + 0x34) <= *(int *)((longlong)puVar4 + 0x34))
                goto LAB_1805be779;
                uVar19 = uVar19 | 0x140;
              }
              *(uint *)((longlong)puVar11 + 0x1c) = uVar19;
            }
LAB_1805be779:
            puVar21 = puVar11;
          } while (puVar4 != puVar10);
        }
        uVar19 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar19;
      } while (uVar19 < local_114);
    }
    lVar18 = local_e0[uVar22 * 9];
    for (iVar14 = local_e8[uVar22 * 0x12]; iVar14 != 0; iVar14 = iVar14 + -1) {
      FUN_1805c07c0(lVar18,lVar7,uVar13,&local_118);
      lVar18 = lVar18 + 0x28;
    }
    FUN_1805bfe00(&local_118,uVar13);
    if ((iVar17 == 1) && (local_118 != 0)) {
      puVar12 = (uint *)(local_110 + 0x1c);
      uVar19 = local_118;
      do {
        if ((((puVar12[1] & 0xc) != 0) || ((puVar12[2] & 0xc) != 0)) && ((*puVar12 & 0x10) == 0)) {
          iVar14 = *piVar1;
          uVar15 = puVar12[5];
          if (iVar14 != 0) {
            piVar8 = (int *)(param_3 + 0x1ac);
            do {
              if ((int)(uVar15 - piVar8[1]) < -*(int *)(param_3 + 0x9bc)) break;
              if (((int)uVar15 <= *(int *)(param_3 + 0x9bc) + *piVar8) &&
                 ((*(char *)(param_3 + 0x9c0) != '\0' ||
                  ((int)(uVar15 - piVar8[1]) <= *(int *)(param_3 + 0x9b8))))) {
                uVar20 = piVar8[4];
                *puVar12 = *puVar12 | 0x30;
                puVar12[7] = uVar20;
              }
              piVar8 = piVar8 + 8;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          uVar20 = *(uint *)(param_3 + 0x3a4);
          if (uVar20 != 0) {
            piVar8 = piVar1 + (ulonglong)uVar20 * 8 + 0x7d;
            do {
              if ((int)(piVar8[-1] - uVar15) < -*(int *)(param_3 + 0x9bc)) break;
              if ((*piVar8 - *(int *)(param_3 + 0x9bc) <= (int)uVar15) &&
                 ((*(char *)(param_3 + 0x9c0) != '\0' ||
                  ((int)(piVar8[-1] - uVar15) < *(int *)(param_3 + 0x9b8))))) {
                uVar3 = piVar8[4];
                *puVar12 = *puVar12 | 0x30;
                puVar12[7] = uVar3;
              }
              piVar8 = piVar8 + -8;
              uVar20 = uVar20 - 1;
            } while (uVar20 != 0);
          }
        }
        puVar12 = puVar12 + 0x10;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    lVar7 = (longlong)*(int *)((uVar22 + 1) * 0xcc + local_f0);
    if (local_118 != 0) {
      puVar12 = (uint *)(local_110 + 0x1c);
      uVar19 = local_118;
      do {
        piVar8 = *(int **)(puVar12 + 3);
        if (piVar8 != (int *)0x0) {
          if ((*puVar12 >> 9 & 1) == 0) {
            if ((*puVar12 >> 10 & 1) == 0) {
              iVar14 = puVar12[5] - *piVar8;
              if (iVar14 < 1) {
                lVar18 = iVar14 * lVar7;
                uVar15 = (int)((ulonglong)(lVar18 + 0x8000 + (lVar18 >> 0x3f)) >> 0x10) + piVar8[2];
              }
              else if (iVar14 < piVar8[1]) {
                iVar14 = FUN_1805753e0(iVar14,piVar8[3]);
                uVar15 = piVar8[2] + iVar14;
              }
              else {
                lVar18 = (iVar14 - piVar8[1]) * lVar7;
                uVar15 = (int)((ulonglong)(lVar18 + 0x8000 + (lVar18 >> 0x3f)) >> 0x10) + piVar8[2]
                         + piVar8[3];
              }
            }
            else {
              uVar15 = piVar8[3] + piVar8[2];
            }
          }
          else {
            uVar15 = piVar8[2];
          }
          puVar12[7] = uVar15;
          *puVar12 = *puVar12 | 0x20;
        }
        puVar12 = puVar12 + 0x10;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
    FUN_1805c02d0(&local_118,uVar13);
    FUN_1805c0550(&local_118,uVar13);
    uVar13 = 0;
    lVar7 = *(longlong *)(local_f8 + 8);
    lVar18 = *(longlong *)(local_f8 + 0x10);
    if (local_118 != 0) {
      puVar9 = (undefined4 *)(local_110 + 0x38);
      do {
        if (uVar22 == 0) {
          *(undefined4 *)(lVar7 + uVar13 * 8) = *puVar9;
        }
        else {
          *(undefined4 *)(lVar7 + 4 + uVar13 * 8) = *puVar9;
        }
        if ((*(byte *)(puVar9 + -7) & 0x10) != 0) {
          bVar5 = 0x40;
          if (iVar17 == 0) {
            bVar5 = 0x20;
          }
          pbVar2 = (byte *)(uVar13 + lVar18);
          *pbVar2 = *pbVar2 | bVar5;
        }
        puVar9 = puVar9 + 0x10;
        uVar19 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar19;
      } while (uVar19 < local_118);
    }
    if (local_128 != '\0') {
      local_138 = 0;
      FUN_1805bfd70(local_f0,local_120,local_124,0);
    }
    uVar13 = (ulonglong)(iVar17 + 1U);
    uVar22 = uVar22 + 1;
  } while ((int)(iVar17 + 1U) < 2);
LAB_1805bea8e:
  FUN_18057abd0(local_100,local_78);
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  FUN_18057abd0(local_100,local_90);
  local_90 = 0;
  FUN_18057abd0(local_100,local_98);
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  FUN_18057abd0(local_100,local_c0);
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  FUN_18057abd0(local_100,local_e0[1]);
  local_e0[1] = 0;
  FUN_18057abd0(local_100,local_e0[0]);
  local_e0[0] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e0[2] = 0;
  FUN_18057abd0(local_100,local_110);
  local_110 = 0;
  FUN_18057abd0(local_100,local_108);
}



