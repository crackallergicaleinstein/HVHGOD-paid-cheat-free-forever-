// FUN_180581390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180581390 */

int FUN_180581390(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar7 = 0;
  iVar6 = -0x80000000;
  if (iVar1 < 3) {
    iVar7 = 0;
  }
  else {
    iVar3 = FUN_1805812d0();
    iVar4 = 0;
    lVar5 = 0;
    do {
      if (((lVar5 != iVar3) &&
          (iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar5 * 4), iVar6 < iVar2)) &&
         (*(int *)(*(longlong *)(param_1 + 0x38) + lVar5 * 4) <
          *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 4))) {
        iVar6 = iVar2;
        iVar7 = iVar4;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar7;
}



