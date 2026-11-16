// FUN_180627ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180627ae0 */

undefined8 FUN_180627ae0(undefined8 param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar9;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 in_ZMM0 [64];
  undefined1 auVar10 [16];
  
  fVar4 = in_ZMM0._0_4_;
  auVar7._16_48_ = in_ZMM0._16_48_;
  if (DAT_180bb2128 == 0) {
    fVar3 = ABS(fVar4);
    if (0x42afffff < (uint)fVar3) {
      if (0x7f7fffff < (uint)fVar3) {
        if (fVar4 == INFINITY) {
          return in_ZMM0._0_8_;
        }
        if (fVar4 == -INFINITY) {
          return 0;
        }
        uVar6 = FUN_18062da50(param_1,(uint)fVar4 | 0x400000,1);
        return uVar6;
      }
      if (8192.0 <= fVar4 * 92.33248) {
        uVar6 = FUN_18062da50(param_1,fVar3,3);
        return uVar6;
      }
      if (fVar4 * 92.33248 < -9600.0) {
        uVar6 = FUN_18062da50(param_1,fVar3,2);
        return uVar6;
      }
    }
    uVar2 = (uint)(fVar4 * 92.33248);
    dVar5 = (double)fVar4 - (double)(int)uVar2 * 0.010830424696249145;
    dVar9 = in_ZMM0._8_8_ - 0.0;
    auVar7._0_8_ = ((dVar5 * dVar5 * (dVar5 * 0.16666666666666666 + 0.5) + dVar5) *
                    *(double *)(&DAT_1806b1de0 + (ulonglong)(uVar2 & 0x3f) * 8) +
                   *(double *)(&DAT_1806b1de0 + (ulonglong)(uVar2 & 0x3f) * 8)) *
                   (double)((ulonglong)(uint)((int)(uVar2 - (uVar2 & 0x3f)) >> 6) + 0x3ff << 0x34);
    auVar7._8_8_ = ((dVar9 * dVar9 * (dVar9 * 0.0 + 0.0) + dVar9) * 0.0 + 0.0) * 0.0;
    auVar8._4_60_ = auVar7._4_60_;
    auVar8._0_4_ = (float)auVar7._0_8_;
    return auVar8._0_8_;
  }
  fVar3 = ABS(fVar4);
  if ((uint)fVar3 < 0x42b00000) {
    dVar5 = (double)fVar4 * 92.33248261689366;
  }
  else {
    if (0x7f7fffff < (uint)fVar3) {
      if (fVar4 == INFINITY) {
        return in_ZMM0._0_8_;
      }
      if (fVar4 == -INFINITY) {
        return 0;
      }
      uVar6 = FUN_18062da50(param_1,(uint)fVar4 | 0x400000,1);
      return uVar6;
    }
    dVar5 = (double)fVar4 * 92.33248261689366;
    if (8192.0 <= dVar5) {
      uVar6 = FUN_18062da50(fVar3,0x7f800000,3);
      return uVar6;
    }
    if (dVar5 < -9600.0) {
      uVar6 = FUN_18062da50(fVar3,0,2);
      return uVar6;
    }
  }
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar5;
  auVar1 = vcvtpd2dq_avx(auVar10);
  auVar10 = vcvtdq2pd_avx(auVar1);
  dVar5 = -(auVar10._0_8_ * 0.010830424696249145) + (double)fVar4;
  uVar2 = auVar1._0_4_ & 0x3f;
  dVar5 = (*(double *)(&DAT_1806b1de0 + (ulonglong)uVar2 * 8) *
           ((dVar5 * 0.16666666666666666 + 0.5) * dVar5 * dVar5 + dVar5) +
          *(double *)(&DAT_1806b1de0 + (ulonglong)uVar2 * 8)) *
          (double)((ulonglong)(uint)((int)(auVar1._0_4_ - uVar2) >> 6) + 0x3ff << 0x34);
  return CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5);
}



