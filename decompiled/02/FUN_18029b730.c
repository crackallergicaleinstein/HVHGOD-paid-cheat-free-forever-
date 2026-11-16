// FUN_18029b730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029b730 */

float FUN_18029b730(float param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float local_res8 [8];
  
  local_res8[0] = param_1;
  sVar1 = thunk_FUN_180624430();
  if (0 < sVar1) {
    return 2.0;
  }
  pfVar3 = local_res8 + 2;
  if (0.0 <= param_1) {
    pfVar3 = local_res8;
  }
  local_res8[4] = 6.0;
  pfVar2 = local_res8 + 4;
  if (param_1 <= 6.0) {
    pfVar2 = pfVar3;
  }
  local_res8[2] = 0.0;
  return *pfVar2;
}



