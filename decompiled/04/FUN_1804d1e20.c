// FUN_1804d1e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d1e20 */

longlong * FUN_1804d1e20(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  iVar1 = (int)param_2[1];
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  uVar7 = 0;
  lVar6 = 2;
  iVar5 = iVar1;
  do {
    if (iVar5 < iVar2) {
      lVar4 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      bVar3 = *(byte *)(lVar4 + *param_2);
      *(int *)(param_2 + 1) = iVar5;
    }
    else {
      bVar3 = 0;
    }
    uVar7 = uVar7 << 8 | (uint)bVar3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  if (uVar7 != 0) {
    if (iVar5 < iVar2) {
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      uVar8 = (ulonglong)*(byte *)(lVar6 + *param_2);
    }
    else {
      uVar8 = 0;
    }
    iVar5 = (int)uVar8 * uVar7 + iVar5;
    if ((iVar2 < iVar5) || (iVar5 < 0)) {
      iVar5 = iVar2;
    }
    uVar7 = 0;
    *(int *)(param_2 + 1) = iVar5;
    if ((char)uVar8 != '\0') {
      do {
        if (iVar5 < iVar2) {
          lVar6 = (longlong)iVar5;
          iVar5 = iVar5 + 1;
          bVar3 = *(byte *)(lVar6 + *param_2);
          *(int *)(param_2 + 1) = iVar5;
        }
        else {
          bVar3 = 0;
        }
        uVar7 = uVar7 << 8 | (uint)bVar3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar5 = (uVar7 - 1) + iVar5;
    if ((iVar2 < iVar5) || (iVar5 < 0)) {
      iVar5 = iVar2;
    }
    *(int *)(param_2 + 1) = iVar5;
  }
  iVar5 = iVar5 - iVar1;
  *param_1 = 0;
  param_1[1] = 0;
  if ((((-1 < iVar1) && (-1 < iVar5)) && (iVar1 <= *(int *)((longlong)param_2 + 0xc))) &&
     (iVar5 <= *(int *)((longlong)param_2 + 0xc) - iVar1)) {
    *param_1 = (longlong)iVar1 + *param_2;
    *(int *)((longlong)param_1 + 0xc) = iVar5;
  }
  return param_1;
}



