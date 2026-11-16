// FUN_1805ebd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ebd30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ebd30(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auStack_878 [32];
  ulonglong *local_858;
  uint *local_850;
  undefined8 local_848;
  int local_840;
  uint local_838;
  uint local_834 [3];
  ulonglong local_828;
  uint auStack_820 [18];
  int local_7d8 [20];
  uint local_788 [272];
  byte local_348 [256];
  byte local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_878;
  uVar4 = *param_1;
  local_7d8[0x10] = 0;
  auStack_820[0xe] = 0;
  auStack_820[0xf] = 0;
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
  if (uVar4 < 0x11) {
    local_858 = (ulonglong *)&local_838;
    local_850 = (uint *)param_2;
    local_848 = param_3;
    uVar11 = FUN_1805ec060(local_348,0x100,local_7d8,local_834);
    if ((uVar11 < 0xffffffffffffff89) && (uVar11 = (ulonglong)local_838, local_838 <= uVar4)) {
      iVar5 = local_7d8[uVar11];
      uVar19 = local_838;
      while (iVar5 == 0) {
        uVar19 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar19;
        iVar5 = local_7d8[uVar11];
      }
      uVar15 = 0;
      uVar11 = 1;
      uVar16 = uVar15;
      if (uVar19 != 0) {
        do {
          uVar13 = (int)uVar11 + 1;
          uVar15 = uVar16 + local_7d8[uVar11];
          auStack_820[uVar11 - 1] = uVar16;
          uVar11 = (ulonglong)uVar13;
          uVar16 = uVar15;
        } while (uVar13 <= uVar19);
      }
      uVar16 = 0;
      if (local_834[0] != 0) {
        pbVar18 = local_348;
        do {
          bVar3 = *pbVar18;
          pbVar18 = pbVar18 + 1;
          uVar13 = auStack_820[(ulonglong)bVar3 - 1];
          local_248[(ulonglong)uVar13 * 2] = (byte)uVar16;
          uVar16 = uVar16 + 1;
          auStack_820[(ulonglong)bVar3 - 1] = uVar13 + 1;
          local_248[(ulonglong)uVar13 * 2 + 1] = bVar3;
        } while (uVar16 < local_834[0]);
      }
      local_828 = local_828 & 0xffffffff;
      uVar16 = (local_838 - uVar19) + 1;
      if (uVar19 != 0) {
        uVar11 = 1;
        uVar13 = 0;
        do {
          cVar6 = (char)uVar11;
          uVar17 = (int)uVar11 + 1;
          piVar2 = local_7d8 + uVar11;
          local_788[uVar11] = uVar13;
          uVar11 = (ulonglong)uVar17;
          uVar13 = uVar13 + (*piVar2 << (((char)uVar4 - (char)local_838) + -1 + cVar6 & 0x1fU));
        } while (uVar17 <= uVar19);
      }
      uVar13 = uVar4 - uVar16;
      for (; uVar16 <= uVar13; uVar16 = uVar16 + 1) {
        uVar11 = (ulonglong)uVar16;
        uVar17 = 1;
        if (uVar19 != 0) {
          if ((0xf < uVar19) &&
             ((local_788 + uVar19 < local_788 + uVar11 * 0x11 + 1 ||
              (local_788 + uVar11 * 0x11 + (ulonglong)uVar19 < local_788 + 1)))) {
            uVar14 = 9;
            uVar10 = uVar17;
            do {
              uVar17 = uVar10 + 0x10;
              uVar7 = local_788[(ulonglong)uVar10 + 1];
              uVar8 = local_788[(ulonglong)uVar10 + 2];
              uVar9 = local_788[(ulonglong)uVar10 + 3];
              uVar20 = (ulonglong)uVar16;
              puVar1 = local_788 + uVar11 * 0x11 + (ulonglong)uVar10;
              *puVar1 = local_788[uVar10] >> uVar20;
              puVar1[1] = uVar7 >> uVar20;
              puVar1[2] = uVar8 >> uVar20;
              puVar1[3] = uVar9 >> uVar20;
              uVar12 = (ulonglong)(uVar14 - 4);
              uVar10 = local_788[uVar12 + 1];
              uVar7 = local_788[uVar12 + 2];
              uVar8 = local_788[uVar12 + 3];
              puVar1 = local_788 + uVar11 * 0x11 + uVar12;
              *puVar1 = local_788[uVar12] >> uVar20;
              puVar1[1] = uVar10 >> uVar20;
              puVar1[2] = uVar7 >> uVar20;
              puVar1[3] = uVar8 >> uVar20;
              uVar10 = local_788[(ulonglong)uVar14 + 1];
              uVar7 = local_788[(ulonglong)uVar14 + 2];
              uVar8 = local_788[(ulonglong)uVar14 + 3];
              uVar20 = (ulonglong)uVar16;
              puVar1 = local_788 + uVar11 * 0x11 + (ulonglong)uVar14;
              *puVar1 = local_788[uVar14] >> uVar20;
              puVar1[1] = uVar10 >> uVar20;
              puVar1[2] = uVar7 >> uVar20;
              puVar1[3] = uVar8 >> uVar20;
              uVar12 = (ulonglong)(uVar14 + 4);
              uVar14 = uVar14 + 0x10;
              uVar10 = local_788[uVar12 + 1];
              uVar7 = local_788[uVar12 + 2];
              uVar8 = local_788[uVar12 + 3];
              puVar1 = local_788 + uVar11 * 0x11 + uVar12;
              *puVar1 = local_788[uVar12] >> uVar20;
              puVar1[1] = uVar10 >> uVar20;
              puVar1[2] = uVar7 >> uVar20;
              puVar1[3] = uVar8 >> uVar20;
              uVar10 = uVar17;
            } while (uVar17 <= (uVar19 & 0xfffffff0));
            if (uVar19 < uVar17) goto LAB_1805ebfcf;
          }
          do {
            uVar10 = uVar17 + 1;
            local_788[uVar11 * 0x11 + (ulonglong)uVar17] =
                 local_788[uVar17] >> ((byte)uVar16 & 0x1f);
            uVar17 = uVar10;
          } while (uVar10 <= uVar19);
        }
LAB_1805ebfcf:
      }
      local_840 = local_838 + 1;
      local_850 = local_788;
      local_848 = CONCAT44(local_848._4_4_,uVar19);
      local_858 = &local_828;
      FUN_1805eb8c0(param_1 + 1,uVar4,local_248,uVar15);
    }
  }
}



