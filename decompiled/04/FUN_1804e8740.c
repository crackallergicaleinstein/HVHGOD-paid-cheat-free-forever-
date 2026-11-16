// FUN_1804e8740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e8740 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e8740(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  if ((128.0 <= *(float *)(param_1 + 0x14)) || ((*(uint *)(param_1 + 0x4c) & 0x10000000) != 0)) {
    local_18[0] = 0;
    lVar1 = FUN_1804e83c0(0,param_2,local_18);
    if (lVar1 == 0) {
    }
  }
  else {
    lVar1 = FUN_1804e83c0(*(float *)(param_1 + 0x14),param_2,0);
    if (lVar1 == 0) {
    }
  }
}



