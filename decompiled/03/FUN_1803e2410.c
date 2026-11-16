// FUN_1803e2410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e2410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1803e2410(void)

{
  undefined1 uVar1;
  uint6 uStack_e;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180bb88c0);
  lRam0000000180bb88b8 = (ulonglong)uStack_e << 0x10;
  _DAT_180bb8890 = 0;
  uRam0000000180bb8898 = 0;
  uRam0000000180bb88a0 = 0;
  uRam0000000180bb88a8 = 0;
  _DAT_180bb88b0 = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bb88c0);
  uVar1 = DAT_180bb88c8;
  LOCK();
  DAT_180bb88c8 = 0;
  UNLOCK();
  LOCK();
  DAT_180bb88c9 = 0;
  UNLOCK();
  LOCK();
  DAT_180bb88ca = 0;
  UNLOCK();
  return uVar1;
}



