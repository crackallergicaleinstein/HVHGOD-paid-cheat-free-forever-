// FUN_1805ea3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ea3a0 */

ulonglong FUN_1805ea3a0(longlong param_1,uint *param_2,uint *param_3,uint *param_4,ulonglong param_5
                       )

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ushort uVar9;
  short sVar8;
  short sVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  undefined2 *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  
  uVar20 = 0;
  bVar21 = false;
  lVar1 = (longlong)param_4 + param_5;
  if (param_5 < 4) {
    return 0xffffffffffffffb8;
  }
  uVar4 = *param_4 & 0xf;
  uVar5 = uVar4 + 5;
  if (0xf < uVar5) {
    return 0xffffffffffffffd4;
  }
  iVar19 = 1 << (sbyte)uVar5;
  uVar15 = 4;
  uVar16 = *param_4 >> 4;
  iVar12 = uVar4 + 6;
  *param_3 = uVar5;
  iVar11 = iVar19 + 1;
  puVar17 = param_4;
  do {
    if ((iVar11 < 2) || (*param_2 < uVar20)) {
      if (iVar11 == 1) {
        *param_2 = uVar20 - 1;
        uVar7 = ((longlong)((int)(uVar15 + 7) >> 3) - (longlong)param_4) + (longlong)puVar17;
        if (param_5 < uVar7) {
          uVar7 = 0xffffffffffffffb8;
        }
      }
      else {
        uVar7 = 0xffffffffffffffff;
      }
      return uVar7;
    }
    if (bVar21) {
      uVar4 = uVar20;
      if ((short)uVar16 == -1) {
        do {
          uVar4 = uVar4 + 0x18;
          if (puVar17 < (uint *)(lVar1 - 5U)) {
            puVar18 = (uint *)((longlong)puVar17 + 2);
            puVar17 = (uint *)((longlong)puVar17 + 2);
            uVar16 = *puVar18 >> ((byte)uVar15 & 0x1f);
          }
          else {
            uVar16 = uVar16 >> 0x10;
            uVar15 = uVar15 + 0x10;
          }
        } while ((short)uVar16 == -1);
      }
      bVar2 = (byte)uVar16;
      while ((bVar2 & 3) == 3) {
        uVar16 = uVar16 >> 2;
        uVar4 = uVar4 + 3;
        uVar15 = uVar15 + 2;
        bVar2 = (byte)uVar16;
      }
      uVar15 = uVar15 + 2;
      uVar4 = uVar4 + (uVar16 & 3);
      if (*param_2 < uVar4) {
        return 0xffffffffffffffd0;
      }
      if (uVar20 < uVar4) {
        puVar14 = (undefined2 *)(param_1 + (ulonglong)uVar20 * 2);
        for (uVar7 = (ulonglong)(uVar4 - uVar20); uVar20 = uVar4, uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
      }
      if (((uint *)(lVar1 - 7U) < puVar17) &&
         (lVar1 - 4U < (ulonglong)((longlong)((int)uVar15 >> 3) + (longlong)puVar17))) {
        uVar16 = uVar16 >> 2;
      }
      else {
        lVar3 = (longlong)(int)uVar15;
        uVar15 = uVar15 & 7;
        puVar17 = (uint *)((longlong)puVar17 + (lVar3 >> 3));
        uVar16 = *puVar17 >> (sbyte)uVar15;
      }
    }
    sVar8 = (short)iVar19 * 2;
    uVar15 = uVar15 + iVar12;
    sVar10 = (sVar8 - (short)iVar11) + -1;
    if ((iVar19 - 1U & uVar16) < (uint)(int)sVar10) {
      uVar15 = uVar15 - 1;
      uVar9 = (short)iVar19 - 1U & (ushort)uVar16;
    }
    else {
      uVar13 = sVar8 - 1U & (ushort)uVar16;
      uVar9 = uVar13 - sVar10;
      if ((short)uVar13 < iVar19) {
        uVar9 = uVar13;
      }
    }
    sVar8 = uVar9 - 1;
    iVar6 = -(int)sVar8;
    if (iVar6 < 0) {
      iVar6 = (int)sVar8;
    }
    iVar11 = iVar11 - (short)iVar6;
    uVar7 = (ulonglong)uVar20;
    uVar20 = uVar20 + 1;
    *(short *)(param_1 + uVar7 * 2) = sVar8;
    bVar21 = sVar8 == 0;
    for (; iVar11 < iVar19; iVar19 = iVar19 >> 1) {
      iVar12 = iVar12 + -1;
    }
    if (((uint *)(lVar1 - 7U) < puVar17) &&
       (puVar18 = (uint *)(lVar1 - 4),
       puVar18 < (uint *)((longlong)((int)uVar15 >> 3) + (longlong)puVar17))) {
      uVar15 = uVar15 + ((int)puVar17 - (int)lVar1) * 8 + 0x20;
    }
    else {
      puVar18 = (uint *)((longlong)puVar17 + ((longlong)(int)uVar15 >> 3));
      uVar15 = uVar15 & 7;
    }
    uVar16 = *puVar18 >> ((byte)uVar15 & 0x1f);
    puVar17 = puVar18;
  } while( true );
}



