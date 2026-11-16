// FUN_18016f200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016f200 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016f200(HANDLE param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  ULONGLONG UVar4;
  undefined1 auStackY_88 [32];
  HANDLE local_40;
  HANDLE local_38;
  HANDLE local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  iVar1 = FUN_1805f68d0(&DAT_1808da690);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da6dc == 0x7fffffff) {
    DAT_1808da6dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180bbe8c0 != (HANDLE)0x0) {
    DVar2 = WaitForSingleObject(DAT_180bbe8c0,0);
    if (DVar2 != 0) goto LAB_18016f363;
    CloseHandle(DAT_180bbe8c0);
    DAT_180bbe8c0 = (HANDLE)0x0;
  }
  local_40 = (LPVOID)0xffffffffffffffff;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceProcessHandle = GetCurrentProcess();
  BVar3 = DuplicateHandle(hSourceProcessHandle,param_1,hTargetProcessHandle,&local_40,0,0,2);
  if (BVar3 != 0) {
    DAT_180bb904d = '\0';
    DAT_180bbe8c0 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_18016f1c0,local_40,0,(LPDWORD)0x0)
    ;
    if (DAT_180bbe8c0 != (HANDLE)0x0) {
      local_40 = (HANDLE)0x0;
      local_38 = DAT_180bbe8c0;
      local_30 = param_1;
      do {
        if (((*param_2 != 0) && ((*(uint *)(*param_2 + 4) & 1) != 0)) ||
           (UVar4 = GetTickCount64(), param_3 <= UVar4)) break;
        DVar2 = WaitForMultipleObjects(2,&local_38,0,0x19);
        if (DVar2 == 0) {
          if (((*param_2 == 0) || ((*(uint *)(*param_2 + 4) & 1) == 0)) &&
             ((UVar4 = GetTickCount64(), UVar4 < param_3 && (DAT_180bb904d != '\0')))) {
            WaitForSingleObject(param_1,0);
          }
          if ((longlong)local_40 - 1U < 0xfffffffffffffffe) {
            CloseHandle(local_40);
          }
          FUN_1805f68fc(&DAT_1808da690);
          FUN_18017cdd0(param_2);
        }
      } while (DVar2 == 0x102);
    }
  }
  if ((longlong)local_40 - 1U < 0xfffffffffffffffe) {
    CloseHandle(local_40);
  }
LAB_18016f363:
  FUN_1805f68fc(&DAT_1808da690);
  FUN_18017cdd0(param_2);
}



