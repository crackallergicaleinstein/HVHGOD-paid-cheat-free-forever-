// FUN_18047e140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047e140 */

void FUN_18047e140(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  
  FUN_180473260();
  lVar5 = *(longlong *)(param_1 + 0x71c0);
  if (lVar5 != 0) {
    *(short *)(lVar5 + 0x5c) = *(short *)(lVar5 + 0x5c) + -1;
    lVar3 = DAT_180bb8ae8;
    plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x2770);
    for (plVar4 = plVar2; plVar4 < plVar2 + *(int *)(DAT_180bb8ae8 + 0x2768); plVar4 = plVar4 + 1) {
      if (*plVar4 == lVar5) {
        lVar5 = (longlong)plVar4 - (longlong)plVar2 >> 3;
        FUN_18063aed0(plVar2 + lVar5,plVar2 + lVar5 + 1,
                      (*(int *)(DAT_180bb8ae8 + 0x2768) - lVar5) * 8 + -8);
        *(int *)(lVar3 + 0x2768) = *(int *)(lVar3 + 0x2768) + -1;
        break;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x71c0);
    if (lVar5 != 0) {
      FUN_1804e26d0(lVar5);
      FUN_180473ca0(lVar5 + 0x48);
      lVar3 = DAT_180bb8ae8;
      if (DAT_180bb8ae8 != 0) {
        piVar1 = (int *)(DAT_180bb8ae8 + 4);
        piVar8 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
        if (*piVar8 != *piVar1) {
          iVar7 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
          sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
          *(short *)(DAT_180bb8ae8 + 0x2994) = sVar6;
          piVar8 = (int *)(lVar3 + ((longlong)sVar6 + 0x533) * 8);
          *piVar8 = *piVar1;
          piVar8[1] = 0;
        }
        *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
        piVar1 = (int *)(lVar3 + 0x2990);
        *piVar1 = *piVar1 + 1;
      }
      thunk_FUN_180621380(lVar5);
    }
    *(undefined8 *)(param_1 + 0x71c0) = 0;
  }
  return;
}



