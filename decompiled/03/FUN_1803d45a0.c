// FUN_1803d45a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d45a0 */

longlong FUN_1803d45a0(void)

{
  longlong lVar1;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  lVar1 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  return (lVar1 >> 2) - (lVar1 >> 0x3f);
}



