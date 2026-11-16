// FUN_1805b8500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b8500 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805b8500(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                  char param_5,uint param_6,uint param_7,int *param_8)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int *piVar13;
  int *piVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  ushort uVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  int iVar32;
  undefined8 *puVar33;
  longlong lVar34;
  undefined4 *puVar35;
  uint *puVar36;
  byte bVar37;
  uint uVar38;
  byte bVar39;
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  longlong lVar45;
  uint uVar46;
  undefined8 *puVar47;
  ulonglong uVar48;
  bool bVar49;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_6448 [32];
  char *local_6428;
  undefined8 local_6420;
  uint local_6418;
  uint *local_6410;
  uint local_6408;
  int *local_6400;
  char local_63f8;
  byte local_63f7;
  uint local_63f4;
  uint local_63f0;
  undefined8 *local_63e0;
  int local_63d8;
  undefined8 *local_63d0;
  uint local_63c8;
  uint local_63c4;
  int local_63c0;
  undefined8 *local_63b8;
  longlong local_63b0;
  uint local_63a8;
  uint local_63a4;
  undefined4 local_63a0;
  int local_639c;
  uint local_6398;
  int *local_6390;
  uint local_6388 [2];
  undefined8 local_6380;
  ulonglong local_6378;
  undefined8 *local_6370;
  undefined8 local_6368;
  undefined8 local_6360;
  undefined8 local_6358;
  int *local_6350;
  undefined8 local_6348;
  undefined8 local_6340;
  ulonglong local_6338;
  undefined8 local_6330;
  undefined8 local_6328;
  undefined8 local_6320;
  int *local_6318;
  undefined8 local_6310;
  undefined8 local_6308;
  ulonglong local_6300;
  undefined8 local_62f8;
  undefined8 local_62f0;
  int *local_62e8;
  undefined8 uStack_62e0;
  ulonglong local_62d8;
  ulonglong uStack_62d0;
  undefined8 local_62c8;
  undefined8 uStack_62c0;
  int *local_62b8;
  undefined8 local_62b0;
  ulonglong local_62a8;
  ulonglong local_62a0;
  undefined8 local_6298;
  undefined8 uStack_6290;
  undefined8 *local_6288;
  undefined8 local_6280;
  undefined8 *local_6278;
  undefined8 **local_6270;
  undefined8 *local_6268;
  char local_6260;
  undefined1 local_625f;
  undefined2 local_625e;
  undefined4 local_625c;
  undefined1 local_6258 [6152];
  undefined8 *local_4a50;
  undefined8 **local_4a48;
  undefined8 *local_4a40;
  undefined1 local_4a38;
  undefined1 local_4a37;
  undefined2 local_4a36;
  undefined4 local_4a34;
  undefined1 local_4a30 [6152];
  undefined8 *local_3228;
  undefined8 **local_3220;
  undefined8 *local_3218;
  undefined1 local_3210;
  undefined1 local_320f;
  undefined2 local_320e;
  undefined4 local_320c;
  undefined1 local_3208 [6152];
  undefined8 local_1a00;
  int *local_19f8;
  undefined8 local_19f0;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined8 local_19d8;
  undefined8 uStack_19d0;
  undefined4 local_19c8;
  undefined4 local_19c4;
  undefined4 local_19c0;
  undefined8 local_19bc;
  undefined2 local_19b4;
  undefined1 local_19b2;
  undefined1 local_19b1;
  undefined8 *local_19b0;
  undefined8 *local_19a8;
  int **local_19a0;
  uint local_1998;
  undefined4 local_1994;
  undefined8 *local_1990;
  int local_1988;
  int local_1984;
  int local_1980;
  undefined4 local_197c;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  char local_1950;
  undefined8 local_194f;
  undefined8 uStack_1947;
  undefined8 local_193f;
  undefined8 uStack_1937;
  undefined4 local_192f;
  undefined2 local_192b;
  undefined1 local_1929;
  undefined8 *local_1928;
  undefined8 **local_1920;
  undefined8 *local_1918;
  undefined1 local_190f;
  undefined4 local_190c;
  uint auStack_110 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 uStack_dc;
  ulonglong local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x1805b8522;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_6448;
  local_6390 = param_8;
  local_63d8 = 0;
  uVar11 = *param_1;
  piVar14 = (int *)(param_1 + 1);
  lVar45 = param_1[0x1e];
  puVar33 = (undefined8 *)0x0;
  local_63a0 = *(undefined4 *)(param_1 + 7);
  local_63c8 = 0;
  local_63a8 = local_63a8 & 0xffffff00;
  local_63f7 = 0;
  local_63c0 = 0;
  local_639c = *(int *)(*(longlong *)(lVar45 + 0x328) + 0x21c) << 0x10;
  local_6378 = 0;
  local_6308 = 0;
  local_6300 = 0;
  local_62f8 = 0;
  local_62f0 = 0;
  local_6340 = 0;
  local_6338 = 0;
  local_6330 = 0;
  local_6328 = 0;
  uStack_62e0 = 0;
  local_62d8 = 0;
  uStack_62d0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  local_6260 = '\0';
  local_625e = 0;
  local_6398 = 20000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_6310 = 0x14;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_6348 = 0x14;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_62c8 = 0;
  uStack_62c0 = 0;
  local_6400 = piVar14;
  local_63d0 = param_1;
  local_63b0 = lVar45;
  local_6380 = uVar11;
  local_6370 = param_4;
  local_6368 = param_3;
  local_6358 = uVar11;
  local_6350 = piVar14;
  local_6320 = uVar11;
  local_6318 = piVar14;
  local_62e8 = piVar14;
  FUN_18063ab10(local_6258,0,0x1808);
  local_4a38 = 0;
  local_4a36 = 0;
  FUN_18063ab10(local_4a30,0,0x1808);
  local_3210 = 0;
  local_320e = 0;
  FUN_18063ab10(local_3208,0,0x1808);
  local_1994 = 0;
  local_1958 = 0;
  local_192f = 0;
  local_192b = 0;
  local_1929 = 0;
  local_6280 = local_6368;
  local_1978 = 0;
  uStack_1970 = 0;
  local_1968 = 0;
  uStack_1960 = 0;
  local_194f = 0;
  uStack_1947 = 0;
  local_193f = 0;
  uStack_1937 = 0;
  local_19f0 = 0x10;
  local_19e8 = 0;
  uStack_19e0 = 0;
  local_19d8 = 0;
  uStack_19d0 = 0;
  local_6288 = param_1;
  local_1a00 = uVar11;
  local_19f8 = piVar14;
  FUN_18063ab10(&local_3228,0,0x1828);
  uVar15 = *(undefined1 *)(param_1 + 0x20);
  local_320c = local_63a0;
  local_3220 = &local_3228;
  local_3218 = &local_1a00;
  local_3228 = param_1;
  local_320f = uVar15;
  FUN_18063ab10(&local_4a50,0,0x1828);
  local_4a34 = local_63a0;
  local_4a48 = &local_3228;
  local_4a40 = &local_1a00;
  local_4a50 = param_1;
  local_4a37 = uVar15;
  FUN_18063ab10(&local_6278,0,0x1828);
  local_6270 = &local_3228;
  local_1988 = *(int *)((longlong)param_1 + 300);
  local_6268 = &local_1a00;
  local_19c8 = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_19c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  local_625c = local_63a0;
  local_19bc = *local_6370;
  local_19b0 = &local_6320;
  local_19a8 = &local_6358;
  local_19a0 = &local_62e8;
  local_6408 = param_7;
  local_1998 = param_7;
  local_1990 = param_1 + 0x27;
  local_19b2 = *(undefined1 *)((longlong)param_1 + 0x101);
  local_19c0 = local_63a0;
  local_1984 = *(int *)(param_1 + 0x26);
  iVar32 = -local_1988;
  if (-local_1988 < 0) {
    iVar32 = local_1988;
  }
  iVar18 = -local_1984;
  if (-1 < local_1984) {
    iVar18 = local_1984;
  }
  if (iVar18 < iVar32) {
    local_1980 = local_1988;
  }
  else {
    local_1980 = local_1984;
  }
  if (local_1980 < 0) {
    local_1980 = -local_1980;
  }
  local_63f8 = *(char *)((longlong)param_1 + 0xd) != '\0';
  local_1980 = local_1980 * 2;
  local_197c = 0x199a;
  local_19b1 = 1;
  local_19b4 = 0;
  local_1950 = '\0';
  *local_6390 = *(int *)(*(longlong *)(lVar45 + 0x328) + 0x218) << 0x10;
  if (*(char *)((longlong)param_1 + 0xd) == '\0') {
    uVar42 = 0x30;
  }
  else {
    uVar42 = *(uint *)(*(longlong *)(lVar45 + 800) + 0x694);
  }
  local_63a4 = uVar42;
  local_6278 = param_1;
  local_625f = uVar15;
  puVar10 = (undefined8 *)FUN_18057abe0(local_6380);
  if (local_6388[0] == 0) {
    local_6420 = local_6388;
    *puVar10 = local_6380;
    puVar10[1] = piVar14;
    local_6428 = (char *)0x0;
    uVar11 = FUN_18057ac40(local_6380,8,0,uVar42);
    puVar10[2] = uVar11;
    if (local_6388[0] == 0) {
      *(uint *)(puVar10 + 4) = uVar42;
      puVar10[3] = uVar11;
      puVar21 = puVar10;
      puVar28 = puVar10;
      if (puVar10 == (undefined8 *)0x0) {
        iVar32 = 0x40;
      }
      else {
        local_6420 = &local_63c4;
        local_6428 = (char *)0x0;
        local_63c4 = 0;
        local_63e0 = (undefined8 *)FUN_18057ac40(local_6380,1,0,0x220);
        if (local_63c4 == 0) {
          local_6378 = 0x11;
        }
        else if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
          *piVar14 = 0x40;
        }
        local_63b8 = local_63e0;
        if (*piVar14 == 0) {
          uVar8 = param_2[1];
          uVar9 = param_2[2];
          uVar6 = param_2[3];
          uVar26 = (ulonglong)local_6408;
          *(undefined4 *)local_63e0 = *param_2;
          *(undefined4 *)((longlong)local_63e0 + 4) = uVar8;
          *(undefined4 *)(local_63e0 + 1) = uVar9;
          *(undefined4 *)((longlong)local_63e0 + 0xc) = uVar6;
          local_63f4 = 0;
          uVar11 = *(undefined8 *)(param_2 + 6);
          uVar12 = 0;
          local_63e0[2] = *(undefined8 *)(param_2 + 4);
          local_63e0[3] = uVar11;
          local_63f0 = param_6;
          puVar27 = local_63e0;
          puVar47 = local_63d0;
          uVar42 = param_6;
LAB_1805b8a69:
          uVar29 = (uint)uVar26;
LAB_1805b8a76:
          pbVar2 = (byte *)puVar27[3];
          iVar32 = (int)uVar12;
          if (pbVar2 < (byte *)puVar27[2]) {
            bVar39 = *pbVar2;
            puVar27[3] = pbVar2 + 1;
            uVar41 = (ulonglong)bVar39;
            local_63c4 = (uint)bVar39;
            if ((bVar39 == 0xb) || (bVar39 == 0xe)) {
              uVar41 = (ulonglong)bVar39;
              if (*(char *)((longlong)puVar47 + 0xd) != '\0') {
                uVar41 = 0;
              }
              local_63c4 = (uint)uVar41;
            }
          }
          else {
            uVar41 = 0xb;
            if (iVar32 == 0) {
              uVar41 = 0xe;
            }
            local_63c4 = (uint)uVar41;
          }
          cVar7 = *(char *)((longlong)puVar47 + 0xc);
          bVar39 = (byte)uVar41;
          uVar40 = (uint)uVar41;
          if (cVar7 != '\0') {
            if (((local_63f7 == 0) && (bVar39 < 0x20)) &&
               ((0xffff83f5U >> (uVar40 & 0x1f) & 1) != 0)) {
              puVar10[3] = puVar10[2];
              goto LAB_1805b8a76;
            }
            if ((0 < local_63c0) && ((bVar39 < 10 || ((byte)(bVar39 - 0xd) < 0x13)))) {
              local_63c0 = 0;
            }
            if ((((char)local_63a8 != '\0') && ((uVar41 & 0xe0) == 0)) &&
               (local_63a8 = local_63a8 & 0xff, bVar39 != 0xc)) {
              local_63a8 = 0;
            }
          }
          puVar36 = (uint *)(longlong)local_63c0;
          if (*piVar14 != 0) goto LAB_1805bcc89;
          local_6398 = local_6398 - 1;
          puVar33 = local_63e0;
          if (local_6398 == 0) {
            piVar14 = local_6400;
            iVar32 = 0x12;
            goto LAB_1805bcca2;
          }
          uVar44 = local_6420._4_4_;
          switch(uVar41) {
          case 0:
          case 2:
          case 0x11:
            goto switchD_1805b8b63_caseD_0;
          case 1:
          case 0x12:
            if (cVar7 == '\0') {
              if ((char)uStack_62e0 != '\0') goto switchD_1805b8b63_caseD_0;
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(*(longlong *)(lVar45 + 0x40) + 4);
            }
            puVar33 = &local_6320;
            goto LAB_1805b8d0b;
          case 3:
          case 0x17:
            if (cVar7 == '\0') {
              if ((char)uStack_62e0 != '\0') goto switchD_1805b8b63_caseD_0;
              uVar8 = 0;
              puVar33 = &local_6358;
            }
            else {
              puVar33 = &local_6358;
              uVar8 = **(undefined4 **)(lVar45 + 0x40);
            }
LAB_1805b8d0b:
            local_6420 = (uint *)CONCAT44(uVar44,uVar8);
            local_6428 = &local_63f8;
            FUN_1805b60a0(puVar47,puVar10,puVar33,local_6390);
            if (*(char *)(lVar45 + 0x340) != '\0') {
LAB_1805bcc89:
              puVar33 = local_63e0;
              piVar14 = local_6400;
              iVar32 = local_63d8;
              goto LAB_1805bcca2;
            }
            uVar26 = (ulonglong)local_6408;
LAB_1805b8d3c:
            puVar10[3] = puVar10[2];
            piVar14 = local_6400;
            goto LAB_1805b8a69;
          case 4:
            piVar13 = (int *)puVar10[2];
            if ((1 < (uint)(puVar10[3] - (longlong)piVar13 >> 3)) && (local_63f8 == '\0')) {
              iVar32 = *piVar13;
              if (piVar13[1] == 1) {
                iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
              }
              else if (piVar13[1] == 2) {
                iVar32 = iVar32 << 0x10;
              }
              *local_6390 = local_639c + iVar32;
            }
            local_63f8 = '\x01';
            if (*(char *)(lVar45 + 0x340) == '\0') {
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar13 = (int *)puVar10[1];
                if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                  *piVar13 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                piVar13 = (int *)(lVar34 + -8);
                puVar10[3] = piVar13;
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = *piVar13 + (*piVar13 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar32 = *piVar13;
                  if (*(int *)(lVar34 + -4) == 2) {
                    iVar32 = iVar32 << 0x10;
                  }
                }
              }
              local_6408 = uVar29 + iVar32;
              uVar26 = (ulonglong)local_6408;
              goto LAB_1805b8e3c;
            }
            break;
          case 5:
            uVar29 = 0;
            uVar40 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
            if (uVar40 != 0) {
              do {
                lVar34 = puVar10[3];
                lVar24 = puVar10[2];
                if (uVar29 < (uint)(lVar34 - lVar24 >> 3)) {
                  iVar32 = *(int *)(lVar24 + 4 + (ulonglong)uVar29 * 8);
                  piVar14 = (int *)(lVar24 + (ulonglong)uVar29 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *piVar14;
                    if (iVar32 == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                    lVar24 = puVar10[2];
                    lVar34 = puVar10[3];
                  }
                  iVar18 = 0;
                }
                uVar44 = uVar29 + 1;
                uVar42 = uVar42 + iVar18;
                if (uVar44 < (uint)(lVar34 - lVar24 >> 3)) {
                  iVar32 = *(int *)(lVar24 + 4 + (ulonglong)uVar44 * 8);
                  piVar14 = (int *)(lVar24 + (ulonglong)uVar44 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *piVar14;
                    if (iVar32 == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar18 = 0;
                }
                param_7 = (int)uVar26 + iVar18;
                param_6 = uVar42;
                local_6408 = param_7;
                FUN_1805b70b0(&local_6288,uVar42,param_7);
                uVar26 = (ulonglong)local_6408;
                uVar29 = uVar29 + 2;
              } while (uVar29 < uVar40);
              piVar14 = local_6400;
              local_63f0 = uVar42;
            }
            uVar26 = (ulonglong)local_6408;
            uVar12 = (ulonglong)local_63f4;
            puVar10[3] = puVar10[2];
            puVar27 = local_63b8;
            goto LAB_1805b8a69;
          case 6:
          case 7:
            bVar49 = uVar40 == 6;
            uVar29 = 0;
            uVar40 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
            if (uVar40 != 0) {
              lVar45 = 0;
              do {
                lVar34 = puVar10[2];
                if (uVar29 < (uint)(puVar10[3] - lVar34 >> 3)) {
                  iVar32 = *(int *)(lVar45 + 4 + lVar34);
                  if (iVar32 == 1) {
                    iVar18 = *(int *)(lVar45 + lVar34) + (*(int *)(lVar45 + lVar34) >> 0x1f) +
                             0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *(int *)(lVar45 + lVar34);
                    if (iVar32 == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar18 = 0;
                }
                if (bVar49) {
                  uVar42 = uVar42 + iVar18;
                  param_6 = uVar42;
                }
                else {
                  param_7 = (int)uVar26 + iVar18;
                  uVar26 = (ulonglong)param_7;
                  local_6408 = param_7;
                }
                bVar49 = (bool)(bVar49 ^ 1);
                FUN_1805b70b0(&local_6288,uVar42,uVar26 & 0xffffffff);
                uVar26 = (ulonglong)local_6408;
                uVar29 = uVar29 + 1;
                lVar45 = lVar45 + 8;
              } while (uVar29 < uVar40);
              piVar14 = local_6400;
              lVar45 = local_63b0;
              local_63f0 = uVar42;
            }
            uVar26 = (ulonglong)local_6408;
            uVar12 = (ulonglong)local_63f4;
            puVar10[3] = puVar10[2];
            puVar27 = local_63b8;
            puVar47 = local_63d0;
            goto LAB_1805b8a69;
          case 8:
          case 0x18:
            lVar34 = puVar10[2];
            uVar40 = 0;
            uVar42 = (uint)(puVar10[3] - lVar34 >> 3);
            if (5 < uVar42) {
              uVar44 = local_63f0;
              uVar29 = 2;
              do {
                lVar34 = puVar10[3];
                lVar45 = puVar10[2];
                if (uVar40 < (uint)(lVar34 - lVar45 >> 3)) {
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar40 * 8);
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar40 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *piVar14;
                    if (iVar32 == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                    lVar45 = puVar10[2];
                    lVar34 = puVar10[3];
                  }
                  iVar18 = 0;
                }
                iVar18 = iVar18 + uVar44;
                uVar44 = uVar29 - 1;
                if (uVar44 < (uint)(lVar34 - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar44 * 8);
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar44 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar19 = *piVar14;
                    if (iVar32 == 2) {
                      iVar19 = iVar19 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                    lVar45 = puVar10[2];
                    lVar34 = puVar10[3];
                  }
                  iVar19 = 0;
                }
                iVar19 = iVar19 + (int)uVar26;
                if (uVar29 < (uint)(lVar34 - lVar45 >> 3)) {
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar29 * 8);
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar29 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar20 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar20 = *piVar14;
                    if (iVar32 == 2) {
                      iVar20 = iVar20 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                    lVar45 = puVar10[2];
                    lVar34 = puVar10[3];
                  }
                  iVar20 = 0;
                }
                iVar20 = iVar18 + iVar20;
                uVar44 = uVar29 + 1;
                if (uVar44 < (uint)(lVar34 - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar44 * 8);
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar44 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar17 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar17 = *piVar14;
                    if (iVar32 == 2) {
                      iVar17 = iVar17 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                    lVar45 = puVar10[2];
                    lVar34 = puVar10[3];
                  }
                  iVar17 = 0;
                }
                iVar17 = iVar19 + iVar17;
                uVar44 = uVar29 + 2;
                if (uVar44 < (uint)(lVar34 - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar44 * 8);
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar44 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar16 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar16 = *piVar14;
                    if (iVar32 == 2) {
                      iVar16 = iVar16 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                    lVar45 = puVar10[2];
                    lVar34 = puVar10[3];
                  }
                  iVar16 = 0;
                }
                uVar46 = uVar29 + 3;
                uVar44 = iVar20 + iVar16;
                if (uVar46 < (uint)(lVar34 - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar46 * 8);
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar46 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar16 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar16 = *piVar14;
                    if (iVar32 == 2) {
                      iVar16 = iVar16 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar16 = 0;
                }
                local_6418 = iVar17 + iVar16;
                local_6420 = (uint *)CONCAT44(local_6420._4_4_,uVar44);
                local_6428 = (char *)CONCAT44(local_6428._4_4_,iVar17);
                local_6408 = local_6418;
                FUN_1805b6d90(&local_6288,iVar18,iVar19,iVar20);
                uVar26 = (ulonglong)local_6408;
                uVar40 = uVar40 + 6;
                param_7 = local_6408;
                uVar46 = uVar29 + 10;
                uVar29 = uVar29 + 6;
                param_6 = uVar44;
              } while (uVar46 <= uVar42);
              lVar34 = puVar10[2];
              uVar12 = (ulonglong)local_63f4;
              uVar41 = (ulonglong)local_63c4;
              puVar27 = local_63b8;
              lVar45 = local_63b0;
              uVar29 = local_6408;
              local_63f0 = uVar44;
            }
            if ((char)uVar41 == '\x18') {
              lVar24 = puVar10[3];
              if (uVar40 < (uint)(lVar24 - lVar34 >> 3)) {
                iVar32 = *(int *)(lVar34 + 4 + (ulonglong)uVar40 * 8);
                iVar18 = *(int *)(lVar34 + (ulonglong)uVar40 * 8);
                if (iVar32 == 1) {
                  iVar18 = iVar18 + (iVar18 >> 0x1f) + 0x2000 >> 0xe;
                }
                else if (iVar32 == 2) {
                  iVar18 = iVar18 << 0x10;
                }
              }
              else {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0x82;
                  lVar34 = puVar10[2];
                  lVar24 = puVar10[3];
                }
                iVar18 = 0;
              }
              uVar40 = uVar40 + 1;
              uVar42 = local_63f0 + iVar18;
              if (uVar40 < (uint)(lVar24 - lVar34 >> 3)) {
                piVar14 = (int *)(lVar34 + (ulonglong)uVar40 * 8);
                iVar32 = *(int *)(lVar34 + 4 + (ulonglong)uVar40 * 8);
                if (iVar32 == 1) {
                  iVar32 = *piVar14;
                  iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar18 = *piVar14;
                  if (iVar32 == 2) {
                    iVar18 = iVar18 << 0x10;
                  }
                }
              }
              else {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0x82;
                }
                iVar18 = 0;
              }
              param_7 = uVar29 + iVar18;
              param_6 = uVar42;
              local_6408 = param_7;
              local_63f0 = uVar42;
              FUN_1805b70b0(&local_6288,uVar42,param_7);
            }
            else {
              uVar42 = local_63f0;
            }
            uVar26 = (ulonglong)local_6408;
            puVar10[3] = puVar10[2];
            piVar14 = local_6400;
            puVar47 = local_63d0;
            goto LAB_1805b8a69;
          case 9:
            if (cVar7 != '\0') {
              if ((char)local_19b4 != '\0') {
                local_19b4 = CONCAT11(1,(char)local_19b4);
                FUN_1805b70b0(&local_6288,local_1958 & 0xffffffff,local_1958._4_4_);
                if (local_1950 != '\0') {
                  local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                  FUN_1805b73c0(&local_6288,&local_6278,&local_1978,uStack_1970);
                }
                local_19b1 = 1;
                local_19b4 = 0;
                local_1950 = '\0';
                piVar14 = local_6400;
              }
              uVar26 = (ulonglong)local_6408;
              local_63f8 = '\x01';
            }
            goto switchD_1805b8b63_caseD_0;
          case 10:
          case 0x1d:
            if (0x10 < iVar32) goto LAB_1805bc747;
            uVar12 = (longlong)iVar32 + 1;
            if (local_6378 <= uVar12) {
              if (piVar14 != (int *)0x0) {
                *piVar14 = 0x82;
              }
              uVar12 = 0;
            }
            puVar27 = local_63e0 + uVar12 * 4;
            lVar34 = puVar10[3];
            if (lVar34 == puVar10[2]) {
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0xa1;
              }
              iVar18 = 0;
            }
            else if (*(int *)(lVar34 + -4) == 2) {
              puVar10[3] = (int *)(lVar34 + -8);
              iVar18 = *(int *)(lVar34 + -8);
            }
            else {
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0xa0;
              }
              iVar18 = 0;
            }
            local_63b8 = puVar27;
            if ((*(char *)((longlong)puVar47 + 0xc) != '\0') && (*(longlong *)(lVar45 + 0x3a8) != 0)
               ) {
              piVar13 = (int *)FUN_18057a3d0();
              piVar14 = local_6400;
              if (piVar13 == (int *)0x0) {
                iVar18 = -1;
              }
              else {
                iVar18 = *piVar13;
              }
            }
            *puVar27 = 0;
            puVar27[1] = 0;
            puVar27[2] = 0;
            puVar27[3] = 0;
            if (bVar39 == 0x1d) {
              uVar29 = *(int *)(lVar45 + 0x354) + iVar18;
              if (*(uint *)(lVar45 + 0x34c) <= uVar29) goto LAB_1805bc747;
              uVar26 = (ulonglong)local_6408;
              local_63f4 = iVar32 + 1;
              uVar12 = (ulonglong)local_63f4;
              uVar11 = *(undefined8 *)(*(longlong *)(lVar45 + 0x360) + (ulonglong)uVar29 * 8);
              puVar27[3] = uVar11;
              puVar27[1] = uVar11;
              puVar27[2] = *(undefined8 *)
                            (*(longlong *)(lVar45 + 0x360) + (ulonglong)(uVar29 + 1) * 8);
            }
            else {
              uVar29 = *(int *)(lVar45 + 0x350) + iVar18;
              if (*(uint *)(lVar45 + 0x348) <= uVar29) goto LAB_1805bc747;
              lVar34 = *(longlong *)(*(longlong *)(lVar45 + 0x358) + (ulonglong)uVar29 * 8);
              puVar27[1] = lVar34;
              if (*(char *)(lVar45 + 0x5c) == '\0') {
                local_63f4 = iVar32 + 1;
                uVar12 = (ulonglong)local_63f4;
                puVar27[2] = *(undefined8 *)
                              (*(longlong *)(lVar45 + 0x358) + (ulonglong)(uVar29 + 1) * 8);
                uVar26 = (ulonglong)local_6408;
                puVar27[3] = puVar27[1];
              }
              else if (*(longlong *)(lVar45 + 0x3a0) == 0) {
                iVar18 = *(int *)(lVar45 + 0x398);
                if (iVar18 < 0) {
                  iVar18 = 0;
                }
                local_63f4 = iVar32 + 1;
                uVar12 = (ulonglong)local_63f4;
                puVar27[1] = iVar18 + lVar34;
                puVar27[2] = *(undefined8 *)
                              (*(longlong *)(lVar45 + 0x358) + (ulonglong)(uVar29 + 1) * 8);
                uVar26 = (ulonglong)local_6408;
                puVar27[3] = puVar27[1];
              }
              else if (lVar34 == 0) {
                local_63f4 = iVar32 + 1;
                uVar12 = (ulonglong)local_63f4;
                puVar27[2] = 0;
                uVar26 = (ulonglong)local_6408;
                puVar27[3] = puVar27[1];
              }
              else {
                local_63f4 = iVar32 + 1;
                uVar12 = (ulonglong)local_63f4;
                puVar27[2] = (ulonglong)
                             *(uint *)(*(longlong *)(lVar45 + 0x3a0) + (ulonglong)uVar29 * 4) +
                             lVar34;
                uVar26 = (ulonglong)local_6408;
                puVar27[3] = puVar27[1];
              }
            }
            goto LAB_1805b8a69;
          case 0xb:
            if (iVar32 < 1) goto LAB_1805bc747;
            local_63f4 = iVar32 - 1;
            uVar12 = (ulonglong)local_63f4;
            if (uVar12 < local_6378) {
              local_63b8 = local_63e0 + uVar12 * 4;
              puVar27 = local_63b8;
            }
            else {
              if (piVar14 != (int *)0x0) {
                *piVar14 = 0x82;
              }
              local_63b8 = local_63e0;
              puVar27 = local_63e0;
            }
            goto LAB_1805b8a69;
          case 0xc:
            pbVar2 = (byte *)puVar27[3];
            if (pbVar2 < (byte *)puVar27[2]) {
              bVar37 = *pbVar2;
              puVar27[3] = pbVar2 + 1;
            }
            else {
              piVar14 = (int *)*puVar27;
              if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                *piVar14 = 0x55;
              }
              bVar37 = 0;
            }
            switch(bVar37) {
            case 8:
            case 0xd:
            case 0x13:
            case 0x19:
            case 0x1f:
            case 0x20:
              goto switchD_1805b993b_caseD_8;
            default:
              if ((*(char *)((longlong)puVar47 + 0xd) != '\0') || (0x25 < bVar37))
              goto switchD_1805b993b_caseD_8;
              bVar1 = *(byte *)((longlong)puVar47 + 0xc);
              uVar30 = (ulonglong)bVar1;
              if ((bVar1 != 0) && (0 < local_63c0)) {
                if (bVar37 == 0x11) break;
                local_63c0 = 0;
                goto LAB_1805b8d3c;
              }
              if (0x21 < bVar37) goto switchD_1805b993b_caseD_8;
              break;
            case 0x22:
              local_6420 = (uint *)((ulonglong)local_6420._1_7_ << 8);
              local_6428 = "\x01";
              FUN_1805b5d40(puVar10,&param_6,&param_7,&local_6288);
              uVar26 = (ulonglong)param_7;
              local_6408 = param_7;
              local_63f0 = param_6;
              piVar14 = local_6400;
              uVar42 = param_6;
              goto LAB_1805b8a69;
            case 0x23:
              local_6420 = (uint *)((ulonglong)local_6420._1_7_ << 8);
              local_6428 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
              FUN_1805b5d40(puVar10,&param_6,&param_7,&local_6288);
              uVar26 = (ulonglong)param_7;
              local_6408 = param_7;
              local_63f0 = param_6;
              uVar42 = param_6;
              goto switchD_1805b993b_caseD_8;
            case 0x24:
              local_6420 = (uint *)((ulonglong)local_6420._1_7_ << 8);
              local_6428 = "\x01\x01\x01\x01\x01";
              FUN_1805b5d40(puVar10,&param_6,&param_7,&local_6288);
              uVar26 = (ulonglong)param_7;
              local_6408 = param_7;
              local_63f0 = param_6;
              piVar14 = local_6400;
              uVar42 = param_6;
              goto LAB_1805b8a69;
            case 0x25:
              local_6420 = (uint *)CONCAT71(local_6420._1_7_,1);
              local_6428 = "\x01\x01\x01\x01\x01\x01\x01\x01\x01\x01";
              FUN_1805b5d40(puVar10,&param_6,&param_7,&local_6288);
              uVar26 = (ulonglong)param_7;
              local_6408 = param_7;
              local_63f0 = param_6;
              piVar14 = local_6400;
              uVar42 = param_6;
              goto LAB_1805b8a69;
            }
            iVar18 = (int)puVar47;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
            switch(bVar37) {
            case 0:
            case 8:
            case 0xd:
            case 0x13:
            case 0x19:
            case 0x1f:
            case 0x20:
              goto switchD_1805b9ad2_caseD_0;
            case 1:
            case 2:
              if (bVar1 != 0) {
                piVar14 = (int *)puVar10[2];
                if ((int)(puVar10[3] - (longlong)piVar14 >> 3) == 0) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar32 = 0;
                }
                else {
                  iVar32 = *piVar14;
                  if (piVar14[1] == 1) {
                    iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else if (piVar14[1] == 2) {
                    iVar32 = iVar32 << 0x10;
                  }
                }
                lVar34 = puVar10[2];
                if ((uint)(puVar10[3] - lVar34 >> 3) < 3) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar18 = 0;
                }
                else {
                  iVar18 = *(int *)(lVar34 + 0x10);
                  if (*(int *)(lVar34 + 0x14) == 1) {
                    iVar18 = iVar18 + (iVar18 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else if (*(int *)(lVar34 + 0x14) == 2) {
                    iVar18 = iVar18 << 0x10;
                  }
                }
                lVar34 = puVar10[2];
                if ((uint)(puVar10[3] - lVar34 >> 3) < 5) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar19 = 0;
                }
                else {
                  iVar19 = *(int *)(lVar34 + 0x20);
                  if (*(int *)(lVar34 + 0x24) == 1) {
                    iVar19 = iVar19 + (iVar19 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else if (*(int *)(lVar34 + 0x24) == 2) {
                    iVar19 = iVar19 << 0x10;
                  }
                }
                lVar34 = puVar10[2];
                if ((uint)(puVar10[3] - lVar34 >> 3) < 2) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar20 = 0;
                }
                else if (*(int *)(lVar34 + 0xc) == 1) {
                  iVar20 = *(int *)(lVar34 + 8) + (*(int *)(lVar34 + 8) >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar20 = *(int *)(lVar34 + 8);
                  if (*(int *)(lVar34 + 0xc) == 2) {
                    iVar20 = iVar20 << 0x10;
                  }
                }
                if ((uint)((longlong)(puVar10[3] - puVar10[2]) >> 3) < 2) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                }
                else {
                  *(int *)(puVar10[2] + 0x10) = (iVar18 - iVar20) - iVar32;
                  *(undefined4 *)(puVar10[2] + 0x14) = 0;
                }
                lVar34 = puVar10[2];
                if ((uint)(puVar10[3] - lVar34 >> 3) < 4) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar32 = 0;
                }
                else if (*(int *)(lVar34 + 0x1c) == 1) {
                  iVar32 = *(int *)(lVar34 + 0x18) + (*(int *)(lVar34 + 0x18) >> 0x1f) + 0x2000 >>
                           0xe;
                }
                else {
                  iVar32 = *(int *)(lVar34 + 0x18);
                  if (*(int *)(lVar34 + 0x1c) == 2) {
                    iVar32 = iVar32 << 0x10;
                  }
                }
                if ((uint)((longlong)(puVar10[3] - puVar10[2]) >> 3) < 4) {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                }
                else {
                  *(int *)(puVar10[2] + 0x20) = (iVar19 - iVar32) - iVar18;
                  *(undefined4 *)(puVar10[2] + 0x24) = 0;
                }
                puVar33 = &local_6358;
                puVar35 = *(undefined4 **)(lVar45 + 0x40);
                if (bVar37 != 1) {
                  puVar33 = &local_6320;
                  puVar35 = *(undefined4 **)(lVar45 + 0x40) + 1;
                }
                uVar8 = *puVar35;
                goto LAB_1805b8d0b;
              }
              goto switchD_1805b9ad2_caseD_0;
            case 3:
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                puVar10[3] = (int *)(lVar34 + -8);
                iVar32 = *(int *)(lVar34 + -8);
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                }
                else if (*(int *)(lVar34 + -4) == 2) {
                  iVar32 = iVar32 << 0x10;
                }
              }
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
LAB_1805b9de2:
                uVar8 = 0;
              }
              else {
                piVar14 = (int *)(lVar34 + -8);
                puVar10[3] = piVar14;
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar18 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar18 = *piVar14;
                  if (*(int *)(lVar34 + -4) == 2) {
                    iVar18 = iVar18 << 0x10;
                  }
                }
                if ((iVar18 == 0) || (uVar8 = 1, iVar32 == 0)) goto LAB_1805b9de2;
              }
              puVar35 = (undefined4 *)puVar10[3];
              if (puVar35 == (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              goto LAB_1805b9dfd;
LAB_1805b9f15:
              *puVar35 = uVar8;
              *(undefined4 *)(puVar10[3] + 4) = 2;
              puVar10[3] = puVar10[3] + 8;
              piVar14 = local_6400;
              goto LAB_1805b8a69;
            case 4:
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                puVar10[3] = (int *)(lVar34 + -8);
                iVar32 = *(int *)(lVar34 + -8);
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                }
                else if (*(int *)(lVar34 + -4) == 2) {
                  iVar32 = iVar32 << 0x10;
                }
              }
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
LAB_1805b9ef1:
                uVar8 = 0;
                if (iVar32 != 0) goto LAB_1805b9ef8;
              }
              else {
                piVar14 = (int *)(lVar34 + -8);
                puVar10[3] = piVar14;
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar18 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar18 = *piVar14;
                  if (*(int *)(lVar34 + -4) == 2) {
                    iVar18 = iVar18 << 0x10;
                  }
                }
                if (iVar18 == 0) goto LAB_1805b9ef1;
