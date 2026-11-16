// FUN_1801d4480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d4480 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801d4480(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  lVar2 = 0;
  if (local_18 != param_2) {
    lVar2 = *param_2;
    *param_2 = 0;
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



