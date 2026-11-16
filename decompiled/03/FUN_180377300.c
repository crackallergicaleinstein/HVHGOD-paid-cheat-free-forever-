// FUN_180377300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180377300 */

undefined8 * FUN_180377300(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  
  *param_2 = &DAT_1808d9b80;
  param_2[1] = &DAT_1808d9b80;
  *(undefined1 *)(param_2 + 2) = 0;
  iVar1 = FUN_1805f68d0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d9bcc == 0x7fffffff) {
    DAT_1808d9bcc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(undefined1 *)(param_2 + 2) = 1;
  param_2[3] = &DAT_1808d9bd0;
  *(undefined1 *)(param_2 + 4) = 0;
  DAT_1808d9bd9 = 1;
  LOCK();
  DAT_1808d9be0 = DAT_1808d9be0 + 1;
  UNLOCK();
  DAT_1808d9bd8 = param_3;
  if ((PSRWLOCK)param_2[3] == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_18017d0c0(1);
  }
  if (*(char *)(param_2 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_18017d0c0(0x24);
  }
  AcquireSRWLockExclusive((PSRWLOCK)param_2[3]);
  *(undefined1 *)(param_2 + 4) = 1;
  return param_2;
}



