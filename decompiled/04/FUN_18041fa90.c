// FUN_18041fa90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18041fa90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18041fa90(LPCVOID param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_48.BaseAddress = (PVOID)0x0;
  local_48.AllocationBase = (PVOID)0x0;
  local_48.AllocationProtect = 0;
  local_48._20_4_ = 0;
  local_48.RegionSize = 0;
  local_48.State = 0;
  local_48.Protect = 0;
  local_48.Type = 0;
  local_48._44_4_ = 0;
  if (param_2 != 0) {
    VirtualQuery(param_1,&local_48,0x30);
  }
}



