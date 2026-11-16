// FUN_1803c34b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c34b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803c34b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  *(undefined1 *)(param_1 + 0x978) = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  FUN_1803c8490(&local_68);
  FUN_1803bfc40(param_1 + 0x8c0,&local_68);
  _eh_vector_destructor_iterator_(&local_68,0x18,4,FUN_1801d7480);
  *(undefined8 *)(param_1 + 0x970) = 0;
  plVar4 = *(longlong **)(param_1 + 0x1060);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1060) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1068);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1068) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1070);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1070) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1078);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1078) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  plVar4 = *(longlong **)(param_1 + 0x1080);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1080) = 0;
    (**(code **)(*plVar4 + 0x10))();
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
  *(undefined1 *)(param_1 + 0x10a9) = 0;
  *(undefined8 *)(param_1 + 0x10b0) = 0;
  *(undefined4 *)(param_1 + 0x10d0) = 0;
  *(undefined8 *)(param_1 + 0x10c0) = 0;
  *(undefined8 *)(param_1 + 0x1098) = 0;
  plVar4 = *(longlong **)(param_1 + 0x10a0);
  *(undefined8 *)(param_1 + 0x10a0) = 0;
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
  *(undefined1 *)(param_1 + 0x10a8) = 0;
  FUN_1803f2680(param_1 + 0x980);
  return;
}



