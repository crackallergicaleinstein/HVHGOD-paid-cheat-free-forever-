// FUN_1804cfeb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cfeb0 */

void FUN_1804cfeb0(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar6 + 8 + param_1[3]);
      if (iVar1 != -1) {
        FUN_1804d1170((longlong)iVar1 * 600 + param_1[1]);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar5 < *(int *)(param_1 + 2));
  }
  FUN_1804aeee0(param_1 + 2);
  lVar2 = DAT_180bb8ae8;
  lVar6 = param_1[1];
  if (lVar6 != 0) {
    *param_1 = 0;
    if (lVar2 != 0) {
      piVar4 = (int *)(lVar2 + 0x2998 + (longlong)*(short *)(lVar2 + 0x2994) * 8);
      if (*piVar4 != *(int *)(lVar2 + 4)) {
        iVar5 = *(short *)(lVar2 + 0x2994) + 1;
        sVar3 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(lVar2 + 0x2994) = sVar3;
        piVar4 = (int *)(lVar2 + ((longlong)sVar3 + 0x533) * 8);
        *piVar4 = *(int *)(lVar2 + 4);
        piVar4[1] = 0;
      }
      *(short *)((longlong)piVar4 + 6) = *(short *)((longlong)piVar4 + 6) + 1;
      *(int *)(lVar2 + 0x2990) = *(int *)(lVar2 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar6);
    param_1[1] = 0;
  }
  param_1[4] = 0;
  return;
}



