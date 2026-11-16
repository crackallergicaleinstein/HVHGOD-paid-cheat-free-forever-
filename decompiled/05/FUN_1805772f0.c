// FUN_1805772f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805772f0 */

undefined8 FUN_1805772f0(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x24) = 0;
    *(undefined8 *)(lVar2 + 0x2c) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0x10000;
    *(undefined4 *)(lVar2 + 0x20) = 0x10000;
    return 0;
  }
  iVar6 = *param_2;
  uVar8 = 0;
  iVar12 = 0;
  iVar14 = 0;
  if (iVar6 == 0) {
    uVar8 = (uint)*(ushort *)(param_1 + 0x68);
LAB_1805773a6:
    uVar11 = uVar8;
LAB_1805773a8:
    iVar6 = param_2[1];
    uVar13 = -uVar8;
    if ((int)-uVar8 < 0) {
      uVar13 = uVar8;
    }
    uVar8 = -uVar11;
    if ((int)-uVar11 < 0) {
      uVar8 = uVar11;
    }
    if (param_2[3] == 0) {
      iVar12 = iVar6;
    }
    else {
      iVar12 = (iVar6 * param_2[3] + 0x24) / 0x48;
    }
    iVar1 = param_2[2];
    if (param_2[4] == 0) {
      iVar14 = iVar1;
    }
    else {
      iVar14 = (iVar1 * param_2[4] + 0x24) / 0x48;
    }
    if ((iVar1 != 0) || (iVar6 == 0)) {
      if (uVar8 == 0) {
        return 0x85;
      }
      uVar5 = FUN_180573310(iVar14,uVar8);
      *(undefined4 *)(lVar2 + 0x20) = uVar5;
    }
    if (param_2[1] == 0) {
      iVar12 = FUN_1805753e0(iVar14,uVar13,uVar8);
      iVar6 = *(int *)(lVar2 + 0x20);
    }
    else {
      if (uVar13 == 0) {
        return 0x85;
      }
      iVar6 = FUN_180573310(iVar12,uVar13);
    }
    *(int *)(lVar2 + 0x1c) = iVar6;
    if (param_2[2] == 0) {
      *(int *)(lVar2 + 0x20) = iVar6;
      iVar14 = FUN_1805753e0(iVar12,uVar8,uVar13);
    }
    if (*param_2 != 3) goto LAB_1805774bf;
    iVar1 = *(int *)(lVar2 + 0x20);
    iVar3 = iVar12;
    iVar4 = iVar14;
    if (iVar6 < *(int *)(lVar2 + 0x20)) {
      *(int *)(lVar2 + 0x20) = iVar6;
      goto LAB_1805774bf;
    }
  }
  else {
    if (iVar6 == 1) {
      uVar8 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
      goto LAB_1805773a6;
    }
    if (iVar6 == 2) {
      uVar8 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
      uVar11 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
      goto LAB_1805773a8;
    }
    if (iVar6 == 3) {
      uVar8 = (uint)*(short *)(param_1 + 0x70);
      uVar11 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
      goto LAB_1805773a8;
    }
    uVar11 = 0;
    if (iVar6 != 4) goto LAB_1805773a8;
    iVar6 = param_2[1];
    *(int *)(lVar2 + 0x1c) = iVar6;
    iVar1 = param_2[2];
    *(int *)(lVar2 + 0x20) = iVar1;
    iVar3 = 0;
    iVar4 = 0;
    if (iVar6 != 0) {
      if (iVar1 == 0) {
        *(int *)(lVar2 + 0x20) = iVar6;
      }
      goto LAB_1805774bf;
    }
  }
  iVar14 = iVar4;
  iVar12 = iVar3;
  iVar6 = iVar1;
  *(int *)(lVar2 + 0x1c) = iVar6;
LAB_1805774bf:
  if (*param_2 != 0) {
    lVar9 = (ulonglong)*(ushort *)(param_1 + 0x68) * (longlong)iVar6;
    lVar10 = (longlong)*(int *)(lVar2 + 0x20) * (ulonglong)*(ushort *)(param_1 + 0x68);
    iVar12 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
    iVar14 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
  }
  iVar12 = iVar12 + 0x20 >> 6;
  iVar14 = iVar14 + 0x20 >> 6;
  if ((iVar12 < 0x10000) && (iVar14 < 0x10000)) {
    lVar10 = (longlong)*(int *)(lVar2 + 0x20);
    *(short *)(lVar2 + 0x18) = (short)iVar12;
    *(short *)(lVar2 + 0x1a) = (short)iVar14;
    lVar9 = *(short *)(param_1 + 0x6a) * lVar10;
    *(uint *)(lVar2 + 0x24) =
         (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + 0x3fU & 0xffffffc0;
    lVar9 = *(short *)(param_1 + 0x6c) * lVar10;
    *(uint *)(lVar2 + 0x28) =
         (uint)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) & 0xffffffc0;
    lVar10 = *(short *)(param_1 + 0x6e) * lVar10;
    *(uint *)(lVar2 + 0x2c) =
         (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar9 = (longlong)*(short *)(param_1 + 0x70) * (longlong)iVar6;
    *(uint *)(lVar2 + 0x30) =
         (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    uVar7 = 0;
  }
  else {
    uVar7 = 0x17;
  }
  return uVar7;
}



