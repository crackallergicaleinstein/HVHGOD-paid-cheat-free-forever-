// FUN_180048fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180048fb0 */

void Unwind_180048fb0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  FUN_18017c1b0(param_2 + 0x40);
  piVar1 = *(int **)(param_2 + 0x80);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1804547d0(piVar1,0x20);
    }
  }
  FUN_1805f68fc(&DAT_1808d4080);
  return;
}



