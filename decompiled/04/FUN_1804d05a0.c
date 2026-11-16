// FUN_1804d05a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d05a0 */

void FUN_1804d05a0(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  short sVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar8 = param_1[1];
  if (*param_1 == iVar8) {
    iVar10 = *param_1 + 1;
    if (iVar8 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar8 / 2 + iVar8;
    }
    if (iVar10 < iVar5) {
      iVar10 = iVar5;
    }
    if (iVar8 < iVar10) {
      uVar6 = FUN_1804b8110((longlong)iVar10 << 4);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_18063aed0(uVar6,*(longlong *)(param_1 + 2),(longlong)*param_1 << 4);
        lVar4 = DAT_180bb8ae8;
        lVar3 = *(longlong *)(param_1 + 2);
        if ((lVar3 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8
                          );
          if (*piVar9 != *piVar1) {
            iVar8 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar7 = (short)iVar8 + (short)(iVar8 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar7;
            piVar9 = (int *)(lVar4 + ((longlong)sVar7 + 0x533) * 8);
            *piVar9 = *piVar1;
            piVar9[1] = 0;
          }
          *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
          piVar1 = (int *)(lVar4 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar3);
      }
      *(undefined8 *)(param_1 + 2) = uVar6;
      param_1[1] = iVar10;
    }
  }
  uVar6 = param_2[1];
  puVar2 = (undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 0x10);
  *puVar2 = *param_2;
  puVar2[1] = uVar6;
  *param_1 = *param_1 + 1;
  return;
}



