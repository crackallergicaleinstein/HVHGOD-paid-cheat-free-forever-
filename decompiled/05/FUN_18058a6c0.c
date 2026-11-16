// FUN_18058a6c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a6c0 */

void FUN_18058a6c0(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  
  uVar4 = **(uint **)(*param_1 + 0x408);
  uVar5 = *(ulonglong *)(*(uint **)(*param_1 + 0x408) + 4);
  if (((int)param_1[5] - *(int *)((longlong)param_1 + 0x24)) + 1U <= uVar4) {
    *(undefined4 *)(param_1 + 4) = 0x82;
    return;
  }
  if (uVar5 == 0) {
    if (uVar4 != 0) {
      FUN_18063ab10(param_2,0,(ulonglong)uVar4 << 2);
    }
    goto LAB_18058a827;
  }
  uVar10 = 0;
  if (uVar4 == 0) goto LAB_18058a827;
  if ((uVar4 < 2) ||
     ((param_2 <= uVar5 + (ulonglong)(uVar4 - 1) * 4 &&
      (uVar5 <= param_2 + (ulonglong)(uVar4 - 1) * 4)))) goto LAB_18058a7dc;
  if (uVar4 < 0x10) {
LAB_18058a7b1:
    do {
      uVar3 = *(undefined8 *)(uVar5 + uVar10 * 4);
      *(ulonglong *)(param_2 + uVar10 * 4) =
           CONCAT44((int)((longlong)uVar3 >> 0x22),(int)uVar3 >> 2);
      uVar13 = (int)uVar10 + 2;
      uVar10 = (ulonglong)uVar13;
    } while (uVar13 < (uVar4 & 0xfffffffe));
  }
  else {
    uVar13 = 8;
    do {
      piVar11 = (int *)(uVar5 + uVar10 * 4);
      iVar6 = piVar11[1];
      iVar7 = piVar11[2];
      iVar8 = piVar11[3];
      piVar2 = (int *)(param_2 + uVar10 * 4);
      *piVar2 = *piVar11 >> 2;
      piVar2[1] = iVar6 >> 2;
      piVar2[2] = iVar7 >> 2;
      piVar2[3] = iVar8 >> 2;
      uVar9 = (int)uVar10 + 0x10;
      uVar10 = (ulonglong)uVar9;
      piVar11 = (int *)(uVar5 + (ulonglong)(uVar13 - 4) * 4);
      iVar6 = piVar11[1];
      iVar7 = piVar11[2];
      iVar8 = piVar11[3];
      piVar2 = (int *)(param_2 + (ulonglong)(uVar13 - 4) * 4);
      *piVar2 = *piVar11 >> 2;
      piVar2[1] = iVar6 >> 2;
      piVar2[2] = iVar7 >> 2;
      piVar2[3] = iVar8 >> 2;
      piVar11 = (int *)(uVar5 + (ulonglong)uVar13 * 4);
      iVar6 = piVar11[1];
      iVar7 = piVar11[2];
      iVar8 = piVar11[3];
      piVar2 = (int *)(param_2 + (ulonglong)uVar13 * 4);
      *piVar2 = *piVar11 >> 2;
      piVar2[1] = iVar6 >> 2;
      piVar2[2] = iVar7 >> 2;
      piVar2[3] = iVar8 >> 2;
      uVar1 = uVar13 + 4;
      uVar13 = uVar13 + 0x10;
      piVar11 = (int *)(uVar5 + (ulonglong)uVar1 * 4);
      iVar6 = piVar11[1];
      iVar7 = piVar11[2];
      iVar8 = piVar11[3];
      piVar2 = (int *)(param_2 + (ulonglong)uVar1 * 4);
      *piVar2 = *piVar11 >> 2;
      piVar2[1] = iVar6 >> 2;
      piVar2[2] = iVar7 >> 2;
      piVar2[3] = iVar8 >> 2;
    } while (uVar9 < uVar4 - (uVar4 & 0xf));
    if (1 < (uVar4 & 0xf)) goto LAB_18058a7b1;
  }
  if ((uint)uVar10 < uVar4) {
LAB_18058a7dc:
    uVar12 = (ulonglong)(uVar4 - (int)uVar10);
    piVar11 = (int *)(param_2 + uVar10 * 4);
    do {
      *piVar11 = *(int *)((longlong)piVar11 + (uVar5 - param_2)) >> 2;
      uVar12 = uVar12 - 1;
      piVar11 = piVar11 + 1;
    } while (uVar12 != 0);
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar4;
    return;
  }
LAB_18058a827:
  *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar4;
  return;
}



