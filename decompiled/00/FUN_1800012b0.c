// FUN_1800012b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800012b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800012b0(LPCVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  undefined4 extraout_var_00;
  undefined1 auStackY_78 [32];
  HANDLE local_38;
  int local_2c;
  SIZE_T local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStackY_78;
  local_28 = 0;
  FUN_180001480();
  if (param_1 == (LPCVOID)0x0) {
LAB_18000143a:
    DAT_180bacc54 = 0;
  }
  else {
    pvVar3 = GetCurrentProcess();
    BVar1 = ReadProcessMemory(pvVar3,param_1,&DAT_180bacbf0,100,&local_28);
    if (BVar1 == 0) goto LAB_18000143a;
    DAT_180bacc54 = local_28 == 100;
    if ((bool)DAT_180bacc54) {
      local_2c = 0;
      pvVar3 = GetCurrentProcess();
      BVar1 = ReadProcessMemory(pvVar3,(LPCVOID)((longlong)param_1 + 100),&local_2c,4,&local_28);
      uVar4 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
      if (((BVar1 == 0) || (local_28 != 4)) || (local_2c != 0x3148504c)) goto LAB_180001448;
      local_38 = (HANDLE)0x0;
      pvVar3 = GetCurrentProcess();
      BVar1 = ReadProcessMemory(pvVar3,(LPCVOID)((longlong)param_1 + 0x68),&local_38,8,&local_28);
      if (((BVar1 != 0) && (local_28 == 8)) && (local_38 != (HANDLE)0x0)) {
        hTargetProcessHandle = GetCurrentProcess();
        pvVar3 = local_38;
        hSourceProcessHandle = GetCurrentProcess();
        BVar1 = DuplicateHandle(hSourceProcessHandle,pvVar3,hTargetProcessHandle,&DAT_180bacc58,
                                0x100400,0,0);
        if ((BVar1 != 0) && (DVar2 = GetProcessId(DAT_180bacc58), DVar2 == DAT_180bacc50)) {
          DVar2 = WaitForSingleObject(DAT_180bacc58,0);
          uVar4 = CONCAT71((int7)(CONCAT44(extraout_var_00,DVar2) >> 8),1);
          if (DVar2 == 0x102) goto LAB_180001448;
        }
      }
    }
  }
  FUN_180001480();
  uVar4 = 0;
LAB_180001448:
  if (DAT_1808d5f00 != (local_20 ^ (ulonglong)auStackY_78)) {
  }
  return uVar4;
}



