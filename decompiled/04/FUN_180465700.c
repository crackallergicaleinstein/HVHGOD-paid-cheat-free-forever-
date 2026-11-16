// FUN_180465700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180465700 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180465700(longlong param_1,longlong param_2,float *param_3,int *param_4,float *param_5,
                  float *param_6)

{
  float *pfVar1;
  longlong *plVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [8];
  char cVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  float *pfVar17;
  undefined8 *puVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  float *pfVar23;
  uint uVar24;
  longlong *plVar25;
  int iVar26;
  char *pcVar27;
  undefined **ppuVar28;
  int *piVar29;
  char cVar30;
  char *pcVar31;
  longlong lVar32;
  longlong lVar33;
  bool bVar34;
  bool bVar35;
  float fVar36;
  float fVar37;
  undefined1 extraout_var [56];
  ulonglong uVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  float fVar52;
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  float fVar55;
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  uint uVar60;
  uint uVar61;
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined8 uVar62;
  float afStackY_842c [5659];
  undefined *puStackY_2bc0;
  undefined1 auStackY_2bb8 [32];
  float local_2b58;
  uint local_2b40;
  undefined8 local_2b38;
  float local_2b30;
  int *local_2b28;
  longlong local_2b20;
  float local_2b18;
  float local_2b14;
  float local_2b10;
  undefined2 local_2b0c;
  float local_2b08;
  float local_2b04;
  int *local_2b00;
  undefined8 uStack_2af8;
  float local_2af0;
  float local_2ae8;
  longlong local_2ae0;
  uint local_2ad8;
  float local_2ad0 [2];
  float local_2ac8;
  int local_2ac4;
  float local_2ac0;
  uint local_2abc;
  float local_2ab8;
  float local_2ab4;
  float local_2ab0;
  float local_2aac;
  undefined4 local_2aa8;
  undefined4 local_2aa4;
  float local_2aa0;
  float local_2a9c;
  float local_2a98;
  float local_2a94;
  float local_2a90;
  float local_2a8c;
  undefined4 local_2a88;
  undefined4 local_2a84;
  float local_2a80;
  float local_2a7c;
  float local_2a78;
  float local_2a74;
  float local_2a70;
  float local_2a6c;
  undefined4 local_2a68;
  undefined4 local_2a64;
  float local_2a60;
  float local_2a5c;
  float local_2a58;
  float local_2a54;
  float local_2a50;
  float local_2a4c;
  float local_2a48;
  float local_2a44;
  undefined4 local_2a40;
  float local_2a3c;
  float local_2a38;
  float local_2a34;
  float local_2a30;
  float local_2a2c;
  float local_2a28;
  float local_2a24;
  float local_2a20;
  float local_2a1c;
  float local_2a18;
  float local_2a14;
  float local_2a10;
  float local_2a0c;
  float local_2a08;
  float local_2a04;
  float local_2a00;
  float local_29fc;
  float local_29f8;
  float local_29f4;
  float local_29f0;
  float local_29ec;
  float local_29e8;
  float local_29e4;
  float local_29e0;
  float local_29dc;
  float local_29d8;
  float local_29d4;
  float local_29d0;
  float local_29cc;
  float local_29c8;
  float local_29c4;
  float local_29c0;
  float local_29bc;
  undefined1 local_29b8 [16];
  uint **local_29a8;
  float *pfStack_29a0;
  undefined1 *local_2998;
  float local_2988 [2];
  int *local_2980;
  undefined8 local_2978;
  float *pfStack_2970;
  undefined8 local_2968;
  undefined8 uStack_2960;
  undefined8 uStack_2958;
  undefined8 uStack_2950;
  float local_2948;
  float local_2944;
  float local_2940;
  float local_293c;
  float local_2938;
  float fStack_2934;
  undefined8 local_2930;
  undefined8 local_2928;
  undefined8 local_2920;
  undefined8 local_2918;
  float *local_2910;
  float *local_2908 [2];
  undefined8 local_28f8;
  ulonglong local_28f0;
  float local_18e8;
  bool local_18e4 [4];
  float local_18e0;
  float local_18dc;
  float local_18d8;
  uint local_18d4;
  float local_18d0;
  float local_18cc;
  float local_18c8;
  float local_18c4;
  float local_18c0;
  float local_18bc;
  float local_18b8 [2];
  uint local_18b0 [2];
  undefined1 local_18a8 [8];
  float *pfStack_18a0;
  float *local_1898;
  float local_1888 [2];
  longlong *local_1880;
  longlong *plStack_1878;
  longlong local_1870;
  undefined1 local_1868 [32];
  float local_1848;
  float local_1844;
  float local_1840;
  float local_183c;
  uint *local_1838;
  bool *local_1830;
  float *local_1828;
  float *local_1820;
  float *local_1818;
  float *local_1810;
  float *local_1808;
  float *local_1800;
  undefined1 local_17f8 [12];
  float fStack_17ec;
  undefined1 local_17e8 [12];
  float fStack_17dc;
  undefined1 local_17d8 [12];
  float fStack_17cc;
  undefined1 local_17c8 [12];
  float fStack_17bc;
  undefined1 local_17b8 [16];
  undefined1 local_17a8 [16];
  undefined1 local_1798 [16];
  undefined1 local_1788 [16];
  undefined1 local_1778 [16];
  undefined1 local_1768 [16];
  undefined1 local_1758 [16];
  undefined1 local_1748 [16];
  undefined1 local_1738 [16];
  undefined1 local_1728 [16];
  undefined4 local_1718;
  undefined4 local_1714;
  undefined1 local_1708 [8];
  undefined8 uStack_1700;
  undefined8 local_16f8;
  undefined8 uStack_16f0;
  undefined8 local_16e8;
  undefined8 uStack_16e0;
  undefined8 local_16d8;
  undefined8 uStack_16d0;
  undefined8 local_16c8;
  undefined8 uStack_16c0;
  undefined8 local_16b8;
  undefined8 uStack_16b0;
  undefined8 local_16a8;
  undefined8 uStack_16a0;
  undefined8 local_1698;
  undefined8 uStack_1690;
  undefined8 local_1688;
  undefined8 uStack_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined8 local_1658;
  undefined8 uStack_1650;
  undefined8 local_1648;
  undefined8 uStack_1640;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined4 local_1628;
  undefined4 local_1624;
  undefined8 local_1618;
  undefined8 uStack_1610;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined8 local_15d8;
  undefined8 uStack_15d0;
  undefined8 local_15c8;
  undefined8 uStack_15c0;
  undefined8 local_15b8;
  undefined8 uStack_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined8 uStack_1590;
  undefined8 local_1588;
  undefined8 uStack_1580;
  undefined8 local_1578;
  undefined8 uStack_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined8 local_1558;
  undefined8 uStack_1550;
  undefined8 local_1548;
  undefined8 uStack_1540;
  undefined4 local_1538;
  undefined4 local_1534;
  undefined1 local_1528 [16];
  undefined1 local_1518 [16];
  undefined1 local_1508 [16];
  undefined1 local_14f8 [16];
  undefined1 local_14e8 [16];
  undefined1 local_14d8 [16];
  undefined1 local_14c8 [16];
  undefined1 local_14b8 [16];
  undefined1 local_14a8 [16];
  undefined1 local_1498 [16];
  undefined1 local_1488 [16];
  undefined1 local_1478 [16];
  undefined1 local_1468 [16];
  undefined1 local_1458 [16];
  undefined4 local_1448;
  undefined4 local_1444;
  undefined8 local_1438;
  undefined8 uStack_1430;
  undefined8 uStack_1428;
  undefined8 uStack_1420;
  undefined8 local_1418;
  undefined8 uStack_1410;
  undefined8 uStack_1408;
  undefined8 uStack_1400;
  undefined8 local_13f8;
  undefined8 uStack_13f0;
  undefined8 uStack_13e8;
  undefined8 uStack_13e0;
  undefined8 local_13d8;
  undefined8 uStack_13d0;
  undefined4 local_13c8;
  undefined1 local_13b8 [32];
  undefined1 local_1398 [32];
  undefined1 local_1378 [32];
  undefined1 local_1358 [16];
  undefined4 local_1348;
  int local_1338 [1132];
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulonglong local_e8 [22];
  
  lVar13 = DAT_180bb8ae8;
  local_e8[0] = DAT_1808d5f00 ^ (ulonglong)auStackY_2bb8;
  local_2ae0 = DAT_180bb8ae8;
  local_2b14 = *(float *)(DAT_180bb8ae8 + 0x40);
  iVar20 = *param_4;
  if (iVar20 < 0) {
    iVar20 = 0;
  }
  else if (2 < iVar20) {
    iVar20 = 2;
  }
  *param_4 = iVar20;
  param_4 = param_4 + (longlong)iVar20 * 0x46b + 1;
  puStackY_2bc0 = (undefined *)0x180465800;
  local_2b20 = param_2;
  local_2980 = param_4;
  FUN_18063aed0(local_1338,param_4,0x11ac);
  piVar19 = local_1338;
  if (*(char *)(param_1 + 0x6e04) == '\0') {
    piVar19 = param_4;
  }
  fVar36 = 0.5;
  auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*param_5 + 0.5)),1);
  local_18e0 = auVar39._0_4_;
  auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_5[1] + 0.5)),1);
  local_18dc = auVar39._0_4_;
  auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*param_6 + 0.5)),1);
  local_18c0 = auVar39._0_4_;
  auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_6[1] + 0.5)),1);
  local_18bc = auVar39._0_4_;
  puStackY_2bc0 = (undefined *)0x18046589d;
  local_2b28 = piVar19;
  FUN_1804c2800("##esp");
  local_1840 = DAT_180b0a41c * 386.0 + *param_3;
  local_183c = DAT_180b0a41c * 90.0 + param_3[1];
  local_1848 = DAT_180b0a41c * 625.0 + *param_3;
  local_1844 = DAT_180b0a41c * 475.0 + param_3[1];
  local_18b8[0] = DAT_180b0a41c * 3.0;
  local_1888[0] = local_1848 - local_1840;
  fVar43 = *(float *)(lVar13 + 0x110);
  fVar37 = local_1840;
  if (local_1840 <= fVar43) {
    auVar39 = vminss_avx(ZEXT416((uint)local_1848),ZEXT416((uint)fVar43));
    fVar37 = auVar39._0_4_;
  }
  fVar43 = *(float *)(lVar13 + 0x114);
  fVar40 = local_183c;
  if (local_183c <= fVar43) {
    auVar39 = vminss_avx(ZEXT416((uint)local_1844),ZEXT416((uint)fVar43));
    fVar40 = auVar39._0_4_;
  }
  local_1618 = 0;
  uStack_1610 = 0;
  local_1608 = 0;
  uStack_1600 = 0;
  local_15f8 = 0;
  uStack_15f0 = 0;
  local_15e8 = 0;
  uStack_15e0 = 0;
  local_15d8 = 0;
  uStack_15d0 = 0;
  local_15c8 = 0;
  uStack_15c0 = 0;
  local_15b8 = 0;
  uStack_15b0 = 0;
  local_15a8 = 0;
  uStack_15a0 = 0;
  local_1598 = 0;
  uStack_1590 = 0;
  local_1588 = 0;
  uStack_1580 = 0;
  local_1578 = 0;
  uStack_1570 = 0;
  local_1568 = 0;
  uStack_1560 = 0;
  local_1558 = 0;
  uStack_1550 = 0;
  local_1548 = 0;
  uStack_1540 = 0;
  local_2b58 = 0.0;
  local_1538 = 0;
  local_1534 = 0;
  local_1708 = (undefined1  [8])0x0;
  uStack_1700 = 0;
  local_16f8 = 0;
  uStack_16f0 = 0;
  local_16e8 = 0;
  uStack_16e0 = 0;
  local_16d8 = 0;
  uStack_16d0 = 0;
  local_16c8 = 0;
  uStack_16c0 = 0;
  local_16b8 = 0;
  uStack_16b0 = 0;
  local_16a8 = 0;
  uStack_16a0 = 0;
  local_1698 = 0;
  uStack_1690 = 0;
  local_1688 = 0;
  uStack_1680 = 0;
  local_1678 = 0;
  uStack_1670 = 0;
  local_1668 = 0;
  uStack_1660 = 0;
  local_1658 = 0;
  uStack_1650 = 0;
  local_1648 = 0;
  uStack_1640 = 0;
  local_1638 = 0;
  uStack_1630 = 0;
  local_1628 = 0;
  local_1624 = 0;
  local_1438 = 0;
  uStack_1430 = 0;
  uStack_1428 = 0;
  uStack_1420 = 0;
  local_1418 = 0;
  uStack_1410 = 0;
  uStack_1408 = 0;
  uStack_1400 = 0;
  local_13f8 = 0;
  uStack_13f0 = 0;
  uStack_13e8 = 0;
  uStack_13e0 = 0;
  local_13d8 = 0;
  uStack_13d0 = 0;
  local_13c8 = 0;
  local_1880 = (longlong *)0x0;
  plStack_1878 = (longlong *)0x0;
  local_1870 = 0;
  local_1828 = &local_18e0;
  local_1820 = &local_18c0;
  local_1818 = local_18b8;
  local_1810 = &local_1848;
  local_1808 = &local_1840;
  local_1800 = local_1888;
  local_18d4 = 0xffffffff;
  pcVar31 = "";
  uVar24 = 0x7fffffff;
  uVar21 = 0x7fffffff;
  uVar60 = 0x7fffffff;
  uVar61 = 0x7fffffff;
  if (*(char *)(param_1 + 0x6e04) != '\0') {
    pfVar17 = (float *)(param_1 + 0x6df8);
    if (-1 < (int)*pfVar17) {
      local_2944 = fVar40 - *(float *)(param_1 + 0x6e00);
      local_2948 = fVar37 - *(float *)(param_1 + 0x6dfc);
      uVar9 = *(uint *)(param_1 + 0x6e08);
      if ((int)uVar9 < 0) {
        uVar9 = (uint)*(byte *)((longlong)(int)*pfVar17 * 0x9c + 1 + (longlong)param_4);
      }
      local_188 = local_18e0 - local_2948;
      fStack_184 = local_18dc - local_2944;
      fStack_180 = local_2948 - local_18c0;
      fStack_17c = local_2944 - local_18bc;
      if (uVar9 == 0) {
        bVar35 = local_18e0 - local_18b8[0] == local_2948;
        bVar34 = local_18e0 - local_18b8[0] < local_2948;
LAB_180465c1a:
        local_1718 = 0;
        if (bVar34 || bVar35) goto LAB_180465c1c;
      }
      else {
        if (uVar9 == 2) {
          bVar35 = local_2948 == local_18c0 + local_18b8[0];
          bVar34 = local_2948 < local_18c0 + local_18b8[0];
          goto LAB_180465c1a;
        }
        if (uVar9 == 1) {
          bVar35 = local_18dc - local_18b8[0] == local_2944;
          bVar34 = local_18dc - local_18b8[0] < local_2944;
          goto LAB_180465c1a;
        }
        if (uVar9 == 3) {
          bVar35 = local_2944 == local_18bc + local_18b8[0];
          bVar34 = local_2944 < local_18bc + local_18b8[0];
          goto LAB_180465c1a;
        }
LAB_180465c1c:
        auVar46 = ZEXT864(0);
        puStackY_2bc0 = (undefined *)0x180465c37;
        pfVar12 = (float *)FUN_1805f9dd0(&local_188,local_178,0);
        if (*pfVar12 <= auVar46._0_4_) {
          local_178._0_4_ = uVar24 & (uint)local_188;
          local_178._4_4_ = uVar21 & (uint)fStack_184;
          local_178._8_4_ = uVar60 & (uint)fStack_180;
          local_178._12_4_ = uVar61 & (uint)fStack_17c;
          puStackY_2bc0 = (undefined *)0x180465c8b;
          lVar13 = FUN_1805f9e60(local_178,&local_168,0);
          local_1718 = auVar46._0_4_;
          pfVar12 = (float *)local_178;
        }
        else {
          puStackY_2bc0 = (undefined *)0x180465c5a;
          lVar13 = FUN_1805f9dd0(&local_188,local_178);
          local_1718 = auVar46._0_4_;
          pfVar12 = &local_188;
        }
        uVar9 = (uint)(lVar13 - (longlong)pfVar12 >> 2);
      }
      *(uint *)(param_1 + 0x6e08) = uVar9;
      unique0x10001f20 = 0;
      local_17f8 = ZEXT812(0);
      _local_17f8 = _local_17f8 << 0x20;
      _local_17e8 = ZEXT816(0);
      local_13b8 = ZEXT1232(ZEXT812(0)) << 0x20;
      local_1348 = 0;
      puStackY_2bc0 = (undefined *)0x180465e3b;
      local_18d4 = uVar9;
      _local_17d8 = _local_17f8;
      _local_17c8 = _local_17e8;
      local_17b8 = _local_17f8;
      local_17a8 = _local_17e8;
      local_1798 = _local_17f8;
      local_1788 = _local_17e8;
      local_1778 = _local_17f8;
      local_1768 = _local_17e8;
      local_1758 = _local_17f8;
      local_1748 = _local_17e8;
      local_1738 = _local_17f8;
      local_1728 = _local_17e8;
      local_1714 = local_1718;
      local_1528 = _local_17f8;
      local_1518 = _local_17e8;
      local_1508 = _local_17f8;
      local_14f8 = _local_17e8;
      local_14e8 = _local_17f8;
      local_14d8 = _local_17e8;
      local_14c8 = _local_17f8;
      local_14b8 = _local_17e8;
      local_14a8 = _local_17f8;
      local_1498 = _local_17e8;
      local_1488 = _local_17f8;
      local_1478 = _local_17e8;
      local_1468 = _local_17f8;
      local_1458 = _local_17e8;
      local_1448 = local_1718;
      local_1444 = local_1718;
      local_1398 = local_13b8;
      local_1378 = local_13b8;
      local_1358 = _local_17f8;
      FUN_1804693d0(&local_1828,param_4,*pfVar17,local_1528);
      local_18e4[0] = (&DAT_18077eecc)[(longlong)(int)*pfVar17 * 0x20] == '\x03';
      uVar24 = 0;
      if (((&DAT_18077eecc)[(longlong)(int)*pfVar17 * 0x20] != '\x03') &&
         ((local_18d4 - 1 & 0xfffffffd) == 0)) {
        auVar46 = ZEXT864(0);
        fVar43 = 0.0;
        lVar13 = 0;
        pcVar27 = "\x02\x01\x01";
        piVar19 = param_4 + 2;
        do {
          if (((char)piVar19[-2] != '\0') && (*(byte *)((longlong)piVar19 + -7) == local_18d4)) {
            if (pcVar27[-0x20] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17f8 + lVar13 * 8 + 4);
            }
            else if (*piVar19 == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17f8 + lVar13 * 8 + 4)));
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0x25] != '\0') && (*(byte *)((longlong)piVar19 + 0x95) == local_18d4))
          {
            if (*pcVar27 == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17f8 + lVar13 * 8 + 0xc);
            }
            else if (piVar19[0x27] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17f8 + lVar13 * 8 + 0xc)))
              ;
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0x4c] != '\0') && (*(byte *)((longlong)piVar19 + 0x131) == local_18d4))
          {
            if (pcVar27[0x20] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17e8 + lVar13 * 8 + 4);
            }
            else if (piVar19[0x4e] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17e8 + lVar13 * 8 + 4)));
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0x73] != '\0') && (*(byte *)((longlong)piVar19 + 0x1cd) == local_18d4))
          {
            if (pcVar27[0x40] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17e8 + lVar13 * 8 + 0xc);
            }
            else if (piVar19[0x75] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17e8 + lVar13 * 8 + 0xc)))
              ;
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0x9a] != '\0') && (*(byte *)((longlong)piVar19 + 0x269) == local_18d4))
          {
            if (pcVar27[0x60] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17d8 + lVar13 * 8 + 4);
            }
            else if (piVar19[0x9c] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17d8 + lVar13 * 8 + 4)));
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0xc1] != '\0') && (*(byte *)((longlong)piVar19 + 0x305) == local_18d4))
          {
            if (pcVar27[0x80] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17d8 + lVar13 * 8 + 0xc);
            }
            else if (piVar19[0xc3] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17d8 + lVar13 * 8 + 0xc)))
              ;
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0xe8] != '\0') && (*(byte *)((longlong)piVar19 + 0x3a1) == local_18d4))
          {
            if (pcVar27[0xa0] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17c8 + lVar13 * 8 + 4);
            }
            else if (piVar19[0xea] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17c8 + lVar13 * 8 + 4)));
              auVar46 = ZEXT1664(auVar39);
            }
          }
          if (((char)piVar19[0x10f] != '\0') && (*(byte *)((longlong)piVar19 + 0x43d) == local_18d4)
             ) {
            if (pcVar27[0xc0] == '\x03') {
              fVar43 = fVar43 + local_18b8[0] + *(float *)(local_17c8 + lVar13 * 8 + 0xc);
            }
            else if (piVar19[0x111] == 0) {
              auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416(*(uint *)(local_17c8 + lVar13 * 8 + 0xc)))
              ;
              auVar46 = ZEXT1664(auVar39);
            }
          }
          auVar39 = auVar46._0_16_;
          lVar13 = lVar13 + 8;
          pcVar27 = pcVar27 + 0x100;
          piVar19 = piVar19 + 0x138;
        } while ((longlong)pcVar27 < 0x18077f1ac);
        if (lVar13 < 0x1d) {
          pfVar12 = (float *)(local_17f8 + lVar13 * 8 + 4);
          pcVar27 = &DAT_18077eecc + lVar13 * 0x20;
          piVar19 = param_4 + lVar13 * 0x27 + 2;
          do {
            if (((char)piVar19[-2] != '\0') && (*(byte *)((longlong)piVar19 + -7) == local_18d4)) {
              if (*pcVar27 == '\x03') {
                fVar43 = fVar43 + local_18b8[0] + *pfVar12;
              }
              else if (*piVar19 == 0) {
                auVar39 = vmaxss_avx(auVar46._0_16_,ZEXT416((uint)*pfVar12));
                auVar46 = ZEXT1664(auVar39);
              }
            }
            auVar39 = auVar46._0_16_;
            pcVar27 = pcVar27 + 0x20;
            piVar19 = piVar19 + 0x27;
            pfVar12 = pfVar12 + 2;
          } while ((longlong)pcVar27 < 0x18077f26c);
        }
        if (local_18d4 == 1) {
          fVar37 = local_18dc - local_2944;
        }
        else {
          fVar37 = local_2944 - local_18bc;
        }
        auVar39 = vmaxss_avx(auVar39,ZEXT416((uint)(DAT_180b0a41c * 12.0)));
        uVar24 = (uint)(auVar39._0_4_ + fVar43 + local_18b8[0] + local_18b8[0] * fVar36 < fVar37);
      }
      local_2b28[(longlong)(int)*pfVar17 * 0x27 + 2] = uVar24;
      local_1838 = &local_18d4;
      local_1830 = local_18e4;
      _local_18a8 = (undefined1  [16])0x0;
      local_1898 = (float *)0x0;
      local_18d8 = 0.0;
      pfStack_18a0 = (float *)0x0;
      pfVar12 = pfStack_18a0;
      do {
        fVar43 = local_18d8;
        if (local_18d8 != *pfVar17) {
          lVar13 = (longlong)(int)local_18d8;
          if ((char)param_4[(longlong)(int)local_18d8 * 0x27] != '\0') {
            if ((((1 < (byte)(&DAT_18077eecc)[lVar13 * 0x20]) &&
                 (*(byte *)(lVar13 * 0x9c + 1 + (longlong)param_4) == local_18d4)) &&
                (((&DAT_18077eecc)[lVar13 * 0x20] == 3) == local_18e4[0])) &&
               (((local_18e4[0] != false || ((local_18d4 - 1 & 0xfffffffd) != 0)) ||
                (param_4[lVar13 * 0x27 + 2] == uVar24)))) {
              if (pfVar12 == local_1898) {
                puStackY_2bc0 = (undefined *)0x18046627f;
                FUN_18026b910(local_18a8,pfVar12,&local_18d8);
                pfVar12 = pfStack_18a0;
              }
              else {
                *pfVar12 = local_18d8;
                pfVar12 = (float *)((longlong)pfStack_18a0 + 4);
                pfStack_18a0 = pfVar12;
              }
            }
          }
        }
        local_18d8 = (float)((int)fVar43 + 1);
      } while ((int)local_18d8 < 0x1d);
      auVar5 = local_18a8;
      lVar13 = (longlong)pfVar12 - (longlong)local_18a8 >> 2;
      if (lVar13 < 0x21) {
        puStackY_2bc0 = (undefined *)0x1804662c8;
        FUN_18046d7f0(local_18a8,pfVar12,param_4);
      }
      else {
        puStackY_2bc0 = (undefined *)0x1804662eb;
        FUN_1802ad670(&local_28f8,
                      lVar13 - (lVar13 - ((longlong)pfVar12 - (longlong)local_18a8 >> 0x3f) >> 1));
        puStackY_2bc0 = (undefined *)0x180466314;
        FUN_18046d910(auVar5,pfVar12,lVar13,local_28f8);
        if (0x400 < local_28f0) {
          if (DAT_180c7df30 == 0) {
            local_178._8_8_ = 0x15;
            local_178._0_8_ = "tier0.dll:g_pMemAlloc";
            puStackY_2bc0 = (undefined *)0x18046635f;
            DAT_180c7df30 = FUN_180451750(local_178);
          }
          puStackY_2bc0 = (undefined *)0x180466379;
          (**(code **)(**(longlong **)DAT_180c7df30 + 0x18))();
        }
      }
      local_2b38 = (float *)0x0;
      local_29a8 = &local_1838;
      pfStack_29a0 = &local_2948;
      local_2998 = local_1528;
      puStackY_2bc0 = (undefined *)0x1804663d9;
      FUN_18046d280(&local_2b38,local_18a8,pfStack_18a0,&local_29a8);
      pfVar12 = local_2b38;
      pfVar23 = pfStack_18a0;
      if (pfStack_18a0 == local_1898) {
        puStackY_2bc0 = (undefined *)0x180466444;
        FUN_18026b910(local_18a8,local_2b38);
      }
      else {
        fVar43 = *pfVar17;
        if (local_2b38 == pfStack_18a0) {
          *pfStack_18a0 = fVar43;
          pfStack_18a0 = pfStack_18a0 + 1;
        }
        else {
          pfVar1 = pfStack_18a0 + -1;
          *pfStack_18a0 = *pfVar1;
          pfStack_18a0 = pfStack_18a0 + 1;
          puStackY_2bc0 = (undefined *)0x180466428;
          FUN_18063aed0((longlong)pfVar23 - ((longlong)pfVar1 - (longlong)local_2b38),local_2b38);
          *pfVar12 = fVar43;
        }
      }
      piVar19 = local_2b28;
      *(char *)((longlong)(int)*pfVar17 * 0x9c + 1 + (longlong)local_2b28) = (char)local_18d4;
      lVar13 = 0;
      iVar20 = 0;
      if (0 < (int)((longlong)pfStack_18a0 - (longlong)local_18a8 >> 2)) {
        do {
          local_2b28[(longlong)*(int *)(lVar13 + (longlong)local_18a8) * 0x27 + 1] =
               (int)(float)iVar20;
          iVar20 = iVar20 + 1;
          lVar13 = lVar13 + 4;
        } while (iVar20 < (int)((longlong)pfStack_18a0 - (longlong)local_18a8 >> 2));
      }
      puStackY_2bc0 = (undefined *)0x1804664ca;
      FUN_180159650(local_18a8);
    }
  }
  puStackY_2bc0 = (undefined *)0x180466512;
  FUN_1804693d0(&local_1828,piVar19,0xffffffff,&local_1618);
  iVar20 = 0;
  pfVar17 = (float *)(param_1 + 0x6e14);
  auVar47 = ZEXT464((uint)local_18dc);
  auVar46 = ZEXT464((uint)local_18e0);
  uVar24 = 0x80000000;
  auVar53 = ZEXT464(0x41c00000);
  auVar54 = ZEXT464(0x41800000);
  fVar37 = 1.0;
  piVar19 = local_2b28;
  fVar43 = local_2b14;
  do {
    if (((*pcVar31 != '\0') && (*pcVar31 != '\x01')) && ((char)*piVar19 != '\0')) {
      fVar40 = *(float *)(((longlong)afStackY_842c - param_1) + (longlong)pfVar17) - auVar46._0_4_;
      fVar48 = *(float *)((longlong)afStackY_842c + (4 - param_1) + (longlong)pfVar17) -
               auVar47._0_4_;
      if (*(char *)(param_1 + 0x7140) == '\0') {
        *pfVar17 = fVar40;
        pfVar17[1] = fVar48;
      }
      else {
        if ((*(char *)(param_1 + 0x6e04) == '\0') || (*(int *)(param_1 + 0x6df8) != iVar20)) {
          uVar21 = auVar54._0_4_;
        }
        else {
          uVar21 = auVar53._0_4_;
        }
        puStackY_2bc0 = (undefined *)0x1804665ff;
        fVar42 = (float)FUN_180627ae0((float)(uVar21 ^ uVar24) * fVar43);
        *pfVar17 = (fVar40 - *pfVar17) * (fVar37 - fVar42) + *pfVar17;
        pfVar17[1] = (fVar48 - pfVar17[1]) * (fVar37 - fVar42) + pfVar17[1];
      }
      if ((((*(byte *)((longlong)piVar19 + 1) & 0xfd) == 0) && (*pcVar31 == '\x03')) ||
         (((*(byte *)((longlong)piVar19 + 1) - 1 & 0xfd) == 0 && (*pcVar31 != '\x03')))) {
        pfVar17[1] = fVar48;
      }
      else {
        *pfVar17 = fVar40;
      }
    }
    lVar13 = local_2b20;
    iVar20 = iVar20 + 1;
    piVar19 = piVar19 + 0x27;
    pcVar31 = pcVar31 + 0x20;
    pfVar17 = pfVar17 + 2;
  } while ((longlong)pcVar31 < 0x18077f26c);
  auVar53 = ZEXT464(0);
  if (local_1880 != plStack_1878) {
    plVar25 = local_1880 + 1;
    do {
      fVar43 = *(float *)(plVar25 + 2);
      piVar19 = (int *)*plVar25;
      for (piVar29 = (int *)plVar25[-1]; piVar29 != piVar19; piVar29 = piVar29 + 1) {
        bVar3 = *(byte *)(plVar25 + 3);
        puVar18 = (undefined8 *)((longlong)local_1708 + 4);
        if (bVar3 != 0) {
          puVar18 = (undefined8 *)local_1708;
        }
        fVar37 = *(float *)(puVar18 + *piVar29);
        lVar14 = 0x6e14;
        if (bVar3 == 0) {
          lVar14 = 0x6e18;
        }
        lVar14 = lVar14 + (longlong)*piVar29 * 8;
        auVar39 = vpcmpeqd_avx(ZEXT116(bVar3),SUB6416(ZEXT464(0),0));
        auVar39 = vblendvps_avx(auVar46._0_16_,auVar47._0_16_,auVar39);
        fVar40 = auVar39._0_4_;
        auVar39 = vmaxss_avx(ZEXT416((uint)(fVar40 + *(float *)(lVar14 + param_1))),
                             ZEXT416((uint)(fVar36 * fVar37 + fVar43)));
        fVar43 = auVar39._0_4_ - fVar40;
        *(float *)(lVar14 + param_1) = fVar43;
        fVar43 = fVar43 + fVar40 + fVar36 * fVar37 + local_18b8[0];
        auVar47 = ZEXT464((uint)local_18dc);
        auVar46 = ZEXT464((uint)local_18e0);
      }
      fVar43 = *(float *)((longlong)plVar25 + 0x14);
      lVar14 = *plVar25;
      lVar33 = plVar25[-1];
      if (lVar14 != lVar33) {
        do {
          lVar22 = (longlong)*(int *)(lVar14 + -4);
          pfVar17 = (float *)(param_1 + 0x6e14 + lVar22 * 8);
          auVar39 = vpcmpeqd_avx(SUB6416(ZEXT464(0),0),SUB6416(ZEXT464(0),0));
          if ((char)plVar25[3] == '\0') {
            pfVar17 = pfVar17 + 1;
            fVar37 = *(float *)((longlong)local_1708 + lVar22 * 8 + 4);
            auVar39 = vblendvps_avx(auVar46._0_16_,auVar47._0_16_,auVar39);
            fVar40 = auVar39._0_4_;
          }
          else {
            fVar37 = *(float *)((longlong)local_1708 + lVar22 * 8);
            auVar39 = vblendvps_avx(auVar47._0_16_,auVar46._0_16_,auVar39);
            fVar40 = auVar39._0_4_;
          }
          auVar39 = vminss_avx(ZEXT416((uint)(fVar40 + *pfVar17)),
                               ZEXT416((uint)(fVar43 - fVar36 * fVar37)));
          fVar43 = auVar39._0_4_ - fVar40;
          *pfVar17 = fVar43;
          fVar43 = ((fVar43 + fVar40) - fVar36 * fVar37) - local_18b8[0];
          lVar14 = lVar14 + -4;
          auVar47 = ZEXT464((uint)local_18dc);
          auVar46 = ZEXT464((uint)local_18e0);
        } while (lVar14 != lVar33);
      }
      plVar2 = plVar25 + 4;
      plVar25 = plVar25 + 5;
    } while (plVar2 != plStack_1878);
  }
  pcVar31 = (char *)((longlong)local_2b28 + 0x1d);
  pfVar17 = (float *)(param_1 + 0x6efc);
  lVar33 = 0;
  auVar56 = ZEXT464(0x3f48c8c9);
  fVar43 = 0.7058824;
  auVar54 = ZEXT464((uint)DAT_180b0a41c);
  auVar50 = ZEXT464(0x3f800000);
  fVar37 = 0.5;
  ppuVar28 = &PTR_s_Bounding_Box_18077eec0;
  lVar14 = param_1;
  do {
    cVar6 = *(char *)(lVar33 + 0xc + (longlong)ppuVar28);
    if ((cVar6 == '\0') || (cVar6 == '\x01')) {
      fVar36 = local_2b14;
      if (pcVar31[-0x1d] == '\0') {
        fVar36 = -local_2b14;
      }
      fVar36 = fVar36 * 7.0 + *pfVar17;
      if (auVar53._0_4_ <= fVar36) {
        auVar39 = vminss_avx(auVar50._0_16_,ZEXT416((uint)fVar36));
        fVar36 = auVar39._0_4_;
        *pfVar17 = fVar36;
        if (auVar53._0_4_ < fVar36) {
          fVar36 = (2.0 - fVar36) * fVar36;
          puStackY_2bc0 = (undefined *)0x180466912;
          uVar24 = FUN_1804b1120(pcVar31 + -0x11);
          fVar48 = ((float)(uVar24 >> 0x18) / 255.0) * fVar36;
          fVar40 = auVar53._0_4_;
          fVar42 = fVar40;
          if (fVar40 <= fVar48) {
            auVar39 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar48));
            fVar42 = auVar39._0_4_;
          }
          uVar24 = (int)(longlong)(fVar42 * 255.0 + fVar37) << 0x18 | uVar24 & 0xffffff;
          local_2948 = auVar54._0_4_ * 6.0 * (1.0 - fVar36);
          local_2940 = auVar46._0_4_ - local_2948;
          local_293c = auVar47._0_4_ - local_2948;
          local_2944 = local_2948 + local_18bc;
          local_2948 = local_2948 + local_18c0;
          cVar6 = *(char *)(lVar33 + 0xc + (longlong)ppuVar28);
          if (cVar6 == '\0') {
            if (*pcVar31 == '\0') {
              auVar50 = ZEXT464(0x3f800000);
            }
            else {
              fVar36 = fVar36 * auVar56._0_4_;
              auVar50 = ZEXT464(0x3f800000);
              if (fVar40 <= fVar36) {
                auVar39 = vminss_avx(auVar50._0_16_,ZEXT416((uint)fVar36));
                fVar40 = auVar39._0_4_;
              }
              local_2b38 = (float *)CONCAT44(local_2944 + 1.0,local_2948 + 1.0);
              local_2b08 = local_2940 - 1.0;
              local_2b04 = local_293c - 1.0;
              puStackY_2bc0 = (undefined *)0x180466a6d;
              FUN_1804de7c0(lVar13,&local_2b08,&local_2b38,
                            (int)(longlong)(fVar40 * 255.0 + fVar37) << 0x18);
            }
            puStackY_2bc0 = (undefined *)0x180466aa3;
            FUN_1804de7c0(lVar13,&local_2940,&local_2948,uVar24);
          }
          else {
            if (cVar6 != '\x01') {
              auVar50 = ZEXT464(0x3f800000);
              goto LAB_180466bbc;
            }
            if (*pcVar31 != '\0') {
              if (fVar40 <= fVar36 * fVar43) {
                auVar39 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)(fVar36 * fVar43))
                                    );
                fVar40 = auVar39._0_4_;
              }
              if (*(char *)(lVar14 + 0x716d) == '\0') {
                pfVar12 = &local_2948;
                pfVar23 = &local_2940;
              }
              else {
                pfVar12 = (float *)(lVar14 + 0x7164);
                pfVar23 = (float *)(lVar14 + 0x715c);
              }
              puStackY_2bc0 = (undefined *)0x180466b4b;
              FUN_180465230(lVar13,pfVar23,pfVar12,(int)(longlong)(fVar40 * 255.0 + fVar37) << 0x18)
              ;
              lVar14 = param_1;
            }
            if (*(char *)(lVar14 + 0x716d) == '\0') {
              pfVar12 = &local_2948;
              pfVar23 = &local_2940;
            }
            else {
              pfVar12 = (float *)(lVar14 + 0x7164);
              pfVar23 = (float *)(lVar14 + 0x715c);
            }
            puStackY_2bc0 = (undefined *)0x180466b97;
            FUN_180465230(lVar13,pfVar23,pfVar12,uVar24);
            auVar50 = ZEXT464(0x3f800000);
          }
          auVar54 = ZEXT464((uint)DAT_180b0a41c);
          auVar46 = ZEXT464((uint)local_18e0);
          auVar47 = ZEXT464((uint)local_18dc);
          ppuVar28 = &PTR_s_Bounding_Box_18077eec0;
          lVar14 = param_1;
        }
      }
      else {
        *pfVar17 = 0.0;
      }
    }
