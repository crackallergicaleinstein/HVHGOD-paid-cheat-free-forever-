// FUN_18057efe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057efe0 */

uint FUN_18057efe0(longlong param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x117c);
  lVar7 = (longlong)param_2 * 0x1c4 + *(longlong *)(param_1 + 0x1180);
  if ((uVar3 & 4) == 0) {
    return param_3;
  }
  uVar2 = -param_3;
  if ((int)-param_3 < 0) {
    uVar2 = param_3;
  }
  if (param_2 == 1) {
    uVar6 = uVar3 & 2;
  }
  else {
    uVar6 = uVar3 & 1;
  }
  if (uVar6 == 0) {
    if (*(int *)(lVar7 + 0x4c) != 0) {
      uVar3 = *(uint *)(lVar7 + 0x54);
      iVar5 = uVar3 - uVar2;
      if (-1 < (int)(uVar2 - uVar3)) {
        iVar5 = uVar2 - uVar3;
      }
      if (iVar5 < 0x28) {
        uVar2 = uVar3;
        if ((int)uVar3 < 0x30) {
          uVar2 = 0x30;
        }
        goto LAB_18057f180;
      }
    }
    if ((int)uVar2 < 0x36) {
      uVar2 = (int)(0x36 - uVar2) / 2 + uVar2;
    }
    else if ((int)uVar2 < 0xc0) {
      uVar3 = uVar2 & 0xffffffc0;
      uVar2 = uVar2 & 0x3f;
      if (9 < uVar2) {
        if (uVar2 < 0x16) {
          uVar2 = uVar3 + 10;
          goto LAB_18057f180;
        }
        if ((0x29 < uVar2) && (uVar2 < 0x36)) {
          uVar2 = uVar3 + 0x36;
          goto LAB_18057f180;
        }
      }
      uVar2 = uVar3 + uVar2;
    }
    goto LAB_18057f180;
  }
  iVar5 = 0x62;
  uVar6 = uVar2;
  if (*(uint *)(lVar7 + 0x4c) != 0) {
    puVar8 = (uint *)(lVar7 + 0x54);
    uVar9 = (ulonglong)*(uint *)(lVar7 + 0x4c);
    do {
      uVar1 = *puVar8;
      puVar8 = puVar8 + 3;
      iVar4 = uVar1 - uVar2;
      if (-1 < (int)(uVar2 - uVar1)) {
        iVar4 = uVar2 - uVar1;
      }
      if (iVar4 < iVar5) {
        uVar6 = uVar1;
        iVar5 = iVar4;
      }
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar1 = uVar6 + 0x20 & 0xffffffc0;
  if ((int)uVar2 < (int)uVar6) {
    if ((int)(uVar1 - 0x30) < (int)uVar2) {
      uVar2 = uVar6;
    }
    uVar6 = uVar2;
  }
  else if ((int)(uVar1 + 0x30) <= (int)uVar2) {
    uVar6 = uVar2;
  }
  if (param_2 == 1) {
    if ((int)uVar6 < 0x40) {
LAB_18057f157:
      uVar2 = 0x40;
      goto LAB_18057f180;
    }
    uVar3 = uVar6 + 0x10;
  }
  else {
    if ((uVar3 & 8) == 0) {
      if ((int)uVar6 < 0x30) {
        uVar2 = (int)(uVar6 + 0x40) >> 1;
        goto LAB_18057f180;
      }
      uVar3 = uVar6 + 0x16;
      if ((int)uVar6 < 0x80) goto LAB_18057f17d;
    }
    else if ((int)uVar6 < 0x40) goto LAB_18057f157;
    uVar3 = uVar6 + 0x20;
  }
LAB_18057f17d:
  uVar2 = uVar3 & 0xffffffc0;
LAB_18057f180:
  uVar3 = -uVar2;
  if (-1 < (int)param_3) {
    uVar3 = uVar2;
  }
  return uVar3;
}



