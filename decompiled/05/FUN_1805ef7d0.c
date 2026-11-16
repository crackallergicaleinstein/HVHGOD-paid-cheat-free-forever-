// FUN_1805ef7d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ef7d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ef7d0(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_888 [32];
  ulonglong *local_868;
  uint *local_860;
  undefined8 local_858;
  int local_850;
  uint local_848;
  uint local_844;
  uint *local_840;
  ulonglong local_838;
  ulonglong local_828;
  uint auStack_820 [18];
  int local_7d8 [20];
  uint local_788 [272];
  byte local_348 [256];
  byte local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_888;
  uVar2 = *param_1;
  local_7d8[0x10] = 0;
  auStack_820[0xe] = 0;
  auStack_820[0xf] = 0;
  local_840 = param_1 + 1;
  local_7d8[0] = 0;
  local_7d8[1] = 0;
  local_7d8[2] = 0;
  local_7d8[3] = 0;
  local_7d8[4] = 0;
  local_7d8[5] = 0;
  local_7d8[6] = 0;
  local_7d8[7] = 0;
  local_7d8[8] = 0;
  local_7d8[9] = 0;
  local_7d8[10] = 0;
  local_7d8[0xb] = 0;
  local_7d8[0xc] = 0;
  local_7d8[0xd] = 0;
  local_7d8[0xe] = 0;
  local_7d8[0xf] = 0;
  local_828 = 0;
  auStack_820[0] = 0;
  auStack_820[1] = 0;
  auStack_820[2] = 0;
  auStack_820[3] = 0;
  auStack_820[4] = 0;
  auStack_820[5] = 0;
  auStack_820[6] = 0;
  auStack_820[7] = 0;
  auStack_820[8] = 0;
  auStack_820[9] = 0;
  auStack_820[10] = 0;
  auStack_820[0xb] = 0;
  auStack_820[0xc] = 0;
  auStack_820[0xd] = 0;
  if (uVar2 < 0x11) {
    local_868 = (ulonglong *)&local_848;
    local_860 = (uint *)param_2;
    local_858 = param_3;
    local_838 = FUN_1805efb40(local_348,0x100,local_7d8,&local_844);
    if ((local_838 < 0xffffffffffffff89) && (uVar10 = (ulonglong)local_848, local_848 <= uVar2)) {
      iVar20 = local_7d8[uVar10];
      uVar18 = local_848;
      while (iVar20 == 0) {
        uVar18 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar18;
        iVar20 = local_7d8[uVar10];
      }
      uVar12 = uVar18 + 1;
      iVar20 = 0;
      if (1 < uVar12) {
        lVar17 = 0;
        uVar10 = (ulonglong)uVar18;
        iVar19 = iVar20;
        do {
          iVar20 = iVar19 + *(int *)((longlong)local_7d8 + lVar17 + 4);
          *(int *)((longlong)auStack_820 + lVar17) = iVar19;
          lVar17 = lVar17 + 4;
          uVar10 = uVar10 - 1;
          iVar19 = iVar20;
        } while (uVar10 != 0);
      }
      uVar14 = 0;
      if (local_844 != 0) {
        pbVar16 = local_348;
        do {
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + 1;
          uVar21 = auStack_820[(ulonglong)bVar1 - 1];
          local_248[(ulonglong)uVar21 * 2] = (byte)uVar14;
          uVar14 = uVar14 + 1;
          auStack_820[(ulonglong)bVar1 - 1] = uVar21 + 1;
          local_248[(ulonglong)uVar21 * 2 + 1] = bVar1;
        } while (uVar14 < local_844);
      }
      uVar14 = 1;
      local_828 = local_828 & 0xffffffff;
      if (1 < uVar12) {
        lVar17 = 0;
        iVar19 = 0;
        do {
          lVar7 = lVar17 + 4;
          cVar3 = (char)uVar14;
          lVar17 = lVar17 + 4;
          *(int *)((longlong)local_788 + lVar17) = iVar19;
          uVar14 = uVar14 + 1;
          iVar19 = iVar19 + (*(int *)((longlong)local_7d8 + lVar7) <<
                            (((char)uVar2 - (char)local_848) + -1 + cVar3 & 0x1fU));
        } while (uVar14 < uVar12);
      }
      uVar14 = (local_848 - uVar18) + 1;
      uVar21 = (uVar2 - uVar14) + 1;
      if (uVar14 < uVar21) {
        puVar11 = local_788 + (ulonglong)uVar14 * 0x11;
        lVar17 = (ulonglong)uVar14 * -0x44;
        do {
          uVar10 = 1;
          if (1 < uVar12) {
            if ((0xf < uVar18) &&
               ((local_788 + uVar18 < puVar11 + 1 || (puVar11 + uVar18 < local_788 + 1)))) {
              uVar15 = 9;
              uVar13 = uVar10;
              do {
                uVar9 = (int)uVar13 + 0x10;
                uVar10 = (ulonglong)uVar9;
                uVar4 = local_788[uVar13 + 1];
                uVar5 = local_788[uVar13 + 2];
                uVar6 = local_788[uVar13 + 3];
                uVar22 = (ulonglong)uVar14;
                puVar8 = puVar11 + uVar13;
                *puVar8 = local_788[uVar13] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar13 = (ulonglong)(uVar15 - 4);
                uVar4 = local_788[uVar13 + 1];
                uVar5 = local_788[uVar13 + 2];
                uVar6 = local_788[uVar13 + 3];
                puVar8 = puVar11 + uVar13;
                *puVar8 = local_788[uVar13] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar4 = local_788[(ulonglong)uVar15 + 1];
                uVar5 = local_788[(ulonglong)uVar15 + 2];
                uVar6 = local_788[(ulonglong)uVar15 + 3];
                uVar22 = (ulonglong)uVar14;
                puVar8 = puVar11 + uVar15;
                *puVar8 = local_788[uVar15] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar13 = (ulonglong)(uVar15 + 4);
                uVar15 = uVar15 + 0x10;
                uVar4 = local_788[uVar13 + 1];
                uVar5 = local_788[uVar13 + 2];
                uVar6 = local_788[uVar13 + 3];
                puVar8 = puVar11 + uVar13;
                *puVar8 = local_788[uVar13] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar13 = uVar10;
              } while (uVar9 < uVar12 - (uVar18 & 0xf));
              if (uVar12 <= uVar9) goto LAB_1805efa95;
            }
            uVar13 = (ulonglong)(uVar12 - (int)uVar10);
            puVar8 = puVar11 + uVar10;
            do {
              *puVar8 = *(uint *)(lVar17 + (longlong)puVar8) >> ((byte)uVar14 & 0x1f);
              uVar13 = uVar13 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar13 != 0);
          }
LAB_1805efa95:
          uVar14 = uVar14 + 1;
          puVar11 = puVar11 + 0x11;
          lVar17 = lVar17 + -0x44;
        } while (uVar14 < uVar21);
      }
      local_850 = local_848 + 1;
      local_858 = CONCAT44(local_858._4_4_,uVar18);
      local_868 = &local_828;
      local_860 = local_788;
      FUN_1805eb8c0(local_840,uVar2,local_248,iVar20);
    }
  }
}



