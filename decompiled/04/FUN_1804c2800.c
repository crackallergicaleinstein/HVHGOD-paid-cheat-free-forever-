// FUN_1804c2800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2800 */

void FUN_1804c2800(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  plVar1 = plVar2 + 0x21;
  plVar6 = plVar2;
  iVar3 = FUN_1804b0a90(param_1,0,*(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)*plVar1 * 4));
  if (*(int *)(*plVar6 + 0x1534) == iVar3) {
    FUN_1804cf810(iVar3,0xb,param_1);
  }
  iVar4 = *(int *)((longlong)plVar2 + 0x10c);
  if ((int)*plVar1 == iVar4) {
    iVar5 = (int)*plVar1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_1804d14d0(plVar1,iVar5);
  }
  *(int *)(plVar2[0x22] + (longlong)(int)*plVar1 * 4) = iVar3;
  *(int *)plVar1 = (int)*plVar1 + 1;
  return;
}



