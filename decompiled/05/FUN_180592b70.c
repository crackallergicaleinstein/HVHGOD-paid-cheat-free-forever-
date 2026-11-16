// FUN_180592b70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180592b70 */

void FUN_180592b70(longlong *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  
  if (param_2 <= param_3) {
    uVar10 = (ulonglong)param_2;
    if ((param_4 < *(uint *)(param_1 + 3)) &&
       (uVar8 = (ulonglong)param_5, param_5 < *(uint *)(param_1 + 3))) {
      iVar2 = *(int *)(param_1[2] + uVar8 * 8);
      iVar11 = *(int *)(param_1[2] + (ulonglong)param_4 * 8);
      iVar14 = iVar2;
      if (iVar2 < iVar11) {
        uVar8 = (ulonglong)param_4;
        param_4 = param_5;
        iVar14 = iVar11;
        iVar11 = iVar2;
      }
      iVar2 = *(int *)(*param_1 + (ulonglong)param_4 * 8);
      iVar3 = *(int *)(*param_1 + uVar8 * 8);
      iVar4 = *(int *)(param_1[1] + (ulonglong)param_4 * 8);
      iVar5 = *(int *)(param_1[1] + uVar8 * 8);
      if ((iVar4 == iVar5) || (iVar11 == iVar14)) {
        do {
          lVar1 = uVar10 * 8;
          iVar11 = *(int *)(lVar1 + *param_1);
          if (iVar2 < iVar11) {
            if (iVar11 < iVar3) {
              iVar11 = iVar4;
            }
            else {
              iVar11 = iVar11 + (iVar5 - iVar3);
            }
          }
          else {
            iVar11 = iVar11 + (iVar4 - iVar2);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *(int *)(lVar1 + param_1[1]) = iVar11;
        } while (uVar9 <= param_3);
      }
      else {
        iVar13 = 0;
        bVar6 = false;
        do {
          lVar1 = uVar10 * 8;
          iVar7 = *(int *)(lVar1 + *param_1);
          if (iVar2 < iVar7) {
            if (iVar7 < iVar3) {
              if (!bVar6) {
                bVar6 = true;
                iVar13 = FUN_180573310(iVar5 - iVar4,iVar14 - iVar11);
              }
              lVar12 = (longlong)(*(int *)(lVar1 + param_1[2]) - iVar11) * (longlong)iVar13;
              iVar7 = (int)((ulonglong)((lVar12 >> 0x3f) + 0x8000 + lVar12) >> 0x10) + iVar4;
            }
            else {
              iVar7 = iVar7 + (iVar5 - iVar3);
            }
          }
          else {
            iVar7 = iVar7 + (iVar4 - iVar2);
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          *(int *)(lVar1 + param_1[1]) = iVar7;
        } while (uVar9 <= param_3);
      }
    }
  }
  return;
}



