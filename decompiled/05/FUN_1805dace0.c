// FUN_1805dace0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dace0 */

undefined8 FUN_1805dace0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar3 = *(longlong *)(lVar1 + 0x40);
  if (lVar3 == 0) {
    lVar3 = (**(code **)(param_1 + 0x30))
                      (*(undefined8 *)(param_1 + 0x40),
                       1 << ((byte)*(undefined4 *)(lVar1 + 0x30) & 0x1f),1);
    *(longlong *)(lVar1 + 0x40) = lVar3;
    if (lVar3 == 0) {
      return 1;
    }
  }
  uVar5 = *(uint *)(lVar1 + 0x34);
  if (uVar5 == 0) {
    uVar5 = 1 << ((byte)*(undefined4 *)(lVar1 + 0x30) & 0x1f);
    *(uint *)(lVar1 + 0x34) = uVar5;
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  if (param_3 < uVar5) {
    uVar5 = uVar5 - *(uint *)(lVar1 + 0x3c);
    if (param_3 < uVar5) {
      uVar5 = param_3;
    }
    FUN_18063aed0((ulonglong)*(uint *)(lVar1 + 0x3c) + lVar3,param_2 - (ulonglong)param_3,uVar5);
    param_3 = param_3 - uVar5;
    if (param_3 == 0) {
      uVar4 = *(int *)(lVar1 + 0x3c) + uVar5;
      *(uint *)(lVar1 + 0x3c) = uVar4;
      if (uVar4 == *(uint *)(lVar1 + 0x34)) {
        *(undefined4 *)(lVar1 + 0x3c) = 0;
      }
      if (*(uint *)(lVar1 + 0x34) <= *(uint *)(lVar1 + 0x38)) {
        return 0;
      }
      iVar2 = *(uint *)(lVar1 + 0x38) + uVar5;
    }
    else {
      FUN_18063aed0(*(undefined8 *)(lVar1 + 0x40),param_2 - (ulonglong)param_3);
      iVar2 = *(int *)(lVar1 + 0x34);
      *(uint *)(lVar1 + 0x3c) = param_3;
    }
  }
  else {
    FUN_18063aed0(lVar3,param_2 - (ulonglong)uVar5);
    iVar2 = *(int *)(lVar1 + 0x34);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  *(int *)(lVar1 + 0x38) = iVar2;
  return 0;
}



