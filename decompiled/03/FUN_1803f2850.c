// FUN_1803f2850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f2850 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1803f2850(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18 [2];
  
  lVar2 = 0;
  if (&local_38 != param_2) {
    lVar2 = *param_2;
    *param_2 = 0;
  }
  plVar1 = (longlong *)*param_1;
  *param_1 = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = param_2 + 1;
  lVar2 = 0;
  if (&local_30 != plVar1) {
    lVar2 = *plVar1;
    *plVar1 = 0;
  }
  plVar1 = (longlong *)param_1[1];
  param_1[1] = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = param_2 + 2;
  lVar2 = 0;
  if (&local_28 != plVar1) {
    lVar2 = *plVar1;
    *plVar1 = 0;
  }
  plVar1 = (longlong *)param_1[2];
  param_1[2] = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = param_2 + 3;
  lVar2 = 0;
  if (&local_20 != plVar1) {
    lVar2 = *plVar1;
    *plVar1 = 0;
  }
  plVar1 = (longlong *)param_1[3];
  param_1[3] = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = param_2 + 4;
  lVar2 = 0;
  if (local_18 != plVar1) {
    lVar2 = *plVar1;
    *plVar1 = 0;
  }
  plVar1 = (longlong *)param_1[4];
  param_1[4] = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(char *)(param_1 + 8) = (char)param_2[8];
  return param_1;
}



