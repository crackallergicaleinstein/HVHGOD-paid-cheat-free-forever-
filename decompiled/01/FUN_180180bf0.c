// FUN_180180bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180180bf0 */

void FUN_180180bf0(longlong *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    if ((char)param_1[3] != '\0') {
      LOCK();
      piVar1 = (int *)(*param_1 + 0x5c);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = (int *)FUN_1801acaf0();
    if ((*(char *)((longlong)param_1 + 0x19) != '\0') && (*piVar1 != 0)) {
      *piVar1 = *piVar1 + -1;
    }
    if ((char)param_1[2] != '\0') {
      if ((PSRWLOCK)param_1[1] == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      ReleaseSRWLockShared((PSRWLOCK)param_1[1]);
      *(undefined1 *)(param_1 + 2) = 0;
    }
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = 0;
  }
  return;
}



