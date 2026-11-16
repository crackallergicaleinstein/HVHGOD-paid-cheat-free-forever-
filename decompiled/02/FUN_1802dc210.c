// FUN_1802dc210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802dc210 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802dc210(float *param_1,float param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float local_98 [2];
  float local_90 [6];
  float local_78;
  float local_74 [27];
  
  local_98[0] = param_2;
  local_90[4] = 1.0;
  local_90[2] = param_4;
  pfVar4 = local_90;
  if (0.0 <= param_4) {
    pfVar4 = local_90 + 2;
  }
  local_90[0] = 0.0;
  pfVar3 = local_90 + 4;
  if (param_4 <= 1.0) {
    pfVar3 = pfVar4;
  }
  fVar1 = (float)((uint)param_2 >> 0x18) * (1.0 - *pfVar3);
  fVar2 = (float)(param_3 >> 0x18) * *pfVar3;
  local_74[8] = fVar2 + fVar1;
  if (0.0 < local_74[8]) {
    local_90[5] = ((float)(param_3 & 0xff) * fVar2 + (float)((uint)param_2 & 0xff) * fVar1) /
                  local_74[8];
    local_74[1] = ((float)(param_3 >> 8 & 0xff) * fVar2 + (float)((uint)param_2 >> 8 & 0xff) * fVar1
                  ) / local_74[8];
    pfVar4 = local_98;
    if (0.0 <= local_90[5]) {
      pfVar4 = local_90 + 5;
    }
    local_78 = 255.0;
    pfVar3 = &local_78;
    if (local_90[5] <= 255.0) {
      pfVar3 = pfVar4;
    }
    local_98[0] = 0.0;
    *(char *)param_1 = (char)(int)*pfVar3;
    pfVar4 = local_74;
    if (0.0 <= local_74[1]) {
      pfVar4 = local_74 + 1;
    }
    pfVar3 = local_74 + 2;
    if (local_74[1] <= 255.0) {
      pfVar3 = pfVar4;
    }
    local_74[4] = ((float)(param_3 >> 0x10 & 0xff) * fVar2 +
                  (float)((uint)param_2 >> 0x10 & 0xff) * fVar1) / local_74[8];
    local_74[2] = 255.0;
    local_74[0] = 0.0;
    *(char *)((longlong)param_1 + 1) = (char)(int)*pfVar3;
    pfVar4 = local_74 + 3;
    if (0.0 <= local_74[4]) {
      pfVar4 = local_74 + 4;
    }
    local_74[5] = 255.0;
    pfVar3 = local_74 + 5;
    if (local_74[4] <= 255.0) {
      pfVar3 = pfVar4;
    }
    local_74[3] = 0.0;
    *(char *)((longlong)param_1 + 2) = (char)(int)*pfVar3;
    pfVar4 = local_74 + 6;
    if (0.0 <= local_74[8]) {
      pfVar4 = local_74 + 8;
    }
    local_74[7] = 255.0;
    local_74[6] = 0.0;
    pfVar3 = local_74 + 7;
    if (local_74[8] <= 255.0) {
      pfVar3 = pfVar4;
    }
    *(char *)((longlong)param_1 + 3) = (char)(int)*pfVar3;
  }
  else {
    local_98[0] = (float)((uint)param_2 & 0xffffff);
    *param_1 = local_98[0];
  }
}



