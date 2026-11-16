// FUN_18057f1a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057f1a0 */

int * FUN_18057f1a0(longlong param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  int iVar16;
  longlong lVar17;
  byte *pbVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  ulonglong *puVar22;
  int *piVar23;
  int *local_res8;
  uint local_res20;
  int *local_58;
  
  piVar10 = (int *)(longlong)param_2;
  piVar4 = *(int **)((longlong)piVar10 * 0x898 + 0x60 + param_1);
  if (piVar4 == (int *)0x0) {
    piVar15 = (int *)0x0;
LAB_18057f45a:
    iVar13 = 0;
  }
  else {
    piVar10 = (int *)(ulonglong)*(uint *)((longlong)piVar10 * 0x898 + 0x58 + param_1);
    local_58 = (int *)0x0;
    piVar15 = piVar4 + (longlong)piVar10 * 0x12;
    piVar14 = (int *)0x0;
    piVar20 = piVar4;
    if (piVar15 <= piVar4) goto LAB_18057f45a;
    do {
      if ((*(byte *)(piVar20 + 3) & 4) == 0) {
        lVar17 = *(longlong *)(piVar20 + 6);
        piVar10 = *(int **)(piVar20 + 8);
        if (lVar17 == 0) {
          if ((piVar10 != (int *)0x0) && (lVar17 = *(longlong *)(piVar10 + 6), lVar17 != 0)) {
            piVar11 = piVar10;
            piVar10 = piVar20;
            goto LAB_18057f271;
          }
        }
        else {
          piVar11 = piVar20;
          if (piVar20 != (int *)0x0) {
LAB_18057f271:
            bVar1 = *(byte *)(piVar11 + 3);
            iVar13 = *(int *)(lVar17 + 8);
            piVar11[2] = iVar13;
            *(byte *)(piVar11 + 3) = bVar1 | 4;
            if ((piVar10 != (int *)0x0) && (*(longlong *)(piVar10 + 6) == 0)) {
              bVar2 = *(byte *)(piVar10 + 3);
              iVar8 = FUN_18057efe0(param_1,param_2,piVar10[1] - piVar11[1],bVar1 | 4,bVar2);
              *(byte *)(piVar10 + 3) = bVar2 | 4;
              piVar10[2] = iVar8 + iVar13;
              piVar14 = local_58;
            }
            if (piVar14 == (int *)0x0) {
              piVar14 = piVar20;
              local_58 = piVar20;
            }
          }
        }
      }
      local_res20 = 0;
      iVar13 = 0;
      iVar8 = 0;
      bVar7 = false;
      piVar10 = (int *)0x0;
      piVar20 = piVar20 + 0x12;
    } while (piVar20 < piVar15);
    piVar20 = piVar4 + 2;
    do {
      bVar1 = *(byte *)(piVar20 + 1);
      if ((bVar1 & 4) == 0) {
        piVar11 = *(int **)(piVar20 + 6);
        if (piVar11 == (int *)0x0) {
          iVar13 = iVar13 + 1;
        }
        else if ((bVar7) && ((*piVar20 < iVar8 + 0x40 || (piVar11[2] < iVar8 + 0x40)))) {
          iVar13 = iVar13 + 1;
        }
        else if (*(longlong *)(piVar11 + 6) == 0) {
          piVar23 = piVar20 + -2;
          if (piVar11 < piVar23) {
            iVar8 = FUN_18057efe0(param_1,param_2,piVar20[-1] - piVar11[1],(char)piVar11[3],bVar1);
            iVar8 = piVar11[2] + iVar8;
            *piVar20 = iVar8;
            *(byte *)(piVar20 + 1) = bVar1 | 4;
          }
          else {
            if ((param_2 == 1) || (piVar14 != (int *)0x0)) {
              FUN_180582810(param_1,piVar23,piVar11,piVar10,param_2);
            }
            else {
              local_res20 = FUN_180582810(param_1,piVar23,piVar11,0,0);
            }
            *(byte *)(piVar20 + 1) = *(byte *)(piVar20 + 1) | 4;
            *(byte *)(piVar11 + 3) = *(byte *)(piVar11 + 3) | 4;
            iVar8 = piVar11[2];
            local_58 = piVar23;
          }
          bVar7 = true;
          piVar14 = local_58;
        }
        else {
          iVar16 = FUN_18057efe0(param_1,param_2,piVar20[-1] - piVar11[1],(char)piVar11[3],bVar1);
          *piVar20 = iVar16 + piVar11[2];
          *(byte *)(piVar20 + 1) = bVar1 | 4;
          piVar14 = local_58;
        }
      }
      piVar11 = piVar20 + 0x10;
      piVar10 = (int *)(ulonglong)local_res20;
      piVar20 = piVar20 + 0x12;
    } while (piVar11 < piVar15);
  }
  if (param_2 == 0) {
    if ((ulonglong)((longlong)piVar15 + (-0x1b0 - (longlong)piVar4)) < 0x48) {
      local_res8 = piVar4 + 0x26;
      piVar14 = piVar4 + 0x2c;
      piVar10 = piVar4 + 0x49;
      piVar20 = piVar4 + 0x36;
      piVar11 = piVar4 + 0x25;
      pbVar18 = (byte *)(piVar4 + 0x4b);
      puVar22 = (ulonglong *)(piVar4 + 0x50);
      piVar23 = piVar4 + 0x4a;
      piVar21 = piVar4 + 0x5a;
      piVar19 = piVar4;
    }
    else {
      piVar10 = (int *)((longlong)piVar15 + (-0x360 - (longlong)piVar4));
      if ((int *)0x47 < piVar10) goto LAB_18057f59f;
      local_res8 = piVar4 + 0x5c;
      piVar10 = piVar4 + 0xa3;
      piVar14 = piVar4 + 0x62;
      piVar20 = piVar4 + 0x6c;
      piVar11 = piVar4 + 0x5b;
      pbVar18 = (byte *)(piVar4 + 0xa5);
      puVar22 = (ulonglong *)(piVar4 + 0xaa);
      piVar23 = piVar4 + 0xa4;
      piVar21 = piVar4 + 0xb4;
      piVar19 = piVar4 + 0x12;
    }
    iVar8 = *piVar11 * 2 - *piVar10;
    piVar10 = piVar19 + 0x12;
    iVar16 = iVar8 - piVar19[1];
    if (((*(int **)(piVar19 + 8) == piVar10) && (*(int **)piVar14 == piVar20)) &&
       (piVar14 = (int *)*puVar22, piVar14 == piVar21)) {
      iVar8 = piVar19[1] - iVar8;
      if (-1 < iVar16) {
        iVar8 = iVar16;
      }
      if (iVar8 < 8) {
        iVar8 = piVar19[2] + *local_res8 * -2 + *piVar23;
        *piVar23 = *piVar23 - iVar8;
        if (piVar14 != (int *)0x0) {
          piVar14[2] = piVar14[2] - iVar8;
        }
        if ((ulonglong)((longlong)piVar15 + (-0x360 - (longlong)piVar4)) < 0x48) {
          piVar4[0x92] = piVar4[0x92] - iVar8;
          piVar4[200] = piVar4[200] - iVar8;
        }
        *pbVar18 = *pbVar18 | 4;
        piVar10 = (int *)*puVar22;
        if (piVar10 != (int *)0x0) {
          *(byte *)(piVar10 + 3) = *(byte *)(piVar10 + 3) | 4;
        }
      }
    }
  }
LAB_18057f59f:
  if ((iVar13 != 0) && (piVar4 < piVar15)) {
    piVar14 = piVar4 + 1;
    uVar12 = (longlong)piVar15 + (-1 - (longlong)piVar4);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar12;
    piVar10 = SUB168(ZEXT816(0xe38e38e38e38e38f) * auVar6,0);
    lVar17 = uVar12 / 0x48 + 1;
    do {
      if (((*(byte *)(piVar14 + 2) & 4) == 0) && (lVar5 = *(longlong *)(piVar14 + 9), lVar5 != 0)) {
        uVar9 = (*(int *)(lVar5 + 8) - *(int *)(lVar5 + 4)) + *piVar14;
        piVar10 = (int *)(ulonglong)uVar9;
        piVar14[1] = uVar9;
        iVar13 = iVar13 + -1;
        *(byte *)(piVar14 + 2) = *(byte *)(piVar14 + 2) | 4;
      }
      piVar14 = piVar14 + 0x12;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if ((iVar13 != 0) && (piVar4 < piVar15)) {
      piVar14 = piVar4 + -0x12;
      do {
        piVar10 = piVar14;
        if ((*(byte *)(piVar14 + 0x15) & 4) == 0) {
          for (; (piVar4 <= piVar10 && ((*(byte *)(piVar10 + 3) & 4) == 0));
              piVar10 = piVar10 + -0x12) {
          }
          for (piVar20 = piVar14 + 0x24; (piVar20 < piVar15 && ((*(byte *)(piVar20 + 3) & 4) == 0));
              piVar20 = piVar20 + 0x12) {
          }
          if (piVar10 < piVar4) {
            if (piVar20 < piVar15) {
              if (piVar4 <= piVar10) goto LAB_18057f69c;
              piVar14[0x14] = (piVar14[0x13] - piVar20[1]) + piVar20[2];
            }
          }
          else {
LAB_18057f69c:
            if (piVar20 < piVar15) {
              sVar3 = (short)*piVar10;
              iVar13 = piVar10[2];
              if ((short)*piVar20 == sVar3) {
                piVar14[0x14] = iVar13;
                goto LAB_18057f6dd;
              }
              iVar8 = FUN_1805753e0((int)(short)piVar14[0x12] - (int)sVar3,piVar20[2] - iVar13,
                                    (int)(short)*piVar20 - (int)sVar3);
              iVar8 = iVar8 + iVar13;
            }
            else {
              iVar8 = (piVar14[0x13] - piVar10[1]) + piVar10[2];
            }
            piVar14[0x14] = iVar8;
          }
        }
LAB_18057f6dd:
        piVar10 = piVar14 + 0x24;
        piVar14 = piVar14 + 0x12;
      } while (piVar10 < piVar15);
    }
  }
  return piVar10;
}