LAB_180466bbc:
    lVar33 = lVar33 + 0x20;
    pfVar17 = pfVar17 + 1;
    pcVar31 = pcVar31 + 0x9c;
  } while (lVar33 < 0x3a0);
  lVar33 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
  fVar43 = 5.0;
  uVar24 = 0x7fffffff;
  if ((lVar33 != 0) && (lVar33 == *(longlong *)(DAT_180bb8ae8 + 0x14d0))) {
    cVar30 = '\0';
    puStackY_2bc0 = (undefined *)0x180466c16;
    lVar22 = DAT_180bb8ae8;
    cVar6 = FUN_1804b7ab0(lVar33);
    if ((cVar6 != '\0') &&
       ((((*(int *)(lVar22 + 0x1550) == 0 || (*(char *)(lVar22 + 0x155f) != cVar30)) ||
         (*(int *)(lVar22 + 0x1550) == *(int *)(lVar33 + 0x8c))) &&
        (*(char *)(DAT_180bb8ae8 + 0xb5f) != cVar30)))) {
      puStackY_2bc0 = (undefined *)0x180466c5c;
      lVar33 = FUN_1804af210(DAT_180bb8ae8,0x291);
      if (*(char *)(lVar33 + 8) == '\0') {
        fVar37 = *(float *)(local_2ae0 + 0x110);
        fVar36 = *(float *)(local_2ae0 + 0x114);
        fVar43 = auVar54._0_4_ * fVar43;
        if (((((char)*local_2b28 != '\0') && (auVar46._0_4_ - fVar43 <= fVar37)) &&
            ((fVar37 <= fVar43 + local_18c0 &&
             ((auVar47._0_4_ - fVar43 <= fVar36 && (fVar36 <= fVar43 + local_18bc)))))) &&
           (((float)((uint)(fVar37 - auVar46._0_4_) & uVar24) < fVar43 ||
            ((((float)((uint)(fVar37 - local_18c0) & uVar24) < fVar43 ||
              ((float)((uint)(fVar36 - auVar47._0_4_) & uVar24) < fVar43)) ||
             ((float)((uint)(fVar36 - local_18bc) & uVar24) < fVar43)))))) {
          *(undefined4 *)(lVar14 + 0x6e0c) = 0;
          *(undefined1 *)(lVar14 + 0x6e10) = 1;
        }
        if (((char)local_2b28[0xc3] != '\0') && (DAT_180cd6ef8 != 0)) {
          uVar24 = 0;
          do {
            local_18e8 = auVar53._0_4_;
            local_2918 = &local_18e8;
            local_2920 = &local_18c4;
            local_2928 = &local_18c8;
            local_2930 = &local_18d8;
            local_18d8 = local_18e8;
            local_18c8 = local_18e8;
            local_18c4 = local_18e8;
            local_18b0[0] = uVar24;
            if (DAT_180cd6ef8 == 0) {
                    /* WARNING: Subroutine does not return */
              puStackY_2bc0 = &UNK_1804693ca;
              FUN_1805fa874();
            }
            puStackY_2bc0 = (undefined *)0x180466df3;
            cVar6 = (**(code **)(*(longlong *)DAT_180cd6ef8 + 0x10))
                              (DAT_180cd6ef8,local_18b0,&local_2930,&local_2928);
            if (cVar6 != '\0') {
              if (*(char *)(param_1 + 0x716d) == '\0') {
                pfVar17 = &local_18c0;
                fVar40 = local_18e0;
                fVar48 = local_18dc;
              }
              else {
                pfVar17 = (float *)(param_1 + 0x7164);
                fVar40 = *(float *)(param_1 + 0x715c);
                fVar48 = *(float *)(param_1 + 0x7160);
              }
              fVar44 = (*pfVar17 - fVar40) * local_18d8 + fVar40;
              fVar41 = (pfVar17[1] - fVar48) * local_18c8 + fVar48;
              fVar40 = (*pfVar17 - fVar40) * local_18c4 + fVar40;
              fVar48 = (pfVar17[1] - fVar48) * local_18e8 + fVar48;
              fVar49 = fVar40 - fVar44;
              fVar52 = fVar48 - fVar41;
              fVar42 = (fVar36 - fVar41) * fVar52 + (fVar37 - fVar44) * fVar49;
              if (auVar53._0_4_ <= fVar42) {
                fVar55 = fVar52 * fVar52 + fVar49 * fVar49;
                if (fVar42 <= fVar55) {
                  fVar41 = (fVar42 * fVar52) / fVar55 + fVar41;
                  fVar44 = (fVar42 * fVar49) / fVar55 + fVar44;
                }
                else {
                  fVar44 = fVar40;
                  fVar41 = fVar48;
                }
              }
              if ((fVar44 - fVar37) * (fVar44 - fVar37) + (fVar41 - fVar36) * (fVar41 - fVar36) <
                  fVar43 * fVar43) {
                *(undefined4 *)(param_1 + 0x6e0c) = 5;
                *(undefined1 *)(param_1 + 0x6e10) = 1;
                lVar14 = param_1;
                break;
              }
            }
            uVar24 = uVar24 + 1;
            lVar14 = param_1;
          } while ((int)uVar24 < 0x14);
        }
      }
    }
  }
  local_2b38 = (float *)CONCAT44(auVar53._0_4_,auVar53._0_4_);
  puStackY_2bc0 = (undefined *)0x180466f53;
  piVar19 = local_2b28;
  FUN_18046d460(lVar14 + 0x6f70,&local_2b38);
  local_2b38 = (float *)CONCAT44(auVar53._0_4_,auVar53._0_4_);
  puStackY_2bc0 = (undefined *)0x180466f79;
  FUN_18046d460(lVar14 + 0x7058,&local_2b38);
  local_18b0[0] = 0xffffffff;
  local_2b40 = 0;
  local_2b38 = (float *)0x0;
  local_2abc = 0x4119999a;
  local_18c4 = 11.0;
  local_18c8 = 0.9;
  local_2ad8 = 0x3f0ccccd;
  do {
    lVar22 = (longlong)local_2b38;
    lVar32 = (longlong)local_2b38 * 0x20;
    lVar33 = (longlong)local_2b38 * 4;
    if (((&DAT_18077eecc)[lVar32] != '\0') && ((&DAT_18077eecc)[lVar32] != '\x01')) {
      local_2b00 = piVar19 + (longlong)local_2b38 * 0x27;
      if ((*(char *)(lVar14 + 0x6e04) == '\0') || (*(uint *)(lVar14 + 0x6df8) != local_2b40)) {
        bVar35 = false;
      }
      else {
        bVar35 = true;
      }
      if (((char)*local_2b00 != '\0') || (bVar35)) {
        fVar43 = local_2b14;
      }
      else {
        fVar43 = -local_2b14;
      }
      fVar43 = fVar43 * 7.0 + *(float *)(lVar14 + 0x6efc + (longlong)local_2b38 * 4);
      auVar46 = ZEXT464(0x3f800000);
      fVar37 = auVar53._0_4_;
      if (fVar37 <= fVar43) {
        auVar39 = vminss_avx(auVar46._0_16_,ZEXT416((uint)fVar43));
        fVar37 = auVar39._0_4_;
      }
      *(float *)(lVar14 + 0x6efc + (longlong)local_2b38 * 4) = fVar37;
      fVar37 = local_18dc + *(float *)(lVar14 + 0x6e18 + (longlong)local_2b38 * 8);
      fVar36 = local_18e0 + *(float *)(lVar14 + 0x6e14 + (longlong)local_2b38 * 8);
      local_18e8 = *(float *)((longlong)local_1708 + local_2b38 * 8);
      auVar54 = ZEXT464((uint)local_18e8);
      fVar43 = *(float *)((longlong)local_1708 + (longlong)local_2b38 * 8 + 4);
      auVar58 = ZEXT464((uint)fVar43);
      auVar50 = ZEXT464(0x3f000000);
      auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar37 - fVar43 * 0.5) + 0.5)),1);
      auVar47 = ZEXT1664(auVar39);
      fVar48 = auVar39._0_4_;
      auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar36 - local_18e8 * 0.5) + 0.5)),1);
      auVar56 = ZEXT1664(auVar39);
      local_2b30 = auVar39._0_4_;
      fVar40 = local_2b30 + local_18e8;
      fVar43 = fVar48 + fVar43;
      if ((char)*local_2b00 != '\0') {
        *(float *)(lVar14 + 0x6f70 + (longlong)local_2b38 * 8) = local_2b30;
        *(float *)(lVar14 + 0x6f74 + (longlong)local_2b38 * 8) = fVar48;
        *(float *)(lVar14 + 0x7058 + (longlong)local_2b38 * 8) = fVar40;
        *(float *)(lVar14 + 0x705c + (longlong)local_2b38 * 8) = fVar43;
      }
      lVar14 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      puStackY_2bc0 = (undefined *)0x180467175;
      fVar42 = fVar40;
      uVar10 = FUN_1804c2670(lVar14,local_2b40);
      piVar19 = (int *)(lVar14 + 0x108);
      iVar20 = *(int *)(lVar14 + 0x10c);
      if (*piVar19 == iVar20) {
        iVar26 = *piVar19 + 1;
        if (iVar20 == 0) {
          iVar20 = 8;
        }
        else {
          iVar20 = iVar20 / 2 + iVar20;
        }
        if (iVar26 < iVar20) {
          iVar26 = iVar20;
        }
        puStackY_2bc0 = (undefined *)0x1804671b5;
        FUN_1804d14d0(piVar19,iVar26);
      }
      fVar41 = auVar47._0_4_;
      *(undefined4 *)(*(longlong *)(lVar14 + 0x110) + (longlong)*piVar19 * 4) = uVar10;
      *piVar19 = *piVar19 + 1;
      plVar25 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      uVar21 = ~*(uint *)(plVar25[0x22] + -4 + (longlong)(int)plVar25[0x21] * 4);
      pcVar31 = "#el";
      cVar6 = '#';
      uVar24 = uVar21;
      do {
        if (((cVar6 == '#') && (*pcVar31 == '#')) && (pcVar31[1] == '#')) {
          pcVar31 = pcVar31 + 2;
          uVar24 = uVar21;
        }
        else {
          uVar24 = crc32(uVar24,cVar6);
        }
        cVar6 = *pcVar31;
        pcVar31 = pcVar31 + 1;
      } while (cVar6 != '\0');
      uVar24 = ~uVar24;
      if (*(uint *)(*plVar25 + 0x1534) == uVar24) {
        puStackY_2bc0 = (undefined *)0x180467235;
        FUN_1804cf810(uVar24,0xb,&DAT_18082a8e8);
        fVar41 = auVar47._0_4_;
      }
      if ((&DAT_18077eecc)[lVar32] == '\x03') {
        local_2a14 = DAT_180b0a41c * 3.0;
      }
      else {
        local_2a14 = DAT_180b0a41c;
      }
      local_2a20 = local_2a14 + fVar42;
      local_2a1c = local_2a14 + fVar43;
      local_2a18 = auVar56._0_4_ - local_2a14;
      local_2a14 = fVar41 - local_2a14;
      puStackY_2bc0 = (undefined *)0x1804672c3;
      puVar15 = (undefined2 *)FUN_1804aad60(local_29b8,uVar24,&local_2a18,&local_2a20);
      lVar14 = DAT_180bb8ae8;
      local_2b0c = *puVar15;
      cVar6 = (char)*puVar15;
      if ((cVar6 != '\0') && (local_18b0[0] = local_2b40, *(char *)(DAT_180bb8ae8 + 0xb5f) != '\0'))
      {
        puStackY_2bc0 = (undefined *)0x1804672fd;
        uVar21 = local_2b40;
        lVar16 = FUN_1804af210(DAT_180bb8ae8,0x291);
        if (*(char *)(lVar16 + 8) == '\0') {
          *(uint *)(param_1 + 0x6e0c) = uVar21;
          *(undefined1 *)(param_1 + 0x6e10) = 1;
        }
      }
      cVar30 = local_2b0c._1_1_;
      if ((local_2b0c._1_1_ != '\0') && (*(int *)(param_1 + 0x6df8) < 0)) {
        puStackY_2bc0 = (undefined *)0x180467340;
        cVar7 = FUN_1804c3510(0,0,0);
        if (cVar7 != '\0') {
          *(uint *)(param_1 + 0x6df8) = local_2b40;
          fVar42 = *(float *)(local_2ae0 + 0xaf4);
          *(float *)(param_1 + 0x6dfc) = *(float *)(local_2ae0 + 0xaf0) - fVar36;
          *(float *)(param_1 + 0x6e00) = fVar42 - fVar37;
        }
      }
      if ((((*(uint *)(param_1 + 0x6df8) == local_2b40) && (cVar30 != '\0')) &&
          (*(char *)(param_1 + 0x6e04) == '\0')) && (*(char *)(lVar14 + 0x118) != '\0')) {
        fVar37 = DAT_180b0a41c * 5.0;
        if (fVar37 < auVar53._0_4_) {
          fVar37 = *(float *)(lVar14 + 0xa0);
        }
        if (fVar37 * fVar37 <= *(float *)(lVar14 + 0xbc4)) {
          *(undefined1 *)(param_1 + 0x6e04) = 1;
        }
      }
      if (local_2b40 == 1) {
        if (cVar6 != '\0') {
          if ((*(char *)(param_1 + 0x6e04) == '\0') &&
             (*(float *)(local_2ae0 + 0x120) != auVar53._0_4_)) {
            local_18d8 = 2.0;
            local_2b10 = 0.75;
            local_2b18 = *(float *)(local_2ae0 + 0x120) * 0.05 + (float)local_2b00[8];
            pfVar17 = &local_2b10;
            if (0.75 <= local_2b18) {
              pfVar17 = &local_2b18;
            }
            pfVar12 = &local_18d8;
            if (local_2b18 <= 2.0) {
              pfVar12 = pfVar17;
            }
            local_2b00[8] = (int)*pfVar12;
          }
          goto LAB_180467493;
        }
LAB_180467498:
        if (bVar35) goto LAB_1804674f6;
        auVar47 = ZEXT464(0x41900000);
        puStackY_2bc0 = (undefined *)0x1804674b6;
        fVar37 = (float)FUN_1804aaa10(uVar24 + 1,auVar53._0_8_,auVar47._0_8_);
        uVar45 = auVar47._0_8_;
LAB_1804674ba:
        uVar62 = auVar53._0_8_;
      }
      else {
LAB_180467493:
        if (cVar6 == '\0') goto LAB_180467498;
LAB_1804674f6:
        auVar47 = ZEXT464(0x41900000);
        puStackY_2bc0 = (undefined *)0x18046750f;
        fVar37 = (float)FUN_1804aaa10(uVar24 + 1,auVar46._0_8_,auVar47._0_8_);
        uVar45 = auVar47._0_8_;
        if ((!bVar35) || (local_18d4 != 4)) goto LAB_1804674ba;
        uVar62 = auVar46._0_8_;
      }
      puStackY_2bc0 = (undefined *)0x1804674cb;
      auVar47._0_8_ = FUN_1804aaa10(uVar24 + 2,uVar62,uVar45);
      auVar47._8_56_ = extraout_var;
      auVar47 = ZEXT1664(auVar47._0_16_);
      iVar20 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar20 < 2) {
        puStackY_2bc0 = (undefined *)0x1804674f4;
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar20 + -1;
      }
      lVar14 = (longlong)local_2b38;
      local_18d8 = *(float *)(param_1 + 0x6efc + (longlong)local_2b38 * 4);
      local_18d8 = (2.0 - local_18d8) * local_18d8;
      local_2b10 = local_18d8 * 0.25 + 0.75;
      local_2ac4 = *(int *)(lVar13 + 0x20);
      fVar36 = auVar53._0_4_;
      if ((fVar36 < fVar37) && ((&DAT_18077eecc)[lVar32] != '\x03')) {
        fVar42 = fVar36;
        if (fVar36 <= auVar47._0_4_) {
          auVar39 = vminss_avx(auVar46._0_16_,auVar47._0_16_);
          fVar42 = auVar39._0_4_;
        }
        uVar21 = 0;
        uVar24 = 0;
        do {
          fVar41 = (float)(0x1affffffU >> (uVar24 & 0x1f) & 0xff);
          uVar21 = uVar21 | (int)(longlong)
                                 (((float)(0x3c4c4ce8U >> (uVar24 & 0x1f) & 0xff) - fVar41) * fVar42
                                  + fVar41 + auVar50._0_4_) << (uVar24 & 0x1f);
          uVar24 = uVar24 + 8;
        } while ((int)uVar24 < 0x20);
        fVar37 = ((float)(uVar21 >> 0x18) / 255.0) * fVar37;
        if (fVar36 <= fVar37) {
          auVar39 = vminss_avx(auVar46._0_16_,ZEXT416((uint)fVar37));
          fVar36 = auVar39._0_4_;
        }
        local_2a10 = DAT_180b0a41c * 3.0 + fVar40;
        local_2a0c = DAT_180b0a41c * 2.0 + fVar43;
        local_2a08 = auVar56._0_4_ - DAT_180b0a41c * 3.0;
        local_2a04 = fVar48 - DAT_180b0a41c * 2.0;
        puStackY_2bc0 = (undefined *)0x1804676ee;
        FUN_1804df870(lVar13,&local_2a08,&local_2a10,
                      (int)(longlong)(fVar36 * 255.0 + auVar50._0_4_) << 0x18 | uVar21 & 0xffffff);
      }
      lVar13 = local_2b20;
      if (bVar35) {
        auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
        vmaxss_avx(auVar46._0_16_,auVar39);
        fVar37 = auVar53._0_4_;
        if (fVar37 <= auVar47._0_4_) {
          auVar39 = vminss_avx(auVar46._0_16_,auVar47._0_16_);
          fVar37 = auVar39._0_4_;
        }
        uVar21 = 0;
        uVar24 = 0;
        do {
          fVar36 = (float)(DAT_180b0a40c >> (uVar24 & 0x1f) & 0xff);
          uVar21 = uVar21 | (int)(longlong)
                                 (((float)(DAT_180b0a430 >> (uVar24 & 0x1f) & 0xff) - fVar36) *
                                  fVar37 + fVar36 + auVar50._0_4_) << (uVar24 & 0x1f);
          uVar24 = uVar24 + 8;
        } while ((int)uVar24 < 0x20);
        local_2a00 = DAT_180b0a41c * 3.0 + fVar40;
        local_29fc = DAT_180b0a41c * 2.0 + fVar43;
        local_29f8 = auVar56._0_4_ - DAT_180b0a41c * 3.0;
        local_29f4 = fVar48 - DAT_180b0a41c * 2.0;
        puStackY_2bc0 = (undefined *)0x18046781e;
        FUN_180463090(local_2b20,&local_29f8,&local_2a00,uVar21);
      }
      piVar19 = local_2b00;
      puStackY_2bc0 = (undefined *)0x180467839;
      uVar24 = FUN_1804b1120(local_2b00 + 3);
      fVar37 = auVar53._0_4_;
      if (fVar37 <= auVar47._0_4_) {
        auVar39 = vminss_avx(auVar46._0_16_,auVar47._0_16_);
        fVar37 = auVar39._0_4_;
      }
      fVar36 = 0.0;
      uVar21 = 0;
      do {
        fVar42 = (float)(uVar24 >> (uVar21 & 0x1f) & 0xff);
        fVar36 = (float)((uint)fVar36 |
                        (int)(longlong)
                             (((float)(DAT_180b0a430 >> (uVar21 & 0x1f) & 0xff) - fVar42) * fVar37 +
                              fVar42 + auVar50._0_4_) << (uVar21 & 0x1f));
        uVar21 = uVar21 + 8;
      } while ((int)uVar21 < 0x20);
      local_2ae8 = fVar36;
      auVar53 = ZEXT464((uint)fVar43);
      auVar47 = ZEXT464((uint)fVar48);
      fVar42 = fVar40;
      fVar41 = fVar43;
      fVar37 = fVar48;
      if (((char)piVar19[7] != '\0') && ((&DAT_18077eecc)[lVar32] != '\x03')) {
        local_29f0 = DAT_180b0a41c * 2.0 + fVar40;
        local_29e8 = auVar56._0_4_ - DAT_180b0a41c * 2.0;
        puStackY_2bc0 = (undefined *)0x18046793c;
        local_29ec = fVar43;
        local_29e4 = fVar48;
        FUN_1804df870(lVar13,&local_29e8,&local_29f0,0x8c000000);
        fVar41 = auVar53._0_4_;
        fVar37 = auVar47._0_4_;
      }
      piVar29 = local_2b00;
      lVar16 = local_2b20;
      local_2af0 = *(float *)((longlong)&local_1438 + lVar14 * 4);
      auVar47 = ZEXT464((uint)local_2af0);
      bVar3 = (&DAT_18077eecc)[lVar32];
      if (bVar3 == 3) {
        if (local_2b40 == 3) {
          auVar46 = ZEXT464(0x3f47ae14);
        }
        else if (local_2b40 == 0x1b) {
          auVar46 = ZEXT464(0x3f23d70a);
        }
        else {
          auVar39 = vpcmpeqd_avx(ZEXT416(local_2b40),SUB6416(ZEXT464(4),0));
          auVar39 = vblendvps_avx(ZEXT416((uint)local_18c8),ZEXT416(local_2ad8),auVar39);
          auVar46 = ZEXT1664(auVar39);
        }
        uVar45 = auVar46._0_8_;
        cVar6 = *(char *)((longlong)piVar19 + 1);
        if ((cVar6 == '\0') || (cVar6 == '\x02')) {
          auVar39 = vroundss_avx(ZEXT816(0),
                                 ZEXT416((uint)((local_2af0 + local_2af0) * DAT_180b0a41c +
                                               auVar50._0_4_)),1);
          bVar35 = true;
          if (cVar6 != '\0') goto LAB_18046899c;
          local_18e8 = auVar39._0_4_;
          local_2938 = fVar42 - local_18e8;
          bVar35 = true;
          fStack_2934 = fVar37;
          local_2940 = local_18e8;
        }
        else {
          bVar35 = false;
          auVar39 = vroundss_avx(ZEXT816(0),
                                 ZEXT416((uint)((local_2af0 + local_2af0) * DAT_180b0a41c +
                                               auVar50._0_4_)),1);
LAB_18046899c:
          local_2940 = auVar39._0_4_;
          if (cVar6 == '\x01') {
            fVar37 = fVar41 - local_2940;
          }
          local_2938 = local_2b30;
          fStack_2934 = fVar37;
          if (bVar35) {
            local_18e8 = local_2940;
          }
          else {
            auVar58 = ZEXT1664(auVar39);
            local_2940 = auVar54._0_4_;
          }
        }
        local_2940 = local_2940 + local_2938;
        local_293c = auVar58._0_4_ + fStack_2934;
        fVar42 = local_2938 - DAT_180b0a41c;
        fVar41 = fStack_2934 - DAT_180b0a41c;
        fVar37 = local_2940 + DAT_180b0a41c;
        fVar36 = local_293c + DAT_180b0a41c;
        if ((char)piVar19[7] != '\0') {
          puStackY_2bc0 = (undefined *)0x180468a9d;
          FUN_1804df870(local_2b20,&local_2938,&local_2940,0x50000000);
          uVar45 = auVar46._0_8_;
        }
        if (bVar35) {
          local_2948 = local_2940;
          fVar44 = local_293c - auVar58._0_4_ * (float)uVar45;
        }
        else {
          local_2948 = (float)uVar45 * local_18e8 + local_2938;
          fVar44 = local_293c;
        }
        puStackY_2bc0 = (undefined *)0x180468afb;
        fVar49 = local_2938;
        local_2944 = fVar44;
        puVar18 = (undefined8 *)FUN_18029b580(&local_2968,piVar19,uVar45);
        local_2968 = *puVar18;
        uStack_2960 = puVar18[1];
        uStack_2958 = puVar18[2];
        uStack_2950 = puVar18[3];
        auVar53 = ZEXT1664(auVar58._0_16_);
        auVar46 = ZEXT1664(auVar47._0_16_);
        puStackY_2bc0 = (undefined *)0x180468b18;
        uVar11 = FUN_1804b1120(&uStack_2958);
        puStackY_2bc0 = (undefined *)0x180468b28;
        uVar10 = FUN_1804b1120(&local_2968);
        auVar39 = local_178;
        if ((char)piVar19[0x10] == '\x02') {
          if (bVar35) {
            pfVar17 = &local_2940;
            pfVar12 = &local_2a30;
            uVar10 = uVar11;
            local_2a30 = fVar49;
            local_2a2c = fVar44;
          }
          else {
            pfVar17 = &local_2948;
            pfVar12 = &local_2938;
          }
          puStackY_2bc0 = (undefined *)0x180468c01;
          FUN_1804dfcc0(lVar16,pfVar12,pfVar17,uVar10);
          auVar47 = ZEXT464(0);
        }
        else {
          pfVar17 = &local_2940;
          pfVar12 = &local_2a38;
          if (bVar35) {
            local_2a38 = fVar49;
            local_2a34 = fVar44;
          }
          else {
            local_178._4_4_ = fStack_2934;
            local_178._0_4_ = local_2938;
            local_178._8_8_ = auVar39._8_8_;
            pfVar12 = (float *)local_178;
            pfVar17 = &local_2948;
          }
          auVar47 = ZEXT464(0);
          puStackY_2bc0 = (undefined *)0x180468ba2;
          FUN_1804df870(lVar16,pfVar12,pfVar17,uVar11);
        }
        fVar44 = local_2b58;
        if ((char)piVar19[9] == '\0') {
          fVar37 = 0.5;
          auVar54 = ZEXT464(0x7f7fffff);
        }
        else {
          auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
          auVar39 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar39);
          auVar54 = ZEXT1664(auVar39);
          puStackY_2bc0 = (undefined *)0x180468c40;
          fVar52 = DAT_180b0a41c;
          uVar24 = FUN_1804b1120(piVar19 + 10);
          fVar49 = ((float)(uVar24 >> 0x18) / 255.0) * local_18c8;
          if (auVar47._0_4_ <= fVar49) {
            auVar39 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar49));
            auVar47 = ZEXT1664(auVar39);
          }
          fVar49 = auVar54._0_4_ * 0.5;
          local_2a28 = fVar37 - fVar49;
          local_2a24 = fVar36 - fVar49;
          local_2930 = (float *)CONCAT44(fVar49 + fVar41,fVar49 + fVar42);
          auVar39 = vmaxss_avx(ZEXT416((uint)(fVar52 - fVar49)),ZEXT416(0));
          puStackY_2bc0 = (undefined *)0x180468cdd;
          FUN_1804dc420(lVar16,&local_2930,&local_2a28,auVar39._0_8_);
          fVar37 = 0.5;
          auVar54 = ZEXT464(0x7f7fffff);
          puStackY_2bc0 = (undefined *)0x180468d31;
          FUN_1804d9a00(lVar16,*(undefined8 *)(lVar16 + 0x58),*(undefined4 *)(lVar16 + 0x50),
                        (int)(longlong)(auVar47._0_4_ * 255.0 + 0.5) << 0x18 | uVar24 & 0xffffff);
          *(undefined4 *)(lVar16 + 0x50) = 0;
        }
        lVar13 = DAT_180c62ca8;
        if ((local_2b40 != 3) || ((char)piVar19[0x15] == '\0')) {
LAB_1804690e9:
          auVar46 = ZEXT464(0x3f800000);
          auVar53 = ZEXT464(0);
          goto LAB_1804690f5;
        }
        fVar36 = (float)piVar19[0x1f];
        puStackY_2bc0 = (undefined *)0x180468d80;
        local_2ad0[0] = fVar36;
        sVar8 = thunk_FUN_180624430(fVar36);
        if (sVar8 < 1) {
          local_2ac8 = 14.0;
          local_2ac0 = 7.0;
          pfVar17 = &local_2ac0;
          if (7.0 <= fVar36) {
            pfVar17 = local_2ad0;
          }
          pfVar12 = &local_2ac8;
          if (fVar36 <= 14.0) {
            pfVar12 = pfVar17;
          }
          fVar36 = *pfVar12;
        }
        else {
          fVar36 = 9.0;
        }
        fVar36 = auVar46._0_4_ * fVar36;
        auVar50 = ZEXT464((uint)fVar36);
        auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar36 * DAT_180b0a41c + fVar37)),1);
        auVar46 = ZEXT464(0x3f800000);
        auVar39 = vmaxss_avx(auVar46._0_16_,auVar39);
        puStackY_2bc0 = (undefined *)0x180468e3e;
        FUN_1804ea040(&local_188,lVar13,auVar39._0_8_,auVar54._0_8_);
        fVar37 = DAT_180b0a41c * 2.0;
        auVar47 = ZEXT464((uint)local_188);
        puStackY_2bc0 = (undefined *)0x180468e64;
        fVar36 = (float)FUN_180463350(lVar13,auVar50._0_8_);
        auVar54 = ZEXT464((uint)(fVar36 + fVar37));
        local_2af0 = (float)piVar19[0x20];
        puStackY_2bc0 = (undefined *)0x180468e82;
        sVar8 = thunk_FUN_180624430(local_2af0);
        if (sVar8 < 1) {
          local_2b18 = 6.0;
          local_2ae8 = fVar44;
        }
        vunpcklps_avx(auVar47._0_16_,auVar54._0_16_);
        auVar39 = vunpcklps_avx(ZEXT416((uint)local_18e8),auVar53._0_16_);
        puStackY_2bc0 = (undefined *)0x180468f2c;
        FUN_18029b7b0(&local_2928,CONCAT44(fStack_2934,local_2938),auVar39._0_8_,
                      *(char *)((longlong)piVar19 + 1));
        fVar37 = local_2928._4_4_;
        fVar36 = (float)local_2928;
        if ((char)piVar19[0x1a] != '\0') {
          local_148 = 0xbf800000;
          uStack_140 = 0x3f800000;
          uStack_138 = 0xbf80000000000000;
          uStack_130 = 0x3f80000000000000;
          pfVar17 = (float *)((longlong)&local_148 + 4);
          do {
            auVar50 = ZEXT1664(auVar50._0_16_);
            auVar46 = ZEXT1664(auVar46._0_16_);
            puStackY_2bc0 = (undefined *)0x180468f6c;
            FUN_1804b1120(piVar19 + 0x1b);
            local_2920 = (float *)CONCAT44(local_2920._4_4_,fVar36 + pfVar17[-1]);
            local_2920 = (float *)CONCAT44(fVar37 + *pfVar17,fVar36 + pfVar17[-1]);
            puStackY_2bc0 = (undefined *)0x180468fad;
            FUN_180463450(lVar16,lVar13,auVar50._0_8_,&local_2920);
            pfVar12 = pfVar17 + 1;
            pfVar17 = pfVar17 + 2;
          } while (pfVar12 != (float *)&local_128);
        }
        puStackY_2bc0 = (undefined *)0x180468fcb;
        uVar24 = FUN_1804b1120(piVar19 + 0x16);
        fVar42 = 0.5;
        auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar36 + 0.5)),1);
        local_2918 = (float *)CONCAT44(local_2918._4_4_,auVar39._0_4_);
        auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar37 + 0.5)),1);
        auVar47 = ZEXT1664(auVar39);
        puStackY_2bc0 = (undefined *)0x180469009;
        fVar37 = (float)FUN_1804632d0(lVar13,auVar50._0_8_);
        local_2918 = (float *)CONCAT44(auVar47._0_4_ - fVar37,(undefined4)local_2918);
        auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar50._0_4_ * DAT_180b0a41c + fVar42)),1)
        ;
        auVar39 = vmaxss_avx(auVar46._0_16_,auVar39);
        uVar38 = auVar39._0_8_;
        if ((uVar24 & 0xff000000) == 0) {
          auVar53 = ZEXT464(0);
        }
        else {
          if (lVar13 == 0) {
            lVar13 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0x20);
          }
          auVar53 = ZEXT464(0);
          if (auVar39._0_4_ == 0.0) {
            uVar38 = (ulonglong)*(uint *)(*(longlong *)(lVar16 + 0x38) + 0x28);
          }
          local_2b00 = *(int **)(lVar16 + 0x60);
          uStack_2af8 = *(undefined8 *)(lVar16 + 0x68);
          puStackY_2bc0 = (undefined *)0x1804690ad;
          FUN_1804ea5f0(lVar13,lVar16,uVar38,&local_2918);
        }
