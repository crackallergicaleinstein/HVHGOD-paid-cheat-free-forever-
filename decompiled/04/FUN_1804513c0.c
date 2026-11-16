// FUN_1804513c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804513c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804513c0(LPCVOID param_1,ulonglong param_2,undefined1 param_3)

{
  LPCVOID pvVar1;
  char cVar2;
  SIZE_T SVar3;
  LPCVOID pvVar4;
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  if (((param_1 != (LPCVOID)0x0) && (param_2 != 0)) && (param_2 <= ~(ulonglong)param_1)) {
    pvVar1 = (LPCVOID)((longlong)param_1 + param_2);
    while (param_1 < pvVar1) {
      if (param_1 == (LPCVOID)0x0) {
      }
      local_48.BaseAddress = (LPCVOID)0x0;
      local_48.AllocationBase = (PVOID)0x0;
      local_48.AllocationProtect = 0;
      local_48._20_4_ = 0;
      local_48.RegionSize = 0;
      local_48.State = 0;
      local_48.Protect = 0;
      local_48.Type = 0;
      local_48._44_4_ = 0;
      SVar3 = VirtualQuery(param_1,&local_48,0x30);
      if (SVar3 == 0) {
      }
      if (~(ulonglong)local_48.BaseAddress < local_48.RegionSize) {
      }
      pvVar4 = (LPCVOID)(local_48.RegionSize + (longlong)local_48.BaseAddress);
      if (param_1 < local_48.BaseAddress) {
      }
      if (pvVar4 <= param_1) {
      }
      if (local_48.State != 0x1000) {
      }
      cVar2 = FUN_1804512c0(local_48.Protect,param_3);
      if (cVar2 == '\0') {
      }
      param_1 = pvVar1;
      if (pvVar4 < pvVar1) {
        param_1 = pvVar4;
      }
    }
  }
}



