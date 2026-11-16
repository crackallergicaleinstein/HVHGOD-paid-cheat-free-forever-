// FUN_1801d7480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d7480 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d7480(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    param_1[1] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



