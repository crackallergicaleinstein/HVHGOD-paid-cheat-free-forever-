// FUN_180001180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180001180 */

void FUN_180001180(void)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  
  FUN_18015a450(&DAT_180bacb80);
  piVar3 = DAT_180bacb90;
  if (DAT_180bacb90 != (int *)0x0) {
    LOCK();
    puVar1 = (uint *)(DAT_180bacb90 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 2;
    UNLOCK();
    if ((uVar2 & 0xfffffffe) == 2) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        FUN_1804547d0(piVar3,0x20);
      }
    }
  }
  if (DAT_180bacb88 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18060ab3c();
  }
  return;
}



