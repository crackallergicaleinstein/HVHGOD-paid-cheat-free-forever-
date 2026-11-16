// FUN_1804e5c10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e5c10 */

void FUN_1804e5c10(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  
  lVar3 = DAT_180bb8ae8;
  if (*(char *)(param_2 + 0x34) != '\0') {
    lVar2 = *(longlong *)(param_2 + 0x28);
    if ((lVar2 != 0) && (DAT_180bb8ae8 != 0)) {
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
  lVar3 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar2 = DAT_180bb8ae8;
  if (lVar3 != 0) {
    if (DAT_180bb8ae8 != 0) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar6 != *piVar1) {
        iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar2 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *piVar1;
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      piVar1 = (int *)(lVar2 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar3);
  }
  *(undefined8 *)(param_2 + 0x48) = 0;
  return;
}



