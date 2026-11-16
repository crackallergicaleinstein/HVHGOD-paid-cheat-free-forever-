// FUN_1801137d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801137d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801137d0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_2 + 4) + 0x50 + (longlong)param_2);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_2)) {
      bVar2 = true;
    }
    else {
      FUN_1800f6450();
      bVar2 = *(int *)((longlong)*(int *)(*param_2 + 4) + 0x10 + (longlong)param_2) == 0;
    }
  }
  else {
    bVar2 = false;
  }
  *(bool *)(param_1 + 1) = bVar2;
  return param_1;
}



