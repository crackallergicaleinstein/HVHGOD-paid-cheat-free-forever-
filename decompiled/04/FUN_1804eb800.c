// FUN_1804eb800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804eb800 */

void FUN_1804eb800(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[1] != 0) {
      FUN_1804e6a30(param_1[1],param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x34) = 0;
    *param_1 = 0;
    FUN_180473ca0(param_1 + 7);
    FUN_180473ca0(param_1 + 4);
    lVar2 = DAT_180bb8ae8;
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
    thunk_FUN_180621380(param_1);
  }
  return;
}



