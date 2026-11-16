// FUN_1800b01e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b01e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b01e0(double param_1,int param_2,int param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_18 = param_1;
  local_20 = (double)param_3;
  local_28 = (double)param_2;
  pdVar2 = &local_28;
  if ((double)param_2 <= param_1) {
    pdVar2 = &local_18;
  }
  pdVar1 = &local_20;
  if (param_1 <= (double)param_3) {
    pdVar1 = pdVar2;
  }
  FUN_18060eb10(*pdVar1);
}



