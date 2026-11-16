// FUN_1802c3850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c3850 */

float * FUN_1802c3850(float *param_1,float *param_2,float *param_3,undefined8 param_4,float param_5,
                     float param_6,float param_7)

{
  float fVar1;
  short sVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b8 [6];
  float local_a0 [38];
  
  sVar2 = thunk_FUN_180624430(param_4);
  if ((((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(param_5), sVar2 < 1)) &&
      (fVar4 = 0.0, 0.0 < (float)param_4)) && (0.0 < param_5)) {
    fVar6 = *param_3;
    fVar7 = param_3[1];
    fVar8 = param_3[2];
    fVar9 = *param_2;
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    local_b8[0] = fVar9;
    local_b8[1] = fVar10;
    local_b8[2] = fVar11;
    local_b8[3] = fVar6;
    local_b8[4] = fVar7;
    local_b8[5] = fVar8;
    pfVar3 = local_b8;
    do {
      sVar2 = thunk_FUN_180624430(*pfVar3);
      fVar5 = (float)param_4;
      if (0 < sVar2) goto LAB_1802c3a0d;
      pfVar3 = pfVar3 + 1;
    } while (pfVar3 != local_a0);
    fVar1 = fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8;
    if (((((0.99 <= fVar1) && (fVar1 <= 1.01)) &&
         ((sVar2 = thunk_FUN_180624430(param_6), sVar2 < 1 &&
          ((fVar4 < param_6 && (param_6 <= 8.0)))))) &&
        (sVar2 = thunk_FUN_180624430(param_7), sVar2 < 1)) && (fVar4 < param_7)) {
      param_6 = (fVar5 / param_7) * param_6;
      *param_1 = fVar9 - param_6 * fVar6;
      param_1[1] = fVar10 - param_6 * fVar7;
      param_1[2] = fVar11 - param_6 * fVar8;
      param_1[3] = fVar5 / param_7;
      *(undefined1 *)(param_1 + 4) = 1;
      return param_1;
    }
  }
LAB_1802c3a0d:
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}



