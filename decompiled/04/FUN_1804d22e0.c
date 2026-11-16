// FUN_1804d22e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d22e0 */

longlong * FUN_1804d22e0(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar5 = 0;
  if (iVar1 < 0) {
    iVar5 = iVar1;
  }
  if (iVar5 < iVar1) {
    lVar7 = *param_2;
    iVar11 = iVar5 + 1;
    if (iVar11 < iVar1) {
      iVar3 = iVar5 + 2;
      uVar8 = (uint)CONCAT11(*(byte *)(iVar5 + lVar7),*(undefined1 *)(iVar11 + lVar7));
      if (iVar3 < iVar1) {
        lVar6 = (longlong)iVar3;
        iVar3 = iVar5 + 3;
        bVar2 = *(byte *)(lVar6 + lVar7);
      }
      else {
        bVar2 = 0;
      }
    }
    else {
      uVar8 = (uint)*(byte *)(iVar5 + lVar7) << 8;
      bVar2 = 0;
      iVar3 = iVar11;
    }
  }
  else {
    uVar8 = 0;
    bVar2 = 0;
    iVar3 = iVar5;
  }
  uVar9 = (ulonglong)bVar2;
  iVar3 = (uint)bVar2 * param_3 + iVar3;
  if ((iVar1 < iVar3) || (iVar3 < 0)) {
    iVar3 = iVar1;
  }
  uVar13 = 0;
  *(int *)(param_2 + 1) = iVar3;
  if (bVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar12 = uVar9;
    do {
      if (iVar3 < iVar1) {
        lVar7 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar3;
        bVar4 = *(byte *)(lVar7 + *param_2);
      }
      else {
        bVar4 = 0;
      }
      uVar13 = uVar13 << 8 | (uint)bVar4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar10 = 0;
    do {
      if (iVar3 < iVar1) {
        lVar7 = (longlong)iVar3;
        iVar3 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar3;
        bVar4 = *(byte *)(lVar7 + *param_2);
      }
      else {
        bVar4 = 0;
      }
      uVar10 = uVar10 << 8 | (uint)bVar4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
  iVar11 = uVar10 - uVar13;
  iVar5 = uVar13 + 2 + (uVar8 + 1) * (uint)bVar2;
  if ((((-1 < iVar5) && (-1 < iVar11)) && (iVar5 <= iVar1)) && (iVar11 <= iVar1 - iVar5)) {
    *param_1 = (longlong)iVar5 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = iVar11;
  }
  return param_1;
}



