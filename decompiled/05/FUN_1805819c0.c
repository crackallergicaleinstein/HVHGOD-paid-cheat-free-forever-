// FUN_1805819c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805819c0 */

void FUN_1805819c0(longlong param_1,int param_2,undefined4 param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int local_54;
  
  if ((param_2 == 1) && (puVar8 = (uint *)FUN_18057a3d0(param_3,param_5), puVar8 != (uint *)0x0)) {
    uVar10 = 0x3a6;
    uVar12 = 0;
    do {
      uVar9 = uVar10 + uVar12 >> 1;
      if ((uint)(&DAT_1808d40e0)[uVar9 * 2] < *puVar8) {
        uVar12 = uVar9 + 1;
      }
      else {
        if ((uint)(&DAT_1808d40e0)[uVar9 * 2] <= *puVar8) {
          uVar21 = *(uint *)(uVar9 * 8 + 0x1808d40e4);
          if (uVar21 == 0) {
            return;
          }
          uVar2 = uVar21 >> 1;
          uVar18 = uVar21 >> 3;
          uVar19 = uVar21 >> 2;
          if (((((uVar21 & 1) != 0) || ((uVar2 & 1) != 0)) && (1 < *(int *)(param_1 + 0x2c))) ||
             ((((uVar19 & 1) != 0 || ((uVar18 & 1) != 0)) && (2 < *(int *)(param_1 + 0x2c))))) {
            FUN_180580d90(param_1);
          }
          if ((((uVar21 & 1) != 0) && (uVar7 = *(uint *)(param_1 + 0x2c), 1 < (int)uVar7)) ||
             (((uVar19 & 1) != 0 && (uVar7 = *(uint *)(param_1 + 0x2c), 2 < (int)uVar7)))) {
            local_54 = 0;
            uVar3 = uVar21 & 0x10;
            iVar14 = 0x40;
            uVar4 = uVar21 & 0x40;
            if ((uVar19 & 1) == 0) {
              iVar5 = FUN_1805812d0(param_1);
            }
            else {
              iVar5 = FUN_180581390();
            }
            cVar1 = FUN_18057edd0(param_1,iVar5);
            if (cVar1 == '\0') {
              return;
            }
            piVar13 = *(int **)(param_1 + 0x38);
            lVar16 = (longlong)iVar5;
            iVar20 = piVar13[lVar16];
            iVar17 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar16 * 4) - iVar20;
            if (param_4 < iVar17) {
              return;
            }
            if (uVar7 != 0) {
              lVar11 = 0;
              lVar15 = *(longlong *)(param_1 + 0x40) - (longlong)piVar13;
              do {
                if (lVar11 != lVar16) {
                  iVar6 = iVar20 - *(int *)((longlong)piVar13 + lVar15);
                  if (((iVar6 < 0x40) && (iVar6 < iVar14)) && (*piVar13 < iVar20)) {
                    iVar14 = iVar6;
                  }
                }
                lVar11 = lVar11 + 1;
                piVar13 = piVar13 + 1;
              } while (lVar11 < (longlong)(ulonglong)uVar7);
            }
            iVar14 = 0x40 - iVar14;
            if ((uVar3 != 0) || (uVar4 != 0)) {
              if (((uVar21 & 1) == 0) && (uVar4 == 0)) {
                iVar5 = FUN_1805812d0(param_1);
              }
              iVar5 = *(int *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x40)) -
                      *(int *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x38));
              uVar7 = iVar14 + iVar20;
              if (((uVar19 & 1) != 0) && (uVar3 != 0)) {
                uVar7 = uVar7 + iVar17;
              }
              uVar7 = uVar7 & 0x8000003f;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xffffffc0) + 1;
              }
              if ((uVar7 == 0) && (iVar5 < 0xc0)) {
                local_54 = (int)((iVar5 + 0x20U & 0xffffffc0) - iVar5) / 2;
              }
            }
            if ((((uVar21 & 1) == 0) || (uVar3 == 0)) && (((uVar19 & 1) == 0 || (uVar4 == 0)))) {
              iVar5 = iVar14;
            }
            else {
              iVar5 = iVar14 + local_54;
            }
            if (((iVar5 != 0) && (-3 < iVar5)) && ((iVar5 < 0x43 || (iVar14 < 0x43)))) {
              iVar20 = iVar20 - ((int)(iVar17 + (iVar17 >> 0x1f & 7U)) >> 3);
              FUN_180587150(param_1,iVar20,iVar14);
              if (((uVar19 & 1) != 0) && (uVar3 != 0)) {
                FUN_180587150(param_1,iVar17 + iVar20,local_54);
              }
            }
          }
          if (((uVar2 & 1) == 0) || (uVar19 = *(uint *)(param_1 + 0x2c), (int)uVar19 < 2)) {
            if ((uVar18 & 1) == 0) {
              return;
            }
            uVar19 = *(uint *)(param_1 + 0x2c);
            if ((int)uVar19 < 3) {
              return;
            }
          }
          uVar7 = uVar21 & 0x80;
          uVar21 = uVar21 & 0x20;
          iVar14 = 0x40;
          if ((uVar18 & 1) == 0) {
            iVar5 = FUN_180581330(param_1);
          }
          else {
            iVar5 = FUN_180581410();
          }
          cVar1 = FUN_18057edd0(param_1,iVar5);
          if (cVar1 == '\0') {
            return;
          }
          piVar13 = *(int **)(param_1 + 0x40);
          lVar16 = (longlong)iVar5;
          iVar20 = piVar13[lVar16];
          iVar17 = iVar20 - *(int *)(*(longlong *)(param_1 + 0x38) + lVar16 * 4);
          if (param_4 < iVar17) {
            return;
          }
          if (uVar19 != 0) {
            lVar11 = 0;
            lVar15 = *(longlong *)(param_1 + 0x38) - (longlong)piVar13;
            do {
              if (lVar11 != lVar16) {
                iVar6 = *(int *)((longlong)piVar13 + lVar15) - iVar20;
                if (((iVar6 < 0x40) && (iVar6 < iVar14)) && (iVar20 < *piVar13)) {
                  iVar14 = iVar6;
                }
              }
              lVar11 = lVar11 + 1;
              piVar13 = piVar13 + 1;
            } while (lVar11 < (longlong)(ulonglong)uVar19);
          }
          iVar14 = 0x40 - iVar14;
          if ((uVar21 == 0) && (uVar7 == 0)) {
            iVar5 = 0;
          }
          else {
            if (((uVar2 & 1) == 0) && (uVar7 == 0)) {
              iVar5 = FUN_180581330(param_1);
            }
            iVar5 = *(int *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar5 * 4) -
                    *(int *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x38));
            uVar19 = iVar20 - iVar14;
            if (((uVar18 & 1) != 0) && (uVar21 != 0)) {
              uVar19 = uVar19 - iVar17;
            }
            uVar19 = uVar19 & 0x8000003f;
            if ((int)uVar19 < 0) {
              uVar19 = (uVar19 - 1 | 0xffffffc0) + 1;
            }
            if ((uVar19 == 0) && (iVar5 < 0xc0)) {
              iVar5 = (int)((iVar5 + 0x20U & 0xffffffc0) - iVar5) / 2;
            }
            else {
              iVar5 = 0;
            }
          }
          if ((((uVar2 & 1) == 0) || (uVar21 == 0)) && (((uVar18 & 1) == 0 || (uVar7 == 0)))) {
            iVar6 = iVar14;
          }
          else {
            iVar6 = iVar5 + iVar14;
          }
          if (iVar6 == 0) {
            return;
          }
          if (iVar6 < -2) {
            return;
          }
          if ((0x42 < iVar6) && (0x42 < iVar14)) {
            return;
          }
          iVar20 = ((int)((iVar17 >> 0x1f & 7U) + iVar17) >> 3) + iVar20;
          FUN_1805870d0(param_1,iVar20,iVar14);
          if ((uVar18 & 1) == 0) {
            return;
          }
          if (uVar21 == 0) {
            return;
          }
          FUN_1805870d0(param_1,iVar20 - iVar17,iVar5);
          return;
        }
        uVar10 = uVar9 - 1;
      }
    } while (uVar12 <= uVar10);
  }
  return;
}



