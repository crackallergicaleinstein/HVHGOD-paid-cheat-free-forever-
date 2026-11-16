// FUN_1802aebc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aebc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802aebc0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_458 [32];
  undefined1 local_438 [64];
  undefined1 local_3f8 [936];
  undefined1 local_50 [40];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_458;
  if (*(float *)(param_1 + 0x2c) < *(float *)(param_2 + 0x2c)) {
    FUN_1802a6a40(local_438);
    FUN_1802aceb0(param_2,param_1);
    FUN_1802aceb0(param_1,local_438);
    FUN_18015c010(local_50);
    FUN_18015c010(local_3f8);
  }
  if (*(float *)(param_2 + 0x2c) < *(float *)(param_3 + 0x2c)) {
    FUN_1802a6a40(local_438,param_3);
    FUN_1802aceb0(param_3,param_2);
    FUN_1802aceb0(param_2,local_438);
    FUN_18015c010(local_50);
    FUN_18015c010(local_3f8);
    if (*(float *)(param_1 + 0x2c) < *(float *)(param_2 + 0x2c)) {
      FUN_1802a6a40(local_438,param_2);
      FUN_1802aceb0(param_2,param_1);
      FUN_1802aceb0(param_1,local_438);
      FUN_18015c010(local_50);
      FUN_18015c010(local_3f8);
    }
  }
}



