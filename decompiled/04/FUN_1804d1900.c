// FUN_1804d1900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d1900 */

int * FUN_1804d1900(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int *local_res10;
  int local_res18;
  int local_88;
  int *local_80;
  int local_78;
  int *local_68;
  int *local_58;
  
  iVar14 = param_3 + -1 + param_2[2];
  iVar13 = 0x40000000;
  local_78 = 0x40000000;
  local_res18 = 0x40000000;
  iVar14 = iVar14 - iVar14 % param_2[2];
  local_80 = (int *)0x0;
  iVar16 = *param_2;
  iVar10 = 0x40000000;
  if ((iVar16 < iVar14) || (iVar1 = param_2[1], iVar1 < param_4)) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return param_1;
  }
  local_58 = param_2 + 6;
  piVar15 = *(int **)local_58;
  iVar7 = *piVar15;
  if (iVar7 + iVar14 <= iVar16) {
    piVar9 = piVar15;
    piVar3 = local_58;
    iVar5 = iVar7;
    do {
      iVar12 = 0;
      iVar6 = 0;
      iVar11 = 0;
      piVar2 = piVar9;
      if (iVar5 < iVar5 + iVar14) {
        do {
          iVar10 = piVar2[1];
          if (iVar12 < iVar10) {
            piVar8 = *(int **)(piVar2 + 2);
            iVar4 = (iVar10 - iVar12) * iVar11;
            iVar13 = *piVar8;
            iVar12 = iVar10;
            if (*piVar2 < iVar5) {
              iVar11 = iVar11 + (iVar13 - iVar5);
            }
            else {
              iVar11 = iVar11 + (iVar13 - *piVar2);
            }
          }
          else {
            piVar8 = *(int **)(piVar2 + 2);
            iVar13 = *piVar8;
            iVar4 = iVar14 - iVar11;
            if (iVar11 + (iVar13 - *piVar2) <= iVar14) {
              iVar4 = iVar13 - *piVar2;
            }
            iVar11 = iVar11 + iVar4;
            iVar4 = (iVar12 - iVar10) * iVar4;
          }
          iVar6 = iVar6 + iVar4;
          piVar2 = piVar8;
        } while (iVar13 < iVar5 + iVar14);
        iVar10 = local_res18;
        iVar13 = local_78;
      }
      if (param_2[4] == 0) {
        if (iVar10 <= iVar12) {
          piVar3 = local_80;
          iVar12 = iVar10;
        }
        iVar10 = iVar12;
        local_res18 = iVar12;
        local_80 = piVar3;
      }
      else if ((param_4 + iVar12 <= iVar1) &&
              ((iVar12 < iVar10 || ((iVar12 == iVar10 && (iVar6 < iVar13)))))) {
        iVar10 = iVar12;
        iVar13 = iVar6;
        local_res18 = iVar12;
        local_80 = piVar3;
        local_78 = iVar6;
      }
      piVar3 = piVar9 + 2;
      piVar9 = *(int **)(piVar9 + 2);
      iVar5 = *piVar9;
    } while (iVar5 + iVar14 <= iVar16);
    if (local_80 != (int *)0x0) {
      local_88 = **(int **)local_80;
      goto LAB_1804d1adc;
    }
  }
  local_88 = 0;
LAB_1804d1adc:
  if (param_2[4] == 1) {
    local_68 = piVar15;
    if (iVar7 < iVar14) {
      do {
        local_68 = *(int **)(local_68 + 2);
      } while (*local_68 < iVar14);
    }
    if (local_68 != (int *)0x0) {
      piVar9 = *(int **)(piVar15 + 2);
      piVar3 = piVar15 + 2;
      iVar16 = *piVar9;
      local_res10 = piVar3;
      do {
        iVar10 = *local_68;
        iVar13 = iVar10 - iVar14;
        if (iVar16 <= iVar13) {
          do {
            local_58 = piVar3;
            piVar15 = piVar9;
            piVar3 = piVar15 + 2;
            piVar9 = *(int **)(piVar15 + 2);
            iVar16 = *piVar9;
          } while (iVar16 <= iVar13);
          local_res10 = piVar3;
        }
        iVar7 = 0;
        iVar5 = 0;
        iVar12 = 0;
        piVar2 = piVar15;
        if (*piVar15 < iVar10) {
          do {
            iVar6 = piVar2[1];
            if (iVar7 < iVar6) {
              piVar3 = *(int **)(piVar2 + 2);
              iVar4 = (iVar6 - iVar7) * iVar12;
              iVar11 = *piVar3;
              iVar7 = iVar6;
              if (*piVar2 < iVar13) {
                iVar12 = iVar12 + (iVar11 - iVar13);
              }
              else {
                iVar12 = iVar12 + (iVar11 - *piVar2);
              }
            }
            else {
              piVar3 = *(int **)(piVar2 + 2);
              iVar11 = *piVar3;
              iVar4 = iVar14 - iVar12;
              if ((iVar11 - *piVar2) + iVar12 <= iVar14) {
                iVar4 = iVar11 - *piVar2;
              }
              iVar12 = iVar12 + iVar4;
              iVar4 = (iVar7 - iVar6) * iVar4;
            }
            iVar5 = iVar5 + iVar4;
            piVar2 = piVar3;
          } while (iVar11 < iVar10);
          piVar3 = local_res10;
        }
        if (((param_4 + iVar7 <= iVar1) && (iVar7 <= local_res18)) &&
           (((iVar7 < local_res18 || (iVar5 < local_78)) ||
            ((iVar5 == local_78 && (iVar13 < local_88)))))) {
          local_80 = local_58;
          local_res18 = iVar7;
          local_88 = iVar13;
          local_78 = iVar5;
        }
        local_68 = *(int **)(local_68 + 2);
        iVar10 = local_res18;
      } while (local_68 != (int *)0x0);
    }
  }
  *param_1 = local_88;
  param_1[1] = iVar10;
  *(int **)(param_1 + 2) = local_80;
  return param_1;
}



