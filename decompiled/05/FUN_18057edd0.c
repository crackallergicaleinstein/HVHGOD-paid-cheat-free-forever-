// FUN_18057edd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057edd0 */

undefined8 FUN_18057edd0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  
  iVar7 = -0x80000000;
  iVar6 = 0x7fffffff;
  iVar10 = -0x80000000;
  iVar8 = 0x7fffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x2c)) {
    lVar9 = 0;
    plVar11 = *(longlong **)(param_1 + 0x30);
    do {
      lVar2 = *plVar11;
      lVar4 = lVar2;
      iVar5 = iVar7;
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
      while (iVar7 = iVar5, lVar3 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        iVar1 = *(int *)(lVar4 + 0x10);
        iVar5 = iVar7;
        lVar3 = lVar4;
        if (lVar9 == param_2) {
          iVar5 = iVar1;
          if (iVar6 <= iVar1) {
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          iVar5 = iVar1;
          if (iVar1 <= iVar7) {
            iVar5 = iVar7;
          }
        }
        else {
          iVar7 = iVar1;
          if (iVar8 <= iVar1) {
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          if (iVar10 < iVar1) {
            iVar10 = iVar1;
          }
        }
      }
      lVar9 = lVar9 + 1;
      plVar11 = plVar11 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x2c));
    if ((((iVar7 < iVar8) || (iVar10 < iVar7)) && ((iVar6 < iVar8 || (iVar10 < iVar6)))) &&
       ((iVar7 < iVar10 || (iVar8 < iVar6)))) {
      return 0;
    }
  }
  return 1;
}



