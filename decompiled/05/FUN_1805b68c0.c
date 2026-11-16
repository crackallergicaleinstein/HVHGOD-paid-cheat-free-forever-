// FUN_1805b68c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b68c0 */

ulonglong FUN_1805b68c0(longlong param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                       int *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = (longlong)((param_5[1] - param_4[1]) + 0x10 >> 5);
  lVar10 = (longlong)((*param_5 - *param_4) + 0x10 >> 5);
  lVar6 = (param_3[1] + (0x10 - param_2[1]) >> 5) * lVar10;
  lVar8 = (*param_3 + (0x10 - *param_2) >> 5) * lVar11;
  uVar4 = lVar8 >> 0x3f;
  if ((int)(lVar8 + 0x8000 + uVar4 >> 0x10) !=
      (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10)) {
    lVar10 = (param_4[1] + (0x10 - param_2[1]) >> 5) * lVar10;
    lVar11 = (*param_4 + (0x10 - *param_2) >> 5) * lVar11;
    iVar2 = FUN_180573310((int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10) -
                          (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10));
    lVar10 = (longlong)(*param_3 - *param_2) * (longlong)iVar2;
    iVar7 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) + *param_2;
    *param_6 = iVar7;
    lVar10 = (longlong)(param_3[1] - param_2[1]) * (longlong)iVar2;
    iVar9 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) + param_2[1];
    param_6[1] = iVar9;
    iVar2 = *param_2;
    if (iVar2 == *param_3) {
      iVar3 = iVar2 - iVar7;
      if (-1 < iVar7 - iVar2) {
        iVar3 = iVar7 - iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar2;
        iVar7 = iVar2;
      }
    }
    iVar2 = param_2[1];
    if (iVar2 == param_3[1]) {
      iVar3 = iVar2 - iVar9;
      if (-1 < iVar9 - iVar2) {
        iVar3 = iVar9 - iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar2;
        iVar9 = iVar2;
      }
    }
    iVar2 = *param_4;
    if (iVar2 == *param_5) {
      iVar3 = iVar2 - iVar7;
      if (-1 < iVar7 - iVar2) {
        iVar3 = iVar7 - iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x490c)) {
        *param_6 = iVar2;
        iVar7 = iVar2;
      }
    }
    iVar2 = param_4[1];
    if (iVar2 == param_5[1]) {
      iVar3 = iVar2 - iVar9;
      if (-1 < iVar9 - iVar2) {
        iVar3 = iVar9 - iVar2;
      }
      if (iVar3 < *(int *)(param_1 + 0x490c)) {
        param_6[1] = iVar2;
        iVar9 = iVar2;
      }
    }
    iVar2 = (*param_3 + *param_4) / 2;
    uVar5 = iVar7 - iVar2;
    uVar1 = iVar2 - iVar7;
    if (-1 < (int)uVar5) {
      uVar1 = uVar5;
    }
    uVar4 = (ulonglong)uVar1;
    if ((int)uVar1 <= *(int *)(param_1 + 0x4908)) {
      iVar2 = (param_3[1] + param_4[1]) / 2;
      iVar7 = iVar9 - iVar2;
      iVar2 = iVar2 - iVar9;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      return (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),iVar2 <= *(int *)(param_1 + 0x4908));
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



