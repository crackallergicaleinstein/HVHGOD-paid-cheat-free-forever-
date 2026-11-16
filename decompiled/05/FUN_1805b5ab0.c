// FUN_1805b5ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b5ab0 */

void FUN_1805b5ab0(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  ulonglong local_res10;
  
  iVar6 = param_3 * *(int *)(param_1 + 0x20);
  local_res10 = (ulonglong)param_3;
  lVar3 = *(longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_2 + 0x10);
  uVar8 = (int)(lVar3 - lVar5 >> 3) - iVar6;
  uVar7 = (ulonglong)(uVar8 + param_3);
  if (param_3 != 0) {
    do {
      uVar9 = (ulonglong)uVar8;
      puVar12 = (undefined8 *)(param_2 + 8);
      piVar14 = *(int **)(param_1 + 0x28);
      if (uVar8 < (uint)(lVar3 - lVar5 >> 3)) {
        iVar1 = *(int *)(lVar5 + 4 + uVar9 * 8);
        iVar10 = *(int *)(lVar5 + uVar9 * 8);
        if (iVar1 == 1) {
          iVar10 = iVar10 + (iVar10 >> 0x1f) + 0x2000 >> 0xe;
        }
        else if (iVar1 == 2) {
          iVar10 = iVar10 << 0x10;
        }
      }
      else {
        piVar2 = (int *)*puVar12;
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
          *piVar2 = 0x82;
          lVar3 = *(longlong *)(param_2 + 0x18);
          lVar5 = *(longlong *)(param_2 + 0x10);
        }
        iVar10 = 0;
      }
      uVar11 = *(uint *)(param_1 + 0x20);
      if (1 < uVar11) {
        lVar3 = *(longlong *)(param_2 + 0x18);
        uVar13 = 1;
        lVar5 = *(longlong *)(param_2 + 0x10);
        do {
          piVar14 = piVar14 + 1;
          if ((uint)uVar7 < (uint)(lVar3 - lVar5 >> 3)) {
            iVar1 = *(int *)(lVar5 + 4 + uVar7 * 8);
            piVar2 = (int *)(lVar5 + uVar7 * 8);
            if (iVar1 == 1) {
              iVar1 = *piVar2;
              iVar4 = iVar1 + (iVar1 >> 0x1f) + 0x2000 >> 0xe;
            }
            else {
              iVar4 = *piVar2;
              if (iVar1 == 2) {
                iVar4 = iVar4 << 0x10;
              }
            }
          }
          else {
            piVar2 = (int *)*puVar12;
            if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
              *piVar2 = 0x82;
              lVar3 = *(longlong *)(param_2 + 0x18);
              lVar5 = *(longlong *)(param_2 + 0x10);
              uVar11 = *(uint *)(param_1 + 0x20);
            }
            iVar4 = 0;
          }
          uVar7 = (ulonglong)((uint)uVar7 + 1);
          uVar13 = uVar13 + 1;
          iVar10 = iVar10 + (int)((ulonglong)
                                  ((longlong)iVar4 * (longlong)*piVar14 + 0x8000 +
                                  ((longlong)iVar4 * (longlong)*piVar14 >> 0x3f)) >> 0x10);
        } while (uVar13 < uVar11);
      }
      if ((uint)(lVar3 - lVar5 >> 3) < uVar8) {
        piVar14 = (int *)*puVar12;
        if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
          *piVar14 = 0x82;
          goto LAB_1805b5ca8;
        }
      }
      else {
        *(int *)(lVar5 + uVar9 * 8) = iVar10;
        *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 4 + uVar9 * 8) = 0;
LAB_1805b5ca8:
        lVar5 = *(longlong *)(param_2 + 0x10);
        lVar3 = *(longlong *)(param_2 + 0x18);
      }
      uVar8 = uVar8 + 1;
      local_res10 = local_res10 - 1;
    } while (local_res10 != 0);
  }
  param_3 = iVar6 - param_3;
  if ((uint)(lVar3 - lVar5 >> 3) < param_3) {
    piVar14 = *(int **)(param_2 + 8);
    if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
      *piVar14 = 0xa1;
      return;
    }
  }
  else {
    *(ulonglong *)(param_2 + 0x18) = lVar3 + (ulonglong)param_3 * -8;
  }
  return;
}



