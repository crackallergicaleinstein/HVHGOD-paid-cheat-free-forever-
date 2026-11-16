// FUN_1804c1dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1dd0 */

void FUN_1804c1dd0(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  lVar5 = DAT_180bb8ae8;
  iVar7 = 0;
  piVar1 = (int *)(DAT_180bb8ae8 + 0x2068);
  *(int *)(DAT_180bb8ae8 + 0x2048) = param_1;
  iVar6 = *(int *)(lVar5 + 0x206c);
  if (iVar6 < 0) {
    iVar6 = iVar6 + iVar6 / 2;
    iVar9 = 0;
    if (0 < iVar6) {
      iVar9 = iVar6;
    }
    FUN_1804d0a80(piVar1,iVar9);
  }
  *piVar1 = 0;
  if (param_1 != 0) {
    if (param_1 == *(int *)(lVar5 + 0x1e7c)) {
      iVar6 = *(int *)(lVar5 + 0x1fc8) + -1;
      lVar8 = (longlong)iVar6;
      if (-1 < iVar6) {
        iVar7 = 0;
        do {
          puVar2 = (undefined8 *)(*(longlong *)(lVar5 + 0x1fd0) + lVar8 * 8);
          if (*(int *)((longlong)puVar2 + 4) != *(int *)(*(longlong *)(lVar5 + 0x14d0) + 0x10))
          break;
          iVar6 = *(int *)(lVar5 + 0x206c);
          if (iVar7 == iVar6) {
            if (iVar6 == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = iVar6 / 2 + iVar6;
            }
            iVar9 = iVar7 + 1;
            if (iVar7 + 1 < iVar6) {
              iVar9 = iVar6;
            }
            FUN_1804d0a80(piVar1,iVar9);
          }
          *(undefined8 *)(*(longlong *)(lVar5 + 0x2070) + (longlong)*piVar1 * 8) = *puVar2;
          *piVar1 = *piVar1 + 1;
          lVar8 = lVar8 + -1;
          iVar7 = *piVar1;
        } while (-1 < lVar8);
      }
    }
    else {
      if (param_1 != *(int *)(*(longlong *)(lVar5 + 0x2040) + 0x440)) {
        return;
      }
      uVar3 = *(undefined4 *)(*(longlong *)(lVar5 + 0x2040) + 0x10);
      if (*(int *)(lVar5 + 0x206c) == 0) {
        FUN_1804d0a80(piVar1,8);
      }
      *(ulonglong *)(*(longlong *)(lVar5 + 0x2070) + (longlong)*piVar1 * 8) =
           CONCAT44(uVar3,param_1);
      *piVar1 = *piVar1 + 1;
      iVar7 = *piVar1;
    }
    for (lVar8 = *(longlong *)(*(longlong *)(lVar5 + 0x2040) + 0x3f8); lVar8 != 0;
        lVar8 = *(longlong *)(lVar8 + 0x3f8)) {
      uVar3 = *(undefined4 *)(lVar8 + 0x440);
      iVar6 = *(int *)(lVar5 + 0x206c);
      uVar4 = *(undefined4 *)(lVar8 + 0x10);
      if (iVar7 == iVar6) {
        if (iVar6 == 0) {
          iVar6 = 8;
        }
        else {
          iVar6 = iVar6 / 2 + iVar6;
        }
        iVar9 = iVar7 + 1;
        if (iVar7 + 1 < iVar6) {
          iVar9 = iVar6;
        }
        FUN_1804d0a80(piVar1,iVar9);
      }
      *(ulonglong *)(*(longlong *)(lVar5 + 0x2070) + (longlong)*piVar1 * 8) = CONCAT44(uVar4,uVar3);
      *piVar1 = *piVar1 + 1;
      iVar7 = *piVar1;
    }
  }
  return;
}



