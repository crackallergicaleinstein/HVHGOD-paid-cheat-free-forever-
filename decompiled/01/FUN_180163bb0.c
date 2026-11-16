// FUN_180163bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163bb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163bb0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = Concurrency::details::_Task_impl_base::vftable;
  plVar4 = (longlong *)param_1[0xf];
  if (plVar4 != (longlong *)0x2) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  FUN_1800f0160(param_1 + 0x29);
  FUN_1800efed0(param_1 + 0x24);
  plVar4 = (longlong *)param_1[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  return;
}



