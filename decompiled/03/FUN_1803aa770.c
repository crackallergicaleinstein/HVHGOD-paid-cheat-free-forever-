// FUN_1803aa770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803aa770 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803aa770(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  PSRWLOCK pRStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c701b0 != 0) {
    (*(code *)DAT_180c701b0)();
  }
  local_38 = 0;
  pRStack_30 = (PSRWLOCK)0x0;
  uStack_28 = 0;
  uStack_20 = 0;
  uVar1 = FUN_180244f40();
  if ((char)uStack_20 != '\0') {
    FUN_1802b7180(uVar1,param_1);
  }
  FUN_180180bf0(&local_38);
  if ((char)uStack_28 != '\0') {
    ReleaseSRWLockShared(pRStack_30);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



