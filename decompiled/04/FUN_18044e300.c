// FUN_18044e300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044e300 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044e300(longlong *param_1)

{
  size_t _Size;
  SIZE_T dwSize;
  LPCVOID lpBaseAddress;
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  HANDLE pvVar4;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong local_68;
  undefined4 local_60 [2];
  size_t local_58 [2];
  char *local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if (((*param_1 != 0) && (param_1[2] != 0)) && ((char)param_1[0xb] != '\0')) {
    local_48 = (char *)0x0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    cVar2 = FUN_1804514f0(&local_48,*param_1,param_1[9]);
    if (cVar2 != '\0') {
      _Size = param_1[9];
      iVar3 = memcmp(&local_48,param_1 + 3,_Size);
      if (iVar3 != 0) {
        iVar3 = memcmp(&local_48,param_1 + 7,param_1[10]);
        if (iVar3 != 0) {
        }
        local_68 = *param_1;
        local_60[0] = 0;
        local_58[0] = _Size;
        pvVar4 = GetCurrentProcess();
        if (DAT_180c7dee8 == 0) {
          local_48 = "ntdll.dll:NtProtectVirtualMemory";
          uStack_40 = 0x20;
          DAT_180c7dee8 = FUN_180451750(&local_48);
        }
        local_78 = local_60;
        iVar3 = (*(code *)DAT_180c7dee8)(pvVar4,&local_68,local_58,0x40);
        if (iVar3 < 0) {
        }
        cVar2 = FUN_1804514f0(*param_1,param_1 + 3,param_1[9]);
        uVar1 = local_60[0];
        pvVar4 = GetCurrentProcess();
        if (DAT_180c7dee8 == 0) {
          local_48 = "ntdll.dll:NtProtectVirtualMemory";
          uStack_40 = 0x20;
          DAT_180c7dee8 = FUN_180451750(&local_48);
        }
        local_78 = local_60;
        (*(code *)DAT_180c7dee8)(pvVar4,&local_68,local_58,uVar1);
        if (cVar2 == '\0') {
        }
        dwSize = param_1[9];
        lpBaseAddress = (LPCVOID)*param_1;
        pvVar4 = GetCurrentProcess();
        FlushInstructionCache(pvVar4,lpBaseAddress,dwSize);
      }
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
  }
}



