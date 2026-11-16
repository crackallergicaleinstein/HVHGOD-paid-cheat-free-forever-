// FUN_1804f2d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2d70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f2d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_38 [32];
  int local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  local_14 = 0;
  local_18 = 0;
  iVar1 = FUN_1804396b0(param_3,"0x%08X,%d",&local_14,&local_18);
  if ((iVar1 < 2) || (0x1fe < local_18 - 1U)) {
  }
  FUN_1804f22f0(local_14);
}



