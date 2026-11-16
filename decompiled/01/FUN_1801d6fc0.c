// FUN_1801d6fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6fc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d6fc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x410);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x410) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1800efed0(param_1 + 0x400);
  FUN_180159650(param_1 + 0x3d8);
  FUN_180113710(param_1 + 0x3c0);
  FUN_180113710(param_1 + 0x3a8);
  _eh_vector_destructor_iterator_((void *)(param_1 + 0x2d0),0x48,3,FUN_1801d6f20);
  plVar4 = *(longlong **)(param_1 + 0x2c8);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x248);
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
  FUN_18015c010(param_1 + 0x150);
  FUN_18015c010(param_1 + 0xf8);
  FUN_18015c010(param_1 + 0x90);
  return;
}



