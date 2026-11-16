// FUN_180627970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180627970 */

undefined8 FUN_180627970(undefined8 param_1)

{
  undefined8 in_RCX;
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  double in_XMM0_Qb;
  double dVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar8;
  
  fVar1 = (float)param_1;
  fVar2 = ABS(fVar1);
  if (0x42afffff < (uint)fVar2) {
    if (0x7f7fffff < (uint)fVar2) {
      if (fVar1 == INFINITY) {
        return param_1;
      }
      if (fVar1 == -INFINITY) {
        return 0;
      }
      uVar4 = FUN_18062da50(in_RCX,(uint)fVar1 | 0x400000,1);
      return uVar4;
    }
    if (8192.0 <= fVar1 * 92.33248) {
      uVar4 = FUN_18062da50(fVar2,fVar2,3);
      return uVar4;
    }
    if (fVar1 * 92.33248 < -9600.0) {
      uVar4 = FUN_18062da50(fVar2,fVar2,2);
      return uVar4;
    }
  }
  uVar8 = (uint)(fVar1 * 92.33248);
  dVar3 = (double)fVar1 - (double)(int)uVar8 * 0.010830424696249145;
  dVar7 = in_XMM0_Qb - 0.0;
  auVar5._0_8_ = ((dVar3 * dVar3 * (dVar3 * 0.16666666666666666 + 0.5) + dVar3) *
                  *(double *)(&DAT_1806b1de0 + (ulonglong)(uVar8 & 0x3f) * 8) +
                 *(double *)(&DAT_1806b1de0 + (ulonglong)(uVar8 & 0x3f) * 8)) *
                 (double)((ulonglong)(uint)((int)(uVar8 - (uVar8 & 0x3f)) >> 6) + 0x3ff << 0x34);
  auVar5._8_8_ = ((dVar7 * dVar7 * (dVar7 * 0.0 + 0.0) + dVar7) * 0.0 + 0.0) * 0.0;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = (float)auVar5._0_8_;
  return auVar6._0_8_;
}



