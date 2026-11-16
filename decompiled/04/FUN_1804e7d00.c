// FUN_1804e7d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e7d00 */

void FUN_1804e7d00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  short sVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0xa0);
  iVar10 = *(int *)(lVar3 + 0x54);
  iVar6 = *(int *)(lVar2 + 0x24) / 2;
  if (iVar10 < iVar6) {
    if (iVar10 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar10 / 2 + iVar10;
    }
    iVar12 = iVar6;
    if (iVar6 < iVar7) {
      iVar12 = iVar7;
    }
    if (iVar10 < iVar12) {
      uVar8 = FUN_1804b8110((longlong)iVar12 << 4);
      if (*(longlong *)(lVar3 + 0x58) != 0) {
        FUN_18063aed0(uVar8,*(longlong *)(lVar3 + 0x58),(longlong)*(int *)(lVar3 + 0x50) << 4);
        lVar5 = DAT_180bb8ae8;
        lVar4 = *(longlong *)(lVar3 + 0x58);
        if ((lVar4 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar11 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar11 != *piVar1) {
            iVar10 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar9 = (short)iVar10 + (short)(iVar10 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar9;
            piVar11 = (int *)(lVar5 + ((longlong)sVar9 + 0x533) * 8);
            *piVar11 = *piVar1;
            piVar11[1] = 0;
          }
          *(short *)((longlong)piVar11 + 6) = *(short *)((longlong)piVar11 + 6) + 1;
          piVar1 = (int *)(lVar5 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar4);
      }
      *(undefined8 *)(lVar3 + 0x58) = uVar8;
      *(int *)(lVar3 + 0x54) = iVar12;
    }
  }
  *(int *)(lVar3 + 0x50) = iVar6;
  FUN_1804d1710(lVar3,*(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                *(undefined8 *)(lVar3 + 0x58),iVar6);
  *(undefined8 *)(lVar3 + 0x94) = 0;
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  *(undefined8 *)(lVar3 + 0xb0) = 0;
  return;
}



