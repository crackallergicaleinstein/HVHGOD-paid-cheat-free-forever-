// FUN_1805fb620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb620 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fb620(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  int iVar3;
  HANDLE pvVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  uint local_2b0 [2];
  ulonglong local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  DWORD DStack_298;
  DWORD local_294;
  uint local_290;
  _WIN32_FIND_DATAW local_288;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2d8;
  uVar5 = param_3 & 0xfffffffe;
  if (((param_3 & 1) == 0) || ((param_3 & 4) == 0)) {
    if ((((param_3 & 2) != 0) && (param_4 != 0xffffffff)) &&
       (((param_4 & 0x400) == 0 || ((param_3 & 1) == 0)))) {
      uVar5 = param_3 & 0xfffffffc;
      *(uint *)(param_2 + 2) = param_4;
    }
    if (uVar5 == 0) {
    }
    if (((uVar5 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 & 0x400) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2b0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) {
        }
        pvVar4 = FindFirstFileW(param_1,&local_288);
        if (pvVar4 == (HANDLE)0xffffffffffffffff) {
          GetLastError();
        }
        FindClose(pvVar4);
        local_29c = local_288.ftLastWriteTime.dwLowDateTime;
        DStack_298 = local_288.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_288.ftLastWriteTime.dwHighDateTime = DStack_298;
        local_288.ftLastWriteTime.dwLowDateTime = local_29c;
        local_288.dwFileAttributes = local_2b0[0];
        local_288.nFileSizeLow = local_290;
        local_288.nFileSizeHigh = local_294;
      }
      if (((param_3 & 1) == 0) || ((local_288.dwFileAttributes & 0x400) == 0)) {
        *(DWORD *)(param_2 + 2) = local_288.dwFileAttributes;
        param_2[1] = CONCAT44(local_288.nFileSizeHigh,local_288.nFileSizeLow);
        *param_2 = (ulonglong)local_288.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_29c;
        uVar6 = uVar5 & 0xffffffd5;
        if (((local_288.dwFileAttributes & 0x400) == 0) && ((uVar5 & 4) != 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          uVar6 = uVar5 & 0xffffffd1;
        }
        uVar5 = uVar6;
        if (uVar5 == 0) {
        }
      }
    }
    iVar3 = __std_fs_open_handle
                      (&local_2b8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (iVar3 == 0) {
      pvVar4 = (HANDLE)CONCAT44(uStack_2b4,local_2b8);
      uVar6 = uVar5;
      if ((uVar5 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar4,FileBasicInfo,local_2b0,0x28);
        if (BVar1 == 0) {
          GetLastError();
          if (pvVar4 == (HANDLE)0xffffffffffffffff) {
          }
          BVar1 = CloseHandle(pvVar4);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        uVar6 = uVar5 & 0xffffffdd;
        *(uint *)(param_2 + 2) = local_290;
        *param_2 = CONCAT44(local_29c,local_2a0);
        if ((uVar5 & 4) != 0) {
          if ((local_290 & 0x400) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar4,FileAttributeTagInfo,&local_2b8,8);
            if (BVar1 == 0) {
              GetLastError();
              if (pvVar4 == (HANDLE)0xffffffffffffffff) {
              }
              BVar1 = CloseHandle(pvVar4);
              if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2b4;
          }
          uVar6 = uVar5 & 0xffffffd9;
        }
      }
      if ((uVar6 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar4,FileStandardInfo,local_2b0,0x18);
        if (BVar1 == 0) {
          GetLastError();
          if (pvVar4 == (HANDLE)0xffffffffffffffff) {
          }
          BVar1 = CloseHandle(pvVar4);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        uVar6 = uVar6 & 0xffffffe7;
        param_2[1] = local_2a8;
        *(undefined4 *)(param_2 + 3) = local_2a0;
      }
      if (uVar6 != 0) {
        if (pvVar4 == (HANDLE)0xffffffffffffffff) {
        }
        BVar1 = CloseHandle(pvVar4);
        if (BVar1 != 0) {
        }
        goto LAB_1805fb935;
      }
      if (pvVar4 == (HANDLE)0xffffffffffffffff) {
      }
      iVar3 = CloseHandle(pvVar4);
    }
    else {
      if ((HANDLE)CONCAT44(uStack_2b4,local_2b8) == (HANDLE)0xffffffffffffffff) {
      }
      iVar3 = CloseHandle((HANDLE)CONCAT44(uStack_2b4,local_2b8));
    }
    if (iVar3 == 0) {
LAB_1805fb935:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
}



