// FUN_1804d0f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d0f80 */

void FUN_1804d0f80(uint *param_1,uint param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar2 = param_1[1];
  if ((int)uVar2 < (int)param_2) {
    if (uVar2 == 0) {
      uVar2 = 8;
    }
    else {
      uVar2 = (int)uVar2 / 2 + uVar2;
    }
    uVar6 = param_2;
    if ((int)param_2 < (int)uVar2) {
      uVar6 = uVar2;
    }
    FUN_1804d0ea0(param_1,uVar6);
  }
  uVar2 = *param_1;
  uVar7 = (ulonglong)(int)uVar2;
  if ((int)uVar2 < (int)param_2) {
    uVar6 = uVar2;
    if (0x1f < param_2 - uVar2) {
      puVar1 = param_1 + 2;
      puVar9 = (uint *)(uVar7 + *(longlong *)puVar1);
      puVar4 = (uint *)((longlong)(int)(param_2 - 1) + *(longlong *)puVar1);
      if (((puVar1 < puVar9) || (puVar4 < puVar1)) && ((param_3 < puVar9 || (puVar4 < param_3)))) {
        uVar8 = param_2 - uVar2 & 0x8000001f;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
        }
        do {
          uVar6 = (int)uVar7 + 0x20;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < (int)(param_2 - uVar8));
        iVar3 = ((param_2 - uVar8) - uVar2) + 0x1f;
        FUN_18063ab10(puVar9,(char)*param_3,
                      (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 5);
      }
    }
    for (lVar5 = (longlong)(int)uVar6; lVar5 < (int)param_2; lVar5 = lVar5 + 1) {
      *(char *)(lVar5 + *(longlong *)(param_1 + 2)) = (char)*param_3;
    }
  }
  *param_1 = param_2;
  return;
}



