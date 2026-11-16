// FUN_180585e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180585e90 */

void FUN_180585e90(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  
  lVar6 = 0x10;
  if (param_3 != 0) {
    lVar6 = 0x14;
  }
  iVar2 = *(int *)(lVar6 + param_2);
  lVar6 = 8;
  if (param_3 != 0) {
    lVar6 = 0xc;
  }
  iVar5 = *(int *)(lVar6 + param_2);
  piVar13 = (int *)(param_1 + 0x44 + (longlong)param_3 * 0x204);
  if ((piVar13[0x7f] == iVar5) && (piVar13[0x80] == iVar2)) {
    return;
  }
  piVar13[0x7f] = iVar5;
  lVar6 = 0;
  piVar13[0x80] = iVar2;
  uVar16 = 0;
  if (*(uint *)(param_1 + 800) == 0) {
LAB_180585f50:
    if (lVar6 == 0) goto LAB_180585f26;
    iVar14 = 0x28;
    lVar6 = (longlong)*(int *)(lVar6 + 0xc) * (longlong)iVar5;
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x18);
    if (((uVar3 != 0) &&
        (uVar1 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x18),
        uVar1 <= uVar3)) && (iVar14 = 0x28, 5 < uVar1)) {
      iVar14 = 0x34;
    }
    uVar3 = (uint)((ulonglong)((lVar6 >> 0x3f) + 0x8000 + lVar6) >> 0x10);
    if ((uVar3 == (iVar14 + uVar3 & 0xffffffc0)) || (param_3 != 1)) goto LAB_180585f26;
    iVar4 = FUN_1805753e0(iVar5);
    iVar14 = *(int *)(param_1 + 0x40);
    if (*(uint *)(param_1 + 800) != 0) {
      uVar16 = (ulonglong)*(uint *)(param_1 + 800);
      piVar15 = (int *)(param_1 + 0x340);
      do {
        iVar12 = piVar15[-1];
        if (piVar15[-1] < iVar14) {
          iVar12 = iVar14;
        }
        iVar14 = -*piVar15;
        if (-*piVar15 < iVar12) {
          iVar14 = iVar12;
        }
        uVar16 = uVar16 - 1;
        piVar15 = piVar15 + 9;
      } while (uVar16 != 0);
    }
    lVar6 = (longlong)(iVar4 - iVar5) * (longlong)iVar14;
    iVar14 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
    if ((iVar14 < -0x7f) || (0x7f < iVar14)) goto LAB_180585f26;
    *piVar13 = iVar4;
    piVar13[1] = iVar2;
    iVar5 = iVar4;
  }
  else {
    pbVar9 = (byte *)(param_1 + 0x344);
    do {
      if ((*pbVar9 & 0x10) != 0) {
        lVar6 = param_1 + (uVar16 * 9 + 0xc9) * 4;
        goto LAB_180585f50;
      }
      uVar3 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar3;
      pbVar9 = pbVar9 + 0x24;
    } while (uVar3 < *(uint *)(param_1 + 800));
LAB_180585f26:
    *piVar13 = iVar5;
    piVar13[1] = iVar2;
    if (param_3 == 0) {
      *(int *)(param_1 + 0x10) = iVar5;
      *(int *)(param_1 + 0x18) = iVar2;
      goto LAB_18058604d;
    }
  }
  *(int *)(param_1 + 0x14) = iVar5;
  *(int *)(param_1 + 0x1c) = iVar2;
LAB_18058604d:
  if (piVar13[2] != 0) {
    uVar16 = 0;
    do {
      uVar3 = (int)uVar16 + 1;
      iVar14 = (int)((ulonglong)
                     ((longlong)piVar13[uVar16 * 3 + 3] * (longlong)iVar5 +
                     ((longlong)piVar13[uVar16 * 3 + 3] * (longlong)iVar5 >> 0x3f) + 0x8000) >> 0x10
                    );
      piVar13[uVar16 * 3 + 4] = iVar14;
      piVar13[uVar16 * 3 + 5] = iVar14;
      uVar16 = (ulonglong)uVar3;
    } while (uVar3 < (uint)piVar13[2]);
  }
  lVar6 = (longlong)iVar5;
  *(bool *)(piVar13 + 0x35) =
       (int)((ulonglong)(piVar13[0x34] * lVar6 + (piVar13[0x34] * lVar6 >> 0x3f) + 0x8000) >> 0x10)
       < 0x28;
  if (param_3 == 1) {
    uVar16 = 0;
    uVar3 = 0;
    if (piVar13[0x36] != 0) {
      do {
        lVar10 = piVar13[uVar16 * 9 + 0x37] * lVar6;
        lVar11 = piVar13[uVar16 * 9 + 0x3a] * lVar6;
        iVar14 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) + iVar2;
        piVar13[uVar16 * 9 + 0x38] = iVar14;
        iVar5 = (int)((ulonglong)((lVar11 >> 0x3f) + lVar11 + 0x8000) >> 0x10) + iVar2;
        piVar13[uVar16 * 9 + 0x3b] = iVar5;
        piVar13[uVar16 * 9 + 0x3c] = iVar5;
        uVar3 = piVar13[uVar16 * 9 + 0x3f];
        lVar10 = (piVar13[uVar16 * 9 + 0x37] - piVar13[uVar16 * 9 + 0x3a]) * lVar6;
        piVar13[uVar16 * 9 + 0x39] = iVar14;
        piVar13[uVar16 * 9 + 0x3f] = uVar3 & 0xfffffffe;
        iVar5 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
        if (iVar5 + 0x30U < 0x61) {
          iVar4 = -iVar5;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          if (iVar4 < 0x20) {
            iVar12 = 0;
          }
          else {
            iVar12 = 0x40;
            if (iVar4 < 0x30) {
              iVar12 = 0x20;
            }
          }
          uVar8 = iVar14 + 0x20U & 0xffffffc0;
          piVar13[uVar16 * 9 + 0x39] = uVar8;
          iVar14 = -iVar12;
          if (-1 < iVar5) {
            iVar14 = iVar12;
          }
          piVar13[uVar16 * 9 + 0x3c] = uVar8 - iVar14;
          piVar13[uVar16 * 9 + 0x3f] = uVar3 & 0xfffffffe | 1;
        }
        uVar3 = piVar13[0x36];
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar8;
      } while (uVar8 < uVar3);
    }
    uVar16 = 0;
    if (uVar3 != 0) {
      do {
        if ((((byte)piVar13[uVar16 * 9 + 0x3f] & 5) == 5) && (uVar7 = 0, uVar3 != 0)) {
          do {
            if ((((byte)piVar13[uVar7 * 9 + 0x3f] & 5) == 1) &&
               ((piVar13[uVar7 * 9 + 0x39] <= piVar13[uVar16 * 9 + 0x3c] &&
                (piVar13[uVar16 * 9 + 0x39] <= piVar13[uVar7 * 9 + 0x3c])))) {
              piVar13[uVar16 * 9 + 0x3f] = piVar13[uVar16 * 9 + 0x3f] & 0xfffffffe;
              break;
            }
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
          } while (uVar8 < uVar3);
        }
        uVar3 = piVar13[0x36];
        uVar8 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar8;
      } while (uVar8 < uVar3);
    }
  }
  return;
}



