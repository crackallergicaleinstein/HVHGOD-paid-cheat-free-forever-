// FUN_180180bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180180bc0 */

void FUN_180180bc0(longlong param_1)

{
  FUN_180180bf0();
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_1 + 8));
  return;
}



