// FUN_1804e0a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e0a80 */

void FUN_1804e0a80(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *param_1;
  piVar7 = *(int **)(param_1 + 2);
  do {
    if (iVar8 < 0) {
      return;
    }
    if (*piVar7 == 0) {
      plVar6 = *(longlong **)(param_1 + 8);
      plVar1 = plVar6 + param_1[10];
      if (plVar6 < plVar1) {
        lVar4 = *(longlong *)(piVar7 + 6);
        iVar2 = *(int *)(lVar4 + 4);
        do {
          iVar3 = *(int *)(*plVar6 + 4);
          if ((((iVar3 != iVar2) && (iVar3 != piVar7[1])) &&
              (iVar3 != *(int *)(*(longlong *)(piVar7 + 4) + 4))) &&
             (cVar5 = FUN_1804b07c0(lVar4 + 8,piVar7 + 2,*(longlong *)(piVar7 + 4) + 8,*plVar6 + 8),
             cVar5 != '\0')) goto LAB_1804e0b23;
          plVar6 = plVar6 + 1;
        } while (plVar6 < plVar1);
      }
      *piVar7 = 1;
      *(int **)(*(longlong *)(param_1 + 4) + (longlong)param_1[6] * 8) = piVar7;
      param_1[6] = param_1[6] + 1;
    }
LAB_1804e0b23:
    iVar8 = iVar8 + -1;
    piVar7 = *(int **)(piVar7 + 4);
  } while( true );
}



