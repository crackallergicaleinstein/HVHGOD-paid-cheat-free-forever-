// FUN_180660300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180660300 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180660300(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  thunk_FUN_180621380(*(undefined8 *)(param_2 + 0x98));
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x20) = 8;
  LOCK();
  DAT_1808d6088 = DAT_1808d6088 + 1;
  UNLOCK();
  *(undefined **)(param_2 + 0x30) = &DAT_1808d6090;
  *(undefined ***)(param_2 + 0x38) = &PTR_vftable_1808d6080;
  FUN_1805fca98(*(undefined8 *)(param_2 + 0x80),param_2 + 0x30);
  *(undefined4 *)(param_2 + 0x20) = 0;
  plVar4 = *(longlong **)(param_2 + 0x38);
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
  return 0;
}