LAB_1805b9ef8:
                uVar8 = 1;
              }
              puVar35 = (undefined4 *)puVar10[3];
              if (puVar35 != (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              goto LAB_1805b9f15;
              goto LAB_1805b9dfd;
            case 5:
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                puVar10[3] = (int *)(lVar34 + -8);
                iVar32 = *(int *)(lVar34 + -8);
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                }
                else if (*(int *)(lVar34 + -4) == 2) {
                  iVar32 = iVar32 << 0x10;
                }
              }
              if ((uint *)puVar10[3] != (uint *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)
                 ) {
                *(uint *)puVar10[3] = (uint)(iVar32 == 0);
                *(undefined4 *)(puVar10[3] + 4) = 2;
                puVar10[3] = puVar10[3] + 8;
                piVar14 = local_6400;
                goto LAB_1805b8a69;
              }
LAB_1805b9dfd:
              piVar14 = local_6400;
LAB_1805b9e02:
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0x82;
              }
              goto LAB_1805b8a76;
            case 6:
              if (bVar1 == 0) goto switchD_1805b9ad2_caseD_0;
              lVar45 = *(longlong *)(lVar45 + 8);
              iVar18 = FUN_1805bcfe0(puVar10);
              iVar19 = FUN_1805bcfe0();
              uVar42 = FUN_1805bcf90();
              local_6398 = uVar42;
              iVar20 = FUN_1805bcf90(puVar10);
              uVar29 = FUN_1805bcf90(puVar10);
              lVar34 = local_63b0;
              local_63a4 = uVar29;
              if (((param_5 != '\0') || (*(char *)(local_63b0 + 0x5b) != '\0')) ||
                 ((*(longlong *)(local_63b0 + 0x368) == 0 &&
                  (*(longlong *)(*(longlong *)(lVar45 + 0xd0) + 0x50) == 0)))) goto LAB_1805bc747;
              iVar20 = iVar20 + **(int **)(local_63b0 + 0x40);
              if (*(longlong *)(*(longlong *)(lVar45 + 0xd0) + 0x50) == 0) {
                iVar19 = FUN_1805bd6e0(local_63b0,iVar19);
                iVar18 = FUN_1805bd6e0(lVar34);
              }
              if ((iVar19 < 0) || (iVar18 < 0)) goto LAB_1805bc747;
              if (*(char *)(lVar34 + 0x5a) == '\0') {
                FUN_180574260(*(undefined8 *)(lVar34 + 0x18));
                iVar32 = FUN_1805b67d0(lVar34,iVar19,&local_f8);
                if (iVar32 == 0) {
                  local_6410 = &local_63c4;
                  uVar11 = **(undefined8 **)(lVar34 + 0x40);
                  local_6418 = 0;
                  uVar31 = **(undefined8 **)(local_63b0 + 0x48);
                  local_6420 = (uint *)((ulonglong)local_6420 & 0xffffffff00000000);
                  local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                  FUN_1805b8500(local_63d0,&local_f8,local_6368,local_6370);
                  local_d0 = (int)local_e8 - (int)uStack_f0;
                  local_d8 = uStack_f0;
                  plVar5 = *(longlong **)
                            (*(longlong *)(*(longlong *)(local_63b0 + 8) + 0xd0) + 0x50);
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 8))(plVar5[1],&local_d8);
                  }
                  if (local_63f8 == '\0') {
                    uVar11 = **(undefined8 **)(local_63b0 + 0x40);
                    uVar31 = **(undefined8 **)(local_63b0 + 0x48);
                  }
                  **(undefined4 **)(local_63b0 + 0x40) = 0;
                  *(undefined4 *)(*(longlong *)(local_63b0 + 0x40) + 4) = 0;
                  iVar32 = FUN_1805b67d0(local_63b0,iVar18,&local_f8);
                  if (iVar32 == 0) {
                    local_6410 = &local_63c4;
                    local_6420 = (uint *)CONCAT44(local_6420._4_4_,iVar20 - uVar29);
                    local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                    local_6418 = uVar42;
                    FUN_1805b8500(local_63d0,&local_f8,local_6368,local_6370);
                    lVar45 = local_63b0;
                    local_d0 = (int)local_e8 - (int)uStack_f0;
                    local_d8 = uStack_f0;
                    plVar5 = *(longlong **)
                              (*(longlong *)(*(longlong *)(local_63b0 + 8) + 0xd0) + 0x50);
                    if (plVar5 != (longlong *)0x0) {
                      (**(code **)(*plVar5 + 8))(plVar5[1]);
                    }
                    **(undefined8 **)(lVar45 + 0x40) = uVar11;
                    **(undefined8 **)(lVar45 + 0x48) = uVar31;
                    puVar21 = puVar10;
                    puVar33 = local_63e0;
                    piVar14 = local_6400;
                    iVar32 = local_63d8;
                  }
                  else {
                    puVar21 = puVar10;
                    puVar33 = local_63e0;
                    piVar14 = local_6400;
                  }
                }
                else {
                  puVar21 = puVar10;
                  puVar33 = local_63e0;
                  piVar14 = local_6400;
                }
              }
              else {
                lVar45 = *(longlong *)(lVar34 + 0x10);
                lVar34 = **(longlong **)(lVar45 + 0xf0);
                iVar32 = FUN_180573fd0(lVar34);
                if (iVar32 == 0) {
                  piVar14 = *(int **)(lVar34 + 0xa0);
                  *piVar14 = iVar19;
                  *(undefined2 *)(piVar14 + 9) = 2;
                  *(undefined2 *)(piVar14 + 1) = 0x202;
                  piVar14[2] = 0;
                  piVar14[3] = 0;
                  piVar14[8] = iVar18;
                  iVar32 = FUN_1805778f0(iVar20 - local_63a4);
                  piVar14[10] = iVar32 >> 0x10;
                  iVar32 = FUN_1805778f0(local_6398);
                  piVar14[0xb] = iVar32 >> 0x10;
                  *(undefined4 *)(lVar45 + 0xc0) = 2;
                  *(undefined8 *)(lVar45 + 200) = *(undefined8 *)(lVar34 + 0x58);
                  *(undefined4 *)(lVar45 + 0x60) = 0x636f6d70;
                  *(undefined4 *)(lVar34 + 0x98) = 2;
                  goto LAB_1805bc85d;
                }
                puVar21 = puVar10;
                puVar33 = local_63e0;
                piVar14 = local_6400;
              }
              goto LAB_1805bcca0;
            case 7:
              if (bVar1 == 0) goto switchD_1805b9ad2_caseD_0;
              uVar8 = FUN_1805bcf90(puVar10);
              *(undefined4 *)(*(longlong *)(lVar45 + 0x48) + 4) = uVar8;
              uVar8 = FUN_1805bcf90(puVar10);
              **(undefined4 **)(lVar45 + 0x48) = uVar8;
              iVar32 = FUN_1805bcf90(puVar10);
              iVar18 = FUN_1805bcf90(puVar10);
              local_63f8 = '\x01';
              **(int **)(lVar45 + 0x40) = **(int **)(lVar45 + 0x40) + iVar18;
              piVar14 = (int *)(*(longlong *)(lVar45 + 0x40) + 4);
              *piVar14 = *piVar14 + iVar32;
              if (*(char *)(lVar45 + 0x5b) != '\0') goto LAB_1805bc85d;
              if (local_63f7 == 0) goto LAB_1805b9fd5;
              param_6 = uVar42 + iVar18;
              param_7 = (int)uVar26 + iVar32;
              uVar26 = (ulonglong)param_7;
              puVar10[3] = puVar10[2];
              piVar14 = local_6400;
              uVar42 = param_6;
              local_6408 = param_7;
              local_63f0 = param_6;
              goto LAB_1805b8a69;
            case 9:
              iVar18 = FUN_1805bcf90(puVar10);
              uVar41 = (ulonglong)*(uint *)(puVar10 + 4);
              if (-0x80000000 < iVar18) {
                iVar32 = -iVar18;
                if (-iVar18 < 0) {
                  iVar32 = iVar18;
                }
                goto LAB_1805ba0c4;
              }
              piVar13 = (int *)puVar10[3];
              if (piVar13 != (int *)(puVar10[2] + uVar41 * 8)) {
LAB_1805ba1e4:
                *piVar13 = 0x7fffffff;
                goto LAB_1805ba0d8;
              }
              break;
            case 10:
              iVar32 = FUN_1805bcf90(puVar10);
              iVar18 = FUN_1805bcf90(puVar10);
              if ((int *)puVar10[3] != (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              {
                *(int *)puVar10[3] = iVar18 + iVar32;
                goto LAB_1805ba0d8;
              }
              break;
            case 0xb:
              iVar32 = FUN_1805bcf90(puVar10);
              iVar18 = FUN_1805bcf90(puVar10);
              if ((int *)puVar10[3] != (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              {
                *(int *)puVar10[3] = iVar18 - iVar32;
                goto LAB_1805ba0d8;
              }
              break;
            case 0xc:
              if ((bVar1 == 0) || ((char)local_63a8 == '\0')) {
                uVar29 = FUN_1805bcf90(puVar10);
                uVar26 = (ulonglong)uVar29;
                uVar8 = FUN_1805bcf90(puVar10);
              }
              else {
                uVar29 = FUN_1805bcfe0(puVar10);
                uVar26 = (ulonglong)uVar29;
                uVar8 = FUN_1805bcfe0();
                local_63a8 = local_63a8 & 0xffffff00;
              }
              uVar8 = FUN_180573310(uVar8,uVar26 & 0xffffffff);
              if ((undefined4 *)puVar10[3] !=
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                uVar26 = (ulonglong)local_6408;
                *(undefined4 *)puVar10[3] = uVar8;
                goto LAB_1805ba0d8;
              }
              goto LAB_1805ba1a3;
            case 0xe:
              iVar32 = FUN_1805bcf90(puVar10);
              piVar13 = (int *)puVar10[3];
              piVar14 = (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8);
              if (iVar32 < -0x7fffffff) {
                if (piVar13 != piVar14) goto LAB_1805ba1e4;
              }
              else if (piVar13 != piVar14) {
                *piVar13 = -iVar32;
                goto LAB_1805ba0d8;
              }
              break;
            case 0xf:
              iVar32 = FUN_1805bcf90(puVar10);
              iVar18 = FUN_1805bcf90(puVar10);
              if ((uint *)puVar10[3] == (uint *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)
                 ) goto LAB_1805ba1a3;
              uVar26 = (ulonglong)local_6408;
              *(uint *)puVar10[3] = (uint)(iVar18 == iVar32);
              *(undefined4 *)(puVar10[3] + 4) = 2;
              puVar10[3] = puVar10[3] + 8;
              piVar14 = local_6400;
              goto LAB_1805b8a69;
            case 0x10:
              goto switchD_1805b9ad2_caseD_10;
            case 0x11:
              piVar14 = local_6400;
              if (bVar1 != 0) {
                if ((int)local_63c8 < 1) {
                  if (local_63c0 != 0) {
                    local_63c0 = local_63c0 + -1;
                    if ((undefined4 *)puVar10[3] ==
                        (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
                    goto LAB_1805b9e02;
                    *(undefined4 *)puVar10[3] = (&uStack_dc)[(longlong)puVar36];
                    *(undefined4 *)(puVar10[3] + 4) = 0;
                    puVar10[3] = puVar10[3] + 8;
                    goto LAB_1805b8a69;
                  }
                  iVar32 = 0x12;
                  goto LAB_1805bcca2;
                }
                local_63c8 = local_63c8 - 1;
              }
              goto LAB_1805b8a76;
            case 0x12:
              FUN_1805bcf90(puVar10);
              piVar14 = local_6400;
              goto LAB_1805b8a69;
            case 0x14:
              uVar29 = FUN_1805bcfe0(puVar10);
              uVar41 = (ulonglong)uVar29;
              uVar8 = FUN_1805bcf90();
              if (0x1f < (uint)uVar41) goto LAB_1805ba0b1;
              *(undefined4 *)((longlong)&local_c8 + uVar41 * 4) = uVar8;
              piVar14 = local_6400;
              goto LAB_1805b8a69;
            case 0x15:
              uVar29 = FUN_1805bcfe0(puVar10);
              if (uVar29 < 0x20) {
                if ((undefined4 *)puVar10[3] !=
                    (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                  *(undefined4 *)puVar10[3] =
                       *(undefined4 *)((longlong)&local_c8 + (ulonglong)uVar29 * 4);
                  goto LAB_1805ba0d8;
                }
                break;
              }
              goto LAB_1805ba0b1;
            case 0x16:
              iVar32 = FUN_1805bcf90(puVar10);
              iVar18 = FUN_1805bcf90(puVar10);
              uVar8 = FUN_1805bcf90(puVar10);
              uVar9 = FUN_1805bcf90(puVar10);
              if ((undefined4 *)puVar10[3] !=
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                uVar26 = (ulonglong)local_6408;
                if (iVar18 <= iVar32) {
                  uVar8 = uVar9;
                }
                *(undefined4 *)puVar10[3] = uVar8;
                goto LAB_1805ba0d8;
              }
              goto LAB_1805ba1a3;
            case 0x17:
              uVar29 = *(uint *)(*(longlong *)(lVar45 + 0x328) + 0x2c0);
              uVar40 = uVar29 << 0xd ^ uVar29;
              uVar40 = uVar40 >> 0x11 ^ uVar40;
              *(uint *)(*(longlong *)(lVar45 + 0x328) + 0x2c0) = uVar40 << 5 ^ uVar40;
              if ((int *)puVar10[3] != (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              {
                *(int *)puVar10[3] = (uVar29 & 0xffff) + 1;
                goto LAB_1805ba0d8;
              }
              break;
            case 0x18:
              iVar32 = FUN_1805bcf90(puVar10);
              lVar34 = (longlong)iVar32;
              iVar32 = FUN_1805bcf90(puVar10);
              uVar41 = (ulonglong)*(uint *)(puVar10 + 4);
              iVar32 = (int)((ulonglong)(iVar32 * lVar34 + 0x8000 + (iVar32 * lVar34 >> 0x3f)) >>
                            0x10);
LAB_1805ba0c4:
              if ((int *)puVar10[3] != (int *)(puVar10[2] + uVar41 * 8)) {
                *(int *)puVar10[3] = iVar32;
LAB_1805ba0d8:
                *(undefined4 *)(puVar10[3] + 4) = 0;
                puVar10[3] = puVar10[3] + 8;
                piVar14 = local_6400;
                goto LAB_1805b8a69;
              }
              break;
            case 0x1a:
              iVar32 = FUN_1805bcf90(puVar10);
              if (iVar32 < 1) {
                uVar23 = 0;
              }
              else {
                uVar23 = FUN_180577b80(iVar32);
              }
              puVar36 = (uint *)puVar10[3];
              if (puVar36 != (uint *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                uVar26 = (ulonglong)local_6408;
                piVar14 = local_6400;
                goto LAB_1805bc6ed;
              }
              goto LAB_1805ba1a3;
            case 0x1b:
              uVar8 = FUN_1805bcf90(puVar10);
              if ((undefined4 *)puVar10[3] ==
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0x82;
                }
              }
              else {
                *(undefined4 *)puVar10[3] = uVar8;
                *(undefined4 *)(puVar10[3] + 4) = 0;
                puVar10[3] = puVar10[3] + 8;
              }
              if ((undefined4 *)puVar10[3] !=
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                *(undefined4 *)puVar10[3] = uVar8;
                piVar14 = local_6400;
LAB_1805bc6f0:
                *(undefined4 *)(puVar10[3] + 4) = 0;
                puVar10[3] = puVar10[3] + 8;
                goto LAB_1805b8a69;
              }
              break;
            case 0x1c:
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                puVar10[3] = (int *)(lVar34 + -8);
                iVar32 = *(int *)(lVar34 + -8);
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                }
                else if (*(int *)(lVar34 + -4) == 2) {
                  iVar32 = iVar32 << 0x10;
                }
              }
              uVar8 = FUN_1805bcf90(puVar10);
              if ((int *)puVar10[3] == (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0x82;
                }
              }
              else {
                *(int *)puVar10[3] = iVar32;
                *(undefined4 *)(puVar10[3] + 4) = 0;
                puVar10[3] = puVar10[3] + 8;
              }
              if ((undefined4 *)puVar10[3] !=
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                *(undefined4 *)puVar10[3] = uVar8;
                uVar26 = (ulonglong)local_6408;
                piVar14 = local_6400;
                goto LAB_1805bc6f0;
              }
LAB_1805ba1a3:
              uVar26 = (ulonglong)local_6408;
              break;
            case 0x1d:
              uVar29 = FUN_1805bcfe0(puVar10);
              uVar40 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
              if (uVar40 != 0) {
                if ((int)uVar29 < 0) {
LAB_1805baddd:
                  iVar32 = uVar40 - 1;
                }
                else {
                  if (uVar29 < uVar40) {
                    uVar40 = uVar40 - uVar29;
                    goto LAB_1805baddd;
                  }
                  iVar32 = 0;
                }
                uVar8 = FUN_1805bcf30(extraout_XMM0_Da,iVar32);
                if ((undefined4 *)puVar10[3] !=
                    (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                  *(undefined4 *)puVar10[3] = uVar8;
                  piVar14 = local_6400;
                  goto LAB_1805bc6f0;
                }
                break;
              }
              goto LAB_1805ba0b1;
            case 0x1e:
              uVar29 = FUN_1805bcfe0(puVar10);
              uVar41 = (ulonglong)uVar29;
              uVar29 = FUN_1805bcfe0();
              uVar30 = (ulonglong)uVar29;
              local_6360 = 0x200000000;
              if ((int)uVar29 < 2) goto LAB_1805ba0b1;
              if ((uint)((longlong)(puVar10[3] - puVar10[2]) >> 3) < uVar29) {
                piVar14 = (int *)puVar10[1];
                if (piVar14 == (int *)0x0) goto LAB_1805ba0b1;
                iVar32 = *piVar14;
                goto LAB_1805ba0a9;
              }
              iVar32 = (int)uVar41;
              if (iVar32 < 0) {
                iVar32 = -(-iVar32 % (int)uVar29);
              }
              else {
                iVar32 = (int)((longlong)
                               ((ulonglong)(uint)(iVar32 >> 0x1f) << 0x20 | uVar41 & 0xffffffff) %
                              (longlong)(int)uVar29);
              }
              piVar14 = local_6400;
              lVar45 = local_63b0;
              if (iVar32 == 0) {
              }
              else {
                local_6360 = 0x200000000;
                iVar18 = -1;
                iVar19 = -1;
                lVar34 = -8;
                do {
                  uVar11 = local_6360;
                  if (iVar18 == iVar19) {
                    iVar19 = iVar18 + 1;
                    lVar34 = lVar34 + 8;
                    uVar11 = *(undefined8 *)(lVar34 + puVar10[2]);
                    iVar18 = iVar19;
                  }
                  iVar19 = iVar19 + iVar32;
                  if (iVar19 < (int)uVar29) {
                    if (iVar19 < 0) {
                      iVar19 = iVar19 + uVar29;
                    }
                  }
                  else {
                    iVar19 = iVar19 - uVar29;
                  }
                  local_6360 = *(undefined8 *)(puVar10[2] + (longlong)iVar19 * 8);
                  *(undefined8 *)(puVar10[2] + (longlong)iVar19 * 8) = uVar11;
                  uVar30 = uVar30 - 1;
                } while (uVar30 != 0);
                uVar26 = (ulonglong)local_6408;
                uVar12 = (ulonglong)local_63f4;
                puVar27 = local_63b8;
              }
              goto LAB_1805b8a69;
            case 0x21:
              if ((bVar1 != 0) && (local_63f7 != 0)) {
                param_7 = FUN_1805bcf90(puVar10);
                uVar26 = (ulonglong)param_7;
                local_6408 = param_7;
                uVar42 = FUN_1805bcf90(puVar10);
                *(undefined4 *)(lVar45 + 0x2e0) = 0;
                param_6 = uVar42;
                local_63f0 = uVar42;
                goto LAB_1805b8d3c;
              }
switchD_1805b9ad2_caseD_0:
LAB_1805b9fd5:
              puVar10[3] = puVar10[2];
              piVar14 = local_6400;
              goto LAB_1805b8a69;
            case 0x22:
              if ((iVar18 != 3) ||
                 ((local_63f7 != bVar39 &&
                  ((*(uint *)(lVar45 + 0x2e0) == uVar40 || (*(int *)(lVar45 + 0x2e4) != 7))))))
              goto LAB_1805bc747;
              if (puVar36 == (uint *)((ulonglong)*(uint *)(puVar10 + 4) * 8 + 0x180000000)) {
                puVar36 = (uint *)puVar10[1];
                if ((puVar36 != (uint *)0x0) && (*puVar36 == uVar40)) {
                  *puVar36 = 0x82;
                }
              }
              else {
                *puVar36 = uVar42;
                *(uint *)(puVar10[3] + 4) = uVar40;
                puVar10[3] = puVar10[3] + 8;
              }
              if ((uint *)puVar10[3] == (uint *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)
                 ) {
                puVar36 = (uint *)puVar10[1];
                if ((puVar36 != (uint *)0x0) && (*puVar36 == uVar40)) {
                  *puVar36 = 0x82;
                }
              }
              else {
                *(uint *)puVar10[3] = uVar29;
                *(uint *)(puVar10[3] + 4) = uVar40;
                puVar10[3] = puVar10[3] + 8;
              }
              uVar12 = (ulonglong)local_63f4;
              local_63c8 = 2;
              piVar14 = local_6400;
              puVar47 = local_63d0;
              goto LAB_1805b8a69;
            case 0x23:
              if (iVar18 != 0) goto LAB_1805bc747;
              if (local_63f7 == bVar39) goto LAB_1805bae8f;
              lVar34 = *(longlong *)(lVar45 + 0x18);
              if ((*(uint *)(lVar34 + 8) <
                   *(ushort *)(lVar34 + 0x62) + 6 + (uint)*(ushort *)(lVar34 + 0x1a)) &&
                 (iVar32 = FUN_180573d00(lVar34,6,0), iVar32 != 0)) goto LAB_1805bc85d;
              uVar26 = (ulonglong)local_6408;
              uVar12 = (ulonglong)local_63f4;
              *(undefined8 *)(lVar45 + 0x2e0) = 1;
              piVar14 = local_6400;
              puVar47 = local_63d0;
              goto LAB_1805b8a69;
            case 0x24:
              if (iVar18 != 0) goto LAB_1805bc747;
              if (local_63f7 == bVar39) goto LAB_1805bae8f;
              if (*(uint *)(lVar45 + 0x2e0) == uVar40) goto LAB_1805bc747;
              iVar32 = *(int *)(lVar45 + 0x2e4);
              *(int *)(lVar45 + 0x2e4) = iVar32 + 1;
              if (iVar32 - 1U < 6) {
                lVar34 = *(longlong *)(lVar45 + 0x18);
                if (*(uint *)(lVar34 + 8) <
                    *(ushort *)(lVar34 + 0x62) + 1 + (uint)*(ushort *)(lVar34 + 0x1a)) {
                  iVar18 = FUN_180573d00(lVar34,1,0);
                  if (iVar18 != 0) goto LAB_1805bc747;
                }
                iVar18 = iVar32 + -3;
                if (iVar32 < 4) {
                  iVar18 = iVar32;
                }
                uVar26 = (ulonglong)local_6408;
                auStack_110[(longlong)(iVar18 * 2) + 4] = uVar42;
                auStack_110[(longlong)(iVar18 * 2) + 5] = local_6408;
                if ((iVar32 == 3) || (iVar32 == 6)) {
                  local_6418 = local_e8._4_4_;
                  local_6420 = (uint *)CONCAT44(local_6420._4_4_,(int)local_e8);
                  local_6428 = (char *)CONCAT44(local_6428._4_4_,uStack_f0._4_4_);
                  FUN_1805b6d90(&local_6288,local_f8 & 0xffffffff,local_f8._4_4_,
                                uStack_f0 & 0xffffffff);
                  goto LAB_1805ba4ce;
                }
              }
              puVar27 = local_63b8;
              goto LAB_1805bae8f;
            case 0x25:
              if (iVar18 != 1) goto LAB_1805bc747;
              if (local_63f7 != bVar39) {
                local_62e8 = local_6400;
                uStack_62e0 = 0x100;
                local_62d8 = 0;
                uStack_62d0 = 0;
                local_62c8 = 0;
                uStack_62c0 = 0;
                local_6338 = uVar41;
                local_6300 = uVar41;
              }
              uVar12 = (ulonglong)local_63f4;
              local_63c8 = 1;
              piVar14 = local_6400;
              puVar47 = local_63d0;
              goto LAB_1805b8a69;
            default:
              goto switchD_1805b9ad2_caseD_26;
            case 0x2e:
            case 0x2f:
              uVar12 = (ulonglong)local_63f4;
              puVar10[3] = 0x180000000;
              piVar14 = local_6400;
              puVar47 = local_63d0;
              goto LAB_1805b8a69;
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
              puVar36 = *(uint **)(lVar45 + 0x3c8);
              if (puVar36 == (uint *)0x0) goto LAB_1805bc747;
              uVar29 = ((bVar1 == 0x12) - 0xd) + (uint)bVar1;
              local_63c8 = uVar29;
              if (iVar18 != uVar29 * *puVar36) goto LAB_1805bc747;
              uVar26 = (ulonglong)(uVar29 + iVar32);
              if (uVar29 != 0) {
                uVar41 = (ulonglong)uVar29;
                do {
                  iVar32 = FUN_1805bcf30(puVar10,uVar12);
                  uVar30 = 1;
                  if (1 < *puVar36) {
                    do {
                      iVar20 = (int)uVar26;
                      iVar19 = FUN_1805bcf30(puVar10,uVar26 & 0xffffffff);
                      uVar26 = (ulonglong)(iVar20 + 1);
                      uVar25 = uVar30 & 0xffffffff;
                      uVar42 = (int)uVar30 + 1;
                      uVar30 = (ulonglong)uVar42;
                      lVar45 = (longlong)*(int *)(*(longlong *)(puVar36 + 0x42) + uVar25 * 4) *
                               (longlong)iVar19;
                      iVar32 = iVar32 + (int)((ulonglong)(lVar45 + 0x8000 + (lVar45 >> 0x3f)) >>
                                             0x10);
                    } while (uVar42 < *puVar36);
                  }
                  FUN_1805bd070(puVar10,uVar12,iVar32);
                  uVar12 = (ulonglong)((int)uVar12 + 1);
                  uVar41 = uVar41 - 1;
                } while (uVar41 != 0);
                lVar45 = local_63b0;
                uVar42 = local_63f0;
              }
              if ((uint)((longlong)(puVar10[3] - puVar10[2]) >> 3) < iVar18 - uVar29) {
                piVar14 = (int *)puVar10[1];
                if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                  *piVar14 = 0xa1;
                }
              }
              else {
                puVar10[3] = puVar10[3] + (ulonglong)(iVar18 - uVar29) * -8;
              }
LAB_1805ba4ce:
              puVar27 = local_63b8;
LAB_1805ba4d2:
              uVar26 = (ulonglong)local_6408;
              uVar12 = (ulonglong)local_63f4;
              piVar14 = local_6400;
              puVar47 = local_63d0;
              goto LAB_1805b8a69;
            case 0x35:
              puVar36 = *(uint **)(lVar45 + 0x3c8);
              uVar29 = *(uint *)(lVar45 + 0x3d8);
              if (iVar18 != 1) goto LAB_1805bc747;
              if (puVar36 == (uint *)0x0) goto LAB_1805bc747;
              uVar44 = FUN_1805bcfe0(puVar10);
              uVar40 = *puVar36;
              if (uVar29 < uVar40) goto LAB_1805bc747;
              if (uVar29 - uVar40 < uVar44) goto LAB_1805bc747;
              if (*(longlong *)(lVar45 + 0x3d0) == 0) goto LAB_1805bae8f;
              if (*(longlong *)(puVar36 + 0x42) == 0) goto LAB_1805bae8f;
              FUN_18063aed0(*(longlong *)(lVar45 + 0x3d0) + (ulonglong)uVar44 * 4,
                            *(longlong *)(puVar36 + 0x42),(ulonglong)uVar40 << 2);
              goto LAB_1805ba4d2;
            case 0x36:
              if (iVar18 == 2) {
                iVar18 = FUN_1805bcf90(puVar10);
                iVar32 = FUN_1805bcf90(puVar10);
                piVar14 = (int *)puVar10[3];
                if (piVar14 == (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
                goto LAB_1805ba705;
                iVar32 = iVar32 + iVar18;
LAB_1805ba738:
                *piVar14 = iVar32;
LAB_1805ba73b:
                *(uint *)(puVar10[3] + 4) = uVar40;
                puVar10[3] = puVar10[3] + 8;
                goto LAB_1805ba748;
              }
              goto LAB_1805bc747;
            case 0x37:
              if (iVar18 == 2) {
                iVar18 = FUN_1805bcf90(puVar10);
                iVar32 = FUN_1805bcf90(puVar10);
                piVar14 = (int *)puVar10[3];
                if (piVar14 != (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                  iVar32 = iVar32 - iVar18;
                  goto LAB_1805ba738;
                }
                goto LAB_1805ba705;
              }
              goto LAB_1805bc747;
            case 0x38:
              if (iVar18 == 2) {
                iVar32 = FUN_1805bcf90(puVar10);
                lVar34 = (longlong)iVar32;
                iVar32 = FUN_1805bcf90(puVar10);
                if ((undefined4 *)puVar10[3] !=
                    (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                  *(undefined4 *)puVar10[3] =
                       (int)((ulonglong)(iVar32 * lVar34 + 0x8000 + (iVar32 * lVar34 >> 0x3f)) >>
                            0x10);
                  goto LAB_1805ba73b;
                }
                goto LAB_1805ba705;
              }
              goto LAB_1805bc747;
            case 0x39:
              if (iVar18 != 2) goto LAB_1805bc747;
              iVar32 = FUN_1805bcf90(puVar10);
              uVar8 = FUN_1805bcf90(puVar10);
              if (iVar32 == 0) goto LAB_1805bc747;
              uVar8 = FUN_180573310(uVar8,iVar32);
              if ((undefined4 *)puVar10[3] ==
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                puVar36 = (uint *)puVar10[1];
                if ((puVar36 != (uint *)0x0) && (*puVar36 == uVar40)) {
                  *puVar36 = 0x82;
                  local_63c8 = 1;
                  goto LAB_1805ba4d2;
                }
              }
              else {
                *(undefined4 *)puVar10[3] = uVar8;
                *(uint *)(puVar10[3] + 4) = uVar40;
                puVar10[3] = puVar10[3] + 8;
              }
              local_63c8 = 1;
              goto LAB_1805ba4d2;
            case 0x3a:
              if (iVar18 != 2) goto LAB_1805bc747;
              if (*(ulonglong *)(lVar45 + 0x3c8) == uVar41) goto LAB_1805bc747;
              uVar29 = FUN_1805bcfe0(puVar10);
              uVar41 = (ulonglong)uVar29;
              if (*(uint *)(lVar45 + 0x3d8) <= uVar29) goto LAB_1805bc747;
              uVar8 = FUN_1805bcf90();
              uVar12 = (ulonglong)local_63f4;
              *(undefined4 *)(*(longlong *)(lVar45 + 0x3d0) + uVar41 * 4) = uVar8;
              piVar14 = local_6400;
              puVar47 = local_63d0;
              goto LAB_1805b8a69;
            case 0x3b:
              if (iVar18 == 1) {
                if (*(ulonglong *)(lVar45 + 0x3c8) != uVar41) {
                  uVar29 = FUN_1805bcfe0(puVar10);
                  if (uVar29 < *(uint *)(lVar45 + 0x3d8)) {
                    FUN_1805bd030();
                    goto LAB_1805ba748;
                  }
                }
              }
              goto LAB_1805bc747;
            case 0x3d:
              if (iVar18 != 4) goto LAB_1805bc747;
              iVar32 = FUN_1805bcf90(puVar10);
              iVar18 = FUN_1805bcf90(puVar10);
              uVar8 = FUN_1805bcf90(puVar10);
              uVar9 = FUN_1805bcf90(puVar10);
              if ((undefined4 *)puVar10[3] ==
                  (undefined4 *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
                puVar36 = (uint *)puVar10[1];
                if ((puVar36 != (uint *)0x0) && (*puVar36 == uVar40)) {
                  *puVar36 = 0x82;
                  local_63c8 = 1;
                  goto LAB_1805ba4d2;
                }
              }
              else {
                if (iVar18 <= iVar32) {
                  uVar8 = uVar9;
                }
                *(undefined4 *)puVar10[3] = uVar8;
                *(uint *)(puVar10[3] + 4) = uVar40;
                puVar10[3] = puVar10[3] + 8;
              }
              local_63c8 = 1;
              goto LAB_1805ba4d2;
            case 0x3e:
              if (iVar18 != 0) goto LAB_1805bc747;
              uVar29 = *(uint *)(*(longlong *)(lVar45 + 0x328) + 0x2c0);
              uVar44 = uVar29 << 0xd ^ uVar29;
              uVar44 = uVar44 >> 0x11 ^ uVar44;
              *(uint *)(*(longlong *)(lVar45 + 0x328) + 0x2c0) = uVar44 << 5 ^ uVar44;
              if ((int *)puVar10[3] != (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
              {
                *(int *)puVar10[3] = (uVar29 & 0xffff) + 1;
                goto LAB_1805ba73b;
              }
LAB_1805ba705:
              puVar36 = (uint *)puVar10[1];
              if ((puVar36 == (uint *)0x0) || (*puVar36 != uVar40)) {
LAB_1805ba748:
                uVar12 = (ulonglong)local_63f4;
                local_63c8 = 1;
                piVar14 = local_6400;
                puVar47 = local_63d0;
              }
              else {
                uVar12 = (ulonglong)local_63f4;
                *puVar36 = 0x82;
                local_63c8 = 1;
                piVar14 = local_6400;
                puVar47 = local_63d0;
              }
              goto LAB_1805b8a69;
            }
            piVar14 = (int *)puVar10[1];
            if (piVar14 != (int *)0x0) {
              iVar32 = *piVar14;
LAB_1805ba0a9:
              if (iVar32 == 0) {
                *piVar14 = 0x82;
              }
            }
LAB_1805ba0b1:
            piVar14 = local_6400;
            goto LAB_1805b8a69;
          case 0xd:
            if (*(char *)((longlong)puVar47 + 0xc) == '\0') goto switchD_1805b8b63_caseD_0;
            lVar34 = puVar10[3];
            if (lVar34 == puVar10[2]) {
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0xa1;
              }
              iVar32 = 0;
            }
            else {
              piVar13 = (int *)(lVar34 + -8);
              puVar10[3] = piVar13;
              if (*(int *)(lVar34 + -4) == 1) {
                iVar32 = *piVar13 + (*piVar13 >> 0x1f) + 0x2000 >> 0xe;
              }
              else {
                iVar32 = *piVar13;
                if (*(int *)(lVar34 + -4) == 2) {
                  iVar32 = iVar32 << 0x10;
                }
              }
            }
            **(int **)(lVar45 + 0x48) = iVar32;
            *(undefined4 *)(*(longlong *)(lVar45 + 0x48) + 4) = 0;
            lVar34 = puVar10[3];
            if (lVar34 == puVar10[2]) {
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0xa1;
              }
              iVar32 = 0;
            }
            else {
              piVar13 = (int *)(lVar34 + -8);
              puVar10[3] = piVar13;
              if (*(int *)(lVar34 + -4) == 1) {
                iVar32 = *piVar13 + (*piVar13 >> 0x1f) + 0x2000 >> 0xe;
              }
              else {
                iVar32 = *piVar13;
                if (*(int *)(lVar34 + -4) == 2) {
                  iVar32 = iVar32 << 0x10;
                }
              }
            }
            local_63f8 = '\x01';
            **(int **)(lVar45 + 0x40) = **(int **)(lVar45 + 0x40) + iVar32;
            if (*(char *)(lVar45 + 0x5b) == '\0') {
              if (local_63f7 != 0) {
                uVar42 = uVar42 + iVar32;
                param_6 = uVar42;
                local_63f0 = uVar42;
              }
              goto switchD_1805b8b63_caseD_0;
            }
            break;
          case 0xe:
            if ((*(char *)((longlong)puVar47 + 0xc) != '\0') && (local_63f7 == 0)) {
              if ((char)local_19b4 != '\0') {
                local_19b4 = CONCAT11(1,(char)local_19b4);
                FUN_1805b70b0(&local_6288,local_1958 & 0xffffffff,local_1958._4_4_);
                if (local_1950 != '\0') {
                  local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                  FUN_1805b73c0(&local_6288,&local_6278,&local_1978,uStack_1970);
                }
                local_19b4 = 0;
                local_1950 = '\0';
              }
              local_1958 = CONCAT44(local_6408,uVar42);
              local_1968 = CONCAT44(local_6408,uVar42);
              local_19b1 = 1;
              if ((local_6260 == '\0') || (*(char *)((longlong)local_19a0 + 9) != '\0')) {
                local_6420 = (uint *)((ulonglong)local_6420 & 0xffffffffffffff00);
                local_6428 = (char *)CONCAT44(local_6428._4_4_,local_1998);
                FUN_1805b7910(&local_6278,local_19b0,local_19a8);
              }
              FUN_18063aed0(&local_4a50,&local_6278,0x1828);
              local_63f7 = 1;
              local_6338 = 0;
              local_6300 = 0;
              local_62e8 = local_6400;
              uStack_62e0 = 0x100;
              local_62d8 = 0;
              uStack_62d0 = 0;
              local_62c8 = 0;
              uStack_62c0 = 0;
              if (0 < iVar32) {
                do {
                  local_63f4 = (int)uVar12 - 1;
                  uVar12 = (ulonglong)local_63f4;
                  uVar26 = (ulonglong)local_63f4;
                  if (local_6378 <= uVar26) {
                    if (*local_6400 == 0) {
                      *local_6400 = 0x82;
                    }
                    uVar26 = 0;
                  }
                  puVar27 = local_63e0 + uVar26 * 4;
                } while (0 < (int)local_63f4);
                uVar42 = local_63f0;
                local_63b8 = puVar27;
              }
              uVar26 = (ulonglong)local_6408;
              puVar27[3] = puVar27[1];
              piVar14 = local_6400;
              goto switchD_1805b8b63_caseD_0;
            }
            iVar32 = (int)((longlong)(puVar10[3] - puVar10[2]) >> 3);
            if (((iVar32 == 1) || (iVar32 == 5)) && (local_63f8 == '\0')) {
              iVar32 = FUN_1805bcf30(puVar10);
              *local_6390 = iVar32 + local_639c;
            }
            if (*(char *)(lVar45 + 0x340) == '\0') {
              if ((char)local_19b4 != '\0') {
                local_19b4 = CONCAT11(1,(char)local_19b4);
                FUN_1805b70b0(&local_6288,local_1958 & 0xffffffff,local_1958._4_4_);
                if (local_1950 != '\0') {
                  local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                  FUN_1805b73c0(&local_6288,&local_6278,&local_1978,uStack_1970);
                }
                local_19b1 = 1;
                local_19b4 = 0;
                local_1950 = '\0';
              }
              if (((*(char *)((longlong)puVar47 + 0xd) != '\0') ||
                  (*(char *)((longlong)puVar47 + 0xc) != '\0')) ||
                 ((uint)((longlong)(puVar10[3] - puVar10[2]) >> 3) < 2)) break;
              if (param_5 != '\0') goto LAB_1805bc747;
              uVar42 = FUN_1805bcfe0(puVar10);
              uVar12 = (ulonglong)uVar42;
              uVar8 = FUN_1805bcfe0();
              uVar42 = FUN_1805bcf90();
              uVar9 = FUN_1805bcf90(puVar10);
              lVar45 = local_63b0;
              iVar32 = FUN_1805b66e0(local_63b0,uVar12 & 0xffffffff,&local_f8);
              uVar11 = local_6368;
              puVar21 = local_6370;
              puVar33 = local_63d0;
              if (iVar32 == 0) {
                local_6410 = &local_63a4;
                local_6420 = (uint *)CONCAT44(local_6420._4_4_,uVar9);
                local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                local_6418 = uVar42;
                FUN_1805b8500(local_63d0,&local_f8,local_6368,local_6370);
                (**(code **)(lVar45 + 0x388))
                          (*(undefined8 *)(lVar45 + 8),&uStack_f0,(int)local_e8 - (int)uStack_f0);
                iVar32 = FUN_1805b66e0(lVar45,uVar8,&local_f8);
                if (iVar32 == 0) {
                  local_6410 = &local_63a4;
                  local_6418 = 0;
                  local_6420 = (uint *)((ulonglong)local_6420 & 0xffffffff00000000);
                  local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                  FUN_1805b8500(puVar33,&local_f8,uVar11,puVar21);
                  (**(code **)(lVar45 + 0x388))
                            (*(undefined8 *)(lVar45 + 8),&uStack_f0,(int)local_e8 - (int)uStack_f0);
                  puVar21 = puVar10;
                  puVar33 = local_63e0;
                  piVar14 = local_6400;
                  iVar32 = local_63d8;
                }
                else {
                  puVar21 = puVar10;
                  puVar33 = local_63e0;
                  piVar14 = local_6400;
                }
              }
              else {
                puVar21 = puVar10;
                puVar33 = local_63e0;
                piVar14 = local_6400;
              }
              goto LAB_1805bcca0;
            }
            break;
          case 0xf:
            if (*(char *)((longlong)puVar47 + 0xd) == '\0') goto switchD_1805b8b63_caseD_0;
            if (*(char *)((longlong)puVar47 + 0x61) != '\0') goto LAB_1805bc747;
            lVar34 = puVar10[3];
            if (lVar34 == puVar10[2]) {
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0xa1;
              }
              *(undefined4 *)(puVar47 + 0x12) = 0;
            }
            else if (*(int *)(lVar34 + -4) == 2) {
              puVar10[3] = (int *)(lVar34 + -8);
              iVar32 = *(int *)(lVar34 + -8);
              if (-1 < iVar32) {
                *(int *)(puVar47 + 0x12) = iVar32;
              }
            }
            else {
              piVar13 = (int *)puVar10[1];
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0xa0;
              }
              *(undefined4 *)(puVar47 + 0x12) = 0;
            }
            goto switchD_1805b8b63_caseD_0;
          case 0x10:
            if (*(char *)((longlong)puVar47 + 0xd) == '\0') goto switchD_1805b8b63_caseD_0;
            if (puVar47[0xd] == 0) goto LAB_1805bc747;
            cVar7 = (**(code **)(puVar47[0x51] + 0x18))
                              (puVar47 + 0xc,*(undefined4 *)(puVar47 + 0x12),
                               *(undefined4 *)((longlong)puVar47 + 0x94),puVar47[0x13]);
            if (cVar7 != '\0') {
              iVar32 = (**(code **)(puVar47[0x51] + 0x20))
                                 (puVar47 + 0xc,*(undefined4 *)(puVar47 + 0x12),
                                  *(undefined4 *)((longlong)puVar47 + 0x94),puVar47[0x13]);
              local_63d8 = iVar32;
              if (iVar32 != 0) goto LAB_1805bc74d;
            }
            lVar34 = puVar10[3];
            if (lVar34 == puVar10[2]) {
              piVar14 = (int *)puVar10[1];
              if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                *piVar14 = 0xa1;
              }
              uVar29 = 0;
            }
            else if (*(int *)(lVar34 + -4) == 2) {
              puVar10[3] = (uint *)(lVar34 + -8);
              uVar29 = *(uint *)(lVar34 + -8);
              if (local_63a4 < uVar29) goto LAB_1805bc747;
            }
            else {
              piVar14 = (int *)puVar10[1];
              if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                *piVar14 = 0xa0;
              }
              uVar29 = 0;
            }
            FUN_1805b5ab0(puVar47 + 0xc,puVar10,uVar29);
            uVar26 = (ulonglong)local_6408;
            *(undefined1 *)((longlong)puVar47 + 0x61) = 1;
            puVar27 = local_63b8;
            piVar14 = local_6400;
            goto LAB_1805b8a69;
          case 0x13:
          case 0x14:
            if (1 < (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3)) {
              if ((char)uStack_62e0 != '\0') goto switchD_1805b8b63_caseD_0;
            }
            local_6420 = (uint *)((ulonglong)local_6420._4_4_ << 0x20);
            local_6428 = &local_63f8;
            FUN_1805b60a0(puVar47,puVar10,&local_6358,local_6390);
            if (*(char *)(lVar45 + 0x340) == '\0') {
              if (bVar39 != 0x13) {
                FUN_18063ab10(&local_1928,0,0x1828);
                piVar14 = local_6400;
                local_190f = *(undefined1 *)(puVar47 + 0x20);
                uVar26 = local_6338 + local_6300;
                local_190c = local_63a0;
                local_1920 = &local_3228;
                local_1918 = &local_1a00;
                local_62b0 = 0;
                local_62a8 = 0;
                local_62a0 = 0;
                local_62b8 = local_6400;
                local_6298 = 0;
                uStack_6290 = 0;
                if (uVar26 < 0x61) {
                  local_62a0 = uVar26 + 7 >> 3;
                  local_62b0 = 0x101;
                  local_62a8 = uVar26;
                  if ((uVar26 != 0) && (uVar26 = 0, local_62a0 != 0)) {
                    do {
                      puVar3 = (undefined1 *)puVar27[3];
                      if (puVar3 < (undefined1 *)puVar27[2]) {
                        uVar15 = *puVar3;
                        puVar27[3] = puVar3 + 1;
                      }
                      else {
                        piVar13 = (int *)*puVar27;
                        if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                          *piVar13 = 0x55;
                        }
                        uVar15 = 0;
                      }
                      local_6258[uVar26 - 0x40] = uVar15;
                      uVar26 = uVar26 + 1;
                    } while (uVar26 < local_62a0);
                  }
                }
                else if ((local_6400 != (int *)0x0) && (*local_6400 == 0)) {
                  *local_6400 = 0x12;
                }
                local_6420 = (uint *)((ulonglong)local_6420 & 0xffffffffffffff00);
                local_6428 = (char *)((ulonglong)local_6428 & 0xffffffff00000000);
                local_1928 = puVar47;
                FUN_1805b7910(&local_1928,&local_6320,&local_6358,&local_62b8);
                uVar26 = (ulonglong)local_6408;
                puVar47 = local_63d0;
                goto switchD_1805b8b63_caseD_0;
              }
              uVar26 = local_6338 + local_6300;
              if (uVar26 < 0x61) {
                local_62d8 = uVar26;
                uStack_62d0 = uVar26 + 7 >> 3;
                uStack_62e0 = CONCAT62(uStack_62e0._2_6_,0x101);
                if ((uVar26 != 0) && (uVar26 = 0, uStack_62d0 != 0)) {
                  do {
                    puVar3 = (undefined1 *)puVar27[3];
                    if (puVar3 < (undefined1 *)puVar27[2]) {
                      uVar15 = *puVar3;
                      puVar27[3] = puVar3 + 1;
                    }
                    else {
                      piVar14 = (int *)*puVar27;
                      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                        *piVar14 = 0x55;
                      }
                      uVar15 = 0;
                    }
                    local_6258[uVar26 - 0x70] = uVar15;
                    uVar26 = uVar26 + 1;
                  } while (uVar26 < uStack_62d0);
                }
              }
              else if ((local_62e8 != (int *)0x0) && (*local_62e8 == 0)) {
                *local_62e8 = 0x12;
              }
              goto LAB_1805b8f33;
            }
            break;
          case 0x15:
            piVar13 = (int *)puVar10[2];
            if ((2 < (uint)(puVar10[3] - (longlong)piVar13 >> 3)) && (local_63f8 == '\0')) {
              iVar32 = *piVar13;
              if (piVar13[1] == 1) {
                iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
              }
              else if (piVar13[1] == 2) {
                iVar32 = iVar32 << 0x10;
              }
              *local_6390 = local_639c + iVar32;
            }
            local_63f8 = '\x01';
            if (*(char *)(lVar45 + 0x340) == '\0') {
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar13 = (int *)puVar10[1];
                if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                  *piVar13 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                piVar13 = (int *)(lVar34 + -8);
                puVar10[3] = piVar13;
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = *piVar13 + (*piVar13 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar32 = *piVar13;
                  if (*(int *)(lVar34 + -4) == 2) {
                    iVar32 = iVar32 << 0x10;
                  }
                }
              }
              local_6408 = uVar29 + iVar32;
              uVar26 = (ulonglong)local_6408;
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar13 = (int *)puVar10[1];
                if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                  *piVar13 = 0xa1;
                }
                param_6 = uVar42;
                local_63f0 = uVar42;
              }
              else {
                piVar13 = (int *)(lVar34 + -8);
                puVar10[3] = piVar13;
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = *piVar13 + (*piVar13 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar32 = *piVar13;
                  if (*(int *)(lVar34 + -4) == 2) {
                    uVar42 = uVar42 + iVar32 * 0x10000;
                    param_6 = uVar42;
                    local_63f0 = uVar42;
                    goto LAB_1805b8e3c;
                  }
                }
                uVar42 = uVar42 + iVar32;
                param_6 = uVar42;
                local_63f0 = uVar42;
              }
LAB_1805b8e3c:
              local_63f8 = '\x01';
              param_7 = local_6408;
              if (*(int *)(lVar45 + 0x2e0) == 0) {
                uVar29 = (uint)uVar26;
                if ((char)local_19b4 != '\0') {
                  local_19b4 = CONCAT11(1,(char)local_19b4);
                  FUN_1805b70b0(&local_6288,local_1958 & 0xffffffff,local_1958._4_4_);
                  if (local_1950 != '\0') {
                    local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                    FUN_1805b73c0(&local_6288,&local_6278,&local_1978,uStack_1970);
                  }
                  local_19b4 = 0;
                  local_1950 = '\0';
                  uVar29 = local_6408;
                }
                local_1958._4_4_ = uVar29;
LAB_1805b8ec5:
                local_1968 = CONCAT44(local_1958._4_4_,uVar42);
                local_1958 = CONCAT44(local_1958._4_4_,uVar42);
                local_19b1 = 1;
                if ((local_6260 == '\0') || (*(char *)((longlong)local_19a0 + 9) != '\0')) {
                  local_6420 = (uint *)((ulonglong)local_6420 & 0xffffffffffffff00);
                  local_6428 = (char *)CONCAT44(local_6428._4_4_,local_1998);
                  FUN_1805b7910(&local_6278,local_19b0,local_19a8);
                }
                FUN_18063aed0(&local_4a50,&local_6278,0x1828);
LAB_1805b8f33:
                uVar26 = (ulonglong)local_6408;
switchD_1805b993b_caseD_8:
                piVar14 = local_6400;
              }
switchD_1805b8b63_caseD_0:
LAB_1805b8f3f:
              puVar10[3] = puVar10[2];
              goto LAB_1805b8a69;
            }
            break;
          case 0x16:
            piVar13 = (int *)puVar10[2];
            if ((1 < (uint)(puVar10[3] - (longlong)piVar13 >> 3)) && (local_63f8 == '\0')) {
              iVar32 = *piVar13;
              if (piVar13[1] == 1) {
                iVar32 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
              }
              else if (piVar13[1] == 2) {
                iVar32 = iVar32 << 0x10;
              }
              *local_6390 = local_639c + iVar32;
            }
            local_63f8 = '\x01';
            if (*(char *)(lVar45 + 0x340) == '\0') {
              lVar34 = puVar10[3];
              if (lVar34 == puVar10[2]) {
                piVar13 = (int *)puVar10[1];
                if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                  *piVar13 = 0xa1;
                }
                iVar32 = 0;
              }
              else {
                piVar13 = (int *)(lVar34 + -8);
                puVar10[3] = piVar13;
                if (*(int *)(lVar34 + -4) == 1) {
                  iVar32 = *piVar13 + (*piVar13 >> 0x1f) + 0x2000 >> 0xe;
                }
                else {
                  iVar32 = *piVar13;
                  if (*(int *)(lVar34 + -4) == 2) {
                    iVar32 = iVar32 << 0x10;
                  }
                }
              }
              uVar42 = uVar42 + iVar32;
              param_6 = uVar42;
              local_63f0 = uVar42;
              if (*(int *)(lVar45 + 0x2e0) == 0) {
                if ((char)local_19b4 != '\0') {
                  local_19b4 = CONCAT11(1,(char)local_19b4);
                  FUN_1805b70b0(&local_6288,local_1958 & 0xffffffff,local_1958._4_4_);
                  if (local_1950 != '\0') {
                    local_6428 = (char *)CONCAT71(local_6428._1_7_,1);
                    FUN_1805b73c0(&local_6288,&local_6278,&local_1978,uStack_1970);
                  }
                  local_19b4 = 0;
                  local_1950 = '\0';
                }
                local_1958._4_4_ = local_6408;
                goto LAB_1805b8ec5;
              }
              goto LAB_1805b8f3f;
            }
            break;
          case 0x19:
            uVar29 = 0;
            uVar40 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
            if (6 < uVar40) {
              uVar44 = 1;
              do {
                lVar45 = puVar10[2];
                if (uVar29 < (uint)(puVar10[3] - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar29 * 8);
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar29 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *piVar14;
                    if (iVar32 == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar18 = 0;
                }
                uVar42 = uVar42 + iVar18;
                lVar45 = puVar10[2];
                if (uVar44 < (uint)(puVar10[3] - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar44 * 8);
                  iVar32 = *(int *)(lVar45 + 4 + (ulonglong)uVar44 * 8);
                  if (iVar32 == 1) {
                    iVar32 = *piVar14;
                    iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *piVar14;
                    if (iVar32 == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar18 = 0;
                }
                param_7 = (int)uVar26 + iVar18;
                param_6 = uVar42;
                local_6408 = param_7;
                FUN_1805b70b0(&local_6288,uVar42,param_7);
                uVar26 = (ulonglong)local_6408;
                uVar29 = uVar29 + 2;
                uVar46 = uVar44 + 7;
                uVar44 = uVar44 + 2;
              } while (uVar46 < uVar40);
              puVar27 = local_63b8;
              local_63f0 = uVar42;
            }
            uVar26 = (ulonglong)local_6408;
            if (uVar29 < uVar40) {
              uVar29 = uVar29 + 2;
              do {
                if (uVar29 - 2 < (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3)) {
                  piVar14 = (int *)(puVar10[2] + (ulonglong)(uVar29 - 2) * 8);
                  if (piVar14[1] == 1) {
                    iVar32 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar32 = *piVar14;
                    if (piVar14[1] == 2) {
                      iVar32 = iVar32 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar32 = 0;
                }
                iVar32 = iVar32 + uVar42;
                if (uVar29 - 1 < (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3)) {
                  piVar14 = (int *)(puVar10[2] + (ulonglong)(uVar29 - 1) * 8);
                  if (piVar14[1] == 1) {
                    iVar18 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar18 = *piVar14;
                    if (piVar14[1] == 2) {
                      iVar18 = iVar18 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar18 = 0;
                }
                iVar18 = (int)uVar26 + iVar18;
                lVar45 = puVar10[2];
                if (uVar29 < (uint)(puVar10[3] - lVar45 >> 3)) {
                  piVar14 = (int *)(lVar45 + (ulonglong)uVar29 * 8);
                  iVar19 = *(int *)(lVar45 + 4 + (ulonglong)uVar29 * 8);
                  if (iVar19 == 1) {
                    iVar19 = *piVar14;
                    iVar20 = iVar19 + (iVar19 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar20 = *piVar14;
                    if (iVar19 == 2) {
                      iVar20 = iVar20 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar20 = 0;
                }
                if (uVar29 + 1 < (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3)) {
                  piVar14 = (int *)(puVar10[2] + (ulonglong)(uVar29 + 1) * 8);
                  if (piVar14[1] == 1) {
                    iVar19 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar19 = *piVar14;
                    if (piVar14[1] == 2) {
                      iVar19 = iVar19 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar19 = 0;
                }
                iVar19 = iVar18 + iVar19;
                if (uVar29 + 2 < (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3)) {
                  piVar14 = (int *)(puVar10[2] + (ulonglong)(uVar29 + 2) * 8);
                  if (piVar14[1] == 1) {
                    iVar17 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar17 = *piVar14;
                    if (piVar14[1] == 2) {
                      iVar17 = iVar17 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar17 = 0;
                }
                uVar42 = iVar32 + iVar20 + iVar17;
                if (uVar29 + 3 < (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3)) {
                  piVar14 = (int *)(puVar10[2] + (ulonglong)(uVar29 + 3) * 8);
                  if (piVar14[1] == 1) {
                    iVar20 = *piVar14 + (*piVar14 >> 0x1f) + 0x2000 >> 0xe;
                  }
                  else {
                    iVar20 = *piVar14;
                    if (piVar14[1] == 2) {
                      iVar20 = iVar20 << 0x10;
                    }
                  }
                }
                else {
                  piVar14 = (int *)puVar10[1];
                  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
                    *piVar14 = 0x82;
                  }
                  iVar20 = 0;
                }
                local_6418 = iVar19 + iVar20;
                local_6420 = (uint *)CONCAT44(local_6420._4_4_,uVar42);
                local_6428 = (char *)CONCAT44(local_6428._4_4_,iVar19);
                local_6408 = local_6418;
                FUN_1805b6d90(&local_6288,iVar32,iVar18);
                uVar26 = (ulonglong)local_6408;
                param_7 = local_6408;
                uVar44 = uVar29 + 4;
                uVar29 = uVar29 + 6;
                param_6 = uVar42;
              } while (uVar44 < uVar40);
              local_63f0 = uVar42;
            }
            uVar12 = (ulonglong)local_63f4;
            puVar10[3] = puVar10[2];
            piVar14 = local_6400;
            lVar45 = local_63b0;
            goto LAB_1805b8a69;
          case 0x1a:
            uVar29 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
            uVar40 = uVar29 & 0xfffffffd;
            uVar29 = uVar29 - uVar40;
            if (uVar40 <= uVar29) goto LAB_1805bbfac;
            uVar23 = uVar29 + 3;
            uVar46 = uVar29 + 2;
            uVar44 = uVar29 + 1;
            goto LAB_1805bbab0;
          case 0x1b:
            uVar29 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
            uVar40 = uVar29 & 0xfffffffd;
            uVar29 = uVar29 - uVar40;
            if (uVar40 <= uVar29) goto LAB_1805bbfac;
            uVar23 = uVar29 + 3;
            uVar46 = uVar29 + 2;
            uVar44 = uVar29 + 1;
            goto LAB_1805bbd40;
          case 0x1c:
            pbVar2 = (byte *)puVar27[3];
            if (pbVar2 < (byte *)puVar27[2]) {
              uVar22 = (ushort)*pbVar2;
              puVar27[3] = pbVar2 + 1;
            }
            else {
              piVar13 = (int *)*puVar27;
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0x55;
              }
              uVar22 = 0;
            }
            pbVar2 = (byte *)puVar27[3];
            if (pbVar2 < (byte *)puVar27[2]) {
              uVar23 = (uint)*pbVar2;
              puVar27[3] = pbVar2 + 1;
            }
            else {
              piVar13 = (int *)*puVar27;
              if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                *piVar13 = 0x55;
              }
              uVar23 = 0;
            }
            uVar23 = (int)(short)(uVar22 << 8) | uVar23;
LAB_1805bc4ef:
            if ((uint *)puVar10[3] == (uint *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
            goto LAB_1805b9e02;
            *(uint *)puVar10[3] = uVar23;
LAB_1805bc50a:
            *(undefined4 *)(puVar10[3] + 4) = 2;
            puVar10[3] = puVar10[3] + 8;
            goto LAB_1805b8a69;
          case 0x1e:
          case 0x1f:
            goto switchD_1805b8b63_caseD_1e;
          default:
            if (bVar39 < 0xf7) {
              iVar32 = uVar40 - 0x8b;
            }
            else {
              pbVar2 = (byte *)puVar27[2];
              pbVar4 = (byte *)puVar27[3];
              if (0xfa < bVar39) {
                if (bVar39 != 0xff) {
                  if (pbVar4 < pbVar2) {
                    uVar44 = (uint)*pbVar4;
                    puVar27[3] = pbVar4 + 1;
                  }
                  else {
                    piVar13 = (int *)*puVar27;
                    if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                      *piVar13 = 0x55;
                    }
                    uVar44 = 0;
                  }
                  iVar32 = (uVar40 * -0x100 + 0xfa94) - uVar44;
                  goto LAB_1805bc5bf;
                }
                if (pbVar4 < pbVar2) {
                  uVar40 = (uint)*pbVar4;
                  puVar27[3] = pbVar4 + 1;
                }
                else {
                  piVar13 = (int *)*puVar27;
                  if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                    *piVar13 = 0x55;
                  }
                  uVar40 = 0;
                }
                pbVar2 = (byte *)puVar27[3];
                if (pbVar2 < (byte *)puVar27[2]) {
                  uVar44 = (uint)*pbVar2;
                  puVar27[3] = pbVar2 + 1;
                }
                else {
                  piVar13 = (int *)*puVar27;
                  if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                    *piVar13 = 0x55;
                  }
                  uVar44 = 0;
                }
                pbVar2 = (byte *)puVar27[3];
                if (pbVar2 < (byte *)puVar27[2]) {
                  uVar46 = (uint)*pbVar2;
                  puVar27[3] = pbVar2 + 1;
                }
                else {
                  piVar13 = (int *)*puVar27;
                  if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                    *piVar13 = 0x55;
                  }
                  uVar46 = 0;
                }
                pbVar2 = (byte *)puVar27[3];
                if (pbVar2 < (byte *)puVar27[2]) {
                  uVar23 = (uint)*pbVar2;
                  puVar27[3] = pbVar2 + 1;
                }
                else {
                  piVar13 = (int *)*puVar27;
                  if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                    *piVar13 = 0x55;
                  }
                  uVar23 = 0;
                }
                uVar23 = ((uVar40 << 8 | uVar44) << 8 | uVar46) << 8 | uVar23;
                if (*(char *)((longlong)puVar47 + 0xc) != '\0') {
                  if (64000 < uVar23 + 32000) {
                    cVar7 = (char)local_63a8;
                    if ((char)local_63a8 == '\0') {
                      cVar7 = '\x01';
                    }
                    local_63a8 = CONCAT31(local_63a8._1_3_,cVar7);
                  }
                  goto LAB_1805bc4ef;
                }
                puVar36 = (uint *)puVar10[3];
                if (puVar36 == (uint *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8))
                goto LAB_1805b9e02;
LAB_1805bc6ed:
                *puVar36 = uVar23;
                goto LAB_1805bc6f0;
              }
              if (pbVar4 < pbVar2) {
                bVar39 = *pbVar4;
                puVar27[3] = pbVar4 + 1;
                iVar32 = (bVar39 - 0xf694) + uVar40 * 0x100;
              }
              else {
                piVar13 = (int *)*puVar27;
                if ((piVar13 != (int *)0x0) && (*piVar13 == 0)) {
                  *piVar13 = 0x55;
                }
                iVar32 = uVar40 * 0x100 + -0xf694;
              }
            }
LAB_1805bc5bf:
            if ((int *)puVar10[3] != (int *)(puVar10[2] + (ulonglong)*(uint *)(puVar10 + 4) * 8)) {
              *(int *)puVar10[3] = iVar32;
              goto LAB_1805bc50a;
            }
            goto LAB_1805b9e02;
          }
LAB_1805bc85d:
          puVar21 = puVar10;
          puVar33 = local_63e0;
          piVar14 = local_6400;
          iVar32 = local_63d8;
          goto LAB_1805bcca0;
        }
        puVar33 = local_63e0;
        iVar32 = 0;
      }
    }
    else {
      FUN_18057abd0(local_6380);
      puVar21 = (undefined8 *)0x0;
      puVar28 = (undefined8 *)0x0;
      iVar32 = 0x40;
    }
  }
  else {
    puVar21 = (undefined8 *)0x0;
    puVar28 = (undefined8 *)0x0;
    iVar32 = 0x40;
  }
LAB_1805bcca0:
  puVar10 = puVar21;
LAB_1805bcca2:
  if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
    *piVar14 = iVar32;
  }
  local_19d8 = 0;
  local_19e8 = 0;
  uStack_19e0 = 0;
  FUN_18057abd0(local_1a00,uStack_19d0);
  uStack_19d0 = 0;
  local_6340 = 0;
  local_6338 = 0;
  local_6330 = 0;
  FUN_18057abd0(local_6358,local_6328);
  local_6328 = 0;
  local_6308 = 0;
  local_6300 = 0;
  local_62f8 = 0;
  FUN_18057abd0(local_6320,local_62f0);
  local_62f0 = 0;
  FUN_18057abd0(local_6380,puVar33);
  if (puVar28 != (undefined8 *)0x0) {
    uVar11 = *puVar10;
    FUN_18057abd0(uVar11,puVar28[2]);
    puVar28[2] = 0;
    FUN_18057abd0(uVar11,puVar28);
  }
switchD_1805b8b63_caseD_1e:
  bVar49 = uVar40 == 0x1f;
  uVar29 = (uint)((longlong)(puVar10[3] - puVar10[2]) >> 3);
  local_63c4 = uVar29 & 0xfffffffd;
  uVar29 = uVar29 - local_63c4;
  if (uVar29 < local_63c4) {
    uVar40 = uVar29 + 3;
    uVar46 = uVar29 + 2;
    uVar44 = uVar29 + 1;
    uVar42 = uVar29;
    do {
      uVar43 = uVar42 + 4;
      uVar48 = (ulonglong)uVar46;
      uVar25 = (ulonglong)uVar44;
      uVar30 = (ulonglong)uVar43;
      uVar41 = (ulonglong)uVar40;
      uVar12 = (ulonglong)uVar29;
      lVar45 = puVar10[2];
      uVar23 = (uint)(puVar10[3] - lVar45 >> 3);
      if (bVar49) {
        if (uVar29 < uVar23) {
          piVar14 = (int *)(lVar45 + uVar12 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar12 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar18 = *piVar14;
            if (iVar32 == 2) {
              iVar18 = iVar18 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar18 = 0;
        }
        uVar38 = iVar18 + local_63f0;
        lVar45 = puVar10[2];
        if (uVar44 < (uint)(puVar10[3] - lVar45 >> 3)) {
          piVar14 = (int *)(lVar45 + uVar25 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar25 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar18 = *piVar14;
            if (iVar32 == 2) {
              iVar18 = iVar18 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar18 = 0;
        }
        lVar45 = puVar10[2];
        if (uVar46 < (uint)(puVar10[3] - lVar45 >> 3)) {
          piVar14 = (int *)(lVar45 + uVar48 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar48 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar19 = *piVar14;
            if (iVar32 == 2) {
              iVar19 = iVar19 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar19 = 0;
        }
        uVar23 = local_6408 + iVar19;
        lVar45 = puVar10[2];
        if (uVar40 < (uint)(puVar10[3] - lVar45 >> 3)) {
          piVar14 = (int *)(lVar45 + uVar41 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar41 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar19 = *piVar14;
            if (iVar32 == 2) {
              iVar19 = iVar19 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar19 = 0;
        }
        local_6408 = uVar23 + iVar19;
        if (local_63c4 - uVar29 == 5) {
          lVar45 = puVar10[2];
          if (uVar43 < (uint)(puVar10[3] - lVar45 >> 3)) {
            piVar14 = (int *)(lVar45 + uVar30 * 8);
            iVar32 = *(int *)(lVar45 + 4 + uVar30 * 8);
            if (iVar32 == 1) {
              iVar32 = *piVar14;
              iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
            }
            else {
              iVar19 = *piVar14;
              if (iVar32 == 2) {
                iVar19 = iVar19 << 0x10;
              }
            }
          }
          else {
            piVar14 = (int *)puVar10[1];
            if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
              *piVar14 = 0x82;
            }
            iVar19 = 0;
          }
          uVar29 = uVar29 + 1;
          uVar44 = uVar44 + 1;
          uVar46 = uVar46 + 1;
          uVar40 = uVar40 + 1;
          bVar49 = false;
          uVar42 = uVar42 + 5;
          uVar43 = uVar38 + iVar18 + iVar19;
        }
        else {
          bVar49 = false;
          uVar42 = uVar43;
          uVar43 = uVar38 + iVar18;
        }
      }
      else {
        if (uVar29 < uVar23) {
          piVar14 = (int *)(lVar45 + uVar12 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar12 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar18 = *piVar14;
            if (iVar32 == 2) {
              iVar18 = iVar18 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar18 = 0;
        }
        uVar23 = (int)uVar26 + iVar18;
        uVar26 = (ulonglong)uVar23;
        lVar45 = puVar10[2];
        if (uVar44 < (uint)(puVar10[3] - lVar45 >> 3)) {
          piVar14 = (int *)(lVar45 + uVar25 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar25 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar18 = *piVar14;
            if (iVar32 == 2) {
              iVar18 = iVar18 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar18 = 0;
        }
        lVar45 = puVar10[2];
        if (uVar46 < (uint)(puVar10[3] - lVar45 >> 3)) {
          piVar14 = (int *)(lVar45 + uVar48 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar48 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar19 = *piVar14;
            if (iVar32 == 2) {
              iVar19 = iVar19 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar19 = 0;
        }
        uVar23 = uVar23 + iVar19;
        lVar45 = puVar10[2];
        if (uVar40 < (uint)(puVar10[3] - lVar45 >> 3)) {
          piVar14 = (int *)(lVar45 + uVar41 * 8);
          iVar32 = *(int *)(lVar45 + 4 + uVar41 * 8);
          if (iVar32 == 1) {
            iVar32 = *piVar14;
            iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
          }
          else {
            iVar19 = *piVar14;
            if (iVar32 == 2) {
              iVar19 = iVar19 << 0x10;
            }
          }
        }
        else {
          piVar14 = (int *)puVar10[1];
          if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
            *piVar14 = 0x82;
          }
          iVar19 = 0;
        }
        if (local_63c4 - uVar29 == 5) {
          lVar45 = puVar10[2];
          if (uVar43 < (uint)(puVar10[3] - lVar45 >> 3)) {
            piVar14 = (int *)(lVar45 + uVar30 * 8);
            iVar32 = *(int *)(lVar45 + 4 + uVar30 * 8);
            if (iVar32 == 1) {
              iVar32 = *piVar14;
              iVar20 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
            }
            else {
              iVar20 = *piVar14;
              if (iVar32 == 2) {
                iVar20 = iVar20 << 0x10;
              }
            }
          }
          else {
            piVar14 = (int *)puVar10[1];
            if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
              *piVar14 = 0x82;
            }
            iVar20 = 0;
          }
          uVar29 = uVar29 + 1;
          uVar44 = uVar44 + 1;
          uVar46 = uVar46 + 1;
          uVar40 = uVar40 + 1;
          uVar42 = uVar42 + 5;
          local_6408 = uVar23 + iVar20;
        }
        else {
          uVar42 = uVar43;
          local_6408 = uVar23;
        }
        bVar49 = true;
        uVar43 = iVar18 + local_63f0 + iVar19;
        uVar38 = local_63f0;
      }
      local_63f0 = uVar43;
      local_6418 = local_6408;
      local_6420 = (uint *)CONCAT44(local_6420._4_4_,local_63f0);
      local_6428 = (char *)CONCAT44(local_6428._4_4_,uVar23);
      FUN_1805b6d90(&local_6288,uVar38,uVar26 & 0xffffffff);
      uVar29 = uVar29 + 4;
      uVar26 = (ulonglong)local_6408;
      uVar44 = uVar44 + 4;
      uVar46 = uVar46 + 4;
      param_6 = local_63f0;
      uVar40 = uVar40 + 4;
      param_7 = local_6408;
    } while (uVar29 < local_63c4);
    piVar14 = local_6400;
    lVar45 = local_63b0;
    puVar47 = local_63d0;
    uVar42 = local_63f0;
  }
  uVar12 = (ulonglong)local_63f4;
  puVar10[3] = puVar10[2];
  puVar27 = local_63b8;
  goto LAB_1805b8a69;
LAB_1805bbd40:
  do {
    uVar25 = (ulonglong)uVar23;
    uVar30 = (ulonglong)uVar46;
    uVar41 = (ulonglong)uVar44;
    uVar12 = (ulonglong)uVar29;
    iVar32 = (int)uVar26;
    if ((uVar40 - uVar29 & 1) != 0) {
      lVar45 = puVar10[2];
      if (uVar29 < (uint)(puVar10[3] - lVar45 >> 3)) {
        piVar14 = (int *)(lVar45 + uVar12 * 8);
        iVar18 = *(int *)(lVar45 + 4 + uVar12 * 8);
        if (iVar18 == 1) {
          iVar18 = *piVar14;
          iVar19 = iVar18 + (iVar18 >> 0x1f) + 0x2000 >> 0xe;
        }
        else {
          iVar19 = *piVar14;
          if (iVar18 == 2) {
            uVar12 = (ulonglong)(uVar29 + 1);
            uVar41 = (ulonglong)(uVar44 + 1);
            uVar30 = (ulonglong)(uVar46 + 1);
            uVar25 = (ulonglong)(uVar23 + 1);
            iVar32 = iVar19 * 0x10000 + iVar32;
            goto LAB_1805bbdd4;
          }
        }
        uVar12 = (ulonglong)(uVar29 + 1);
        iVar32 = iVar19 + iVar32;
        uVar41 = (ulonglong)(uVar44 + 1);
        uVar30 = (ulonglong)(uVar46 + 1);
        uVar25 = (ulonglong)(uVar23 + 1);
      }
      else {
        piVar14 = (int *)puVar10[1];
        if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
          *piVar14 = 0x82;
        }
        uVar12 = (ulonglong)(uVar29 + 1);
        uVar41 = (ulonglong)(uVar44 + 1);
        uVar30 = (ulonglong)(uVar46 + 1);
        uVar25 = (ulonglong)(uVar23 + 1);
      }
    }
LAB_1805bbdd4:
    lVar45 = puVar10[2];
    if ((uint)uVar12 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar12 * 8);
      iVar18 = *(int *)(lVar45 + 4 + uVar12 * 8);
      if (iVar18 == 1) {
        iVar18 = *piVar14;
        iVar19 = iVar18 + (iVar18 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar19 = *piVar14;
        if (iVar18 == 2) {
          iVar19 = iVar19 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar19 = 0;
    }
    lVar45 = puVar10[2];
    if ((uint)uVar41 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar41 * 8);
      iVar18 = *(int *)(lVar45 + 4 + uVar41 * 8);
      if (iVar18 == 1) {
        iVar18 = *piVar14;
        iVar20 = iVar18 + (iVar18 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar20 = *piVar14;
        if (iVar18 == 2) {
          iVar20 = iVar20 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar20 = 0;
    }
    lVar45 = puVar10[2];
    if ((uint)uVar30 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar30 * 8);
      iVar18 = *(int *)(lVar45 + 4 + uVar30 * 8);
      if (iVar18 == 1) {
        iVar18 = *piVar14;
        iVar17 = iVar18 + (iVar18 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar17 = *piVar14;
        if (iVar18 == 2) {
          iVar17 = iVar17 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar17 = 0;
    }
    local_6418 = iVar32 + iVar17;
    lVar45 = puVar10[2];
    if ((uint)uVar25 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar25 * 8);
      iVar32 = *(int *)(lVar45 + 4 + uVar25 * 8);
      if (iVar32 == 1) {
        iVar32 = *piVar14;
        iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar18 = *piVar14;
        if (iVar32 == 2) {
          iVar18 = iVar18 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar18 = 0;
    }
    uVar42 = iVar19 + uVar42 + iVar20 + iVar18;
    local_6420 = (uint *)CONCAT44(local_6420._4_4_,uVar42);
    local_6428 = (char *)CONCAT44(local_6428._4_4_,local_6418);
    local_6408 = local_6418;
    FUN_1805b6d90(&local_6288);
    uVar26 = (ulonglong)local_6408;
    uVar29 = (uint)uVar12 + 4;
    uVar44 = (uint)uVar41 + 4;
    uVar46 = (uint)uVar30 + 4;
    param_7 = local_6408;
    uVar23 = (uint)uVar25 + 4;
    param_6 = uVar42;
  } while (uVar29 < uVar40);
  goto LAB_1805bbf95;
LAB_1805bbab0:
  do {
    uVar25 = (ulonglong)uVar23;
    uVar30 = (ulonglong)uVar46;
    uVar41 = (ulonglong)uVar44;
    uVar12 = (ulonglong)uVar29;
    uVar43 = uVar42;
    if ((uVar40 - uVar29 & 1) != 0) {
      lVar45 = puVar10[2];
      if (uVar29 < (uint)(puVar10[3] - lVar45 >> 3)) {
        piVar14 = (int *)(lVar45 + uVar12 * 8);
        iVar32 = *(int *)(lVar45 + 4 + uVar12 * 8);
        if (iVar32 == 1) {
          iVar32 = *piVar14;
          iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
        }
        else {
          iVar18 = *piVar14;
          if (iVar32 == 2) {
            uVar12 = (ulonglong)(uVar29 + 1);
            uVar41 = (ulonglong)(uVar44 + 1);
            uVar30 = (ulonglong)(uVar46 + 1);
            uVar25 = (ulonglong)(uVar23 + 1);
            uVar43 = iVar18 * 0x10000 + uVar42;
            goto LAB_1805bbb44;
          }
        }
        uVar12 = (ulonglong)(uVar29 + 1);
        uVar41 = (ulonglong)(uVar44 + 1);
        uVar30 = (ulonglong)(uVar46 + 1);
        uVar25 = (ulonglong)(uVar23 + 1);
        uVar43 = iVar18 + uVar42;
      }
      else {
        piVar14 = (int *)puVar10[1];
        if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
          *piVar14 = 0x82;
        }
        uVar12 = (ulonglong)(uVar29 + 1);
        uVar41 = (ulonglong)(uVar44 + 1);
        uVar30 = (ulonglong)(uVar46 + 1);
        uVar25 = (ulonglong)(uVar23 + 1);
      }
    }
LAB_1805bbb44:
    lVar45 = puVar10[2];
    if ((uint)uVar12 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar12 * 8);
      iVar32 = *(int *)(lVar45 + 4 + uVar12 * 8);
      if (iVar32 == 1) {
        iVar32 = *piVar14;
        iVar18 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar18 = *piVar14;
        if (iVar32 == 2) {
          iVar18 = iVar18 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar18 = 0;
    }
    iVar18 = (int)uVar26 + iVar18;
    lVar45 = puVar10[2];
    if ((uint)uVar41 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar41 * 8);
      iVar32 = *(int *)(lVar45 + 4 + uVar41 * 8);
      if (iVar32 == 1) {
        iVar32 = *piVar14;
        iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar19 = *piVar14;
        if (iVar32 == 2) {
          iVar19 = iVar19 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar19 = 0;
    }
    uVar42 = uVar43 + iVar19;
    lVar45 = puVar10[2];
    if ((uint)uVar30 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar30 * 8);
      iVar32 = *(int *)(lVar45 + 4 + uVar30 * 8);
      if (iVar32 == 1) {
        iVar32 = *piVar14;
        iVar19 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar19 = *piVar14;
        if (iVar32 == 2) {
          iVar19 = iVar19 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar19 = 0;
    }
    iVar19 = iVar18 + iVar19;
    lVar45 = puVar10[2];
    if ((uint)uVar25 < (uint)(puVar10[3] - lVar45 >> 3)) {
      piVar14 = (int *)(lVar45 + uVar25 * 8);
      iVar32 = *(int *)(lVar45 + 4 + uVar25 * 8);
      if (iVar32 == 1) {
        iVar32 = *piVar14;
        iVar20 = iVar32 + (iVar32 >> 0x1f) + 0x2000 >> 0xe;
      }
      else {
        iVar20 = *piVar14;
        if (iVar32 == 2) {
          iVar20 = iVar20 << 0x10;
        }
      }
    }
    else {
      piVar14 = (int *)puVar10[1];
      if ((piVar14 != (int *)0x0) && (*piVar14 == 0)) {
        *piVar14 = 0x82;
      }
      iVar20 = 0;
    }
    local_6418 = iVar19 + iVar20;
    local_6420 = (uint *)CONCAT44(local_6420._4_4_,uVar42);
    local_6428 = (char *)CONCAT44(local_6428._4_4_,iVar19);
    local_6408 = local_6418;
    FUN_1805b6d90(&local_6288,uVar43,iVar18,uVar42);
    uVar26 = (ulonglong)local_6408;
    uVar29 = (uint)uVar12 + 4;
    uVar44 = (uint)uVar41 + 4;
    uVar46 = (uint)uVar30 + 4;
    param_7 = local_6408;
    uVar23 = (uint)uVar25 + 4;
    param_6 = uVar42;
  } while (uVar29 < uVar40);
LAB_1805bbf95:
  uVar12 = (ulonglong)local_63f4;
  piVar14 = local_6400;
  lVar45 = local_63b0;
  puVar47 = local_63d0;
  uVar42 = param_6;
  param_7 = local_6408;
  local_63f0 = param_6;
LAB_1805bbfac:
  puVar10[3] = puVar10[2];
  puVar27 = local_63b8;
  goto LAB_1805b8a69;
switchD_1805b9ad2_caseD_10:
  piVar14 = local_6400;
  if (bVar1 != 0) goto code_r0x0001805ba27b;
  goto LAB_1805b8a76;
code_r0x0001805ba27b:
  puVar21 = puVar10;
  iVar32 = FUN_1805bcfe0();
  uVar30 = (ulonglong)iVar32;
  uVar29 = FUN_1805bcfe0();
  puVar47 = (undefined8 *)(ulonglong)uVar29;
  if ((uint)((longlong)(puVar10[3] - puVar10[2]) >> 3) < uVar29) {
    puVar33 = local_63e0;
    iVar32 = 0x12;
    goto LAB_1805bcca0;
  }
  local_63c8 = 0;
  local_63c0 = 0;
  if ((uint)uVar30 < 0x1d) {
                    /* WARNING: Could not recover jumptable at 0x0001805ba2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulonglong)(&UINT_1805bceb4)[uVar30] + 0x180000000))
              ((code *)((ulonglong)(&UINT_1805bceb4)[uVar30] + 0x180000000));
    return;
  }
switchD_1805b9ad2_caseD_26:
  if ((int)puVar47 < 0) goto LAB_1805bc747;
  if ((int)uVar30 < 0) goto LAB_1805bc747;
  uVar12 = (ulonglong)puVar47 & 0xffffffff;
  if (3 < (int)puVar47) {
    uVar12 = 3;
  }
  local_63c0 = (int)uVar12;
  if (uVar12 == 0) {
LAB_1805bae8f:
    uVar12 = (ulonglong)local_63f4;
    piVar14 = local_6400;
    puVar47 = local_63d0;
  }
  else {
    puVar35 = &uStack_dc + uVar12;
    do {
      uVar8 = FUN_1805bcf90(puVar10);
      *puVar35 = uVar8;
      puVar35 = puVar35 + -1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    uVar12 = (ulonglong)local_63f4;
    piVar14 = local_6400;
    puVar47 = local_63d0;
  }
  goto LAB_1805b8a69;
LAB_1805bc747:
  iVar32 = 0x12;
LAB_1805bc74d:
  puVar21 = puVar10;
  puVar33 = local_63e0;
  piVar14 = local_6400;
  goto LAB_1805bcca0;
}



