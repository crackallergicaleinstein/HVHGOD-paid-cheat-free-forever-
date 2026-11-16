// FUN_1805c07c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c07c0 */

void FUN_1805c07c0(int *param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  iVar9 = (int)param_3;
  lVar6 = (longlong)iVar9 * 0xcc + param_2;
  if ((param_1[4] & 8U) != 0) {
    return;
  }
  uVar3 = 0;
  lVar8 = (longlong)*(int *)(lVar6 + 0xcc);
  iVar11 = *param_1;
  uVar15 = (int)((ulonglong)(iVar11 * lVar8 + 0x8000 + (iVar11 * lVar8 >> 0x3f)) >> 0x10) +
           *(int *)(lVar6 + 0xd0);
  lVar4 = param_1[1] * lVar8;
  uVar10 = (uint)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
  if (iVar9 == 0) {
    if (*(char *)(param_4 + 0xc0) == '\0') {
LAB_1805c0995:
      param_1[2] = uVar15;
      param_1[4] = param_1[4] | 8;
      param_1[3] = uVar10;
      return;
    }
    if (*(char *)(param_4 + 0xc2) == '\0') goto LAB_1805c087d;
LAB_1805c09b6:
    bVar2 = true;
  }
  else {
    if (iVar9 == 1) {
      if (*(char *)(param_4 + 0xc1) == '\0') goto LAB_1805c0995;
      if (*(char *)(param_4 + 0xc3) != '\0') goto LAB_1805c09b6;
    }
LAB_1805c087d:
    bVar2 = false;
  }
  uVar7 = 0;
  iVar16 = 0;
  uVar17 = 0x40;
  param_1[3] = uVar10;
  if (iVar9 == 1) {
    iVar9 = *(int *)(param_2 + 0x1a0);
    iVar13 = iVar11 + param_1[1];
    lVar4 = param_2 + 0x1a4;
    if (iVar9 != 0) {
      do {
        iVar11 = iVar13 - *(int *)(lVar4 + 0xc);
        if (iVar11 < -*(int *)(param_2 + 0x9bc)) break;
        if (iVar13 <= *(int *)(lVar4 + 8) + *(int *)(param_2 + 0x9bc)) {
          if ((*(char *)(param_2 + 0x9c0) != '\0') || (iVar11 <= *(int *)(param_2 + 0x9b8))) {
            iVar16 = *(int *)(lVar4 + 0x10);
            uVar7 = 1;
            goto LAB_1805c08f8;
          }
          break;
        }
        lVar4 = lVar4 + 0x20;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar16 = 0;
LAB_1805c08f8:
      iVar11 = *param_1;
    }
    uVar5 = *(uint *)(param_2 + 0x3a4);
    uVar12 = 0;
    lVar4 = (ulonglong)uVar5 * 0x20 + 0x388 + param_2;
    if (uVar5 != 0) {
      do {
        iVar9 = *(int *)(lVar4 + 8) - iVar11;
        if (iVar9 < -*(int *)(param_2 + 0x9bc)) break;
        if (*(int *)(lVar4 + 0xc) - *(int *)(param_2 + 0x9bc) <= iVar11) {
          if ((*(char *)(param_2 + 0x9c0) != '\0') ||
             (uVar12 = 0, iVar9 < *(int *)(param_2 + 0x9b8))) {
            uVar12 = *(uint *)(lVar4 + 0x10);
            uVar7 = uVar7 | 2;
          }
          goto LAB_1805c0957;
        }
        lVar4 = lVar4 + -0x20;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar12 = 0;
    }
LAB_1805c0957:
    if (uVar7 == 1) {
      uVar12 = iVar16 - uVar10;
    }
    else {
      if (uVar7 != 2) {
        if (uVar7 != 3) {
          param_3 = param_3 & 0xffffffff;
          goto LAB_1805c0a2e;
        }
        param_1[3] = iVar16 - uVar12;
      }
    }
  }
  else {
LAB_1805c0a2e:
    piVar1 = *(int **)(param_1 + 6);
    iVar9 = (int)uVar10 >> 1;
    if (piVar1 != (int *)0x0) {
      if ((*(byte *)(piVar1 + 4) & 8) == 0) {
        FUN_1805c07c0(piVar1,param_2,param_3,param_4);
      }
      lVar8 = ((((param_1[1] >> 1) - (piVar1[1] >> 1)) - *piVar1) + *param_1) * lVar8;
      uVar15 = (((int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) + (piVar1[3] >> 1)) -
               iVar9) + piVar1[2];
    }
    param_1[2] = uVar15;
    param_1[3] = uVar10;
    if (*(char *)(param_4 + 0xc4) != '\0') {
      if ((int)uVar10 < 0x41) {
        if ((int)uVar10 < 0x20) {
          uVar3 = uVar15 + 0x20 & 0xffffffc0;
          if ((int)uVar10 < 1) {
            uVar15 = uVar3;
          }
          else {
            uVar5 = uVar10 + 0x20 + uVar15 & 0xffffffc0;
            iVar9 = (uVar5 - uVar10) - uVar15;
            iVar11 = uVar3 - uVar15;
            if (iVar11 < 0) {
              iVar11 = uVar15 - uVar3;
            }
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            if (iVar11 <= iVar9) {
              uVar5 = uVar3;
            }
            uVar15 = uVar5;
          }
        }
        else {
          uVar10 = 0x40;
          uVar15 = uVar15 + iVar9 & 0xffffffc0;
        }
      }
      else {
        uVar5 = *(uint *)(lVar6 + 0x10);
        iVar9 = uVar10 - uVar5;
        if (iVar9 < 0) {
          iVar9 = uVar5 - uVar10;
        }
        if ((iVar9 < 0x28) && (uVar10 = uVar5, (int)uVar5 < 0x30)) {
LAB_1805c0b58:
          uVar10 = uVar3 + 0x36;
        }
        else if (uVar10 < 0xc0) {
          uVar3 = uVar10 & 0xffffffc0;
          uVar10 = uVar10 & 0x3f;
          if (9 < uVar10) {
            if (uVar10 < 0x20) {
              uVar10 = uVar3 + 10;
              goto LAB_1805c0b69;
            }
            if (uVar10 < 0x36) goto LAB_1805c0b58;
          }
          uVar10 = uVar3 + uVar10;
        }
        else {
          uVar10 = uVar10 + 0x20 & 0xffffffc0;
        }
      }
    }
LAB_1805c0b69:
    param_1[3] = uVar10;
    uVar12 = uVar15 + 0x20 & 0xffffffc0;
    uVar10 = (uVar15 + 0x20 + uVar10 & 0xffffffc0) - uVar10;
    iVar11 = uVar10 - uVar15;
    iVar9 = -iVar11;
    if (iVar9 < 0) {
      iVar9 = iVar11;
    }
    iVar13 = uVar12 - uVar15;
    iVar11 = -iVar13;
    if (iVar11 < 0) {
      iVar11 = iVar13;
    }
    if (iVar9 < iVar11) {
      uVar12 = uVar10;
    }
  }
  puVar14 = (uint *)(param_1 + 2);
  *puVar14 = uVar12;
  if (bVar2) {
    if (0x3f < param_1[3]) {
      uVar17 = param_1[3] + 0x20U & 0xffffffc0;
    }
    if (uVar7 == 1) {
      *puVar14 = iVar16 - uVar17;
    }
    else if (uVar7 != 2) {
      if (uVar7 == 3) goto LAB_1805c0c01;
      iVar9 = (int)uVar17 >> 1;
      if ((uVar17 & 0x40) == 0) {
        *puVar14 = (iVar9 + uVar12 + 0x20 & 0xffffffc0) - iVar9;
      }
      else {
        *puVar14 = ((iVar9 + uVar12 & 0xffffffc0) + 0x20) - iVar9;
      }
    }
    param_1[3] = uVar17;
  }
LAB_1805c0c01:
  param_1[4] = param_1[4] | 8;
  return;
}



