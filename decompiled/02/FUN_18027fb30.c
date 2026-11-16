// FUN_18027fb30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027fb30 */

float FUN_18027fb30(float param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_res10 [6];
  
  sVar1 = thunk_FUN_180624430();
  if ((sVar1 < 1) && (12.0 < param_1)) {
    fVar4 = 1.0;
    param_1 = 12.0 / param_1;
    fVar5 = 0.55;
    local_res10[0] = 0.55;
    local_res10[4] = 1.0;
    if (param_1 < 0.0) {
      fVar4 = 1.0;
      fVar5 = 0.55;
      local_res10[2] = (float)FUN_18061e150(param_1);
    }
    else {
      local_res10[2] = SQRT(param_1);
    }
    pfVar3 = local_res10;
    if (fVar5 <= local_res10[2]) {
      pfVar3 = local_res10 + 2;
    }
    pfVar2 = local_res10 + 4;
    if (local_res10[2] <= fVar4) {
      pfVar2 = pfVar3;
    }
    return *pfVar2;
  }
  return 1.0;
}



