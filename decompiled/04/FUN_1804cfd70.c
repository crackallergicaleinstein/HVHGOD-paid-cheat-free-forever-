// FUN_1804cfd70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cfd70 */

void FUN_1804cfd70(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar6 + 8 + param_1[3]);
      if (iVar2 != -1) {
        lVar7 = (longlong)iVar2 * 0xb0 + param_1[1];
        FUN_180473ca0(lVar7 + 0xa0);
        FUN_180473ca0(lVar7 + 8);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 2));
  }
  FUN_1804aeee0(param_1 + 2);
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    *param_1 = 0;
    lVar7 = DAT_180bb8ae8;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar4 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar4 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar3 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar3;
        piVar4 = (int *)(lVar7 + ((longlong)sVar3 + 0x533) * 8);
        *piVar4 = *piVar1;
        piVar4[1] = 0;
      }
      *(short *)((longlong)piVar4 + 6) = *(short *)((longlong)piVar4 + 6) + 1;
      piVar1 = (int *)(lVar7 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar6);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}



