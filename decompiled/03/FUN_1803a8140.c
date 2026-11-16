// FUN_1803a8140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a8140 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803a8140(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  PSRWLOCK pRStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  local_48 = 0;
  pRStack_40 = (PSRWLOCK)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_180244f40(param_1,&local_48);
  if (((char)uStack_30 != '\0') || (((byte)(DAT_1808d9bd8 - 1U) < 2 && (DAT_1808d9bd9 == '\0')))) {
    FUN_1803d38e0(uVar2,param_2,param_3);
  }
  if (local_48 != 0) {
    if ((char)uStack_30 != '\0') {
      LOCK();
      *(int *)(local_48 + 0x5c) = *(int *)(local_48 + 0x5c) + -1;
      UNLOCK();
    }
    piVar1 = (int *)FUN_1801acaf0();
    if ((uStack_30._1_1_ != '\0') && (*piVar1 != 0)) {
      *piVar1 = *piVar1 + -1;
    }
    if ((char)uStack_38 != '\0') {
      if (pRStack_40 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_40);
      uStack_38 = uStack_38 & 0xffffffffffffff00;
    }
    uStack_30 = uStack_30 & 0xffffffffffffff00;
    local_48 = 0;
  }
  if (DAT_180c70930 != 0) {
    (*(code *)DAT_180c70930)(param_1,param_2,param_3);
  }
  if (local_48 != 0) {
    if ((char)uStack_30 != '\0') {
      LOCK();
      *(int *)(local_48 + 0x5c) = *(int *)(local_48 + 0x5c) + -1;
      UNLOCK();
    }
    piVar1 = (int *)FUN_1801acaf0();
    if ((uStack_30._1_1_ != '\0') && (*piVar1 != 0)) {
      *piVar1 = *piVar1 + -1;
    }
    if ((char)uStack_38 != '\0') {
      if (pRStack_40 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared(pRStack_40);
      uStack_38 = uStack_38 & 0xffffffffffffff00;
    }
    uStack_30 = uStack_30 & 0xffffffffffffff00;
    local_48 = 0;
  }
  if ((char)uStack_38 != '\0') {
    ReleaseSRWLockShared(pRStack_40);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



