// FUN_1805aaef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aaef0 */

undefined8 FUN_1805aaef0(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  lVar1 = *param_1;
  iVar4 = param_2[2];
  uVar3 = 0x17;
  lVar2 = *(longlong *)(lVar1 + 0xd8);
  if (param_2[4] != 0) {
    iVar4 = (iVar4 * param_2[4] + 0x24) / 0x48;
  }
  uVar5 = iVar4 + 0x20 >> 6;
  if (*param_2 == 0) {
    if (uVar5 == *(int *)(*(longlong *)(lVar1 + 0x30) + 0xc) + 0x20 >> 6) goto LAB_1805aafa9;
  }
  else {
    if (*param_2 == 1) {
      uVar3 = 0;
      if (uVar5 != *(ushort *)(lVar2 + 0x60)) {
        return 0x17;
      }
LAB_1805aafa9:
      FUN_180577980(lVar1,0,uVar3);
      *(uint *)((longlong)param_1 + 0x24) = (uint)*(ushort *)(lVar2 + 0x50) << 6;
      *(uint *)(param_1 + 5) =
           ((uint)*(ushort *)(lVar2 + 0x50) - (uint)*(ushort *)(lVar2 + 0x60)) * 0x40;
      *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar2 + 0x66) << 6;
      return 0;
    }
    uVar3 = 7;
  }
  return uVar3;
}



