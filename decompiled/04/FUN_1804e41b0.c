// FUN_1804e41b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e41b0 */

void FUN_1804e41b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
  plVar1 = plVar4 + *(int *)(param_1 + 0x68);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar6 = *plVar4;
    iVar3 = *(int *)(lVar6 + 0x24);
    if (iVar3 < 0) {
      iVar3 = (iVar3 + 1 >> 1) + iVar3;
      iVar7 = 0;
      if (0 < iVar3) {
        iVar7 = iVar3;
      }
      FUN_1804d0a80(lVar6 + 0x20,iVar7);
    }
    *(undefined4 *)(lVar6 + 0x20) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x80);
  lVar5 = (longlong)*(int *)(param_1 + 0x78) * 0xa0 + lVar6;
  for (; lVar6 != lVar5; lVar6 = lVar6 + 0xa0) {
    lVar2 = *(longlong *)(lVar6 + 0x80);
    iVar3 = *(int *)(lVar2 + 0x24);
    if (*(int *)(lVar2 + 0x20) == iVar3) {
      iVar7 = *(int *)(lVar2 + 0x20) + 1;
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar7 < iVar3) {
        iVar7 = iVar3;
      }
      FUN_1804d0a80(lVar2 + 0x20,iVar7);
    }
    *(longlong *)(*(longlong *)(lVar2 + 0x28) + (longlong)*(int *)(lVar2 + 0x20) * 8) = lVar6;
    *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
  }
  return;
}



