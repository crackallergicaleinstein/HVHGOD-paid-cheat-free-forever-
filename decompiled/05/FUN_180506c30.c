// FUN_180506c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180506c30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_180506c30(void)

{
  HMODULE hModule;
  undefined8 uVar1;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_12c [276];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  if (DAT_180c7dff0 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("ntdll.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_180c7dff0 = GetProcAddress(hModule,"RtlVerifyVersionInfo");
    }
    if (DAT_180c7dff0 == (FARPROC)0x0) {
    }
  }
  FUN_18063ab10(local_12c,0,0x110);
  local_138 = 0x11c;
  local_134 = 6;
  local_130 = 3;
  uVar1 = VerSetConditionMask(0,2,3);
  uVar1 = VerSetConditionMask(uVar1,1,3);
  (*DAT_180c7dff0)(&local_138,3,uVar1);
}



