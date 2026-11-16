// FUN_1805b7620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b7620 */

void FUN_1805b7620(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint local_res8;
  
  uVar10 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20) = 0;
  local_res8 = *(uint *)(param_1 + 0x20);
  if (local_res8 != 0) {
    do {
      lVar14 = uVar10 * 0x20 + param_1;
      uVar1 = *(uint *)(lVar14 + 0x3c);
      uVar16 = *(uint *)(lVar14 + 0x28) & 0xc;
      uVar11 = uVar10 + 1;
      if (uVar16 == 0) {
        uVar11 = uVar10;
      }
      lVar15 = uVar11 * 0x20;
      uVar2 = *(uint *)(lVar15 + 0x3c + param_1);
      if ((*(uint *)(lVar14 + 0x28) & 0x10) == 0) {
        iVar12 = -(uVar1 & 0xffff);
        iVar9 = -(uVar2 & 0xffff);
        iVar7 = 0;
        if ((uVar1 & 0xffff) != 0) {
          iVar7 = iVar12 + 0x10000;
        }
        iVar13 = 0;
        if ((uVar2 & 0xffff) != 0) {
          iVar13 = iVar9 + 0x10000;
        }
        if (iVar7 < iVar13) {
          iVar13 = iVar7;
        }
        if (iVar9 < iVar12) {
          iVar9 = iVar12;
        }
        if ((uVar11 < local_res8 - 1) &&
           (*(int *)(lVar15 + 0x5c + param_1) < (int)(iVar13 + 0x8000 + uVar2))) {
          if ((uVar10 == 0) || (*(int *)(lVar14 + 0x1c) <= (int)(iVar9 + -0x8000 + uVar1))) {
            if (-iVar9 <= iVar13) goto LAB_1805b77a0;
          }
          else {
            iVar9 = 0;
          }
          if (((*(byte *)(lVar15 + 0x48 + param_1) & 0x10) == 0) &&
             ((lVar14 = *(longlong *)(param_1 + 0x10),
              *(longlong *)(lVar14 + 0x20) != *(longlong *)(lVar14 + 0x18) ||
              (cVar4 = FUN_1805b50b0(lVar14), cVar4 != '\0')))) {
            FUN_18063aed0(*(longlong *)(lVar14 + 0x10) * *(longlong *)(lVar14 + 0x20) +
                          *(longlong *)(lVar14 + 0x30));
            *(longlong *)(lVar14 + 0x20) = *(longlong *)(lVar14 + 0x20) + 1;
          }
        }
        else {
          if (((uVar10 == 0) || (*(int *)(lVar14 + 0x1c) <= (int)(iVar9 + -0x8000 + uVar1))) &&
             (-iVar9 < iVar13)) {
            iVar13 = iVar9;
          }
          iVar9 = iVar13;
        }
LAB_1805b77a0:
        *(uint *)(uVar10 * 0x20 + 0x3c + param_1) = uVar1 + iVar9;
        if (uVar16 != 0) {
          *(uint *)(uVar11 * 0x20 + 0x3c + param_1) = iVar9 + uVar2;
        }
      }
      if ((uVar10 != 0) &&
         (*(int *)(uVar10 * 0x20 + 0x38 + param_1) != *(int *)(uVar10 * 0x20 + 0x18 + param_1))) {
        uVar5 = FUN_180573310(*(int *)(uVar10 * 0x20 + 0x3c + param_1) -
                              *(int *)(uVar10 * 0x20 + 0x1c + param_1));
        *(undefined4 *)((uVar10 + 1) * 0x20 + param_1) = uVar5;
      }
      if (uVar16 != 0) {
        if (*(int *)(uVar11 * 0x20 + 0x38 + param_1) != *(int *)(uVar11 * 0x20 + 0x18 + param_1)) {
          uVar5 = FUN_180573310(*(int *)(uVar11 * 0x20 + 0x3c + param_1) -
                                *(int *)(uVar11 * 0x20 + 0x1c + param_1));
          *(undefined4 *)((uVar11 + 1) * 0x20 + param_1) = uVar5;
        }
        uVar10 = uVar10 + 1;
      }
      local_res8 = *(uint *)(param_1 + 0x20);
      uVar10 = uVar10 + 1;
    } while (uVar10 < local_res8);
  }
  uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x20);
  uVar11 = uVar10;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    uVar11 = uVar11 - 1;
    lVar14 = *(longlong *)(param_1 + 0x10);
    uVar6 = uVar11;
    if (*(ulonglong *)(lVar14 + 0x20) <= uVar11) {
      piVar3 = *(int **)(lVar14 + 8);
      if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
        *piVar3 = 0x82;
      }
      uVar6 = 0;
    }
    lVar15 = uVar6 * *(longlong *)(lVar14 + 0x10);
    lVar14 = *(longlong *)(lVar14 + 0x30);
    lVar8 = *(longlong *)(lVar14 + lVar15) * 0x20 + param_1;
    iVar9 = *(int *)(lVar14 + 8 + lVar15) + *(int *)(lVar8 + 0x3c);
    if ((iVar9 + 0x8000 <= *(int *)(lVar8 + 0x5c)) &&
       (*(int *)(lVar8 + 0x3c) = iVar9, (*(byte *)(lVar8 + 0x28) & 0xc) != 0)) {
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + *(int *)(lVar14 + 8 + lVar15);
    }
  }
  return;
}



