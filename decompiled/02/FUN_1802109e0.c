// FUN_1802109e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802109e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802109e0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_180210a20(param_1 + 0x28);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



