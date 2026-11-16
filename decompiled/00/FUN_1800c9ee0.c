// FUN_1800c9ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c9ee0 */

void FUN_1800c9ee0(float *param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_78 [28];
  
  fVar5 = param_1[1];
  fVar8 = 1.0;
  local_78[0] = 1.401298e-39;
  local_78[2] = 0.0;
  pfVar4 = local_78 + 2;
  if (-1 < (int)*param_1) {
    pfVar4 = param_1;
  }
  fVar6 = 0.0;
  pfVar2 = local_78;
  if ((int)*param_1 < 0xf4241) {
    pfVar2 = pfVar4;
  }
  local_78[4] = 1.0;
  local_78[0] = 0.0;
  *param_1 = *pfVar2;
  local_78[2] = fVar5;
  sVar1 = thunk_FUN_180624430(fVar5);
  if (sVar1 < 1) {
    pfVar4 = local_78;
    if (fVar6 <= fVar5) {
      pfVar4 = local_78 + 2;
    }
    pfVar2 = local_78 + 4;
    if (fVar5 <= fVar8) {
      pfVar2 = pfVar4;
    }
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 0.0;
  }
  fVar7 = param_1[2];
  fVar9 = 2.0;
  fVar10 = 0.1;
  param_1[1] = fVar5;
  local_78[2] = 2.0;
  local_78[4] = 0.1;
  local_78[0] = fVar7;
  sVar1 = thunk_FUN_180624430(fVar7);
  if (sVar1 < 1) {
    pfVar4 = local_78 + 4;
    if (fVar10 <= fVar7) {
      pfVar4 = local_78;
    }
    pfVar2 = local_78 + 2;
    if (fVar7 <= fVar9) {
      pfVar2 = pfVar4;
    }
    fVar8 = *pfVar2;
  }
  fVar5 = param_1[3];
  fVar7 = -180.0;
  param_1[2] = fVar8;
  fVar8 = 180.0;
  local_78[2] = 180.0;
  local_78[4] = -180.0;
  local_78[0] = fVar5;
  sVar1 = thunk_FUN_180624430(fVar5);
  if (sVar1 < 1) {
    pfVar4 = local_78 + 4;
    if (fVar7 <= fVar5) {
      pfVar4 = local_78;
    }
    pfVar2 = local_78 + 2;
    if (fVar5 <= fVar8) {
      pfVar2 = pfVar4;
    }
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 0.0;
  }
  fVar8 = param_1[4];
  fVar7 = 20.0;
  fVar9 = -20.0;
  param_1[3] = fVar5;
  local_78[2] = 20.0;
  local_78[4] = -20.0;
  local_78[0] = fVar8;
  sVar1 = thunk_FUN_180624430(fVar8);
  if (sVar1 < 1) {
    pfVar4 = local_78 + 4;
    if (fVar9 <= fVar8) {
      pfVar4 = local_78;
    }
    pfVar2 = local_78 + 2;
    if (fVar8 <= fVar7) {
      pfVar2 = pfVar4;
    }
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 0.0;
  }
  fVar8 = param_1[5];
  param_1[4] = fVar5;
  local_78[0] = fVar8;
  local_78[2] = fVar7;
  local_78[4] = fVar9;
  sVar1 = thunk_FUN_180624430(fVar8);
  if (sVar1 < 1) {
    pfVar4 = local_78 + 4;
    if (fVar9 <= fVar8) {
      pfVar4 = local_78;
    }
    pfVar2 = local_78 + 2;
    if (fVar8 <= fVar7) {
      pfVar2 = pfVar4;
    }
    fVar6 = *pfVar2;
  }
  pfVar4 = param_1 + 6;
  local_78[0] = 5.60519e-45;
  param_1[5] = fVar6;
  pfVar2 = local_78 + 4;
  if (-2 < (int)*pfVar4) {
    pfVar2 = pfVar4;
  }
  local_78[4] = -NAN;
  pfVar3 = local_78;
  if ((int)*pfVar4 < 5) {
    pfVar3 = pfVar2;
  }
  *pfVar4 = *pfVar3;
  return;
}



