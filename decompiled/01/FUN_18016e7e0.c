// FUN_18016e7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016e7e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016e7e0(HANDLE param_1,LPVOID param_2,DWORD param_3,char param_4,longlong *param_5,
                  ulonglong param_6)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  ULONGLONG UVar4;
  HANDLE hHandle;
  undefined1 auStackY_98 [32];
  DWORD local_68 [2];
  _OVERLAPPED local_60;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStackY_98;
  while( true ) {
    if ((param_3 == 0) ||
       (((*param_5 != 0 && ((*(uint *)(*param_5 + 4) & 1) != 0)) ||
        (UVar4 = GetTickCount64(), param_6 <= UVar4)))) {
      FUN_18017cdd0(param_5);
    }
    hHandle = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (0xfffffffffffffffd < (longlong)hHandle - 1U) goto LAB_18016e9b4;
    local_60.Internal = 0;
    local_68[0] = 0;
    local_60.InternalHigh = 0;
    local_60.u.Pointer = (PVOID)0x0;
    local_60.hEvent = hHandle;
    if (param_4 == '\0') {
      iVar1 = ReadFile(param_1,param_2,param_3,local_68,&local_60);
    }
    else {
      iVar1 = WriteFile(param_1,param_2,param_3,local_68,&local_60);
    }
    if (iVar1 == 0) break;
LAB_18016e934:
    if (local_68[0] == 0) goto LAB_18016e9ab;
    param_2 = (LPVOID)((longlong)param_2 + (ulonglong)local_68[0]);
    param_3 = param_3 - local_68[0];
    CloseHandle(hHandle);
  }
  DVar2 = GetLastError();
  if (DVar2 == 0x3e5) {
    do {
      DVar2 = WaitForSingleObject(hHandle,0x32);
      if ((DVar2 != 0x102) || ((*param_5 != 0 && ((*(uint *)(*param_5 + 4) & 1) != 0)))) break;
      UVar4 = GetTickCount64();
    } while (UVar4 < param_6);
    if (((*param_5 == 0) || ((*(uint *)(*param_5 + 4) & 1) == 0)) &&
       (UVar4 = GetTickCount64(), UVar4 < param_6)) {
      BVar3 = GetOverlappedResult(param_1,&local_60,local_68,0);
      if (BVar3 != 0) goto LAB_18016e934;
    }
    else {
      CancelIoEx(param_1,&local_60);
      GetOverlappedResult(param_1,&local_60,local_68,1);
    }
  }
LAB_18016e9ab:
  CloseHandle(hHandle);
LAB_18016e9b4:
  FUN_18017cdd0(param_5);
}



