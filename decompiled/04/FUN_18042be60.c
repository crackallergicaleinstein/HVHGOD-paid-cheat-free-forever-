// FUN_18042be60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042be60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18042be60(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (**(code **)(*(longlong *)*param_1 + 0xb8))
            ((longlong *)*param_1,param_1[1],param_1 + 6,*(undefined4 *)(param_1 + 0x306));
  (**(code **)(*(longlong *)*param_1 + 0x1e0))
            ((longlong *)*param_1,param_1[2],param_1 + 0x106,
             *(undefined4 *)((longlong)param_1 + 0x1834));
  (**(code **)(*(longlong *)*param_1 + 0x200))
            ((longlong *)*param_1,param_1[3],param_1 + 0x206,*(undefined4 *)(param_1 + 0x307));
  (**(code **)(*(longlong *)*param_1 + 0xf0))
            ((longlong *)*param_1,param_1[4],*(undefined4 *)(param_1 + 5));
  uVar3 = 0;
  if (*(int *)(param_1 + 0x306) != 0) {
    do {
      if ((longlong *)param_1[uVar3 + 6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[uVar3 + 6] + 0x10))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x306));
  }
  uVar3 = 0;
  if (*(int *)((longlong)param_1 + 0x1834) != 0) {
    do {
      if ((longlong *)param_1[uVar3 + 0x106] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[uVar3 + 0x106] + 0x10))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)((longlong)param_1 + 0x1834));
  }
  uVar3 = 0;
  if (*(int *)(param_1 + 0x307) != 0) {
    do {
      if ((longlong *)param_1[uVar3 + 0x206] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[uVar3 + 0x206] + 0x10))();
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x307));
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[3];
  if (plVar1 != (longlong *)0x0) {
    param_1[3] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    param_1[2] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    param_1[1] = 0;
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



