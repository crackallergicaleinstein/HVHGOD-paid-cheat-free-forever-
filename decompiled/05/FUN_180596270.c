// FUN_180596270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180596270 */

ulonglong FUN_180596270(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar2 = *param_1;
  lVar3 = param_1[0x22];
  param_1[0x11] = 0x1000000000000;
  param_1[0x12] = 0x400000010001;
  param_1[0x13] = 0x400000004000;
  param_1[0x14] = (longlong)&DAT_100000001;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x40;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x44;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0x100030009;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_18063ab10(param_1[0x1c],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_18063ab10(param_1[0x1d],0,(ulonglong)*(ushort *)(param_1 + 0x1b) << 3);
  FUN_18058cdb0(lVar3,lVar2,param_1);
  FUN_18063ab10(*(undefined8 *)(lVar3 + 0x2a0),0,(ulonglong)*(ushort *)(lVar3 + 0x298) << 2);
  uVar7 = 0;
  uVar5 = 0;
  if (*(int *)(lVar3 + 0x1f8) != 0) {
    do {
      uVar8 = (int)uVar5 + 1;
      iVar1 = *(int *)(uVar5 * 4 + *(longlong *)(lVar2 + 0x3d8));
      lVar6 = (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x3fU)) >> 6) * (longlong)(int)param_1[0xe];
      *(int *)(uVar5 * 4 + *(longlong *)(lVar3 + 0x200)) =
           (int)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10);
      uVar5 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)(lVar3 + 0x1f8));
  }
  *(undefined8 *)(lVar3 + 0x288) = 0;
  *(undefined4 *)(lVar3 + 0x290) = 0;
  iVar1 = *(int *)(lVar2 + 0x3c0);
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x3c8);
    *(undefined8 *)(lVar3 + 0x278) = uVar4;
    *(int *)(lVar3 + 0x280) = iVar1;
    *(int *)(lVar3 + 0x1ec) = iVar1;
    *(undefined8 *)(lVar3 + 0x1e0) = uVar4;
    *(undefined4 *)(lVar3 + 0x1e8) = 0;
    *(undefined4 *)(lVar3 + 0x1dc) = 2;
    *(undefined4 *)(lVar3 + 0x1d8) = 2;
    *(undefined4 *)(lVar3 + 0xe8) = 0;
    uVar5 = FUN_180590310(lVar3,param_1);
    *(int *)((longlong)param_1 + 0x11c) = (int)uVar5;
    uVar7 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(lVar3 + 0x1bc);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(lVar3 + 0x1c0);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar3 + 0x1c4);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(lVar3 + 0x1c8);
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(lVar3 + 0x1cc);
  *(undefined2 *)((longlong)param_1 + 0xca) = *(undefined2 *)(lVar3 + 0x1ce);
  *(undefined1 *)((longlong)param_1 + 0xcc) = *(undefined1 *)(lVar3 + 0x1d0);
  *(undefined1 *)((longlong)param_1 + 0xcd) = *(undefined1 *)(lVar3 + 0x1d1);
  *(undefined1 *)((longlong)param_1 + 0xce) = *(undefined1 *)(lVar3 + 0x1d2);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(lVar3 + 0x1d4);
  return uVar7;
}



