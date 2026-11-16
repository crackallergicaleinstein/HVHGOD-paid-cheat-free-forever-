// FUN_18060b000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b000 */

HANDLE FUN_18060b000(LPSECURITY_ATTRIBUTES param_1,ulonglong param_2,longlong param_3,
                    undefined8 param_4,DWORD param_5,DWORD *param_6)

{
  DWORD DVar1;
  undefined4 *puVar2;
  LPVOID lpParameter;
  HANDLE pvVar3;
  DWORD local_res18 [2];
  
  if (param_3 == 0) {
    puVar2 = (undefined4 *)FUN_18060fe00();
    *puVar2 = 0x16;
    FUN_18060aad4();
    pvVar3 = (HANDLE)0x0;
  }
  else {
    lpParameter = (LPVOID)FUN_18060af9c(param_3,param_4);
    pvVar3 = (HANDLE)0x0;
    if (lpParameter != (LPVOID)0x0) {
      local_res18[0] = 0;
      pvVar3 = CreateThread(param_1,param_2 & 0xffffffff,FUN_18060aed0,lpParameter,param_5,
                            local_res18);
      if (pvVar3 == (HANDLE)0x0) {
        DVar1 = GetLastError();
        FUN_18060fd90(DVar1);
        if (*(HANDLE *)((longlong)lpParameter + 0x10) != (HANDLE)0x0) {
          CloseHandle(*(HANDLE *)((longlong)lpParameter + 0x10));
        }
        if (*(HMODULE *)((longlong)lpParameter + 0x18) != (HMODULE)0x0) {
          FreeLibrary(*(HMODULE *)((longlong)lpParameter + 0x18));
        }
        FUN_180621380(lpParameter);
        pvVar3 = (HANDLE)0x0;
      }
      else if (param_6 != (DWORD *)0x0) {
        *param_6 = local_res18[0];
      }
    }
  }
  return pvVar3;
}



