// FUN_1804cfca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cfca0 */

void FUN_1804cfca0(int *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *param_1) {
    do {
      FUN_180473ca0((longlong)iVar6 * 0x58 + *(longlong *)(param_1 + 2));
      iVar6 = iVar6 + 1;
    } while (iVar6 < *param_1);
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 != 0) {
    param_1[0] = 0;
    lVar3 = DAT_180bb8ae8;
    param_1[1] = 0;
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar5 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar5 != *piVar1) {
        iVar6 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar5 = (int *)(lVar3 + ((longlong)sVar4 + 0x533) * 8);
        *piVar5 = *piVar1;
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      piVar1 = (int *)(lVar3 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar2);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}



