// FUN_1802aefe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aefe0 */

ulonglong FUN_1802aefe0(float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float local_res20 [2];
  float local_58;
  float local_54 [21];
  
  local_res20[0] = param_4;
  pfVar1 = (float *)thunk_FUN_180624430(param_1 + param_2 + param_3 + param_4);
  if (((((short)pfVar1 < 1) && (0.0 <= param_1)) && (0.0 <= param_3)) && (ABS(param_2) <= 64.0)) {
    local_54[0] = 8.0;
    local_58 = 0.25;
    pfVar2 = &local_58;
    if (0.25 <= param_4) {
      pfVar2 = local_res20;
    }
    pfVar1 = local_54;
    if (param_4 <= 8.0) {
      pfVar1 = pfVar2;
    }
    if (param_1 <= *pfVar1 / 0.0254 + param_3) {
      return CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
    }
  }
  return (ulonglong)pfVar1 & 0xffffffffffffff00;
}



