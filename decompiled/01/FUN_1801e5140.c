// FUN_1801e5140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e5140 */

undefined8 FUN_1801e5140(uint param_1,uint param_2)

{
  sbyte sVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  byte bVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool local_res8;
  uint local_res18;
  
  iVar14 = -0x97;
  if (param_2 != 0) {
    iVar14 = param_2 - 0x98;
  }
  uVar13 = param_1;
  if (param_2 != 0) {
    uVar13 = param_1 | 0x800000;
  }
  iVar5 = 0;
  bVar15 = ~(byte)uVar13 & 1;
  uVar13 = uVar13 * 4;
  uVar17 = uVar13 + 2;
  if ((param_1 != 0) || (iVar10 = 0, param_2 < 2)) {
    iVar10 = 1;
  }
  uVar7 = (ulonglong)uVar17;
  uVar16 = (uVar13 - iVar10) - 1;
  uVar4 = (ulonglong)uVar13;
  local_res8 = false;
  bVar19 = false;
  bVar6 = 0;
  if (iVar14 < 0) {
    uVar8 = (uint)(iVar14 * -0xb2efb) >> 0x14;
    local_res18 = iVar14 + uVar8;
    uVar9 = *(ulonglong *)(&DAT_1807cb780 + (ulonglong)-local_res18 * 8) & 0xffffffff;
    uVar11 = *(ulonglong *)(&DAT_1807cb780 + (ulonglong)-local_res18 * 8) >> 0x20;
    uVar12 = (ulonglong)((uVar8 - (local_res18 * -0x12934f >> 0x13)) + 0x1c);
    uVar7 = (uVar7 * uVar9 >> 0x20) + uVar7 * uVar11 >> (uVar12 & 0x3f);
    uVar18 = uVar7 & 0xffffffff;
    uVar4 = (uVar9 * uVar4 >> 0x20) + uVar11 * uVar4 >> (uVar12 & 0x3f);
    uVar12 = (uVar9 * uVar16 >> 0x20) + uVar11 * uVar16 >> (uVar12 & 0x3f);
    uVar17 = (uint)uVar7;
    if (uVar8 == 0) {
LAB_1801e54fc:
      local_res8 = SUB41(iVar10,0);
      bVar19 = true;
      if (bVar15 == 0) {
        uVar17 = uVar17 - 1;
      }
      if (bVar15 == 0) {
        local_res8 = false;
      }
      uVar18 = (ulonglong)uVar17;
      goto LAB_1801e5515;
    }
    if ((uVar17 - 1) / 10 <= (uint)((uVar12 & 0xffffffff) / 10)) {
      uVar7 = ((*(ulonglong *)(&DAT_1807cb780 + (ulonglong)(-local_res18 + 1) * 8) & 0xffffffff) *
               (ulonglong)uVar13 >> 0x20) +
              (*(ulonglong *)(&DAT_1807cb780 + (ulonglong)(-local_res18 + 1) * 8) >> 0x20) *
              (ulonglong)uVar13 >>
              ((ulonglong)((uVar8 - (local_res18 * -0x12934f + 0x12934f >> 0x13)) + 0x1b) & 0x3f);
      bVar6 = (char)uVar7 + (char)((uVar7 & 0xffffffff) / 10) * -10;
    }
    if (uVar8 < 2) goto LAB_1801e54fc;
    if (0x1e < uVar8) goto LAB_1801e5515;
    bVar3 = (char)uVar8 - 1;
    sVar1 = (bVar3 < 0x21) * (' ' - bVar3);
    bVar19 = (uVar13 << sVar1) >> sVar1 == 0;
LAB_1801e5521:
    uVar13 = (uint)uVar4;
    uVar17 = (uint)uVar12;
    iVar14 = 0;
    bVar2 = true;
    if (bVar19) goto LAB_1801e559d;
    uVar16 = (uint)((uVar12 & 0xffffffff) / 10);
    uVar8 = (uint)((uVar18 & 0xffffffff) / 10);
    if (uVar16 < uVar8) {
      do {
        uVar17 = uVar16;
        iVar14 = iVar14 + 1;
        uVar7 = (uVar4 & 0xffffffff) / 10;
        uVar13 = (uint)uVar7;
        bVar6 = (char)uVar4 + (char)uVar7 * -10;
        uVar8 = uVar8 / 10;
        uVar4 = uVar7;
        uVar16 = uVar17 / 10;
      } while (uVar17 / 10 < uVar8);
    }
    bVar19 = uVar13 == uVar17;
LAB_1801e56bf:
    if (!bVar19) {
LAB_1801e56c1:
      if (bVar6 < 5) goto LAB_1801e56cc;
    }
  }
  else {
    local_res18 = (uint)(iVar14 * 0x13441) >> 0x12;
    uVar9 = *(ulonglong *)(&DAT_1807cb680 + (ulonglong)local_res18 * 8) & 0xffffffff;
    uVar11 = *(ulonglong *)(&DAT_1807cb680 + (ulonglong)local_res18 * 8) >> 0x20;
    uVar12 = (ulonglong)(local_res18 + 0x1b + ((local_res18 * 0x12934f >> 0x13) - iVar14));
    uVar4 = (uVar9 * uVar4 >> 0x20) + uVar11 * uVar4 >> (uVar12 & 0x3f);
    uVar18 = (uVar7 * uVar9 >> 0x20) + uVar7 * uVar11 >> (uVar12 & 0x3f);
    uVar12 = (uVar9 * uVar16 >> 0x20) + uVar11 * uVar16 >> (uVar12 & 0x3f);
    if (local_res18 != 0) {
      if (((int)uVar18 - 1U) / 10 <= (uint)((uVar12 & 0xffffffff) / 10)) {
        uVar7 = ((*(ulonglong *)(&DAT_1807cb680 + (ulonglong)(local_res18 - 1) * 8) & 0xffffffff) *
                 (ulonglong)uVar13 >> 0x20) +
                (*(ulonglong *)(&DAT_1807cb680 + (ulonglong)(local_res18 - 1) * 8) >> 0x20) *
                (ulonglong)uVar13 >>
                ((ulonglong)((((local_res18 - 1) * 0x12934f >> 0x13) - iVar14) + 0x1a + local_res18)
                & 0x3f);
        bVar6 = (char)uVar7 + (char)((uVar7 & 0xffffffff) / 10) * -10;
      }
      if (9 < local_res18) goto LAB_1801e5515;
    }
    uVar8 = 0;
    uVar7 = (ulonglong)uVar13 / 5;
    if (uVar13 == (int)uVar7 * 5) {
      do {
        iVar14 = (int)uVar7;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 / 5;
      } while (iVar14 == (int)uVar7 * 5);
      bVar19 = local_res18 <= uVar8;
      goto LAB_1801e5521;
    }
    if (bVar15 == 0) {
      uVar7 = (ulonglong)uVar17 / 5;
      if (uVar17 == (int)uVar7 * 5) {
        do {
          iVar14 = (int)uVar7;
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 / 5;
        } while (iVar14 == (int)uVar7 * 5);
      }
      uVar18 = (ulonglong)((int)uVar18 - (uint)(local_res18 <= uVar8));
    }
    else {
      uVar7 = (ulonglong)uVar16 / 5;
      if (uVar16 == (int)uVar7 * 5) {
        do {
          iVar14 = (int)uVar7;
          uVar8 = uVar8 + 1;
          uVar7 = uVar7 / 5;
        } while (iVar14 == (int)uVar7 * 5);
      }
      local_res8 = local_res18 <= uVar8;
    }
LAB_1801e5515:
    bVar2 = bVar19;
    if (local_res8 == false) goto LAB_1801e5521;
LAB_1801e559d:
    iVar14 = 0;
    uVar13 = (uint)((uVar12 & 0xffffffff) / 10);
    uVar17 = (uint)((uVar18 & 0xffffffff) / 10);
    uVar7 = uVar4;
    if (uVar13 < uVar17) {
      do {
        iVar10 = (int)uVar12;
        uVar12 = (ulonglong)uVar13;
        bVar19 = false;
        if (iVar10 == uVar13 * 10) {
          bVar19 = local_res8;
        }
        local_res8 = bVar19;
        bVar19 = false;
        if (bVar6 == 0) {
          bVar19 = bVar2;
        }
        bVar2 = bVar19;
        iVar14 = iVar14 + 1;
        uVar4 = (uVar7 & 0xffffffff) / 10;
        bVar6 = (char)uVar7 + (char)uVar4 * -10;
        uVar13 = uVar13 / 10;
        uVar17 = uVar17 / 10;
        uVar7 = uVar4;
      } while (uVar13 < uVar17);
    }
    uVar17 = (uint)uVar12;
    if (local_res8 != false) {
      uVar13 = (uint)((uVar12 & 0xffffffff) / 10);
      uVar7 = uVar4;
      if (uVar17 == uVar13 * 10) {
        do {
          uVar17 = uVar13;
          iVar14 = iVar14 + 1;
          bVar2 = (bool)(bVar2 & bVar6 == 0);
          uVar4 = (uVar7 & 0xffffffff) / 10;
          bVar6 = (char)uVar7 + (char)uVar4 * -10;
          uVar7 = uVar4;
          uVar13 = uVar17 / 10;
        } while (uVar17 == (uVar17 / 10) * 10);
      }
    }
    uVar13 = (uint)uVar4;
    if ((bVar2) && (bVar6 == 5)) {
      if ((uVar4 & 1) == 0) {
        bVar6 = 4;
      }
    }
    if (uVar13 != uVar17) goto LAB_1801e56c1;
    if (bVar15 != 0) {
      bVar19 = local_res8 == false;
      goto LAB_1801e56bf;
    }
  }
  iVar5 = 1;
LAB_1801e56cc:
  return CONCAT44(local_res18 + iVar14,iVar5 + uVar13);
}



