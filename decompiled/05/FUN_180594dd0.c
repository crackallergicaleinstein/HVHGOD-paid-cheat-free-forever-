// FUN_180594dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180594dd0 */

void FUN_180594dd0(ushort *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short local_48;
  
  if (*param_1 != 0) {
    local_48 = 0;
    iVar7 = 0;
    lVar5 = 0;
    do {
      uVar2 = *(ushort *)(*(longlong *)(param_1 + 0xc) + (longlong)local_48 * 2);
      uVar6 = (ulonglong)(uint)uVar2;
      iVar8 = iVar7;
      if (lVar5 <= (longlong)(ulonglong)uVar2) {
        do {
          if (*(char *)(lVar5 + param_4) != '\0') break;
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar5 <= (longlong)uVar6);
      }
      iVar9 = iVar8;
      if (iVar8 <= (int)(uint)uVar2) {
        iVar9 = iVar8 + 1;
        lVar5 = lVar5 + 1;
        iVar10 = iVar8;
        if (lVar5 <= (longlong)uVar6) {
          do {
            if (*(char *)(lVar5 + param_4) != '\0') {
              FUN_180594180(iVar10 + 1,iVar9 + -1,iVar10,iVar9,param_3,param_2);
              iVar10 = iVar9;
            }
            iVar9 = iVar9 + 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 <= (longlong)uVar6);
          if (iVar10 != iVar8) {
            FUN_180594180(iVar10 + 1,(uint)uVar2,iVar10,iVar8,param_3,param_2);
            if (0 < iVar8) {
              FUN_180594180(iVar7,iVar8 + -1,iVar10,iVar8,param_3,param_2);
            }
            goto LAB_180594f06;
          }
        }
        lVar4 = (longlong)iVar10;
        iVar11 = *(int *)(param_2 + lVar4 * 8) - *(int *)(param_3 + lVar4 * 8);
        iVar8 = *(int *)(param_2 + 4 + lVar4 * 8) - *(int *)(param_3 + 4 + lVar4 * 8);
        if ((iVar11 != 0) || (iVar8 != 0)) {
          for (lVar3 = (longlong)iVar7; lVar3 < lVar4; lVar3 = lVar3 + 1) {
            piVar1 = (int *)(param_2 + lVar3 * 8);
            *piVar1 = *piVar1 + iVar11;
            piVar1 = (int *)(param_2 + 4 + lVar3 * 8);
            *piVar1 = *piVar1 + iVar8;
          }
          for (lVar4 = (longlong)(iVar10 + 1); lVar4 <= (longlong)uVar6; lVar4 = lVar4 + 1) {
            piVar1 = (int *)(param_2 + lVar4 * 8);
            *piVar1 = *piVar1 + iVar11;
            piVar1 = (int *)(param_2 + 4 + lVar4 * 8);
            *piVar1 = *piVar1 + iVar8;
          }
        }
      }
LAB_180594f06:
      iVar7 = iVar9;
      local_48 = local_48 + 1;
    } while ((int)local_48 < (int)(uint)*param_1);
  }
  return;
}



