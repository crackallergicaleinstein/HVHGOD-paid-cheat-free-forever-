// FUN_1804e2790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2790 */

void FUN_1804e2790(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  short sVar4;
  int *piVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if ((DAT_180bb8ae8 != 0) && ((*(uint *)(DAT_180bb8ae8 + 0x28cc) & 0x100) != 0)) {
    FUN_1804cf3e0("[font] ImFontAtlas::ClearFonts()\n");
  }
  puVar8 = *(undefined8 **)(param_1 + 0x70);
  puVar1 = puVar8 + *(int *)(param_1 + 0x68);
  for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
    FUN_1804e3db0(param_1,*puVar8,0);
  }
  FUN_1804e7bc0(param_1);
  FUN_1804e2900(param_1);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar9 = 0;
    do {
      FUN_1804eb800(*(undefined8 *)(lVar9 + *(longlong *)(param_1 + 0x70)));
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x68));
  }
  lVar3 = DAT_180bb8ae8;
  lVar9 = *(longlong *)(param_1 + 0x70);
  if (lVar9 != 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (lVar3 != 0) {
      piVar5 = (int *)(lVar3 + 0x2998 + (longlong)*(short *)(lVar3 + 0x2994) * 8);
      if (*piVar5 != *(int *)(lVar3 + 4)) {
        iVar7 = *(short *)(lVar3 + 0x2994) + 1;
        sVar4 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(lVar3 + 0x2994) = sVar4;
        piVar5 = (int *)(lVar3 + ((longlong)sVar4 + 0x533) * 8);
        *piVar5 = *(int *)(lVar3 + 4);
        piVar5[1] = 0;
      }
      *(short *)((longlong)piVar5 + 6) = *(short *)((longlong)piVar5 + 6) + 1;
      *(int *)(lVar3 + 0x2990) = *(int *)(lVar3 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar9);
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  plVar6 = *(longlong **)(param_1 + 0x98);
  plVar2 = plVar6 + *(int *)(param_1 + 0x90);
  for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
    lVar9 = *plVar6;
    if (*(longlong *)(lVar9 + 0x18) == param_1) {
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
    }
  }
  return;
}



