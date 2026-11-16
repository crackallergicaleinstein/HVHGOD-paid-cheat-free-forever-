// FUN_180639bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180639bd0 */

ulonglong FUN_180639bd0(void)

{
  undefined1 auVar1 [16];
  float fVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 in_ZMM0 [64];
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  float fVar10;
  
  fVar4 = in_ZMM0._0_4_;
  uVar3 = (uint)fVar4 >> 0x17 & 0xff;
  auVar6 = in_ZMM0._0_16_;
  auVar8 = ZEXT1664(auVar6);
  fVar9 = 0.0;
  if (0x7f800000 < (uint)ABS(fVar4)) {
    uVar5 = FUN_180635020();
    return uVar5;
  }
  if (uVar3 < 0x71) {
    FUN_1806281c0(0x20);
    return auVar8._0_8_;
  }
  if (uVar3 < 0x7f) {
    if ((int)fVar4 < 0) {
      auVar6._0_8_ = in_ZMM0._0_8_ ^ 0x8000000080000000;
      auVar6._8_4_ = in_ZMM0._8_4_ ^ 0x80000000;
      auVar6._12_4_ = in_ZMM0._12_4_ ^ 0x80000000;
    }
    fVar7 = auVar6._0_4_;
    if (uVar3 < 0x7e) {
      fVar7 = fVar7 * fVar7;
    }
    else {
      fVar7 = (1.0 - fVar7) * 0.5;
      fVar9 = SQRT(fVar7);
      auVar6 = ZEXT416((uint)fVar9);
    }
    fVar10 = ((fVar7 * (fVar7 * (-(fVar7 * 0.0039613745) + -0.013381929) - 0.05652987) + 0.1841616)
             * fVar7) / (-(fVar7 * 0.8364113) + 1.1049696);
    if (uVar3 < 0x7e) {
      auVar1._4_12_ = auVar6._4_12_;
      auVar1._0_4_ = fVar10 * auVar6._0_4_ + auVar6._0_4_;
      uVar5 = auVar1._0_8_;
    }
    else {
      fVar2 = (float)((uint)fVar9 & 0xffff0000);
      fVar7 = (-(fVar2 * fVar2) + fVar7) / (fVar2 + fVar9);
      uVar5 = (ulonglong)
              (uint)(0.7853981 -
                    ((fVar10 * (fVar9 + fVar9) - (7.5497894e-08 - (fVar7 + fVar7))) -
                    (0.7853981 - (fVar2 + fVar2))));
    }
    if ((int)fVar4 < 0) {
      uVar5 = uVar5 ^ 0x8000000080000000;
    }
    return uVar5;
  }
  if (fVar4 == 1.0) {
    FUN_1806281c0(0x20);
    return SUB648(ZEXT464(0x3fc90fdb),0);
  }
  if (fVar4 == -1.0) {
    FUN_1806281c0(0x20);
    return SUB648(ZEXT464(0xbfc90fdb),0);
  }
  uVar5 = FUN_180622560("asinf",0xe,0xffc00000,1,8,0x21);
  return uVar5;
}



