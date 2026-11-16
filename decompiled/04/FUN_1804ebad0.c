// FUN_1804ebad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ebad0 */

void FUN_1804ebad0(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar9 = param_1[1];
  if (*param_1 == iVar9) {
    iVar12 = *param_1 + 1;
    if (iVar9 == 0) {
      iVar6 = 8;
    }
    else {
      iVar6 = iVar9 / 2 + iVar9;
    }
    if (iVar12 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar9 < iVar12) {
      uVar7 = FUN_1804b8110((longlong)iVar12 * 0x2c);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_18063aed0(uVar7,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x2c);
        lVar5 = DAT_180bb8ae8;
        lVar2 = *(longlong *)(param_1 + 2);
        if ((lVar2 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar10 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar10 != *piVar1) {
            iVar9 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar8 = (short)iVar9 + (short)(iVar9 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar8;
            piVar10 = (int *)(lVar5 + ((longlong)sVar8 + 0x533) * 8);
            *piVar10 = *piVar1;
            piVar10[1] = 0;
          }
          *(short *)((longlong)piVar10 + 6) = *(short *)((longlong)piVar10 + 6) + 1;
          piVar1 = (int *)(lVar5 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar2);
      }
      *(undefined8 *)(param_1 + 2) = uVar7;
      param_1[1] = iVar12;
    }
  }
  uVar7 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  puVar11 = (undefined8 *)((longlong)*param_1 * 0x2c + *(longlong *)(param_1 + 2));
  *puVar11 = *param_2;
  puVar11[1] = uVar7;
  puVar11[2] = uVar3;
  puVar11[3] = uVar4;
  puVar11[4] = param_2[4];
  *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(param_2 + 5);
  *param_1 = *param_1 + 1;
  return;
}



