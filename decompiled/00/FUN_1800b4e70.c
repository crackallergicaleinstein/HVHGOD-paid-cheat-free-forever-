// FUN_1800b4e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4e70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800b4e70(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  int local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_28[2] = param_1;
  local_28[1] = 0x20;
  local_28[0] = 1;
  piVar2 = local_28;
  if (0 < param_1) {
    piVar2 = local_28 + 2;
  }
  piVar1 = local_28 + 1;
  if (param_1 < 0x21) {
    piVar1 = piVar2;
  }
  FUN_18060eb80((float)*piVar1 * 0.015625 * 1000.0);
}



