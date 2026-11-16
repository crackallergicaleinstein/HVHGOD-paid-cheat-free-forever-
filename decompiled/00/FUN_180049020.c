// FUN_180049020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180049020 */

void Unwind_180049020(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1804547d0(piVar1,0x20);
    }
  }
                    /* WARNING: Subroutine does not return */
  Unwind_180606618();
}



