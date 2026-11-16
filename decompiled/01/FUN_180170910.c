// FUN_180170910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180170910 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180170910(undefined8 *param_1,LPCWSTR param_2)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  HANDLE hFile;
  undefined1 auStackY_b8 [32];
  undefined1 local_78 [40];
  _BY_HANDLE_FILE_INFORMATION local_50;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStackY_b8;
  FUN_1800f5370(local_78);
  cVar1 = FUN_180165ac0(local_78);
  if (cVar1 == '\0') {
    FUN_18015c090(local_78,"Local fork path is unavailable.");
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_78,&DAT_1808d12a8);
  }
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(LPCWSTR *)param_2;
  }
  hFile = CreateFileW(param_2,0x80010000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x200000,(HANDLE)0x0);
  *param_1 = hFile;
  if (((longlong)hFile + 1U & 0xfffffffffffffffe) == 0) {
    DVar2 = GetLastError();
    if (1 < DVar2 - 2) {
      FUN_18015c090(local_78,"Could not open the local fork library for migration.");
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_78,&DAT_1808d12a8);
    }
  }
  else {
    local_50.nFileIndexLow = 0;
    local_50.dwFileAttributes = 0;
    local_50.ftCreationTime.dwLowDateTime = 0;
    local_50.ftCreationTime.dwHighDateTime = 0;
    local_50.ftLastAccessTime.dwLowDateTime = 0;
    local_50.ftLastAccessTime.dwHighDateTime = 0;
    local_50.ftLastWriteTime.dwLowDateTime = 0;
    local_50.ftLastWriteTime.dwHighDateTime = 0;
    local_50.dwVolumeSerialNumber = 0;
    local_50.nFileSizeHigh = 0;
    local_50.nFileSizeLow = 0;
    local_50.nNumberOfLinks = 0;
    local_50.nFileIndexHigh = 0;
    BVar3 = GetFileInformationByHandle(hFile,&local_50);
    if (((BVar3 == 0) || (local_50.nNumberOfLinks != 1)) ||
       (((ulonglong)local_50.dwFileAttributes & 0x410) != 0)) {
      FUN_18015c090(local_78,"Invalid local fork file.");
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_78,&DAT_1808d12a8);
    }
  }
}



