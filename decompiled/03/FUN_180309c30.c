// FUN_180309c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180309c30 */

float FUN_180309c30(float param_1,undefined8 param_2)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float local_res18 [2];
  float local_res20 [2];
  float local_38 [14];
  
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_2);
    if ((sVar1 < 1) && (1.0 <= (float)param_2)) {
      local_res20[0] = ABS(param_1) / (float)param_2;
      local_38[0] = 0.2;
      local_res18[0] = 0.0;
      pfVar3 = local_res18;
      if (0.0 <= local_res20[0]) {
        pfVar3 = local_res20;
      }
      pfVar2 = local_38;
      if (local_res20[0] <= 0.2) {
        pfVar2 = pfVar3;
      }
      fVar4 = (float)FUN_180636a60(*pfVar2);
      return fVar4 * 57.29578;
    }
  }
  return 0.0;
}



