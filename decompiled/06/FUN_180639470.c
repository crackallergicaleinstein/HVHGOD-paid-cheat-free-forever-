// FUN_180639470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180639470 */

undefined8 FUN_180639470(void)

{
  bool bVar1;
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
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  sbyte sVar19;
  byte bVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar29;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar30;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 in_ZMM3 [64];
  uint uVar53;
  double dVar54;
  undefined1 auVar55 [64];
  undefined1 in_ZMM5 [64];
  
  fVar29 = in_ZMM0._0_4_;
  auVar55._8_56_ = in_ZMM5._8_56_;
  auVar46._16_48_ = in_ZMM2._16_48_;
  if (DAT_180bb2128 == 0) {
    fVar16 = ABS(fVar29);
    if (0x7f7fffff < (uint)fVar16) {
      uVar30 = FUN_18062d920();
      return uVar30;
    }
    auVar55._0_8_ = (double)fVar29;
    dVar25 = ABS(auVar55._0_8_);
    auVar50._16_48_ = in_ZMM3._16_48_;
    auVar36._16_48_ = in_ZMM0._16_48_;
    if ((uint)fVar16 < 0x3f490fdc) {
      auVar46._0_16_ = auVar55._0_16_;
      if ((uint)fVar16 < 0x39000000) {
        if ((uint)fVar16 < 0x32000000) {
          return in_ZMM0._0_8_;
        }
        auVar47._8_56_ = auVar46._8_56_;
        auVar47._0_8_ = auVar55._0_8_ * auVar55._0_8_;
        auVar36._0_16_ = auVar47._0_16_;
        auVar37._8_56_ = auVar36._8_56_;
        auVar37._0_8_ = auVar47._0_8_ * auVar55._0_8_ * 0.3333333333333333 + auVar55._0_8_;
      }
      else {
        auVar38._16_48_ = auVar36._16_48_;
        auVar38._0_16_ = auVar46._0_16_;
        dVar25 = auVar55._0_8_ * auVar55._0_8_;
        auVar37._8_56_ = auVar38._8_56_;
        auVar37._0_8_ =
             auVar55._0_8_ +
             dVar25 * auVar55._0_8_ *
             ((dVar25 * -0.017203248047148168 + 0.3852960712639954) /
             ((dVar25 * 0.01844239256901656 + -0.5139650547885454) * dVar25 + 1.1558882143468838));
      }
      auVar45._4_60_ = auVar37._4_60_;
      auVar45._0_4_ = (float)auVar37._0_8_;
      return auVar45._0_8_;
    }
    auVar48._8_8_ = 0;
    auVar48._0_8_ = dVar25;
    if ((longlong)dVar25 < 0x4160000000000000) {
      uVar53 = (uint)(ABS(dVar25) * 0.6366197723675814 + 0.5);
      dVar54 = (double)(int)uVar53;
      auVar50._8_8_ = 0;
      auVar50._0_8_ = dVar54;
      auVar48._16_48_ = auVar46._16_48_;
      auVar49._8_56_ = auVar48._8_56_;
      auVar49._0_8_ = dVar25 - dVar54 * 1.5707963267341256;
      in_ZMM3._8_56_ = auVar50._8_56_;
      in_ZMM3._0_8_ = dVar54 * 6.077100506506192e-11;
      auVar39._0_16_ = auVar49._0_16_;
      auVar39._16_48_ = auVar36._16_48_;
      auVar40._8_56_ = auVar39._8_56_;
      auVar40._0_8_ = auVar49._0_8_ - in_ZMM3._0_8_;
    }
    else {
      uVar28 = ((ulonglong)dVar25 >> 0x34) - 0x3ff;
      lVar26 = -((uVar28 >> 3) - 0x86);
      uVar21 = (ulonglong)dVar25 & 0xfffffffffffff | 0x10000000000000;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)(&DAT_1806ba6b0 + lVar26);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar21;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = SUB168(auVar32 * auVar7,8);
      uVar17 = SUB168(auVar32 * auVar7,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(&UNK_1806ba6b8 + lVar26);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar21;
      uVar28 = uVar28 & 7;
      auVar14 = auVar2 * auVar8 + auVar14;
      uVar18 = auVar14._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(&UNK_1806ba6c0 + lVar26);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar21;
      uVar27 = auVar14._8_8_ + SUB168(auVar3 * auVar9,0);
      uVar24 = 0;
      bVar20 = (byte)(0x36 - uVar28) & 0x3f;
      uVar21 = uVar27 >> bVar20;
      bVar1 = (bool)(((0x36 - uVar28 & 0x3f) != 0) * ((uVar27 >> bVar20 - 1 & 1) != 0));
      if (bVar1) {
        uVar27 = ~uVar27;
        uVar18 = ~uVar18;
        uVar17 = ~uVar17;
        uVar24 = 0x8000000000000000;
      }
      uVar53 = (int)uVar21 + (uint)bVar1;
      sVar19 = (char)uVar28 + 10;
      uVar21 = (uVar27 << sVar19) >> sVar19;
      lVar22 = uVar28 - 0x36;
      lVar26 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar27 = uVar18;
      if (uVar21 == 0) {
        lVar26 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        lVar22 = uVar28 - 0x76;
        uVar27 = uVar17;
        uVar21 = uVar18;
      }
      lVar23 = lVar26 + -0x34;
      if (lVar23 < 0) {
        bVar20 = -(byte)lVar23;
        uVar21 = uVar21 << (bVar20 & 0x3f) | uVar27 >> (-(bVar20 - 0x40) & 0x3f);
      }
      else if (lVar23 != 0) {
        uVar21 = uVar21 >> ((byte)lVar23 & 0x3f);
      }
      dVar25 = (double)(uVar21 & 0xffefffffffffffff | uVar24 | lVar22 + lVar26 + 0x3ff << 0x34);
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar25;
      auVar41._16_48_ = auVar36._16_48_;
      auVar40._8_56_ = auVar41._8_56_;
      auVar40._0_8_ = dVar25 * 1.5707963267948966;
    }
    dVar25 = auVar40._0_8_;
    dVar54 = dVar25 * dVar25;
    auVar51._16_48_ = in_ZMM3._16_48_;
    auVar42._8_56_ = auVar40._8_56_;
    auVar42._0_8_ =
         dVar25 + dVar54 * dVar25 *
                  ((dVar54 * -0.017203248047148168 + 0.3852960712639954) /
                  ((dVar54 * 0.01844239256901656 + -0.5139650547885454) * dVar54 +
                  1.1558882143468838));
    if ((uVar53 & 1) == 1) {
      auVar51._0_16_ = ZEXT816(0xbff0000000000000);
      auVar52._8_56_ = auVar51._8_56_;
      auVar52._0_8_ = -1.0 / auVar42._0_8_;
      auVar42._16_48_ = auVar40._16_48_;
      auVar42._0_16_ = auVar52._0_16_;
    }
    auVar43._0_8_ = (double)(auVar42._0_8_ ^ (ulonglong)auVar55._0_8_ & 0x8000000000000000);
    auVar43._16_48_ = auVar42._16_48_;
    auVar43._8_8_ = auVar42._8_8_ ^ in_ZMM5._8_8_ & 0x8000000000000000;
    auVar44._4_60_ = auVar43._4_60_;
    auVar44._0_4_ = (float)auVar43._0_8_;
    return auVar44._0_8_;
  }
  fVar16 = ABS(fVar29);
  if (0x7f7fffff < (uint)fVar16) {
    uVar30 = FUN_18062d920();
    return uVar30;
  }
  dVar54 = (double)fVar29;
  dVar25 = ABS(dVar54);
  if ((uint)fVar16 < 0x3f490fdc) {
    if ((uint)fVar16 < 0x39000000) {
      if ((uint)fVar16 < 0x32000000) {
        return in_ZMM0._0_8_;
      }
      auVar31._0_8_ = dVar54 * dVar54 * dVar54 * 0.3333333333333333 + dVar54;
      auVar31._8_8_ = 0;
    }
    else {
      dVar25 = dVar54 * dVar54;
      auVar31._8_8_ = in_ZMM0._8_8_;
      auVar31._0_8_ =
           dVar25 * dVar54 *
           ((dVar25 * -0.017203248047148168 + 0.3852960712639954) /
           (dVar25 * (dVar25 * 0.01844239256901656 + -0.5139650547885454) + 1.1558882143468838)) +
           dVar54;
    }
    auVar35._0_4_ = (float)auVar31._0_8_;
    auVar35._4_12_ = auVar31._4_12_;
    return auVar35._0_8_;
  }
  if ((longlong)dVar25 < 0x41e921fb40000000) {
    auVar32 = vpmovsxdq_avx(ZEXT416((uint)(int)(ABS(dVar25) * 0.6366197723675814 + 0.5)));
    uVar53 = auVar32._0_4_;
    auVar32 = vshufps_avx(auVar32,auVar32,8);
    auVar32 = vcvtdq2pd_avx(auVar32);
    dVar25 = (-(auVar32._0_8_ * 1.5707963267341256) + dVar25) -
             auVar32._0_8_ * 6.077100506506192e-11;
  }
  else {
    uVar28 = ((ulonglong)dVar25 >> 0x34) - 0x3ff;
    lVar26 = -((uVar28 >> 3) - 0x86);
    uVar21 = (ulonglong)dVar25 & 0xfffffffffffff | 0x10000000000000;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(&DAT_1806ba6b0 + lVar26);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar21;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = SUB168(auVar4 * auVar10,8);
    uVar17 = SUB168(auVar4 * auVar10,0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = SUB168(*(undefined1 (*) [16])(&UNK_1806ba6b8 + lVar26),0);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar21;
    uVar28 = uVar28 & 7;
    auVar32 = vpsrldq_avx(*(undefined1 (*) [16])(&UNK_1806ba6b8 + lVar26),8);
    auVar15 = auVar5 * auVar11 + auVar15;
    uVar18 = auVar15._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auVar32._0_8_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar21;
    uVar27 = auVar15._8_8_ + SUB168(auVar6 * auVar12,0);
    uVar24 = 0;
    bVar20 = (byte)(0x36 - uVar28) & 0x3f;
    uVar21 = uVar27 >> bVar20;
    bVar1 = (bool)(((0x36 - uVar28 & 0x3f) != 0) * ((uVar27 >> bVar20 - 1 & 1) != 0));
    if (bVar1) {
      uVar27 = ~uVar27;
      uVar18 = ~uVar18;
      uVar17 = ~uVar17;
      uVar24 = 0x8000000000000000;
    }
    uVar53 = (int)uVar21 + (uint)bVar1;
    sVar19 = (char)uVar28 + 10;
    uVar21 = (uVar27 << sVar19) >> sVar19;
    lVar22 = uVar28 - 0x36;
    lVar26 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar27 = uVar18;
    if (uVar21 == 0) {
      lVar26 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      lVar22 = uVar28 - 0x76;
      uVar27 = uVar17;
      uVar21 = uVar18;
    }
    lVar23 = lVar26 + -0x34;
    if (lVar23 < 0) {
      bVar20 = -(byte)lVar23;
      uVar21 = uVar21 << (bVar20 & 0x3f) | uVar27 >> (-(bVar20 - 0x40) & 0x3f);
    }
    else if (lVar23 != 0) {
      uVar21 = uVar21 >> ((byte)lVar23 & 0x3f);
    }
    dVar25 = (double)(uVar21 & 0xffefffffffffffff | uVar24 | lVar22 + lVar26 + 0x3ff << 0x34) *
             1.5707963267948966;
  }
  dVar13 = dVar25 * dVar25;
  dVar25 = dVar13 * dVar25 *
           ((dVar13 * -0.017203248047148168 + 0.3852960712639954) /
           (dVar13 * (dVar13 * 0.01844239256901656 + -0.5139650547885454) + 1.1558882143468838)) +
           dVar25;
  if ((uVar53 & 1) == 1) {
    dVar25 = -1.0 / dVar25;
  }
  auVar33._0_8_ = (double)((ulonglong)dVar25 ^ (ulonglong)dVar54 & 0x8000000000000000);
  auVar33._8_8_ = in_ZMM0._8_8_ & 0x8000000000000000;
  auVar34._0_4_ = (float)auVar33._0_8_;
  auVar34._4_12_ = auVar33._4_12_;
  return auVar34._0_8_;
}



