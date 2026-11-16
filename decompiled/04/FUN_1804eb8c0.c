// FUN_1804eb8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804eb8c0 */

void FUN_1804eb8c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  plVar1 = plVar7 + *(int *)(param_1 + 8);
  lVar3 = DAT_180bb8ae8;
  for (; DAT_180bb8ae8 = lVar3, plVar7 != plVar1; plVar7 = plVar7 + 1) {
    lVar2 = *plVar7;
    if ((lVar2 != 0) && (lVar3 != 0)) {
      piVar6 = (int *)(lVar3 + 0x2998 + (longlong)*(short *)(lVar3 + 0x2994) * 8);
      if (*piVar6 != *(int *)(lVar3 + 4)) {
        iVar5 = *(short *)(lVar3 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(lVar3 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar3 + 0x2998 + (longlong)sVar4 * 8);
        *piVar6 = *(int *)(lVar3 + 4);
        *(undefined4 *)(lVar3 + 0x299c + (longlong)sVar4 * 8) = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar3 + 0x2990) = *(int *)(lVar3 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar2);
    lVar3 = DAT_180bb8ae8;
  }
  FUN_180473ca0((int *)(param_1 + 8));
  return;
}



