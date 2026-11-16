// FUN_180244f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180244f40 */

undefined8 * FUN_180244f40(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_2 = &DAT_1808d9b80;
  param_2[1] = &DAT_1808d9bd0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined2 *)(param_2 + 3) = 0;
  piVar1 = (int *)FUN_1801acaf0();
  if (DAT_1808d9bda == '\0') {
    if (*piVar1 == 0) {
      if (DAT_1808d9bd9 != '\0') goto LAB_180244feb;
      if (*piVar1 == 0) {
        if ((PSRWLOCK)param_2[1] == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        if (*(char *)(param_2 + 2) != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(0x24);
        }
        AcquireSRWLockShared((PSRWLOCK)param_2[1]);
        *(undefined1 *)(param_2 + 2) = 1;
      }
    }
    *piVar1 = *piVar1 + 1;
    *(undefined1 *)((longlong)param_2 + 0x19) = 1;
    if (((DAT_1808d9bd9 == '\0') && (DAT_1808d9bd8 == '\x03')) && (DAT_1808d9bda == '\0')) {
      *(undefined1 *)(param_2 + 3) = 1;
      LOCK();
      DAT_1808d9bdc = DAT_1808d9bdc + 1;
      UNLOCK();
    }
    else {
      *(undefined1 *)(param_2 + 3) = 0;
    }
  }
  else {
LAB_180244feb:
    *param_2 = 0;
  }
  return param_2;
}



