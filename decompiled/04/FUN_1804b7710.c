// FUN_1804b7710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7710 */

void FUN_1804b7710(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  int local_res8;
  int iStackX_c;
  
  lVar3 = DAT_180bb8ae8;
  FUN_1804aeee0(DAT_180bb8ae8 + 0x1fd8);
  lVar4 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(lVar3 + 0x1ff0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar3 + 0x1fe8) = 0;
    if (lVar4 != 0) {
      piVar7 = (int *)(lVar4 + 0x2998 + (longlong)*(short *)(lVar4 + 0x2994) * 8);
      if (*piVar7 != *(int *)(lVar4 + 4)) {
        iVar6 = *(short *)(lVar4 + 0x2994) + 1;
        sVar5 = (short)iVar6 + (short)(iVar6 / 6) * -6;
        *(short *)(lVar4 + 0x2994) = sVar5;
        piVar7 = (int *)(lVar4 + ((longlong)sVar5 + 0x533) * 8);
        *piVar7 = *(int *)(lVar4 + 4);
        piVar7[1] = 0;
      }
      *(short *)((longlong)piVar7 + 6) = *(short *)((longlong)piVar7 + 6) + 1;
      *(int *)(lVar4 + 0x2990) = *(int *)(lVar4 + 0x2990) + 1;
    }
    thunk_FUN_180621380(lVar2);
    *(undefined8 *)(lVar3 + 0x1ff0) = 0;
  }
  FUN_1804aeee0(lVar3 + 0x2568);
  *(undefined4 *)(lVar3 + 0x2578) = 0;
  *(undefined4 *)(lVar3 + 0x2480) = 0;
  FUN_1804cfca0(lVar3 + 0x2488);
  FUN_1804f3530();
  plVar8 = *(longlong **)(lVar3 + 0x11c8);
  plVar1 = plVar8 + *(int *)(lVar3 + 0x11c0);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    lVar2 = *plVar8;
    lVar3 = *(longlong *)(lVar2 + 0xa0);
    FUN_1804e6ae0(lVar2,1);
    lVar4 = *(longlong *)(lVar2 + 0x38);
    FUN_1804e75f0(&local_res8,lVar2);
    if (((*(int *)(lVar3 + 0x9c) != 0) || (local_res8 != *(int *)(lVar4 + 0x24))) ||
       (iStackX_c != *(int *)(lVar4 + 0x28))) {
      FUN_1804e6ef0(lVar2);
    }
  }
  return;
}



