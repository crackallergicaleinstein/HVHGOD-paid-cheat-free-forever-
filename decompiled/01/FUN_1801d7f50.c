// FUN_1801d7f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d7f50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d7f50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x10a0);
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
  plVar4 = *(longlong **)(param_1 + 0x1090);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1090) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1088);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1088) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1080);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1080) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1078);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1078) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1070);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1070) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1068);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1068) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1060);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1060) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1800efed0(param_1 + 0x1020);
  FUN_18015c010(param_1 + 0xe98);
  FUN_18015c010(param_1 + 0xe40);
  FUN_18015c010(param_1 + 0xdd8);
  FUN_1801d6fc0(param_1 + 0x980);
  FUN_1801d7de0(param_1 + 0x8c0);
  return;
}



