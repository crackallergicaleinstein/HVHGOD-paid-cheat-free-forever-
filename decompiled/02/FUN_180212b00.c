// FUN_180212b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180212b00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180212b00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  FUN_180212250(local_e8,param_1,param_1);
  FUN_180206c30(param_1,param_2);
  FUN_180206c30(param_2,local_e8);
  FUN_18015c010(local_40);
  FUN_18015c010(local_60);
  FUN_18015c010(local_80);
  FUN_18015c010(local_a0);
  FUN_18015c010(local_c0);
  FUN_18015c010(local_e0);
}



