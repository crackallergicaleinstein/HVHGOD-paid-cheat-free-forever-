// FUN_1800efde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800efde0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800efde0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_858 [32];
  undefined4 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_858;
  FUN_18063ab10(local_818,0,0x800);
  local_828 = param_5;
  local_838 = param_3;
  local_830 = param_4;
  FUN_18015ad60(local_818,0x800,0xffffffffffffffff,param_2);
  FUN_1800a9e50(3,local_818);
}



