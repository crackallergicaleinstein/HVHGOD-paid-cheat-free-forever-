// FUN_1805763d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805763d0 */

undefined8 FUN_1805763d0(ushort *param_1)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  
  iVar10 = 0;
  if ((param_1 == (ushort *)0x0) || (param_1[1] == 0)) {
LAB_180576580:
    uVar7 = 0;
  }
  else {
    puVar1 = *(uint **)(param_1 + 4);
    uVar11 = *puVar1;
    uVar8 = puVar1[1];
    puVar18 = puVar1 + 2;
    uVar13 = uVar11;
    uVar15 = uVar8;
    if (puVar18 < puVar1 + (ulonglong)param_1[1] * 2) {
      do {
        uVar5 = *puVar18;
        uVar4 = uVar5;
        if ((int)uVar13 <= (int)uVar5) {
          uVar4 = uVar13;
        }
        if ((int)uVar5 <= (int)uVar11) {
          uVar5 = uVar11;
        }
        uVar11 = uVar5;
        uVar13 = puVar18[1];
        uVar5 = uVar13;
        if ((int)uVar15 <= (int)uVar13) {
          uVar5 = uVar15;
        }
        if ((int)uVar13 <= (int)uVar8) {
          uVar13 = uVar8;
        }
        uVar8 = uVar13;
        puVar18 = puVar18 + 2;
        uVar13 = uVar4;
        uVar15 = uVar5;
      } while (puVar18 < puVar1 + (ulonglong)param_1[1] * 2);
      if ((((uVar4 != uVar11) && (uVar5 != uVar8)) && (-0x1000001 < (int)uVar4)) &&
         (((-0x1000001 < (int)uVar5 && ((int)uVar11 < 0x1000001)) && ((int)uVar8 < 0x1000001)))) {
        uVar19 = (ulonglong)*param_1;
        uVar13 = -uVar11;
        if ((int)-uVar11 < 0) {
          uVar13 = uVar11;
        }
        uVar20 = 0xffffffff;
        uVar11 = -uVar4;
        if ((int)-uVar4 < 0) {
          uVar11 = uVar4;
        }
        iVar16 = 0x1f;
        if ((uVar13 | uVar11) != 0) {
          for (; (uVar13 | uVar11) >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        iVar21 = 0;
        if (0 < iVar16 + -0xe) {
          iVar21 = iVar16 + -0xe;
        }
        iVar16 = 0x1f;
        if (uVar8 - uVar5 != 0) {
          for (; uVar8 - uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        iVar22 = 0;
        if (0 < iVar16 + -0xe) {
          iVar22 = iVar16 + -0xe;
        }
        if (uVar19 != 0) {
          puVar9 = *(ushort **)(param_1 + 0xc);
          do {
            iVar16 = (int)uVar20;
            uVar20 = (ulonglong)*puVar9;
            lVar6 = (longlong)(iVar16 + 1);
            if (lVar6 <= (longlong)uVar20) {
              iVar16 = (int)puVar1[uVar20 * 2] >> ((byte)iVar21 & 0x1f);
              iVar17 = (int)puVar1[uVar20 * 2 + 1] >> ((byte)iVar22 & 0x1f);
              do {
                lVar2 = lVar6 * 2;
                lVar3 = lVar6 * 2;
                lVar6 = lVar6 + 1;
                iVar14 = (int)puVar1[lVar2] >> ((byte)iVar21 & 0x1f);
                iVar12 = (int)puVar1[lVar3 + 1] >> ((byte)iVar22 & 0x1f);
                iVar10 = iVar10 + (iVar12 - iVar17) * (iVar14 + iVar16);
                iVar16 = iVar14;
                iVar17 = iVar12;
              } while (lVar6 <= (longlong)uVar20);
            }
            puVar9 = puVar9 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
          if (0 < iVar10) {
            return 1;
          }
          if (iVar10 < 0) goto LAB_180576580;
        }
      }
    }
    uVar7 = 2;
  }
  return uVar7;
}



