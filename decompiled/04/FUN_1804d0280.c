// FUN_1804d0280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d0280 */

void FUN_1804d0280(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  iVar8 = 0;
  if (0 < *param_1) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 2));
      if (lVar1 != 0) {
        FUN_1804af060(lVar1);
        lVar2 = DAT_180bb8ae8;
        if (DAT_180bb8ae8 != 0) {
          piVar6 = (int *)(DAT_180bb8ae8 + 4);
          piVar5 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8
                          );
          if (*piVar5 != *piVar6) {
            iVar4 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar3;
            piVar5 = (int *)(lVar2 + 0x2998 + (longlong)sVar3 * 8);
            *piVar5 = *piVar6;
            *(undefined4 *)(lVar2 + 0x299c + (longlong)sVar3 * 8) = 0;
          }
          *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
          *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
        }
        thunk_FUN_180621380(lVar1);
      }
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar8 < *param_1);
  }
  lVar1 = DAT_180bb8ae8;
  lVar7 = *(longlong *)(param_1 + 2);
  if (lVar7 != 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    if (lVar1 != 0) {
      piVar6 = (int *)(lVar1 + 0x2998 + (longlong)*(short *)(lVar1 + 0x2994) * 8);
      if (*piVar6 != *(int *)(lVar1 + 4)) {
        iVar8 = *(short *)(lVar1 + 0x2994) + 1;
        sVar3 = (short)iVar8 + (short)(iVar8 / 6) * -6;
        *(short *)(lVar1 + 0x2994) = sVar3;
        piVar6 = (int *)(lVar1 + ((longlong)sVar3 + 0x533) * 8);
        *piVar6 = *(int *)(lVar1 + 4);
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar1 + 0x2990) = *(int *)(lVar1 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar7);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



