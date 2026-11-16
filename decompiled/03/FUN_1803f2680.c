// FUN_1803f2680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f2680 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803f2680(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_148 [4] [16];
  undefined8 local_108;
  undefined1 local_f8 [224];
  
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
  FUN_18063ab10(local_f8,0,0xd8);
  FUN_1801d8f50(local_f8);
  lVar6 = 3;
  lVar5 = param_1 + 0x2d0;
  do {
    FUN_1803f2850(lVar5,local_f8 + (lVar5 - (param_1 + 0x2d0)));
    lVar5 = lVar5 + 0x48;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  _eh_vector_destructor_iterator_(local_f8,0x48,3,FUN_1801d6f20);
  *(undefined8 *)(param_1 + 0x240) = 0;
  plVar4 = *(longlong **)(param_1 + 0x248);
  *(undefined8 *)(param_1 + 0x248) = 0;
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
  *(undefined1 *)(param_1 + 0x250) = 0;
  local_108 = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined1 (*) [16])(param_1 + 0x278) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  local_148[0] = (undefined1  [16])0x0;
  FUN_1803c9920(param_1 + 0x400,local_148);
  plVar4 = *(longlong **)(param_1 + 0x410);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x410) = 0;
    (**(code **)(*plVar4 + 0x10))();
  }
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  return;
}



