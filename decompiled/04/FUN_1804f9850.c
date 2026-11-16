// FUN_1804f9850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f9850 */

void FUN_1804f9850(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = (longlong)(int)param_4;
  lVar5 = (longlong)param_3;
  plVar2 = (longlong *)FUN_1804fa9e0(param_2 + 0x20,param_3,param_4,0);
  if (plVar2 != (longlong *)0x0) {
    iVar4 = 0;
    if ((0 < (int)param_4) && (0x1f < param_4)) {
      plVar1 = (longlong *)(param_1 + 0x20);
      plVar7 = (longlong *)(lVar6 + -1 + (longlong)plVar2);
      if ((((longlong *)((longlong)(int)((param_4 - 1) + param_3) + *plVar1) < plVar2) ||
          (plVar7 < (longlong *)(lVar5 + *plVar1))) && ((plVar1 < plVar2 || (plVar7 < plVar1)))) {
        FUN_18063aed0(plVar2,(longlong *)(lVar5 + *plVar1),lVar6);
        do {
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_4);
      }
    }
    for (lVar3 = (longlong)iVar4; lVar3 < lVar6; lVar3 = lVar3 + 1) {
      *(undefined1 *)((longlong)plVar2 + lVar3) =
           *(undefined1 *)(lVar3 + lVar5 + *(longlong *)(param_1 + 0x20));
    }
  }
  lVar5 = lVar5 + *(longlong *)(param_1 + 0x30);
  FUN_18063aed0(lVar5,lVar5 + lVar6,
                (longlong)(int)(((*(int *)(param_1 + 0x18) - param_3) - param_4) + 1));
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - param_4;
  *(undefined2 *)(param_1 + 0x73) = 0x101;
  *(undefined1 *)(param_2 + 0x16) = 0;
  return;
}



