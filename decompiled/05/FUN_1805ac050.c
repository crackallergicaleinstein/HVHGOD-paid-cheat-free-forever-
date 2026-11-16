// FUN_1805ac050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac050 */

undefined8 FUN_1805ac050(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  iVar2 = param_2[2];
  uVar3 = 0x17;
  if (param_2[4] != 0) {
    iVar2 = (iVar2 * param_2[4] + 0x24) / 0x48;
  }
  iVar2 = iVar2 + 0x20 >> 6;
  if (*param_2 == 0) {
    if (iVar2 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) goto LAB_1805ac0f4;
  }
  else {
    if (*param_2 == 1) {
      uVar3 = 0;
      if (iVar2 != *(int *)(lVar1 + 0x154) + *(int *)(lVar1 + 0x150)) {
        return 0x17;
      }
LAB_1805ac0f4:
      FUN_180577980(lVar1,0,iVar2,uVar3);
      *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
      *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
      *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
      return 0;
    }
    uVar3 = 7;
  }
  return uVar3;
}



