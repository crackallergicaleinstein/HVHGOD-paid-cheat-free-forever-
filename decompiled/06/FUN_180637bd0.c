// FUN_180637bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180637bd0 */

/* WARNING: Removing unreachable block (ram,0x00018063809f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180637bd0(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined1 auVar1 [60];
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar8 [16];
  undefined1 in_ZMM0 [64];
  undefined4 uVar12;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  ulonglong uVar7;
  undefined1 auVar11 [64];
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar19 [64];
  undefined1 auVar18 [64];
  undefined1 auVar17 [64];
  float fVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar26 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  
  fVar20 = in_ZMM0._0_4_;
  auVar11._16_48_ = in_ZMM0._16_48_;
  auVar23 = in_ZMM2._0_16_;
  if (DAT_180bb2128 != 0) {
    auVar16 = vpunpckldq_avx(in_ZMM1._0_16_,in_ZMM0._0_16_);
    auVar24 = (undefined1  [16])0x0;
    uVar7 = 0;
    fVar13 = auVar16._0_4_;
    fVar2 = ABS(fVar13);
    fVar3 = ABS(fVar20);
    uVar15 = auVar16._0_8_;
    if ((uint)fVar2 < 0x7f800000) {
      if ((uint)fVar2 < 0x3f800001) {
        if (fVar2 == 0.0) {
          if ((0x7f800000 < (uint)fVar3) && ((uint)fVar3 < 0x7fc00000)) {
            uVar7 = FUN_18063a5d0(fVar3,(uint)fVar3 | 0x400000,(uint)fVar3 | 0x400000,3);
            return uVar7;
          }
          goto LAB_1806388a0;
        }
        if (fVar13 == 1.0) {
          if ((uint)fVar3 < 0x7f800001) {
            return in_ZMM0._0_8_;
          }
          uVar7 = FUN_18063a5d0(fVar3,(uint)fVar20 | 0x400000,(uint)fVar20 | 0x400000,3);
          return uVar7;
        }
      }
      if ((uint)fVar3 < 0x7f800000) {
        auVar25 = vcvtps2pd_avx(auVar16);
        auVar11 = ZEXT1664(auVar25);
        if ((int)fVar20 < 0x3f880000) {
          if ((int)fVar20 < 1) {
            if (fVar3 == 0.0) {
              fVar2 = fVar13;
              if ((int)fVar13 < 0) {
                fVar2 = INFINITY;
              }
              iVar5 = 0;
              if ((int)fVar13 < 0) {
                iVar5 = 0x7f800000;
              }
              if (0 < (int)fVar13) {
                fVar2 = 0.0;
              }
              uVar7 = (ulonglong)((uint)fVar13 & 0x7f800000);
              if (((uint)fVar13 & 0x7f800000) < 0x4b000001) {
                auVar23 = vroundss_avx(auVar23,auVar16,8);
                if (auVar23._0_4_ == fVar13) {
                  uVar7 = (ulonglong)(CONCAT14(auVar23._0_4_ < fVar13,(int)ROUND(fVar13)) >> 1);
                  if (((int)ROUND(fVar13) & 1U) == 0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = (uint)fVar20 & 0x80000000;
                  }
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = 0;
              }
              if (iVar5 == 0) {
                return (ulonglong)(uVar4 | (uint)fVar2);
              }
              uVar7 = FUN_18063a5d0(uVar4 | (uint)fVar2,uVar15,uVar7,2);
              return uVar7;
            }
            if (((uint)fVar13 & 0x7f800000) < 0x4b000001) {
              auVar23 = vroundss_avx(auVar23,auVar16,8);
              if (auVar23._0_4_ != fVar13) {
                uVar7 = FUN_18063a5d0(fVar3,0xffc00000,0xffc00000,6);
                return uVar7;
              }
              if (((int)ROUND(fVar13) & 1U) != 0) {
                auVar24 = SUB6416(ZEXT464(0x80000000),0);
              }
            }
          }
          uVar7 = auVar24._0_8_;
          auVar23 = vpshufd_avx(auVar25,0xee);
          dVar14 = auVar23._0_8_ - 1.0;
          param_2 = ABS(dVar14);
          if ((ulonglong)param_2 < 0x3fb0000000000000) {
            vpshufd_avx(auVar24,0x44);
            dVar29 = dVar14 / (dVar14 + 2.0);
            dVar21 = dVar29 + dVar29;
            dVar31 = dVar21 * dVar21;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = dVar31;
            auVar23 = vpshufd_avx(auVar23,0x44);
            auVar16._8_8_ = 0;
            auVar16._0_8_ = dVar31 * dVar31 * dVar21 * dVar31;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = dVar21 * dVar31;
            auVar16 = vunpcklpd_avx(auVar24,auVar16);
            auVar25._0_8_ =
                 auVar16._0_8_ * (auVar23._0_8_ * 0.012500000003771751 + 0.08333333333333179);
            auVar25._8_8_ =
                 auVar16._8_8_ * (auVar23._8_8_ * 0.0004348877777076146 + 0.0022321399879194482);
            auVar23 = vpshufd_avx(auVar25,0xee);
            auVar30._8_8_ = 0;
            auVar30._0_8_ = dVar29 * dVar14;
            auVar16 = vpshufd_avx(auVar30,0xee);
            uVar7 = auVar16._0_8_;
            dVar14 = dVar14 + ((auVar23._0_8_ + auVar25._0_8_) - dVar29 * dVar14);
            goto LAB_180637cce;
          }
        }
        auVar23 = vpshufd_avx(auVar25,0xee);
        auVar23 = vpand_avx(auVar23,_DAT_18086fc00);
        uVar4 = (auVar23._4_4_ >> 0xc) + (uint)((auVar23._0_8_ >> 0x2b & 1) != 0);
        auVar16 = vpor_avx(auVar23,_DAT_18086fbe0);
        auVar23 = vpshufd_avx(auVar16,0xee);
        auVar23 = vpsrlq_avx(auVar23,0x34);
        auVar23 = vpsubq_avx(auVar23,_DAT_18086fbf0);
        auVar23 = vcvtdq2pd_avx(auVar23);
        dVar14 = ((double)((ulonglong)(uVar4 | 0x3fe00) << 0x2c) - auVar16._0_8_) *
                 *(double *)(&DAT_1806b3410 + (ulonglong)uVar4 * 8);
        dVar14 = dVar14 * (dVar14 * (dVar14 * 0.3333333333333333 + 0.5) + 1.0);
        dVar21 = auVar25._0_8_ *
                 ((auVar23._0_8_ * 0.6931471805599453 +
                  *(double *)(&DAT_18086fc10 + (ulonglong)uVar4 * 8)) - dVar14);
        if (88.72283935546875 < dVar21) {
          uVar7 = FUN_18063a5d0(&DAT_18086fc10,0x7f800000,SUB648(ZEXT464(0x7f800000),0) | uVar7,9);
          return uVar7;
        }
        if (-103.2789306640625 < dVar21) {
          auVar26._0_8_ = dVar21 * 92.33248261689366;
          auVar26._8_8_ = 0;
          auVar16 = vcvtpd2dq_avx(auVar26);
          auVar23 = vcvtdq2pd_avx(auVar16);
          dVar21 = -(auVar23._0_8_ * 0.010830424696249145) + dVar21;
          auVar8._0_8_ = *(double *)(&DAT_1806b1de0 + (ulonglong)(auVar16._0_4_ & 0x3f) * 8) *
                         dVar21 * (dVar21 * (dVar21 * 0.16666666666666666 + 0.5) + 1.0) +
                         *(double *)(&DAT_1806b1de0 + (ulonglong)(auVar16._0_4_ & 0x3f) * 8);
          auVar8._8_8_ = 0;
          auVar23 = vpsrad_avx(auVar16,6);
          auVar23 = vpsllq_avx(auVar23,0x34);
          auVar23 = vpaddq_avx(auVar23,auVar8);
          return CONCAT44((int)((ulonglong)auVar8._0_8_ >> 0x20),(float)auVar23._0_8_) | uVar7;
        }
        uVar7 = FUN_18063a5d0(&DAT_18086fc10,dVar14,uVar7,7);
        return uVar7;
      }
      if (fVar2 == 0.0) goto LAB_1806388a0;
      if (fVar20 == INFINITY) {
        if ((int)fVar13 < 0) {
          return 0;
        }
        goto LAB_180638900;
      }
      if (fVar20 == -INFINITY) {
        fVar20 = fVar13;
        if ((int)fVar13 < 0) {
          fVar20 = 0.0;
        }
        if (0 < (int)fVar13) {
          fVar20 = INFINITY;
        }
        uVar4 = 0x80000000;
        if (((uint)fVar13 & 0x7f800000) < 0x4b000001) {
          auVar23 = vroundss_avx(auVar23,auVar16,8);
          if (auVar23._0_4_ == fVar13) {
            if (((int)ROUND(fVar13) & 1U) == 0) {
              uVar4 = 0;
            }
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
        return (ulonglong)(uVar4 | (uint)fVar20);
      }
    }
    else {
      if (0x7f800000 < (uint)fVar2) {
        if (0x7f800000 < (uint)fVar3) {
          if (fVar20 == -NAN) {
            uVar7 = FUN_18063a5d0(0x7fc00000,uVar15,(uint)fVar13 | 0x400000,5);
            return uVar7;
          }
          uVar7 = FUN_18063a5d0((uint)fVar20 | 0x400000,uVar15,(uint)fVar20 | 0x400000,5);
          return uVar7;
        }
        if (fVar20 != 1.0) {
          uVar7 = FUN_18063a5d0(uVar15,uVar15,(uint)fVar13 | 0x400000,4);
          return uVar7;
        }
        if ((uint)fVar2 < 0x7fc00000) {
          uVar7 = FUN_18063a5d0(0x3f800000,0x3f800000,0x3f800000,4);
          return uVar7;
        }
LAB_1806388a0:
        return SUB648(ZEXT464(0x3f800000),0);
      }
      if ((uint)fVar3 < 0x7f800001) {
        if (fVar3 == 1.0) {
          return SUB648(ZEXT464(0x3f800000),0);
        }
        if ((int)fVar13 < 0) {
          uVar4 = 0;
          if ((uint)fVar3 < 0x3f800000) {
            uVar4 = 0x7f800000;
          }
          return (ulonglong)uVar4;
        }
        if ((uint)fVar3 < 0x3f800000) {
          return 0;
        }
LAB_180638900:
        return SUB648(ZEXT464(0x7f800000),0);
      }
    }
    uVar7 = FUN_18063a5d0((uint)fVar20 | 0x400000,uVar15,(uint)fVar20 | 0x400000,3);
    return uVar7;
  }
  auVar19._16_48_ = in_ZMM1._16_48_;
  auVar19._0_12_ = in_ZMM1._0_12_;
  auVar19._12_4_ = in_ZMM0._4_4_;
  auVar18._12_52_ = auVar19._12_52_;
  auVar18._0_8_ = in_ZMM1._0_8_;
  auVar18._8_4_ = in_ZMM1._4_4_;
  auVar17._8_56_ = auVar18._8_56_;
  fVar13 = in_ZMM1._0_4_;
  auVar17._0_8_ = CONCAT44(fVar20,fVar13);
  uVar7 = 0;
  fVar2 = ABS(fVar13);
  fVar3 = ABS(fVar20);
  auVar16 = auVar17._0_16_;
  if (0x7f7fffff < (uint)fVar2) {
    if (0x7f800000 < (uint)fVar2) {
      if (0x7f800000 < (uint)fVar3) {
        if (fVar20 == -NAN) {
          uVar7 = FUN_18063a5d0(0x7fc00000,auVar17._0_8_,param_3,5);
          return uVar7;
        }
        uVar7 = FUN_18063a5d0((uint)fVar20 | 0x400000,auVar17._0_8_,param_3,5);
        return uVar7;
      }
      if (fVar20 != 1.0) {
        uVar7 = FUN_18063a5d0(fVar3,auVar17._0_8_,param_3,4);
        return uVar7;
      }
      if ((uint)fVar2 < 0x7fc00000) {
        uVar7 = FUN_18063a5d0(0x3f800000,0x3f800000,param_3,4);
        return uVar7;
      }
LAB_1806381c0:
      return SUB168(ZEXT416(0x3f800000),0);
    }
    if ((uint)fVar3 < 0x7f800001) {
      if (fVar3 == 1.0) {
        return SUB168(ZEXT416(0x3f800000),0);
      }
      if ((int)fVar13 < 0) {
        if (fVar3 != 0.0) {
          uVar4 = 0;
          if ((uint)fVar3 < 0x3f800000) {
            uVar4 = 0x7f800000;
          }
                    /* WARNING: Read-only address (ram,0x00018086fbe0) is written */
                    /* WARNING: Read-only address (ram,0x00018086fbf0) is written */
                    /* WARNING: Read-only address (ram,0x00018086fc00) is written */
          return (ulonglong)uVar4;
        }
      }
      else if ((uint)fVar3 < 0x3f800000) {
        return 0;
      }
