// FUN_180294960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180294960 */

float FUN_180294960(longlong param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float local_res8 [8];
  float local_48;
  float local_44 [17];
  
  pfVar4 = &local_48;
  fVar5 = (float)(ulonglong)(param_2 - *(longlong *)(param_1 + 0x40));
  local_res8[2] = fVar5 / 80.0;
  local_48 = 0.2;
  local_res8[0] = 0.0;
  local_res8[4] = 1.0;
  local_44[0] = 2.0;
  pfVar3 = local_res8;
  if (0.0 <= local_res8[2]) {
    pfVar3 = local_res8 + 2;
  }
  pfVar2 = local_res8 + 4;
  if (local_res8[2] <= 1.0) {
    pfVar2 = pfVar3;
  }
  fVar1 = *pfVar2;
  local_res8[0] = 0.0;
  if (0.2 <= DAT_180cb1d18) {
    pfVar4 = &DAT_180cb1d18;
  }
  local_res8[4] = 1.0;
  pfVar3 = local_44;
  if (DAT_180cb1d18 <= 2.0) {
    pfVar3 = pfVar4;
  }
  local_res8[2] = fVar5 / (*pfVar3 * 1000.0);
  pfVar3 = local_res8;
  if (0.0 <= local_res8[2]) {
    pfVar3 = local_res8 + 2;
  }
  pfVar4 = local_res8 + 4;
  if (local_res8[2] <= 1.0) {
    pfVar4 = pfVar3;
  }
  fVar5 = *pfVar4;
  return ((1.0 - (1.0 - (3.0 - (fVar1 + fVar1)) * fVar1 * fVar1)) *
          (1.0 - *(float *)(param_1 + 0x1084)) + *(float *)(param_1 + 0x1084)) *
         (1.0 - (3.0 - (fVar5 + fVar5)) * fVar5 * fVar5);
}



