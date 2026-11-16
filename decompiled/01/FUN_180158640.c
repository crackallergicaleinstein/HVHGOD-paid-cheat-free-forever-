// FUN_180158640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158640 */

longlong *
FUN_180158640(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  byte bVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  byte *pbVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  
  puVar2 = (uint *)*param_3;
  puVar3 = (uint *)*param_2;
  if ((puVar3 == puVar2) && (param_2[1] == param_3[1])) {
    lVar12 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = lVar12;
    return param_1;
  }
  uVar18 = param_2[1];
  lVar12 = param_3[1];
  lVar5 = param_4[1];
  puVar4 = (uint *)*param_4;
  lVar10 = (((longlong)puVar2 - (longlong)puVar3 >> 2) * 0x20 - uVar18) + lVar12;
  *param_1 = *param_4;
  param_1[1] = lVar5;
  if ((lVar10 < 0) && ((ulonglong)param_1[1] < (ulonglong)-lVar10)) {
    uVar14 = lVar10 + param_1[1];
    param_1[1] = uVar14;
    lVar5 = (~uVar14 >> 5) * -4 + -4;
  }
  else {
    param_1[1] = param_1[1] + lVar10;
    uVar14 = param_1[1];
    lVar5 = (uVar14 >> 5) << 2;
  }
  *param_1 = *param_1 + lVar5;
  uVar13 = (uint)uVar14 & 0x1f;
  uVar6 = (ulonglong)uVar13;
  param_1[1] = uVar6;
  uVar14 = param_4[1];
  uVar8 = (uint)uVar18;
  uVar7 = -1 << (uVar8 & 0x1f);
  uVar17 = (uint)uVar14;
  if (uVar14 == 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = 0xffffffff >> (0x20 - uVar17 & 0x1f);
  }
  uVar20 = 0xffffffff >> (0x20 - (uint)lVar12 & 0x1f);
  uVar16 = -1 << uVar13;
  lVar5 = 0;
  if (uVar6 == 0) {
    lVar5 = -4;
  }
  if (puVar3 == puVar2) {
    uVar13 = uVar17 - uVar8;
    if (uVar14 < uVar18) {
      uVar13 = uVar8 - uVar17;
    }
    uVar8 = uVar20 & uVar7 & *puVar3;
    uVar17 = uVar8 >> (uVar13 & 0x1f);
    if (uVar18 <= uVar14) {
      uVar17 = uVar8 << (uVar13 & 0x1f);
    }
    if (puVar4 != (uint *)(lVar5 + *param_1)) {
      *puVar4 = *puVar4 & uVar22 | uVar17;
      puVar4[1] = (*puVar3 & uVar20 & uVar7) >> ((int)param_3[1] - (int)param_1[1] & 0x1fU) |
                  puVar4[1] & uVar16;
      return param_1;
    }
    if (uVar6 == 0) {
      uVar16 = 0;
    }
    uVar17 = (uVar16 | uVar22) & *puVar4 | uVar17;
  }
  else {
    if (puVar4 == (uint *)(lVar5 + *param_1)) {
      uVar9 = uVar17 - uVar8;
      if (uVar14 < uVar18) {
        uVar9 = uVar8 - uVar17;
      }
      uVar17 = (uVar7 & *puVar3) >> (uVar9 & 0x1f);
      if (uVar18 <= uVar14) {
        uVar17 = (uVar7 & *puVar3) << (uVar9 & 0x1f);
      }
      if (uVar6 == 0) {
        uVar16 = 0;
      }
      uVar8 = (uVar16 | uVar22) & *puVar4;
      if (param_3[1] == 0) {
        *puVar4 = uVar8 | uVar17;
        return param_1;
      }
      *puVar4 = (*puVar2 & uVar20) << (uVar13 - (int)param_3[1] & 0x1f) | uVar8 | uVar17;
      return param_1;
    }
    uVar8 = uVar8 & 7;
    uVar6 = (ulonglong)uVar8;
    if (uVar6 == (uVar17 & 7)) {
      uVar7 = (uint)lVar12 & 7;
      pbVar19 = (byte *)((uVar18 - uVar6 >> 3) + (longlong)puVar3);
      pbVar15 = (byte *)((uVar14 - (uVar17 & 7) >> 3) + (longlong)puVar4);
      pbVar21 = (byte *)((lVar12 - (ulonglong)uVar7 >> 3) + (longlong)puVar2);
      if (uVar6 != 0) {
        bVar1 = *pbVar19;
        pbVar19 = pbVar19 + 1;
        *pbVar15 = (byte)(0xff >> (8 - uVar8 & 0x1f)) & *pbVar15 | -1 << (sbyte)uVar8 & bVar1;
        pbVar15 = pbVar15 + 1;
      }
      lVar12 = (longlong)pbVar21 - (longlong)pbVar19;
      FUN_18063aed0(pbVar15,pbVar19,lVar12);
      if ((ulonglong)uVar7 == 0) {
        return param_1;
      }
      pbVar15[lVar12] =
           (byte)(0xff >> (8 - uVar7 & 0x1f)) & *pbVar21 | -1 << (sbyte)uVar7 & pbVar15[lVar12];
      return param_1;
    }
    puVar11 = puVar3 + 1;
    if (uVar14 < uVar18) {
      uVar14 = param_2[1] - uVar14;
      uVar8 = (uint)uVar14;
      uVar13 = 0xffffffff >> (uVar8 & 0x1f);
      uVar17 = (*puVar3 & uVar7) >> (uVar8 & 0x1f) | uVar22 & *puVar4;
      *puVar4 = uVar17;
      for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
        *puVar4 = uVar17 & uVar13 | *puVar11 << (0x20 - uVar8 & 0x1f);
        puVar4 = puVar4 + 1;
        uVar17 = ~uVar13 & *puVar4 | *puVar11 >> (uVar8 & 0x1f);
        *puVar4 = uVar17;
      }
      uVar18 = param_3[1];
      if (uVar18 == 0) {
        return param_1;
      }
      uVar17 = (*puVar11 & uVar20) << (0x20 - uVar8 & 0x1f);
      if (uVar18 < uVar14) {
        *puVar4 = (uVar13 | uVar16) & *puVar4 | uVar17;
        return param_1;
      }
      *puVar4 = *puVar4 & uVar13 | uVar17;
      if (uVar18 == uVar14) {
        return param_1;
      }
      puVar4[1] = (*puVar11 & uVar20) >> (uVar8 & 0x1f) | puVar4[1] & uVar16;
      return param_1;
    }
    lVar12 = uVar14 - param_2[1];
    uVar18 = 0x20 - lVar12;
    uVar8 = (uint)lVar12;
    *puVar4 = (*puVar3 & uVar7) << (uVar8 & 0x1f) | uVar22 & *puVar4;
    uVar7 = (uint)uVar18;
    uVar17 = *puVar3 >> (uVar7 & 0x1f);
    for (; puVar4 = puVar4 + 1, puVar11 != puVar2; puVar11 = puVar11 + 1) {
      *puVar4 = *puVar11 << (uVar8 & 0x1f) | uVar17;
      uVar17 = *puVar11 >> (uVar7 & 0x1f);
    }
    uVar14 = param_3[1];
    if (uVar18 <= uVar14) {
      *puVar4 = *puVar11 << (uVar8 & 0x1f) | uVar17;
      if (uVar14 == uVar18) {
        return param_1;
      }
      puVar4[1] = ~uVar16 & *puVar11 >> (uVar7 & 0x1f) | puVar4[1] & uVar16;
      return param_1;
    }
    if (uVar14 != 0) {
      *puVar4 = (*puVar11 & uVar20) << (uVar8 & 0x1f) | uVar16 & *puVar4 | uVar17;
      return param_1;
    }
    uVar17 = uVar16 & *puVar4 | uVar17;
  }
  *puVar4 = uVar17;
  return param_1;
}



