// FUN_1804ebc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ebc10 */

void FUN_1804ebc10(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar3 = param_1[1];
  if ((int)uVar3 < (int)param_2) {
    if (uVar3 == 0) {
      uVar3 = 8;
    }
    else {
      uVar3 = (int)uVar3 / 2 + uVar3;
    }
    uVar8 = param_2;
    if ((int)param_2 < (int)uVar3) {
      uVar8 = uVar3;
    }
    FUN_1804d14d0(param_1,uVar8);
  }
  uVar3 = *param_1;
  uVar9 = (ulonglong)(int)uVar3;
  if ((int)param_2 <= (int)uVar3) {
    *param_1 = param_2;
    return;
  }
  uVar8 = uVar3;
  if (7 < param_2 - uVar3) {
    uVar2 = *param_3;
    puVar7 = (uint *)(*(longlong *)(param_1 + 2) + uVar9 * 4);
    puVar1 = (uint *)(*(longlong *)(param_1 + 2) + (longlong)(int)(param_2 - 1) * 4);
    if (((param_1 + 2 < puVar7) || (puVar1 < param_1 + 2)) &&
       ((param_3 < puVar7 || (puVar1 < param_3)))) {
      uVar6 = param_2 - uVar3 & 0x80000007;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
      }
      do {
        uVar8 = (int)uVar9 + 8;
        uVar9 = (ulonglong)uVar8;
      } while ((int)uVar8 < (int)(param_2 - uVar6));
      iVar4 = ((param_2 - uVar6) - uVar3) + 7;
      for (lVar5 = ((longlong)((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3) & 0x7ffffffffffffffU) << 3;
          lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = uVar2;
        puVar7 = puVar7 + 1;
      }
    }
  }
  for (lVar5 = (longlong)(int)uVar8; lVar5 < (int)param_2; lVar5 = lVar5 + 1) {
    *(uint *)(*(longlong *)(param_1 + 2) + lVar5 * 4) = *param_3;
  }
  *param_1 = param_2;
  return;
}



