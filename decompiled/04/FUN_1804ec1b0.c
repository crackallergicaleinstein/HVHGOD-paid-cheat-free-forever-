// FUN_1804ec1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ec1b0 */

void FUN_1804ec1b0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  iVar4 = (int)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 4) >> 0x1f & 0x1fU)) >> 5;
  lVar11 = (longlong)iVar4;
  iVar5 = (int)(uVar12 + ((int)(param_2 + 0x1fU) >> 0x1f & 0x1fU)) >> 5;
  if (iVar4 < iVar5) {
    iVar4 = *(int *)(param_1 + 0xc);
    if (iVar4 < iVar5) {
      if (iVar4 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar4 / 2 + iVar4;
      }
      iVar10 = iVar5;
      if (iVar5 < iVar6) {
        iVar10 = iVar6;
      }
      if (iVar4 < iVar10) {
        uVar7 = FUN_1804b8110((longlong)iVar10 << 3);
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_18063aed0(uVar7,*(longlong *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) << 3);
          lVar2 = DAT_180bb8ae8;
          lVar3 = *(longlong *)(param_1 + 0x10);
          if ((lVar3 != 0) && (DAT_180bb8ae8 != 0)) {
            piVar1 = (int *)(DAT_180bb8ae8 + 4);
            piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 +
                            (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
            if (*piVar9 != *piVar1) {
              iVar4 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
              sVar8 = (short)iVar4 + (short)(iVar4 / 6) * -6;
              *(short *)(DAT_180bb8ae8 + 0x2994) = sVar8;
              piVar9 = (int *)(lVar2 + ((longlong)sVar8 + 0x533) * 8);
              *piVar9 = *piVar1;
              piVar9[1] = 0;
            }
            *(short *)((longlong)piVar9 + 6) = *(short *)((longlong)piVar9 + 6) + 1;
            piVar1 = (int *)(lVar2 + 0x2990);
            *piVar1 = *piVar1 + 1;
          }
          thunk_FUN_180621380(lVar3);
        }
        *(undefined8 *)(param_1 + 0x10) = uVar7;
        *(int *)(param_1 + 0xc) = iVar10;
      }
    }
    *(int *)(param_1 + 8) = iVar5;
    for (; lVar11 < iVar5; lVar11 = lVar11 + 1) {
      uVar7 = _malloc_base(0xd00);
      lVar3 = DAT_180bb8ae8;
      if (DAT_180bb8ae8 != 0) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar9 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar9 != *piVar1) {
          iVar4 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          lVar2 = DAT_180bb8ae8 + 0x2998;
          sVar8 = (short)iVar4 + (short)(iVar4 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar8;
          piVar9 = (int *)(lVar2 + (longlong)sVar8 * 8);
          *piVar9 = *piVar1;
          *(undefined4 *)(lVar3 + 0x299c + (longlong)sVar8 * 8) = 0;
        }
        *(short *)(piVar9 + 1) = (short)piVar9[1] + 1;
        piVar1 = (int *)(lVar3 + 0x298c);
        *piVar1 = *piVar1 + 1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar11 * 8) = uVar7;
    }
    *(uint *)(param_1 + 4) = uVar12;
  }
  return;
}



