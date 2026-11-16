// FUN_18020f850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18020f850 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_18020f850(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)*plVar1;
  if (plVar2 != (longlong *)0x0) {
    *plVar1 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  return plVar1;
}



