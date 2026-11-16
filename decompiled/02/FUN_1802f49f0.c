// FUN_1802f49f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f49f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f49f0(float param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_30[0] = param_1;
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    local_34 = 5.0;
    local_38 = 0.1;
    pfVar3 = &local_38;
    if (0.1 <= param_1) {
      pfVar3 = local_30;
    }
    pfVar2 = &local_34;
    if (param_1 <= 5.0) {
      pfVar2 = pfVar3;
    }
    FUN_18060eb80(*pfVar2 * 1000.0);
  }
}



