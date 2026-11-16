// FUN_1804f13e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f13e0 */

void FUN_1804f13e0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  
  iVar11 = 0;
  cVar2 = *(char *)(param_1 + 0x242);
  if (cVar2 != '\0') {
    FUN_1804f11a0();
    iVar10 = 0;
    if (1 < *(short *)(param_1 + 0x204)) {
      iVar10 = (int)*(short *)(param_1 + 0x204);
    }
    iVar7 = *(int *)(param_1 + 0x1ec);
    if (iVar7 < iVar10) {
      if (iVar7 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar7 / 2 + iVar7;
      }
      iVar13 = iVar10;
      if (iVar10 < iVar3) {
        iVar13 = iVar3;
      }
      if (iVar7 < iVar13) {
        uVar4 = FUN_1804b8110((longlong)iVar13 * 0xc);
        if (*(longlong *)(param_1 + 0x1f0) != 0) {
          FUN_18063aed0(uVar4,*(longlong *)(param_1 + 0x1f0),
                        (longlong)*(int *)(param_1 + 0x1e8) * 0xc);
          lVar5 = DAT_180bb8ae8;
          lVar12 = *(longlong *)(param_1 + 0x1f0);
          if ((lVar12 != 0) && (DAT_180bb8ae8 != 0)) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar8 = (int *)(DAT_180bb8ae8 + 0x2998 +
                            (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
            if (*piVar8 != *piVar1) {
              iVar7 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar6;
              piVar8 = (int *)(lVar5 + ((longlong)sVar6 + 0x533) * 8);
              *piVar8 = *piVar1;
              piVar8[1] = 0;
            }
            *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
            piVar1 = (int *)(lVar5 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar12);
        }
        *(undefined8 *)(param_1 + 0x1f0) = uVar4;
        *(int *)(param_1 + 0x1ec) = iVar13;
      }
    }
    *(int *)(param_1 + 0x1e8) = iVar10;
    *(undefined1 *)(param_1 + 0x1e4) = 1;
    *(undefined1 *)(param_1 + 0x242) = 0;
  }
  if (*(short *)(param_1 + 0x204) == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + 0x1f8;
    if (*(short *)(param_1 + 0x204) != 1) {
      lVar12 = *(longlong *)(param_1 + 0x1f0);
    }
  }
  if (((cVar2 != '\0') && (lVar12 != 0)) && (0 < *(int *)(param_1 + 0x6c))) {
    do {
      lVar9 = (longlong)iVar11 * 0x78 + *(longlong *)(param_1 + 0x18);
      lVar5 = (longlong)*(short *)(lVar9 + 0x62);
      if (*(short *)(lVar9 + 0x62) != -1) {
        *(undefined4 *)(lVar12 + lVar5 * 0xc) = *(undefined4 *)(lVar9 + 0x38);
        *(short *)(lVar12 + 4 + lVar5 * 0xc) = (short)iVar11;
        *(undefined2 *)(lVar12 + 6 + lVar5 * 0xc) = *(undefined2 *)(lVar9 + 0x62);
        *(byte *)(lVar12 + 8 + lVar5 * 0xc) = *(byte *)(lVar9 + 0x74) & 3;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x6c));
  }
  *(int *)(param_1 + 0x1e0) = (int)*(short *)(param_1 + 0x204);
  *(longlong *)(param_1 + 0x1d8) = lVar12;
  return;
}



