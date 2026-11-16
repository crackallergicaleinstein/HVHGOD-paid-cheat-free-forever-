// FUN_1805c4c80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c4c80 */

undefined8 FUN_1805c4c80(longlong param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  if (*(longlong *)(param_1 + 0x480) == 0) {
    if (*(uint *)(param_1 + 0x478) <= param_2) {
      return 6;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      return 6;
    }
    param_2 = *(uint *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  }
  iVar9 = *(int *)(param_1 + 0x474);
  if ((iVar9 != 1) && (iVar9 != 2)) {
    if (iVar9 != 3) {
      return 2;
    }
    lVar11 = (ulonglong)(param_2 * 4) + *(longlong *)(param_1 + 0x468);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    iVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar11 + 8),*(undefined1 *)(lVar11 + 9)),
                              *(undefined1 *)(lVar11 + 10)),*(undefined1 *)(lVar11 + 0xb));
    if (*(uint *)(param_1 + 0x4d4) < iVar9 + 4U) {
      uVar8 = 3;
    }
    else {
      uVar8 = FUN_1805788b0(uVar5,*(int *)(param_1 + 0x4d0) + iVar9);
      if (((int)uVar8 == 0) && (uVar8 = FUN_180577bf0(uVar5,4), (int)uVar8 == 0)) {
        uVar6 = FUN_180577ed0(uVar5);
        FUN_180577ed0(uVar5);
        FUN_180577d30(uVar5);
        *param_3 = uVar6;
        param_3[1] = uVar6;
        iVar9 = FUN_180573310((ulonglong)uVar6 << 6,*(undefined2 *)(param_1 + 0x112));
        lVar12 = (longlong)iVar9;
        lVar11 = *(short *)(param_1 + 0x13c) * lVar12;
        *(int *)(param_3 + 6) = (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
        lVar11 = *(short *)(param_1 + 0x13e) * lVar12;
        *(int *)(param_3 + 8) = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
        lVar11 = (((int)*(short *)(param_1 + 0x140) - (int)*(short *)(param_1 + 0x13e)) +
                 (int)*(short *)(param_1 + 0x13c)) * lVar12;
        *(int *)(param_3 + 10) = (int)((ulonglong)(lVar11 + (lVar11 >> 0x3f) + 0x8000) >> 0x10);
        lVar12 = (ulonglong)*(ushort *)(param_1 + 0x142) * lVar12;
        *(int *)(param_3 + 2) = iVar9;
        *(int *)(param_3 + 4) = iVar9;
        *(int *)(param_3 + 0xc) = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
        uVar8 = 0;
      }
    }
    return uVar8;
  }
  lVar11 = (ulonglong)(param_2 * 0x30) + *(longlong *)(param_1 + 0x468);
  bVar1 = *(byte *)(lVar11 + 0x34);
  *param_3 = (ushort)bVar1;
  bVar2 = *(byte *)(lVar11 + 0x35);
  param_3[1] = (ushort)bVar2;
  iVar9 = (int)*(char *)(lVar11 + 0x18) << 6;
  *(int *)(param_3 + 6) = iVar9;
  cVar3 = *(char *)(lVar11 + 0x19);
  iVar10 = cVar3 * 0x40;
  *(int *)(param_3 + 8) = iVar10;
  uVar13 = (uint)*(char *)(lVar11 + 0x20);
  cVar4 = *(char *)(lVar11 + 0x21);
  if (iVar10 < 1) {
    if ((iVar10 == 0) && (iVar9 == 0)) {
      if ((*(char *)(lVar11 + 0x20) == '\0') && (cVar4 == '\0')) {
        uVar13 = (uint)bVar2;
      }
      else {
        iVar10 = (int)cVar4 << 6;
      }
      iVar9 = uVar13 << 6;
      *(int *)(param_3 + 8) = iVar10;
      *(int *)(param_3 + 6) = iVar9;
    }
  }
  else if (cVar4 < '\0') {
    iVar10 = cVar3 * -0x40;
    *(int *)(param_3 + 8) = iVar10;
  }
  *(int *)(param_3 + 10) = iVar9 - iVar10;
  if (iVar9 - iVar10 == 0) {
    *(uint *)(param_3 + 10) = (uint)bVar2 * 0x40;
    *(uint *)(param_3 + 8) = iVar9 + (uint)bVar2 * -0x40;
  }
  *(uint *)(param_3 + 0xc) =
       ((int)*(char *)(lVar11 + 0x1e) + (uint)*(byte *)(lVar11 + 0x1a) +
       (int)*(char *)(lVar11 + 0x1f)) * 0x40;
  uVar7 = FUN_180573310((ulonglong)bVar1 << 6,*(undefined2 *)(param_1 + 0x112));
  *(undefined4 *)(param_3 + 2) = uVar7;
  uVar7 = FUN_180573310((ulonglong)param_3[1] << 6,*(undefined2 *)(param_1 + 0x112));
  *(undefined4 *)(param_3 + 4) = uVar7;
  return 0;
}



