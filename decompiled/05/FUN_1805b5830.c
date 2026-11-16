// FUN_1805b5830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b5830 */

void FUN_1805b5830(int param_1,uint param_2,int param_3,int *param_4,int param_5,char param_6,
                  int *param_7)

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
  longlong lVar12;
  uint uVar13;
  int iVar14;
  
  iVar8 = 0;
  *param_4 = 0;
  if ((param_5 == 0) && (param_6 == '\0')) {
    return;
  }
  if (param_1 < 0x28f) {
    return;
  }
  if (param_6 == '\0') goto LAB_1805b5a9b;
  iVar8 = param_7[6];
  iVar9 = param_7[2];
  iVar10 = *param_7;
  iVar1 = param_7[1];
  iVar2 = param_7[7];
  iVar3 = param_7[5];
  iVar4 = param_7[3];
  iVar5 = param_7[4];
  lVar12 = (longlong)(param_3 + param_5) * (longlong)param_1;
  iVar14 = iVar8 * 0x10000;
  iVar7 = 0x1f;
  uVar13 = (uint)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
  if (uVar13 != 0) {
    for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar6 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  iVar11 = iVar14;
  if (iVar6 + iVar7 < 0x2e) {
    iVar11 = (int)((ulonglong)
                   ((longlong)(int)uVar13 * (longlong)(int)param_2 + 0x8000 +
                   ((longlong)(int)uVar13 * (longlong)(int)param_2 >> 0x3f)) >> 0x10);
  }
  iVar7 = iVar10 * 0x10000;
  if (iVar11 < iVar7) {
    iVar8 = FUN_180573310(iVar1 << 0x10,param_2);
  }
  else if (iVar11 < iVar9 * 0x10000) {
    iVar7 = FUN_180573310(iVar7,param_2);
    if (iVar9 == iVar10) {
LAB_1805b59fa:
      iVar10 = FUN_180573310(iVar9 * 0x10000,param_2);
      if (iVar5 - iVar9 == 0) {
LAB_1805b5a43:
        iVar9 = FUN_180573310(iVar5 << 0x10,param_2);
        if (iVar8 == iVar5) goto LAB_1805b59a2;
        iVar8 = FUN_1805753e0(uVar13 - iVar9,iVar2 - iVar3);
        iVar9 = FUN_180573310(iVar3 << 0x10,param_2);
        iVar8 = iVar8 + iVar9;
      }
      else {
        iVar8 = FUN_1805753e0(uVar13 - iVar10,iVar3 - iVar4,iVar5 - iVar9);
        iVar9 = FUN_180573310(iVar4 << 0x10,param_2);
        iVar8 = iVar8 + iVar9;
      }
    }
    else {
      iVar8 = FUN_1805753e0(uVar13 - iVar7,iVar4 - iVar1);
      iVar9 = FUN_180573310(iVar1 << 0x10,param_2);
      iVar8 = iVar8 + iVar9;
    }
  }
  else {
    if (iVar11 < iVar5 * 0x10000) goto LAB_1805b59fa;
    if (iVar11 < iVar14) goto LAB_1805b5a43;
LAB_1805b59a2:
    iVar8 = FUN_180573310(iVar2 << 0x10,param_2);
  }
  *param_4 = iVar8;
  iVar8 = FUN_180573310(iVar8,param_1 * 2);
LAB_1805b5a9b:
  *param_4 = param_5 / 2 + iVar8;
  return;
}



