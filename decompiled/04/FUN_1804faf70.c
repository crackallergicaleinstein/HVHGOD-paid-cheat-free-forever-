// FUN_1804faf70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804faf70 */

void FUN_1804faf70(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar3 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar3 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar2);
  }
  FUN_180473ca0(param_1 + 0x48);
  FUN_180473ca0(param_1 + 0x38);
  FUN_180473ca0(param_1 + 0x28);
  return;
}



