// FUN_1800b4ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4ef0 */

ulonglong FUN_1800b4ef0(float param_1,ulonglong param_2,float param_3,float param_4)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float local_res8 [4];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    pfVar3 = local_res18;
    if (param_3 <= param_1) {
      pfVar3 = local_res8;
    }
    pfVar2 = local_res20;
    if (param_1 <= param_4) {
      pfVar2 = pfVar3;
    }
    param_2 = (ulonglong)(uint)*pfVar2;
  }
  return param_2;
}



