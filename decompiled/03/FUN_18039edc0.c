// FUN_18039edc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18039edc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18039edc0(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  PSRWLOCK pRStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if (DAT_180c6fd30 != 0) {
    (*(code *)DAT_180c6fd30)();
  }
  piVar1 = (int *)FUN_18027ae30();
  if (*piVar1 == 0) {
    local_48 = 0;
    pRStack_40 = (PSRWLOCK)0x0;
    uStack_38 = 0;
    uStack_30 = 0;
    uVar2 = FUN_180244f40();
    if ((char)uStack_30 != '\0') {
      FUN_1802d0a50(uVar2,param_1,param_2,DAT_180b8e622);
    }
    FUN_180180bf0(&local_48);
    if ((char)uStack_38 != '\0') {
      ReleaseSRWLockShared(pRStack_40);
    }
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



