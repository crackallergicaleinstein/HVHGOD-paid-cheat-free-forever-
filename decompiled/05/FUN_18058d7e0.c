// FUN_18058d7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058d7e0 */

undefined8 FUN_18058d7e0(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined1 local_58 [2];
  short local_56;
  longlong local_50;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  local_50 = *(longlong *)(lVar3 + 0x20) + (ulonglong)param_4 * 8;
  local_56 = *(short *)(lVar3 + 0x1a) - (short)param_4;
  uVar6 = *(ushort *)(param_2 + 4) & 200;
  if (uVar6 != 0) {
    FUN_1805765a0(local_58,param_2 + 0x10);
  }
  if ((*(ushort *)(param_2 + 4) & 2) == 0) {
    uVar4 = *(int *)(param_2 + 8) + param_3;
    if ((param_4 <= uVar4) ||
       (param_4 = *(int *)(param_2 + 0xc) + param_4, *(ushort *)(lVar3 + 0x1a) <= param_4)) {
      return 0x15;
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    uVar5 = *(int *)(lVar3 + (ulonglong)uVar4 * 8) - *(int *)(lVar3 + (ulonglong)param_4 * 8);
    uVar4 = *(int *)(lVar3 + (ulonglong)uVar4 * 8 + 4) -
            *(int *)(lVar3 + 4 + (ulonglong)param_4 * 8);
  }
  else {
    uVar5 = *(uint *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((uVar5 == 0) && (uVar4 == 0)) {
      return 0;
    }
    if ((uVar6 != 0) && ((*(ushort *)(param_2 + 4) >> 0xb & 1) != 0)) {
      iVar1 = FUN_1805743e0(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      uVar5 = (uint)((ulonglong)
                     (((longlong)iVar1 * (longlong)(int)uVar5 >> 0x3f) + 0x8000 +
                     (longlong)iVar1 * (longlong)(int)uVar5) >> 0x10);
      iVar1 = FUN_1805743e0(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18));
      uVar4 = (uint)((ulonglong)
                     ((longlong)iVar1 * (longlong)(int)uVar4 + 0x8000 +
                     ((longlong)iVar1 * (longlong)(int)uVar4 >> 0x3f)) >> 0x10);
    }
    if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
      lVar2 = (longlong)*(int *)(lVar3 + 4) * (longlong)(int)uVar5;
      lVar3 = (longlong)*(int *)(lVar3 + 8) * (longlong)(int)uVar4;
      uVar5 = (uint)((ulonglong)((lVar2 >> 0x3f) + 0x8000 + lVar2) >> 0x10);
      uVar4 = (uint)((ulonglong)((lVar3 >> 0x3f) + 0x8000 + lVar3) >> 0x10);
      if (((*(byte *)(param_2 + 4) & 4) != 0) && ((*(uint *)(param_1 + 0x20) & 2) == 0)) {
        if (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x324) == 0) {
          uVar5 = uVar5 + 0x20 & 0xffffffc0;
        }
        uVar4 = uVar4 + 0x20 & 0xffffffc0;
      }
    }
  }
  if ((uVar5 != 0) || (uVar4 != 0)) {
    FUN_180576690(local_58,uVar5,uVar4);
  }
  return 0;
}



