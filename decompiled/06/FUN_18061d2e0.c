// FUN_18061d2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061d2e0 */

double FUN_18061d2e0(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  double dVar11;
  undefined1 in_ZMM1 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if (((byte)DAT_180bb2128 & 3) != 3) {
    dVar11 = (double)FUN_18061d300();
    return dVar11;
  }
  uVar10 = (uint)((ulonglong)param_1 >> 0x20);
  uVar8 = uVar10 >> 0x14;
  lVar9 = 0;
  dVar4 = in_ZMM1._0_8_;
  uVar2 = in_ZMM1._4_4_;
  dVar11 = param_1;
  if ((0x7fd < (uVar10 >> 0x14) - 1) || (0x7f < (uVar2 >> 0x14 & 0x7ff) - 0x3be)) {
    uVar7 = (longlong)dVar4 * 2;
    if (0xffdffffffffffffe < uVar7 - 1) {
      if ((uVar7 == 0) || (dVar11 = dVar4, param_1 == 1.0)) {
        if (0xfff0000000000000 < ((ulonglong)dVar11 ^ 0x8000000000000) * 2) goto LAB_18062ddd8;
      }
      else {
        uVar1 = (longlong)param_1 * 2;
        if ((0xffe0000000000000 < uVar1) || (0xffe0000000000000 < uVar7)) {
LAB_18062ddd8:
          return param_1 + dVar4;
        }
        if (uVar1 != 0x7fe0000000000000) {
          if ((uint)(uVar1 < 0x7fe0000000000000) == (uVar2 >> 0x1f ^ 1)) {
            return 0.0;
          }
          return dVar4 * dVar4;
        }
      }
      return 1.0;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      dVar11 = param_1 * param_1;
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar10 = uVar2 >> 0x14 & 0x7ff, uVar10 - 0x3ff < 0x35)) &&
          (uVar7 = 1L << ((ulonglong)(0x433 - uVar10) & 0x3f), ((ulonglong)dVar4 & uVar7 - 1) == 0))
         && (((ulonglong)dVar4 & uVar7) != 0)) {
        dVar11 = -dVar11;
        lVar9 = 1;
      }
      if ((longlong)param_1 * 2 == 0) {
        if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
          return dVar11;
        }
        dVar11 = (double)FUN_18062e4c0(lVar9);
        return dVar11;
      }
      if (((ulonglong)dVar4 & 0x8000000000000000) == 0) {
        return dVar11;
      }
      return 1.0 / dVar11;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar8 = uVar2 >> 0x14 & 0x7ff;
      if (uVar8 < 0x3ff) {
LAB_18062df94:
        dVar11 = (double)FUN_18062e520();
        return dVar11;
      }
      if (uVar8 < 0x434) {
        uVar7 = 1L << ((ulonglong)(0x433 - uVar8) & 0x3f);
        if (((ulonglong)dVar4 & uVar7 - 1) != 0) goto LAB_18062df94;
        iVar3 = 2 - (uint)((uVar7 & (ulonglong)dVar4) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar11 = ABS(param_1);
      uVar8 = uVar10 >> 0x14 & 0x7ff;
      lVar9 = 0x80000;
      if (iVar3 != 1) {
        lVar9 = 0;
      }
    }
    uVar10 = uVar2 >> 0x14 & 0x7ff;
    if (0x7f < uVar10 - 0x3be) {
      if (dVar11 == 1.0) {
        return 1.0;
      }
      if (uVar10 < 0x3be) {
        if ((ulonglong)dVar11 < 0x3ff0000000000001) {
          return 1.0 - dVar4;
        }
        return dVar4 + 1.0;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar11 == uVar2 >> 0x14 < 0x800) {
        dVar11 = (double)FUN_18062e560();
        return dVar11;
      }
      dVar11 = (double)FUN_18062e5b0(0);
      return dVar11;
    }
    if (uVar8 == 0) {
      dVar11 = (double)((longlong)ABS(param_1 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  if (dVar4 == 1.0) {
    return param_1;
  }
  if (dVar11 == 1.0) {
    auVar13._0_8_ = -(ulonglong)(lVar9 == 0);
    auVar13._8_8_ = 0xffffffffffffffff;
    auVar13 = vblendvpd_avx(ZEXT816(0xbff0000000000000),ZEXT816(0x3ff0000000000000),auVar13);
    return auVar13._0_8_;
  }
  uVar10 = (uint)((longlong)dVar11 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar10 >> 0xd & 0x7f) * 0x20;
  dVar17 = (double)((int)uVar10 >> 0x14);
  dVar15 = dVar17 * 0.6931471805598903 + *(double *)(&DAT_1806b4d18 + lVar5);
  dVar16 = (double)((longlong)dVar11 - ((longlong)dVar11 + 0xc0196aab00000000U & 0xfff0000000000000)
                   ) * *(double *)(&DAT_1806b4d08 + lVar5) + -1.0;
  dVar14 = dVar16 * -0.5 * dVar16;
  dVar11 = dVar15 + dVar16;
  dVar6 = dVar14 + dVar11;
  dVar15 = dVar14 * dVar16 *
           (dVar14 * (dVar14 * (dVar16 * 1.0000415263675542 + -1.142909628459501) +
                     dVar16 * -0.6666666663487739 + 0.7999999995323976) +
           dVar16 * 0.5000000000000007 + -0.6666666666666679) +
           dVar16 * dVar16 * -0.5 + -dVar14 +
           dVar17 * 5.497923018708371e-14 + *(double *)(&DAT_1806b4d20 + lVar5) +
           (dVar15 - dVar11) + dVar16 + (dVar11 - dVar6) + dVar14;
  dVar11 = dVar15 + dVar6;
  dVar14 = dVar11 * dVar4;
  uVar10 = (uint)((ulonglong)dVar14 >> 0x34) & 0x7ff;
  if (0x3e < uVar10 - 0x3c9) {
    if (0x7fffffff < uVar10 - 0x3c9) {
      if ((int)lVar9 == 0) {
        return dVar14 + 1.0;
      }
      return -(dVar14 + 1.0);
    }
    if (0x408 < uVar10) {
      if (((ulonglong)dVar14 & 0x8000000000000000) == 0) {
        dVar11 = (double)FUN_18062e560(lVar9);
        return dVar11;
      }
      dVar11 = (double)FUN_18062e5b0();
      return dVar11;
    }
    uVar10 = 0;
  }
  dVar16 = dVar14 * 369.3299304675746 + 103079215104.5;
  uVar7 = (ulonglong)dVar16 >> 0x10;
  dVar16 = (double)(int)((ulonglong)dVar16 >> 0x10);
  dVar11 = dVar16 * 5.0411407304988844e-14 + dVar16 * -0.0027076061741126978 + dVar14 +
           dVar4 * ((dVar6 - dVar11) + dVar15) + dVar11 * dVar4 + -dVar14;
  dVar4 = dVar11 * dVar11;
  dVar6 = (double)((lVar9 + uVar7 << 0x2c) + *(longlong *)(&DAT_1806b3cc8 + (uVar7 & 0xff) * 0x10));
  dVar11 = dVar4 * dVar4 * (dVar11 * 0.008333335853047663 + 0.04166668084093659) +
           dVar4 * (dVar11 * 0.16666666666665886 + 0.49999999999996786) +
           dVar11 + *(double *)(&DAT_1806b3cc0 + (uVar7 & 0xff) * 0x10);
  if (uVar10 == 0) {
    if ((uVar7 & 0x80000000) == 0) {
      dVar6 = (double)FUN_18062e450((dVar11 * (double)((longlong)dVar6 + -0x3f10000000000000) +
                                    (double)((longlong)dVar6 + -0x3f10000000000000)) *
                                    5.486124068793689e+303);
    }
    else {
      dVar6 = (double)((longlong)dVar6 + 0x3fe0000000000000);
      dVar4 = dVar6 + dVar6 * dVar11;
      if (ABS(dVar4) < 1.0) {
        auVar12._8_8_ = 0;
        auVar12._0_8_ = dVar4;
        auVar13 = vcmpsd_avx(auVar12,ZEXT816(0),1);
        auVar13 = vblendvpd_avx(ZEXT816(0x3ff0000000000000),ZEXT816(0xbff0000000000000),auVar13);
        dVar14 = auVar13._0_8_;
        dVar4 = ((dVar6 - dVar4) + dVar6 * dVar11 + (dVar14 - (dVar14 + dVar4)) + dVar4 +
                dVar14 + dVar4) - dVar14;
        if (dVar4 == 0.0) {
          dVar4 = (double)((ulonglong)dVar6 & 0x8000000000000000);
        }
      }
      dVar6 = (double)FUN_18062e490(dVar4 * 2.2250738585072014e-308);
    }
  }
  else {
    dVar6 = dVar6 * dVar11 + dVar6;
  }
  return dVar6;
}



