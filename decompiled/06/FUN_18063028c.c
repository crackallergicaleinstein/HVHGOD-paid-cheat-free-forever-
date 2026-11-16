// FUN_18063028c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063028c */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18063028c(wchar_t *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  iVar1 = FUN_1806218d4(param_1,0x59,local_28);
  if (iVar1 != 0) {
    wcsncmp(local_28,param_1,9);
  }
}



