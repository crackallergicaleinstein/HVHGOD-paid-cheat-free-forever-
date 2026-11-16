// FUN_1802538a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802538a0 */

longlong * FUN_1802538a0(longlong *param_1,longlong param_2,char *param_3,undefined8 param_4)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_a8 [6];
  float local_90 [6];
  float local_78 [28];
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x90);
  fVar4 = 0.0;
  if (*param_3 != '\0') {
    fVar5 = *(float *)(param_3 + 4);
    fVar6 = 1.0;
    local_a8[4] = 1.0;
    local_a8[0] = 0.0;
    fVar4 = 0.0;
    local_a8[2] = fVar5;
    sVar1 = thunk_FUN_180624430(fVar5);
    if (sVar1 < 1) {
      pfVar3 = local_a8;
      if (fVar4 <= fVar5) {
        pfVar3 = local_a8 + 2;
      }
      pfVar2 = local_a8 + 4;
      if (fVar5 <= fVar6) {
        pfVar2 = pfVar3;
      }
      fVar5 = *pfVar2;
    }
    else {
      fVar5 = 0.35;
    }
    if (fVar4 < fVar5) {
      fVar4 = 8.0;
      fVar7 = 0.01;
      fVar8 = 0.2;
      local_78[0] = 0.2;
      local_78[2] = 8.0;
      local_90[4] = 8.0;
      local_90[0] = 0.01;
      local_90[2] = (float)param_4;
      sVar1 = thunk_FUN_180624430(param_4);
      if (sVar1 < 1) {
        pfVar3 = local_90;
        if (fVar7 <= (float)param_4) {
          pfVar3 = local_90 + 2;
        }
        pfVar2 = local_90 + 4;
        if ((float)param_4 <= fVar4) {
          pfVar2 = pfVar3;
        }
        fVar6 = *pfVar2;
      }
      local_78[1] = (fVar5 * 3.8 + fVar8) * fVar6;
      pfVar3 = local_78;
      if (fVar8 <= local_78[1]) {
        pfVar3 = local_78 + 1;
      }
      pfVar2 = local_78 + 2;
      if (local_78[1] <= fVar4) {
        pfVar2 = pfVar3;
      }
      *(float *)(param_2 + 0x90) = *pfVar2;
      return param_1;
    }
  }
  *(float *)(param_2 + 0x90) = fVar4;
  return param_1;
}



