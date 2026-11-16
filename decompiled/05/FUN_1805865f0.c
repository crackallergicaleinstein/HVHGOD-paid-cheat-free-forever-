// FUN_1805865f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805865f0 */

undefined8 FUN_1805865f0(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  
  lVar13 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2f0);
  uVar16 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x80) + 0x18) << 0x10;
  if ((int)uVar16 < 0x40000) {
    uVar16 = 0x40000;
  }
  iVar6 = FUN_180573310(0x3e80000,(ulonglong)*(ushort *)(param_2 + 0x68) << 0x10);
  if (iVar6 < 0x28f) {
    return 0;
  }
  iVar9 = *(int *)(lVar13 + 0x2c);
  iVar10 = *(int *)(lVar13 + 0x3c);
  iVar11 = *(int *)(lVar13 + 0x24);
  iVar1 = *(int *)(lVar13 + 0x40);
  iVar2 = *(int *)(lVar13 + 0x28);
  iVar3 = *(int *)(lVar13 + 0x38);
  iVar4 = *(int *)(lVar13 + 0x34);
  iVar5 = *(int *)(lVar13 + 0x30);
  if (param_3 < 1) {
    uVar15 = 0x4b0000;
  }
  else {
    lVar13 = (longlong)(param_3 << 0x10) * (longlong)iVar6;
    uVar15 = (uint)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
  }
  iVar8 = 0x1f;
  if (uVar15 != 0) {
    for (; uVar15 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  iVar7 = 0x1f;
  if (uVar16 != 0) {
    for (; uVar16 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar14 = iVar10 * 0x10000;
  if (iVar7 + iVar8 < 0x2e) {
    iVar8 = (int)((longlong)(int)uVar15 * (ulonglong)uVar16 + 0x8000 +
                  ((longlong)((longlong)(int)uVar15 * (ulonglong)uVar16) >> 0x3f) >> 0x10);
  }
  else {
    iVar8 = iVar14;
  }
  iVar7 = iVar11 * 0x10000;
  if (iVar7 <= iVar8) {
    if (iVar8 < iVar9 * 0x10000) {
      iVar8 = FUN_180573310(iVar7,uVar16);
      if (iVar9 != iVar11) {
        iVar10 = FUN_1805753e0(uVar15 - iVar8,iVar5 - iVar2);
        iVar9 = FUN_180573310(iVar2 << 0x10,uVar16);
        iVar10 = iVar10 + iVar9;
        goto LAB_18058676b;
      }
LAB_1805867a2:
      iVar11 = FUN_180573310(iVar9 * 0x10000,uVar16);
      if (iVar4 - iVar9 != 0) {
        iVar10 = FUN_1805753e0(uVar15 - iVar11,iVar3 - iVar5,iVar4 - iVar9);
        iVar9 = FUN_180573310(iVar5 << 0x10,uVar16);
        iVar10 = iVar10 + iVar9;
        goto LAB_18058676b;
      }
    }
    else {
      if (iVar8 < iVar4 * 0x10000) goto LAB_1805867a2;
      iVar2 = iVar1;
      if (iVar14 <= iVar8) goto LAB_180586762;
    }
    iVar9 = FUN_180573310(iVar4 << 0x10,uVar16);
    iVar2 = iVar1;
    if (iVar10 != iVar4) {
      iVar10 = FUN_1805753e0(uVar15 - iVar9,iVar1 - iVar3);
      iVar9 = FUN_180573310(iVar3 << 0x10,uVar16);
      iVar10 = iVar10 + iVar9;
      goto LAB_18058676b;
    }
  }
LAB_180586762:
  iVar10 = FUN_180573310(iVar2 << 0x10,uVar16);
LAB_18058676b:
  uVar12 = FUN_180573310(iVar10,iVar6);
  return uVar12;
}



