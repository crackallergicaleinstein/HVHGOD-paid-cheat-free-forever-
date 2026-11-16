// FUN_180451150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180451150 */

void FUN_180451150(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[1];
  if (180.0 < fVar1) {
    do {
      fVar1 = fVar1 - 360.0;
    } while (180.0 < fVar1);
    param_1[1] = fVar1;
  }
  if (fVar1 < -180.0) {
    do {
      fVar1 = fVar1 + 360.0;
    } while (fVar1 < -180.0);
    param_1[1] = fVar1;
  }
  fVar1 = *param_1;
  if (89.0 < fVar1) {
    do {
      fVar1 = fVar1 - 180.0;
    } while (89.0 < fVar1);
    *param_1 = fVar1;
  }
  if (fVar1 < -89.0) {
    do {
      fVar1 = fVar1 + 180.0;
    } while (fVar1 < -89.0);
    *param_1 = fVar1;
  }
  param_1[2] = 0.0;
  return;
}



