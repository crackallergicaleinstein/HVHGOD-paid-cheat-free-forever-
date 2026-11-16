// FUN_1804cfa70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cfa70 */

void FUN_1804cfa70(int *param_1,undefined8 *param_2)

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
  int iVar12;
  
  iVar10 = param_1[1];
  if (*param_1 == iVar10) {
    iVar12 = *param_1 + 1;
    if (iVar10 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar10 / 2 + iVar10;
    }
    if (iVar12 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar10 < iVar12) {
      uVar7 = FUN_1804b8110((longlong)iVar12 * 0x50);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_18063aed0(uVar7,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x50);
        lVar8 = DAT_180bb8ae8;
        lVar3 = *(longlong *)(param_1 + 2);
        if ((lVar3 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar11 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar11 != *piVar1) {
            iVar10 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar9;
            piVar11 = (int *)(lVar8 + ((longlong)sVar9 + 0x533) * 8);
            *piVar11 = *piVar1;
            piVar11[1] = 0;
          }
          *(short *)((longlong)piVar11 + 6) = *(short *)((longlong)piVar11 + 6) + 1;
          piVar1 = (int *)(lVar8 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar3);
      }
      *(undefined8 *)(param_1 + 2) = uVar7;
      param_1[1] = iVar12;
    }
  }
  lVar8 = (longlong)*param_1;
  uVar7 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  lVar3 = *(longlong *)(param_1 + 2);
  puVar2 = (undefined8 *)(lVar3 + lVar8 * 0x50);
  *puVar2 = *param_2;
  puVar2[1] = uVar7;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar5 = param_2[7];
  puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar8 * 0x50);
  *puVar2 = param_2[4];
  puVar2[1] = uVar7;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  uVar7 = param_2[9];
  puVar2 = (undefined8 *)(lVar3 + 0x40 + lVar8 * 0x50);
  *puVar2 = param_2[8];
  puVar2[1] = uVar7;
  *param_1 = *param_1 + 1;
  return;
}



