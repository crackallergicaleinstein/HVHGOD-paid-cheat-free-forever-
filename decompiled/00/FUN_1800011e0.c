// FUN_1800011e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800011e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800011e0(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_180bacba0;
  if (DAT_180bacba0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_180bacba0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 8))(plVar3);
        return;
      }
    }
  }
  return;
}



