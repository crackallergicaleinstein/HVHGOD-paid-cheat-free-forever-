// FUN_1800a9a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a9a50 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800a9a50(undefined8 *param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE hFile;
  uint uVar4;
  char cVar5;
  undefined1 auStackY_20a8 [32];
  DWORD local_2068 [2];
  _BY_HANDLE_FILE_INFORMATION local_2060;
  char local_2028 [8192];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x1800a9a5f;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStackY_20a8;
  hFile = CreateFileW((LPCWSTR)(param_1 + 2),0x80000004,5,(LPSECURITY_ATTRIBUTES)0x0,4,0x200000,
                      (HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    local_2060.dwFileAttributes = 0;
    local_2060.ftCreationTime.dwLowDateTime = 0;
    local_2060.ftCreationTime.dwHighDateTime = 0;
    local_2060.ftLastAccessTime.dwLowDateTime = 0;
    local_2060.ftLastAccessTime.dwHighDateTime = 0;
    local_2060.ftLastWriteTime.dwLowDateTime = 0;
    local_2060.ftLastWriteTime.dwHighDateTime = 0;
    local_2060.dwVolumeSerialNumber = 0;
    local_2060.nFileSizeHigh = 0;
    local_2060.nFileSizeLow = 0;
    local_2060.nNumberOfLinks = 0;
    local_2060.nFileIndexHigh = 0;
    local_2060.nFileIndexLow = 0;
    BVar1 = GetFileInformationByHandle(hFile,&local_2060);
    if (((BVar1 == 0) || (local_2060.nNumberOfLinks != 1)) ||
       (((ulonglong)local_2060.dwFileAttributes & 0x410) != 0)) {
      CloseHandle(hFile);
    }
    else {
      DVar2 = local_2060.nFileSizeLow;
      if (local_2060.nFileSizeHigh != 0) {
        DVar2 = 0x100001;
      }
      *param_1 = hFile;
      *(DWORD *)((longlong)param_1 + 0x424) = DVar2;
      *(undefined4 *)(param_1 + 0x84) = 0;
      if (DVar2 != 0) {
        if (DVar2 < 0x100001) {
          uVar4 = 0;
          cVar5 = '\0';
          if (DVar2 != 0) {
            while( true ) {
              local_2068[0] = 0;
              BVar1 = ReadFile(hFile,local_2028,0x2000,local_2068,(LPOVERLAPPED)0x0);
              DVar2 = local_2068[0];
              if ((BVar1 == 0) || (local_2068[0] == 0)) break;
              uVar4 = uVar4 + local_2068[0];
              iVar3 = thunk_FUN_1805f77d0(local_2028,local_2028 + local_2068[0],10);
              *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + iVar3;
              cVar5 = local_2028[DVar2 - 1];
              if ((1000 < *(uint *)(param_1 + 0x84)) ||
                 (*(uint *)((longlong)param_1 + 0x424) <= uVar4)) break;
            }
          }
          if ((uVar4 != *(uint *)((longlong)param_1 + 0x424)) || (cVar5 != '\n')) {
            *(undefined4 *)(param_1 + 0x84) = 0x3e9;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x84) = 0x3e9;
        }
      }
    }
  }
}



