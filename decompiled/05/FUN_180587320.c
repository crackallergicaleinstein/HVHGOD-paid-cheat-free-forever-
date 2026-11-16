// FUN_180587320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587320 */

void FUN_180587320(uint *param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint local_res20;
  int local_78;
  
  uVar14 = *param_1;
  if (uVar14 != 1) {
    uVar16 = 1;
    if (1 < uVar14) {
      do {
        if (uVar16 != 0) {
          piVar10 = param_2 + (ulonglong)uVar16 * 3;
          uVar14 = uVar16;
          do {
            uVar14 = uVar14 - 1;
            piVar1 = param_2 + (ulonglong)uVar14 * 3;
            if (param_2[(ulonglong)uVar14 * 3] <= *piVar10) break;
            uVar2 = *(undefined8 *)piVar10;
            iVar18 = piVar10[2];
            iVar20 = piVar1[1];
            iVar19 = piVar1[2];
            *piVar10 = *piVar1;
            piVar10[1] = iVar20;
            piVar10[2] = iVar19;
            piVar10 = piVar10 + -3;
            *(undefined8 *)piVar1 = uVar2;
            piVar1[2] = iVar18;
          } while (uVar14 != 0);
        }
        uVar14 = *param_1;
        uVar16 = uVar16 + 1;
      } while (uVar16 < uVar14);
    }
    iVar18 = *param_2;
    local_res20 = 0;
    uVar16 = 0;
    uVar17 = 1;
    if (1 < uVar14) {
      uVar13 = 2;
      local_78 = iVar18;
      do {
        iVar19 = 0;
        if (param_3 < param_2[(ulonglong)uVar17 * 3] - iVar18) {
LAB_180587434:
          uVar12 = (ulonglong)uVar16;
          if ((uVar16 < uVar17) && (7 < uVar17 - uVar16)) {
            uVar14 = uVar16 + 2;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar25 = 0;
            iVar18 = 0;
            iVar19 = 0;
            iVar20 = 0;
            iVar21 = 0;
            uVar15 = uVar12;
            do {
              iVar3 = param_2[(ulonglong)uVar14 * 3];
              param_2[(ulonglong)uVar14 * 3] = 0;
              iVar4 = param_2[(ulonglong)(uVar14 + 1) * 3];
              param_2[(ulonglong)(uVar14 + 1) * 3] = 0;
              iVar5 = param_2[(ulonglong)(uVar14 - 1) * 3];
              uVar11 = (int)uVar15 + 8;
              uVar12 = (ulonglong)uVar11;
              param_2[(ulonglong)(uVar14 - 1) * 3] = 0;
              iVar6 = param_2[uVar15 * 3];
              iVar7 = param_2[(ulonglong)(uVar14 + 5) * 3];
              param_2[uVar15 * 3] = 0;
              iVar8 = param_2[(ulonglong)(uVar14 + 4) * 3];
              iVar22 = iVar22 + iVar6;
              iVar23 = iVar23 + iVar5;
              iVar24 = iVar24 + iVar3;
              iVar25 = iVar25 + iVar4;
              param_2[(ulonglong)(uVar14 + 4) * 3] = 0;
              param_2[(ulonglong)(uVar14 + 5) * 3] = 0;
              iVar3 = param_2[(ulonglong)(uVar14 + 3) * 3];
              param_2[(ulonglong)(uVar14 + 3) * 3] = 0;
              uVar9 = uVar14 + 2;
              iVar4 = param_2[(ulonglong)uVar9 * 3];
              uVar14 = uVar14 + 8;
              param_2[(ulonglong)uVar9 * 3] = 0;
              iVar18 = iVar18 + iVar4;
              iVar19 = iVar19 + iVar3;
              iVar20 = iVar20 + iVar8;
              iVar21 = iVar21 + iVar7;
              uVar15 = uVar12;
            } while (uVar11 < uVar17 - (uVar17 - uVar16 & 7));
            iVar19 = iVar18 + iVar22 + iVar20 + iVar24 + iVar19 + iVar23 + iVar21 + iVar25;
            uVar16 = local_res20;
          }
          iVar18 = 0;
          iVar20 = 0;
          uVar14 = (uint)uVar12;
          if (uVar14 < uVar17) {
            if (uVar17 - uVar14 < 2) {
LAB_1805875ec:
              iVar19 = iVar19 + param_2[uVar12 * 3];
              uVar14 = uVar14 + 1;
              param_2[uVar12 * 3] = 0;
            }
            else {
              piVar10 = param_2 + uVar12 * 3;
              uVar9 = ((uVar17 - uVar14) - 2 >> 1) + 1;
              uVar15 = (ulonglong)uVar9;
              uVar14 = uVar14 + uVar9 * 2;
              uVar12 = uVar12 + (ulonglong)uVar9 * 2;
              do {
                iVar18 = iVar18 + *piVar10;
                iVar20 = iVar20 + piVar10[3];
                *piVar10 = 0;
                piVar10[3] = 0;
                piVar10 = piVar10 + 6;
                uVar15 = uVar15 - 1;
              } while (uVar15 != 0);
              if (uVar14 < uVar17) goto LAB_1805875ec;
            }
            iVar19 = iVar19 + iVar20 + iVar18;
          }
          param_2[(ulonglong)uVar16 * 3] = iVar19 / (int)uVar14;
          uVar14 = *param_1;
          if (uVar17 < uVar14 - 1) {
            local_78 = param_2[(ulonglong)uVar13 * 3];
            iVar18 = local_78;
            uVar16 = uVar13;
            local_res20 = uVar13;
          }
          else {
            iVar18 = local_78;
          }
        }
        else if (uVar17 == uVar14 - 1) {
          uVar17 = uVar17 + 1;
          uVar13 = uVar13 + 1;
          goto LAB_180587434;
        }
        uVar17 = uVar17 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar17 < uVar14);
    }
    uVar17 = 1;
    uVar16 = 1;
    uVar12 = 1;
    if (1 < uVar14) {
      do {
        piVar10 = param_2 + (ulonglong)uVar16 * 3;
        uVar15 = uVar12;
        if (param_2[(ulonglong)uVar16 * 3] != 0) {
          iVar18 = piVar10[1];
          uVar15 = (ulonglong)((int)uVar12 + 1);
          param_2[uVar12 * 3] = *piVar10;
          (param_2 + uVar12 * 3)[1] = iVar18;
          param_2[uVar12 * 3 + 2] = piVar10[2];
        }
        uVar17 = (uint)uVar15;
        uVar16 = uVar16 + 1;
        uVar12 = uVar15;
      } while (uVar16 < *param_1);
    }
    *param_1 = uVar17;
  }
  return;
}



