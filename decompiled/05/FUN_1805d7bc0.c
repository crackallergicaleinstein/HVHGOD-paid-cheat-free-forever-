// FUN_1805d7bc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d7bc0 */

uint FUN_1805d7bc0(uint param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint local_res8;
  int local_58;
  ulonglong local_48;
  
  local_res8 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_3 == 1) {
    param_1 = *param_2 + param_1;
    uVar17 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar17 = param_1;
    }
    local_res8 = uVar17 + local_res8;
    uVar13 = local_res8 - 0xfff1;
    if (local_res8 < 0xfff1) {
      uVar13 = local_res8;
    }
    return uVar13 << 0x10 | uVar17;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      bVar11 = *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + bVar11;
      local_res8 = local_res8 + param_1;
    }
    uVar17 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar17 = param_1;
    }
    return ((local_res8 / 0xfff1) * 0xf + local_res8) * 0x10000 | uVar17;
  }
  if (0x15af < param_3) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_3;
    lVar19 = SUB168(ZEXT816(0x79baa6bb6398b6f7) * auVar12,8);
    local_48 = (param_3 - lVar19 >> 1) + lVar19 >> 0xc;
    param_3 = param_3 + local_48 * -0x15b0;
    do {
      local_58 = 0x15b;
      do {
        iVar14 = *param_2 + param_1;
        pbVar1 = param_2 + 6;
        pbVar2 = param_2 + 7;
        pbVar3 = param_2 + 8;
        pbVar4 = param_2 + 9;
        pbVar5 = param_2 + 10;
        pbVar6 = param_2 + 0xb;
        pbVar7 = param_2 + 0xc;
        pbVar8 = param_2 + 0xd;
        iVar15 = iVar14 + (uint)param_2[1];
        pbVar9 = param_2 + 0xf;
        iVar28 = (uint)param_2[2] + iVar15;
        iVar27 = (uint)param_2[3] + iVar28;
        pbVar10 = param_2 + 0xe;
        iVar30 = (uint)param_2[4] + iVar27;
        iVar29 = (uint)param_2[5] + iVar30;
        param_2 = param_2 + 0x10;
        iVar21 = (uint)*pbVar1 + iVar29;
        iVar22 = (uint)*pbVar2 + iVar21;
        iVar23 = (uint)*pbVar3 + iVar22;
        iVar20 = (uint)*pbVar4 + iVar23;
        iVar26 = (uint)*pbVar5 + iVar20;
        iVar25 = (uint)*pbVar6 + iVar26;
        iVar24 = (uint)*pbVar7 + iVar25;
        iVar18 = (uint)*pbVar8 + iVar24;
        iVar16 = (uint)*pbVar10 + iVar18;
        param_1 = (uint)*pbVar9 + iVar16;
        local_res8 = local_res8 +
                     iVar16 + iVar18 + iVar24 + iVar25 + iVar26 + iVar20 + iVar23 + iVar22 + iVar21
                     + iVar29 + iVar30 + iVar27 + iVar28 + iVar15 + iVar14 + param_1;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
      param_1 = param_1 % 0xfff1;
      local_res8 = local_res8 % 0xfff1;
      local_48 = local_48 - 1;
    } while (local_48 != 0);
    if (param_3 == 0) goto LAB_1805d7f4c;
    if (param_3 < 0x10) goto LAB_1805d7f10;
  }
  local_48 = param_3 >> 4;
  param_3 = param_3 + local_48 * -0x10;
  do {
    iVar14 = *param_2 + param_1;
    pbVar1 = param_2 + 6;
    pbVar2 = param_2 + 7;
    pbVar3 = param_2 + 9;
    pbVar4 = param_2 + 10;
    pbVar5 = param_2 + 0xb;
    pbVar6 = param_2 + 0xc;
    pbVar7 = param_2 + 0xd;
    pbVar8 = param_2 + 0xe;
    iVar15 = iVar14 + (uint)param_2[1];
    pbVar9 = param_2 + 0xf;
    iVar27 = (uint)param_2[2] + iVar15;
    iVar29 = (uint)param_2[3] + iVar27;
    pbVar10 = param_2 + 8;
    iVar22 = (uint)param_2[4] + iVar29;
    iVar20 = (uint)param_2[5] + iVar22;
    param_2 = param_2 + 0x10;
    iVar25 = (uint)*pbVar1 + iVar20;
    iVar18 = (uint)*pbVar2 + iVar25;
    iVar16 = (uint)*pbVar10 + iVar18;
    iVar28 = (uint)*pbVar3 + iVar16;
    iVar30 = (uint)*pbVar4 + iVar28;
    iVar21 = (uint)*pbVar5 + iVar30;
    iVar23 = (uint)*pbVar6 + iVar21;
    iVar26 = (uint)*pbVar7 + iVar23;
    iVar24 = (uint)*pbVar8 + iVar26;
    param_1 = (uint)*pbVar9 + iVar24;
    local_res8 = local_res8 +
                 iVar16 + iVar18 + iVar25 + iVar20 + iVar22 + iVar29 + iVar27 + iVar15 + iVar14 +
                 iVar24 + iVar26 + iVar23 + iVar21 + iVar30 + iVar28 + param_1;
    local_48 = local_48 - 1;
  } while (local_48 != 0);
  for (; param_3 != 0; param_3 = param_3 - 1) {
LAB_1805d7f10:
    bVar11 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + bVar11;
    local_res8 = local_res8 + param_1;
  }
  param_1 = param_1 % 0xfff1;
  local_res8 = local_res8 % 0xfff1;
LAB_1805d7f4c:
  return local_res8 << 0x10 | param_1;
}



