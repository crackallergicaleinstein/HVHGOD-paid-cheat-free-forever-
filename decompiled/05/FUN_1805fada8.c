// FUN_1805fada8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fada8 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fada8(HANDLE param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  BVar1 = GetFileInformationByHandleEx(param_1,FileBasicInfo,local_38,0x28);
  if (BVar1 == 0) {
    GetLastError();
  }
  else {
    *param_2 = local_28;
  }
}



