// FUN_1804ebe90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ebe90 */

void FUN_1804ebe90(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  
  iVar7 = 0;
  if (0 < *param_1) {
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 2));
      if (lVar2 != 0) {
        FUN_1804e26d0(lVar2);
        FUN_180473ca0(lVar2 + 0x48);
        lVar3 = DAT_180bb8ae8;
        if (DAT_180bb8ae8 != 0) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8
                          );
          if (*piVar6 != *piVar1) {
            iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
            piVar6 = (int *)(lVar3 + 0x2998 + (longlong)sVar4 * 8);
            *piVar6 = *piVar1;
            *(undefined4 *)(lVar3 + 0x299c + (longlong)sVar4 * 8) = 0;
          }
          *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
          *(int *)(lVar3 + 0x2990) = *(int *)(lVar3 + 0x2990) + 1;
        }
        thunk_FUN_180621380(lVar2);
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *param_1);
  }
  lVar8 = *(longlong *)(param_1 + 2);
  if (lVar8 != 0) {
    param_1[0] = 0;
    lVar2 = DAT_180bb8ae8;
    param_1[1] = 0;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar7 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar2 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar2 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar8);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



