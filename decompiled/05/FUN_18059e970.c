// FUN_18059e970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e970 */

undefined8 FUN_18059e970(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong lVar18;
  int local_60 [4];
  int local_50;
  int local_4c;
  int local_48 [4];
  int local_38;
  int local_34;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  puVar16 = *(undefined8 **)(param_1 + 0x20);
  piVar1 = (int *)(lVar3 + 0x2c);
  if (*(undefined8 **)(param_1 + 0x28) < puVar16 + 6) {
    return 0xa1;
  }
  lVar14 = 0;
  iVar15 = -0x80000000;
  lVar18 = 6;
  iVar13 = 0x7fffffff;
  *(undefined1 *)(lVar3 + 0x3c) = 1;
  do {
    pcVar4 = (char *)*puVar16;
    piVar17 = (int *)((longlong)local_60 + lVar14);
    if (*pcVar4 == '\x1e') {
      iVar6 = FUN_1805a1430(pcVar4,*(undefined8 *)(param_1 + 0x10),0,piVar17);
    }
    else {
      iVar6 = FUN_1805a12f0(pcVar4,*(undefined8 *)(param_1 + 0x10));
      if (iVar6 < 0x8000) {
        *piVar17 = 0;
        iVar6 = iVar6 << 0x10;
      }
      else {
        lVar12 = 5;
        iVar7 = 5;
        do {
          if (iVar6 < (int)(&DAT_180670c70)[lVar12]) break;
          iVar7 = iVar7 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < 10);
        iVar8 = (&DAT_180670c5c)[lVar12];
        if (iVar6 / iVar8 < 0x8000) {
          *piVar17 = iVar7 + -5;
          iVar6 = FUN_180573310(iVar6,iVar8);
        }
        else {
          uVar2 = (&DAT_180670c60)[lVar12];
          *piVar17 = iVar7 + -4;
          iVar6 = FUN_180573310(iVar6,uVar2);
        }
      }
    }
    puVar16 = puVar16 + 1;
    *(int *)((longlong)local_48 + lVar14) = iVar6;
    if (iVar6 != 0) {
      iVar6 = *(int *)((longlong)local_60 + lVar14);
      iVar7 = iVar6;
      if (iVar6 <= iVar15) {
        iVar7 = iVar15;
      }
      iVar15 = iVar7;
      if (iVar6 < iVar13) {
        iVar13 = iVar6;
      }
    }
    lVar14 = lVar14 + 4;
    lVar18 = lVar18 + -1;
    if (lVar18 == 0) {
      if ((iVar15 + 9U < 10) && ((uint)(iVar15 - iVar13) < 10)) {
        iVar13 = 0;
        if (local_48[0] != 0) {
          iVar6 = (int)(&DAT_180670c70)[iVar15 - local_60[0]] >> 1;
          if (local_48[0] < 0) {
            if (iVar6 + -0x80000000 < local_48[0]) {
              iVar13 = local_48[0] - iVar6;
            }
            else {
              iVar13 = -0x80000000;
            }
          }
          else {
            iVar13 = local_48[0] + iVar6;
            if (0x7fffffff - iVar6 <= local_48[0]) {
              iVar13 = 0x7fffffff;
            }
          }
          iVar13 = iVar13 / (int)(&DAT_180670c70)[iVar15 - local_60[0]];
        }
        iVar6 = 0;
        if (local_48[1] != 0) {
          iVar7 = (int)(&DAT_180670c70)[iVar15 - local_60[1]] >> 1;
          if (local_48[1] < 0) {
            if (iVar7 + -0x80000000 < local_48[1]) {
              iVar6 = local_48[1] - iVar7;
            }
            else {
              iVar6 = -0x80000000;
            }
          }
          else {
            iVar6 = local_48[1] + iVar7;
            if (0x7fffffff - iVar7 <= local_48[1]) {
              iVar6 = 0x7fffffff;
            }
          }
          iVar6 = iVar6 / (int)(&DAT_180670c70)[iVar15 - local_60[1]];
        }
        iVar7 = 0;
        if (local_48[2] != 0) {
          iVar8 = (int)(&DAT_180670c70)[iVar15 - local_60[2]] >> 1;
          if (local_48[2] < 0) {
            if (iVar8 + -0x80000000 < local_48[2]) {
              iVar7 = local_48[2] - iVar8;
            }
            else {
              iVar7 = -0x80000000;
            }
          }
          else {
            iVar7 = local_48[2] + iVar8;
            if (0x7fffffff - iVar8 <= local_48[2]) {
              iVar7 = 0x7fffffff;
            }
          }
          iVar7 = iVar7 / (int)(&DAT_180670c70)[iVar15 - local_60[2]];
        }
        iVar8 = 0;
        if (local_48[3] != 0) {
          iVar9 = (int)(&DAT_180670c70)[iVar15 - local_60[3]] >> 1;
          if (local_48[3] < 0) {
            if (iVar9 + -0x80000000 < local_48[3]) {
              iVar8 = local_48[3] - iVar9;
            }
            else {
              iVar8 = -0x80000000;
            }
          }
          else {
            iVar8 = local_48[3] + iVar9;
            if (0x7fffffff - iVar9 <= local_48[3]) {
              iVar8 = 0x7fffffff;
            }
          }
          iVar8 = iVar8 / (int)(&DAT_180670c70)[iVar15 - local_60[3]];
        }
        iVar9 = 0;
        if (local_38 != 0) {
          iVar10 = (int)(&DAT_180670c70)[iVar15 - local_50] >> 1;
          if (local_38 < 0) {
            if (iVar10 + -0x80000000 < local_38) {
              iVar9 = local_38 - iVar10;
            }
            else {
              iVar9 = -0x80000000;
            }
          }
          else {
            iVar9 = local_38 + iVar10;
            if (0x7fffffff - iVar10 <= local_38) {
              iVar9 = 0x7fffffff;
            }
          }
          iVar9 = iVar9 / (int)(&DAT_180670c70)[iVar15 - local_50];
        }
        iVar10 = 0;
        if (local_34 != 0) {
          iVar11 = (int)(&DAT_180670c70)[iVar15 - local_4c] >> 1;
          if (local_34 < 0) {
            if (iVar11 + -0x80000000 < local_34) {
              iVar10 = local_34 - iVar11;
            }
            else {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = local_34 + iVar11;
            if (0x7fffffff - iVar11 <= local_34) {
              iVar10 = 0x7fffffff;
            }
          }
          iVar10 = iVar10 / (int)(&DAT_180670c70)[iVar15 - local_4c];
        }
        *piVar1 = iVar13;
        *(int *)(lVar3 + 0x34) = iVar6;
        *(int *)(lVar3 + 0x30) = iVar7;
        *(int *)(lVar3 + 0x38) = iVar8;
        *(int *)(lVar3 + 0x44) = iVar9;
        *(int *)(lVar3 + 0x48) = iVar10;
        *(undefined4 *)(lVar3 + 0x40) = (&DAT_180670c70)[-(longlong)iVar15];
        cVar5 = FUN_180574ff0(piVar1);
        if (cVar5 != '\0') {
          return 0;
        }
      }
      piVar1[0] = 0x10000;
      piVar1[1] = 0;
      *(undefined4 *)(lVar3 + 0x34) = 0;
      *(undefined4 *)(lVar3 + 0x38) = 0x10000;
      *(undefined8 *)(lVar3 + 0x44) = 0;
      *(undefined4 *)(lVar3 + 0x40) = 1;
      return 0;
    }
  } while( true );
}



