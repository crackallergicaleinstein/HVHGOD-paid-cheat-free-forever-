// FUN_1805d1dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d1dc0 */

undefined8 FUN_1805d1dc0(longlong param_1)

{
  ushort uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  puVar2 = *(undefined8 **)(param_1 + 0x58);
  iVar6 = (int)((*(longlong *)(param_1 + 0x30) - (longlong)puVar2) + -0x24 >> 2);
  if (iVar6 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 99;
    return 1;
  }
  if (0 < iVar6) {
    uVar1 = *(ushort *)((longlong)puVar2 + 0x1c);
    *(int *)((longlong)puVar2 + 0x14) = iVar6;
    uVar7 = *(uint *)(param_1 + 0x44);
    uVar11 = -*(int *)(param_1 + 4);
    if ((uVar1 & 8) == 0) {
      if (*(int *)(param_1 + 8) <= (int)((*(int *)(param_1 + 4) + -1 + uVar7 & uVar11) - uVar7)) {
        *(ushort *)((longlong)puVar2 + 0x1c) = uVar1 | 0x20;
      }
      iVar13 = *(int *)(puVar2 + 3) + 1;
      *(int *)(puVar2 + 2) = iVar6 + -1;
      iVar12 = iVar13 - iVar6;
      *(int *)(puVar2 + 3) = iVar12;
      uVar4 = *(undefined4 *)((longlong)puVar2 + (longlong)iVar6 * 4 + 0x20);
    }
    else {
      if (*(int *)(param_1 + 8) <= (int)(uVar7 - (uVar7 & uVar11))) {
        *(ushort *)((longlong)puVar2 + 0x1c) = uVar1 | 0x10;
      }
      iVar12 = *(int *)(puVar2 + 3);
      *(undefined4 *)(puVar2 + 2) = 0;
      uVar4 = *(undefined4 *)((longlong)puVar2 + 0x24);
      iVar13 = iVar12 + iVar6;
    }
    *(undefined4 *)(puVar2 + 4) = uVar4;
    uVar8 = (ulonglong)*(int *)(param_1 + 0x54);
    lVar3 = *(longlong *)(param_1 + 0x28);
    uVar9 = 0;
    if ((*(int *)(param_1 + 0x54) == 0) || (uVar9 = uVar8, *(int *)(lVar3 + uVar8 * 4) < iVar13)) {
      *(int *)(lVar3 + uVar9 * 4) = iVar13;
    }
    do {
      iVar6 = (int)uVar8;
      uVar9 = uVar9 - 1;
      uVar7 = iVar6 - 1;
      uVar8 = (ulonglong)uVar7;
      if (iVar6 == 0) break;
    } while (iVar12 < *(int *)(lVar3 + uVar9 * 4));
    if (((int)uVar7 < 0) || (*(int *)(lVar3 + (longlong)(int)uVar7 * 4) < iVar12)) {
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + -4;
      if (*(ulonglong *)(param_1 + 0x28) <= *(ulonglong *)(param_1 + 0x30)) {
        *(undefined4 *)(param_1 + 0x38) = 0x62;
        return 1;
      }
      piVar10 = (int *)(uVar9 * 4 + lVar3);
      do {
        iVar6 = *piVar10;
        *piVar10 = iVar12;
        piVar10 = piVar10 + -1;
        iVar13 = (int)uVar8;
        uVar8 = (ulonglong)(iVar13 - 1);
        iVar12 = iVar6;
      } while (-1 < iVar13);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x68);
    if (*(undefined8 **)(param_1 + 0x68) == (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x68) = puVar2;
      puVar5 = puVar2;
    }
    puVar2[1] = puVar5;
    *puVar2 = *(undefined8 *)(param_1 + 0x30);
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 1;
  }
  return 0;
}



