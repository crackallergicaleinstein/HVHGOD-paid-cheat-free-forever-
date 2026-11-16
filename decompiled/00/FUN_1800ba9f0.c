// FUN_1800ba9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ba9f0 */

undefined8 * FUN_1800ba9f0(undefined8 *param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68 [24];
  
  local_68[0] = 2.8026e-45;
  fVar6 = 100.0;
  pfVar5 = local_68 + 2;
  if (-1 < (int)*param_2) {
    pfVar5 = param_2;
  }
  local_68[2] = 0.0;
  pfVar4 = local_68;
  if ((int)*param_2 < 3) {
    pfVar4 = pfVar5;
  }
  fVar7 = param_2[2];
  *param_2 = *pfVar4;
  pfVar4 = param_2 + 1;
  local_68[0] = 2.8026e-45;
  fVar8 = 0.0;
  pfVar5 = local_68;
  if (1 < (int)*pfVar4) {
    pfVar5 = pfVar4;
  }
  local_68[4] = 100.0;
  if (4 < (int)*pfVar4) {
    pfVar5 = (float *)&DAT_1806ff328;
  }
  local_68[2] = fVar7;
  local_68[0] = 0.0;
  *pfVar4 = *pfVar5;
  sVar3 = thunk_FUN_180624430(fVar7);
  if (sVar3 < 1) {
    pfVar5 = local_68;
    if (fVar8 <= fVar7) {
      pfVar5 = local_68 + 2;
    }
    pfVar4 = local_68 + 4;
    if (fVar7 <= fVar6) {
      pfVar4 = pfVar5;
    }
    fVar6 = *pfVar4;
  }
  fVar7 = 0.3;
  param_2[2] = fVar6;
  fVar6 = param_2[3];
  local_68[2] = 0.3;
  local_68[0] = fVar6;
  local_68[4] = fVar8;
  sVar3 = thunk_FUN_180624430(fVar6);
  if (sVar3 < 1) {
    pfVar5 = local_68 + 4;
    if (fVar8 <= fVar6) {
      pfVar5 = local_68;
    }
    pfVar4 = local_68 + 2;
    if (fVar6 <= fVar7) {
      pfVar4 = pfVar5;
    }
    fVar6 = *pfVar4;
  }
  else {
    fVar6 = 0.08;
  }
  fVar7 = param_2[4];
  fVar9 = 32.0;
  fVar8 = 0.25;
  param_2[3] = fVar6;
  local_68[2] = 32.0;
  local_68[4] = 0.25;
  local_68[0] = fVar7;
  sVar3 = thunk_FUN_180624430(fVar7);
  if (sVar3 < 1) {
    pfVar5 = local_68 + 4;
    if (fVar8 <= fVar7) {
      pfVar5 = local_68;
    }
    pfVar4 = local_68 + 2;
    if (fVar7 <= fVar9) {
      pfVar4 = pfVar5;
    }
    fVar6 = *pfVar4;
  }
  else {
    fVar6 = 6.0;
  }
  fVar7 = param_2[5];
  fVar9 = 3.0;
  fVar10 = 0.5;
  param_2[4] = fVar6;
  local_68[2] = 3.0;
  local_68[4] = 0.5;
  local_68[0] = fVar7;
  sVar3 = thunk_FUN_180624430(fVar7);
  if (sVar3 < 1) {
    pfVar5 = local_68 + 4;
    if (fVar10 <= fVar7) {
      pfVar5 = local_68;
    }
    pfVar4 = local_68 + 2;
    if (fVar7 <= fVar9) {
      pfVar4 = pfVar5;
    }
    fVar6 = *pfVar4;
  }
  else {
    fVar6 = 1.5;
  }
  fVar7 = param_2[6];
  fVar9 = 16.0;
  param_2[5] = fVar6;
  local_68[2] = 16.0;
  local_68[0] = fVar7;
  local_68[4] = fVar8;
  sVar3 = thunk_FUN_180624430(fVar7);
  if (sVar3 < 1) {
    pfVar5 = local_68 + 4;
    if (fVar8 <= fVar7) {
      pfVar5 = local_68;
    }
    pfVar4 = local_68 + 2;
    if (fVar7 <= fVar9) {
      pfVar4 = pfVar5;
    }
    fVar6 = *pfVar4;
  }
  else {
    fVar6 = 2.0;
  }
  param_2[6] = fVar6;
  fVar6 = param_2[6];
  uVar2 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  *(float *)(param_1 + 3) = fVar6;
  return param_1;
}



