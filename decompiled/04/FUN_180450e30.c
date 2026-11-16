// FUN_180450e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450e30 */

float * FUN_180450e30(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_1[2];
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar1 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  fVar2 = 0.0;
  if (fVar1 != 0.0) {
    if (fVar1 < 0.0) {
      fVar2 = 0.0;
      fVar1 = (float)FUN_18061e150(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (fVar2 < fVar1) {
      fVar1 = 1.0 / fVar1;
      *param_1 = fVar1 * fVar4;
      param_1[2] = fVar1 * fVar3;
      param_1[1] = fVar1 * fVar5;
    }
  }
  return param_1;
}



