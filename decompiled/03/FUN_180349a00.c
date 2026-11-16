// FUN_180349a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180349a00 */

void FUN_180349a00(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  char *pcVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  undefined1 (*pauVar13) [32];
  longlong lVar14;
  longlong lVar15;
  
  puVar2 = (undefined8 *)param_1[1];
  lVar14 = *(longlong *)*param_1;
  uVar6 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  *(undefined8 *)(lVar14 + 0x58) = *puVar2;
  *(undefined8 *)(lVar14 + 0x60) = uVar6;
  *(undefined8 *)(lVar14 + 0x68) = uVar8;
  *(undefined8 *)(lVar14 + 0x70) = uVar9;
  puVar3 = *(uint **)param_1[2];
  uVar1 = *(uint *)param_1[3];
  *puVar3 = *puVar3 | 0x40;
  puVar2 = (undefined8 *)param_1[2];
  puVar3[0x12] = uVar1;
  puVar3 = (uint *)*puVar2;
  uVar1 = *(uint *)param_1[4];
  *puVar3 = *puVar3 | 0x80;
  pcVar4 = (char *)param_1[5];
  puVar3[0x13] = uVar1;
  if (*pcVar4 != '\0') {
    puVar3 = *(uint **)param_1[2];
    *puVar3 = *puVar3 | 4;
    puVar11 = (uint *)0x0;
    if (*(longlong *)(puVar3 + 0xc) != 0) {
      puVar11 = (uint *)(*(longlong *)(puVar3 + 0xc) + 0x10);
    }
    uVar1 = *(uint *)param_1[6];
    *puVar11 = *puVar11 | 2;
    puVar11[3] = uVar1;
  }
  plVar12 = (longlong *)param_1[2];
  lVar14 = *plVar12;
  iVar7 = (int)((((longlong *)param_1[7])[1] - *(longlong *)param_1[7]) / 0x28);
  iVar10 = *(int *)(lVar14 + 0x10);
  if (iVar7 < *(int *)(lVar14 + 0x10)) {
    iVar10 = iVar7;
  }
  if (0 < iVar10) {
    lVar14 = 0;
    lVar15 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(*plVar12 + 0x18) + 8 + lVar14 * 8);
      pauVar13 = (undefined1 (*) [32])0x0;
      if (lVar5 != 0) {
        pauVar13 = (undefined1 (*) [32])(lVar5 + 0x10);
      }
      if (pauVar13 != (undefined1 (*) [32])0x0) {
        lVar5 = *(longlong *)param_1[7];
        *pauVar13 = *(undefined1 (*) [32])(lVar5 + lVar15);
        *(undefined8 *)pauVar13[1] = *(undefined8 *)(lVar5 + 0x20 + lVar15);
        plVar12 = (longlong *)param_1[2];
      }
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 0x28;
    } while (lVar14 < iVar10);
    lVar14 = *plVar12;
  }
  if (lVar14 != -8) {
    iVar7 = (int)((((longlong *)param_1[7])[1] - *(longlong *)param_1[7]) / 0x28);
    iVar10 = *(int *)(lVar14 + 0x10);
    if (iVar7 < *(int *)(lVar14 + 0x10)) {
      iVar10 = iVar7;
    }
    *(int *)(lVar14 + 0x10) = iVar10;
  }
  puVar3 = *(uint **)param_1[2];
  lVar14 = *(longlong *)*param_1;
  puVar11 = (uint *)0x0;
  if (*(longlong *)(puVar3 + 10) != 0) {
    puVar11 = (uint *)(*(longlong *)(puVar3 + 10) + 0x10);
  }
  if (puVar11 != (uint *)0x0) {
    *puVar3 = *puVar3 | 2;
    uVar6 = *(undefined8 *)(lVar14 + 0x60);
    *puVar11 = *puVar11 | 1;
    uVar1 = *puVar11;
    *(undefined8 *)(puVar11 + 2) = uVar6;
    uVar6 = *(undefined8 *)(lVar14 + 0x68);
    *puVar11 = uVar1 | 2;
    *(undefined8 *)(puVar11 + 4) = uVar6;
    uVar6 = *(undefined8 *)(lVar14 + 0x70);
    *puVar11 = uVar1 | 6;
    *(undefined8 *)(puVar11 + 6) = uVar6;
  }
  return;
}



