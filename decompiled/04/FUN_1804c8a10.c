// FUN_1804c8a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8a10 */

void FUN_1804c8a10(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  
  lVar8 = DAT_180bb8ae8;
  if ((((param_2 & 2) != 0) && (*(longlong *)(DAT_180bb8ae8 + 0x2040) != param_1)) &&
     (0 < *(int *)(DAT_180bb8ae8 + 0x1ff8))) {
    lVar7 = *(longlong *)(DAT_180bb8ae8 + 0x2000);
    lVar5 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1ff8) * 0x38 + lVar7;
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0x38) {
      lVar1 = *(longlong *)(lVar7 + 8);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x14) & 0x8000000) != 0)) &&
         ((*(char *)(lVar1 + 0xcc) != '\0' || (*(char *)(lVar1 + 0xcd) != '\0')))) {
        if (param_1 == 0) {
LAB_1804c8aa6:
          if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 4) != 0) {
            if (param_1 == 0) {
              pcVar6 = "<NULL>";
            }
            else {
              pcVar6 = *(char **)(param_1 + 8);
            }
            FUN_1804cf3e0("[focus] FocusWindow(\"%s\", UnlessBelowModal): prevented by \"%s\".\n",
                          pcVar6,*(undefined8 *)(lVar1 + 8));
          }
          lVar8 = DAT_180bb8ae8;
          if (((param_1 != 0) && (lVar7 = *(longlong *)(param_1 + 0x3d8), param_1 == lVar7)) &&
             ((*(uint *)(param_1 + 0x14) & 0x2000) == 0)) {
            plVar12 = *(longlong **)(DAT_180bb8ae8 + 0x1478);
            plVar10 = plVar12 + *(int *)(DAT_180bb8ae8 + 0x1470);
            for (; (plVar12 < plVar10 && (*plVar12 != lVar7)); plVar12 = plVar12 + 1) {
            }
            plVar10 = *(longlong **)(DAT_180bb8ae8 + 0x1478);
            for (plVar9 = plVar10;
                (plVar9 < plVar10 + *(int *)(DAT_180bb8ae8 + 0x1470) &&
                (*plVar9 != *(longlong *)(lVar1 + 0x3d8))); plVar9 = plVar9 + 1) {
            }
            iVar2 = (int)((longlong)plVar9 - (longlong)plVar10 >> 3);
            iVar11 = (int)((longlong)plVar12 - (longlong)plVar10 >> 3);
            if (iVar11 < iVar2) {
              FUN_18063aed0(plVar10 + iVar11,plVar10 + (iVar11 + 1),
                            (longlong)((iVar2 - iVar11) + -1) << 3);
              *(longlong *)(*(longlong *)(lVar8 + 0x1478) + -8 + (longlong)iVar2 * 8) = lVar7;
            }
            else {
              FUN_18063aed0(plVar10 + (iVar2 + 1),plVar10 + iVar2,(longlong)(iVar11 - iVar2) << 3);
              *(longlong *)((longlong)iVar2 * 8 + *(longlong *)(lVar8 + 0x1478)) = lVar7;
            }
          }
          iVar2 = *(int *)(lVar8 + 0x1ff8) + -1;
          if (-1 < iVar2) {
            lVar7 = (longlong)iVar2;
            plVar10 = (longlong *)(*(longlong *)(lVar8 + 0x2000) + 8 + lVar7 * 0x38);
            do {
              lVar8 = *plVar10;
              if ((lVar8 != 0) && ((*(uint *)(lVar8 + 0x14) & 0x8000000) != 0)) goto LAB_1804c8c95;
              plVar10 = plVar10 + -7;
              lVar7 = lVar7 + -1;
            } while (-1 < lVar7);
          }
          lVar8 = 0;
LAB_1804c8c95:
          FUN_1804c7960(lVar8,0);
          return;
        }
        lVar3 = param_1;
        if (*(longlong *)(param_1 + 0x3d8) != lVar1) {
          while (lVar3 != lVar1) {
            lVar3 = *(longlong *)(lVar3 + 0x3d0);
            if (lVar3 == 0) goto LAB_1804c8aa6;
          }
        }
      }
    }
  }
  if (((((param_2 & 1) != 0) && (param_1 != 0)) &&
      (lVar7 = *(longlong *)(param_1 + 0x400), lVar7 != 0)) && (*(char *)(lVar7 + 0xcd) != '\0')) {
    param_1 = lVar7;
  }
  lVar7 = 0;
  if (*(longlong *)(DAT_180bb8ae8 + 0x2040) != param_1) {
    FUN_1804c8e60(param_1);
    if (param_1 == 0) {
      *(undefined4 *)(lVar8 + 0x203c) = 0;
      uVar4 = 0;
      *(undefined4 *)(lVar8 + 0x204c) = 0;
    }
    else {
      if (*(char *)(lVar8 + 0x2039) != '\0') {
        *(undefined1 *)(lVar8 + 0x203a) = 1;
      }
      *(undefined4 *)(lVar8 + 0x203c) = *(undefined4 *)(param_1 + 0x408);
      *(undefined4 *)(lVar8 + 0x204c) = 0;
      uVar4 = *(undefined4 *)(param_1 + 0x440);
    }
    FUN_1804c1dd0(uVar4);
    *(undefined1 *)(lVar8 + 0x203b) = 0;
    *(undefined8 *)(lVar8 + 0x2098) = 0xffffffffffffffff;
    FUN_1804c7960(param_1,0);
  }
  if (param_1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x3d8);
  }
  if (((*(int *)(lVar8 + 0x1550) != 0) && (*(longlong *)(lVar8 + 0x1578) != 0)) &&
     ((*(longlong *)(*(longlong *)(lVar8 + 0x1578) + 0x3d8) != lVar7 &&
      (*(char *)(lVar8 + 0x1560) == '\0')))) {
    FUN_1804b7870(0,0);
  }
  if ((param_1 != 0) &&
     (FUN_1804c88c0(lVar7), ((*(uint *)(lVar7 + 0x14) | *(uint *)(param_1 + 0x14)) >> 0xd & 1) == 0)
     ) {
    FUN_1804c8960(lVar7);
  }
  return;
}



