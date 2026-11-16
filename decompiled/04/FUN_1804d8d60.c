// FUN_1804d8d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d8d60 */

void FUN_1804d8d60(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x68);
    plVar2 = plVar4 + *(int *)(lVar3 + 0x60);
    for (plVar7 = plVar4; plVar7 < plVar2; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_1) {
        if (plVar7 < plVar2 + -1) {
          plVar4[(longlong)plVar7 - (longlong)plVar4 >> 3] = plVar2[-1];
        }
        *(int *)(lVar3 + 0x60) = *(int *)(lVar3 + 0x60) + -1;
        break;
      }
    }
  }
  *(longlong *)(param_1 + 0x38) = param_2;
  if (param_2 != 0) {
    iVar5 = *(int *)(param_2 + 100);
    piVar1 = (int *)(param_2 + 0x60);
    if (*(int *)(param_2 + 0x60) == iVar5) {
      iVar6 = *(int *)(param_2 + 0x60) + 1;
      if (iVar5 == 0) {
        iVar5 = 8;
      }
      else {
        iVar5 = iVar5 / 2 + iVar5;
      }
      if (iVar6 < iVar5) {
        iVar6 = iVar5;
      }
      FUN_1804d0a80(piVar1,iVar6);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x68) + (longlong)*piVar1 * 8) = param_1;
    *piVar1 = *piVar1 + 1;
  }
  return;
}



