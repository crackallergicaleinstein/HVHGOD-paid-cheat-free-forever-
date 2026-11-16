// FUN_1803ea320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ea320 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803ea650) */

void FUN_1803ea320(int *param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  longlong *param_6,longlong *param_7)

{
  undefined1 *puVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  char cVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auStack_168 [32];
  char local_148;
  uint local_140 [2];
  uint local_138;
  uint local_134;
  uint local_130 [2];
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  byte *local_100;
  longlong local_f8;
  byte *local_f0;
  int local_e0 [4];
  ulonglong local_d0;
  longlong local_c8;
  longlong local_c0;
  int *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong local_78 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  uVar26 = (ulonglong)param_3;
  local_88 = param_7;
  local_b8 = param_1;
  if ((((param_2 == 0) || (param_3 < 0x10)) || (param_4 < 0x10)) ||
     (((0x800 < param_3 || (0x800 < param_4)) || (param_5 < param_3 * 4)))) {
LAB_1803eae8c:
    *(undefined1 *)(local_b8 + 4) = 0;
  }
  local_80 = param_4 * uVar26;
  local_140[0] = param_3;
  local_118 = param_4;
  local_a8 = param_2;
  FUN_1801acf20(param_6,local_80 * 4);
  uVar25 = local_80;
  uVar29 = local_140[0];
  uVar28 = 0;
  uVar27 = 0;
  local_114 = 0;
  local_130[0] = 0;
  local_110 = 0;
  local_10c = 0;
  local_138 = 0;
  local_148 = '\0';
  local_108 = 0;
  iVar19 = param_3 * 4;
  uVar6 = iVar19 - 4;
  local_c8 = 0;
  local_98 = uVar26 * 4;
  uVar13 = (ulonglong)uVar6;
  local_100 = (byte *)(local_a8 + 2 + uVar13);
  local_90 = (iVar19 - 3) - uVar13;
  local_a0 = (iVar19 - 2) - uVar13;
  local_d0 = ~(ulonglong)uVar6;
  local_f8 = -(ulonglong)uVar6;
  local_c0 = -2 - uVar13;
  uVar13 = uVar27;
  uVar6 = uVar28;
  do {
    uVar16 = (uint)local_100[-2] + (uint)local_100[local_c0] >> 1;
    local_124 = (uint)local_100[local_d0] + (uint)local_100[local_90 + -2] >> 1;
    bVar3 = local_100[local_f8];
    local_128 = (uint)local_100[local_a0 + -2] + (uint)bVar3 >> 1;
    iVar7 = (uint)bVar3 - (uint)local_100[local_a0 + -2];
    iVar19 = -iVar7;
    if (iVar19 < 0) {
      iVar19 = iVar7;
    }
    iVar8 = (uint)local_100[local_c0] - (uint)local_100[-2];
    iVar7 = -iVar8;
    if (iVar7 < 0) {
      iVar7 = iVar8;
    }
    iVar9 = (uint)local_100[local_d0] - (uint)local_100[local_90 + -2];
    iVar8 = -iVar9;
    if (iVar8 < 0) {
      iVar8 = iVar9;
    }
    uVar23 = uVar28;
    if (iVar19 < 7) {
      uVar23 = (uint)(iVar7 < 7 && iVar8 < 7);
    }
    if ((char)uVar23 == '\0') {
      if (local_148 != '\0') {
        iVar7 = bVar3 - local_138;
        iVar19 = -iVar7;
        if (iVar19 < 0) {
          iVar19 = iVar7;
        }
        iVar8 = local_100[local_d0] - local_10c;
        iVar7 = -iVar8;
        if (iVar7 < 0) {
          iVar7 = iVar8;
        }
        uVar16 = (uint)local_100[local_c0];
        iVar8 = -(uVar16 - local_110);
        if (iVar8 < 0) {
          iVar8 = uVar16 - local_110;
        }
        uVar23 = uVar28;
        if (iVar19 < 7) {
          uVar23 = (uint)(iVar7 < 7 && iVar8 < 7);
        }
        iVar19 = -(*local_100 - local_138);
        if (iVar19 < 0) {
          iVar19 = *local_100 - local_138;
        }
        iVar7 = -(local_100[-1] - local_10c);
        if (iVar7 < 0) {
          iVar7 = local_100[-1] - local_10c;
        }
        iVar8 = -(local_100[-2] - local_110);
        if (iVar8 < 0) {
          iVar8 = local_100[-2] - local_110;
        }
        uVar10 = uVar28;
        if (iVar19 < 7) {
          uVar10 = (uint)(iVar7 < 7 && iVar8 < 7);
        }
        if ((char)uVar23 == '\0') {
          cVar21 = (char)uVar10;
          if (cVar21 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            if (cVar21 != '\0') {
              uVar16 = (uint)local_100[-2];
              bVar2 = true;
              local_124 = (uint)local_100[-1];
              local_128 = (uint)*local_100;
              goto LAB_1803ea674;
            }
          }
          uVar16 = local_110;
          if (cVar21 == '\0') {
            local_124 = local_10c;
            local_128 = local_138;
          }
          else {
            local_124 = (uint)local_100[-1];
            local_128 = (uint)*local_100;
          }
        }
        else {
          bVar2 = true;
          local_124 = (uint)local_100[local_d0];
          local_128 = (uint)local_100[local_f8];
        }
LAB_1803ea674:
        if (bVar2) goto LAB_1803ea694;
      }
    }
    else {
LAB_1803ea694:
      local_130[0] = local_130[0] + 1;
      local_148 = '\x01';
      local_138 = local_128;
      local_110 = uVar16;
      local_10c = local_124;
    }
    local_e0[2] = 0xff;
    local_e0[0] = 0;
    local_f0 = local_100 + local_c0;
    local_b0 = local_c8;
    uVar23 = uVar28;
    do {
      pbVar24 = local_f0 + uVar23 * 4;
      pbVar22 = (byte *)(*param_6 + local_b0);
      local_134 = (uint)*pbVar24;
      uVar10 = -(local_134 - uVar16);
      if ((int)uVar10 < 0) {
        uVar10 = local_134 - uVar16;
      }
      uVar12 = uVar28;
      if (0 < (int)uVar10) {
        uVar12 = uVar10;
      }
      uVar10 = -(pbVar24[1] - local_124);
      if ((int)uVar10 < 0) {
        uVar10 = pbVar24[1] - local_124;
      }
      if ((int)uVar12 < (int)uVar10) {
        uVar12 = uVar10;
      }
      uVar10 = -(pbVar24[2] - local_128);
      if ((int)uVar10 < 0) {
        uVar10 = pbVar24[2] - local_128;
      }
      if ((int)uVar12 < (int)uVar10) {
        uVar12 = uVar10;
      }
      local_e0[1] = (int)((uVar12 - 3) * 0xff) / 6;
      piVar4 = local_e0;
      if (-1 < local_e0[1]) {
        piVar4 = local_e0 + 1;
      }
      piVar11 = local_e0 + 2;
      if (local_e0[1] < 0x100) {
        piVar11 = piVar4;
      }
      iVar19 = *piVar11;
      if (iVar19 == 0xff) {
        *pbVar22 = *pbVar24;
        pbVar22[1] = pbVar24[1];
        pbVar22[2] = pbVar24[2];
        pbVar22[3] = 0xff;
LAB_1803ea8a1:
        local_114 = local_114 + 1;
        if ((int)uVar23 < (int)uVar26) {
          uVar26 = (ulonglong)uVar23;
        }
        if ((int)uVar13 < (int)(uVar23 + 1)) {
          uVar13 = (ulonglong)(uVar23 + 1);
        }
        if ((int)local_108 < (int)param_4) {
          param_4 = local_108;
        }
        if ((int)uVar6 < (int)(local_108 + 1)) {
          uVar6 = local_108 + 1;
        }
      }
      else {
        if (iVar19 == 0) {
          bVar3 = 0;
        }
        else {
          local_11c = 0xff;
          local_120 = 0;
          local_134 = (int)(local_134 * 0xff - (0xff - iVar19) * uVar16) / iVar19;
          puVar14 = &local_120;
          if (-1 < (int)local_134) {
            puVar14 = &local_134;
          }
          puVar5 = &local_11c;
          if ((int)local_134 < 0x100) {
            puVar5 = puVar14;
          }
          bVar3 = (byte)*puVar5;
        }
        *pbVar22 = bVar3;
        if (iVar19 == 0) {
          bVar3 = 0;
        }
        else {
          local_11c = 0xff;
          local_120 = 0;
          local_134 = (int)((uint)pbVar24[1] * 0xff - (0xff - iVar19) * local_124) / iVar19;
          puVar14 = &local_120;
          if (-1 < (int)local_134) {
            puVar14 = &local_134;
          }
          puVar5 = &local_11c;
          if ((int)local_134 < 0x100) {
            puVar5 = puVar14;
          }
          bVar3 = (byte)*puVar5;
        }
        pbVar22[1] = bVar3;
        if (iVar19 == 0) {
          pbVar22[2] = 0;
          pbVar22[3] = 0;
        }
        else {
          local_11c = 0xff;
          local_120 = 0;
          local_134 = (int)((uint)pbVar24[2] * 0xff - (0xff - iVar19) * local_128) / iVar19;
          puVar14 = &local_120;
          if (-1 < (int)local_134) {
            puVar14 = &local_134;
          }
          puVar5 = &local_11c;
          if ((int)local_134 < 0x100) {
            puVar5 = puVar14;
          }
          pbVar22[2] = (byte)*puVar5;
          pbVar22[3] = (byte)iVar19;
          if (0x7f < iVar19) goto LAB_1803ea8a1;
        }
      }
      uVar23 = uVar23 + 1;
      local_b0 = local_b0 + 4;
    } while (uVar23 < local_140[0]);
    local_128 = uVar6;
    local_120 = (uint)uVar13;
    local_134 = param_4;
    local_11c = (uint)uVar26;
    local_108 = local_108 + 1;
    local_100 = local_100 + param_5;
    local_c8 = local_c8 + local_98;
  } while (local_108 < local_118);
  if (local_130[0] < (local_118 * 9) / 10) goto LAB_1803eae8c;
  uVar30 = (ulonglong)local_140[0];
  uVar28 = local_118 * local_140[0];
  if (((local_114 < uVar28 / 500) || ((int)(uVar6 - param_4) < (int)(local_118 >> 2))) ||
     ((int)((uint)uVar13 - (uint)uVar26) < (int)(local_140[0] / 0x14))) goto LAB_1803eae8c;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_58 = (undefined1  [16])0x0;
  plVar18 = local_78;
  if (local_88 != (longlong *)0x0) {
    plVar18 = local_88;
  }
  lVar20 = *plVar18;
  local_114 = uVar28;
  if ((ulonglong)(plVar18[2] - lVar20) < local_80) {
    FUN_1803f9450(plVar18,local_80);
    lVar17 = *plVar18;
  }
  else {
    uVar26 = plVar18[1] - lVar20;
    if (local_80 <= uVar26) {
      lVar17 = local_80 + lVar20;
      FUN_18063ab10(lVar20,0,lVar17 - lVar20);
      goto LAB_1803eaa7d;
    }
    FUN_18063ab10(lVar20,0,uVar26);
    uVar25 = uVar25 - uVar26;
    lVar17 = plVar18[1];
  }
  FUN_18063ab10(lVar17,0,uVar25);
  lVar17 = lVar17 + uVar25;
LAB_1803eaa7d:
  plVar18[1] = lVar17;
  if (plVar18[3] != plVar18[4]) {
    plVar18[4] = plVar18[3];
  }
  FUN_1803d2900(plVar18 + 3,lVar17 - *plVar18);
  uVar6 = (local_118 - 1) * uVar29;
  iVar19 = -uVar6;
  do {
    uVar26 = (ulonglong)uVar6;
    local_140[0] = iVar19 + uVar6;
    if ((*(char *)(*plVar18 + uVar27) == '\0') && (*(char *)(*param_6 + 3 + uVar27 * 4) == '\0')) {
      *(undefined1 *)(*plVar18 + uVar27) = 1;
      FUN_1802aa650(plVar18 + 3,local_140);
    }
    if ((*(char *)(*plVar18 + uVar26) == '\0') && (*(char *)(*param_6 + 3 + uVar26 * 4) == '\0')) {
      *(undefined1 *)(*plVar18 + uVar26) = 1;
      local_140[0] = uVar6;
      FUN_1802aa650(plVar18 + 3,local_140);
    }
    uVar27 = uVar27 + 1;
    uVar6 = uVar6 + 1;
  } while (iVar19 + uVar6 < uVar29);
  uVar6 = 0;
  do {
    local_140[0] = uVar29 * uVar6;
    if ((*(char *)(*plVar18 + (ulonglong)local_140[0]) == '\0') &&
       (*(char *)(*param_6 + 3 + (ulonglong)local_140[0] * 4) == '\0')) {
      *(undefined1 *)(*plVar18 + (ulonglong)local_140[0]) = 1;
      FUN_1802aa650(plVar18 + 3,local_140);
    }
    uVar6 = uVar6 + 1;
    local_140[0] = uVar6 * uVar29 - 1;
    if ((*(char *)((ulonglong)local_140[0] + *plVar18) == '\0') &&
       (*(char *)(*param_6 + 3 + (ulonglong)local_140[0] * 4) == '\0')) {
      *(undefined1 *)(*plVar18 + (ulonglong)local_140[0]) = 1;
      FUN_1802aa650(plVar18 + 3);
    }
    uVar28 = local_118;
  } while (uVar6 < local_118);
  uVar26 = 0;
  lVar20 = plVar18[3];
  if (plVar18[4] - lVar20 >> 2 != 0) {
    do {
      uVar6 = *(uint *)(lVar20 + uVar26 * 4);
      local_140[0] = uVar6 / uVar29;
      local_108 = uVar6 % uVar29;
      if (local_108 == 0) {
LAB_1803eac36:
        local_130[0] = uVar6 + 1;
        if ((*(char *)(*plVar18 + (ulonglong)local_130[0]) == '\0') &&
           (*(char *)(*param_6 + 3 + (ulonglong)local_130[0] * 4) == '\0')) {
          *(undefined1 *)(*plVar18 + (ulonglong)local_130[0]) = 1;
          FUN_1802aa650(plVar18 + 3,local_130);
        }
      }
      else {
        local_130[0] = uVar6 - 1;
        if ((*(char *)(*plVar18 + (ulonglong)local_130[0]) == '\0') &&
           (*(char *)(*param_6 + 3 + (ulonglong)local_130[0] * 4) == '\0')) {
          *(undefined1 *)(*plVar18 + (ulonglong)local_130[0]) = 1;
          FUN_1802aa650(plVar18 + 3,local_130);
        }
        if (local_108 + 1 < uVar29) goto LAB_1803eac36;
      }
      if (local_140[0] == 0) {
LAB_1803eacac:
        local_140[0] = uVar29 + uVar6;
        if ((*(char *)(*plVar18 + (ulonglong)local_140[0]) == '\0') &&
           (*(char *)(*param_6 + 3 + (ulonglong)local_140[0] * 4) == '\0')) {
          *(undefined1 *)((ulonglong)local_140[0] + *plVar18) = 1;
          FUN_1802aa650(plVar18 + 3);
        }
      }
      else {
        local_130[0] = uVar6 - uVar29;
        if ((*(char *)(*plVar18 + (ulonglong)local_130[0]) == '\0') &&
           (*(char *)(*param_6 + 3 + (ulonglong)local_130[0] * 4) == '\0')) {
          *(undefined1 *)((ulonglong)local_130[0] + *plVar18) = 1;
          FUN_1802aa650(plVar18 + 3);
        }
        if (local_140[0] + 1 < uVar28) goto LAB_1803eacac;
      }
      uVar26 = uVar26 + 1;
      lVar20 = plVar18[3];
    } while (uVar26 < (ulonglong)(plVar18[4] - lVar20 >> 2));
  }
  uVar13 = 0;
  local_138 = 0;
  local_140[0] = local_118 >> 2;
  local_f8 = 0;
  uVar26 = uVar13;
  uVar25 = uVar13;
  do {
    uVar6 = 0;
    bVar2 = false;
    lVar20 = local_f8;
    do {
      if ((*(char *)(lVar20 + *plVar18) == '\0') &&
         (puVar1 = (undefined1 *)(*param_6 + lVar20 * 4), puVar1[3] == '\0')) {
        puVar15 = (undefined1 *)(param_5 * uVar26 + local_a8 + (ulonglong)(uVar6 * 4));
        *puVar1 = *puVar15;
        *(undefined1 *)(*param_6 + 1 + lVar20 * 4) = puVar15[1];
        *(undefined1 *)(*param_6 + 2 + lVar20 * 4) = puVar15[2];
        *(undefined1 *)(*param_6 + 3 + lVar20 * 4) = 0xff;
      }
      if (0x7f < *(byte *)(*param_6 + 3 + lVar20 * 4)) {
        uVar13 = (ulonglong)((int)uVar13 + 1);
        bVar2 = true;
      }
      uVar6 = uVar6 + 1;
      lVar20 = lVar20 + 1;
    } while (uVar6 < uVar29);
    uVar6 = (uint)uVar25;
    if (((local_140[0] <= uVar6) && (uVar6 < local_118 * 3 >> 2)) && (bVar2)) {
      local_138 = local_138 + 1;
    }
    uVar25 = (ulonglong)(uVar6 + 1);
    uVar26 = uVar26 + 1;
    local_f8 = local_f8 + uVar30;
  } while (uVar6 + 1 < local_118);
  if (((uint)uVar13 < local_114 / 0x28) || (local_138 < local_118 / 3)) {
    *(undefined1 *)(local_b8 + 4) = 0;
  }
  else {
    iVar19 = 0;
    if (0 < (int)(local_11c - 2)) {
      iVar19 = local_11c - 2;
    }
    *local_b8 = iVar19;
    iVar19 = 0;
    if (0 < (int)(local_134 - 2)) {
      iVar19 = local_134 - 2;
    }
    local_b8[1] = iVar19;
    if ((int)(local_120 + 2) < (int)uVar29) {
      uVar29 = local_120 + 2;
    }
    local_b8[2] = uVar29;
    uVar29 = local_118;
    if ((int)(local_128 + 2) < (int)local_118) {
      uVar29 = local_128 + 2;
    }
    local_b8[3] = uVar29;
    *(undefined1 *)(local_b8 + 4) = 1;
  }
  FUN_180159650(local_78 + 3);
  FUN_180113710(local_78);
}



