// FUN_180580d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180580d90 */

void FUN_180580d90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      iVar5 = -0x80000000;
      iVar10 = 0x7fffffff;
      lVar2 = *(longlong *)(lVar8 + *(longlong *)(param_1 + 0x30));
      if (lVar2 != 0) {
        lVar4 = lVar2;
        iVar1 = iVar5;
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x20);
        while (iVar5 = iVar1, lVar3 != lVar2) {
          iVar1 = *(int *)(lVar4 + 0x14);
          lVar4 = *(longlong *)(lVar4 + 0x20);
          iVar6 = iVar1;
          if (iVar10 <= iVar1) {
            iVar6 = iVar10;
          }
          iVar10 = iVar6;
          lVar3 = lVar4;
          if (iVar1 <= iVar5) {
            iVar1 = iVar5;
          }
        }
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 8;
      *(int *)(lVar7 + *(longlong *)(param_1 + 0x38)) = iVar10;
      *(int *)(lVar7 + *(longlong *)(param_1 + 0x40)) = iVar5;
      lVar7 = lVar7 + 4;
    } while (iVar9 < *(int *)(param_1 + 0x2c));
  }
  return;
}