LAB_180638220:
      return SUB168(ZEXT416(0x7f800000),0);
    }
LAB_180638240:
    uVar7 = FUN_18063a5d0((uint)fVar20 | 0x400000,auVar17._0_8_,param_3,3);
    return uVar7;
  }
  if ((uint)fVar2 < 0x3f800001) {
    if (fVar2 == 0.0) {
      if ((0x7f800000 < (uint)fVar3) && ((uint)fVar3 < 0x7fc00000)) {
        uVar7 = FUN_18063a5d0(fVar3,(uint)fVar3 | 0x400000,param_3,3);
        return uVar7;
      }
      goto LAB_1806381c0;
    }
    param_2 = (double)(auVar18._0_8_ & 0xffffffff);
    if (fVar13 == 1.0) {
      if ((uint)ABS(fVar20) < 0x7f800001) {
        return in_ZMM0._0_8_;
      }
      uVar7 = FUN_18063a5d0(fVar3,(uint)fVar20 | 0x400000,param_3,3);
      return uVar7;
    }
  }
  if (0x7f7fffff < (uint)fVar3) {
    if (fVar2 == 0.0) goto LAB_1806381c0;
    if (fVar20 == INFINITY) {
      if ((int)fVar13 < 0) {
        return 0;
      }
      goto LAB_180638220;
    }
    if (fVar20 == -INFINITY) {
      fVar20 = fVar13;
      if ((int)fVar13 < 0) {
        fVar20 = 0.0;
      }
      if (0 < (int)fVar13) {
        fVar20 = INFINITY;
      }
      uVar4 = 0x80000000;
      if (((uint)fVar13 & 0x7f800000) < 0x4b000001) {
        if (DAT_1808d5f60 < 2) {
          fVar2 = (float)(int)ROUND(fVar13);
        }
        else {
          auVar23 = roundss(auVar23,auVar16,8);
          fVar2 = auVar23._0_4_;
        }
        if (fVar2 == fVar13) {
          if (((int)ROUND(fVar13) & 1U) == 0) {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
      return (ulonglong)(uVar4 | (uint)fVar20);
    }
    goto LAB_180638240;
  }
  auVar11._0_8_ = (double)fVar13;
  auVar11._8_8_ = (double)fVar20;
  uVar12 = (undefined4)((ulonglong)auVar11._8_8_ >> 0x20);
  if ((int)fVar20 < 0x3f880000) {
    if ((int)fVar20 < 1) {
      if (fVar3 == 0.0) {
        fVar2 = fVar13;
        if ((int)fVar13 < 0) {
          fVar2 = INFINITY;
        }
        iVar5 = 0;
        if ((int)fVar13 < 0) {
          iVar5 = 0x7f800000;
        }
        if (0 < (int)fVar13) {
          fVar2 = 0.0;
        }
        uVar7 = (ulonglong)((uint)fVar13 & 0x7f800000);
        if (((uint)fVar13 & 0x7f800000) < 0x4b000001) {
          if (DAT_1808d5f60 < 2) {
            uVar7 = (ulonglong)(uint)(int)ROUND(fVar13);
            fVar3 = (float)(int)ROUND(fVar13);
          }
          else {
            auVar23 = roundss(auVar23,auVar16,8);
            fVar3 = auVar23._0_4_;
          }
          if (fVar3 == fVar13) {
            uVar7 = (ulonglong)(CONCAT14(fVar3 < fVar13,(int)ROUND(fVar13)) >> 1);
            if (((int)ROUND(fVar13) & 1U) == 0) {
              uVar4 = 0;
            }
            else {
              uVar4 = (uint)fVar20 & 0x80000000;
            }
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
        uVar6 = (ulonglong)(uVar4 | (uint)fVar2);
        if (iVar5 != 0) {
          uVar6 = FUN_18063a5d0(uVar4 | (uint)fVar2,auVar17._0_8_,uVar7,2);
        }
                    /* WARNING: Read-only address (ram,0x00018086fbe0) is written */
                    /* WARNING: Read-only address (ram,0x00018086fbf0) is written */
                    /* WARNING: Read-only address (ram,0x00018086fc00) is written */
        return uVar6;
      }
      if (((uint)fVar13 & 0x7f800000) < 0x4b000001) {
        if (DAT_1808d5f60 < 2) {
          fVar20 = (float)(int)ROUND(fVar13);
        }
        else {
          auVar23 = roundss(auVar23,auVar16,8);
          fVar20 = auVar23._0_4_;
        }
        if (fVar20 != fVar13) {
          uVar7 = FUN_18063a5d0(fVar3,0xffc00000,param_3,6);
          return uVar7;
        }
        if (((int)ROUND(fVar13) & 1U) != 0) {
          uVar7 = 0x80000000;
        }
      }
    }
    auVar27._8_4_ = SUB84(auVar11._8_8_,0);
    auVar27._0_8_ = auVar11._8_8_;
    auVar27._16_48_ = in_ZMM3._16_48_;
    auVar27._12_4_ = uVar12;
    in_ZMM3._8_56_ = auVar27._8_56_;
    in_ZMM3._0_8_ = auVar11._8_8_ - 1.0;
    param_2 = ABS(in_ZMM3._0_8_);
    if ((ulonglong)param_2 < 0x3fb0000000000000) {
      dVar31 = in_ZMM3._0_8_ / (in_ZMM3._0_8_ + 2.0);
      dVar21 = dVar31 + dVar31;
      dVar14 = dVar21 * dVar21;
      auVar28._8_4_ = SUB84(dVar14,0);
      auVar28._0_8_ = dVar14;
      auVar28._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      dVar14 = in_ZMM3._0_8_ +
               ((dVar21 * dVar14 * (dVar14 * 0.012500000003771751 + 0.08333333333333179) +
                dVar14 * dVar14 * dVar21 * dVar14 *
                (auVar28._8_8_ * 0.0004348877777076146 + 0.0022321399879194482)) -
               dVar31 * in_ZMM3._0_8_);
      goto LAB_180637cce;
    }
  }
  auVar22._8_4_ = SUB84(auVar11._8_8_,0);
  auVar22._0_8_ = auVar11._8_8_;
  auVar22._12_4_ = uVar12;
  auVar22 = auVar22 & _DAT_18086fc00;
  uVar4 = (auVar22._4_4_ >> 0xc) + (uint)((auVar22._0_8_ >> 0x2b & 1) != 0);
  auVar1._4_56_ = in_ZMM3._8_56_;
  auVar1._0_4_ = SUB164(auVar22 | _DAT_18086fbe0,0xc);
  dVar14 = ((double)((ulonglong)(uVar4 | 0x3fe00) << 0x2c) - SUB168(auVar22 | _DAT_18086fbe0,0)) *
           *(double *)(&DAT_1806b3410 + (ulonglong)uVar4 * 8);
  dVar14 = ((double)(int)(((auVar1._0_8_ & 0xffffffff) >> 0x14) - 0x3ff) * 0.6931471805599453 +
           *(double *)(&DAT_18086fc10 + (ulonglong)uVar4 * 8)) -
           (dVar14 * dVar14 * (dVar14 * 0.3333333333333333 + 0.5) + dVar14);
LAB_180637cce:
  auVar9._8_56_ = auVar11._8_56_;
  dVar14 = auVar11._0_8_ * dVar14;
  if (88.72283935546875 < dVar14) {
    uVar7 = FUN_18063a5d0(dVar14,0x7f800000,param_3,9);
    return uVar7;
  }
  if (-103.2789306640625 < dVar14) {
    uVar4 = (uint)(dVar14 * 92.33248261689366);
    dVar14 = dVar14 - (double)(int)uVar4 * 0.010830424696249145;
    auVar9._0_8_ = (dVar14 * dVar14 * (dVar14 * 0.16666666666666666 + 0.5) + dVar14) *
                   *(double *)(&DAT_1806b1de0 + (ulonglong)(uVar4 & 0x3f) * 8) +
                   *(double *)(&DAT_1806b1de0 + (ulonglong)(uVar4 & 0x3f) * 8);
    auVar10._4_60_ = auVar9._4_60_;
    auVar10._0_4_ =
         (float)(double)(((ulonglong)(uint)((int)uVar4 >> 6) << 0x34) + (longlong)auVar9._0_8_);
    return auVar10._0_8_ | uVar7;
  }
  uVar7 = FUN_18063a5d0(dVar14,param_2,param_3,7);
  return uVar7;
}



