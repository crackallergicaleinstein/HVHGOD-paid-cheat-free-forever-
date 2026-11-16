// FUN_1802c8f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c8f40 */

float * FUN_1802c8f40(float *param_1,int param_2,undefined8 param_3,undefined8 param_4,float param_5
                     ,float param_6,float param_7)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  float fVar14;
  float local_res10 [2];
  float local_e8 [6];
  float local_d0 [6];
  float local_b8 [44];
  
  fVar6 = 0.05;
  fVar11 = 5.0;
  local_e8[4] = 5.0;
  local_e8[0] = 0.05;
  local_e8[2] = (float)param_4;
  sVar1 = thunk_FUN_180624430(param_4);
  if (sVar1 < 1) {
    pfVar3 = local_e8;
    if (fVar6 <= (float)param_4) {
      pfVar3 = local_e8 + 2;
    }
    pfVar2 = local_e8 + 4;
    if ((float)param_4 <= fVar11) {
      pfVar2 = pfVar3;
    }
    fVar11 = *pfVar2;
  }
  else {
    fVar11 = 0.5;
  }
  fVar9 = 0.0;
  local_d0[0] = 0.0;
  local_d0[2] = (float)param_3;
  local_d0[4] = fVar11;
  sVar1 = thunk_FUN_180624430(param_3);
  if (sVar1 < 1) {
    pfVar3 = local_d0;
    if (fVar9 <= (float)param_3) {
      pfVar3 = local_d0 + 2;
    }
    pfVar2 = local_d0 + 4;
    if ((float)param_3 <= fVar11) {
      pfVar2 = pfVar3;
    }
    auVar10 = ZEXT464((uint)*pfVar2);
  }
  else {
    auVar10 = ZEXT864(0);
  }
  fVar7 = 0.01;
  auVar12 = ZEXT464((uint)(fVar11 * 0.8));
  local_b8[0] = 0.01;
  local_b8[2] = param_5;
  local_b8[4] = fVar6;
  sVar1 = thunk_FUN_180624430(param_5);
  if (sVar1 < 1) {
    pfVar3 = local_b8;
    if (fVar7 <= param_5) {
      pfVar3 = local_b8 + 2;
    }
    pfVar2 = local_b8 + 4;
    if (param_5 <= fVar6) {
      pfVar2 = pfVar3;
    }
    auVar4 = ZEXT416((uint)*pfVar2);
  }
  else {
    auVar4 = SUB6416(ZEXT464(0x3ca3d70a),0);
  }
  auVar8 = ZEXT464(0x3f800000);
  auVar4 = vminss_avx(auVar12._0_16_,auVar4);
  auVar12 = ZEXT1664(auVar4);
  local_res10[0] = 1.0;
  param_5 = fVar6;
  sVar1 = thunk_FUN_180624430(param_6);
  if (sVar1 < 1) {
    pfVar3 = &param_5;
    if (fVar6 <= param_6) {
      pfVar3 = &param_6;
    }
    pfVar2 = local_res10;
    if (param_6 <= auVar8._0_4_) {
      pfVar2 = pfVar3;
    }
    fVar6 = *pfVar2;
  }
  else {
    fVar6 = 0.35;
  }
  fVar7 = 4.0;
  fVar14 = 0.25;
  local_res10[0] = 4.0;
  param_5 = 0.25;
  param_6 = param_7;
  sVar1 = thunk_FUN_180624430(param_7);
  if (sVar1 < 1) {
    pfVar3 = &param_5;
    if (fVar14 <= param_7) {
      pfVar3 = &param_6;
    }
    pfVar2 = local_res10;
    if (param_7 <= fVar7) {
      pfVar2 = pfVar3;
    }
    uVar5 = (ulonglong)(uint)*pfVar2;
  }
  else {
    uVar5 = auVar8._0_8_;
  }
  auVar4 = vminss_avx(ZEXT416((uint)(fVar11 * 0.2)),ZEXT416(0x3d75c28f));
  param_6 = auVar10._0_4_ / auVar4._0_4_;
  fVar11 = auVar10._0_4_ / fVar11;
  auVar13 = ZEXT1664(CONCAT124(auVar10._4_12_,fVar11));
  param_7 = auVar8._0_4_;
  param_5 = fVar9;
  pfVar3 = &param_5;
  if (fVar9 <= param_6) {
    pfVar3 = &param_6;
  }
  pfVar2 = &param_7;
  if (param_6 <= param_7) {
    pfVar2 = pfVar3;
  }
  fVar7 = *pfVar2;
  fVar11 = (float)FUN_180637bd0(param_7 - fVar11,uVar5);
  param_7 = auVar8._0_4_;
  if (param_2 == 1) {
    param_6 = auVar10._0_4_ / auVar12._0_4_;
    pfVar3 = &param_5;
    if (fVar9 <= param_6) {
      pfVar3 = &param_6;
    }
    pfVar2 = &param_7;
    if (param_6 <= param_7) {
      pfVar2 = pfVar3;
    }
    param_5 = fVar9;
    param_1[1] = *pfVar2;
  }
  else {
    param_1[1] = 1.0;
    if (param_2 == 2) {
      *param_1 = (param_7 - fVar6) * auVar13._0_4_;
      goto LAB_1802c9203;
    }
  }
  *param_1 = 0.0;
LAB_1802c9203:
  param_1[2] = fVar11 * (3.0 - (fVar7 + fVar7)) * fVar7 * fVar7;
  return param_1;
}



