// FUN_180594180 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180594180 */

void FUN_180594180(int param_1,int param_2,int param_3,int param_4,longlong param_5,longlong param_6
                  )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_58;
  longlong local_50;
  
  if (param_1 <= param_2) {
    lVar10 = 0;
    local_50 = (longlong)param_3;
    lVar7 = (longlong)param_1;
    lVar11 = (longlong)param_4;
    local_58 = lVar11;
    do {
      param_5 = param_5 + lVar10;
      param_6 = param_6 + lVar10;
      lVar8 = lVar11;
      if (*(int *)(param_5 + lVar11 * 8) < *(int *)(param_5 + local_50 * 8)) {
        lVar8 = local_50;
        local_58 = local_50;
        local_50 = lVar11;
      }
      iVar1 = *(int *)(param_5 + local_50 * 8);
      iVar2 = *(int *)(param_5 + lVar8 * 8);
      iVar3 = *(int *)(param_6 + local_50 * 8);
      iVar4 = *(int *)(param_6 + lVar8 * 8);
      if (iVar1 == iVar2) {
        lVar11 = lVar8;
        if (iVar3 == iVar4) {
          iVar5 = 0;
          goto LAB_18059425e;
        }
      }
      else {
        iVar5 = FUN_180573310(iVar4 - iVar3,iVar2 - iVar1);
LAB_18059425e:
        if (lVar7 <= param_2) {
          piVar9 = (int *)(param_6 + lVar7 * 8);
          lVar11 = (param_2 - lVar7) + 1;
          do {
            iVar6 = *(int *)((param_5 - param_6) + (longlong)piVar9);
            if (iVar1 < iVar6) {
              if (iVar6 < iVar2) {
                lVar8 = (longlong)(iVar6 - iVar1) * (longlong)iVar5;
                iVar6 = (int)((ulonglong)((lVar8 >> 0x3f) + 0x8000 + lVar8) >> 0x10) + iVar3;
              }
              else {
                iVar6 = iVar6 + (iVar4 - iVar2);
              }
            }
            else {
              iVar6 = iVar6 + (iVar3 - iVar1);
            }
            *piVar9 = iVar6;
            piVar9 = piVar9 + 2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        lVar11 = local_58;
      }
      lVar10 = lVar10 + 4;
    } while (lVar10 < 5);
  }
  return;
}



