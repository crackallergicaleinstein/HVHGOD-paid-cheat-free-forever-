// FUN_1800386a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800386a0 */

void Unwind_1800386a0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 0x58);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_1804547d0(piVar1,0x20);
    }
  }
  FUN_18015a520(param_2 + 0x98);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_2 + 0x90);
  return;
}



