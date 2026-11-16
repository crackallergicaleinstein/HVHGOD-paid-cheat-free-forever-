// FUN_1805f46d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f46d0 */

ulonglong FUN_1805f46d0(ulonglong *param_1,uint *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  longlong lVar9;
  
  if (param_3 < 5) {
    return 5;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*param_2 != 0xfd2fb527) {
    if ((*param_2 & 0xfffffff0) != 0x184d2a50) {
      return 0xfffffffffffffff6;
    }
    if (param_3 < 8) {
      return 8;
    }
    *param_1 = (ulonglong)param_2[1];
    return 0;
  }
  uVar4 = FUN_1805f4630(param_2,param_3);
  if (param_3 < uVar4) {
    return uVar4;
  }
  uVar6 = 0;
  bVar1 = (byte)param_2[1];
  lVar9 = 5;
  uVar7 = 0;
  bVar8 = bVar1 & 3;
  bVar2 = bVar1 >> 6;
  uVar4 = 0;
  if ((bVar1 & 8) != 0) {
    return 0xfffffffffffffff2;
  }
  if ((bVar1 & 0x20) == 0) {
    lVar9 = 6;
    bVar5 = (*(byte *)((longlong)param_2 + 5) >> 3) + 10;
    if (0x1b < bVar5) {
      return 0xfffffffffffffff2;
    }
    uVar6 = 1 << (bVar5 & 0x1f);
    uVar6 = (uVar6 >> 3) * (*(byte *)((longlong)param_2 + 5) & 7) + uVar6;
  }
  if (bVar8 == 1) {
    uVar7 = (uint)*(byte *)(lVar9 + (longlong)param_2);
    lVar9 = lVar9 + 1;
  }
  else if (bVar8 == 2) {
    uVar7 = (uint)*(ushort *)(lVar9 + (longlong)param_2);
    lVar9 = lVar9 + 2;
  }
  else if (bVar8 == 3) {
    uVar7 = *(uint *)(lVar9 + (longlong)param_2);
    lVar9 = lVar9 + 4;
  }
  if (bVar2 != 0) {
    if (bVar2 == 1) {
      uVar4 = (ulonglong)*(ushort *)(lVar9 + (longlong)param_2) + 0x100;
      goto LAB_1805f4833;
    }
    if (bVar2 == 2) {
      uVar4 = (ulonglong)*(uint *)(lVar9 + (longlong)param_2);
      goto LAB_1805f4833;
    }
    if (bVar2 == 3) {
      uVar4 = *(ulonglong *)(lVar9 + (longlong)param_2);
      goto LAB_1805f4833;
    }
  }
  if ((bVar1 & 0x20) != 0) {
    uVar4 = (ulonglong)*(byte *)(lVar9 + (longlong)param_2);
  }
LAB_1805f4833:
  uVar3 = (uint)uVar4;
  if (uVar6 != 0) {
    uVar3 = uVar6;
  }
  if (uVar3 < 0x8000001) {
    *(uint *)(param_1 + 1) = uVar3;
    *param_1 = uVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar7;
    *(uint *)(param_1 + 2) = bVar1 >> 2 & 1;
    return 0;
  }
  return 0xfffffffffffffff2;
}



