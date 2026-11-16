// FUN_1805fd28c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd28c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * thunk_FUN_1805fcb30(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2[1] != 0) {
    LOCK();
    piVar1 = (int *)(param_2[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar4 = param_2[1];
  *param_1 = *param_2;
  plVar5 = (longlong *)param_1[1];
  param_1[1] = uVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



