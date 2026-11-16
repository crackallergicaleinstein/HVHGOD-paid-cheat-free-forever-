// FUN_1805bdd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bdd40 */

int FUN_1805bdd40(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x18);
  iVar4 = 0;
  uVar2 = uVar7 >> 1;
  uVar6 = *param_2 + 1;
  uVar5 = 0;
  if (uVar7 != 0) {
    do {
      uVar3 = *(uint *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 8);
      lVar1 = *(longlong *)(param_1 + 0x20) + (ulonglong)uVar2 * 8;
      if (uVar3 == uVar6) {
        iVar4 = *(int *)(lVar1 + 4);
        *param_2 = uVar6;
        return iVar4;
      }
      uVar3 = uVar3 & 0x7fffffff;
      if (uVar3 == uVar6) {
        iVar4 = *(int *)(lVar1 + 4);
LAB_1805bdd99:
        uVar7 = uVar2;
      }
      else {
        if (uVar6 <= uVar3) goto LAB_1805bdd99;
        uVar5 = (ulonglong)(uVar2 + 1);
      }
      uVar2 = uVar2 + (uVar6 - uVar3);
      uVar3 = (uint)uVar5;
      if ((uVar7 <= uVar2) || (uVar2 < uVar3)) {
        uVar2 = (uVar7 - uVar3 >> 1) + uVar3;
      }
    } while (uVar3 < uVar7);
    if (iVar4 != 0) {
      *param_2 = uVar6;
      return iVar4;
    }
  }
  if ((uint)uVar5 < *(uint *)(param_1 + 0x18)) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + uVar5 * 8);
    *param_2 = *(uint *)(*(longlong *)(param_1 + 0x20) + uVar5 * 8) & 0x7fffffff;
    return iVar4;
  }
  *param_2 = 0;
  return 0;
}



