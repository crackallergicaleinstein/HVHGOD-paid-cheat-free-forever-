// FUN_1805b81f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b81f0 */

void FUN_1805b81f0(longlong param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if (*(int *)param_2 == 0) {
    bVar4 = false;
    param_2 = param_3;
  }
  else if (*(int *)param_3 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (*(int *)(param_3 + 0x10) < *(int *)(param_2 + 0x10)) {
      return;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x20);
  uVar13 = 0;
  if (uVar12 != 0) {
    do {
      if (*(int *)(param_2 + 0x10) <= *(int *)(uVar13 * 0x20 + 0x38 + param_1)) goto LAB_1805b825c;
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
    } while (uVar11 < uVar12);
  }
  if ((uint)uVar13 < uVar12) {
LAB_1805b825c:
    iVar5 = *(int *)(uVar13 * 0x20 + 0x38 + param_1);
    if (iVar5 == *(int *)(param_2 + 0x10)) {
      return;
    }
    if ((bVar4) && (iVar5 <= *(int *)(param_3 + 0x10))) {
      return;
    }
    if ((*(byte *)(uVar13 * 0x20 + 0x28 + param_1) & 8) != 0) {
      return;
    }
  }
  lVar7 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar7 + 0x18) != '\0') && ((*param_2 & 0x10) == 0)) {
    iVar5 = *(int *)(param_2 + 0x10);
    if (bVar4) {
      iVar5 = FUN_1805b8400(lVar7,iVar5 + (*(int *)(param_3 + 0x10) - iVar5) / 2);
      lVar7 = (longlong)((*(int *)(param_3 + 0x10) - *(int *)(param_2 + 0x10)) / 2) *
              (longlong)*(int *)(param_1 + 0x1c);
      iVar9 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
      *(int *)(param_2 + 0x14) = iVar5 - iVar9;
      *(int *)(param_3 + 0x14) = iVar9 + iVar5;
    }
    else {
      uVar6 = FUN_1805b8400(lVar7,iVar5);
      *(undefined4 *)(param_2 + 0x14) = uVar6;
    }
  }
  uVar12 = (uint)uVar13;
  if ((uVar12 != 0) &&
     (*(int *)(param_2 + 0x14) < *(int *)((ulonglong)(uVar12 - 1) * 0x20 + 0x3c + param_1))) {
    return;
  }
  uVar11 = *(uint *)(param_1 + 0x20);
  if (uVar12 < uVar11) {
    iVar5 = *(int *)((uVar13 & 0xffffffff) * 0x20 + 0x3c + param_1);
    if (bVar4) {
      if (iVar5 < *(int *)(param_3 + 0x14)) {
        return;
      }
      uVar10 = uVar11 + 1;
      goto LAB_1805b8359;
    }
    if (iVar5 < *(int *)(param_2 + 0x14)) {
      return;
    }
  }
  if (bVar4) {
    uVar10 = uVar11 + 1;
  }
  else {
    uVar10 = uVar11;
  }
LAB_1805b8359:
  iVar5 = uVar11 - uVar12;
  if (uVar10 < 0xc0) {
    if (iVar5 != 0) {
      do {
        lVar8 = (ulonglong)((uVar12 - 1) + iVar5) * 0x20;
        lVar7 = (ulonglong)((uVar10 - uVar11) + uVar12 + iVar5) * 0x20;
        puVar1 = (undefined8 *)(lVar8 + 0x28 + param_1);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x28 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        puVar1 = (undefined8 *)(lVar8 + 0x38 + param_1);
        uVar3 = puVar1[1];
        puVar2 = (undefined8 *)(lVar7 + 0x38 + param_1);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = *(undefined8 *)(param_2 + 8);
    lVar7 = (uVar13 & 0xffffffff) * 0x20;
    puVar1 = (undefined8 *)(lVar7 + 0x28 + param_1);
    *puVar1 = *(undefined8 *)param_2;
    puVar1[1] = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    puVar1 = (undefined8 *)(lVar7 + 0x38 + param_1);
    *puVar1 = *(undefined8 *)(param_2 + 0x10);
    puVar1[1] = uVar3;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    if (bVar4) {
      uVar3 = *(undefined8 *)(param_3 + 8);
      lVar7 = (ulonglong)(uVar12 + 1) * 0x20;
      puVar1 = (undefined8 *)(lVar7 + 0x28 + param_1);
      *puVar1 = *(undefined8 *)param_3;
      puVar1[1] = uVar3;
      uVar3 = *(undefined8 *)(param_3 + 0x18);
      puVar1 = (undefined8 *)(lVar7 + 0x38 + param_1);
      *puVar1 = *(undefined8 *)(param_3 + 0x10);
      puVar1[1] = uVar3;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
  }
  return;
}



