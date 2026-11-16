// FUN_180579c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579c50 */

undefined4 FUN_180579c50(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar1 | 1;
  }
  else {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  lVar6 = 0;
  iVar3 = *(int *)(param_1 + 0x70);
  if ((iVar2 < 0) || (iVar3 < 0)) {
    uVar5 = 6;
  }
  else if ((iVar2 != 0) && (iVar3 != 0)) {
    if ((int)(0x7fffffff / (longlong)iVar3) < iVar2) {
      uVar5 = 10;
    }
    else {
      lVar6 = (**(code **)(lVar4 + 8))(lVar4,iVar3 * iVar2);
      uVar5 = 0x40;
      if ((lVar6 != 0) && (uVar5 = 0, 0 < iVar2)) {
        FUN_18063ab10(lVar6,0,(longlong)(iVar3 * iVar2));
      }
    }
  }
  *(longlong *)(param_1 + 0x78) = lVar6;
  return uVar5;
}



