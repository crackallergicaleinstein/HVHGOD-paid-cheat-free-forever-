// FUN_180637540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180637540 */

undefined8
FUN_180637540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  float fVar4;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 extraout_var [56];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 in_ZMM2 [64];
  ulonglong uVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 in_ZMM4 [64];
  double dVar23;
  
  fVar4 = in_ZMM0._0_4_;
  auVar8._8_56_ = in_ZMM0._8_56_;
  auVar9._16_48_ = in_ZMM0._16_48_;
  auVar21._16_48_ = in_ZMM4._16_48_;
  if (DAT_180bb2128 != 0) {
    fVar1 = ABS(fVar4);
    if (0x7f7fffff < (uint)fVar1) {
      uVar5 = FUN_18062d710();
      return uVar5;
    }
    dVar23 = (double)fVar4;
    dVar2 = ABS(dVar23);
    if (0x3f490fdb < (uint)fVar1) {
      if ((uint)fVar1 < 0x4f490fdb) {
        auVar6 = vpmovsxdq_avx(ZEXT416((uint)(int)(ABS(dVar2) * 0.6366197723675814 + 0.5)));
        uVar20 = auVar6._0_8_ & 3;
        auVar6 = vshufps_avx(auVar6,auVar6,8);
        auVar6 = vcvtdq2pd_avx(auVar6);
        dVar23 = (-(auVar6._0_8_ * 1.5707963267341256) + dVar2) -
                 auVar6._0_8_ * 6.077100506506192e-11;
        uVar5 = 0;
      }
      else if ((uint)fVar1 < 0x4f490fdb) {
        uVar20 = FUN_18062d670(dVar2);
        dVar23 = extraout_XMM0_Qa_00;
        uVar5 = extraout_XMM0_Qb;
      }
      else {
        uVar20 = FUN_18062d480();
        dVar23 = extraout_XMM0_Qa_01;
        uVar5 = extraout_XMM0_Qb_00;
      }
      if ((uVar20 & 1) == 0) {
        dVar23 = dVar23 * dVar23;
        dVar23 = (dVar23 * (dVar23 * (dVar23 * -2.755731922398589e-07 + 2.4801587301587298e-05) +
                           -0.0013888888888888887) + 0.041666666666666664) * dVar23 * dVar23 +
                 (1.0 - dVar23 * 0.5);
        uVar5 = 0;
      }
      else {
        dVar2 = dVar23 * dVar23;
        dVar23 = (dVar2 * (dVar2 * (dVar2 * 2.7557319223985893e-06 + -0.0001984126984126984) +
                          0.008333333333333333) + -0.16666666666666666) * dVar23 * dVar2 + dVar23;
      }
      auVar6._0_8_ = (double)((ulonglong)dVar23 ^ (uVar20 + 1 >> 1) << 0x3f);
      auVar6._8_8_ = uVar5;
      auVar7._0_4_ = (float)auVar6._0_8_;
      auVar7._4_12_ = auVar6._4_12_;
      return auVar7._0_8_;
    }
    if (0x3bffffff < (uint)fVar1) {
      dVar23 = dVar23 * dVar23;
      dVar23 = (dVar23 * (dVar23 * (dVar23 * -2.755731922398589e-07 + 2.4801587301587298e-05) +
                         -0.0013888888888888887) + 0.041666666666666664) * dVar23 * dVar23 +
               (1.0 - dVar23 * 0.5);
      return CONCAT44((int)((ulonglong)dVar23 >> 0x20),(float)dVar23);
    }
    if ((uint)fVar1 < 0x39000000) {
      return SUB648(ZEXT464(0x3f800000),0);
    }
    dVar23 = -(dVar23 * dVar23 * 0.5) + 1.0;
    return CONCAT44((int)((ulonglong)dVar23 >> 0x20),(float)dVar23);
  }
  auVar15._16_48_ = in_ZMM2._16_48_;
  auVar15._0_16_ = ZEXT816(0);
  fVar1 = ABS(fVar4);
  if (0x7f7fffff < (uint)fVar1) {
    uVar5 = FUN_18062d710();
    return uVar5;
  }
  auVar8._0_8_ = (double)fVar4;
  dVar23 = ABS(auVar8._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    auVar14._8_8_ = in_ZMM0._8_8_;
    auVar14._0_8_ = auVar8._0_8_;
    auVar14._16_48_ = auVar15._16_48_;
    auVar15._8_56_ = auVar14._8_56_;
    auVar15._0_8_ = auVar8._0_8_ * auVar8._0_8_;
    uVar3 = 0;
  }
  else {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = dVar23;
    if ((uint)fVar1 < 0x48f42400) {
      uVar3 = (uint)(dVar23 * 0.6366197723675814 + 0.5);
      auVar15._0_8_ = (double)(int)uVar3;
      auVar15._8_8_ = 0;
      auVar22._8_56_ = auVar21._8_56_;
      auVar22._0_8_ = dVar23 - auVar15._0_8_ * 1.5707963267341256;
      auVar9._0_16_ = auVar22._0_16_;
      auVar8._8_56_ = auVar9._8_56_;
      auVar8._0_8_ = auVar22._0_8_ - auVar15._0_8_ * 6.077100506506192e-11;
      uVar20 = (ulonglong)ABS(auVar8._0_8_) >> 0x34;
      if (0xf < (longlong)(((ulonglong)dVar23 >> 0x34) - uVar20)) {
        dVar23 = auVar22._0_8_ - auVar15._0_8_ * 6.077100506303966e-11;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = dVar23;
        auVar10._16_48_ = auVar9._16_48_;
        auVar8._8_56_ = auVar10._8_56_;
        auVar8._0_8_ = dVar23 - (auVar15._0_8_ * 2.0222662487959506e-21 -
                                ((auVar22._0_8_ - dVar23) - auVar15._0_8_ * 6.077100506303966e-11));
      }
      if (uVar20 < 0x3f2) {
        auVar11._16_48_ = auVar8._16_48_;
        if (uVar20 < 0x3df) {
          if ((uVar3 & 1) == 0) {
            auVar8._0_16_ = ZEXT816(0x3ff0000000000000);
            auVar8._16_48_ = auVar11._16_48_;
          }
        }
        else {
          dVar23 = auVar8._0_8_;
          auVar16._0_16_ = auVar8._0_16_;
          auVar16._16_48_ = auVar15._16_48_;
          auVar15._8_56_ = auVar16._8_56_;
          auVar15._0_8_ = dVar23 * dVar23;
          if ((uVar3 & 1) == 0) {
            auVar11._0_16_ = ZEXT816(0x3ff0000000000000);
            auVar15._0_8_ = auVar15._0_8_ * 0.5;
            auVar8._8_56_ = auVar11._8_56_;
            auVar8._0_8_ = 1.0 - auVar15._0_8_;
          }
          else {
            auVar8._0_8_ = dVar23 - dVar23 * 0.16666666666666666 * auVar15._0_8_;
          }
        }
        goto LAB_180637514;
      }
    }
    else {
      uVar3 = FUN_18063a390(param_1,auVar8._0_8_,1,param_4,auVar8._0_8_);
      auVar8._8_56_ = extraout_var;
      auVar8._0_8_ = (double)extraout_XMM0_Qa;
    }
  }
  dVar23 = auVar8._0_8_;
  auVar17._16_48_ = auVar15._16_48_;
  auVar17._0_16_ = auVar8._0_16_;
  auVar15._8_56_ = auVar17._8_56_;
  auVar15._0_8_ = dVar23 * dVar23;
  if ((uVar3 & 1) == 0) {
    auVar12._16_48_ = auVar8._16_48_;
    auVar12._0_16_ = ZEXT816(0xbfe0000000000000);
    auVar8._8_56_ = auVar12._8_56_;
    auVar8._0_8_ = auVar15._0_8_ * -0.5 + 1.0 +
                   ((auVar15._0_8_ * -2.755731922398589e-07 + 2.4801587301587298e-05) *
                    auVar15._0_8_ * auVar15._0_8_ +
                   auVar15._0_8_ * -0.0013888888888888887 + 0.041666666666666664) *
                   auVar15._0_8_ * auVar15._0_8_;
  }
  else {
    auVar8._0_8_ = dVar23 + ((auVar15._0_8_ * 2.7557319223985893e-06 + -0.0001984126984126984) *
                             auVar15._0_8_ * auVar15._0_8_ +
                            auVar15._0_8_ * 0.008333333333333333 + -0.16666666666666666) *
                            dVar23 * auVar15._0_8_;
  }
LAB_180637514:
  if ((uVar3 + 1 & 2) != 0) {
    auVar18._16_48_ = auVar15._16_48_;
    auVar18._0_16_ = ZEXT816(0);
    auVar19._8_56_ = auVar18._8_56_;
    auVar19._0_8_ = 0.0 - auVar8._0_8_;
    auVar8._0_16_ = auVar19._0_16_;
  }
  auVar13._4_60_ = auVar8._4_60_;
  auVar13._0_4_ = (float)auVar8._0_8_;
  return auVar13._0_8_;
}



