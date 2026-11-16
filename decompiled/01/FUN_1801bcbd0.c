// FUN_1801bcbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bcbd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801bcbd0(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_180113710(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



