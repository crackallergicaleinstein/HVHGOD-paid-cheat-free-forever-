// FUN_1801ef630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ef630 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ef630(longlong param_1)

{
  BOOL BVar1;
  LPCWSTR lpFileName;
  undefined1 auStack_58 [32];
  ulonglong local_38 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  lpFileName = (LPCWSTR)(param_1 + 0xa0);
  local_18 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  if (7 < *(ulonglong *)(param_1 + 0xb8)) {
    lpFileName = *(LPCWSTR *)lpFileName;
  }
  BVar1 = GetFileAttributesExW(lpFileName,GetFileExInfoStandard,local_38);
  if ((((BVar1 == 0) || ((local_38[0] & 0x410) != 0)) ||
      (*(longlong *)(param_1 + 200) != CONCAT44(uStack_20,uStack_24))) ||
     (*(longlong *)(param_1 + 0xd0) != CONCAT44(uStack_1c,local_18))) {
  }
}



