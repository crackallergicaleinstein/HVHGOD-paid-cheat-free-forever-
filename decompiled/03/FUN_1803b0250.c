// FUN_1803b0250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b0250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803b0250(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 auStack_88 [48];
  longlong local_58;
  PSRWLOCK pRStack_50;
  ulonglong uStack_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_58 = 0;
  pRStack_50 = (PSRWLOCK)0x0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_180244f40(param_1,&local_58);
  cVar2 = (char)uStack_40;
  if ((char)uStack_40 == '\0') {
    if (local_58 != 0) {
      piVar1 = (int *)FUN_1801acaf0();
      if ((uStack_40._1_1_ != '\0') && (*piVar1 != 0)) {
        *piVar1 = *piVar1 + -1;
      }
      if ((char)uStack_48 != '\0') {
        if (pRStack_50 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_50);
        uStack_48 = uStack_48 & 0xffffffffffffff00;
      }
      cVar2 = '\0';
      uStack_40 = uStack_40 & 0xffffffffffffff00;
      local_58 = 0;
    }
  }
  else {
    if (DAT_180b0cac8 != '\0') goto LAB_1803b036f;
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 0x5c) = *(int *)(local_58 + 0x5c) + -1;
      UNLOCK();
      piVar1 = (int *)FUN_1801acaf0();
      if ((uStack_40._1_1_ != '\0') && (*piVar1 != 0)) {
        *piVar1 = *piVar1 + -1;
      }
      if ((char)uStack_48 != '\0') {
        if (pRStack_50 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_50);
        uStack_48 = uStack_48 & 0xffffffffffffff00;
      }
      uStack_40 = uStack_40 & 0xffffffffffffff00;
      local_58 = 0;
      cVar2 = '\0';
    }
  }
  if ((code *)DAT_180c6fdf0 != (code *)0x0) {
    (*(code *)DAT_180c6fdf0)(param_1,param_2,param_3,param_4);
    cVar2 = (char)uStack_40;
  }
LAB_1803b036f:
  if (local_58 != 0) {
    if (cVar2 != '\0') {
      LOCK();
      *(int *)(local_58 + 0x5c) = *(int *)(local_58 + 0x5c) + -1;
      UNLOCK();
    }
    piVar1 = (int *)FUN_1801acaf0();
    if ((uStack_40._1_1_ != '\0') && (*piVar1 != 0)) {
      *piVar1 = *piVar1 + -1;
    }
    if ((char)uStack_48 != '\0') {
      if (pRStack_50 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_50);
      uStack_48 = uStack_48 & 0xffffffffffffff00;
    }
    uStack_40 = uStack_40 & 0xffffffffffffff00;
    local_58 = 0;
  }
  if ((char)uStack_48 != '\0') {
    ReleaseSRWLockShared(pRStack_50);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



