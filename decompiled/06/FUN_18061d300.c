// FUN_18061d300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061d300 */

void FUN_18061d300(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  double dVar8;
  uint uVar9;
  double dVar10;
  undefined1 in_XMM1 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  
  uVar7 = (uint)((ulonglong)param_1 >> 0x20);
  uVar2 = uVar7 >> 0x14;
  uVar9 = 0;
  dVar13 = in_XMM1._0_8_;
  uVar17 = in_XMM1._4_4_;
  dVar4 = param_1;
  if ((0x7fd < (uVar7 >> 0x14) - 1) || (0x7f < (uVar17 >> 0x14 & 0x7ff) - 0x3be)) {
    if (0xffdffffffffffffe < (longlong)dVar13 * 2 - 1U) {
      return;
    }
    if (0xffdffffffffffffe < (longlong)param_1 * 2 - 1U) {
      if ((((((ulonglong)param_1 & 0x8000000000000000) != 0) &&
           (uVar7 = uVar17 >> 0x14 & 0x7ff, uVar7 - 0x3ff < 0x35)) &&
          (uVar6 = 1L << (0x33U - (char)uVar7 & 0x3f), ((ulonglong)dVar13 & uVar6 - 1) == 0)) &&
         (((ulonglong)dVar13 & uVar6) != 0)) {
        uVar9 = 1;
      }
      if ((longlong)param_1 * 2 != 0) {
        return;
      }
      if (((ulonglong)dVar13 & 0x8000000000000000) == 0) {
        return;
      }
      FUN_18062e4c0(uVar9);
      return;
    }
    if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
      uVar2 = uVar17 >> 0x14 & 0x7ff;
      if (uVar2 < 0x3ff) {
LAB_18061d5ab:
        FUN_18062e520();
        return;
      }
      if (uVar2 < 0x434) {
        uVar6 = 1L << (0x33U - (char)uVar2 & 0x3f);
        if (((ulonglong)dVar13 & uVar6 - 1) != 0) goto LAB_18061d5ab;
        iVar3 = 2 - (uint)((uVar6 & (ulonglong)dVar13) != 0);
      }
      else {
        iVar3 = 2;
      }
      dVar4 = ABS(param_1);
      uVar2 = uVar7 >> 0x14 & 0x7ff;
      uVar9 = 0x80000;
      if (iVar3 != 1) {
        uVar9 = 0;
      }
    }
    uVar7 = uVar17 >> 0x14 & 0x7ff;
    if (0x7f < uVar7 - 0x3be) {
      if (dVar4 == 1.0) {
        return;
      }
      if (uVar7 < 0x3be) {
        return;
      }
      if (0x3ff0000000000000 < (ulonglong)dVar4 == uVar17 >> 0x14 < 0x800) {
        FUN_18062e560();
        return;
      }
      FUN_18062e5b0(0);
      return;
    }
    if (uVar2 == 0) {
      dVar4 = (double)((longlong)ABS(param_1 * 4503599627370496.0) + 0xfcc0000000000000);
    }
  }
  if (dVar13 == 1.0) {
    return;
  }
  if (dVar4 == 1.0) {
    return;
  }
  uVar17 = 0x3ff00000;
  dVar8 = (double)((longlong)dVar4 - ((longlong)dVar4 + 0xc0196aab00000000U & 0xfff0000000000000));
  uVar7 = (uint)((longlong)dVar4 + 0xc0196aab00000000U >> 0x20);
  lVar5 = (ulonglong)(uVar7 >> 0xd & 0x7f) * 0x20;
  dVar14 = (double)((int)uVar7 >> 0x14);
  dVar4 = (double)((longlong)dVar8 + 0x80000000U & 0xffffffff00000000);
  dVar16 = (dVar8 - dVar4) * *(double *)(&DAT_1806b4d08 + lVar5);
  dVar11 = dVar4 * *(double *)(&DAT_1806b4d08 + lVar5) - 1.0;
  dVar4 = dVar14 * 0.6931471805598903 + *(double *)(&DAT_1806b4d18 + lVar5);
  dVar8 = dVar16 + dVar11;
  dVar12 = dVar4 + dVar8;
  dVar15 = dVar11 * -0.5 * dVar11;
  dVar1 = dVar15 + dVar12;
  dVar10 = dVar8 * -0.5 * dVar8;
  dVar4 = (((dVar8 * 1.0000415263675542 + -1.142909628459501) * dVar10 +
           dVar8 * -0.6666666663487739 + 0.7999999995323976) * dVar10 +
          dVar8 * 0.5000000000000007 + -0.6666666666666679) * dVar10 * dVar8 +
          dVar14 * 5.497923018708371e-14 + *(double *)(&DAT_1806b4d20 + lVar5) +
          (dVar4 - dVar12) + dVar8 + (dVar11 * -0.5 + dVar8 * -0.5) * dVar16 +
          (dVar12 - dVar1) + dVar15;
  dVar12 = dVar4 + dVar1;
  dVar8 = (double)((ulonglong)dVar12 & 0xfffffffff8000000);
  dVar14 = (double)(CONCAT44((int)((ulonglong)dVar8 >> 0x20),SUB84(dVar12,0)) & 0xfffffffff8000000)
           * (double)((ulonglong)dVar13 & 0xfffffffff8000000);
  uVar7 = (uint)((ulonglong)dVar14 >> 0x34) & 0x7ff;
  if (0x3e < uVar7 - 0x3c9) {
    if (0x7fffffff < uVar7 - 0x3c9) {
      return;
    }
    if (0x408 < uVar7) {
      if (((ulonglong)dVar14 & 0x8000000000000000) == 0) {
        FUN_18062e560(uVar9);
        return;
      }
      FUN_18062e5b0();
      return;
    }
    uVar7 = 0;
  }
  dVar10 = dVar14 * 369.3299304675746 + 103079215104.5;
  uVar6 = (ulonglong)dVar10 >> 0x10;
  dVar10 = (double)(int)((ulonglong)dVar10 >> 0x10);
  lVar5 = (uVar9 + uVar6 << 0x2c) + *(longlong *)(&DAT_1806b3cc8 + (uVar6 & 0xff) * 0x10);
  dVar13 = dVar10 * -0.0027076061741126978 + dVar14 + dVar10 * 5.0411407304988844e-14 +
           ((dVar1 - dVar12) + dVar4 + (dVar12 - dVar8)) * dVar13 +
           (dVar13 - (double)((ulonglong)dVar13 & 0xfffffffff8000000)) * dVar8;
  dVar4 = dVar13 * dVar13;
  dVar4 = (dVar13 * 0.16666666666665886 + 0.49999999999996786) * dVar4 +
          *(double *)(&DAT_1806b3cc0 + (uVar6 & 0xff) * 0x10) + dVar13 +
          (dVar13 * 0.008333335853047663 + 0.04166668084093659) * dVar4 * dVar4;
  if (uVar7 == 0) {
    if ((uVar6 & 0x80000000) == 0) {
      FUN_18062e450(((double)(lVar5 + -0x3f10000000000000) * dVar4 +
                    (double)(lVar5 + -0x3f10000000000000)) * 5.486124068793689e+303);
    }
    else {
      dVar13 = (double)(lVar5 + 0x3fe0000000000000);
      dVar4 = dVar13 * dVar4;
      dVar8 = dVar13 + dVar4;
      if (ABS(dVar8) < 1.0) {
        if (dVar8 < 0.0) {
          uVar17 = 0xbff00000;
        }
        dVar12 = (double)((ulonglong)uVar17 << 0x20) + dVar8;
        dVar8 = ((dVar13 - dVar8) + dVar4 + ((double)((ulonglong)uVar17 << 0x20) - dVar12) + dVar8 +
                dVar12) - (double)((ulonglong)uVar17 << 0x20);
        if (dVar8 == 0.0) {
          dVar8 = (double)((ulonglong)dVar13 & 0x8000000000000000);
        }
      }
      FUN_18062e490(lVar5,uVar6,dVar8 * 2.2250738585072014e-308);
    }
  }
  return;
}



