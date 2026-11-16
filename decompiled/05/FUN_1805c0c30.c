// FUN_1805c0c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c0c30 */

void FUN_1805c0c30(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  pbVar13 = *(byte **)(param_2 + 2);
  uVar12 = *param_2;
  uVar15 = (ulonglong)uVar12;
  uVar11 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = *param_1;
  if (uVar6 != 0) {
    puVar4 = (uint *)(*(longlong *)(param_1 + 2) + 0x10);
    do {
      *puVar4 = *puVar4 & 0xfffffffb;
      puVar4[4] = 0xffffffff;
      puVar4 = puVar4 + 10;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (uVar12 != 0) {
    lVar14 = 0;
    do {
      if (uVar11 == 0) {
        uVar9 = (uint)*pbVar13;
        uVar11 = 0x80;
        pbVar13 = pbVar13 + 1;
      }
      if ((uVar11 & uVar9) != 0) {
        lVar7 = *(longlong *)(param_1 + 2) + lVar14;
        if (((*(uint *)(lVar7 + 0x10) & 4) == 0) &&
           (*(uint *)(lVar7 + 0x10) = *(uint *)(lVar7 + 0x10) | 4, uVar8 < *param_1)) {
          uVar5 = (ulonglong)uVar8;
          uVar8 = uVar8 + 1;
          *(longlong *)(*(longlong *)(param_1 + 4) + uVar5 * 8) = lVar7;
        }
      }
      uVar11 = (int)uVar11 >> 1;
      lVar14 = lVar14 + 0x28;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  uVar12 = 1;
  param_1[1] = uVar8;
  puVar1 = *(undefined8 **)(param_1 + 4);
  if (1 < uVar8) {
    puVar10 = puVar1;
    do {
      puVar10 = puVar10 + 1;
      piVar2 = (int *)*puVar10;
      uVar9 = uVar12;
      uVar6 = uVar12;
      while (uVar6 = uVar6 - 1, uVar6 < uVar12) {
        uVar15 = (ulonglong)uVar9;
        piVar3 = (int *)puVar1[uVar6];
        if (*piVar3 < *piVar2) break;
        uVar9 = uVar9 - 1;
        puVar1[uVar6] = piVar2;
        puVar1[uVar15] = piVar3;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar8);
  }
  return;
}



