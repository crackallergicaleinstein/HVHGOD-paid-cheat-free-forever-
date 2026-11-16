// FUN_1804e75f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e75f0 */

int * FUN_1804e75f0(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  uVar8 = (int)(param_2[3] - 1) >> 1 | param_2[3] - 1;
  lVar3 = *(longlong *)(param_2 + 0x28);
  uVar8 = (int)uVar8 >> 2 | uVar8;
  uVar8 = (int)uVar8 >> 4 | uVar8;
  uVar8 = (int)uVar8 >> 8 | uVar8;
  uVar8 = (int)uVar8 >> 0x10 | uVar8;
  uVar7 = (int)(param_2[4] - 1) >> 1 | param_2[4] - 1;
  iVar1 = uVar8 + 1;
  uVar7 = (int)uVar7 >> 2 | uVar7;
  uVar7 = (int)uVar7 >> 4 | uVar7;
  uVar7 = (int)uVar7 >> 8 | uVar7;
  uVar7 = (int)uVar7 >> 0x10 | uVar7;
  iVar5 = uVar7 + 1;
  if (((lVar3 == 0) || (*(longlong *)(param_2 + 0xe) == 0)) ||
     (*(int *)(*(longlong *)(param_2 + 0xe) + 4) == 4)) {
    *param_1 = iVar1;
  }
  else {
    uVar4 = *(int *)(lVar3 + 0xa8) - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar4 = (int)uVar4 >> 0x10 | uVar4;
    if (iVar1 <= (int)(uVar4 + 1)) {
      uVar8 = uVar4;
    }
    uVar4 = *(int *)(lVar3 + 0xac) - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    iVar1 = uVar8 + 1;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar4 = (int)uVar4 >> 0x10 | uVar4;
    if (iVar5 <= (int)(uVar4 + 1)) {
      uVar7 = uVar4;
    }
    iVar9 = *(int *)(lVar3 + 0x98) - *(int *)(lVar3 + 0xa0);
    auVar11._0_4_ = (float)iVar9;
    auVar11._4_12_ = SUB1612(ZEXT816(0),4);
    iVar2 = uVar7 + 1;
    if (auVar11._0_4_ < 0.0) {
      fVar10 = (float)FUN_18061e150(auVar11._0_8_);
    }
    else {
      fVar10 = SQRT(auVar11._0_4_);
    }
    uVar4 = (int)((int)fVar10 - 1U) >> 1 | (int)fVar10 - 1U;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar4 = (int)uVar4 >> 0x10 | uVar4;
    if (iVar1 < iVar2) {
      if ((int)(uVar4 + 1) <= iVar2) {
        uVar4 = uVar7;
      }
      if ((*param_2 & 1) == 0) {
        uVar4 = (int)uVar4 >> 1 | uVar4;
        uVar4 = (int)uVar4 >> 2 | uVar4;
        uVar4 = (int)uVar4 >> 4 | uVar4;
        uVar4 = (int)uVar4 >> 8 | uVar4;
        uVar4 = (int)uVar4 >> 0x10 | uVar4;
      }
      iVar5 = uVar4 + 1;
      iVar6 = (iVar9 + -1 + iVar5) / iVar5;
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
    }
    else {
      if ((int)(uVar4 + 1) <= iVar1) {
        uVar4 = uVar8;
      }
      iVar6 = uVar4 + 1;
      iVar5 = (iVar9 + -1 + iVar6) / iVar6;
      if (iVar5 <= iVar2) {
        iVar5 = iVar2;
      }
      if ((*param_2 & 1) == 0) {
        uVar8 = (int)(iVar5 - 1U) >> 1 | iVar5 - 1U;
        uVar8 = (int)uVar8 >> 2 | uVar8;
        uVar8 = (int)uVar8 >> 4 | uVar8;
        uVar8 = (int)uVar8 >> 8 | uVar8;
        iVar5 = ((int)uVar8 >> 0x10 | uVar8) + 1;
      }
    }
    *param_1 = iVar6;
  }
  param_1[1] = iVar5;
  return param_1;
}



