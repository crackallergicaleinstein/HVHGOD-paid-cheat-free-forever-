// FUN_1801d7de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d7de0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d7de0(void *param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x98) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x90) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x88) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x80) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x78) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x70) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x68);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x68) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((longlong)param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  _eh_vector_destructor_iterator_(param_1,0x18,4,FUN_1801d7480);
  return;
}



