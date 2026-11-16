// FUN_1805fd0ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fd0ac */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fd0ac(undefined8 param_1,longlong *param_2,byte *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*param_3 & 1) == 0) && (*(int *)(param_3 + 0x18) != 0)) {
    iVar1 = *(int *)(param_3 + 0x18);
    uVar2 = __AdjustPointer(param_2,param_3 + 8);
    if ((*param_3 & 4) == 0) {
      FUN_1805fd090(param_1,iVar1 + param_4,uVar2);
    }
    else {
      FUN_1805fd09c();
    }
  }
  else {
    FUN_18063aed0(param_1,param_2,(longlong)*(int *)(param_3 + 0x14));
    if (((*param_3 & 8) != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_2 + 8))();
    }
  }
  return;
}



