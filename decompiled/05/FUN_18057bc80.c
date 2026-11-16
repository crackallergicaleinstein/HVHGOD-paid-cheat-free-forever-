// FUN_18057bc80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057bc80 */

void FUN_18057bc80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = *param_1;
  iVar2 = param_1[1];
  iVar6 = -iVar7;
  if (iVar7 < iVar2) {
    if (iVar6 < iVar2) {
      iVar5 = 0x5a0000;
      iVar3 = iVar2;
      iVar2 = iVar6;
    }
    else {
      iVar5 = -0xb40000;
      if (0 < iVar2) {
        iVar5 = 0xb40000;
      }
      iVar3 = iVar6;
      iVar2 = -iVar2;
    }
  }
  else if (iVar2 < iVar6) {
    iVar5 = -0x5a0000;
    iVar3 = -iVar2;
    iVar2 = iVar7;
  }
  else {
    iVar5 = 0;
    iVar3 = iVar7;
  }
  iVar7 = 1;
  piVar4 = &DAT_18066a4c0;
  iVar6 = 1;
  do {
    iVar1 = *piVar4;
    iVar8 = iVar7 + iVar2 >> ((byte)iVar6 & 0x1f);
    iVar9 = iVar7 + iVar3 >> ((byte)iVar6 & 0x1f);
    piVar4 = piVar4 + 1;
    if (iVar2 < 1) {
      iVar8 = -iVar8;
      iVar1 = -iVar1;
    }
    else {
      iVar9 = -iVar9;
    }
    iVar5 = iVar5 + iVar1;
    iVar3 = iVar3 + iVar8;
    iVar2 = iVar2 + iVar9;
    iVar7 = iVar7 * 2;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x17);
  *param_1 = iVar3;
  if (iVar5 < 0) {
    param_1[1] = -(8U - iVar5 & 0xfffffff0);
    return;
  }
  param_1[1] = iVar5 + 8U & 0xfffffff0;
  return;
}



