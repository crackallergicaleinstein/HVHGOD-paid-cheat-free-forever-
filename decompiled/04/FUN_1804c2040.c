// FUN_1804c2040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2040 */

void FUN_1804c2040(void)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  
  lVar8 = DAT_180bb8ae8;
  piVar1 = (int *)(DAT_180bb8ae8 + 0xc68);
  iVar9 = *(int *)(DAT_180bb8ae8 + 0xc6c);
  if (iVar9 < 0) {
    iVar9 = iVar9 + iVar9 / 2;
    iVar12 = 0;
    if (0 < iVar9) {
      iVar12 = iVar9;
    }
    FUN_1804d0a80(piVar1,iVar12);
  }
  *piVar1 = 0;
  plVar13 = *(longlong **)(lVar8 + 0x11c8);
  plVar2 = plVar13 + *(int *)(lVar8 + 0x11c0);
  for (; plVar13 != plVar2; plVar13 = plVar13 + 1) {
    lVar5 = *plVar13;
    plVar10 = *(longlong **)(lVar5 + 0x48);
    plVar3 = plVar10 + *(int *)(lVar5 + 0x40);
    for (; plVar10 != plVar3; plVar10 = plVar10 + 1) {
      lVar6 = *plVar10;
      *(undefined2 *)(lVar6 + 0x5c) = *(undefined2 *)(lVar5 + 0xc4);
      iVar9 = *(int *)(lVar8 + 0xc6c);
      if (*piVar1 == iVar9) {
        iVar12 = *piVar1 + 1;
        if (iVar9 == 0) {
          iVar9 = 8;
        }
        else {
          iVar9 = iVar9 / 2 + iVar9;
        }
        if (iVar12 < iVar9) {
          iVar12 = iVar9;
        }
        FUN_1804d0a80(piVar1,iVar12);
      }
      *(longlong *)(*(longlong *)(lVar8 + 0xc70) + (longlong)*piVar1 * 8) = lVar6;
      *piVar1 = *piVar1 + 1;
    }
  }
  puVar11 = *(undefined8 **)(lVar8 + 0x2770);
  puVar4 = puVar11 + *(int *)(lVar8 + 0x2768);
  for (; puVar11 != puVar4; puVar11 = puVar11 + 1) {
    iVar9 = *(int *)(lVar8 + 0xc6c);
    uVar7 = *puVar11;
    if (*(int *)(lVar8 + 0xc68) == iVar9) {
      iVar12 = *(int *)(lVar8 + 0xc68) + 1;
      if (iVar9 == 0) {
        iVar9 = 8;
      }
      else {
        iVar9 = iVar9 / 2 + iVar9;
      }
      if (iVar12 < iVar9) {
        iVar12 = iVar9;
      }
      FUN_1804d0a80(piVar1,iVar12);
    }
    *(undefined8 *)(*(longlong *)(lVar8 + 0xc70) + (longlong)*(int *)(lVar8 + 0xc68) * 8) = uVar7;
    *(int *)(lVar8 + 0xc68) = *(int *)(lVar8 + 0xc68) + 1;
  }
  return;
}



