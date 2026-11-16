// FUN_180473ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180473ef0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180473ef0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  if (DAT_180cd67f8 != 0) {
    local_18[0] = param_2;
    cVar1 = (**(code **)(*(longlong *)DAT_180cd67f8 + 0x10))(DAT_180cd67f8,local_18);
    if (cVar1 != '\0') {
    }
  }
}



