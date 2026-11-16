// FUN_1802f5a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f5a80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f5a80(undefined8 param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined1 auStack_678 [32];
  undefined **local_658;
  char *local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_638;
  longlong lStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  char local_618 [1536];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_678;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_638 = _DAT_180bb8890;
  lStack_630 = lRam0000000180bb8898;
  uStack_628 = uRam0000000180bb88a0;
  uStack_620 = uRam0000000180bb88a8;
  local_648 = _DAT_180bb88b0;
  uStack_640 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  iVar2 = DAT_180b8fac0;
  lVar1 = DAT_180b8fab8;
  if (DAT_180b0d7e0 == '\0') {
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180b8fab0 = '\0';
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
  }
  else {
    if ((((char)uStack_640 != '\0') && (lStack_630 != 0)) && ((int)local_648 - 2U < 2)) {
      LOCK();
      DAT_180b8fab8 = lStack_630;
      UNLOCK();
      LOCK();
      DAT_180b8fac0 = (int)local_648;
      UNLOCK();
      if ((lVar1 != lStack_630) || (iVar2 != (int)local_648)) {
        LOCK();
        DAT_180b8fab0 = '\x01';
        UNLOCK();
        LOCK();
        DAT_180b8fab1 = 0;
        UNLOCK();
        LOCK();
        DAT_180b8fac8 = 0;
        UNLOCK();
        LOCK();
        DAT_180b8fad0 = 0;
        UNLOCK();
        LOCK();
        DAT_180b8fad8 = 0;
        UNLOCK();
      }
      if (DAT_180b8fab0 == '\0') {
      }
      bVar3 = DAT_180b8fad8;
      if (param_2 == '\0') {
        DAT_180b8fad8 = 0;
      }
      do {
        if (1 < bVar3) {
        }
        bVar4 = bVar3 + 1;
        LOCK();
        bVar5 = bVar3 == DAT_180b8fad8;
        if (bVar5) {
          DAT_180b8fad8 = bVar4;
        }
        else {
          bVar3 = DAT_180b8fad8;
        }
        UNLOCK();
      } while (!bVar5);
      if (bVar4 != 2) {
      }
      FUN_18063ab10(local_618,0,0x600);
      FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"stable_network_updates=2");
      local_658 = &PTR_180700558;
      if (local_618[0] != '\0') {
        local_658 = (undefined **)&DAT_1806bcfc0;
      }
      local_650 = local_618;
      FUN_1800f6900(0);
    }
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  DAT_180b8fad8 = 0;
  DAT_180b8fac8 = 0;
  DAT_180b8fac0 = 0;
  DAT_180b8fab8 = 0;
  DAT_180b8fab1 = 0;
}



