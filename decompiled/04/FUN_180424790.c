// FUN_180424790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180424790 */

float FUN_180424790(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  
  auVar5 = ZEXT464((uint)(param_1 * param_3 + param_2 * param_4));
  fVar3 = param_1 * param_1 + param_2 * param_2;
  if (fVar3 < 0.0) {
    fVar3 = (float)FUN_18061e150();
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  auVar4 = auVar5._0_16_;
  fVar1 = param_3 * param_3 + param_4 * param_4;
  if (fVar1 < 0.0) {
    fVar1 = (float)FUN_18061e150();
    auVar4 = auVar5._0_16_;
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  auVar5 = ZEXT464(0x3f800000);
  auVar2._0_4_ = auVar4._0_4_ / (fVar3 * fVar1);
  auVar2._4_12_ = auVar4._4_12_;
  auVar6 = ZEXT464(0xbf800000);
  auVar4 = vmaxss_avx(auVar6._0_16_,auVar2);
  auVar4 = vminss_avx(auVar5._0_16_,auVar4);
  fVar3 = (float)FUN_180636820(auVar4._0_8_);
  auVar4 = vcmpss_avx(ZEXT416((uint)(param_1 * param_4)),ZEXT416((uint)(param_2 * param_3)),1);
  auVar4 = vblendvps_avx(auVar5._0_16_,auVar6._0_16_,auVar4);
  return fVar3 * auVar4._0_4_;
}



