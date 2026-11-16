// FUN_1802827b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802827b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802827b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_18015c010(param_1 + 8);
  return;
}



