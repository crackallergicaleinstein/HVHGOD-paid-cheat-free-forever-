// FUN_1802c3a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c3a60 */

ulonglong FUN_1802c3a60(float param_1,float param_2,float param_3,ulonglong param_4)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float local_res8 [8];
  
  local_res8[0] = param_1;
  local_res8[2] = param_2;
  local_res8[4] = param_3;
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    pfVar3 = local_res8 + 2;
    if (param_2 <= param_1) {
      pfVar3 = local_res8;
    }
    pfVar2 = local_res8 + 4;
    if (param_1 <= param_3) {
      pfVar2 = pfVar3;
    }
    param_4 = (ulonglong)(uint)*pfVar2;
  }
  return param_4;
}



