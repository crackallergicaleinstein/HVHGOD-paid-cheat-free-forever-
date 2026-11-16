// FUN_180639e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180639e00 */

undefined8 FUN_180639e00(float param_1,float param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 in_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  
  auVar26._0_8_ = (double)param_2;
  auVar26._8_8_ = in_XMM1_Qb;
  auVar28 = ZEXT1664(auVar26);
  auVar22._0_8_ = (double)param_1;
  auVar22._8_8_ = in_XMM0_Qb;
  auVar25 = ZEXT1664(auVar22);
  iVar6 = ((uint)((ulonglong)auVar22._0_8_ >> 0x34) & 0x7ff) -
          ((uint)((ulonglong)auVar26._0_8_ >> 0x34) & 0x7ff);
  dVar8 = ABS(auVar26._0_8_);
  dVar5 = ABS(auVar22._0_8_);
  if ((0x7ff0000000000000 < (ulonglong)dVar8) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar5)) {
    auVar15._4_12_ = ZEXT812(0);
    auVar15._0_4_ = param_2;
    uVar9 = FUN_180635020(0,auVar15._0_8_,0);
    return uVar9;
  }
  if (dVar5 == 0.0) {
    if (-1 < (longlong)auVar26._0_8_) {
      auVar10._4_12_ = auVar22._4_12_;
      auVar10._0_4_ = param_1;
      return auVar10._0_8_;
    }
LAB_180639ea9:
    FUN_1806281c0(0x20);
    if ((longlong)auVar22._0_8_ < 0) {
      uVar9 = SUB648(ZEXT464(0xc0490fdb),0);
    }
    else {
      uVar9 = SUB648(ZEXT464(0x40490fdb),0);
    }
  }
  else {
    auVar24 = auVar22;
    auVar15 = auVar26;
    if (dVar8 == 0.0) {
      FUN_1806281c0();
      auVar15 = auVar28._0_16_;
      auVar24 = auVar25._0_16_;
      if (-1 < (longlong)auVar22._0_8_) goto LAB_180639efb;
    }
    else {
LAB_180639efb:
      if (iVar6 < 0x1b) {
        dVar21 = auVar24._0_8_;
        dVar16 = auVar15._0_8_;
        if ((iVar6 < -0xd) && (-1 < (longlong)auVar26._0_8_)) {
          if (-0x97 < iVar6) {
            if (-0x7f < iVar6) {
              auVar12._0_8_ = dVar21 / dVar16;
              auVar12._8_8_ = auVar24._8_8_;
              auVar13._0_4_ = (float)auVar12._0_8_;
              auVar13._4_12_ = auVar12._4_12_;
              return auVar13._0_8_;
            }
            dVar16 = (dVar21 * 1.2676506002282294e+30) / dVar16;
            uVar3 = (uint)((ulonglong)ABS(dVar16) >> 0x20);
            uVar2 = uVar3 >> 0x14;
            uVar3 = uVar3 >> 0x14;
            if (uVar2 < 0x65) {
              if ((int)(0x65 - uVar2) < 0x37) {
                uVar4 = ((ulonglong)dVar16 & 0x1fffffffffffff | 0x10000000000000) >>
                        (100 - (ulonglong)uVar3 & 0x3f);
                uVar4 = (uVar4 >> 1) + (ulonglong)((uint)uVar4 & 1);
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              uVar4 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar16 & 0xfffffffffffff;
            }
            uVar7 = (ulonglong)dVar16 & 0x8000000000000000 | uVar4;
            auVar25 = ZEXT864(uVar7);
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar7;
            if ((uVar4 & 0x7ff0000000000000) == 0) {
              FUN_1806281c0(0x30);
              auVar23 = auVar25._0_16_;
            }
            auVar11._0_4_ = (float)auVar23._0_8_;
            auVar11._4_12_ = auVar23._4_12_;
            return auVar11._0_8_;
          }
          FUN_1806281c0(0x30);
          if ((longlong)auVar22._0_8_ < 0) {
            return SUB648(ZEXT464(0x80000000),0);
          }
          return 0;
        }
        if ((-0x1b < iVar6) || (-1 < (longlong)auVar26._0_8_)) {
          if ((dVar5 != INFINITY) || (dVar8 != INFINITY)) {
            auVar27 = auVar15;
            if ((longlong)auVar26._0_8_ < 0) {
              auVar27._0_8_ = -dVar16;
              auVar27._8_8_ = auVar15._8_8_;
            }
            if ((longlong)auVar22._0_8_ < 0) {
              auVar24._0_8_ = -dVar21;
            }
            bVar1 = auVar27._0_8_ < auVar24._0_8_;
            auVar17._0_8_ = -(ulonglong)!bVar1;
            auVar17._8_8_ = 0xffffffffffffffff;
            auVar15 = vblendvpd_avx(auVar27,auVar24,auVar17);
            auVar18._0_8_ = -(ulonglong)!bVar1;
            auVar18._8_8_ = 0xffffffffffffffff;
            auVar24 = vblendvpd_avx(auVar24,auVar27,auVar18);
            dVar5 = auVar24._0_8_;
            dVar8 = auVar15._0_8_;
            auVar19._0_8_ = dVar8 / dVar5;
            auVar19._8_8_ = auVar15._8_8_;
            if (auVar19._0_8_ <= 0.0625) {
              if (0.0001 <= auVar19._0_8_) {
                dVar5 = auVar19._0_8_ * auVar19._0_8_;
                auVar19._0_8_ =
                     -(dVar5 * auVar19._0_8_ *
                      (-(dVar5 * (-(dVar5 * 0.1428571356180717) + 0.19999999999393223)) +
                      0.3333333333333317)) + auVar19._0_8_;
              }
            }
            else {
              uVar3 = (uint)(auVar19._0_8_ * 256.0 + 0.5);
              dVar16 = (double)uVar3;
              dVar5 = (dVar8 * 256.0 - dVar5 * dVar16) / (dVar8 * dVar16 + dVar5 * 256.0);
              auVar19._0_8_ =
                   -(dVar5 * dVar5 * dVar5 * 0.33333333333224097) +
                   dVar5 + *(double *)(&DAT_180870640 + (ulonglong)(uVar3 - 0x10) * 8);
              auVar19._8_8_ = 0;
            }
            if (bVar1) {
              dVar5 = auVar19._0_8_;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = 1.5707963267948966 - dVar5;
            }
            if ((longlong)auVar26._0_8_ < 0) {
              dVar5 = auVar19._0_8_;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = 3.141592653589793 - dVar5;
            }
            auVar20 = auVar19;
            if ((longlong)auVar22._0_8_ < 0) {
              auVar20._0_8_ = auVar19._0_8_ ^ 0x8000000000000000;
              auVar20._8_8_ = auVar19._8_8_;
            }
            auVar14._0_4_ = (float)auVar20._0_8_;
            auVar14._4_12_ = auVar20._4_12_;
            return auVar14._0_8_;
          }
          FUN_1806281c0(0x20);
          if (-1 < (longlong)auVar26._0_8_) {
            if ((longlong)auVar22._0_8_ < 0) {
              return SUB648(ZEXT464(0xbf490fdb),0);
            }
            return SUB648(ZEXT464(0x3f490fdb),0);
          }
          if ((longlong)auVar22._0_8_ < 0) {
            return SUB648(ZEXT464(0xc016cbe4),0);
          }
          return SUB648(ZEXT464(0x4016cbe4),0);
        }
        goto LAB_180639ea9;
      }
      FUN_1806281c0(0x20);
      if (-1 < (longlong)auVar22._0_8_) {
        return SUB648(ZEXT464(0x3fc90fdb),0);
      }
    }
    uVar9 = SUB648(ZEXT464(0xbfc90fdb),0);
  }
  return uVar9;
}



