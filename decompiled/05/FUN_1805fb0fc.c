// FUN_1805fb0fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb0fc */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fb0fc(LPCWSTR param_1,LPCWSTR param_2,uint param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hObject;
  HANDLE hObject_00;
  undefined1 auStackY_b8 [32];
  undefined1 local_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  DWORD DStack_74;
  undefined1 local_70;
  undefined2 uStack_6f;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_b8;
  param_3 = param_3 & 0xf;
  if (param_3 == 2) {
LAB_1805fb2ab:
    BVar1 = CopyFileW(param_1,param_2,0);
    if (BVar1 == 0) {
      GetLastError();
    }
  }
  BVar1 = CopyFileW(param_1,param_2,1);
  if (BVar1 == 0) {
    local_78 = 0;
    DStack_74 = GetLastError();
  }
  else {
    local_78 = 1;
    DStack_74 = 0;
  }
  if (DStack_74 != 0x50) {
  }
  if (param_3 == 0) {
  }
  DVar2 = 3;
  if (param_3 != 1) {
    DVar2 = 1;
  }
  hObject = CreateFileW(param_1,0x80,DVar2,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if ((hObject == (HANDLE)0xffffffffffffffff) && (DVar3 = GetLastError(), DVar3 != 0)) {
  }
  hObject_00 = CreateFileW(param_2,0x80,DVar2,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  if ((hObject_00 == (HANDLE)0xffffffffffffffff) && (DVar2 = GetLastError(), DVar2 != 0)) {
    local_78 = 0;
    DStack_74 = DVar2;
LAB_1805fb205:
    if ((hObject != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(hObject), BVar1 == 0)) {
LAB_1805fb3a2:
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (param_3 == 4) {
      DVar2 = FUN_1805fada8(hObject,&local_78);
      if ((DVar2 != 0) || (DVar2 = FUN_1805fada8(hObject_00,&local_70), DVar2 != 0)) {
        local_78 = 0;
        DStack_74 = DVar2;
        if ((hObject_00 != (HANDLE)0xffffffffffffffff) &&
           (BVar1 = CloseHandle(hObject_00), BVar1 == 0)) goto LAB_1805fb3a2;
        goto LAB_1805fb205;
      }
      if (CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT21(uStack_6f,local_70))) <
          CONCAT44(DStack_74,CONCAT13(uStack_75,CONCAT21(uStack_77,local_78)))) {
        if (((hObject_00 == (HANDLE)0xffffffffffffffff) ||
            (BVar1 = CloseHandle(hObject_00), BVar1 != 0)) &&
           ((hObject == (HANDLE)0xffffffffffffffff || (BVar1 = CloseHandle(hObject), BVar1 != 0))))
        goto LAB_1805fb2ab;
        goto LAB_1805fb3a2;
      }
    }
    iVar4 = FUN_1805fad0c(hObject,local_50);
    if ((iVar4 == 0) && (iVar4 = FUN_1805fad0c(hObject_00,local_68), iVar4 == 0)) {
      iVar4 = memcmp(local_50,local_68,0x18);
      if (iVar4 == 0) {
        DStack_74 = 0x20;
      }
      else {
        DStack_74 = 0;
      }
    }
    else {
      DStack_74 = iVar4;
    }
    local_78 = 0;
    if (((hObject_00 != (HANDLE)0xffffffffffffffff) && (BVar1 = CloseHandle(hObject_00), BVar1 == 0)
        ) || ((hObject != (HANDLE)0xffffffffffffffff && (BVar1 = CloseHandle(hObject), BVar1 == 0)))
       ) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
}



