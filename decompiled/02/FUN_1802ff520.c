// FUN_1802ff520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff520 */

undefined8 FUN_1802ff520(float param_1,float param_2)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  
  fVar11 = -3.4028235e+38;
  auVar12 = ZEXT464(0x3f800000);
  fVar4 = param_1 * param_1 + param_2 * param_2;
  auVar9 = ZEXT1664(auVar12._0_16_);
  auVar10 = ZEXT864(0);
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18061e150();
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 < 0.0001) {
    auVar5 = vunpcklps_avx(auVar12._0_16_,auVar10._0_16_);
    uVar2 = auVar5._0_8_;
  }
  else {
    pfVar3 = (float *)&DAT_180701cd0;
    param_2 = param_2 / fVar4;
    param_1 = param_1 / fVar4;
    do {
      fVar4 = *pfVar3;
      auVar6 = ZEXT464((uint)fVar4);
      auVar5 = ZEXT416((uint)fVar4);
      fVar1 = pfVar3[1];
      auVar8 = ZEXT464((uint)fVar1);
      auVar7 = ZEXT416((uint)fVar1);
      fVar4 = fVar1 * fVar1 + fVar4 * fVar4;
      if (fVar4 < 0.0) {
        fVar4 = (float)FUN_18061e150();
        auVar5 = auVar6._0_16_;
        auVar7 = auVar8._0_16_;
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      fVar4 = auVar12._0_4_ / fVar4;
      fVar4 = fVar4 * auVar7._0_4_ * param_2 + fVar4 * auVar5._0_4_ * param_1;
      if (fVar11 < fVar4) {
        auVar9 = ZEXT1664(auVar5);
        auVar10 = ZEXT1664(auVar7);
        fVar11 = fVar4;
      }
      pfVar3 = pfVar3 + 2;
    } while (pfVar3 != (float *)&DAT_180701d10);
    auVar5 = vunpcklps_avx(auVar9._0_16_,auVar10._0_16_);
    uVar2 = auVar5._0_8_;
  }
  return uVar2;
}



