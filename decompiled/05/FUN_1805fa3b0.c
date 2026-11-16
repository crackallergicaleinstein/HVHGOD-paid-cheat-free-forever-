// FUN_1805fa3b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa3b0 */

void FUN_1805fa3b0(ulonglong param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  
  uVar1 = param_1 >> 0x10 ^ param_1;
  lVar3 = (ulonglong)(byte)((byte)(uVar1 >> 8) ^ (byte)uVar1) * 0x40;
  AcquireSRWLockExclusive((PSRWLOCK)(&DAT_180bad380 + lVar3));
  puVar2 = *(ulonglong **)(&DAT_180bad390 + lVar3);
  if (puVar2 != (ulonglong *)0x0) {
    for (; puVar2 != (ulonglong *)(lVar3 + 0x180bad388); puVar2 = (ulonglong *)puVar2[1]) {
      if (*puVar2 == param_1) {
        WakeAllConditionVariable((PCONDITION_VARIABLE)(puVar2 + 3));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001805fa433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(&DAT_180bad380 + lVar3));
  return;
}



