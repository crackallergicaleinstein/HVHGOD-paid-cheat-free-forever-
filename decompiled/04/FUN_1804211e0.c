// FUN_1804211e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804211e0 */

void FUN_1804211e0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 * param_2[3] - param_2[2] * param_2[1];
  if ((-1e-06 < fVar1) && (fVar1 < 1e-06)) {
    param_2[0] = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[5] = 0.0;
    param_2[3] = 1.0;
    param_2[4] = 0.0;
    return;
  }
  fVar1 = 1.0 / fVar1;
  *param_1 = fVar1 * param_2[3];
  param_1[2] = -param_2[2] * fVar1;
  param_1[4] = (param_2[2] * param_2[5] - param_2[3] * param_2[4]) * fVar1;
  param_1[1] = -param_2[1] * fVar1;
  param_1[3] = *param_2 * fVar1;
  param_1[5] = (param_2[4] * param_2[1] - param_2[5] * *param_2) * fVar1;
  return;
}



