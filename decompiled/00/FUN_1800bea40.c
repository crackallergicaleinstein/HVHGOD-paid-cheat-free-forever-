// FUN_1800bea40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800bea40 */

void FUN_1800bea40(float *param_1)

{
  float *pfVar1;
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float local_28;
  float local_24 [7];
  
  local_24[0] = 8.40779e-45;
  local_28 = 0.0;
  pfVar1 = param_1 + 0x1c;
  fVar6 = *pfVar1;
  pfVar5 = &local_28;
  if (-1 < (int)*param_1) {
    pfVar5 = param_1;
  }
  pfVar4 = param_1 + 1;
  pfVar3 = local_24;
  if ((int)*param_1 < 7) {
    pfVar3 = pfVar5;
  }
  *param_1 = *pfVar3;
  local_24[0] = 0.0;
  pfVar5 = local_24;
  if (-1 < (int)*pfVar4) {
    pfVar5 = pfVar4;
  }
  local_28 = 2.8026e-45;
  pfVar3 = &local_28;
  if ((int)*pfVar4 < 3) {
    pfVar3 = pfVar5;
  }
  *pfVar4 = *pfVar3;
  sVar2 = thunk_FUN_180624430(fVar6);
  if (0 < sVar2) {
    *pfVar1 = 1.0;
    return;
  }
  pfVar5 = local_24;
  if (0.5 <= fVar6) {
    pfVar5 = pfVar1;
  }
  local_28 = 2.0;
  pfVar4 = &local_28;
  if (fVar6 <= 2.0) {
    pfVar4 = pfVar5;
  }
  local_24[0] = 0.5;
  *pfVar1 = *pfVar4;
  return;
}



