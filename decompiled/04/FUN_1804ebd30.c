// FUN_1804ebd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ebd30 */

void FUN_1804ebd30(int *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  short sVar12;
  int iVar13;
  int *piVar14;
  undefined8 *puVar15;
  int iVar16;
  
  iVar13 = param_1[1];
  if (*param_1 == iVar13) {
    iVar16 = *param_1 + 1;
    if (iVar13 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar13 / 2 + iVar13;
    }
    if (iVar16 < iVar10) {
      iVar16 = iVar10;
    }
    if (iVar13 < iVar16) {
      uVar11 = FUN_1804b8110((longlong)iVar16 * 0xa0);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_18063aed0(uVar11,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0xa0);
        lVar9 = DAT_180bb8ae8;
        lVar2 = *(longlong *)(param_1 + 2);
        if ((lVar2 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar14 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar14 != *piVar1) {
            iVar13 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar12 = (short)iVar13 + (short)(iVar13 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar12;
            piVar14 = (int *)(lVar9 + ((longlong)sVar12 + 0x533) * 8);
            *piVar14 = *piVar1;
            piVar14[1] = 0;
          }
          *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
          piVar1 = (int *)(lVar9 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar2);
      }
      *(undefined8 *)(param_1 + 2) = uVar11;
      param_1[1] = iVar16;
    }
  }
  uVar11 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[0x10];
  uVar6 = param_2[0x11];
  uVar7 = param_2[0x12];
  uVar8 = param_2[0x13];
  puVar15 = (undefined8 *)((longlong)*param_1 * 0xa0 + *(longlong *)(param_1 + 2));
  *puVar15 = *param_2;
  puVar15[1] = uVar11;
  puVar15[2] = uVar3;
  puVar15[3] = uVar4;
  uVar11 = param_2[5];
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  puVar15[4] = param_2[4];
  puVar15[5] = uVar11;
  puVar15[6] = uVar3;
  puVar15[7] = uVar4;
  uVar11 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  puVar15[8] = param_2[8];
  puVar15[9] = uVar11;
  puVar15[10] = uVar3;
  puVar15[0xb] = uVar4;
  uVar11 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar4 = param_2[0xf];
  puVar15[0xc] = param_2[0xc];
  puVar15[0xd] = uVar11;
  puVar15[0xe] = uVar3;
  puVar15[0xf] = uVar4;
  puVar15[0x10] = uVar5;
  puVar15[0x11] = uVar6;
  puVar15[0x12] = uVar7;
  puVar15[0x13] = uVar8;
  *param_1 = *param_1 + 1;
  return;
}



