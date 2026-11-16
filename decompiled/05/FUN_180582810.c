// FUN_180582810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180582810 */

int FUN_180582810(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  uVar7 = 0x40;
  if ((*(byte *)(param_1 + 0x117c) & 4) == 0) {
    if (((*(byte *)(param_2 + 0xc) & 1) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      uVar7 = 0x3b;
      if (param_5 == 1) {
        uVar7 = 0x3d;
      }
    }
    else {
      uVar7 = 0x37;
      if (param_5 != 1) {
        uVar7 = 0x31;
      }
    }
  }
  iVar1 = *(int *)(param_3 + 4);
  iVar2 = *(int *)(param_2 + 4);
  uVar3 = FUN_18057efe0(param_1,param_5,iVar1 - iVar2,*(undefined1 *)(param_2 + 0xc),
                        *(undefined1 *)(param_3 + 0xc));
  iVar11 = 0;
  uVar10 = ((iVar1 + iVar2) / 2 - (int)uVar3 / 2) + param_4;
  uVar4 = uVar10 & 0x3f;
  iVar8 = 0x40 - uVar4;
  uVar6 = uVar10 + uVar3 & 0x3f;
  if ((uVar4 != 0) && (uVar6 != 0)) {
    if ((int)uVar7 < (int)uVar3) {
      if ((0x3f < uVar7) ||
         ((((uVar4 < uVar7 && (iVar8 < (int)uVar7)) && (uVar6 < uVar7)) &&
          ((int)(0x40 - uVar6) < (int)uVar7)))) {
        uVar4 = uVar3 & 0x3f;
        if (uVar4 < 0x20) {
          if ((iVar8 <= (int)uVar4) || (uVar6 <= uVar4)) goto LAB_18058297d;
        }
        else {
          uVar4 = 0x40 - uVar7;
        }
        iVar11 = uVar7 - uVar6;
        iVar9 = -(uVar7 - iVar8);
        if ((int)(iVar8 - uVar4) < (int)(uVar7 - iVar8)) {
          iVar9 = iVar8 - uVar4;
        }
        if ((int)(uVar6 - uVar4) <= iVar11) {
          iVar11 = uVar4 - uVar6;
        }
        iVar8 = -iVar9;
        if (-iVar9 < 0) {
          iVar8 = iVar9;
        }
        iVar5 = -iVar11;
        if (-iVar11 < 0) {
          iVar5 = iVar11;
        }
        if (iVar8 <= iVar5) {
          iVar11 = iVar9;
        }
      }
    }
    else if ((int)uVar6 < (int)uVar3) {
      if ((int)uVar6 < iVar8) {
        iVar11 = -uVar6;
      }
      else {
        iVar11 = iVar8;
      }
    }
  }
LAB_18058297d:
  if ((*(byte *)(param_1 + 0x117c) & 4) == 0) {
    if (iVar11 < 0xf) {
      if (iVar11 < -0xe) {
        iVar11 = -0xe;
      }
    }
    else {
      iVar11 = 0xe;
    }
  }
  iVar8 = uVar10 + iVar11;
  iVar9 = iVar8 + uVar3;
  if (iVar1 <= iVar2) {
    iVar9 = iVar8;
    iVar8 = iVar8 + uVar3;
  }
  *(int *)(param_2 + 8) = iVar8;
  *(int *)(param_3 + 8) = iVar9;
  return iVar11;
}



