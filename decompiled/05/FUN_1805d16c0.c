// FUN_1805d16c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d16c0 */

bool FUN_1805d16c0(longlong param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar12 = *(int *)(param_1 + 8);
  piVar15 = (int *)(lVar1 + (longlong)param_3 * 8);
  lVar13 = (longlong)param_2;
  piVar9 = (int *)(lVar1 + lVar13 * 8);
  iVar16 = iVar3 * *(int *)(lVar1 + lVar13 * 8) - iVar12;
  iVar4 = iVar3 * *piVar15 - iVar12;
  local_res10 = iVar3 * piVar9[1] - iVar12;
  iVar12 = iVar3 * piVar15[1] - iVar12;
  iVar3 = iVar16;
  iVar5 = iVar4;
  if (param_4 != 0) {
    iVar3 = local_res10;
    iVar5 = iVar12;
    iVar12 = iVar4;
    local_res10 = iVar16;
  }
  lVar1 = *(longlong *)(param_1 + 0x88);
  pbVar17 = (byte *)(lVar1 + lVar13);
  if ((*(byte *)(lVar1 + lVar13) & 4) != 0) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(lVar1 + lVar13) >> 5;
  }
  if ((*pbVar17 & 3) == 2) {
LAB_1805d19cb:
    *(undefined4 *)(param_1 + 0x38) = 0x14;
  }
  else {
    if ((*pbVar17 & 3) == 0) {
      if ((*(byte *)(lVar1 + param_3) & 3) == 1) {
        piVar15 = piVar15 + -2;
        iVar3 = iVar5;
        local_res10 = iVar12;
      }
      else {
        iVar3 = (iVar5 + iVar3) / 2;
        local_res10 = (iVar12 + local_res10) / 2;
      }
      piVar9 = piVar9 + -2;
      pbVar17 = pbVar17 + -1;
    }
    *(int *)(param_1 + 0x44) = local_res10;
    *(int *)(param_1 + 0x40) = iVar3;
    do {
      if (piVar15 <= piVar9) {
        cVar2 = FUN_1805d20d0(param_1,iVar3,local_res10);
        return cVar2 != '\0';
      }
      pbVar18 = pbVar17 + 1;
      piVar10 = piVar9 + 2;
      if ((pbVar17[1] & 3) == 0) {
        iVar4 = *(int *)(param_1 + 0xc) * piVar9[3] - *(int *)(param_1 + 8);
        iVar5 = *(int *)(param_1 + 0xc) * *piVar10 - *(int *)(param_1 + 8);
        piVar9 = piVar10;
        iVar12 = iVar4;
        if (param_4 == 0) {
          iVar12 = iVar5;
          iVar5 = iVar4;
        }
        while( true ) {
          if (piVar15 <= piVar9) {
            cVar2 = FUN_1805d1230(param_1,iVar12,iVar5,iVar3,local_res10);
            goto LAB_1805d19c5;
          }
          piVar10 = piVar9 + 2;
          pbVar17 = pbVar18 + 1;
          pbVar18 = pbVar18 + 1;
          iVar7 = *(int *)(param_1 + 0xc) * piVar9[3] - *(int *)(param_1 + 8);
          iVar4 = *(int *)(param_1 + 0xc) * *piVar10 - *(int *)(param_1 + 8);
          iVar16 = iVar7;
          if (param_4 == 0) {
            iVar16 = iVar4;
            iVar4 = iVar7;
          }
          if ((*pbVar17 & 3) == 1) break;
          if ((*pbVar17 & 3) != 0) goto LAB_1805d19cb;
          cVar2 = FUN_1805d1230(param_1,iVar12,iVar5,(iVar16 + iVar12) / 2,(iVar4 + iVar5) / 2);
          if (cVar2 != '\0') {
            return true;
          }
          piVar9 = piVar10;
          iVar12 = iVar16;
          iVar5 = iVar4;
        }
        cVar2 = FUN_1805d1230(param_1,iVar12,iVar5,iVar16,iVar4);
      }
      else if ((pbVar17[1] & 3) == 1) {
        iVar5 = *(int *)(param_1 + 0xc) * *piVar10 - *(int *)(param_1 + 8);
        iVar4 = *(int *)(param_1 + 0xc) * piVar9[3] - *(int *)(param_1 + 8);
        iVar12 = iVar4;
        if (param_4 == 0) {
          iVar12 = iVar5;
          iVar5 = iVar4;
        }
        cVar2 = FUN_1805d20d0(param_1,iVar12,iVar5);
      }
      else {
        if ((piVar15 < piVar9 + 4) || ((pbVar17[2] & 3) != 2)) goto LAB_1805d19cb;
        iVar12 = *(int *)(param_1 + 0xc);
        piVar8 = piVar9 + 6;
        iVar5 = *(int *)(param_1 + 8);
        pbVar18 = pbVar17 + 3;
        iVar6 = iVar12 * *piVar10 - iVar5;
        iVar11 = iVar12 * piVar9[3] - iVar5;
        iVar4 = iVar12 * piVar9[4] - iVar5;
        iVar14 = iVar12 * piVar9[5] - iVar5;
        iVar16 = iVar14;
        iVar7 = iVar6;
        if (param_4 != 0) {
          iVar16 = iVar4;
          iVar4 = iVar14;
          iVar7 = iVar11;
          iVar11 = iVar6;
        }
        if (piVar15 < piVar8) {
          cVar2 = FUN_1805d1440(param_1,iVar7,iVar11,iVar4,iVar16,iVar3,local_res10);
LAB_1805d19c5:
          if (cVar2 == '\0') {
            return false;
          }
          return true;
        }
        iVar6 = iVar12 * piVar9[7] - iVar5;
        iVar5 = iVar12 * *piVar8 - iVar5;
        iVar12 = iVar6;
        if (param_4 == 0) {
          iVar12 = iVar5;
          iVar5 = iVar6;
        }
        cVar2 = FUN_1805d1440(param_1,iVar7,iVar11,iVar4,iVar16,iVar12,iVar5);
        piVar10 = piVar8;
      }
      piVar9 = piVar10;
      pbVar17 = pbVar18;
    } while (cVar2 == '\0');
  }
  return true;
}



