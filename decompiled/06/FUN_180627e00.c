// FUN_180627e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180627e00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180627e00(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 in_ZMM0 [64];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar4 = in_ZMM0._0_8_;
  fVar8 = in_ZMM0._0_4_;
  auVar5._16_48_ = in_ZMM0._16_48_;
  if (DAT_180bb2128 != 0) {
    if ((uint)ABS(fVar8) < 0x7f800000) {
      if (0.0 < fVar8) {
        uVar1 = (uint)fVar8 & 0x7fffff;
        uVar3 = (uint)ABS(fVar8) >> 0x17;
        if (uVar3 == 0) {
          auVar11 = vpor_avx(ZEXT416(uVar1),_DAT_1806b1620);
          auVar11 = ZEXT416((uint)(auVar11._0_4_ - DAT_1806b1620));
          auVar12 = vpsrld_avx(auVar11,0x17);
          auVar11 = vpand_avx(auVar11,_DAT_1806b1690);
          in_ZMM0 = ZEXT1664(auVar11);
          uVar1 = auVar11._0_4_;
          auVar11 = vpsubd_avx(auVar12,_DAT_1806b16b0);
          auVar11 = vcvtdq2ps_avx(auVar11);
          fVar8 = auVar11._0_4_;
        }
        else {
          auVar11 = vcvtdq2ps_avx(ZEXT416(uVar3 - 0x7f));
          fVar8 = auVar11._0_4_;
        }
        if (0.0625 <= ABS(in_ZMM0._0_4_ - 1.0)) {
          uVar3 = (uVar1 >> 0x10) + (uint)((uVar1 >> 0xf & 1) != 0);
          uVar4 = (ulonglong)uVar3;
          fVar9 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar1 | 0x3f000000)) *
                  *(float *)(&DAT_1806ba430 + uVar4 * 4);
          return (ulonglong)
                 (uint)(fVar8 * 0.69311523 + *(float *)(&DAT_1806ba010 + uVar4 * 4) +
                       (fVar8 * 3.1946183e-05 - ((fVar9 * 0.33333334 + 0.5) * fVar9 * fVar9 + fVar9)
                       ) + *(float *)(&DAT_1806ba220 + uVar4 * 4));
        }
        fVar9 = in_ZMM0._0_4_ - 1.0;
        fVar10 = fVar9 / (fVar9 + 2.0);
        fVar8 = fVar10 + fVar10;
        return (ulonglong)
               (uint)(fVar9 + (fVar8 * fVar8 * fVar8 * (fVar8 * fVar8 * 0.0125 + 0.083333336) -
                              fVar9 * fVar10));
      }
      if (fVar8 == 0.0) {
        uVar4 = FUN_18062dbf0(param_1,0xff800000,1);
        return uVar4;
      }
    }
    else {
      if (fVar8 == INFINITY) {
        return uVar4;
      }
      if (fVar8 != -INFINITY) {
        uVar4 = FUN_18062dbf0(param_1,(uint)fVar8 | 0x400000,3);
        return uVar4;
      }
    }
    uVar4 = FUN_18062dbf0(param_1,0xffc00000,2);
    return uVar4;
  }
  if (0x7f7fffff < (uint)ABS(fVar8)) {
    if (fVar8 != INFINITY) {
      if (fVar8 == -INFINITY) goto LAB_180627dca;
      uVar4 = (ulonglong)((uint)fVar8 | 0x400000);
    }
    return uVar4;
  }
  if (0.0 < fVar8) {
    uVar1 = (uint)fVar8 & 0x7fffff;
    uVar3 = (uint)ABS(fVar8) >> 0x17;
    if (uVar3 == 0) {
      fVar9 = (float)(uVar1 | 0x3f800000) - 1.0;
      uVar1 = (uint)fVar9 & 0x7fffff;
      iVar2 = ((uint)fVar9 >> 0x17) - 0xfd;
    }
    else {
      iVar2 = uVar3 - 0x7f;
    }
    auVar7._4_60_ = in_ZMM0._4_60_;
    if (0.0625 <= ABS(fVar8 - 1.0)) {
      uVar3 = (uVar1 >> 0x10) + (uint)((uVar1 >> 0xf & 1) != 0);
      uVar4 = (ulonglong)uVar3;
      fVar8 = ((float)(uVar3 * 0x10000 | 0x3f000000) - (float)(uVar1 | 0x3f000000)) *
              *(float *)(&DAT_1806ba430 + uVar4 * 4);
      auVar5._0_16_ = _DAT_1806b1700;
      auVar6._4_60_ = auVar5._4_60_;
      auVar6._0_4_ = (float)DAT_1806b1700 * (float)iVar2 + *(float *)(&DAT_1806ba010 + uVar4 * 4) +
                     ((float)iVar2 * 3.1946183e-05 -
                     (fVar8 + (fVar8 * 0.33333334 + 0.5) * fVar8 * fVar8)) +
                     *(float *)(&DAT_1806ba220 + uVar4 * 4);
      return auVar6._0_8_;
    }
    fVar8 = fVar8 - 1.0;
    fVar9 = fVar8 / (fVar8 + 2.0);
    fVar10 = fVar9 + fVar9;
    auVar7._0_4_ = fVar8 + ((fVar10 * fVar10 * 0.0125 + 0.083333336) * fVar10 * fVar10 * fVar10 -
                           fVar8 * fVar9);
    return auVar7._0_8_;
  }
  if (fVar8 == 0.0) {
    uVar4 = FUN_18062dbf0(param_1,param_2,1);
    return uVar4;
  }
LAB_180627dca:
  uVar4 = FUN_18062dbf0(param_1,param_2,2);
  return uVar4;
}



