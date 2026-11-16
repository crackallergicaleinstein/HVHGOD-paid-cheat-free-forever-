// FUN_18041b1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041b1b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041b1b0(LPCWSTR param_1)

{
  char cVar1;
  undefined1 auStackY_88 [32];
  HANDLE *local_48;
  undefined1 local_40 [32];
  HANDLE local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  FUN_1800f5370(local_40,param_1);
  cVar1 = FUN_180165ac0(local_40);
  if (cVar1 != '\0') {
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      param_1 = *(LPCWSTR *)param_1;
    }
    local_20 = CreateFileW(param_1,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x200000,(HANDLE)0x0);
    if (local_20 != (HANDLE)0xffffffffffffffff) {
      local_48 = &local_20;
      FUN_18041b270(&local_48);
      CloseHandle(local_20);
    }
  }
}



