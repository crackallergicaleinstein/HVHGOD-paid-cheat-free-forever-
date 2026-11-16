// FUN_180638e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180638e00 */

undefined8 FUN_180638e00(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  sbyte sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar24;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 extraout_var [56];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 in_ZMM0 [64];
  double dVar38;
  undefined1 auVar39 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 in_ZMM4 [64];
  double dVar43;
  uint auStack_38 [2];
  undefined1 auStack_30 [48];
  
  fVar23 = in_ZMM0._0_4_;
  auVar41._16_48_ = in_ZMM4._16_48_;
  auVar29._16_48_ = in_ZMM0._16_48_;
  if (DAT_180bb2128 != 0) {
    fVar9 = ABS(fVar23);
    if (0x7f7fffff < (uint)fVar9) {
      uVar24 = FUN_18062d870();
      return uVar24;
    }
    dVar43 = (double)fVar23;
    dVar18 = ABS(dVar43);
    if ((uint)fVar9 < 0x3f490fdc) {
      if ((uint)fVar9 < 0x3c000000) {
        if ((uint)fVar9 < 0x39000000) {
          return in_ZMM0._0_8_;
        }
        auVar25._0_8_ = -(dVar43 * dVar43 * dVar43 * 0.16666666666666666) + dVar43;
        auVar25._8_8_ = 0;
      }
      else {
        dVar18 = dVar43 * dVar43;
        auVar25._8_8_ = in_ZMM0._8_8_;
        auVar25._0_8_ =
             (dVar18 * (dVar18 * (dVar18 * 2.7557319223985893e-06 + -0.0001984126984126984) +
                       0.008333333333333333) + -0.16666666666666666) * dVar43 * dVar18 + dVar43;
      }
    }
    else {
      if ((uint)fVar9 < 0x4b800456) {
        auVar7 = vpmovsxdq_avx(ZEXT416((uint)(int)(dVar18 * 0.6366197723675814 + 0.5)));
        auVar40._0_8_ = auVar7._0_8_ & 3;
        auVar40._8_8_ = auVar7._8_8_ & 3;
        auVar7 = vshufps_avx(auVar7,auVar7,8);
        auVar7 = vcvtdq2pd_avx(auVar7);
        dVar18 = (-(auVar7._0_8_ * 1.5707963267341256) + dVar18) -
                 auVar7._0_8_ * 6.077100506506192e-11;
      }
      else {
        uVar22 = ((ulonglong)dVar18 >> 0x34) - 0x3ff;
        lVar19 = -((uVar22 >> 3) - 0x86);
        uVar14 = (ulonglong)dVar43 & 0xfffffffffffff | 0x10000000000000;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = *(ulonglong *)(&DAT_1806ba6b0 + lVar19);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar14;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = SUB168(auVar7 * auVar4,8);
        uVar10 = SUB168(auVar7 * auVar4,0);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = *(ulonglong *)(&UNK_1806ba6b8 + lVar19);
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14;
        uVar22 = uVar22 & 7;
        auVar8 = auVar2 * auVar5 + auVar8;
        uVar11 = auVar8._0_8_;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(&UNK_1806ba6c0 + lVar19);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        uVar20 = auVar8._8_8_ + SUB168(auVar3 * auVar6,0);
        uVar17 = 0;
        bVar13 = (byte)(0x36 - uVar22) & 0x3f;
        uVar14 = uVar20 >> bVar13;
        bVar1 = (bool)(((0x36 - uVar22 & 0x3f) != 0) * ((uVar20 >> bVar13 - 1 & 1) != 0));
        if (bVar1) {
          uVar20 = ~uVar20;
          uVar11 = ~uVar11;
          uVar10 = ~uVar10;
          uVar17 = 0x8000000000000000;
        }
        auVar40 = ZEXT416((int)uVar14 + (uint)bVar1 & 3);
        sVar12 = (char)uVar22 + 10;
        uVar14 = (uVar20 << sVar12) >> sVar12;
        lVar15 = uVar22 - 0x36;
        lVar19 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar20 = uVar11;
        if (uVar14 == 0) {
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          lVar15 = uVar22 - 0x76;
          uVar20 = uVar10;
          uVar14 = uVar11;
        }
        lVar16 = lVar19 + -0x34;
        if (lVar16 < 0) {
          bVar13 = -(byte)lVar16;
          uVar14 = uVar14 << (bVar13 & 0x3f) | uVar20 >> (-(bVar13 - 0x40) & 0x3f);
        }
        else if (lVar16 != 0) {
          uVar14 = uVar14 >> ((byte)lVar16 & 0x3f);
        }
        dVar18 = (double)(uVar14 & 0xffefffffffffffff | uVar17 | lVar15 + lVar19 + 0x3ff << 0x34) *
                 1.5707963267948966;
      }
      uVar10 = auVar40._0_8_;
      if ((uVar10 & 1) == 1) {
        uVar11 = 0x3ff0000000000000;
        dVar18 = dVar18 * dVar18;
        dVar18 = (dVar18 * (dVar18 * (dVar18 * -2.755731922398589e-07 + 2.4801587301587298e-05) +
                           -0.0013888888888888887) + 0.041666666666666664) * dVar18 * dVar18 +
                 dVar18 * -0.5 + 1.0;
      }
      else {
        dVar38 = dVar18 * dVar18;
        dVar18 = (dVar38 * (dVar38 * (dVar38 * 2.7557319223985893e-06 + -0.0001984126984126984) +
                           0.008333333333333333) + -0.16666666666666666) * dVar18 * dVar38 + dVar18;
        uVar11 = 0;
      }
      auVar25._0_8_ =
           (double)(~(ulonglong)dVar43 & 0x8000000000000000 ^
                   (ulonglong)dVar18 ^
                   ~-(ulonglong)(uVar10 == 2 || uVar10 == 3) & 0x8000000000000000);
      auVar25._8_8_ =
           ~in_ZMM0._8_8_ & 0x8000000000000000 ^
           uVar11 ^ ~-(ulonglong)(auVar40._8_8_ == 2 || auVar40._8_8_ == 3) & 0x8000000000000000;
    }
    auVar26._0_4_ = (float)auVar25._0_8_;
    auVar26._4_12_ = auVar25._4_12_;
    return auVar26._0_8_;
  }
  auVar30._16_48_ = in_ZMM2._16_48_;
  auVar30._0_16_ = ZEXT816(0);
  fVar9 = ABS(fVar23);
  if (0x7f7fffff < (uint)fVar9) {
    uVar24 = FUN_18062d870();
    return uVar24;
  }
  auVar27._8_56_ = in_ZMM0._8_56_;
  auVar27._0_8_ = (double)fVar23;
  dVar18 = ABS(auVar27._0_8_);
  auVar39._8_56_ = auVar30._8_56_;
  if ((uint)fVar9 < 0x3f490fdc) {
    if ((uint)fVar9 < 0x3c000000) {
      if ((uint)fVar9 < 0x39000000) {
        return in_ZMM0._0_8_;
      }
      auVar28._0_8_ =
           auVar27._0_8_ - auVar27._0_8_ * auVar27._0_8_ * auVar27._0_8_ * 0.16666666666666666;
      auVar28._8_56_ = auVar27._8_56_;
    }
    else {
      dVar18 = auVar27._0_8_ * auVar27._0_8_;
      auVar28._0_8_ =
           auVar27._0_8_ +
           ((dVar18 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar18 * dVar18 +
           dVar18 * 0.008333333333333333 + -0.16666666666666666) * auVar27._0_8_ * dVar18;
      auVar28._8_56_ = auVar27._8_56_;
    }
    goto LAB_180638de6;
  }
  auVar30 = auVar27;
  if (auVar27._0_8_ != dVar18) {
    auVar39._0_8_ = 0.0 - auVar27._0_8_;
    auVar29._0_16_ = auVar39._0_16_;
    auVar30 = auVar29;
  }
  dVar43 = auVar30._0_8_;
  if ((uint)fVar9 < 0x4b742400) {
    auVar41._0_16_ = auVar30._0_16_;
    auStack_38[0] = (uint)(dVar43 * 0.6366197723675814 + 0.5);
    auVar31._16_48_ = auVar30._16_48_;
    dVar38 = (double)(int)auStack_38[0];
    auVar42._8_56_ = auVar41._8_56_;
    auVar42._0_8_ = dVar43 - dVar38 * 1.5707963267341256;
    auVar31._0_16_ = auVar42._0_16_;
    auVar32._8_56_ = auVar31._8_56_;
    auVar32._0_8_ = auVar42._0_8_ - dVar38 * 6.077100506506192e-11;
    uVar10 = (ulonglong)ABS(auVar32._0_8_) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar18 >> 0x34) - uVar10)) {
      dVar43 = auVar42._0_8_ - dVar38 * 6.077100506303966e-11;
      auVar33._8_8_ = auVar30._8_8_;
      auVar33._0_8_ = dVar43;
      auVar33._16_48_ = auVar31._16_48_;
      auVar32._8_56_ = auVar33._8_56_;
      auVar32._0_8_ =
           dVar43 - (dVar38 * 2.0222662487959506e-21 -
                    ((auVar42._0_8_ - dVar43) - dVar38 * 6.077100506303966e-11));
    }
    if (0x3f1 < uVar10) goto LAB_180638d0e;
    auVar34._16_48_ = auVar32._16_48_;
    if (uVar10 < 0x3df) {
      if ((auStack_38[0] & 1) != 0) {
        auVar32._0_16_ = ZEXT816(0x3ff0000000000000);
        auVar32._16_48_ = auVar34._16_48_;
      }
    }
    else {
      dVar43 = auVar32._0_8_;
      if ((auStack_38[0] & 1) == 0) {
        auVar32._0_8_ = dVar43 - dVar43 * 0.16666666666666666 * dVar43 * dVar43;
      }
      else {
        auVar34._0_16_ = ZEXT816(0x3ff0000000000000);
        auVar32._8_56_ = auVar34._8_56_;
        auVar32._0_8_ = 1.0 - dVar43 * dVar43 * 0.5;
      }
    }
  }
  else {
    auVar32._0_8_ = (double)__remainder_piby2d2f_forC(dVar43,auStack_30,auStack_38);
    auVar32._8_56_ = extraout_var;
LAB_180638d0e:
    dVar43 = auVar32._0_8_;
    dVar38 = dVar43 * dVar43;
    if ((auStack_38[0] & 1) == 0) {
      auVar32._0_8_ =
           dVar43 + ((dVar38 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar38 * dVar38 +
                    dVar38 * 0.008333333333333333 + -0.16666666666666666) * dVar43 * dVar38;
    }
    else {
      auVar35._16_48_ = auVar32._16_48_;
      auVar35._0_16_ = ZEXT816(0xbfe0000000000000);
      auVar32._8_56_ = auVar35._8_56_;
      auVar32._0_8_ =
           dVar38 * -0.5 + 1.0 +
           ((dVar38 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar38 * dVar38 +
           dVar38 * -0.0013888888888888887 + 0.041666666666666664) * dVar38 * dVar38;
    }
  }
  uVar21 = (uint)(auVar27._0_8_ != dVar18);
  auVar28 = auVar32;
  if ((auStack_38[0] >> 1 & uVar21) == 0 && (~(auStack_38[0] >> 1) & ~uVar21 & 1) == 0) {
    auVar36._16_48_ = auVar32._16_48_;
    auVar36._0_16_ = ZEXT816(0);
    auVar28._8_56_ = auVar36._8_56_;
    auVar28._0_8_ = 0.0 - auVar32._0_8_;
  }
LAB_180638de6:
  auVar37._4_60_ = auVar28._4_60_;
  auVar37._0_4_ = (float)auVar28._0_8_;
  return auVar37._0_8_;
}



