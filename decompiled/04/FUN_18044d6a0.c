// FUN_18044d6a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044d6a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044d6a0(longlong param_1)

{
  HANDLE pvVar1;
  undefined1 auStack_68 [48];
  char *local_38;
  undefined8 local_30;
  longlong local_28 [4];
  
  if (param_1 == 0) {
    return;
  }
  local_28[2] = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28[1] = 0;
  local_28[0] = param_1;
  pvVar1 = GetCurrentProcess();
  if (DAT_180c7dee0 == 0) {
    local_30 = 0x1d;
    local_38 = "ntdll.dll:NtFreeVirtualMemory";
    DAT_180c7dee0 = FUN_180451750(&local_38);
  }
  (*(code *)DAT_180c7dee0)(pvVar1,local_28,local_28 + 1,0x8000);
}



