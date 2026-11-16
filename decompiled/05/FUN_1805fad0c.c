// FUN_1805fad0c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fad0c */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fad0c(HANDLE param_1,ulonglong *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined1 auStack_68 [32];
  _BY_HANDLE_FILE_INFORMATION local_48;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  BVar1 = GetFileInformationByHandleEx(param_1,0x12,param_2,0x18);
  if ((BVar1 == 0) && ((DVar2 = GetLastError(), DVar2 == 0x32 || (DVar2 == 0x57)))) {
    BVar1 = GetFileInformationByHandle(param_1,&local_48);
    if (BVar1 == 0) {
      GetLastError();
    }
    else {
      *param_2 = (ulonglong)local_48.dwVolumeSerialNumber;
      *(DWORD *)(param_2 + 1) = local_48.nFileIndexHigh;
      *(DWORD *)((longlong)param_2 + 0xc) = local_48.nFileIndexLow;
      param_2[2] = 0;
    }
  }
}



