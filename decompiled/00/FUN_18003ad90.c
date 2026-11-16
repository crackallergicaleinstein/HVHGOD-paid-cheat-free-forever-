// FUN_18003ad90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003ad90 */

void FUN_18003ad90(void)

{
  undefined8 *puVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
  DAT_180bacc68 = 0;
  DAT_1808d4050 = 0;
  if (DAT_1808d4058 < 0x10) {
    puVar1 = &DAT_1808d4040;
  }
  else {
    puVar1 = DAT_1808d4040;
  }
  *(undefined1 *)puVar1 = 0;
  DAT_180bacca0 = DAT_180bacca0 + 1;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
  return;
}



