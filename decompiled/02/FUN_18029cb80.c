// FUN_18029cb80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029cb80 */

undefined1 * FUN_18029cb80(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = param_2[1];
  local_14 = 1.0;
  local_18 = 0.0;
  pfVar5 = &local_18;
  if (0.0 <= fVar1) {
    pfVar5 = param_2 + 1;
  }
  local_c = 1.0;
  pfVar4 = &local_14;
  if (fVar1 <= 1.0) {
    pfVar4 = pfVar5;
  }
  local_10 = 0.0;
  fVar1 = *pfVar4;
  fVar2 = param_2[2];
  local_18 = 1.0;
  pfVar5 = &local_14;
  if (0.0 <= fVar2) {
    pfVar5 = param_2 + 2;
  }
  local_14 = 0.0;
  pfVar4 = &local_18;
  if (fVar2 <= 1.0) {
    pfVar4 = pfVar5;
  }
  fVar2 = *pfVar4;
  fVar3 = param_2[3];
  pfVar5 = &local_14;
  if (0.0 <= fVar3) {
    pfVar5 = param_2 + 3;
  }
  pfVar4 = &local_18;
  if (fVar3 <= 1.0) {
    pfVar4 = pfVar5;
  }
  local_18 = 1.0;
  pfVar5 = &local_10;
  if (0.0 <= *param_2) {
    pfVar5 = param_2;
  }
  local_14 = 0.0;
  fVar3 = *pfVar4;
  pfVar4 = &local_c;
  if (*param_2 <= 1.0) {
    pfVar4 = pfVar5;
  }
  *param_1 = (char)(int)(*pfVar4 * 255.0);
  param_1[1] = (char)(int)(fVar1 * 255.0);
  param_1[2] = (char)(int)(fVar2 * 255.0);
  param_1[3] = (char)(int)(fVar3 * 255.0);
  return param_1;
}



