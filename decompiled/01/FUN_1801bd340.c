// FUN_1801bd340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd340 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801bd340(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



