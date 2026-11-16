// FUN_1805ae680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ae680 */

undefined8 FUN_1805ae680(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  iVar3 = param_2[2];
  uVar4 = 0x17;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (param_2[4] != 0) {
    iVar3 = (iVar3 * param_2[4] + 0x24) / 0x48;
  }
  iVar3 = iVar3 + 0x20 >> 6;
  if (*param_2 == 0) {
    if (iVar3 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) goto LAB_1805ae733;
  }
  else {
    if (*param_2 == 1) {
      uVar4 = 0;
      if (iVar3 != *(int *)(lVar2 + 0x28) + *(int *)(lVar2 + 0x2c)) {
        return 0x17;
      }
LAB_1805ae733:
      FUN_180577980(lVar1,0,iVar3,uVar4);
      *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar2 + 0x28) << 6;
      *(int *)(param_1 + 5) = *(int *)(lVar2 + 0x2c) * -0x40;
      *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 8) << 6;
      return 0;
    }
    uVar4 = 7;
  }
  return uVar4;
}



