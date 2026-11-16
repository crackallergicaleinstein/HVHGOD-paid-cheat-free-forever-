// FUN_1802fecd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fecd0 */

void FUN_1802fecd0(undefined8 param_1,uint *param_2,float param_3,float param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  
  auVar10 = ZEXT464((uint)(param_3 * 0.017453292));
  fVar8 = (float)param_2[0x12];
  fVar9 = (float)param_2[0x13];
  fVar6 = (float)FUN_180638e00(param_3 * 0.017453292);
  auVar10._0_8_ = FUN_180637540(auVar10._0_8_);
  auVar10._8_56_ = extraout_var;
  auVar11 = ZEXT464((uint)(param_4 * 0.017453292));
  auVar10 = ZEXT1664(auVar10._0_16_);
  fVar7 = (float)FUN_180638e00(param_4 * 0.017453292);
  auVar11._0_8_ = FUN_180637540(auVar11._0_8_);
  auVar11._8_56_ = extraout_var_00;
  fVar2 = fVar8 * 0.0 * 0.0;
  fVar3 = fVar9 * 0.0 * 0.0;
  fVar4 = auVar10._0_4_ * fVar9;
  fVar5 = auVar10._0_4_ * fVar8;
  auVar1 = vinsertps_avx(auVar10._0_16_,auVar11._0_16_,0xe);
  fVar12 = auVar1._0_4_;
  fVar13 = -(-fVar6 * fVar9 * fVar12 + fVar4 * fVar7 + fVar3 +
            fVar5 * fVar12 + fVar6 * fVar8 * fVar7 + fVar2);
  fVar9 = -(-fVar6 * fVar9 * -fVar7 + fVar4 * fVar12 + fVar3 +
           fVar5 * -fVar7 + fVar6 * fVar8 * fVar12 + fVar2);
  fVar8 = fVar9 * fVar9 + fVar13 * fVar13;
  if (fVar8 < 0.0) {
    fVar8 = (float)FUN_18061e150();
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (1.0 < fVar8) {
    fVar13 = fVar13 / fVar8;
    fVar9 = fVar9 / fVar8;
  }
  *param_2 = *param_2 | 0xc0;
  param_2[0x12] = (uint)fVar13;
  param_2[0x13] = (uint)fVar9;
  return;
}



