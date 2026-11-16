// FUN_1805fbdf4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbdf4 */

void FUN_1805fbdf4(void)

{
  int iVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  LOCK();
  iVar2 = DAT_1808d5fd4 + -1;
  UNLOCK();
  iVar1 = DAT_1808d5fd4 + -1;
  DAT_1808d5fd4 = iVar2;
  if (iVar1 < 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)&DAT_180bb1750;
    do {
      DeleteCriticalSection(lpCriticalSection);
      lpCriticalSection = lpCriticalSection + 1;
    } while (lpCriticalSection != (LPCRITICAL_SECTION)&DAT_180bb1890);
  }
  return;
}



