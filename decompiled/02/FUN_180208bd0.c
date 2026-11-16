// FUN_180208bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180208bd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180208bd0(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  lVar1 = FUN_180208800(&DAT_180cc9bb0);
  if (lVar1 == 0) {
  }
  if (param_3 != 0) {
    FUN_180208890(&DAT_180cc9bb0,param_3);
  }
  FUN_18020db90();
  FUN_180208940();
  FUN_18015c010(local_38);
}



