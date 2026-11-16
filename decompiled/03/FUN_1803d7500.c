// FUN_1803d7500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d7500 */

float FUN_1803d7500(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)*param_1 == '\0') {
    pfVar3 = (float *)param_1[5];
    fVar1 = param_2[1];
    fVar9 = *param_2;
    fVar2 = param_2[2];
    fVar5 = fVar1 * pfVar3[4] + fVar9 * *pfVar3 + fVar2 * pfVar3[8];
    fVar6 = fVar1 * pfVar3[5] + fVar9 * pfVar3[1] + fVar2 * pfVar3[9];
    fVar8 = 0.0;
    fVar7 = fVar1 * pfVar3[6] + fVar9 * pfVar3[2] + fVar2 * pfVar3[10];
    fVar10 = *(float *)param_1[1];
    if (fVar10 <= 0.0) {
      pfVar3 = (float *)param_1[4];
      fVar1 = ABS(fVar6 * pfVar3[1]) + ABS(fVar5 * *pfVar3) + ABS(fVar7 * pfVar3[2]);
    }
    else {
      pfVar3 = (float *)param_1[2];
      pfVar4 = (float *)param_1[3];
      fVar9 = ABS((pfVar3[1] - pfVar4[1]) * fVar1 + (*pfVar3 - *pfVar4) * fVar9 +
                  (pfVar3[2] - pfVar4[2]) * fVar2);
      fVar1 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
      if (fVar1 != 0.0) {
        if (fVar1 < 0.0) {
          fVar8 = (float)FUN_18061e150(fVar1);
        }
        else {
          fVar8 = SQRT(fVar1);
        }
      }
      fVar1 = fVar10 * fVar8 + fVar9 * 0.5;
    }
    return fVar1;
  }
  if (*(float *)param_1[1] <= 0.0) {
    pfVar3 = (float *)param_1[4];
    return ABS(pfVar3[1] * param_2[1]) + ABS(*pfVar3 * *param_2) + ABS(pfVar3[2] * param_2[2]);
  }
  pfVar3 = (float *)param_1[2];
  pfVar4 = (float *)param_1[3];
  return ABS((pfVar3[1] - pfVar4[1]) * param_2[1] + (*pfVar3 - *pfVar4) * *param_2 +
             (pfVar3[2] - pfVar4[2]) * param_2[2]) * 0.5 + *(float *)param_1[1];
}



