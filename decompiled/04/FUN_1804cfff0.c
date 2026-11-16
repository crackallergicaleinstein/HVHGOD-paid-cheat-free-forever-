// FUN_1804cfff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cfff0 */

void FUN_1804cfff0(int *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  short sVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  
  iVar10 = param_1[1];
  if (iVar10 < param_2) {
    if (iVar10 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar10 / 2 + iVar10;
    }
    iVar13 = param_2;
    if (param_2 < iVar6) {
      iVar13 = iVar6;
    }
    if (iVar10 < iVar13) {
      uVar7 = FUN_1804b8110((longlong)iVar13 * 0x28);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_18063aed0(uVar7,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x28);
        lVar12 = DAT_180bb8ae8;
        lVar8 = *(longlong *)(param_1 + 2);
        if ((lVar8 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar11 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar11 != *piVar1) {
            iVar10 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar9;
            piVar11 = (int *)(lVar12 + ((longlong)sVar9 + 0x533) * 8);
            *piVar11 = *piVar1;
            piVar11[1] = 0;
          }
          *(short *)((longlong)piVar11 + 6) = *(short *)((longlong)piVar11 + 6) + 1;
          piVar1 = (int *)(lVar12 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar8);
      }
      *(undefined8 *)(param_1 + 2) = uVar7;
      param_1[1] = iVar13;
    }
  }
  lVar8 = (longlong)*param_1;
  if ((*param_1 < param_2) && (lVar8 < param_2)) {
    lVar12 = lVar8 * 0x28;
    lVar8 = param_2 - lVar8;
    do {
      lVar3 = *(longlong *)(param_1 + 2);
      lVar12 = lVar12 + 0x28;
      uVar7 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      puVar2 = (undefined8 *)(lVar3 + -0x28 + lVar12);
      *puVar2 = *param_3;
      puVar2[1] = uVar7;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      *(undefined8 *)(lVar3 + -8 + lVar12) = param_3[4];
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  *param_1 = param_2;
  return;
}



