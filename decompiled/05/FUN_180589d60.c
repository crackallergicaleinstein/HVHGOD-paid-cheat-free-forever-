// FUN_180589d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180589d60 */

int FUN_180589d60(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  
  lVar4 = *param_1;
  iVar1 = 0;
  if ((*(byte *)(lVar4 + 8) & 2) != 0) {
    iVar1 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0xe0))(lVar4,param_2,local_res8);
    if (iVar1 == 0) {
      lVar4 = *param_1;
      *(undefined4 *)(param_1 + 0x10) = local_res8[0];
      if ((*(byte *)(lVar4 + 8) & 1) != 0) {
        FUN_180577980();
        FUN_180596060(param_1);
        return 0;
      }
      iVar1 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0xe8))(lVar4,local_res8[0],param_1 + 3);
      if (iVar1 == 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  iVar2 = FUN_1805772f0(*param_1,param_2);
  if (((iVar2 == 0) && (iVar2 = iVar1, (*(byte *)(*param_1 + 8) & 1) != 0)) &&
     (iVar2 = FUN_180596060(param_1), iVar2 == 0)) {
    lVar4 = 0xc;
    if (*(ushort *)param_1[8] <= ((ushort *)param_1[8])[1]) {
      lVar4 = 0x10;
    }
    if ((*param_2 == 4) || (iVar1 = *(int *)(lVar4 + (longlong)param_2), iVar1 == 0)) {
      iVar1 = 0x48;
    }
    uVar3 = FUN_1805753e0(*(undefined2 *)((longlong)param_1 + 0x74),0x1200,iVar1);
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  }
  return iVar2;
}



