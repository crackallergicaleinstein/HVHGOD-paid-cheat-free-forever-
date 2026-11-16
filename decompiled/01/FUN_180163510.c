// FUN_180163510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163510 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163510(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  *param_1 = 0;
  return;
}



