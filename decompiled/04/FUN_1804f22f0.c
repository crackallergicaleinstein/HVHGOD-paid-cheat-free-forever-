// FUN_1804f22f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f22f0 */

int * FUN_1804f22f0(int param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  lVar2 = DAT_180bb8ae8;
  lVar8 = *(longlong *)(DAT_180bb8ae8 + 0x27b8);
  piVar1 = (int *)0x0;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 4);
  }
  do {
    if (piVar1 == (int *)0x0) {
LAB_1804f2372:
      piVar1 = (int *)(lVar2 + 0x27b0);
      iVar4 = *(int *)(lVar2 + 0x27b4);
      iVar6 = param_2 * 0x10 + 0x18;
      lVar8 = (longlong)*piVar1;
      iVar7 = iVar6 + *piVar1;
      if (iVar4 < iVar7) {
        if (iVar4 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar4 / 2 + iVar4;
        }
        iVar3 = iVar7;
        if (iVar7 < iVar4) {
          iVar3 = iVar4;
        }
        FUN_1804d0ea0(piVar1,iVar3);
      }
      *piVar1 = iVar7;
      *(int *)(lVar8 + *(longlong *)(lVar2 + 0x27b8)) = iVar6;
      lVar2 = *(longlong *)(lVar2 + 0x27b8);
      FUN_1804f2190(lVar2 + 4 + lVar8,param_1,param_2,param_2);
      return (int *)(lVar8 + 4 + lVar2);
    }
    if (*piVar1 == param_1) {
      if (param_2 <= *(short *)((longlong)piVar1 + 0xe)) {
        FUN_1804f2190(piVar1,param_1,param_2,(int)*(short *)((longlong)piVar1 + 0xe));
        return piVar1;
      }
      *piVar1 = 0;
      goto LAB_1804f2372;
    }
    piVar5 = (int *)((longlong)piVar1[-1] + (longlong)piVar1);
    piVar1 = (int *)0x0;
    if (piVar5 != (int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x27b0) + 4 + lVar8)) {
      piVar1 = piVar5;
    }
  } while( true );
}