LAB_1804690fd:
        fVar37 = auVar46._0_4_;
      }
      else {
        if (bVar3 != 5) {
          lVar13 = DAT_180c62ca8;
          if (piVar19[0xf] != 0) {
            if (piVar19[0xf] == 2) {
              lVar13 = DAT_180c62cb8;
            }
            else if (bVar3 == 4) {
              lVar13 = DAT_180c62cb0;
            }
          }
          auVar39 = vpcmpeqd_avx(ZEXT116(bVar3),SUB6416(ZEXT464(4),0));
          auVar39 = vblendvps_avx(ZEXT416((uint)local_18c4),ZEXT416(local_2abc),auVar39);
          auVar47 = ZEXT464((uint)(auVar39._0_4_ * local_2af0));
          puStackY_2bc0 = (undefined *)0x1804679e9;
          FUN_180464a20(local_1868,&PTR_s_Bounding_Box_18077eec0 + lVar33,local_2b00);
          auVar53 = ZEXT464(0);
          auVar58 = ZEXT1664(ZEXT416(0));
          if ((char)piVar29[0x26] == '\0') {
LAB_180467a6a:
            bVar35 = false;
          }
          else {
            lVar14 = 0;
            do {
              lVar22 = lVar14 + 1;
              if ((&PTR_s_Bounding_Box_18077eec0)[lVar33][lVar14] != (&DAT_1807c6a98)[lVar14])
              goto LAB_180467a6a;
              lVar14 = lVar22;
            } while (lVar22 != 5);
            if (auVar54._0_4_ < DAT_180b0a41c * 18.0) goto LAB_180467a6a;
            bVar35 = true;
            auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 14.0 + auVar50._0_4_)),
                                   1);
            auVar58 = ZEXT464((uint)(auVar39._0_4_ + DAT_180b0a41c * 3.0));
          }
          iVar20 = 0;
          auVar39 = vmaxss_avx(ZEXT416(0),
                               ZEXT416((uint)(((fVar40 - auVar56._0_4_) - auVar58._0_4_) -
                                             DAT_180b0a41c * 2.0)));
          fVar37 = auVar39._0_4_ + auVar46._0_4_;
          auVar54 = ZEXT464(0x7f7fffff);
          fVar36 = local_18c8;
          do {
            auVar39 = vroundss_avx(ZEXT816(0),
                                   ZEXT416((uint)(auVar47._0_4_ * DAT_180b0a41c + auVar50._0_4_)),1)
            ;
            auVar39 = vmaxss_avx(auVar46._0_16_,auVar39);
            puStackY_2bc0 = (undefined *)0x180467b15;
            FUN_1804ea040(local_2988,lVar13,auVar39._0_8_,auVar54._0_8_);
            if (local_2988[0] <= fVar37) break;
            auVar47 = ZEXT464((uint)(auVar47._0_4_ * fVar36));
            iVar20 = iVar20 + 1;
          } while (iVar20 < 0x20);
          auVar59 = ZEXT464((uint)fVar48);
          auVar51 = ZEXT464((uint)fVar43);
          fVar37 = (fVar48 + fVar43) * auVar50._0_4_;
          puStackY_2bc0 = (undefined *)0x180467b5f;
          fVar36 = (float)FUN_180463350(lVar13,auVar47._0_8_);
          lVar16 = local_2b20;
          fVar48 = auVar50._0_4_;
          auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar37 - fVar36 * fVar48) + fVar48)),1);
          auVar54 = ZEXT1664(auVar39);
          auVar57 = ZEXT464((uint)local_2b30);
          auVar4 = vroundss_avx(ZEXT816(0),
                                ZEXT416((uint)(local_2b30 + DAT_180b0a41c + auVar58._0_4_ + fVar48))
                                ,1);
          auVar56 = ZEXT1664(auVar4);
          local_29d0 = auVar4._0_4_;
          local_29cc = auVar39._0_4_;
          auVar58 = ZEXT464((uint)local_18d8);
          if (*(char *)((longlong)piVar29 + 0x1d) != '\0') {
            local_29e0 = local_29d0 + auVar46._0_4_;
            local_29dc = local_29cc + auVar46._0_4_;
            puStackY_2bc0 = (undefined *)0x180467c25;
            FUN_180463450(local_2b20,lVar13,auVar47._0_8_,&local_29e0);
          }
          uVar45 = auVar47._0_8_;
          if ((char)piVar29[9] != '\0') {
            local_108 = 0xbf800000;
            uStack_100 = 0x3f800000;
            uStack_f8 = 0xbf80000000000000;
            uStack_f0 = 0x3f80000000000000;
            pfVar17 = (float *)&local_108;
            do {
              auVar54 = ZEXT1664(auVar54._0_16_);
              auVar47 = ZEXT1664(auVar47._0_16_);
              auVar56 = ZEXT1664(auVar56._0_16_);
              auVar51 = ZEXT1664(auVar51._0_16_);
              auVar58 = ZEXT1664(auVar58._0_16_);
              auVar46 = ZEXT1664(auVar46._0_16_);
              auVar50 = ZEXT1664(auVar50._0_16_);
              auVar57 = ZEXT1664(auVar57._0_16_);
              auVar59 = ZEXT1664(auVar59._0_16_);
              auVar53 = ZEXT1664(auVar53._0_16_);
              puStackY_2bc0 = (undefined *)0x180467c6e;
              FUN_1804b1120(piVar29 + 10);
              local_29d8 = auVar56._0_4_ + *pfVar17;
              local_29d4 = auVar54._0_4_ + pfVar17[1];
              puStackY_2bc0 = (undefined *)0x180467cae;
              FUN_180463450(lVar16,lVar13,auVar47._0_8_,&local_29d8);
              uVar45 = auVar47._0_8_;
              pfVar17 = pfVar17 + 2;
            } while (pfVar17 != (float *)local_e8);
          }
          puStackY_2bc0 = (undefined *)0x180467cff;
          FUN_180463450(lVar16,lVar13,uVar45,&local_29d0);
          if (bVar35) {
            fVar37 = auVar50._0_4_;
            auVar39 = vroundss_avx(ZEXT816(0),
                                   ZEXT416((uint)(auVar57._0_4_ + DAT_180b0a41c + fVar37)),1);
            local_2b08 = auVar39._0_4_;
            auVar39 = vroundss_avx(ZEXT816(0),
                                   ZEXT416((uint)(((auVar59._0_4_ + auVar51._0_4_) * fVar37 -
                                                  DAT_180b0a41c * 7.0) + fVar37)),1);
            local_2b04 = auVar39._0_4_;
            auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 14.0 + fVar37)),1);
            auVar47 = ZEXT1664(auVar39);
            puStackY_2bc0 = (undefined *)0x180467d8b;
            FUN_18047dd00(DAT_180b0a41c * 14.0,lVar16,&local_2b08,auVar39._0_8_);
            auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
            auVar39 = vmaxss_avx(auVar46._0_16_,auVar39);
            fVar37 = auVar58._0_4_ * 0.3529412;
            auVar4 = auVar53._0_16_;
            if (auVar53._0_4_ <= fVar37) {
              auVar4 = vminss_avx(auVar46._0_16_,ZEXT416((uint)fVar37));
            }
            auVar54 = ZEXT1664(auVar4);
            fVar37 = auVar39._0_4_ * auVar50._0_4_;
            fVar36 = auVar47._0_4_;
            local_29c8 = (fVar36 + local_2b08) - fVar37;
            local_29c4 = (fVar36 + local_2b04) - fVar37;
            local_29c0 = fVar37 + local_2b08;
            local_29bc = fVar37 + local_2b04;
            auVar39 = vmaxss_avx(ZEXT416((uint)(fVar36 * auVar50._0_4_ - fVar37)),auVar53._0_16_);
            puStackY_2bc0 = (undefined *)0x180467e42;
            FUN_1804dc420(lVar16,&local_29c0,&local_29c8,auVar39._0_8_);
            puStackY_2bc0 = (undefined *)0x180467e8d;
            FUN_1804d9a00(lVar16,*(undefined8 *)(lVar16 + 0x58),*(undefined4 *)(lVar16 + 0x50),
                          (int)(longlong)(auVar54._0_4_ * 255.0 + auVar50._0_4_) << 0x18 | 0xffffff)
            ;
            *(undefined4 *)(lVar16 + 0x50) = 0;
          }
          puStackY_2bc0 = (undefined *)0x180467e9f;
          FUN_18015c010(local_1868);
          fVar48 = auVar59._0_4_;
