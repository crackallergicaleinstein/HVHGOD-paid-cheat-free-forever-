// FUN_180508530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180508530 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180508530(longlong *param_1)

{
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
    param_1[2] = 0;
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    *param_1 = 0;
  }
  param_1[3] = 0;
  return;
}



