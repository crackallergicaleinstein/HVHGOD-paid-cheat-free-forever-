// FUN_18042bc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042bc30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18042bc30(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_18063ab10(param_1 + 6,0,0x800);
  FUN_18063ab10(param_1 + 0x106,0,0x800);
  FUN_18063ab10(param_1 + 0x206,0,0x800);
  *(undefined4 *)(param_1 + 0x306) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1834) = 0x100;
  *(undefined4 *)(param_1 + 0x307) = 0x100;
  plVar1 = (longlong *)*param_1;
  pcVar2 = *(code **)(*plVar1 + 0x290);
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  (*pcVar2)(plVar1,param_1 + 1,param_1 + 6,param_1 + 0x306);
  plVar1 = (longlong *)*param_1;
  pcVar2 = *(code **)(*plVar1 + 0x310);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  (*pcVar2)(plVar1,param_1 + 2,param_1 + 0x106,(longlong)param_1 + 0x1834);
  plVar1 = (longlong *)*param_1;
  pcVar2 = *(code **)(*plVar1 + 0x330);
  plVar3 = (longlong *)param_1[3];
  if (plVar3 != (longlong *)0x0) {
    param_1[3] = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  (*pcVar2)(plVar1,param_1 + 3,param_1 + 0x206,param_1 + 0x307);
  plVar1 = (longlong *)*param_1;
  pcVar2 = *(code **)(*plVar1 + 0x2b0);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  (*pcVar2)(plVar1,param_1 + 4,param_1 + 5);
  (**(code **)(*(longlong *)*param_1 + 0xb8))((longlong *)*param_1,0,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x1e0))((longlong *)*param_1,0,0,0);
  (**(code **)(*(longlong *)*param_1 + 0x200))((longlong *)*param_1,0,0,0);
  (**(code **)(*(longlong *)*param_1 + 0xf0))((longlong *)*param_1,0,0);
  return param_1;
}