LAB_1804690f5:
          fVar42 = 0.5;
          goto LAB_1804690fd;
        }
        fVar37 = local_2b58;
        if ((local_2b40 == 0x16) && (*(char *)(param_1 + 0x6e11) != '\0')) {
          puStackY_2bc0 = (undefined *)0x180467ec7;
          fVar36 = (float)FUN_1804b1120(piVar19 + 0x22);
          local_18e8 = fVar36;
          fVar42 = *(float *)(lVar13 + 0x20);
          local_2b18 = fVar42;
LAB_180467f0c:
          local_2b18 = fVar42;
          local_18e8 = fVar36;
          if (*(char *)(param_1 + 0x6e11) != '\0') {
            pcVar31 = "hegrenade";
            goto LAB_180467ff6;
          }
          if (DAT_180cd6bf8 == 0) {
            pcVar31 = "ssg08";
          }
          else {
            puStackY_2bc0 = (undefined *)0x180467f57;
            pcVar31 = (char *)(**(code **)(*(longlong *)DAT_180cd6bf8 + 0x10))();
          }
LAB_180467fd0:
          fVar41 = auVar46._0_4_;
          if ((uint *)pcVar31 != (uint *)0x0) goto LAB_180467ff6;
LAB_18046807b:
          local_18d0 = 0.0;
          pfVar17 = (float *)0x0;
          local_18cc = local_18d0;
LAB_180468080:
          bVar35 = false;
        }
        else {
          local_18e8 = fVar36;
          fVar42 = *(float *)(lVar13 + 0x20);
          local_2b18 = fVar42;
          if (local_2b40 == 0x16) goto LAB_180467f0c;
          if (local_2b40 != 0x18) {
            if (local_2b40 == 0x19) {
              pcVar31 = "defuser";
              goto LAB_180467ff6;
            }
            pcVar31 = (char *)0x0;
            if (local_2b40 == 0x1a) {
              pcVar31 = "taser";
            }
            goto LAB_180467fd0;
          }
          pcVar31 = &DAT_1806bd330;
LAB_180467ff6:
          local_18d0 = 0.0;
          fVar41 = auVar46._0_4_;
          if (DAT_180cd6e38 == 0) goto LAB_18046807b;
          local_2908[0] = &local_18cc;
          local_2910 = &local_18d0;
          puStackY_2bc0 = (undefined *)0x18046804f;
          local_18cc = local_18d0;
          local_1838 = (uint *)pcVar31;
          pfVar17 = (float *)(**(code **)(*(longlong *)DAT_180cd6e38 + 0x10))
                                       (DAT_180cd6e38,&local_1838,&local_2910,local_2908);
          fVar41 = auVar46._0_4_;
          if (((pfVar17 == (float *)0x0) || (local_18d0 <= fVar37)) || (local_18cc <= fVar37))
          goto LAB_180468080;
          bVar35 = true;
        }
        auVar53 = ZEXT464((uint)fVar40);
        auVar46 = ZEXT464((uint)fVar48);
        fVar44 = fVar43;
        if ((*(char *)((longlong)local_2b00 + 0x1d) != '\0') && (!bVar35)) {
          local_2ab8 = (fVar40 + auVar56._0_4_) * auVar50._0_4_ + fVar41;
          local_2ab4 = (fVar48 + fVar43) * auVar50._0_4_ + fVar41;
          puStackY_2bc0 = (undefined *)0x1804680fd;
          FUN_180463dc0(lVar13,&local_2ab8,0xc8000000,(&DAT_18077eed8)[lVar22 * 4]);
        }
        fVar49 = auVar46._0_4_;
        fVar52 = auVar53._0_4_;
        fVar55 = auVar56._0_4_;
        fVar41 = auVar50._0_4_;
        if ((char)local_2b00[9] == '\0') {
          if (!bVar35) goto LAB_1804681bc;
LAB_180468219:
          fVar36 = fVar37;
          if (((local_2b40 == 0x16) && (*(char *)((longlong)local_2b00 + 0x85) != '\0')) &&
             (*(char *)(param_1 + 0x6e11) == '\0')) {
            fVar36 = auVar47._0_4_ * 10.0 * DAT_180b0a41c;
          }
          auVar39 = vminss_avx(ZEXT416((uint)(((fVar52 - fVar55) - fVar36) / local_18d0)),
                               ZEXT416((uint)((fVar43 - fVar49) / local_18cc)));
          fVar36 = ((fVar52 + fVar55) - fVar36) * fVar41;
          auVar53 = ZEXT464((uint)fVar36);
          fVar44 = (fVar49 + fVar43) * fVar41;
          auVar54 = ZEXT464((uint)fVar44);
          fVar41 = local_18d0 * auVar39._0_4_ * fVar41;
          auVar50 = ZEXT464((uint)fVar41);
          fVar49 = auVar39._0_4_ * local_18cc * 0.5;
          auVar56 = ZEXT464((uint)fVar49);
          if (*(char *)((longlong)local_2b00 + 0x1d) != '\0') {
            local_2aa8 = 0x3f800000;
            local_2aa4 = 0x3f800000;
            local_2a98 = fVar41 + fVar36 + 1.0;
            local_2a94 = fVar49 + fVar44 + 1.0;
            local_2a90 = (fVar36 - fVar41) + 1.0;
            local_2a8c = (fVar44 - fVar49) + 1.0;
            local_2aa0 = fVar37;
            local_2a9c = fVar37;
            if ((pfVar17 == *(float **)(lVar13 + 0x78)) && (*(longlong *)(lVar13 + 0x70) == 0)) {
              bVar35 = false;
            }
            else {
              bVar35 = true;
              local_2978 = 0;
              piVar19 = (int *)(lVar13 + 0xb0);
              iVar20 = *(int *)(lVar13 + 0xb4);
              pfStack_2970 = pfVar17;
              if (*piVar19 == iVar20) {
                iVar26 = *piVar19 + 1;
                if (iVar20 == 0) {
                  iVar20 = 8;
                }
                else {
                  iVar20 = iVar20 / 2 + iVar20;
                }
                if (iVar26 < iVar20) {
                  iVar26 = iVar20;
                }
                puStackY_2bc0 = (undefined *)0x180468387;
                FUN_1804aec70(piVar19,iVar26);
              }
              iVar20 = *piVar19;
              lVar14 = *(longlong *)(lVar13 + 0xb8);
              *(undefined8 *)(lVar14 + (longlong)iVar20 * 0x10) = 0;
              *(float **)(lVar14 + 8 + (longlong)iVar20 * 0x10) = pfVar17;
              *piVar19 = *piVar19 + 1;
              *(undefined8 *)(lVar13 + 0x70) = local_2978;
              *(float **)(lVar13 + 0x78) = pfStack_2970;
              puStackY_2bc0 = (undefined *)0x1804683b3;
              FUN_1804d92c0(lVar13);
            }
            puStackY_2bc0 = (undefined *)0x1804683c6;
            FUN_1804d9590(lVar13,6,4);
            puStackY_2bc0 = (undefined *)0x1804683fb;
            FUN_1804d97d0(lVar13,&local_2a90,&local_2a98,&local_2aa0);
            if (bVar35) {
              puStackY_2bc0 = (undefined *)0x180468408;
              FUN_1804d9530(lVar13);
            }
          }
          lVar13 = local_2b20;
          fVar49 = auVar56._0_4_;
          fVar41 = auVar54._0_4_;
          fVar44 = auVar50._0_4_;
          fVar36 = auVar53._0_4_;
          if ((char)local_2b00[9] != '\0') {
            local_168 = 0xbf800000;
            uStack_160 = 0x3f800000;
            uStack_158 = 0xbf80000000000000;
            uStack_150 = 0x3f80000000000000;
            pfVar12 = (float *)&local_168;
            piVar19 = local_2b00 + 10;
            fVar42 = fVar49 + fVar41;
            fVar52 = fVar44 + fVar36;
            auVar46 = ZEXT464((uint)(fVar41 - fVar49));
            fVar55 = fVar36 - fVar44;
            uVar10 = 0x3f800000;
            do {
              auVar46 = ZEXT1664(auVar46._0_16_);
              auVar53 = ZEXT1664(auVar53._0_16_);
              auVar54 = ZEXT1664(auVar54._0_16_);
              auVar50 = ZEXT1664(auVar50._0_16_);
              auVar56 = ZEXT1664(auVar56._0_16_);
              puStackY_2bc0 = (undefined *)0x18046846b;
              uVar24 = FUN_1804b1120(piVar19);
              local_2a88 = uVar10;
              local_2a84 = uVar10;
              local_2a80 = fVar37;
              local_2a7c = fVar37;
              local_2a78 = fVar52 + *pfVar12;
              local_2a74 = fVar42 + pfVar12[1];
              local_2a70 = fVar55 + *pfVar12;
              local_2a6c = auVar46._0_4_ + pfVar12[1];
              if ((uVar24 & 0xff000000) != 0) {
                if ((pfVar17 == *(float **)(lVar13 + 0x78)) && (*(longlong *)(lVar13 + 0x70) == 0))
                {
                  bVar35 = false;
                }
                else {
                  bVar35 = true;
                  local_29a8 = (uint **)0x0;
                  piVar29 = (int *)(lVar13 + 0xb0);
                  pfStack_29a0 = pfVar17;
                  if (*piVar29 == *(int *)(lVar13 + 0xb4)) {
                    puStackY_2bc0 = (undefined *)0x18046853b;
                    FUN_1804aec70(piVar29);
                  }
                  iVar20 = *piVar29;
                  lVar14 = *(longlong *)(lVar13 + 0xb8);
                  *(undefined8 *)(lVar14 + (longlong)iVar20 * 0x10) = 0;
                  *(float **)(lVar14 + 8 + (longlong)iVar20 * 0x10) = pfVar17;
                  *piVar29 = *piVar29 + 1;
                  *(uint ***)(lVar13 + 0x70) = local_29a8;
                  *(float **)(lVar13 + 0x78) = pfStack_29a0;
                  puStackY_2bc0 = (undefined *)0x180468569;
                  FUN_1804d92c0(lVar13);
                }
                puStackY_2bc0 = (undefined *)0x18046857c;
                FUN_1804d9590(lVar13,6,4);
                puStackY_2bc0 = (undefined *)0x1804685ae;
                FUN_1804d97d0(lVar13,&local_2a70,&local_2a78,&local_2a80);
                if (bVar35) {
                  puStackY_2bc0 = (undefined *)0x1804685bb;
                  FUN_1804d9530(lVar13);
                }
              }
              fVar49 = auVar56._0_4_;
              fVar41 = auVar54._0_4_;
              fVar44 = auVar50._0_4_;
              fVar36 = auVar53._0_4_;
              pfVar12 = pfVar12 + 2;
            } while (pfVar12 != (float *)&local_148);
            auVar47 = ZEXT464((uint)local_2af0);
            auVar46 = ZEXT464((uint)fVar48);
            fVar42 = local_2b18;
          }
          lVar16 = local_2b20;
          fVar52 = auVar46._0_4_;
          fVar55 = auVar47._0_4_;
          local_2a68 = 0x3f800000;
          local_2a64 = 0x3f800000;
          local_2a60 = fVar37;
          local_2a5c = fVar37;
          local_2a58 = fVar44 + fVar36;
          local_2a54 = fVar49 + fVar41;
          local_2a50 = fVar36 - fVar44;
          local_2a4c = fVar41 - fVar49;
          if (((uint)local_18e8 & 0xff000000) != 0) {
            if ((pfVar17 == *(float **)(local_2b20 + 0x78)) &&
               (*(longlong *)(local_2b20 + 0x70) == 0)) {
              bVar35 = false;
            }
            else {
              bVar35 = true;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = pfVar17;
              _local_18a8 = auVar39 << 0x40;
              piVar19 = (int *)(local_2b20 + 0xb0);
              iVar20 = *(int *)(local_2b20 + 0xb4);
              if (*piVar19 == iVar20) {
                iVar26 = *piVar19 + 1;
                if (iVar20 == 0) {
                  iVar20 = 8;
                }
                else {
                  iVar20 = iVar20 / 2 + iVar20;
                }
                if (iVar26 < iVar20) {
                  iVar26 = iVar20;
                }
                puStackY_2bc0 = (undefined *)0x1804686d4;
                FUN_1804aec70(piVar19,iVar26);
              }
              iVar20 = *piVar19;
              lVar13 = *(longlong *)(lVar16 + 0xb8);
              *(undefined8 *)(lVar13 + (longlong)iVar20 * 0x10) = 0;
              *(float **)(lVar13 + 8 + (longlong)iVar20 * 0x10) = pfVar17;
              *piVar19 = *piVar19 + 1;
              *(undefined1 (*) [8])(lVar16 + 0x70) = local_18a8;
              *(float **)(lVar16 + 0x78) = pfStack_18a0;
              puStackY_2bc0 = (undefined *)0x180468701;
              FUN_1804d92c0(lVar16);
            }
            puStackY_2bc0 = (undefined *)0x180468714;
            FUN_1804d9590(lVar16,6,4);
            puStackY_2bc0 = (undefined *)0x180468745;
            FUN_1804d97d0(lVar16,&local_2a50,&local_2a58,&local_2a60);
            fVar52 = auVar46._0_4_;
            fVar55 = auVar47._0_4_;
            if (bVar35) {
              puStackY_2bc0 = (undefined *)0x180468752;
              FUN_1804d9530(lVar16);
              fVar52 = auVar46._0_4_;
              fVar55 = auVar47._0_4_;
            }
          }
          auVar50 = ZEXT464(0x3f000000);
          fVar37 = fVar40;
          fVar36 = local_2b30;
        }
        else {
          if (bVar35) goto LAB_180468219;
          local_128 = 0xbf800000;
          uStack_120 = 0x3f800000;
          uStack_118 = 0xbf80000000000000;
          uStack_110 = 0x3f80000000000000;
          pfVar17 = (float *)&local_128;
          piVar19 = local_2b00 + 10;
          fVar37 = (fVar49 + fVar44) * fVar41;
          fVar41 = (fVar52 + fVar55) * fVar41;
          do {
            auVar46 = ZEXT1664(auVar46._0_16_);
            auVar53 = ZEXT1664(auVar53._0_16_);
            auVar50 = ZEXT1664(auVar50._0_16_);
            auVar56 = ZEXT1664(auVar56._0_16_);
            auVar47 = ZEXT1664(auVar47._0_16_);
            puStackY_2bc0 = (undefined *)0x18046816b;
            uVar10 = FUN_1804b1120(piVar19);
            local_2ab0 = fVar41 + *pfVar17;
            local_2aac = fVar37 + pfVar17[1];
            puStackY_2bc0 = (undefined *)0x1804681a4;
            FUN_180463dc0(lVar13,&local_2ab0,uVar10,(&DAT_18077eed8)[lVar22 * 4]);
            pfVar17 = pfVar17 + 2;
          } while (pfVar17 != (float *)&local_108);
          fVar36 = local_18e8;
LAB_1804681bc:
          lVar16 = local_2b20;
          local_2a48 = (auVar53._0_4_ + auVar56._0_4_) * auVar50._0_4_;
          local_2a44 = (auVar46._0_4_ + fVar43) * auVar50._0_4_;
          puStackY_2bc0 = (undefined *)0x180468210;
          FUN_180463dc0(local_2b20,&local_2a48,fVar36,(&DAT_18077eed8)[lVar22 * 4]);
          fVar52 = auVar46._0_4_;
          fVar55 = auVar47._0_4_;
          fVar37 = auVar53._0_4_;
          fVar36 = auVar56._0_4_;
        }
        fVar41 = auVar50._0_4_;
        if (((char)local_2b00[0x21] != '\0') &&
           (fVar36 = (fVar37 + fVar36) * fVar41, (int)fVar42 < *(int *)(lVar16 + 0x20))) {
          lVar13 = (longlong)(int)fVar42 * 0x14;
          do {
            *(float *)(lVar13 + *(longlong *)(lVar16 + 0x28)) =
                 fVar36 - (*(float *)(lVar13 + *(longlong *)(lVar16 + 0x28)) - fVar36);
            fVar42 = (float)((int)fVar42 + 1);
            lVar13 = lVar13 + 0x14;
          } while ((int)fVar42 < *(int *)(lVar16 + 0x20));
        }
        lVar13 = DAT_180c62ca8;
        if (((local_2b40 == 0x16) && (*(char *)((longlong)local_2b00 + 0x85) != '\0')) &&
           (*(char *)(param_1 + 0x6e11) == '\0')) {
          fVar36 = fVar55 * 8.0;
          auVar39 = vroundss_avx(ZEXT816(0),
                                 ZEXT416((uint)((fVar37 - fVar55 * 9.0 * DAT_180b0a41c) + fVar41)),1
                                );
          local_2a40 = auVar39._0_4_;
          auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar52 + fVar41)),1);
          auVar46 = ZEXT1664(auVar39);
          puStackY_2bc0 = (undefined *)0x180468852;
          fVar37 = (float)FUN_1804632d0(DAT_180c62ca8,fVar36);
          local_2a3c = auVar46._0_4_ - fVar37;
          auVar39 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar36 * DAT_180b0a41c + auVar50._0_4_)),
                                 1);
          auVar46 = ZEXT464(0x3f800000);
          auVar39 = vmaxss_avx(auVar46._0_16_,auVar39);
          uVar38 = auVar39._0_8_;
          if (((uint)local_2ae8 & 0xff000000) != 0) {
            if (lVar13 == 0) {
              lVar13 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0x20);
            }
            auVar53 = ZEXT464(0);
            if (auVar39._0_4_ == 0.0) {
              uVar38 = (ulonglong)*(uint *)(*(longlong *)(lVar16 + 0x38) + 0x28);
            }
            local_2b00 = *(int **)(lVar16 + 0x60);
            uStack_2af8 = *(undefined8 *)(lVar16 + 0x68);
            puStackY_2bc0 = (undefined *)0x18046890d;
            FUN_1804ea5f0(lVar13,lVar16,uVar38,&local_2a40);
            goto LAB_1804690f5;
          }
          goto LAB_1804690e9;
        }
        auVar53 = ZEXT464(0);
        fVar37 = 1.0;
        fVar42 = 0.5;
      }
      if ((local_2b10 < fVar37) || (lVar14 = param_1, local_18d8 < fVar37)) {
        fVar43 = (fVar48 + fVar43) * fVar42;
        fVar42 = (fVar40 + local_2b30) * fVar42;
        if (local_2ac4 < *(int *)(lVar16 + 0x20)) {
          lVar13 = (longlong)local_2ac4 * 0x14;
          iVar20 = local_2ac4;
          do {
            lVar14 = *(longlong *)(lVar16 + 0x28);
            *(float *)(lVar13 + lVar14) =
                 (*(float *)(lVar13 + lVar14) - fVar42) * local_2b10 + fVar42;
            *(float *)(lVar13 + 4 + lVar14) =
                 (*(float *)(lVar13 + 4 + lVar14) - fVar43) * local_2b10 + fVar43;
            iVar20 = iVar20 + 1;
            lVar13 = lVar13 + 0x14;
          } while (iVar20 < *(int *)(lVar16 + 0x20));
          auVar53 = ZEXT464(0);
        }
        puStackY_2bc0 = (undefined *)0x1804691bc;
        lVar14 = param_1;
        FUN_18047d320(lVar16,(longlong)local_2ac4,local_18d8,auVar53._0_8_);
      }
      lVar13 = local_2b20;
    }
    local_2b40 = local_2b40 + 1;
    local_2b38 = (float *)((longlong)local_2b38 + 1);
    piVar19 = local_2b28;
  } while ((int)local_2b40 < 0x1d);
  *(undefined1 *)(lVar14 + 0x7140) = 1;
  uVar24 = *(uint *)(lVar14 + 0x6df8);
  if (-1 < (int)uVar24) {
    if (*(char *)(DAT_180bb8ae8 + 0x118) != '\0') {
      puStackY_2bc0 = (undefined *)0x180469223;
      lVar13 = FUN_1804af210(DAT_180bb8ae8,0x290);
      if (*(char *)(lVar13 + 8) == '\0') goto LAB_18046928c;
    }
    if (*(char *)(lVar14 + 0x6e04) == '\0') {
      if (local_18b0[0] == uVar24) {
        *(uint *)(lVar14 + 0x6e0c) = uVar24;
        *(undefined1 *)(lVar14 + 0x6e10) = 1;
      }
    }
    else {
      puStackY_2bc0 = (undefined *)0x18046924e;
      FUN_18063aed0(local_2980,local_2b28);
      lVar14 = param_1;
    }
    *(undefined4 *)(lVar14 + 0x6df8) = 0xffffffff;
    *(undefined1 *)(lVar14 + 0x6e04) = 0;
    *(undefined4 *)(lVar14 + 0x6e08) = 0xffffffff;
  }
LAB_18046928c:
  iVar20 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar20 < 2) {
    puStackY_2bc0 = (undefined *)0x1804692b1;
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar20 + -1;
  }
  plVar2 = plStack_1878;
  plVar25 = local_1880;
  if (local_1880 != (longlong *)0x0) {
    for (; plVar25 != plVar2; plVar25 = plVar25 + 5) {
      puStackY_2bc0 = (undefined *)0x1804692dd;
      FUN_180159650(plVar25);
    }
    plVar25 = local_1880;
    if ((0xfff < (ulonglong)(((local_1870 - (longlong)local_1880) / 0x28) * 0x28)) &&
       (plVar25 = (longlong *)local_1880[-1],
       0x1f < (ulonglong)((longlong)local_1880 + (-8 - (longlong)plVar25)))) {
                    /* WARNING: Subroutine does not return */
      puStackY_2bc0 = (undefined *)0x1804693c4;
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    puStackY_2bc0 = (undefined *)0x180469345;
    FUN_1804547d0(plVar25);
  }
}



