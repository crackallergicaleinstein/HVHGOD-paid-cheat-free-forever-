// FUN_1802ff350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff350 */

int FUN_1802ff350(float param_1,int param_2,float param_3,byte param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_18;
  int local_14;
  int local_10;
  undefined1 local_c [12];
  
  local_res18[0] = param_3;
  local_res8[0] = param_1;
  local_res20[0] = 1.4013e-45;
  local_res10[0] = 3.92364e-44;
  pfVar4 = local_res20;
  if (0 < (int)param_1) {
    pfVar4 = local_res8;
  }
  pfVar2 = local_res10;
  if ((int)param_1 < 0x1d) {
    pfVar2 = pfVar4;
  }
  local_18 = *pfVar2;
  local_res20[0] = 0.0;
  local_res8[0] = 1.0;
  local_14 = ((param_4 ^ 1) * 2 + 0x1a) - param_2;
  pfVar4 = local_res20;
  if (0.0 <= param_3) {
    pfVar4 = local_res18;
  }
  pfVar2 = local_res8;
  if (param_3 <= 1.0) {
    pfVar2 = pfVar4;
  }
  local_10 = (int)((1.0 - *pfVar2) * 64.0);
  iVar1 = thunk_FUN_1805f8250(&local_18,local_c);
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  return iVar3;
}



