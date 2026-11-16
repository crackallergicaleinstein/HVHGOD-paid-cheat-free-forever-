// FUN_1804cfbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cfbc0 */

void FUN_1804cfbc0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  
  FUN_1804aeee0(param_1 + 2);
  lVar2 = DAT_180bb8ae8;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *param_1 = 0;
    if (lVar2 != 0) {
      piVar5 = (int *)(lVar2 + 0x2998 + (longlong)*(short *)(lVar2 + 0x2994) * 8);
      if (*piVar5 != *(int *)(lVar2 + 4)) {
        iVar4 = *(short *)(lVar2 + 0x2994) + 1;
        sVar3 = (short)iVar4 + (short)(iVar4 / 6) * -6;
        *(short *)(lVar2 + 0x2994) = sVar3;
        piVar5 = (int *)(lVar2 + ((longlong)sVar3 + 0x533) * 8);
        *piVar5 = *(int *)(lVar2 + 4);
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar1);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}



