// FUN_1805fb4dc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb4dc */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805fb4dc(undefined8 param_1,undefined8 param_2)

{
  HANDLE hObject;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  uint local_58;
  int iStack_54;
  uint local_50;
  int iStack_4c;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  iVar3 = __std_fs_open_handle(&local_58,param_1,0x80,0x2000000);
  if (iVar3 != 0) {
    local_50 = local_50 & 0xffffff00;
    if ((HANDLE)CONCAT44(iStack_54,local_58) == (HANDLE)0xffffffffffffffff) {
    }
    iStack_4c = iVar3;
    BVar4 = CloseHandle((HANDLE)CONCAT44(iStack_54,local_58));
    if (BVar4 != 0) {
    }
    goto LAB_1805fb619;
  }
  hObject = (HANDLE)CONCAT44(iStack_54,local_58);
  iStack_54 = FUN_1805fad0c(hObject,local_30);
  if (iStack_54 == 0) {
    iStack_54 = __std_fs_open_handle(&local_50,param_2,0x80,0x2000000);
    iVar3 = iStack_4c;
    uVar2 = local_50;
    if (iStack_54 == 0) {
      lVar1 = CONCAT44(iStack_4c,local_50);
      iStack_54 = FUN_1805fad0c(lVar1,local_48);
      if (iStack_54 == 0) {
        iVar5 = memcmp(local_30,local_48,0x18);
        iStack_54 = 0;
        local_58 = CONCAT31(local_58._1_3_,iVar5 == 0);
      }
      else {
        local_58 = local_58 & 0xffffff00;
      }
      if (lVar1 != -1) goto LAB_1805fb5c1;
    }
    else {
      local_58 = local_58 & 0xffffff00;
      if (CONCAT44(iStack_4c,local_50) != -1) {
LAB_1805fb5c1:
        BVar4 = CloseHandle((HANDLE)CONCAT44(iVar3,uVar2));
        if (BVar4 == 0) goto LAB_1805fb619;
      }
    }
  }
  else {
    local_58 = local_58 & 0xffffff00;
  }
  if ((hObject == (HANDLE)0xffffffffffffffff) || (BVar4 = CloseHandle(hObject), BVar4 != 0)) {
  }
LAB_1805fb619:
                    /* WARNING: Subroutine does not return */
  abort();
}



