// FUN_1805f8630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f8630 */

void FUN_1805f8630(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (uVar6 < 0x20) {
    if (uVar6 < 0x10) goto LAB_1805f8753;
  }
  else if ((DAT_1808d5f64 & 0x20) != 0) {
    FUN_1805f9710(param_1,param_2);
    return;
  }
  if ((DAT_1808d5f64 & 4) != 0) {
    uVar9 = *param_1;
    uVar11 = param_1[1];
    uVar13 = param_1[2];
    uVar15 = param_1[3];
    puVar5 = param_1;
    while (puVar7 = puVar5 + 4, puVar7 != (uint *)((uVar6 & 0xfffffffffffffff0) + (longlong)param_1)
          ) {
      uVar10 = *puVar7;
      uVar12 = puVar5[5];
      uVar14 = puVar5[6];
      uVar16 = puVar5[7];
      uVar9 = ((int)uVar9 < (int)uVar10) * uVar10 | ((int)uVar9 >= (int)uVar10) * uVar9;
      uVar11 = ((int)uVar11 < (int)uVar12) * uVar12 | ((int)uVar11 >= (int)uVar12) * uVar11;
      uVar13 = ((int)uVar13 < (int)uVar14) * uVar14 | ((int)uVar13 >= (int)uVar14) * uVar13;
      uVar15 = ((int)uVar15 < (int)uVar16) * uVar16 | ((int)uVar15 >= (int)uVar16) * uVar15;
      puVar5 = puVar7;
    }
    uVar8 = 0;
    uVar9 = ((int)uVar9 < (int)uVar13) * uVar13 | ((int)uVar9 >= (int)uVar13) * uVar9;
    uVar11 = ((int)uVar11 < (int)uVar15) * uVar15 | ((int)uVar11 >= (int)uVar15) * uVar11;
    uVar9 = ((int)uVar9 < (int)uVar11) * uVar11 | ((int)uVar9 >= (int)uVar11) * uVar9;
    uVar6 = (ulonglong)((longlong)param_2 + (3 - (longlong)puVar7)) >> 2;
    if (param_2 < puVar7) {
      uVar6 = 0;
    }
    if (((uVar6 != 0) && (7 < uVar6)) && (1 < DAT_1808d5f60)) {
      uVar11 = uVar9;
      uVar13 = uVar9;
      uVar15 = uVar9;
      uVar10 = uVar9;
      uVar12 = uVar9;
      uVar14 = uVar9;
      uVar16 = uVar9;
      do {
        uVar1 = *puVar7;
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        uVar8 = uVar8 + 8;
        uVar10 = ((int)uVar10 < (int)uVar1) * uVar1 | ((int)uVar10 >= (int)uVar1) * uVar10;
        uVar12 = ((int)uVar12 < (int)uVar2) * uVar2 | ((int)uVar12 >= (int)uVar2) * uVar12;
        uVar14 = ((int)uVar14 < (int)uVar3) * uVar3 | ((int)uVar14 >= (int)uVar3) * uVar14;
        uVar16 = ((int)uVar16 < (int)uVar4) * uVar4 | ((int)uVar16 >= (int)uVar4) * uVar16;
        uVar1 = puVar7[4];
        uVar2 = puVar7[5];
        uVar3 = puVar7[6];
        uVar4 = puVar7[7];
        puVar7 = puVar7 + 8;
        uVar9 = ((int)uVar9 < (int)uVar1) * uVar1 | ((int)uVar9 >= (int)uVar1) * uVar9;
        uVar11 = ((int)uVar11 < (int)uVar2) * uVar2 | ((int)uVar11 >= (int)uVar2) * uVar11;
        uVar13 = ((int)uVar13 < (int)uVar3) * uVar3 | ((int)uVar13 >= (int)uVar3) * uVar13;
        uVar15 = ((int)uVar15 < (int)uVar4) * uVar4 | ((int)uVar15 >= (int)uVar4) * uVar15;
      } while (uVar8 != (uVar6 & 0xfffffffffffffff8));
      uVar9 = ((int)uVar10 < (int)uVar9) * uVar9 | ((int)uVar10 >= (int)uVar9) * uVar10;
      uVar11 = ((int)uVar12 < (int)uVar11) * uVar11 | ((int)uVar12 >= (int)uVar11) * uVar12;
      uVar13 = ((int)uVar14 < (int)uVar13) * uVar13 | ((int)uVar14 >= (int)uVar13) * uVar14;
      uVar15 = ((int)uVar16 < (int)uVar15) * uVar15 | ((int)uVar16 >= (int)uVar15) * uVar16;
      uVar9 = ((int)uVar9 < (int)uVar13) * uVar13 | ((int)uVar9 >= (int)uVar13) * uVar9;
      uVar11 = ((int)uVar11 < (int)uVar15) * uVar15 | ((int)uVar11 >= (int)uVar15) * uVar11;
      uVar9 = ((int)uVar9 < (int)uVar11) * uVar11 | ((int)uVar9 >= (int)uVar11) * uVar9;
    }
    if (puVar7 == param_2) {
      return;
    }
    do {
      uVar11 = *puVar7;
      if ((int)*puVar7 <= (int)uVar9) {
        uVar11 = uVar9;
      }
      uVar9 = uVar11;
      puVar7 = puVar7 + 1;
    } while (puVar7 != param_2);
    return;
  }
LAB_1805f8753:
  uVar9 = *param_1;
  param_1 = param_1 + 1;
  uVar8 = 0;
  uVar6 = (ulonglong)((longlong)param_2 + (3 - (longlong)param_1)) >> 2;
  if (param_2 < param_1) {
    uVar6 = 0;
  }
  if (((uVar6 != 0) && (7 < uVar6)) && (1 < DAT_1808d5f60)) {
    uVar11 = uVar9;
    uVar13 = uVar9;
    uVar15 = uVar9;
    uVar10 = uVar9;
    uVar12 = uVar9;
    uVar14 = uVar9;
    uVar16 = uVar9;
    do {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar8 = uVar8 + 8;
      uVar10 = ((int)uVar10 < (int)uVar1) * uVar1 | ((int)uVar10 >= (int)uVar1) * uVar10;
      uVar12 = ((int)uVar12 < (int)uVar2) * uVar2 | ((int)uVar12 >= (int)uVar2) * uVar12;
      uVar14 = ((int)uVar14 < (int)uVar3) * uVar3 | ((int)uVar14 >= (int)uVar3) * uVar14;
      uVar16 = ((int)uVar16 < (int)uVar4) * uVar4 | ((int)uVar16 >= (int)uVar4) * uVar16;
      uVar1 = param_1[4];
      uVar2 = param_1[5];
      uVar3 = param_1[6];
      uVar4 = param_1[7];
      param_1 = param_1 + 8;
      uVar9 = ((int)uVar9 < (int)uVar1) * uVar1 | ((int)uVar9 >= (int)uVar1) * uVar9;
      uVar11 = ((int)uVar11 < (int)uVar2) * uVar2 | ((int)uVar11 >= (int)uVar2) * uVar11;
      uVar13 = ((int)uVar13 < (int)uVar3) * uVar3 | ((int)uVar13 >= (int)uVar3) * uVar13;
      uVar15 = ((int)uVar15 < (int)uVar4) * uVar4 | ((int)uVar15 >= (int)uVar4) * uVar15;
    } while (uVar8 != (uVar6 & 0xfffffffffffffff8));
    uVar9 = ((int)uVar10 < (int)uVar9) * uVar9 | ((int)uVar10 >= (int)uVar9) * uVar10;
    uVar11 = ((int)uVar12 < (int)uVar11) * uVar11 | ((int)uVar12 >= (int)uVar11) * uVar12;
    uVar13 = ((int)uVar14 < (int)uVar13) * uVar13 | ((int)uVar14 >= (int)uVar13) * uVar14;
    uVar15 = ((int)uVar16 < (int)uVar15) * uVar15 | ((int)uVar16 >= (int)uVar15) * uVar16;
    uVar9 = ((int)uVar9 < (int)uVar13) * uVar13 | ((int)uVar9 >= (int)uVar13) * uVar9;
    uVar11 = ((int)uVar11 < (int)uVar15) * uVar15 | ((int)uVar11 >= (int)uVar15) * uVar11;
    uVar9 = ((int)uVar9 < (int)uVar11) * uVar11 | ((int)uVar9 >= (int)uVar11) * uVar9;
  }
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar11 = *param_1;
    if ((int)*param_1 <= (int)uVar9) {
      uVar11 = uVar9;
    }
    uVar9 = uVar11;
  }
  return;
}



