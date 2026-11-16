// FUN_1804e2900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2900 */

void FUN_1804e2900(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  puVar1 = puVar7 + *(int *)(param_1 + 0x68);
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    FUN_1804e5a80(param_1,*puVar7);
  }
  lVar8 = *(longlong *)(param_1 + 0x80);
  lVar9 = (longlong)*(int *)(param_1 + 0x78) * 0xa0 + lVar8;
  for (; lVar8 != lVar9; lVar8 = lVar8 + 0xa0) {
    FUN_1804e5c10();
  }
  plVar10 = *(longlong **)(param_1 + 0x70);
  plVar2 = plVar10 + *(int *)(param_1 + 0x68);
  lVar8 = DAT_180bb8ae8;
  for (; DAT_180bb8ae8 = lVar8, plVar10 != plVar2; plVar10 = plVar10 + 1) {
    lVar9 = *plVar10;
    lVar3 = *(longlong *)(lVar9 + 0x28);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar9 + 0x20) = 0;
      if (lVar8 != 0) {
        piVar6 = (int *)(lVar8 + 0x2998 + (longlong)*(short *)(lVar8 + 0x2994) * 8);
        if (*piVar6 != *(int *)(lVar8 + 4)) {
          iVar5 = *(short *)(lVar8 + 0x2994) + 1;
          sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
          *(short *)(lVar8 + 0x2994) = sVar4;
          piVar6 = (int *)(lVar8 + 0x2998 + (longlong)sVar4 * 8);
          *piVar6 = *(int *)(lVar8 + 4);
          *(undefined4 *)(lVar8 + 0x299c + (longlong)sVar4 * 8) = 0;
        }
        *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
        *(int *)(lVar8 + 0x2990) = *(int *)(lVar8 + 0x2990) + 1;
      }
      thunk_FUN_180621380(lVar3);
      *(undefined8 *)(lVar9 + 0x28) = 0;
    }
    *(uint *)(lVar9 + 0x10) = *(uint *)(lVar9 + 0x10) | 4;
    lVar8 = DAT_180bb8ae8;
  }
  lVar9 = *(longlong *)(param_1 + 0x80);
  if (lVar9 != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (lVar8 != 0) {
      piVar6 = (int *)(lVar8 + 0x2998 + (longlong)*(short *)(lVar8 + 0x2994) * 8);
      if (*piVar6 != *(int *)(lVar8 + 4)) {
        iVar5 = *(short *)(lVar8 + 0x2994) + 1;
        sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
        *(short *)(lVar8 + 0x2994) = sVar4;
        piVar6 = (int *)(lVar8 + ((longlong)sVar4 + 0x533) * 8);
        *piVar6 = *(int *)(lVar8 + 4);
        piVar6[1] = 0;
      }
      *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
      *(int *)(lVar8 + 0x2990) = *(int *)(lVar8 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar9);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



