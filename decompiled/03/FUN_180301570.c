// FUN_180301570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180301570 */

float FUN_180301570(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  float local_res8 [8];
  
  fVar4 = *param_2;
  fVar1 = param_2[1];
  fVar5 = 1.0;
  fVar6 = -1.0;
  local_res8[2] = fVar1 * ((float *)*param_1)[1] + fVar4 * *(float *)*param_1;
  auVar7 = ZEXT464((uint)local_res8[2]);
  fVar4 = fVar1 * fVar1 + fVar4 * fVar4;
  local_res8[4] = 1.0;
  local_res8[0] = -1.0;
  if (fVar4 < 0.0) {
    fVar5 = 1.0;
    fVar6 = -1.0;
    fVar4 = (float)FUN_18061e150(fVar4);
    local_res8[2] = auVar7._0_4_;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  local_res8[2] = local_res8[2] / fVar4;
  pfVar3 = local_res8;
  if (fVar6 <= local_res8[2]) {
    pfVar3 = local_res8 + 2;
  }
  pfVar2 = local_res8 + 4;
  if (local_res8[2] <= fVar5) {
    pfVar2 = pfVar3;
  }
  fVar4 = (float)FUN_180636820(*pfVar2);
  return fVar4 * 57.295776;
}



