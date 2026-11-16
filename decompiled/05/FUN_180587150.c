// FUN_180587150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180587150 */

void FUN_180587150(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      iVar2 = *(int *)(lVar7 + *(longlong *)(param_1 + 0x38));
      if (((iVar2 < *(int *)(lVar7 + *(longlong *)(param_1 + 0x40))) && (param_2 < iVar2)) &&
         (lVar3 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x30)), lVar4 = lVar3, lVar3 != 0))
      {
        do {
          *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + param_3;
          plVar1 = (longlong *)(lVar4 + 0x20);
          lVar4 = *plVar1;
        } while (*plVar1 != lVar3);
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 4;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(param_1 + 0x2c));
  }
  return;
}



