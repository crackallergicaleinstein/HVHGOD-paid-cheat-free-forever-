// FUN_1805ecf40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ecf40 */

void FUN_1805ecf40(ulonglong *param_1,longlong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  ulonglong uVar15;
  
  puVar13 = (ushort *)param_2[0xb];
  puVar4 = (ushort *)param_2[0xc];
  uVar8 = (ulonglong)*(byte *)(param_2[4] * 4 + 2 + param_2[5]);
  if (uVar8 == 0) {
    uVar9 = param_2[10];
  }
  else {
    uVar9 = param_1[2];
    if (uVar8 == 0x3f) {
      puVar12 = (ushort *)((longlong)puVar13 + 1);
      if ((byte)*puVar13 == 0xff) {
        puVar14 = (ushort *)((longlong)puVar13 + 3);
        if (puVar14 <= puVar4) {
          uVar2 = *puVar12;
          uVar8 = (ulonglong)uVar2;
          if (((uVar2 & 1) != 0) && (puVar14 < puVar4)) {
            bVar1 = *(byte *)puVar14;
            puVar14 = puVar13 + 2;
            uVar8 = (ulonglong)CONCAT12(bVar1,uVar2);
          }
          uVar8 = uVar8 >> 1;
          puVar12 = puVar14;
        }
      }
      else {
        uVar8 = (ulonglong)(byte)*puVar13 + 0x3f;
      }
      puVar13 = puVar12;
      if (puVar4 <= puVar12) {
        puVar13 = (ushort *)((longlong)puVar4 + -1);
      }
    }
  }
  uVar15 = 0;
  lVar5 = *param_2;
  bVar1 = *(byte *)(param_2[7] + 2 + param_2[6] * 4);
  lVar6 = param_2[1];
  iVar10 = 0;
  if (bVar1 != 0) {
    iVar10 = bVar1 - 1;
  }
  iVar11 = iVar10 + (int)lVar6;
  *(int *)(param_2 + 1) = iVar11;
  if (bVar1 != 0) {
    uVar9 = (((ulonglong)(lVar5 << ((byte)lVar6 & 0x3f)) >> 1) >> (~(byte)iVar10 & 0x3f)) +
            (ulonglong)*(uint *)(&DAT_1806888c0 + (ulonglong)bVar1 * 4);
  }
  if (uVar8 == 0 || bVar1 != 0) {
    param_2[10] = param_1[2];
  }
  uVar3 = *(uint *)(param_2[6] * 4 + param_2[7]);
  iVar10 = (uVar3 >> 0x18) + iVar11;
  *(int *)(param_2 + 1) = iVar10;
  param_2[6] = (((ulonglong)(lVar5 << ((byte)iVar11 & 0x3f)) >> 1) >>
               (~(byte)(uVar3 >> 0x18) & 0x3f)) + (ulonglong)(uVar3 & 0xffff);
  uVar3 = *(uint *)(param_2[4] * 4 + param_2[5]);
  iVar11 = iVar10 + (uVar3 >> 0x18);
  *(int *)(param_2 + 1) = iVar11;
  param_2[4] = (((ulonglong)(lVar5 << ((byte)iVar10 & 0x3f)) >> 1) >>
               (~(byte)(uVar3 >> 0x18) & 0x3f)) + (ulonglong)(uVar3 & 0xffff);
  uVar3 = *(uint *)(param_2[9] + param_2[8] * 4);
  *(uint *)(param_2 + 1) = iVar11 + (uVar3 >> 0x18);
  uVar7 = (ulonglong)(uVar3 >> 0x10 & 0xff);
  param_2[8] = (((ulonglong)(lVar5 << ((byte)iVar11 & 0x3f)) >> 1) >>
               (~(byte)(uVar3 >> 0x18) & 0x3f)) + (ulonglong)(uVar3 & 0xffff);
  puVar12 = puVar13;
  if (uVar7 != 0x7f) goto LAB_1805ed16d;
  if (puVar13 < puVar4) {
    uVar15 = (ulonglong)(byte)*puVar13;
    puVar12 = (ushort *)((longlong)puVar13 + 1);
    if ((byte)*puVar13 != 0xff) goto LAB_1805ed15d;
    puVar14 = (ushort *)((longlong)puVar13 + 3);
    if (puVar14 <= puVar4) {
      uVar2 = *puVar12;
      uVar7 = (ulonglong)uVar2;
      if (((uVar2 & 1) != 0) && (puVar14 < puVar4)) {
        bVar1 = *(byte *)puVar14;
        puVar14 = puVar13 + 2;
        uVar7 = (ulonglong)CONCAT12(bVar1,uVar2);
      }
      uVar7 = uVar7 >> 1;
      puVar12 = puVar14;
    }
  }
  else {
LAB_1805ed15d:
    uVar7 = uVar15 + 0x7f;
  }
  if (puVar4 <= puVar12) {
    puVar12 = (ushort *)((longlong)puVar4 + -1);
  }
LAB_1805ed16d:
  *param_1 = uVar8;
  param_1[2] = uVar9;
  param_1[1] = uVar7 + 4;
  param_2[0xb] = (longlong)puVar12;
  return;
}



