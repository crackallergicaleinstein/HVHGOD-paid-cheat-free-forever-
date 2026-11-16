// FUN_18044e180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044e180 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044e180(longlong *param_1)

{
  SIZE_T dwSize;
  LPCVOID lpBaseAddress;
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  HANDLE pvVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  char *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_38 = *param_1;
  if (((local_38 != 0) && (param_1[2] != 0)) && ((char)param_1[0xb] == '\0')) {
    local_28 = param_1[10];
    local_30[0] = 0;
    pvVar4 = GetCurrentProcess();
    if (DAT_180c7dee8 == 0) {
      local_48 = "ntdll.dll:NtProtectVirtualMemory";
      local_40 = 0x20;
      DAT_180c7dee8 = FUN_180451750(&local_48);
    }
    local_58 = local_30;
    iVar3 = (*(code *)DAT_180c7dee8)(pvVar4,&local_38,&local_28,0x40);
    if (-1 < iVar3) {
      cVar2 = FUN_1804514f0(*param_1,param_1 + 7,param_1[10]);
      uVar1 = local_30[0];
      pvVar4 = GetCurrentProcess();
      if (DAT_180c7dee8 == 0) {
        local_48 = "ntdll.dll:NtProtectVirtualMemory";
        local_40 = 0x20;
        DAT_180c7dee8 = FUN_180451750(&local_48);
      }
      local_58 = local_30;
      (*(code *)DAT_180c7dee8)(pvVar4,&local_38,&local_28,uVar1);
      if (cVar2 != '\0') {
        dwSize = param_1[10];
        lpBaseAddress = (LPCVOID)*param_1;
        pvVar4 = GetCurrentProcess();
        FlushInstructionCache(pvVar4,lpBaseAddress,dwSize);
        *(undefined1 *)(param_1 + 0xb) = 1;
      }
    }
  }
}



