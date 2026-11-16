// FUN_1805fb9a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb9a8 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fb9a8(undefined8 param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  DWORD DStack_54;
  HANDLE local_50;
  undefined4 local_48 [2];
  undefined1 local_40 [32];
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  bVar1 = false;
  DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10180,0x2200000);
  if (DStack_54 != 0) {
    if (DStack_54 == 5) {
      DStack_54 = __std_fs_open_handle(&local_50,param_1,0x10000,0x2200000);
      if (DStack_54 == 0) goto LAB_1805fb9f6;
    }
    else if (((((DStack_54 == 2) || (DStack_54 == 3)) || (DStack_54 == 0x35)) ||
             ((DStack_54 == 0x40 || (DStack_54 == 0x7b)))) || (DStack_54 == 0x10b)) {
      DStack_54 = 0;
    }
    local_58 = 0;
    if (local_50 == (HANDLE)0xffffffffffffffff) {
    }
    goto LAB_1805fba64;
  }
  bVar1 = true;
LAB_1805fb9f6:
  local_48[0] = 0x13;
  BVar2 = SetFileInformationByHandle(local_50,0x15,local_48,4);
  if (BVar2 == 0) {
    DStack_54 = GetLastError();
    if (((DStack_54 == 1) || (DStack_54 == 0x32)) || (DStack_54 == 0x57)) {
      DStack_54 = FUN_1805fadfc(local_50);
      if (DStack_54 == 0) goto LAB_1805fba1c;
      if ((DStack_54 != 5) || (!bVar1)) goto LAB_1805fbaaf;
      BVar2 = GetFileInformationByHandleEx(local_50,FileBasicInfo,local_40,0x28);
      if (BVar2 == 0) {
LAB_1805fbaf2:
        local_58 = 0;
        DStack_54 = GetLastError();
LAB_1805fbafb:
        if (local_50 == (HANDLE)0xffffffffffffffff) {
        }
        BVar2 = CloseHandle(local_50);
        if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      if ((local_20 & 1) == 0) {
LAB_1805fbb7a:
        local_58 = 0;
        DStack_54 = 5;
        goto LAB_1805fbafb;
      }
      local_20 = local_20 ^ 1;
      BVar2 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
      if (BVar2 == 0) goto LAB_1805fbaf2;
      iVar3 = FUN_1805fadfc(local_50);
      if (iVar3 == 0) {
        local_58 = 1;
        DStack_54 = 0;
        goto LAB_1805fbafb;
      }
      if (iVar3 == 5) {
        local_20 = local_20 | 1;
        BVar2 = SetFileInformationByHandle(local_50,FileBasicInfo,local_40,0x28);
        if (BVar2 != 0) goto LAB_1805fbb7a;
        goto LAB_1805fbaf2;
      }
      local_58 = 0;
      DStack_54 = GetLastError();
    }
    else {
LAB_1805fbaaf:
      local_58 = 0;
    }
  }
  else {
LAB_1805fba1c:
    local_58 = 1;
    DStack_54 = 0;
  }
  if (local_50 == (HANDLE)0xffffffffffffffff) {
  }
LAB_1805fba64:
  BVar2 = CloseHandle(local_50);
  if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
}



