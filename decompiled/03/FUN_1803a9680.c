// FUN_1803a9680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803a9680 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803a9680(longlong param_1)

{
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
  if (DAT_180c70630 != 0) {
    (*(code *)DAT_180c70630)();
  }
  local_38 = 0;
  pRStack_30 = (PSRWLOCK)0x0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_180244f40();
  if (((char)uStack_20 != '\0') || ((DAT_1808d9bd8 == '\x02' && (DAT_1808d9bd9 == '\0')))) {
    FUN_180419b00();
    if ((undefined8 *)(param_1 + 0x10) == (undefined8 *)0x0) {
      _DAT_180b8e2b4 = 0x475ead00475ead00;
      DAT_180b8e2bc = 0x475ead00;
      _DAT_180b8e2c0 = 0x475ead00475ead00;
      _DAT_180b8e2c8 = 0x475ead00475ead00;
    }
    else {
      _DAT_180b8e2b4 = *(undefined8 *)(param_1 + 0x10);
      DAT_180b8e2bc = *(undefined4 *)(param_1 + 0x18);
      _DAT_180b8e2c0 = *(undefined8 *)(param_1 + 0x1c);
      _DAT_180b8e2c8 = *(undefined8 *)(param_1 + 0x24);
    }
    FUN_1803d7740();
  }
  FUN_180180bf0(&local_38);
  if ((char)uStack_28 != '\0') {
    ReleaseSRWLockShared(pRStack_30);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



