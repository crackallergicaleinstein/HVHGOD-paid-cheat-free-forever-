// FUN_1804f3530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f3530 */

void FUN_1804f3530(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  short sVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_38;
  longlong local_30;
  
  lVar2 = DAT_180bb8ae8;
  iVar8 = 0;
  lVar7 = *(longlong *)(DAT_180bb8ae8 + 0x27b8);
  piVar4 = (int *)0x0;
  if (lVar7 != 0) {
    piVar4 = (int *)(lVar7 + 4);
  }
  if (piVar4 != (int *)0x0) {
    do {
      if (*piVar4 != 0) {
        iVar8 = iVar8 + 0x14 + (short)piVar4[3] * 0x10;
      }
      piVar6 = (int *)((longlong)piVar4[-1] + (longlong)piVar4);
      piVar4 = (int *)0x0;
      if (piVar6 != (int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x27b0) + 4 + lVar7)) {
        piVar4 = piVar6;
      }
    } while (piVar4 != (int *)0x0);
  }
  if (iVar8 != *(int *)(DAT_180bb8ae8 + 0x27b0)) {
    local_38 = 0;
    iVar9 = 0;
    local_30 = 0;
    iVar3 = 0;
    if (0 < iVar8) {
      local_30 = FUN_1804b8110((longlong)iVar8);
      local_38 = CONCAT44(iVar8,(undefined4)local_38);
      iVar3 = iVar8;
    }
    piVar4 = (int *)0x0;
    lVar7 = local_30;
    if (*(longlong *)(lVar2 + 0x27b8) != 0) {
      piVar4 = (int *)(*(longlong *)(lVar2 + 0x27b8) + 4);
    }
    while (piVar4 != (int *)0x0) {
      if (*piVar4 != 0) {
        lVar11 = (longlong)(short)piVar4[3] * 0x10;
        lVar10 = (longlong)iVar9;
        iVar8 = (int)lVar11 + 0x18;
        iVar9 = iVar8 + iVar9;
        if (iVar3 < iVar9) {
          if (iVar3 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = iVar3 / 2 + iVar3;
          }
          iVar1 = iVar9;
          if (iVar9 < iVar3) {
            iVar1 = iVar3;
          }
          FUN_1804d0ea0(&local_38,iVar1);
          lVar7 = local_30;
          iVar3 = local_38._4_4_;
        }
        local_38 = CONCAT44(local_38._4_4_,iVar9);
        *(int *)(lVar10 + lVar7) = iVar8;
        FUN_18063aed0(lVar10 + 4 + lVar7,piVar4,lVar11 + 0x14);
      }
      piVar6 = (int *)((longlong)piVar4[-1] + (longlong)piVar4);
      piVar4 = (int *)0x0;
      if (piVar6 != (int *)(*(longlong *)(lVar2 + 0x27b8) + 4 + (longlong)*(int *)(lVar2 + 0x27b0)))
      {
        piVar4 = piVar6;
      }
    }
    *(int *)(lVar2 + 0x27b0) = iVar9;
    *(int *)(lVar2 + 0x27b4) = iVar3;
    lVar10 = *(longlong *)(lVar2 + 0x27b8);
    *(longlong *)(lVar2 + 0x27b8) = lVar7;
    iVar8 = 0;
    if (0 < *(int *)(lVar2 + 0x2368)) {
      lVar7 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar2 + 0x2370) + 8 + lVar7);
        if ((iVar3 != -1) &&
           (lVar11 = (longlong)iVar3 * 600 + *(longlong *)(lVar2 + 0x2360), lVar11 != 0)) {
          *(undefined4 *)(lVar11 + 100) = 0xffffffff;
        }
        iVar8 = iVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (iVar8 < *(int *)(lVar2 + 0x2368));
    }
    lVar7 = DAT_180bb8ae8;
    if (lVar10 != 0) {
      if (DAT_180bb8ae8 != 0) {
        piVar4 = (int *)(DAT_180bb8ae8 + 4);
        piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar6 != *piVar4) {
          iVar8 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar5 = (short)iVar8 + (short)(iVar8 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar5;
          piVar6 = (int *)(lVar7 + ((longlong)sVar5 + 0x533) * 8);
          *piVar6 = *piVar4;
          piVar6[1] = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        piVar4 = (int *)(lVar7 + 0x2990);
        *piVar4 = *piVar4 + 1;
      }
      thunk_FUN_180621380(lVar10);
    }
  }
  return;
}



