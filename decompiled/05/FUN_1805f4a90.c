// FUN_1805f4a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4a90 */

undefined8
FUN_1805f4a90(uint *param_1,short *param_2,uint param_3,uint param_4,short *param_5,
             ulonglong param_6)

{
  ulonglong uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  byte bVar8;
  short *psVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  short *psVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined4 local_res18;
  
  uVar22 = param_3 + 1;
  uVar24 = (ulonglong)uVar22;
  psVar21 = param_5 + (ulonglong)param_3 + 1;
  bVar7 = (byte)param_4;
  uVar23 = 1 << (bVar7 & 0x1f);
  uVar11 = uVar23 - 1;
  uVar6 = (ulonglong)uVar11;
  if ((param_6 < (1L << (bVar7 & 0x3f)) + (ulonglong)uVar22 * 2 + 8) || (0xff < param_3)) {
    return 0xffffffffffffffd2;
  }
  if (0xc < param_4) {
    return 0xffffffffffffffd4;
  }
  uVar13 = 0;
  uVar14 = 0;
  local_res18 = CONCAT22(1,(short)param_4);
  if (uVar22 != 0) {
    psVar9 = param_5;
    do {
      sVar3 = *(short *)(((longlong)param_2 - (longlong)param_5) + (longlong)psVar9);
      if (sVar3 == -1) {
        *(char *)((longlong)param_1 + uVar6 * 4 + 6) = (char)uVar14;
        sVar3 = 1;
        uVar6 = (ulonglong)((int)uVar6 - 1);
      }
      else if ((short)(1 << (bVar7 - 1 & 0x1f)) <= sVar3) {
        local_res18 = local_res18 & 0xffff;
      }
      uVar11 = (uint)uVar6;
      *psVar9 = sVar3;
      uVar14 = uVar14 + 1;
      psVar9 = psVar9 + 1;
    } while (uVar14 < uVar22);
  }
  uVar16 = uVar23 - 1;
  uVar14 = (uVar23 >> 1) + 3 + (uVar23 >> 3);
  *param_1 = local_res18;
  if (uVar11 == uVar16) {
    uVar6 = (ulonglong)uVar16;
    lVar19 = 0;
    lVar12 = 0;
    if (uVar22 != 0) {
      do {
        lVar5 = (longlong)*param_2;
        *(longlong *)((longlong)psVar21 + lVar19) = lVar12;
        if (8 < lVar5) {
          plVar15 = (longlong *)((longlong)psVar21 + lVar19 + 8);
          for (lVar10 = (lVar5 - 9U >> 3) + 1; lVar10 != 0; lVar10 = lVar10 + -1) {
            *plVar15 = lVar12;
            plVar15 = plVar15 + 1;
          }
        }
        lVar19 = lVar19 + lVar5;
        param_2 = param_2 + 1;
        lVar12 = lVar12 + 0x101010101010101;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
    }
    uVar24 = 0;
    if (uVar23 != 0) {
      lVar12 = ((ulonglong)uVar23 - 1 >> 1) + 1;
      do {
        *(char *)((longlong)param_1 + (uVar24 & uVar6) * 4 + 6) = (char)*psVar21;
        uVar1 = uVar24 + uVar14;
        uVar24 = uVar24 + (ulonglong)uVar14 * 2 & uVar6;
        *(undefined1 *)((longlong)param_1 + (uVar1 & uVar6) * 4 + 6) =
             *(undefined1 *)((longlong)psVar21 + 1);
        lVar12 = lVar12 + -1;
        psVar21 = psVar21 + 1;
      } while (lVar12 != 0);
    }
  }
  else {
    uVar6 = 0;
    uVar20 = 0;
    if (uVar22 != 0) {
      do {
        iVar18 = 0;
        if (0 < *param_2) {
          do {
            uVar4 = (uint)uVar6;
            *(char *)((longlong)param_1 + uVar6 * 4 + 6) = (char)uVar20;
            do {
              uVar4 = uVar4 + uVar14 & uVar16;
              uVar6 = (ulonglong)uVar4;
            } while (uVar11 < uVar4);
            iVar18 = iVar18 + 1;
          } while (iVar18 < *param_2);
        }
        uVar20 = uVar20 + 1;
        param_2 = param_2 + 1;
      } while (uVar20 < uVar22);
      if ((int)uVar6 != 0) {
        return 0xffffffffffffffff;
      }
    }
  }
  if (uVar23 != 0) {
    pbVar17 = (byte *)((longlong)param_1 + 7);
    do {
      uVar13 = uVar13 + 1;
      uVar2 = param_5[pbVar17[-1]];
      iVar18 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar18 == 0; iVar18 = iVar18 + -1) {
        }
      }
      param_5[pbVar17[-1]] = uVar2 + 1;
      bVar8 = bVar7 - (char)iVar18;
      *pbVar17 = bVar8;
      *(ushort *)(pbVar17 + -3) = (uVar2 << (bVar8 & 0x1f)) - (short)uVar23;
      pbVar17 = pbVar17 + 4;
    } while (uVar13 < uVar23);
  }
  return 0;
}



