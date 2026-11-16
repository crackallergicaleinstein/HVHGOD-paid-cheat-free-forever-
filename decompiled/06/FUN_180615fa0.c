// FUN_180615fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180615fa0 */

ulonglong FUN_180615fa0(void)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  double dVar6;
  double dVar7;
  
  fVar2 = in_ZMM0._0_4_;
  if (((byte)DAT_180bb2128 & 3) == 3) {
    uVar1 = (uint)fVar2 >> 0x14 & 0x7ff;
    if (0x42f < uVar1) {
      if (fVar2 == -INFINITY) {
        return 0;
      }
      if (0x7f7 < uVar1) {
        return (ulonglong)(uint)(fVar2 + fVar2);
      }
      if (0.0 < fVar2) {
        uVar3 = FUN_180628470(0);
        return uVar3;
      }
      if (fVar2 <= -150.0) {
        uVar3 = FUN_1806284c0(0);
        return uVar3;
      }
    }
    dVar6 = (double)fVar2 + 211106232532992.0;
    dVar7 = (double)fVar2 - (dVar6 - 211106232532992.0);
    dVar6 = (dVar7 * dVar7 * (dVar7 * 0.05550361559341535 + 0.2402284522445722) +
            dVar7 * 0.6931471806916203 + 1.0) *
            (double)(((longlong)dVar6 << 0x2f) +
                    *(longlong *)(&DAT_1806b1770 + (ulonglong)(SUB84(dVar6,0) & 0x1f) * 8));
    return CONCAT44((int)((ulonglong)dVar6 >> 0x20),(float)dVar6);
  }
  auVar4._16_48_ = in_ZMM1._16_48_;
  auVar4._0_16_ = in_ZMM0._0_16_;
  uVar1 = (uint)fVar2 >> 0x14 & 0x7ff;
  auVar5._4_60_ = auVar4._4_60_;
  if (0x42f < uVar1) {
    if (fVar2 == -INFINITY) {
      return 0;
    }
    if (0x7f7 < uVar1) {
      auVar5._0_4_ = fVar2 + fVar2;
      return auVar5._0_8_;
    }
    if (0.0 < fVar2) {
      uVar3 = FUN_180628470(0);
      return uVar3;
    }
    if (fVar2 <= -150.0) {
      uVar3 = FUN_1806284c0(0);
      return uVar3;
    }
  }
  dVar6 = (double)fVar2 + 211106232532992.0;
  dVar7 = (double)fVar2 - (dVar6 - 211106232532992.0);
  return (ulonglong)
         (uint)(float)(((dVar7 * 0.05550361559341535 + 0.2402284522445722) * dVar7 * dVar7 +
                       dVar7 * 0.6931471806916203 + 1.0) *
                      (double)(((longlong)dVar6 << 0x2f) +
                              *(longlong *)(&DAT_1806b1770 + (ulonglong)(SUB84(dVar6,0) & 0x1f) * 8)
                              ));
}



