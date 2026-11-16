// FUN_1801e2620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e2620 */

longlong * FUN_1801e2620(longlong *param_1,ulonglong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  sbyte sVar28;
  bool bVar29;
  longlong lVar30;
  byte bVar31;
  uint uVar32;
  ulonglong uVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  longlong lVar42;
  uint uVar43;
  ulonglong uVar44;
  byte bVar45;
  bool bVar46;
  bool bVar47;
  
  iVar39 = -0x434;
  if (param_3 != 0) {
    iVar39 = param_3 - 0x435;
  }
  uVar33 = param_2;
  if (param_3 != 0) {
    uVar33 = param_2 | 0x10000000000000;
  }
  lVar42 = 0;
  bVar45 = ~(byte)uVar33 & 1;
  uVar33 = uVar33 * 4;
  if ((param_2 == 0) && (1 < param_3)) {
    lVar36 = 0;
    bVar47 = false;
  }
  else {
    lVar36 = 1;
    bVar47 = true;
  }
  bVar29 = false;
  bVar46 = false;
  if (iVar39 < 0) {
    uVar43 = ((uint)(iVar39 * -0xb2efb) >> 0x14) - (uint)(1 < -iVar39);
    uVar32 = uVar43 + iVar39;
    uVar35 = *(ulonglong *)(&DAT_18068e548 + (longlong)(int)-uVar32 * 0x10);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar35;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar33 + 2;
    lVar30 = SUB168(auVar7 * auVar19,8);
    uVar37 = *(ulonglong *)(&DAT_18068e540 + (longlong)(int)-uVar32 * 0x10);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar37;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar33 + 2;
    uVar41 = SUB168(auVar8 * auVar20,8);
    uVar38 = SUB168(auVar7 * auVar19,0) + uVar41;
    if (uVar38 < uVar41) {
      lVar30 = lVar30 + 1;
    }
    bVar31 = ((char)uVar43 - (char)(uVar32 * -0x12934f >> 0x13)) + 0x38;
    uVar41 = uVar38 >> (bVar31 & 0x3f) | lVar30 << 0x40 - (bVar31 & 0x3f);
    uVar38 = (uVar33 - lVar36) - 1;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar38;
    lVar36 = SUB168(auVar9 * auVar21,8);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar37;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar38;
    uVar38 = SUB168(auVar10 * auVar22,8);
    uVar40 = SUB168(auVar9 * auVar21,0) + uVar38;
    if (uVar40 < uVar38) {
      lVar36 = lVar36 + 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar33;
    lVar30 = SUB168(auVar11 * auVar23,8);
    uVar35 = uVar40 >> (bVar31 & 0x3f) | lVar36 << 0x40 - (bVar31 & 0x3f);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar37;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar33;
    uVar37 = SUB168(auVar12 * auVar24,8);
    uVar38 = SUB168(auVar11 * auVar23,0) + uVar37;
    if (uVar38 < uVar37) {
      lVar30 = lVar30 + 1;
    }
    uVar37 = uVar38 >> (bVar31 & 0x3f) | lVar30 << 0x40 - (bVar31 & 0x3f);
    if (uVar43 < 2) {
      bVar46 = true;
      if (bVar45 == 0) {
        uVar41 = uVar41 - 1;
      }
      bVar29 = bVar47;
      if (bVar45 == 0) {
        bVar29 = false;
      }
    }
    else if (uVar43 < 0x3f) {
      bVar31 = (char)uVar43 - 1;
      sVar28 = (bVar31 < 0x41) * ('@' - bVar31);
      bVar46 = (uVar33 << sVar28) >> sVar28 == 0;
      goto LAB_1801e297d;
    }
LAB_1801e296f:
    uVar33 = uVar37;
    bVar47 = bVar46;
    if (!bVar29) goto LAB_1801e297d;
LAB_1801e2aa1:
    iVar39 = 0;
    bVar31 = 0;
    uVar41 = uVar41 / 10;
    uVar37 = uVar35 / 10;
    uVar38 = uVar33;
    uVar40 = uVar35;
    if (uVar35 / 10 < uVar41) {
      do {
        uVar35 = uVar37;
        uVar33 = uVar38 / 10;
        bVar46 = false;
        if ((int)uVar40 == (int)uVar35 * 10) {
          bVar46 = bVar29;
        }
        bVar29 = bVar46;
        bVar46 = false;
        if (bVar31 == 0) {
          bVar46 = bVar47;
        }
        bVar47 = bVar46;
        iVar39 = iVar39 + 1;
        bVar31 = (char)uVar38 + (char)uVar33 * -10;
        uVar41 = uVar41 / 10;
        uVar37 = uVar35 / 10;
        uVar38 = uVar33;
        uVar40 = uVar35;
      } while (uVar35 / 10 < uVar41);
    }
    if ((bVar29) && (uVar37 = uVar35 / 10, uVar41 = uVar33, (int)uVar35 == (int)(uVar35 / 10) * 10))
    {
      do {
        uVar35 = uVar37;
        uVar33 = uVar41 / 10;
        iVar39 = iVar39 + 1;
        bVar47 = (bool)(bVar47 & bVar31 == 0);
        bVar31 = (char)uVar41 + (char)uVar33 * -10;
        uVar37 = uVar35 / 10;
        uVar41 = uVar33;
      } while ((int)uVar35 == (int)(uVar35 / 10) * 10);
    }
    if (((bVar47) && (bVar31 == 5)) && ((uVar33 & 1) == 0)) {
      bVar31 = 4;
    }
    if (((uVar33 != uVar35) || ((bVar45 != 0 && (bVar29)))) && (bVar31 < 5)) goto LAB_1801e2bdb;
  }
  else {
    uVar38 = uVar33 + 2;
    uVar32 = ((uint)(iVar39 * 0x13441) >> 0x12) - (uint)(3 < iVar39);
    lVar30 = (ulonglong)uVar32 * 0x10;
    bVar31 = ((char)(uVar32 * 0x12934f >> 0x13) - (char)iVar39) + ':' + (char)uVar32;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(&DAT_18068d308 + lVar30);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar38;
    lVar34 = SUB168(auVar1 * auVar13,8);
    uVar37 = *(ulonglong *)(&DAT_18068d300 + lVar30);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar38;
    uVar35 = SUB168(auVar2 * auVar14,8);
    uVar41 = SUB168(auVar1 * auVar13,0) + uVar35;
    if (uVar41 < uVar35) {
      lVar34 = lVar34 + 1;
    }
    uVar40 = (uVar33 - lVar36) - 1;
    uVar41 = uVar41 >> (bVar31 & 0x3f) | lVar34 << 0x40 - (bVar31 & 0x3f);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_18068d308 + lVar30);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar40;
    lVar36 = SUB168(auVar3 * auVar15,8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar37;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar40;
    uVar35 = SUB168(auVar4 * auVar16,8);
    uVar44 = SUB168(auVar3 * auVar15,0) + uVar35;
    if (uVar44 < uVar35) {
      lVar36 = lVar36 + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(&DAT_18068d308 + lVar30);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar33;
    lVar30 = SUB168(auVar5 * auVar17,8);
    uVar35 = uVar44 >> (bVar31 & 0x3f) | lVar36 << 0x40 - (bVar31 & 0x3f);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar37;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    uVar37 = SUB168(auVar6 * auVar18,8);
    uVar44 = SUB168(auVar5 * auVar17,0) + uVar37;
    if (uVar44 < uVar37) {
      lVar30 = lVar30 + 1;
    }
    uVar37 = uVar44 >> (bVar31 & 0x3f) | lVar30 << 0x40 - (bVar31 & 0x3f);
    if (0x15 < uVar32) goto LAB_1801e296f;
    if ((int)uVar33 != (int)(uVar33 / 5) * 5) {
      uVar43 = 0;
      if (bVar45 == 0) {
        uVar33 = uVar38 / 5;
        if ((int)uVar38 == (int)(uVar38 / 5) * 5) {
          do {
            uVar43 = uVar43 + 1;
            uVar38 = uVar33 / 5;
            iVar39 = (int)uVar33;
            uVar33 = uVar38;
          } while (iVar39 == (int)uVar38 * 5);
        }
        uVar41 = uVar41 - (uVar32 <= uVar43);
      }
      else {
        uVar33 = uVar40 / 5;
        if ((int)uVar40 == (int)uVar33 * 5) {
          do {
            uVar43 = uVar43 + 1;
            uVar38 = uVar33 / 5;
            iVar39 = (int)uVar33;
            uVar33 = uVar38;
          } while (iVar39 == (int)uVar38 * 5);
        }
        bVar29 = uVar32 <= uVar43;
      }
      goto LAB_1801e296f;
    }
    uVar43 = 0;
    uVar33 = uVar33 / 5;
    do {
      uVar43 = uVar43 + 1;
      uVar38 = uVar33 / 5;
      iVar39 = (int)uVar33;
      uVar33 = uVar38;
    } while (iVar39 == (int)uVar38 * 5);
    bVar46 = uVar32 <= uVar43;
LAB_1801e297d:
    iVar39 = 0;
    uVar33 = uVar37;
    bVar47 = true;
    if (bVar46) goto LAB_1801e2aa1;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar41;
    lVar36 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar25,8);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar35;
    lVar30 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar26,8);
    uVar38 = (uVar41 - lVar36 >> 1) + lVar36 >> 6;
    uVar40 = (uVar35 - lVar30 >> 1) + lVar30 >> 6;
    bVar47 = false;
    if (uVar40 < uVar38) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar37;
      lVar36 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar27,8);
      iVar39 = 2;
      uVar33 = (uVar37 - lVar36 >> 1) + lVar36 >> 6;
      bVar47 = 0x31 < (uint)((int)uVar37 + (int)uVar33 * -100);
      uVar41 = uVar38;
      uVar35 = uVar40;
    }
    uVar41 = uVar41 / 10;
    uVar37 = uVar35 / 10;
    uVar38 = uVar33;
    if (uVar35 / 10 < uVar41) {
      do {
        uVar35 = uVar37;
        uVar33 = uVar38 / 10;
        bVar47 = 4 < (uint)((int)uVar38 + (int)uVar33 * -10);
        iVar39 = iVar39 + 1;
        uVar41 = uVar41 / 10;
        uVar37 = uVar35 / 10;
        uVar38 = uVar33;
      } while (uVar35 / 10 < uVar41);
    }
    if ((uVar33 != uVar35) && (!bVar47)) goto LAB_1801e2bdb;
  }
  lVar42 = 1;
LAB_1801e2bdb:
  *(uint *)(param_1 + 1) = uVar32 + iVar39;
  *param_1 = lVar42 + uVar33;
  return param_1;
}



