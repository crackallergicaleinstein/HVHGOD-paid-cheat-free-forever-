// FUN_1803743e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803743e0 */

float * FUN_1803743e0(float *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     float param_5,double param_6)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float local_res10 [6];
  
  fVar5 = 360.0;
  fVar13 = 0.0;
  local_res10[4] = 360.0;
  local_res10[0] = 0.0;
  local_res10[2] = (float)param_2;
  sVar1 = thunk_FUN_180624430(param_2);
  if (sVar1 < 1) {
    pfVar3 = local_res10;
    if (fVar13 <= (float)param_2) {
      pfVar3 = local_res10 + 2;
    }
    pfVar2 = local_res10 + 4;
    if ((float)param_2 <= fVar5) {
      pfVar2 = pfVar3;
    }
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 0.0;
  }
  auVar15 = ZEXT464((uint)((fVar5 * 3.1415927) / 180.0));
  fVar5 = 5.0;
  local_res10[4] = 5.0;
  local_res10[2] = (float)param_3;
  local_res10[0] = fVar13;
  sVar1 = thunk_FUN_180624430(param_3);
  fVar4 = 3.0;
  if (sVar1 < 1) {
    pfVar3 = local_res10;
    if (fVar13 <= (float)param_3) {
      pfVar3 = local_res10 + 2;
    }
    pfVar2 = local_res10 + 4;
    if ((float)param_3 <= fVar5) {
      pfVar2 = pfVar3;
    }
    fVar14 = *pfVar2;
  }
  else {
    fVar14 = 3.0;
  }
  fVar14 = fVar14 / fVar5;
  local_res10[2] = (float)param_4;
  local_res10[0] = fVar13;
  local_res10[4] = fVar5;
  sVar1 = thunk_FUN_180624430(param_4);
  fVar10 = 1.0;
  if (sVar1 < 1) {
    pfVar3 = local_res10;
    if (fVar13 <= (float)param_4) {
      pfVar3 = local_res10 + 2;
    }
    pfVar2 = local_res10 + 4;
    if ((float)param_4 <= fVar5) {
      pfVar2 = pfVar3;
    }
    fVar13 = *pfVar2;
  }
  else {
    fVar13 = 1.0;
  }
  fVar13 = fVar13 / fVar5;
  fVar9 = 0.1;
  local_res10[0] = 0.1;
  fVar5 = param_5;
  local_res10[2] = fVar4;
  sVar1 = thunk_FUN_180624430(param_5);
  if (sVar1 < 1) {
    pfVar3 = local_res10;
    if (fVar9 <= fVar5) {
      pfVar3 = &param_5;
    }
    pfVar2 = local_res10 + 2;
    if (fVar5 <= fVar4) {
      pfVar2 = pfVar3;
    }
    fVar10 = *pfVar2;
  }
  dVar12 = 0.6;
  fVar13 = fVar13 * 0.9;
  dVar11 = 0.3;
  dVar8 = param_6 * 0.6 * (double)fVar10;
  dVar6 = (double)FUN_18061db20(dVar8 * 0.9 + 0.3);
  dVar6 = dVar6 * dVar12;
  dVar7 = (double)FUN_18061db20(dVar8 * 2.3 + 1.7);
  dVar6 = dVar6 + dVar7 * dVar11;
  dVar7 = (double)FUN_18061db20(dVar8 * 5.1 + 4.2);
  fVar5 = (float)(dVar6 + dVar7 * 0.15) * fVar13;
  fVar4 = (float)FUN_180637540(auVar15._0_8_);
  *param_1 = fVar5 + fVar4 * fVar14;
  dVar6 = (double)FUN_18061db20(dVar8 * 1.1 + 2.0);
  dVar6 = dVar6 * dVar12;
  dVar7 = (double)FUN_18061db20(dVar8 * 2.7 + 0.5);
  dVar6 = dVar6 + dVar7 * dVar11;
  dVar8 = (double)FUN_18061db20(dVar8 * 4.6 + 3.1);
  fVar13 = (float)(dVar6 + dVar8 * 0.15) * fVar13;
  fVar5 = (float)FUN_180638e00(auVar15._0_8_);
  param_1[2] = 0.0;
  param_1[1] = fVar13 + fVar5 * fVar14;
  return param_1;
}



