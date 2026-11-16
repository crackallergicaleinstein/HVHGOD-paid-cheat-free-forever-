// FUN_1803e79e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e79e0 */

float * FUN_1803e79e0(float *param_1,float param_2,float param_3,undefined1 (*param_4) [16],
                     byte param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  float local_res10 [6];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c [3];
  float local_90;
  float local_8c;
  undefined1 local_88 [128];
  
  auVar1 = *param_4;
  auVar9 = ZEXT1664(auVar1);
  if ((16.0 <= param_2) && (16.0 <= param_3)) {
    auVar2 = vshufps_avx(auVar1,auVar1,0x55);
    auVar12 = ZEXT1664(auVar2);
    auVar3 = vshufps_avx(auVar1,auVar1,0xaa);
    auVar10 = ZEXT1664(auVar3);
    auVar4 = vshufps_avx(auVar1,auVar1,0xff);
    auVar11 = ZEXT1664(auVar4);
    sVar5 = thunk_FUN_180624430(param_2 + param_3 + auVar1._0_4_ + auVar2._0_4_ + auVar3._0_4_ +
                                auVar4._0_4_);
    if (((sVar5 < 1) &&
        (((0.0 <= auVar9._0_4_ && (0.0 <= auVar12._0_4_)) && (auVar10._0_4_ <= 1.0)))) &&
       (((auVar11._0_4_ <= 1.0 && (fVar13 = auVar10._0_4_ - auVar9._0_4_, 0.01 <= fVar13)) &&
        (fVar14 = auVar11._0_4_ - auVar12._0_4_, 0.01 <= fVar14)))) {
      local_9c[1] = 8.0;
      local_9c[2] = 4096.0 / param_2;
      local_90 = 4096.0 / param_3;
      auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x4a742400),0),ZEXT416((uint)(param_2 * param_3)));
      local_8c = auVar1._0_4_ / (param_2 * param_3);
      if (local_8c < 0.0) {
        local_8c = (float)FUN_18061e150();
      }
      else {
        local_8c = SQRT(local_8c);
      }
      pfVar6 = (float *)FUN_1805f9e60(local_9c + 1,local_88);
      local_a8 = *pfVar6;
      pfVar8 = &local_a8;
      if (*pfVar6 <= 0.6) {
        pfVar8 = &local_a4;
      }
      auVar1 = vpcmpeqd_avx(ZEXT416((uint)param_5),SUB6416(ZEXT464(0),0));
      auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3f6b851f),0),SUB6416(ZEXT464(0x3f5c28f6),0),auVar1);
      local_a0 = auVar1._0_4_ / fVar14;
      auVar1 = vpcmpeqd_avx(ZEXT416((uint)param_5),SUB6416(ZEXT464(0),0));
      auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3f666666),0),SUB6416(ZEXT464(0x3f6b851f),0),auVar1);
      local_9c[0] = auVar1._0_4_ / fVar13;
      local_a4 = 0.6;
      pfVar6 = &local_a0;
      if (local_9c[0] <= local_a0) {
        pfVar6 = local_9c;
      }
      fVar13 = *pfVar6;
      param_1[2] = (auVar12._0_4_ + auVar11._0_4_) * 0.5;
      pfVar7 = local_res10;
      if (0.6 <= fVar13) {
        pfVar7 = pfVar6;
      }
      if (*pfVar8 < fVar13) {
        pfVar7 = pfVar8;
      }
      param_1[1] = (auVar9._0_4_ + auVar10._0_4_) * 0.5;
      *param_1 = *pfVar7;
      return param_1;
    }
  }
  *param_1 = 1.0;
  param_1[1] = 0.5;
  param_1[2] = 0.5;
  return param_1;
}



