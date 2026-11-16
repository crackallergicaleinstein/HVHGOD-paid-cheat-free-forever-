// FUN_1804fae00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fae00 */

void FUN_1804fae00(longlong param_1,longlong param_2,int param_3,uint param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar5 = (longlong)(int)param_4;
  plVar2 = (longlong *)FUN_1804fa9e0(param_2 + 0x20,param_3,param_4,param_5);
  if (plVar2 != (longlong *)0x0) {
    iVar4 = 0;
    if ((0 < (int)param_4) && (0x1f < param_4)) {
      plVar1 = (longlong *)(param_1 + 0x20);
      plVar7 = (longlong *)((longlong)param_3 + *plVar1);
      plVar6 = (longlong *)(lVar5 + -1 + (longlong)plVar2);
      if ((((longlong *)((longlong)(int)((param_4 - 1) + param_3) + *plVar1) < plVar2) ||
          (plVar6 < plVar7)) && ((plVar1 < plVar2 || (plVar6 < plVar1)))) {
        FUN_18063aed0(plVar2,plVar7,lVar5);
        do {
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)param_4);
      }
    }
    for (lVar3 = (longlong)iVar4; lVar3 < lVar5; lVar3 = lVar3 + 1) {
      *(undefined1 *)((longlong)plVar2 + lVar3) =
           *(undefined1 *)(param_3 + lVar3 + *(longlong *)(param_1 + 0x20));
    }
  }
  return;
}



