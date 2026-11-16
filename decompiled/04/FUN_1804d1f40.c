// FUN_1804d1f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d1f40 */

uint FUN_1804d1f40(longlong *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  uint3 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = (int)param_1[1];
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  if (iVar8 < iVar3) {
    bVar7 = *(byte *)((longlong)iVar8 + *param_1);
    iVar8 = iVar8 + 1;
    *(int *)(param_1 + 1) = iVar8;
  }
  else {
    bVar7 = 0;
  }
  if (bVar7 - 0x20 < 0xd7) {
    return bVar7 - 0x8b;
  }
  if (bVar7 - 0xf7 < 4) {
    if (iVar8 < iVar3) {
      bVar1 = *(byte *)((longlong)iVar8 + *param_1);
      *(int *)(param_1 + 1) = iVar8 + 1;
      return (bVar1 - 0xf694) + (uint)bVar7 * 0x100;
    }
    return (uint)bVar7 * 0x100 - 0xf694;
  }
  if (bVar7 - 0xfb < 4) {
    if (iVar8 < iVar3) {
      bVar1 = *(byte *)((longlong)iVar8 + *param_1);
      *(int *)(param_1 + 1) = iVar8 + 1;
      return ((uint)bVar7 * -0x100 + 0xfa94) - (uint)bVar1;
    }
    return (uint)bVar7 * -0x100 + 0xfa94;
  }
  if (bVar7 == 0x1c) {
    if (iVar3 <= iVar8) {
      return 0;
    }
    iVar9 = iVar8 + 1;
    bVar7 = *(byte *)((longlong)iVar8 + *param_1);
    *(int *)(param_1 + 1) = iVar9;
    if (iVar9 < iVar3) {
      uVar2 = *(undefined1 *)((longlong)iVar9 + *param_1);
      *(int *)(param_1 + 1) = iVar8 + 2;
      return (uint)CONCAT11(bVar7,uVar2);
    }
    return (uint)bVar7 << 8;
  }
  if (bVar7 != 0x1d) {
    return 0;
  }
  if (iVar3 <= iVar8) {
    return 0;
  }
  lVar4 = *param_1;
  iVar9 = iVar8 + 1;
  bVar7 = *(byte *)(iVar8 + lVar4);
  *(int *)(param_1 + 1) = iVar9;
  if (iVar3 <= iVar9) {
    return (uint)bVar7 << 0x18;
  }
  iVar10 = iVar8 + 2;
  uVar5 = CONCAT11(bVar7,*(undefined1 *)(iVar9 + lVar4));
  *(int *)(param_1 + 1) = iVar10;
  if (iVar3 <= iVar10) {
    return (uint)uVar5 << 0x10;
  }
  iVar9 = iVar8 + 3;
  uVar6 = CONCAT21(uVar5,*(undefined1 *)(iVar10 + lVar4));
  *(int *)(param_1 + 1) = iVar9;
  if (iVar9 < iVar3) {
    uVar2 = *(undefined1 *)(iVar9 + lVar4);
    *(int *)(param_1 + 1) = iVar8 + 4;
    return CONCAT31(uVar6,uVar2);
  }
  return (uint)uVar6 << 8;
}



