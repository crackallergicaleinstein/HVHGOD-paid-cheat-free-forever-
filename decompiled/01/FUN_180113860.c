// FUN_180113860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180113860(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_38;
  uVar3 = *param_1;
LAB_180113880:
  while (uVar2 = (uint)uVar3 & 3, (uVar3 & 3) == 0) {
    LOCK();
    uVar1 = *param_1;
    bVar5 = uVar3 == uVar1;
    if (bVar5) {
      *param_1 = uVar3 | 1;
    }
    else {
      uVar3 = uVar1;
    }
    UNLOCK();
    if (bVar5) {
    }
  }
  if (uVar2 == 1) goto LAB_18011389a;
  if (uVar2 != 2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  goto LAB_1801138b5;
LAB_18011389a:
  uVar4 = uVar3 & 0xfffffffffffffffe | 2;
  LOCK();
  uVar1 = *param_1;
  bVar5 = uVar3 == uVar1;
  if (bVar5) {
    *param_1 = uVar4;
  }
  else {
    uVar3 = uVar1;
  }
  UNLOCK();
  if (bVar5) {
    uVar3 = uVar4;
LAB_1801138b5:
    local_18 = uVar3;
    if (uVar3 == *param_1) {
      do {
        FUN_1805fa43c(param_1,&local_18,8,0xffffffff);
      } while (local_18 == *param_1);
    }
    uVar3 = *param_1;
  }
  goto LAB_180113880;
}



