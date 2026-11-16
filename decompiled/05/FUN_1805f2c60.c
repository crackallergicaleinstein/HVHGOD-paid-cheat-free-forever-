// FUN_1805f2c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f2c60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f2c60(uint *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_898 [32];
  ulonglong *local_878;
  uint *local_870;
  undefined8 local_868;
  int local_860;
  undefined4 local_858;
  uint local_854;
  uint local_850;
  uint local_84c;
  uint *local_848;
  uint *local_840;
  ulonglong local_838;
  ulonglong local_828;
  uint auStack_820 [18];
  int local_7d8 [20];
  uint local_788 [272];
  byte local_348 [256];
  byte local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_898;
  local_7d8[0] = 0;
  local_7d8[1] = 0;
  local_7d8[2] = 0;
  local_7d8[3] = 0;
  local_7d8[0x10] = 0;
  uVar2 = *param_1;
  local_848 = param_1 + 1;
  uVar11 = uVar2 & 0xff;
  auStack_820[0xe] = 0;
  auStack_820[0xf] = 0;
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
  if (uVar11 < 0x11) {
    local_878 = (ulonglong *)&local_854;
    local_870 = (uint *)param_2;
    local_868 = param_3;
    local_858 = uVar2;
    local_84c = uVar11;
    local_840 = param_1;
    local_838 = FUN_1805f2fe0(local_348,0x100,local_7d8,&local_850);
    if ((local_838 < 0xffffffffffffff89) && (uVar10 = (ulonglong)local_854, local_854 <= uVar11)) {
      iVar21 = local_7d8[uVar10];
      uVar17 = local_854;
      while (iVar21 == 0) {
        uVar17 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar17;
        iVar21 = local_7d8[uVar10];
      }
      uVar19 = uVar17 + 1;
      iVar21 = 0;
      if (1 < uVar19) {
        lVar12 = 0;
        uVar10 = (ulonglong)uVar17;
        iVar20 = iVar21;
        do {
          iVar21 = iVar20 + *(int *)((longlong)local_7d8 + lVar12 + 4);
          *(int *)((longlong)auStack_820 + lVar12) = iVar20;
          lVar12 = lVar12 + 4;
          uVar10 = uVar10 - 1;
          iVar20 = iVar21;
        } while (uVar10 != 0);
      }
      uVar15 = 0;
      if (local_850 != 0) {
        pbVar16 = local_348;
        do {
          bVar1 = *pbVar16;
          pbVar16 = pbVar16 + 1;
          uVar18 = auStack_820[(ulonglong)bVar1 - 1];
          local_248[(ulonglong)uVar18 * 2] = (byte)uVar15;
          uVar15 = uVar15 + 1;
          auStack_820[(ulonglong)bVar1 - 1] = uVar18 + 1;
          local_248[(ulonglong)uVar18 * 2 + 1] = bVar1;
        } while (uVar15 < local_850);
      }
      uVar15 = 1;
      local_828 = local_828 & 0xffffffff;
      if (1 < uVar19) {
        lVar12 = 0;
        iVar20 = 0;
        do {
          lVar7 = lVar12 + 4;
          cVar3 = (char)uVar15;
          *(int *)((longlong)local_788 + lVar12 + 4) = iVar20;
          uVar15 = uVar15 + 1;
          lVar12 = lVar12 + 4;
          iVar20 = iVar20 + (*(int *)((longlong)local_7d8 + lVar7) <<
                            (((char)uVar2 - (char)local_854) + -1 + cVar3 & 0x1fU));
        } while (uVar15 < uVar19);
      }
      uVar15 = (local_854 - uVar17) + 1;
      uVar18 = (uVar11 - uVar15) + 1;
      if (uVar15 < uVar18) {
        puVar13 = local_788 + (ulonglong)uVar15 * 0x11;
        lVar12 = (ulonglong)uVar15 * -0x44;
        do {
          uVar10 = 1;
          if (1 < uVar19) {
            if ((0xf < uVar17) &&
               ((local_788 + uVar17 < puVar13 + 1 || (puVar13 + uVar17 < local_788 + 1)))) {
              uVar11 = 9;
              uVar14 = uVar10;
              do {
                uVar9 = (int)uVar14 + 0x10;
                uVar10 = (ulonglong)uVar9;
                uVar4 = local_788[uVar14 + 1];
                uVar5 = local_788[uVar14 + 2];
                uVar6 = local_788[uVar14 + 3];
                uVar22 = (ulonglong)uVar15;
                puVar8 = puVar13 + uVar14;
                *puVar8 = local_788[uVar14] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar14 = (ulonglong)(uVar11 - 4);
                uVar4 = local_788[uVar14 + 1];
                uVar5 = local_788[uVar14 + 2];
                uVar6 = local_788[uVar14 + 3];
                puVar8 = puVar13 + uVar14;
                *puVar8 = local_788[uVar14] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar4 = local_788[(ulonglong)uVar11 + 1];
                uVar5 = local_788[(ulonglong)uVar11 + 2];
                uVar6 = local_788[(ulonglong)uVar11 + 3];
                uVar22 = (ulonglong)uVar15;
                puVar8 = puVar13 + uVar11;
                *puVar8 = local_788[uVar11] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar14 = (ulonglong)(uVar11 + 4);
                uVar11 = uVar11 + 0x10;
                uVar4 = local_788[uVar14 + 1];
                uVar5 = local_788[uVar14 + 2];
                uVar6 = local_788[uVar14 + 3];
                puVar8 = puVar13 + uVar14;
                *puVar8 = local_788[uVar14] >> uVar22;
                puVar8[1] = uVar4 >> uVar22;
                puVar8[2] = uVar5 >> uVar22;
                puVar8[3] = uVar6 >> uVar22;
                uVar14 = uVar10;
              } while (uVar9 < uVar19 - (uVar17 & 0xf));
              if (uVar19 <= uVar9) goto LAB_1805f2f25;
            }
            uVar14 = (ulonglong)(uVar19 - (int)uVar10);
            puVar8 = puVar13 + uVar10;
            do {
              *puVar8 = *(uint *)(lVar12 + (longlong)puVar8) >> ((byte)uVar15 & 0x1f);
              uVar14 = uVar14 - 1;
              puVar8 = puVar8 + 1;
            } while (uVar14 != 0);
          }
LAB_1805f2f25:
          uVar15 = uVar15 + 1;
          puVar13 = puVar13 + 0x11;
          lVar12 = lVar12 + -0x44;
        } while (uVar15 < uVar18);
        uVar11 = local_84c;
      }
      local_860 = local_854 + 1;
      local_868 = CONCAT44(local_868._4_4_,uVar17);
      local_870 = local_788;
      local_878 = &local_828;
      FUN_1805eb8c0(local_848,uVar11,local_248,iVar21);
      local_858 = CONCAT22(CONCAT11(local_858._3_1_,(char)uVar2),CONCAT11(1,(undefined1)local_858));
      *local_840 = local_858;
    }
  }
}



