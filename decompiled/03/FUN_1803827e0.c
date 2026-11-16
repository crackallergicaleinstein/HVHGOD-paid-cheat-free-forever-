// FUN_1803827e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803827e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1803827e0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  *param_1 = 0;
  uVar2 = (**(code **)(*plVar1 + 0x10))();
  return uVar2;
}



