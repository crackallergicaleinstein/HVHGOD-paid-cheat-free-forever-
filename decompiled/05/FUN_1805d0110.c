// FUN_1805d0110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d0110 */

void FUN_1805d0110(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar8 = *(int *)(param_1 + 0x1c);
  iVar14 = param_3[1] * 4;
  iVar15 = param_2[1] * 4;
  iVar2 = iVar15 >> 8;
  if ((((iVar8 <= iVar1 >> 8) && (iVar8 <= iVar2)) && (iVar8 <= iVar14 >> 8)) ||
     (((iVar8 = *(int *)(param_1 + 0x18), iVar1 >> 8 < iVar8 && (iVar2 < iVar8)) &&
      (iVar14 >> 8 < iVar8)))) {
    *(int *)(param_1 + 0x48) = *param_3 * 4;
    *(int *)(param_1 + 0x4c) = iVar14;
    return;
  }
  iVar8 = *param_2 * 4 - *(int *)(param_1 + 0x48);
  iVar15 = iVar15 - iVar1;
  uVar16 = (*param_3 * 4 - iVar8) + *param_2 * -4;
  uVar17 = (iVar14 - iVar15) + param_2[1] * -4;
  uVar3 = -uVar16;
  if ((int)-uVar16 < 0) {
    uVar3 = uVar16;
  }
  uVar6 = -uVar17;
  if ((int)-uVar17 < 0) {
    uVar6 = uVar17;
  }
  if ((int)uVar3 < (int)uVar6) {
    uVar3 = uVar6;
  }
  if ((int)uVar3 < 0x41) {
    FUN_1805d0530(param_1);
  }
  else {
    bVar13 = 0x10;
    do {
      bVar5 = bVar13;
      uVar3 = uVar3 >> 2;
      bVar13 = bVar5 - 1;
    } while (0x40 < uVar3);
    uVar3 = 0x10000 >> (bVar13 & 0x1f);
    lVar7 = (longlong)(int)uVar16 << (bVar13 * '\x02' & 0x3f);
    lVar4 = (longlong)(int)uVar17 << (bVar13 * '\x02' & 0x3f);
    bVar5 = bVar5 + 0x10;
    lVar9 = ((longlong)iVar8 << (bVar5 & 0x3f)) + lVar7;
    lVar11 = (longlong)*(int *)(param_1 + 0x48) << 0x20;
    lVar12 = ((longlong)iVar15 << (bVar5 & 0x3f)) + lVar4;
    lVar10 = (longlong)iVar1 << 0x20;
    do {
      lVar11 = lVar11 + lVar9;
      lVar10 = lVar10 + lVar12;
      lVar9 = lVar9 + lVar7 * 2;
      lVar12 = lVar12 + lVar4 * 2;
      FUN_1805d0530(param_1,lVar11 >> 0x20,lVar10 >> 0x20);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



