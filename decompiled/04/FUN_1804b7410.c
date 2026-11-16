// FUN_1804b7410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7410 */

void FUN_1804b7410(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = DAT_180bb8ae8;
  lVar7 = *(longlong *)(param_1 + 8);
  if (lVar7 != 0) {
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar5 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar5 != *piVar1) {
        iVar4 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar3;
        piVar5 = (int *)(lVar2 + ((longlong)sVar3 + 0x533) * 8);
        *piVar5 = *piVar1;
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      piVar1 = (int *)(lVar2 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar7);
  }
  piVar1 = (int *)(param_1 + 0x2a8);
  iVar4 = 0;
  if (0 < *piVar1) {
    do {
      lVar7 = (longlong)iVar4 * 0x88 + *(longlong *)(param_1 + 0x2b0);
      FUN_1804e17d0(lVar7 + 0x70);
      FUN_180473ca0(lVar7 + 0x78);
      FUN_180473ca0(lVar7 + 0x60);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar1);
  }
  lVar7 = *(longlong *)(param_1 + 0x2b0);
  if (lVar7 != 0) {
    piVar1[0] = 0;
    lVar2 = DAT_180bb8ae8;
    piVar1[1] = 0;
    if (DAT_180bb8ae8 != 0) {
      piVar5 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar5) {
        iVar4 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar3;
        piVar6 = (int *)(lVar2 + ((longlong)sVar3 + 0x533) * 8);
        *piVar6 = *piVar5;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar5 = (int *)(lVar2 + 0x2990);
      *piVar5 = *piVar5 + 1;
    }
    thunk_FUN_180621380(lVar7);
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  FUN_1804d8c80(param_1 + 0x2d0);
  FUN_180473ca0(piVar1);
  FUN_180473ca0(param_1 + 0x298);
  FUN_180473ca0(param_1 + 0x208);
  FUN_180473ca0(param_1 + 0x1f8);
  FUN_180473ca0(param_1 + 0x1b0);
  FUN_180473ca0(param_1 + 0x108);
  return;
}



