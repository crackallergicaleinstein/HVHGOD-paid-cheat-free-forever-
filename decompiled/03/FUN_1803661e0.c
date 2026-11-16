// FUN_1803661e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803661e0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803661e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ushort uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 uVar8;
  char cVar9;
  short sVar10;
  int iVar11;
  DWORD DVar12;
  float fVar13;
  ULONGLONG UVar14;
  longlong lVar15;
  ulonglong *puVar16;
  double dVar17;
  undefined8 *puVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  float fVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  uint uVar36;
  ulonglong uVar37;
  int iVar38;
  longlong lVar39;
  bool bVar40;
  float fVar41;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar52;
  undefined1 auVar51 [64];
  float fVar53;
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [64];
  float fVar57;
  undefined4 uVar58;
  undefined1 auStack_1b18 [32];
  undefined **local_1af8;
  char *local_1af0;
  double local_1ae8;
  double local_1ae0;
  double local_1ad8;
  double local_1ad0;
  double local_1ac8;
  double local_1ac0;
  double local_1ab8;
  float local_1ab0;
  float local_1aa8;
  float local_1aa0;
  float local_1a98;
  float local_1a90;
  float local_1a88;
  float local_1a80;
  float local_1a78;
  float local_1a70;
  float local_1a68;
  undefined4 local_1a60;
  undefined4 local_1a58;
  int local_1a50;
  uint local_1a48;
  undefined4 local_1a40;
  undefined4 local_1a38;
  undefined4 local_1a30;
  undefined4 local_1a28;
  undefined4 local_1a20;
  undefined4 local_1a18;
  undefined1 local_1a10;
  float local_1a08;
  int local_1a00;
  int local_19f8;
  int local_19f0;
  char local_19e8;
  undefined4 local_19e0;
  char local_19d8;
  undefined1 local_19d0;
  undefined4 local_19c8;
  undefined4 local_19c0;
  undefined4 local_19b8;
  undefined4 local_19b0;
  undefined4 local_19a8;
  undefined4 local_19a0;
  undefined4 local_1998;
  undefined4 local_1990;
  undefined4 local_1988;
  undefined4 local_1980;
  undefined4 local_1978;
  undefined4 local_1970;
  float local_1968;
  float local_1960;
  float local_1958;
  undefined1 local_1950;
  undefined1 local_1948;
  float local_1940;
  char local_1938;
  undefined1 local_1930;
  undefined1 local_1928;
  undefined4 local_1920;
  undefined4 local_1918;
  undefined4 local_1910;
  undefined1 local_1908;
  undefined1 local_1900;
  undefined2 local_18f8;
  float local_18f4;
  float local_18f0;
  uint local_18ec;
  float local_18e8;
  uint uStack_18e4;
  undefined8 local_18d8;
  float local_18d0;
  undefined *local_18c8;
  float local_18c0;
  float local_18b8;
  ulonglong local_18b0;
  longlong local_18a8;
  float *pfStack_18a0;
  undefined4 *puStack_1898;
  undefined2 *puStack_1890;
  undefined1 *local_1888;
  float *pfStack_1880;
  undefined8 local_1878;
  undefined4 local_1870;
  undefined8 local_1868;
  undefined8 local_1860;
  ulonglong local_1858;
  undefined8 uStack_1850;
  undefined8 uStack_1848;
  undefined8 uStack_1840;
  undefined1 local_1838 [16];
  undefined4 *local_1828;
  undefined4 local_1820;
  undefined8 local_1818;
  undefined8 local_1808;
  undefined8 local_17f8;
  undefined8 uStack_17f0;
  undefined8 uStack_17e8;
  undefined8 uStack_17e0;
  undefined8 local_17d8;
  undefined8 uStack_17d0;
  undefined8 local_17c8;
  undefined4 local_17c0;
  undefined8 local_17b8;
  undefined8 uStack_17b0;
  undefined8 uStack_17a8;
  undefined8 uStack_17a0;
  undefined8 local_1798;
  undefined8 uStack_1790;
  undefined8 local_1788;
  undefined4 local_1780;
  undefined2 *local_1778;
  undefined1 *local_1770;
  undefined4 **local_1768;
  undefined1 *local_1760;
  undefined4 *local_1758;
  char **local_1750;
  longlong local_1748;
  float local_1740 [2];
  longlong local_1738 [2];
  undefined8 local_1728;
  uint uStack_1720;
  undefined4 uStack_171c;
  undefined4 uStack_1718;
  undefined4 local_1714;
  longlong local_1708;
  undefined8 local_1700;
  longlong lStack_16f8;
  undefined8 uStack_16f0;
  undefined8 uStack_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  char local_16d0 [4];
  float local_16cc;
  char local_16c8 [8];
  undefined8 local_16c0;
  char local_16b8;
  char local_16b7;
  undefined1 local_16b6;
  undefined4 local_16b4;
  undefined2 local_16b0;
  undefined1 local_16ae;
  undefined4 local_16ac;
  undefined4 local_16a8;
  float local_16a0;
  float fStack_169c;
  float local_1698;
  undefined4 local_1690;
  int local_168c;
  uint local_1688 [2];
  int local_1680;
  float local_167c;
  uint local_1678 [6];
  float local_1660;
  float local_165c;
  float local_1658;
  undefined4 local_1650;
  undefined4 local_164c;
  undefined4 local_1648;
  undefined4 local_1644;
  undefined4 local_1640;
  undefined4 local_163c;
  undefined1 local_1638;
  char cStack_1637;
  undefined2 uStack_1636;
  float fStack_1634;
  float fStack_1630;
  float fStack_162c;
  undefined8 uStack_1628;
  undefined4 uStack_1620;
  undefined4 uStack_161c;
  float local_1618;
  float fStack_1614;
  float fStack_1610;
  undefined4 uStack_160c;
  float fStack_1608;
  undefined4 uStack_1604;
  undefined4 uStack_1600;
  undefined1 uStack_15fc;
  undefined1 uStack_15fb;
  undefined2 uStack_15fa;
  float local_15f8;
  float fStack_15f4;
  float fStack_15f0;
  undefined4 uStack_15ec;
  undefined4 uStack_15e8;
  undefined4 uStack_15e4;
  undefined4 uStack_15e0;
  float fStack_15dc;
  float fStack_15d8;
  float fStack_15d4;
  undefined4 uStack_15d0;
  float fStack_15cc;
  undefined4 local_15c8;
  undefined4 uStack_15c4;
  float local_15b8;
  char local_15b4 [4];
  undefined4 local_15b0;
  char local_15ac [4];
  undefined4 local_15a8;
  char local_15a4 [4];
  undefined4 local_15a0;
  char local_159c [4];
  undefined4 local_1598;
  char local_1594 [4];
  undefined4 local_1590;
  char local_158c [4];
  undefined4 local_1588;
  char local_1584 [4];
  undefined4 local_1580;
  char local_157c [4];
  undefined4 local_1578;
  undefined1 local_1574;
  undefined4 local_1570;
  undefined1 local_156c;
  undefined4 local_1568;
  undefined1 local_1564;
  undefined4 local_1560;
  undefined1 local_155c;
  undefined4 local_1558;
  undefined1 local_1554;
  undefined4 local_1550;
  undefined1 local_154c;
  undefined4 local_1548;
  undefined1 local_1544;
  undefined4 local_1540;
  undefined1 local_153c;
  undefined4 local_1538;
  undefined1 local_1534;
  undefined4 local_1530;
  undefined1 local_152c;
  undefined8 local_1528;
  undefined8 local_1520;
  undefined2 local_1518;
  undefined2 uStack_1516;
  float fStack_1514;
  float fStack_1510;
  float fStack_150c;
  undefined8 uStack_1508;
  undefined4 uStack_1500;
  undefined4 uStack_14fc;
  float local_14f8;
  float fStack_14f4;
  float fStack_14f0;
  undefined2 uStack_14ec;
  undefined2 uStack_14ea;
  float local_14e8;
  undefined4 uStack_14e4;
  undefined4 local_14e0;
  undefined1 local_14d8;
  char cStack_14d7;
  undefined2 uStack_14d6;
  float fStack_14d4;
  float fStack_14d0;
  float fStack_14cc;
  undefined4 *puStack_14c8;
  undefined4 uStack_14c0;
  undefined4 uStack_14bc;
  float local_14b8;
  float fStack_14b4;
  float fStack_14b0;
  undefined2 uStack_14ac;
  undefined2 uStack_14aa;
  float local_14a8;
  undefined4 uStack_14a4;
  undefined4 local_14a0;
  uint *local_1498;
  longlong *local_1490;
  undefined8 *local_1488;
  longlong *local_1480;
  longlong *local_1478;
  undefined8 *local_1470;
  undefined8 local_1468;
  float local_1460;
  undefined8 local_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  undefined8 uStack_1440;
  undefined8 local_1438;
  undefined4 uStack_1430;
  float fStack_142c;
  float fStack_1428;
  float fStack_1424;
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
  undefined8 uStack_13c8;
  undefined8 uStack_13c0;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined4 local_13a8;
  char *local_1398;
  float *local_1390;
  float *local_1388;
  float *local_1380;
  uint *local_1378;
  undefined8 *local_1370;
  undefined8 *local_1368;
  undefined1 *local_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  longlong local_1338;
  float *pfStack_1330;
  undefined4 *puStack_1328;
  undefined8 uStack_1320;
  uint **local_12d8;
  char *local_12d0;
  longlong *local_12c8;
  uint *local_12c0;
  int *local_12b8;
  float *local_12b0;
  undefined8 *local_12a8;
  char *local_12a0;
  longlong *local_1298;
  longlong *local_1290;
  char *local_1288;
  undefined4 *local_1278;
  undefined1 *local_1270;
  uint *local_1268;
  int *local_1260;
  uint ***local_1258;
  longlong *local_1250;
  undefined4 *local_1248;
  longlong *local_1240;
  undefined8 *local_1238;
  char *local_1230;
  float *local_1228;
  float *local_1220;
  float *local_1218;
  uint *local_1210;
  undefined8 *local_1208;
  undefined8 *local_1200;
  undefined4 *local_11f8;
  undefined4 *local_11f0;
  uint *local_11e8;
  uint *local_11e0;
  undefined4 *local_11d8;
  uint *local_11d0;
  undefined4 *local_11c8;
  uint **local_11c0;
  undefined1 local_11b8 [8];
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 uStack_11a0;
  longlong local_1198;
  float *pfStack_1190;
  undefined4 *puStack_1188;
  undefined4 uStack_1180;
  undefined4 uStack_117c;
  float local_1178;
  float fStack_1174;
  float fStack_1170;
  undefined4 uStack_116c;
  undefined4 uStack_1168;
  undefined4 uStack_1164;
  undefined4 uStack_1160;
  float fStack_115c;
  float fStack_1158;
  float fStack_1154;
  undefined4 uStack_1150;
  float fStack_114c;
  undefined4 local_1148;
  undefined4 uStack_1144;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 uStack_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 uStack_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 uStack_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 local_1038;
  undefined8 uStack_1030;
  undefined8 local_1028;
  undefined4 local_1020;
  int local_c18;
  undefined8 local_c10;
  undefined8 local_c08;
  undefined8 uStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined4 local_bdc;
  undefined8 local_bd8 [160];
  char local_6d8 [8];
  double dStack_6d0;
  float local_648;
  float local_644;
  float local_640;
  uint local_62c;
  char local_61d;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_1b18;
  if ((DAT_180cc8360 == '\0') || (DAT_180cc83c9 == '\0')) {
    local_16b8 = '\0';
  }
  else {
    local_16b8 = '\x01';
  }
  if (((DAT_180cc8360 == '\0') || (DAT_180cc83c9 == '\0')) ||
     (local_16b6 = 1, DAT_180cc83cb == '\0')) {
    local_16b6 = 0;
  }
  local_16b4 = 0xffffffff;
  local_16b0 = 0;
  local_16ae = 0;
  local_16ac = 0x7fc00000;
  local_16a8 = 0x7fc00000;
  if ((param_2 == 0) || (local_16b8 == '\0')) {
    DAT_180b90098 = 0xffffffffffffffff;
  }
  local_1748 = param_2;
  local_16b7 = local_16b8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_1700 = _DAT_180bb8890;
  lStack_16f8 = lRam0000000180bb8898;
  uStack_16f0 = uRam0000000180bb88a0;
  uStack_16e8 = uRam0000000180bb88a8;
  local_16e0 = _DAT_180bb88b0;
  uStack_16d8 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_1458 = _DAT_180b8e110;
  uStack_1450 = DAT_180b8e118;
  uStack_1448 = _DAT_180b8e120;
  uStack_1440 = ram0x000180b8e128;
  local_1438 = _DAT_180b8e130;
  uStack_1430 = (undefined4)_DAT_180b8e138;
  fStack_142c = (float)((ulonglong)_DAT_180b8e138 >> 0x20);
  fStack_1428 = (float)_DAT_180b8e140;
  fStack_1424 = (float)((ulonglong)_DAT_180b8e140 >> 0x20);
  uStack_1420 = _DAT_180b8e148;
  local_1418 = _DAT_180b8e150;
  uStack_1410 = _DAT_180b8e158;
  uVar42 = uStack_1410;
  uStack_1408 = _DAT_180b8e160;
  uStack_1400 = DAT_180b8e168;
  local_13f8 = _DAT_180b8e170;
  uStack_13f0 = ram0x000180b8e178;
  uStack_13e8 = _DAT_180b8e180;
  uStack_13e0 = _DAT_180b8e188;
  local_13d8 = _DAT_180b8e190;
  uStack_13d0 = _DAT_180b8e198;
  uStack_13c8 = _DAT_180b8e1a0;
  uStack_13c0 = _DAT_180b8e1a8;
  local_13b8 = _DAT_180b8e1b0;
  uStack_13b0 = _DAT_180b8e1b8;
  local_13a8 = DAT_180b8e1c0;
  if (((lStack_16f8 == 0) || ((char)uStack_16d8 == '\0')) ||
     (local_1458._0_1_ = (char)_DAT_180b8e110, (char)local_1458 == '\0')) {
    FUN_180365f40(4,local_1748,&local_1458);
  }
  if ((DAT_180cc8360 == '\0') || (DAT_180cc83ca == '\0')) {
    local_16ae = 0;
  }
  else {
    local_16ae = 1;
  }
  uStack_1410._4_4_ = (undefined4)((ulonglong)_DAT_180b8e158 >> 0x20);
  local_16ac = uStack_1410._4_4_;
  uStack_1410._0_4_ = (undefined4)_DAT_180b8e158;
  local_16a8 = (undefined4)uStack_1410;
  lVar39 = 0;
  iVar11 = DAT_180c6f980;
  uStack_1410 = uVar42;
  if (DAT_180c6f980 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f978) {
      iVar11 = 0;
    }
    else {
      local_18c8 = &DAT_180901460;
      iVar11 = FUN_1805f68d0(&DAT_180901460);
      if (iVar11 != 0) goto LAB_180369250;
      if (DAT_1809014ac == 0x7fffffff) {
        DAT_1809014ac = 0x7ffffffe;
        goto LAB_18036926e;
      }
      if ((DAT_180c6f980 == 0) && (DAT_180c6f978 <= UVar14)) {
        DAT_180c6f980 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c6f980 == 0) {
          DAT_180c6f978 = UVar14 + 1000;
        }
        else {
          DAT_180c6f978 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c6f980;
      FUN_1805f68fc(&DAT_180901460);
    }
  }
  if ((lStack_16f8 == 0) || (iVar11 == 0)) {
    local_18d8._0_5_ = (uint5)(uint)(float)local_18d8;
    uVar37 = local_18d8;
  }
  else {
    lVar26 = iVar11 + lStack_16f8;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar26 == 0) {
LAB_180366521:
      local_16c0._0_5_ = (uint5)(uint)(float)local_16c0;
    }
    else {
      local_16cc = 0.0;
      cVar7 = FUN_1804514f0(&local_16cc,lVar26,4);
      if (cVar7 == '\0') goto LAB_180366521;
      local_16c0._0_5_ = CONCAT14(1,local_16cc);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    uVar37 = local_16c0;
  }
  lVar15 = DAT_180b90098;
  local_16b4 = 0xffffffff;
  if ((char)(uVar37 >> 0x20) != '\0') {
    local_16b4 = (undefined4)uVar37;
  }
  if (DAT_180ccaa36 != '\0') {
    FUN_180365f40(0,local_1748,&local_1458);
  }
  auVar49._12_4_ = 0;
  auVar49._0_12_ = ZEXT812(0);
  auVar49 = auVar49 << 0x20;
  if (-1 < DAT_180b90098) {
    lVar26 = *(longlong *)(local_1748 + 8);
    if ((lVar26 == DAT_180b90098 + 1) && (DAT_180b900a0 == lStack_16f8)) {
      fVar29 = (float)(local_1458._4_4_ & 1);
      auVar55 = ZEXT416((uint)DAT_180b900a8);
      fVar44 = ((float)uStack_1450 - DAT_180b900a8) * ((float)uStack_1450 - DAT_180b900a8) +
               (uStack_1450._4_4_ - DAT_180b900ac) * (uStack_1450._4_4_ - DAT_180b900ac) +
               ((float)uStack_1448 - DAT_180b900b0) * ((float)uStack_1448 - DAT_180b900b0);
      fVar13 = DAT_180b900b0;
      fVar41 = (float)uStack_1448;
      fVar53 = DAT_180b900ac;
      fVar43 = uStack_1450._4_4_;
      fVar57 = (float)uStack_1450;
      if (fVar44 == 0.0) {
        fVar44 = 0.0;
      }
      else if (fVar44 < 0.0) {
        auVar46 = ZEXT1264(ZEXT812(0)) << 0x20;
        auVar56 = ZEXT1664(auVar55);
        fVar44 = (float)FUN_18061e150();
        auVar55 = auVar56._0_16_;
        auVar49 = auVar46._0_16_;
      }
      else {
        fVar44 = SQRT(fVar44);
      }
      auVar46 = ZEXT1664(auVar49);
      auVar56 = ZEXT1664(auVar55);
      FUN_18063ab10(local_6d8,0,0x600);
      local_1ab8 = (double)fVar44;
      local_1ac0 = (double)fVar13;
      local_1ac8 = (double)fVar53;
      local_1ad0 = (double)auVar56._0_4_;
      local_1ad8 = (double)fVar41;
      local_1ae0 = (double)fVar43;
      local_1ae8 = (double)fVar57;
      local_1af0 = (char *)lVar15;
      local_1af8 = (undefined **)lVar26;
      local_1ab0 = fVar29;
      FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                    "command=%lld prior=%lld velocity=(%.3f,%.3f,%.3f) expected=(%.3f,%.3f,%.3f) error=%.3f ground=%d source=client_command_start server_ack=unverified"
                   );
      local_1af8 = &PTR_180700558;
      if (local_6d8[0] != '\0') {
        local_1af8 = (undefined **)&DAT_1806bcfc0;
      }
      local_1af0 = local_6d8;
      FUN_1800f6900(0);
      auVar49 = auVar46._0_16_;
    }
    DAT_180b90098 = -1;
  }
  uVar6 = local_1458;
  lVar15 = local_1748;
  uVar33 = DAT_180b0dfd8;
  local_18b0 = DAT_180b0dfd8;
  uVar37 = DAT_180b0dfd8 & 4;
  uVar32 = local_1458 >> 0x20;
  if (((DAT_180b0dfd8 & 4) == 0) || ((local_1458 & 0x200000000) == 0)) {
LAB_180366777:
    cVar7 = '\0';
  }
  else {
    auVar46 = ZEXT1664(auVar49);
    fVar44 = (float)uStack_13d0;
    sVar10 = thunk_FUN_180624430();
    auVar49 = auVar46._0_16_;
    if ((0 < sVar10) || (fVar44 < 0.99)) goto LAB_180366777;
    cVar7 = '\x01';
  }
  local_16b0 = CONCAT11(cVar7,(char)local_16b0);
  if (((((DAT_180b8fffc != '\0') || (DAT_180b90028 != '\0')) || (DAT_180b900c0 != '\0')) ||
      (((DAT_180b8fc30 != '\0' || (DAT_180b8fe80 != '\0')) ||
       ((DAT_180b8e554 != '\0' || ((uVar37 != 0 && (cVar7 == '\0')))))))) || (DAT_180cad358 != '\0')
     ) {
LAB_18036919a:
    FUN_180365f40(1,lVar15,&local_1458);
  }
  local_16b0 = CONCAT11(cVar7,(char)uVar32) & 0xff01;
  if ((((uVar6 & 0x100000000) == 0) && (DAT_180cc81b0 != '\0')) && ((uVar33 & 2) != 0)) {
    local_16d0[0] = '\x01';
  }
  else {
    local_16d0[0] = '\0';
    if (((uVar6 & 0x100000000) != 0) && (DAT_1808fedf1 != '\0')) goto LAB_18036919a;
  }
  auVar46 = ZEXT1664(auVar49);
  fVar44 = (float)uStack_1450;
  sVar10 = thunk_FUN_180624430();
  if (((0 < sVar10) || (((uint)uStack_1450._4_4_ & 0x7f800000) == 0x7f800000)) ||
     (((uint)(float)uStack_1448 & 0x7f800000) == 0x7f800000)) {
LAB_180369184:
    FUN_180365f40(3,lVar15,&local_1458);
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
  }
  fVar13 = uStack_1450._4_4_;
  fVar41 = (float)uStack_1448;
  sVar10 = thunk_FUN_180624430(fStack_142c);
  if (((((0 < sVar10) || (((uint)fStack_1428 & 0x7f800000) == 0x7f800000)) ||
       (((uint)fStack_1424 & 0x7f800000) == 0x7f800000)) ||
      (((uVar6 & 0x100000000) == 0 && (auVar46._0_4_ <= fVar41)))) ||
     (fVar44 = fVar44 * fVar44 + fVar13 * fVar13, fVar44 == auVar46._0_4_)) goto LAB_180369184;
  if (fVar44 < 0.0) {
    fVar44 = (float)FUN_18061e150(fVar44);
  }
  else {
    fVar44 = SQRT(fVar44);
  }
  if (fVar44 <= auVar46._0_4_) goto LAB_180369184;
  iVar11 = DAT_180c6f974;
  if (DAT_180c6f974 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f998) {
      iVar11 = 0;
    }
    else {
      local_18c8 = &DAT_1809014b0;
      iVar11 = FUN_1805f68d0(&DAT_1809014b0);
      if (iVar11 != 0) goto LAB_180369250;
      if (DAT_1809014fc == 0x7fffffff) {
        DAT_1809014fc = 0x7ffffffe;
        goto LAB_18036926e;
      }
      if ((DAT_180c6f974 == 0) && (DAT_180c6f998 <= UVar14)) {
        DAT_180c6f974 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
        if (DAT_180c6f974 == 0) {
          DAT_180c6f998 = UVar14 + 1000;
        }
        else {
          DAT_180c6f998 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c6f974;
      FUN_1805f68fc(&DAT_1809014b0);
    }
  }
  if ((lStack_16f8 == 0) || (iVar11 == 0)) {
    local_18f8 = local_18f8 & 0xff;
  }
  else {
    lVar26 = iVar11 + lStack_16f8;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar26 == 0) {
LAB_180366a15:
      local_18f8 = local_18f8 & 0xff;
    }
    else {
      local_18f8 = local_18f8 & 0xff00;
      cVar7 = FUN_1804514f0(&local_18f8,lVar26,1);
      if (cVar7 == '\0') goto LAB_180366a15;
      local_18f8 = CONCAT11(1,(char)local_18f8);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
  }
  uVar5 = local_18f8;
  iVar11 = DAT_180c6f990;
  if (DAT_180c6f990 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f988) {
      iVar11 = 0;
    }
    else {
      local_18c8 = &DAT_1809013c0;
      iVar11 = FUN_1805f68d0(&DAT_1809013c0);
      if (iVar11 != 0) goto LAB_180369250;
      if (DAT_18090140c == 0x7fffffff) {
        DAT_18090140c = 0x7ffffffe;
        goto LAB_18036926e;
      }
      if ((DAT_180c6f990 == 0) && (DAT_180c6f988 <= UVar14)) {
        DAT_180c6f990 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f990 == 0) {
          DAT_180c6f988 = UVar14 + 1000;
        }
        else {
          DAT_180c6f988 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c6f990;
      FUN_1805f68fc(&DAT_1809013c0);
    }
  }
  if ((lStack_16f8 == 0) || (iVar11 == 0)) {
LAB_180366b8e:
    uVar37 = 0;
  }
  else {
    lVar26 = iVar11 + lStack_16f8;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar26 == 0) {
      uStack_1720 = uStack_1720 & 0xffffff00;
      bVar4 = false;
      bVar40 = false;
    }
    else {
      local_16c0 = 0;
      cVar7 = FUN_1804514f0(&local_16c0,lVar26,8);
      if (cVar7 == '\0') {
        uStack_1720 = (uint)uStack_1720._1_3_ << 8;
        bVar40 = false;
        bVar4 = false;
      }
      else {
        local_1728 = local_16c0;
        uStack_1720 = CONCAT31(uStack_1720._1_3_,1);
        bVar40 = true;
        bVar4 = true;
      }
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
      bVar40 = bVar4;
    }
    uVar37 = local_1728;
    if (!bVar40) goto LAB_180366b8e;
  }
  iVar11 = DAT_180c6f960;
  local_16c0 = uVar37;
  if (DAT_180c6f960 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f958) {
      iVar11 = 0;
    }
    else {
      local_18c8 = &DAT_180901370;
      iVar11 = FUN_1805f68d0(&DAT_180901370);
      if (iVar11 != 0) goto LAB_180369250;
      if (DAT_1809013bc == 0x7fffffff) {
        DAT_1809013bc = 0x7ffffffe;
        goto LAB_18036926e;
      }
      if ((DAT_180c6f960 == 0) && (DAT_180c6f958 <= UVar14)) {
        DAT_180c6f960 = FUN_1804174b0("CCSPlayer_MovementServices",0xb2c4ee6c);
        if (DAT_180c6f960 == 0) {
          DAT_180c6f958 = UVar14 + 1000;
        }
        else {
          DAT_180c6f958 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c6f960;
      FUN_1805f68fc(&DAT_180901370);
    }
  }
  if ((uVar37 == 0) || (iVar11 == 0)) {
    local_18d8._0_5_ = (uint5)(uint)(float)local_18d8;
    local_1520 = local_18d8;
  }
  else {
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if ((longlong)iVar11 + uVar37 == 0) {
LAB_180366c93:
      uStack_18e4 = uStack_18e4 & 0xffffff00;
    }
    else {
      local_16cc = 0.0;
      cVar7 = FUN_1804514f0(&local_16cc,(longlong)iVar11 + uVar37,4);
      if (cVar7 == '\0') goto LAB_180366c93;
      local_18e8 = local_16cc;
      uStack_18e4 = CONCAT31(uStack_18e4._1_3_,1);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    local_1520 = CONCAT44(uStack_18e4,local_18e8);
  }
  iVar11 = DAT_180c6f970;
  if (DAT_180c6f970 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f968) {
      iVar11 = 0;
    }
    else {
      local_18c8 = &DAT_180901410;
      iVar11 = FUN_1805f68d0(&DAT_180901410);
      if (iVar11 != 0) goto LAB_180369250;
      if (DAT_18090145c == 0x7fffffff) {
        DAT_18090145c = 0x7ffffffe;
        goto LAB_18036926e;
      }
      if ((DAT_180c6f970 == 0) && (DAT_180c6f968 <= UVar14)) {
        DAT_180c6f970 = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
        if (DAT_180c6f970 == 0) {
          DAT_180c6f968 = UVar14 + 1000;
        }
        else {
          DAT_180c6f968 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c6f970;
      FUN_1805f68fc(&DAT_180901410);
    }
  }
  iVar30 = DAT_180c6f964;
  if (DAT_180c6f964 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f938) {
      iVar30 = 0;
    }
    else {
      local_18c8 = &DAT_1809012d0;
      iVar30 = FUN_1805f68d0(&DAT_1809012d0);
      if (iVar30 != 0) goto LAB_180369250;
      if (DAT_18090131c == 0x7fffffff) {
        DAT_18090131c = 0x7ffffffe;
        goto LAB_18036926e;
      }
      if ((DAT_180c6f964 == 0) && (DAT_180c6f938 <= UVar14)) {
        DAT_180c6f964 = FUN_1804174b0("CCSPlayerModernJump",0x680c80ac);
        if (DAT_180c6f964 == 0) {
          DAT_180c6f938 = UVar14 + 1000;
        }
        else {
          DAT_180c6f938 = 0xffffffffffffffff;
        }
      }
      iVar30 = DAT_180c6f964;
      FUN_1805f68fc(&DAT_1809012d0);
    }
    uVar37 = local_16c0;
  }
  if ((((iVar11 == 0) || (uVar37 == 0)) || ((longlong)iVar11 + uVar37 == 0)) || (iVar30 == 0)) {
    local_18d8._0_5_ = (uint5)(uint)(float)local_18d8;
    local_1528 = local_18d8;
  }
  else {
    lVar26 = (longlong)iVar30 + (longlong)iVar11 + uVar37;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar26 == 0) {
LAB_180366e81:
      uStack_18e4 = uStack_18e4 & 0xffffff00;
    }
    else {
      local_16cc = 0.0;
      cVar7 = FUN_1804514f0(&local_16cc,lVar26,4);
      if (cVar7 == '\0') goto LAB_180366e81;
      local_18e8 = local_16cc;
      uStack_18e4 = CONCAT31(uStack_18e4._1_3_,1);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    local_1528 = CONCAT44(uStack_18e4,local_18e8);
  }
  if ((DAT_180cd4180 & 1) == 0) {
    DAT_180cd4180 = DAT_180cd4180 | 1;
    local_1728 = CONCAT44(local_1728._4_4_,0x58e37709);
    uStack_1720 = 0;
    uStack_171c = 0;
    local_1868 = &local_1728;
    local_1860 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_1868);
    DAT_180cd4188 = CONCAT44(uStack_171c,uStack_1720);
  }
  lVar15 = DAT_180cd4188;
  iVar11 = DAT_180c6f950;
  if (DAT_180c6f950 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f948) {
      iVar11 = 0;
    }
    else {
      local_18c8 = &DAT_180901320;
      iVar11 = FUN_1805f68d0(&DAT_180901320);
      if (iVar11 != 0) {
LAB_180369250:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_18090136c == 0x7fffffff) {
        DAT_18090136c = 0x7ffffffe;
LAB_18036926e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6f950 == 0) && (DAT_180c6f948 <= UVar14)) {
        DAT_180c6f950 = FUN_1804174b0("C_BaseEntity",0x328a3947);
        if (DAT_180c6f950 == 0) {
          DAT_180c6f948 = UVar14 + 1000;
        }
        else {
          DAT_180c6f948 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c6f950;
      FUN_1805f68fc(&DAT_180901320);
    }
  }
  if ((lStack_16f8 == 0) || (iVar11 == 0)) {
    local_18d8._0_5_ = (uint5)(uint)(float)local_18d8;
  }
  else {
    lVar27 = iVar11 + lStack_16f8;
    lVar26 = FUN_18017ea70();
    *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + 1;
    if (lVar27 == 0) {
LAB_180367005:
      uStack_18e4 = uStack_18e4 & 0xffffff00;
    }
    else {
      local_16cc = auVar46._0_4_;
      cVar7 = FUN_1804514f0(&local_16cc,lVar27,4);
      if (cVar7 == '\0') goto LAB_180367005;
      local_18e8 = local_16cc;
      uStack_18e4 = CONCAT31(uStack_18e4._1_3_,1);
    }
    lVar26 = FUN_18017ea70();
    if (*(int *)(lVar26 + 4) != 0) {
      *(int *)(lVar26 + 4) = *(int *)(lVar26 + 4) + -1;
    }
    local_18d8 = CONCAT44(uStack_18e4,local_18e8);
  }
  if ((((local_18f8._1_1_ == '\0') || (((char)uVar5 - 7U & 0xfd) == 0)) ||
      (local_1520._4_1_ == '\0')) ||
     (((local_1528._4_1_ == '\0' || (lVar15 == 0)) || ((char)(local_18d8 >> 0x20) == '\0')))) {
LAB_18036916a:
    FUN_180365f40(4,local_1748,&local_1458);
  }
  fVar44 = (float)local_18d8 * *(float *)(lVar15 + 0x58);
  local_1740[0] = fVar44;
  sVar10 = thunk_FUN_180624430(fVar44);
  if ((0 < sVar10) || (fVar44 <= auVar46._0_4_)) goto LAB_18036916a;
  *(uint *)(local_1748 + 0x20) = *(uint *)(local_1748 + 0x20) | 1;
  lVar15 = 0;
  if (*(longlong *)(local_1748 + 0x40) != 0) {
    lVar15 = *(longlong *)(local_1748 + 0x40) + 0x10;
  }
  local_1708 = lVar15 + 8;
  if (lVar15 == 0) {
    local_1708 = 0;
  }
  local_1738[0] = lVar15;
  if (local_1708 == 0) {
LAB_180369150:
    FUN_180365f40(5,local_1748,&local_1458);
  }
  lVar26 = 0;
  if (*(longlong *)(lVar15 + 0x30) != 0) {
    lVar26 = *(longlong *)(lVar15 + 0x30) + 0x10;
  }
  if (lVar26 == 0) goto LAB_180369150;
  uVar31 = *(uint *)(local_1708 + 8);
  local_18f0 = (float)uVar31;
  if (0x1b < uVar31) goto LAB_180369150;
  if (*(longlong *)(local_1748 + 8) == DAT_180b8fbb0) {
    local_1680 = DAT_180b8fbb8;
    local_167c = DAT_180b8fbbc;
  }
  else {
    local_1680 = 0;
    local_167c = 0.0;
  }
  iVar11 = local_1680;
  if ((((local_16d0[0] == '\0') || ((int)local_167c < 2)) || (local_1680 < 0)) ||
     ((int)uVar31 < (int)local_167c + local_1680)) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  local_16cc = local_167c;
  local_16c8[0] = cVar7;
  local_1678[0] = uVar31;
  FUN_18063ab10(local_bd8,0,0x500);
  auVar49 = auVar46._0_16_;
  puVar18 = local_bd8;
  lVar26 = 0x20;
  do {
    *(undefined8 *)((longlong)puVar18 + 4) = 0;
    *(undefined8 *)((longlong)puVar18 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar18 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x24) = 0;
    *(undefined4 *)puVar18 = 0;
    puVar18 = puVar18 + 5;
    lVar26 = lVar26 + -1;
  } while (lVar26 != 0);
  iVar30 = 0;
  auVar56 = ZEXT464(0x3f800000);
  auVar55 = auVar56._0_16_;
  if (0 < (int)uVar31) {
    puVar18 = local_bd8;
    do {
      lVar26 = *(longlong *)(lVar39 + 8 + *(longlong *)(lVar15 + 0x18));
      puVar28 = (uint *)0x0;
      if (lVar26 != 0) {
        puVar28 = (uint *)(lVar26 + 0x10);
      }
      if (puVar28 == (uint *)0x0) {
LAB_1803672ed:
        FUN_180365f40(1,local_1748,&local_1458);
      }
      fVar44 = (float)puVar28[5];
      auVar46 = ZEXT1664(auVar46._0_16_);
      auVar56 = ZEXT1664(auVar56._0_16_);
      sVar10 = thunk_FUN_180624430();
      auVar55 = auVar56._0_16_;
      auVar49 = auVar46._0_16_;
      if (((0 < sVar10) || (fVar44 < auVar46._0_4_)) ||
         ((auVar56._0_4_ < fVar44 || ((puVar28[2] & 4) != 0)))) goto LAB_1803672ed;
      uVar1 = *(undefined8 *)(puVar28 + 2);
      uVar2 = *(undefined8 *)(puVar28 + 4);
      uVar3 = *(undefined8 *)(puVar28 + 6);
      uVar42 = *(undefined8 *)(puVar28 + 8);
      *puVar18 = *(undefined8 *)puVar28;
      puVar18[1] = uVar1;
      puVar18[2] = uVar2;
      puVar18[3] = uVar3;
      puVar18[4] = uVar42;
      if (((cVar7 != '\0') && (iVar11 <= iVar30)) &&
         ((iVar30 < (int)local_16cc + iVar11 &&
          (((*(longlong *)(puVar28 + 2) != 0 || ((*puVar28 & 0x18) == 0)) ||
           ((*puVar28 & 0x60) != 0)))))) {
        cVar7 = '\0';
        local_16c8[0] = '\0';
      }
      iVar30 = iVar30 + 1;
      lVar39 = lVar39 + 8;
      puVar18 = puVar18 + 5;
    } while (iVar30 < (int)local_18f0);
  }
  auVar46 = ZEXT1664(auVar49);
  auVar56 = ZEXT1664(auVar55);
  lVar39 = FUN_1803032c0(lStack_16f8,local_16c0);
  if (*(char *)(lVar39 + 0x48) == '\0') goto LAB_18036916a;
  cVar7 = FUN_180303860(1);
  if (cVar7 == '\0') {
    FUN_180365f40(6,local_1748,&local_1458);
  }
  fVar44 = 0.015625;
  local_1678[1] = 0x3c800000;
  if ((char)local_16b0 == '\0') {
    local_1460 = (float)uStack_1448 * 0.015625 + fStack_1424;
    auVar49 = vunpcklps_avx(ZEXT416((uint)((float)uStack_1450 * 0.015625 + fStack_142c)),
                            ZEXT416((uint)(uStack_1450._4_4_ * 0.015625 + fStack_1428)));
    local_1468 = auVar49._0_8_;
  }
  else {
    local_1468 = CONCAT44(fStack_1428,fStack_142c);
    local_1460 = fStack_1424;
  }
  fVar13 = 0.5;
  if ((char)local_16b0 == '\0') {
    fVar41 = local_1740[0] * 0.015625 * 0.015625 * 0.5 + 24.0;
  }
  else {
    fVar41 = 2.0;
  }
  local_1460 = local_1460 - fVar41;
  local_1728 = *(undefined8 *)(lVar39 + 0x18);
  uStack_1720 = *(undefined4 *)(lVar39 + 0x20);
  uStack_171c = (undefined4)*(undefined8 *)(lVar39 + 0x24);
  uStack_1718 = (undefined4)((ulonglong)*(undefined8 *)(lVar39 + 0x24) >> 0x20);
  local_1714 = *(undefined4 *)(lVar39 + 0x2c);
  local_1af0 = (char *)(lVar39 + 0x30);
  local_1af8 = (undefined **)&local_1728;
  FUN_180419610((char)local_16b0,local_6d8,&fStack_142c,&local_1468);
  local_16a0 = local_648;
  fStack_169c = local_644;
  local_1698 = local_640;
  UVar14 = GetTickCount64();
  auVar54 = ZEXT464(local_62c);
  if (DAT_180c6f930 <= UVar14) {
    DAT_180c6f930 = UVar14 + 1000;
    iVar11 = FUN_180369280();
    if ((lStack_16f8 == 0) || ((longlong)iVar11 == 0)) {
      local_18d8._0_5_ = (uint5)(uint)(float)local_18d8;
      puVar16 = &local_18d8;
      uVar42 = extraout_XMM0_Qa;
    }
    else {
      puVar16 = (ulonglong *)FUN_1801a5f00(&local_18c8,iVar11 + lStack_16f8);
      uVar42 = extraout_XMM0_Qa_00;
    }
    uVar37 = *puVar16;
    local_18d8 = uVar37;
    if ((char)(uVar37 >> 0x20) == '\0') {
      dVar17 = 0.0;
    }
    else {
      dVar17 = (double)FUN_1803d4150(uVar42,uVar37 & 0xffffffff);
    }
    iVar11 = FUN_180369380();
    FUN_18036a6e0(&local_18f8,dStack_6d0,(longlong)iVar11);
    if (local_1458._1_1_ == '\0') {
      uVar31 = 0xffffffff;
    }
    else {
      uVar31 = uStack_13e0._4_4_ & 1;
    }
    local_18c8 = (undefined *)CONCAT44(fStack_169c,local_16a0);
    local_18c0 = local_1698;
    uVar8 = FUN_180354ae0(&local_18c8);
    uVar36 = (uint)(byte)local_18f8;
    if (local_18f8._1_1_ == '\0') {
      uVar36 = 0xffffffff;
    }
    uVar58 = 0xffffffff;
    if (local_18d8._4_1_ != '\0') {
      uVar58 = (undefined4)uVar37;
    }
    local_1a30 = CONCAT31(local_1a30._1_3_,local_16b8);
    local_1a38 = CONCAT31(local_1a38._1_3_,local_16b7);
    local_1a40 = (undefined4)local_13d8;
    local_1a50 = CONCAT31(local_1a50._1_3_,uVar8);
    local_1a58 = CONCAT31(local_1a58._1_3_,local_61d);
    local_1a60 = auVar54._0_4_;
    local_1a68 = local_1698;
    local_1a70 = fStack_169c;
    local_1a78 = local_16a0;
    local_1a80 = (float)uStack_1448;
    local_1a88 = uStack_1450._4_4_;
    local_1a90 = (float)uStack_1450;
    local_1a98 = fStack_1424;
    local_1aa0 = fStack_1428;
    local_1aa8 = fStack_142c;
    local_1ab0 = (float)CONCAT31(local_1ab0._1_3_,local_16d0[0]);
    local_1ab8 = (double)(CONCAT71(local_1ab8._1_7_,(char)(local_18b0 >> 1)) & 0xffffffffffffff01);
    local_1ac0 = (double)CONCAT71(local_1ac0._1_7_,(char)local_16b0);
    local_1ac8 = (double)CONCAT44(local_1ac8._4_4_,uVar36);
    local_1ad0 = dStack_6d0;
    local_1ae0 = (double)CONCAT44(local_1ae0._4_4_,uVar58);
    local_1ae8 = (double)CONCAT71(local_1ae8._1_7_,local_18d8._4_1_);
    local_1af0 = (char *)lStack_16f8;
    local_1af8 = *(undefined ***)(local_1748 + 8);
    local_1ad8 = dVar17;
    local_1a48 = uVar31;
    FUN_18036a780();
  }
  if (local_61d != '\0') {
LAB_180369133:
    FUN_180365f40(7,local_1748,&local_1458);
  }
  sVar10 = thunk_FUN_180624430(auVar54._0_8_);
  fVar41 = local_1698;
  if (0 < sVar10) goto LAB_180369133;
  fVar53 = auVar54._0_4_;
  if (fVar53 < auVar46._0_4_) goto LAB_180369133;
  cVar7 = (char)local_16b0;
  if ((((char)local_16b0 == '\0') && (fVar53 == auVar46._0_4_)) || (auVar56._0_4_ <= fVar53))
  goto LAB_180369133;
  local_18c8 = (undefined *)CONCAT44(fStack_169c,local_16a0);
  local_18c0 = local_1698;
  cVar9 = FUN_180354ae0(&local_18c8);
  auVar49 = auVar46._0_16_;
  if (cVar9 == '\0') goto LAB_180369133;
  local_1660 = (float)uStack_1450;
  local_165c = uStack_1450._4_4_;
  local_1658 = (float)uStack_1448;
  fVar13 = fVar44 * local_1740[0] * fVar13;
  fVar53 = (float)uStack_1448 - fVar13;
  local_16cc = (float)uStack_1450 * local_16a0 + uStack_1450._4_4_ * fStack_169c;
  auVar55 = vminss_avx(ZEXT416((uint)(fVar53 * fVar41 + local_16cc)),auVar49);
  fVar43 = -auVar55._0_4_;
  local_18b8 = (fVar43 * fVar41 + fVar53) - fVar13;
  local_18e8 = fVar43 * local_16a0 + (float)uStack_1450;
  local_18b0 = CONCAT44(local_18b0._4_4_,fVar43 * fStack_169c + uStack_1450._4_4_);
  fStack_1634 = auVar46._0_4_;
  if ((cVar7 == '\0') &&
     ((fStack_1634 <= fVar41 * (float)uStack_1448 + local_16cc ||
      ((local_16b7 == '\0' && (local_18b8 <= fStack_1634)))))) {
    FUN_180365f40(8,local_1748,&local_1458);
  }
  puVar22 = (undefined4 *)&DAT_0000000c;
  if (*(longlong *)(local_1738[0] + 0x30) != 0) {
    puVar22 = (undefined4 *)(*(longlong *)(local_1738[0] + 0x30) + 0x1c);
  }
  local_1648 = *puVar22;
  local_164c = DAT_180b8e4f4;
  local_1138 = *(undefined8 *)(local_1748 + 0x58);
  uStack_1130 = *(undefined8 *)(local_1748 + 0x60);
  uStack_1128 = *(undefined8 *)(local_1748 + 0x68);
  uStack_1120 = *(undefined8 *)(local_1748 + 0x70);
  local_1498 = local_1678;
  local_1490 = local_1738;
  local_1488 = local_bd8;
  local_1480 = &local_1708;
  local_1478 = &local_1748;
  local_1470 = &local_1138;
  local_12d8 = &local_1498;
  local_12d0 = local_16c8;
  local_12c8 = &local_1708;
  local_12c0 = local_1678;
  local_12b8 = &local_1680;
  local_12b0 = &local_167c;
  local_12a8 = local_bd8;
  local_12a0 = local_16d0;
  local_1298 = &local_1748;
  local_1290 = local_1738;
  local_1288 = &local_16b8;
  local_1638 = 0;
  cStack_1637 = '\0';
  uStack_1636 = 0;
  uStack_160c = 0;
  uStack_15fc = 0;
  uStack_15fb = 0;
  uStack_15fa = 0;
  uStack_15d0 = 0;
  fStack_1630 = fStack_1634;
  fStack_162c = fStack_1634;
  uStack_1628 = 0xffffffffffffffff;
  uStack_1620 = 0x7fc00000;
  uStack_161c = 0xffffffff;
  local_1618 = fStack_1634;
  fStack_1614 = fStack_1634;
  fStack_1610 = fStack_1634;
  fStack_1608 = fStack_1634;
  uStack_1604 = 0x7fc00000;
  uStack_1600 = 0x7fc00000;
  local_15f8 = fStack_1634;
  fStack_15f4 = fStack_1634;
  fStack_15f0 = fStack_1634;
  uStack_15ec = 0xffffffff;
  uStack_15e8 = 0xffffffff;
  uStack_15e4 = 0x7fc00000;
  uStack_15e0 = 0xffffffff;
  fStack_15dc = fStack_1634;
  fStack_15d8 = fStack_1634;
  fStack_15d4 = fStack_1634;
  fStack_15cc = fStack_1634;
  local_15c8 = 0x7fc00000;
  uStack_15c4 = 0x7fc00000;
  local_1688[0] = 0;
  local_168c = 0;
  lVar39 = 0;
  fVar53 = 0.0;
  local_18f4 = 0.0;
  iVar30 = 0;
  iVar38 = 0;
  iVar11 = 0;
  local_1640 = 0;
  local_163c = 0;
  local_1678[3] = 0;
  local_1678[4] = 0;
  local_1650 = 0;
  local_1678[2] = 0;
  uVar58 = 0xbf800000;
  local_1644 = 0xbf800000;
  local_1278 = &local_1644;
  local_1270 = &local_1638;
  local_1268 = local_1688;
  local_1260 = &local_168c;
  local_1258 = &local_12d8;
  local_1250 = local_1738;
  local_1248 = &local_164c;
  local_1240 = &local_1748;
  local_1238 = &local_1700;
  local_1230 = &local_16b8;
  local_1228 = &local_1660;
  local_1220 = &local_16a0;
  local_1218 = local_1740;
  local_1210 = local_1678 + 1;
  local_1208 = &local_1520;
  local_1200 = &local_1528;
  local_11f8 = &local_1640;
  local_11f0 = &local_163c;
  local_11e8 = local_1678 + 3;
  local_11e0 = local_1678 + 4;
  local_11d8 = &local_1650;
  local_11d0 = local_1678 + 2;
  local_11c8 = &local_1648;
  local_11c0 = &local_1498;
  local_1398 = &local_16b8;
  local_1390 = &local_1660;
  local_1388 = &local_16a0;
  local_1380 = local_1740;
  local_1378 = local_1678 + 1;
  local_1370 = &local_1520;
  local_1368 = &local_1528;
  local_1360 = &local_1638;
  local_1358 = CONCAT44(fStack_1634,(undefined4)local_1358) & 0xffffffffffff0000;
  uStack_1350 = CONCAT44(fStack_1634,fStack_1634);
  uStack_1320._0_6_ = (uint6)(uint)uStack_1320;
  local_1518 = 0;
  fStack_1514 = fStack_1634;
  fStack_1510 = fStack_1634;
  fStack_150c = fStack_1634;
  uStack_1508 = 0xffffffffffffffff;
  uStack_1500 = 0x7fc00000;
  uStack_14fc = 0xffffffff;
  local_14f8 = fStack_1634;
  fStack_14f4 = fStack_1634;
  fStack_14f0 = fStack_1634;
  uStack_14ec = 0;
  local_14e8 = fStack_1634;
  uStack_14e4 = 0x7fc00000;
  local_14e0 = 0x7fc00000;
  local_14d8 = 0;
  cStack_14d7 = '\0';
  fStack_14d4 = fStack_1634;
  fStack_14d0 = fStack_1634;
  fStack_14cc = fStack_1634;
  puStack_14c8 = (undefined4 *)0xffffffffffffffff;
  uStack_14c0 = 0x7fc00000;
  uStack_14bc = 0xffffffff;
  local_14b8 = fStack_1634;
  fStack_14b4 = fStack_1634;
  fStack_14b0 = fStack_1634;
  uStack_14ac = 0;
  local_14a8 = fStack_1634;
  uStack_14a4 = 0x7fc00000;
  local_14a0 = 0x7fc00000;
  local_1690 = 0;
  local_1778 = &local_1518;
  local_1770 = &local_14d8;
  local_1768 = &local_1278;
  local_1760 = &local_1638;
  local_1758 = &local_1690;
  local_1750 = &local_1398;
  local_18f0 = 0.0;
  local_18ec = 0xbf800000;
  auVar55 = SUB6416(ZEXT464(0x3f000000),0);
  fVar13 = (float)uStack_1448 * fVar44 - fVar44 * local_1740[0] * fVar44 * 0.5;
  fVar44 = -((uStack_1450._4_4_ * fVar44 + fStack_1634) * local_644 +
             ((float)uStack_1450 * fVar44 + fStack_1634) * local_648 + local_640 * fVar13);
  if (cVar7 == '\0') {
    if (fVar44 <= fStack_1634) {
      auVar55 = auVar56._0_16_;
    }
    else {
      auVar55 = ZEXT416((uint)(((local_640 * 24.0 + fVar44) * auVar54._0_4_) / fVar44));
    }
    local_18d8 = CONCAT44(fVar44 / fVar41,auVar55._0_4_);
    local_18d0 = -fVar13;
    uVar58 = 0xbf800000;
    auVar46 = ZEXT1664(auVar49);
    auVar56 = ZEXT1664(auVar55);
    puVar16 = (ulonglong *)FUN_180354340(&local_18c8,&local_18d8);
    auVar55 = auVar56._0_16_;
    auVar49 = auVar46._0_16_;
  }
  else {
    local_16c0 = CONCAT35(local_16c0._5_3_,0x13f000000);
    puVar16 = &local_16c0;
  }
  local_18d8 = *puVar16;
  cVar7 = '\0';
  cVar9 = '\0';
  local_15b8 = auVar49._0_4_;
  local_15b4[0] = '\0';
  local_15ac[0] = 0;
  local_15a4[0] = 0;
  local_159c[0] = 0;
  local_1594[0] = 0;
  local_158c[0] = 0;
  local_1584[0] = 0;
  local_157c[0] = 0;
  local_1574 = 0;
  local_156c = 0;
  local_1564 = 0;
  local_155c = 0;
  local_1554 = 0;
  local_154c = 0;
  local_1544 = 0;
  local_153c = 0;
  local_1534 = 0;
  local_152c = 0;
  auVar46 = ZEXT1664(auVar49);
  auVar56 = ZEXT1664(auVar55);
  local_15b0 = local_15b8;
  local_15a8 = local_15b8;
  local_15a0 = local_15b8;
  local_1598 = local_15b8;
  local_1590 = local_15b8;
  local_1588 = local_15b8;
  local_1580 = local_15b8;
  local_1578 = local_15b8;
  local_1570 = local_15b8;
  local_1568 = local_15b8;
  local_1560 = local_15b8;
  local_1558 = local_15b8;
  local_1550 = local_15b8;
  local_1548 = local_15b8;
  local_1540 = local_15b8;
  local_1538 = local_15b8;
  local_1530 = local_15b8;
  puVar18 = (undefined8 *)FUN_180354430(local_6d8);
  auVar55 = auVar56._0_16_;
  auVar49 = auVar46._0_16_;
  local_1118 = *puVar18;
  uStack_1110 = puVar18[1];
  uStack_1108 = puVar18[2];
  uStack_1100 = puVar18[3];
  uVar42 = local_1118;
  uVar1 = uStack_1110;
  uVar2 = uStack_1108;
  uVar3 = uStack_1100;
  local_10f8 = puVar18[4];
  uStack_10f0 = puVar18[5];
  uStack_10e8 = puVar18[6];
  uStack_10e0 = puVar18[7];
  local_10d8 = puVar18[8];
  uStack_10d0 = puVar18[9];
  uStack_10c8 = puVar18[10];
  uStack_10c0 = puVar18[0xb];
  local_10b8 = puVar18[0xc];
  uStack_10b0 = puVar18[0xd];
  local_10a8 = puVar18[0xe];
  uStack_10a0 = puVar18[0xf];
  local_1098 = puVar18[0x10];
  uStack_1090 = puVar18[0x11];
  uStack_1088 = puVar18[0x12];
  uStack_1080 = puVar18[0x13];
  local_1078 = puVar18[0x14];
  uStack_1070 = puVar18[0x15];
  uStack_1068 = puVar18[0x16];
  uStack_1060 = puVar18[0x17];
  local_1058 = puVar18[0x18];
  uStack_1050 = puVar18[0x19];
  uStack_1048 = puVar18[0x1a];
  uStack_1040 = puVar18[0x1b];
  local_1038 = puVar18[0x1c];
  uStack_1030 = puVar18[0x1d];
  local_1028 = puVar18[0x1e];
  local_1020 = *(undefined4 *)(puVar18 + 0x1f);
  bVar40 = local_16c8[0] != '\0';
  if (bVar40) {
    local_15b8 = (float)uVar58;
    local_15b4[0] = '\x01';
  }
  uVar32 = (ulonglong)bVar40;
  uVar37 = uVar32;
  if (local_16d0[0] != '\0') {
    uVar37 = (ulonglong)(bVar40 + 1);
    pcVar19 = local_15b4 + uVar32 * 8 + -4;
    pcVar19[0] = '\0';
    pcVar19[1] = '\0';
    pcVar19[2] = -0x80;
    pcVar19[3] = -0x41;
    local_15b4[uVar32 * 8] = '\0';
  }
  uVar32 = uVar37;
  if (local_16c8[0] != '\0') {
    uVar32 = (ulonglong)((int)uVar37 + 1);
    *(undefined4 *)(local_15b4 + uVar37 * 8 + -4) = (undefined4)local_1118;
    local_15b4[uVar37 * 8] = '\x01';
  }
  uVar33 = (ulonglong)((int)uVar32 + 1);
  *(undefined4 *)(local_15b4 + uVar32 * 8 + -4) = (undefined4)local_1118;
  local_15b4[uVar32 * 8] = '\0';
  local_1118._4_4_ = (undefined4)((ulonglong)local_1118 >> 0x20);
  uVar37 = uVar33;
  if (local_16c8[0] != '\0') {
    uVar37 = (ulonglong)((int)uVar32 + 2);
    *(undefined4 *)(local_15b4 + uVar33 * 8 + -4) = local_1118._4_4_;
    local_15b4[uVar33 * 8] = '\x01';
  }
  uVar31 = (int)uVar37 + 1;
  uVar32 = (ulonglong)uVar31;
  *(undefined4 *)(local_15b4 + uVar37 * 8 + -4) = local_1118._4_4_;
  local_15b4[uVar37 * 8] = '\0';
  if (local_16c8[0] != '\0') {
    uVar31 = (int)uVar37 + 2;
    *(undefined4 *)(local_15b4 + uVar32 * 8 + -4) = (undefined4)uStack_1110;
    local_15b4[uVar32 * 8] = '\x01';
  }
  iVar20 = uVar31 + 1;
  *(undefined4 *)(local_15b4 + (longlong)(int)uVar31 * 8 + -4) = (undefined4)uStack_1110;
  local_15b4[(longlong)(int)uVar31 * 8] = '\0';
  uStack_1110._4_4_ = (undefined4)((ulonglong)uStack_1110 >> 0x20);
  if (local_16c8[0] != '\0') {
    lVar15 = (longlong)iVar20;
    iVar20 = uVar31 + 2;
    *(undefined4 *)(local_15b4 + lVar15 * 8 + -4) = uStack_1110._4_4_;
    local_15b4[lVar15 * 8] = '\x01';
  }
  iVar21 = iVar20 + 1;
  *(undefined4 *)(local_15b4 + (longlong)iVar20 * 8 + -4) = uStack_1110._4_4_;
  local_15b4[(longlong)iVar20 * 8] = '\0';
  if (local_16c8[0] != '\0') {
    lVar15 = (longlong)iVar21;
    iVar21 = iVar20 + 2;
    *(undefined4 *)(local_15b4 + lVar15 * 8 + -4) = (undefined4)uStack_1108;
    local_15b4[lVar15 * 8] = '\x01';
  }
  iVar20 = iVar21 + 1;
  *(undefined4 *)(local_15b4 + (longlong)iVar21 * 8 + -4) = (undefined4)uStack_1108;
  local_15b4[(longlong)iVar21 * 8] = '\0';
  uStack_1108._4_4_ = (undefined4)((ulonglong)uStack_1108 >> 0x20);
  if (local_16c8[0] != '\0') {
    lVar15 = (longlong)iVar20;
    iVar20 = iVar21 + 2;
    *(undefined4 *)(local_15b4 + lVar15 * 8 + -4) = uStack_1108._4_4_;
    local_15b4[lVar15 * 8] = '\x01';
  }
  iVar21 = iVar20 + 1;
  *(undefined4 *)(local_15b4 + (longlong)iVar20 * 8 + -4) = uStack_1108._4_4_;
  local_15b4[(longlong)iVar20 * 8] = '\0';
  if (local_16c8[0] != '\0') {
    lVar15 = (longlong)iVar21;
    iVar21 = iVar20 + 2;
    *(undefined4 *)(local_15b4 + lVar15 * 8 + -4) = (undefined4)uStack_1100;
    local_15b4[lVar15 * 8] = '\x01';
  }
  iVar20 = iVar21 + 1;
  *(undefined4 *)(local_15b4 + (longlong)iVar21 * 8 + -4) = (undefined4)uStack_1100;
  local_15b4[(longlong)iVar21 * 8] = '\0';
  uStack_1100._4_4_ = (undefined4)((ulonglong)uStack_1100 >> 0x20);
  if (local_16c8[0] != '\0') {
    lVar15 = (longlong)iVar20;
    iVar20 = iVar21 + 2;
    *(undefined4 *)(local_15b4 + lVar15 * 8 + -4) = uStack_1100._4_4_;
    local_15b4[lVar15 * 8] = '\x01';
  }
  *(undefined4 *)(local_15b4 + (longlong)iVar20 * 8 + -4) = uStack_1100._4_4_;
  local_15b4[(longlong)iVar20 * 8] = '\0';
  local_1118 = uVar42;
  uStack_1110 = uVar1;
  uStack_1108 = uVar2;
  uStack_1100 = uVar3;
  if (iVar20 + 1 == 0) {
    auVar45 = ZEXT416(local_18ec);
    fVar44 = 0.0;
  }
  else {
    local_18c8 = (undefined *)(longlong)(iVar20 + 1);
    auVar54 = ZEXT1664(_DAT_18086dba0);
    auVar48 = ZEXT464(0x3c23d70a);
    do {
      uVar37 = local_16c0;
      auVar55 = auVar56._0_16_;
      auVar49 = auVar46._0_16_;
      auVar47 = auVar48._0_16_;
      auVar45 = auVar54._0_16_;
      lVar15 = 0;
      fVar44 = *(float *)(local_15b4 + lVar39 * 8 + -4);
      local_16c0 = CONCAT44(local_16c0._4_4_,fVar44);
      local_16c0._5_3_ = SUB83(uVar37,5);
      local_16c0._0_5_ = CONCAT14(local_15b4[lVar39 * 8],fVar44);
      if (0x14 < local_168c * 2 + 6) break;
      if ((auVar46._0_4_ <= fVar44) || (iVar20 = 4, local_15b4[lVar39 * 8] != '\0')) {
        iVar20 = 6;
      }
      if (DAT_180bbeab9 == '\0') {
        auVar46 = ZEXT1664(auVar45);
        auVar56 = ZEXT1664(auVar47);
        auVar54 = ZEXT1664(auVar49);
        auVar48 = ZEXT1664(auVar55);
        cVar9 = FUN_180303ad0();
        auVar55 = auVar48._0_16_;
        auVar49 = auVar54._0_16_;
        auVar47 = auVar56._0_16_;
        auVar45 = auVar46._0_16_;
        if (cVar9 == '\0') goto LAB_18036827f;
        DAT_180bbeab9 = '\x01';
        DAT_180bda15c = iVar20;
        DAT_180bda160 = GetCurrentThreadId();
        auVar55 = auVar48._0_16_;
        auVar49 = auVar54._0_16_;
        auVar47 = auVar56._0_16_;
        auVar45 = auVar46._0_16_;
        cVar9 = '\x01';
      }
      else {
LAB_18036827f:
        cVar9 = '\0';
      }
      local_18f8 = CONCAT11(local_18f8._1_1_,cVar9);
      if (cVar9 == '\0') {
        fVar53 = 1.4013e-45;
        local_18f4 = 1.4013e-45;
        auVar45 = ZEXT416(local_18ec);
        cVar9 = '\0';
        fVar44 = local_18f0;
        goto LAB_180368a10;
      }
      auVar54 = ZEXT1664(auVar45);
      auVar48 = ZEXT1664(auVar47);
      auVar46 = ZEXT1664(auVar49);
      auVar56 = ZEXT1664(auVar55);
      cVar9 = FUN_180369970();
      if (cVar9 == '\0') {
        iVar30 = iVar30 + 1;
LAB_18036899c:
        auVar55 = auVar56._0_16_;
        auVar49 = auVar46._0_16_;
        if (DAT_180bbeab9 != '\0') {
          DVar12 = GetCurrentThreadId();
          auVar55 = auVar56._0_16_;
          auVar49 = auVar46._0_16_;
          auVar45 = ZEXT416(local_18ec);
          if (DAT_180bda160 == DVar12) {
            DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
            DAT_180bda15c = 0;
            DAT_180bbeab9 = '\0';
            DAT_180bda160 = 0;
          }
          cVar9 = '\0';
          fVar44 = local_18f0;
          fVar53 = local_18f0;
          goto LAB_180368a10;
        }
        break;
      }
      local_18a8 = CONCAT44(fStack_1614,local_1618);
      pfStack_18a0 = (float *)CONCAT44(uStack_160c,fStack_1610);
      puStack_1898 = (undefined4 *)CONCAT44(uStack_1604,fStack_1608);
      puStack_1890 = (undefined2 *)
                     CONCAT26(uStack_15fa,CONCAT15(uStack_15fb,CONCAT14(uStack_15fc,uStack_1600)));
      local_1858 = CONCAT44(fStack_1634,CONCAT22(uStack_1636,CONCAT11(cStack_1637,local_1638)));
      uStack_1850 = CONCAT44(fStack_162c,fStack_1630);
      uStack_1840 = CONCAT44(uStack_161c,uStack_1620);
      uStack_1848 = uStack_1628;
      cVar9 = local_16c0._4_1_;
      if (local_16c0._4_1_ != '\0') {
        uStack_1348 = uStack_1628;
        local_1358 = local_1858;
        uStack_1350 = uStack_1850;
        uStack_1340 = uStack_1840;
        local_1338 = local_18a8;
        pfStack_1330 = pfStack_18a0;
        puStack_1328 = puStack_1898;
        uStack_1320 = puStack_1890;
      }
      auVar54 = ZEXT1664(auVar54._0_16_);
      auVar48 = ZEXT1664(auVar48._0_16_);
      auVar46 = ZEXT1664(auVar46._0_16_);
      auVar56 = ZEXT1664(auVar56._0_16_);
      fVar44 = fStack_15d8;
      fVar13 = fStack_15d4;
      uVar58 = uStack_15d0;
      fVar41 = fStack_15cc;
      uVar50 = local_15c8;
      uVar52 = uStack_15c4;
      local_16cc = (float)FUN_18036a190();
      local_11b8 = (undefined1  [8])local_1858;
      uStack_11b0 = uStack_1850;
      uStack_11a8 = uStack_1848;
      uStack_11a0 = uStack_1840;
      local_1198 = local_18a8;
      pfStack_1190 = pfStack_18a0;
      puStack_1188 = puStack_1898;
      uStack_1180 = SUB84(puStack_1890,0);
      uStack_117c = (undefined4)((ulonglong)puStack_1890 >> 0x20);
      local_1178 = local_15f8;
      fStack_1174 = fStack_15f4;
      fStack_1170 = fStack_15f0;
      uStack_116c = uStack_15ec;
      uStack_1168 = uStack_15e8;
      uStack_1164 = uStack_15e4;
      uStack_1160 = uStack_15e0;
      fStack_115c = fStack_15dc;
      fStack_1158 = fVar44;
      fStack_1154 = fVar13;
      uStack_1150 = uVar58;
      fStack_114c = fVar41;
      local_1148 = uVar50;
      uStack_1144 = uVar52;
      if (local_16cc == 0.0) {
        iVar30 = iVar30 + 1;
LAB_18036834f:
        if (DAT_180bbeab9 != '\0') {
          auVar54 = ZEXT1664(auVar54._0_16_);
          auVar48 = ZEXT1664(auVar48._0_16_);
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar56 = ZEXT1664(auVar56._0_16_);
LAB_18036835f:
          DVar12 = GetCurrentThreadId();
          if (DAT_180bda160 == DVar12) {
            DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
            DAT_180bbeab9 = '\0';
            DAT_180bda15c = 0;
            DAT_180bda160 = 0;
          }
        }
      }
      else {
        if ((float)local_16c0 < auVar46._0_4_) {
          uVar8 = 0;
          if (cVar9 != '\0') {
            auVar54 = ZEXT1664(auVar54._0_16_);
            auVar48 = ZEXT1664(auVar48._0_16_);
            auVar46 = ZEXT1664(auVar46._0_16_);
            auVar56 = ZEXT1664(auVar56._0_16_);
            cVar9 = FUN_18036a2a0();
            if (cVar9 == '\0') goto LAB_180368999;
            uVar8 = local_16c0._4_1_;
          }
          local_18a8 = (longlong)&local_16c0 + 4;
          pfStack_18a0 = &local_16cc;
          puStack_1898 = &local_1690;
          puStack_1890 = &local_1518;
          local_1888 = &local_14d8;
          pfStack_1880 = &local_1660;
          if (local_16d0[0] == '\0') {
LAB_18036851b:
            iVar38 = iVar38 + 1;
            goto LAB_18036834f;
          }
          auVar54 = ZEXT1664(auVar54._0_16_);
          auVar48 = ZEXT1664(auVar48._0_16_);
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar51 = ZEXT464((uint)(float)local_16c0);
          auVar56 = ZEXT1664(auVar56._0_16_);
          cVar9 = FUN_18036a370();
          if (cVar9 == '\0') goto LAB_18036851b;
          cVar9 = FUN_180369970(&local_1278,auVar51._0_8_,uVar8);
          if (cVar9 == '\0') {
            iVar11 = iVar11 + 1;
            goto LAB_18036899c;
          }
          fVar13 = (float)FUN_18036a190();
          fVar44 = local_16cc;
          if ((fVar13 == local_16cc) && (cVar7 = FUN_18036a370(), cVar7 != '\0')) {
            cVar7 = '\x01';
          }
          else {
            cVar7 = '\0';
          }
          do {
            bVar40 = cVar7 == '\0';
            cVar7 = '\0';
            if (bVar40) goto LAB_180368506;
            local_1808 = *(undefined8 *)(local_15b4 + lVar15 + -0x80);
            local_1818 = *(undefined8 *)(local_11b8 + lVar15 + 4);
            uVar1 = local_1808;
            uVar42 = local_1818;
            uVar31 = auVar54._0_4_;
            fVar13 = auVar48._0_4_;
            if (fVar13 < (float)((uint)((float)local_1808 - (float)local_1818) & uVar31)) {
LAB_1803684f2:
              cVar7 = '\0';
            }
            else {
              local_1808._4_4_ = (float)((ulonglong)local_1808 >> 0x20);
              local_1818._4_4_ = (float)((ulonglong)local_1818 >> 0x20);
              if ((fVar13 < (float)((uint)(local_1808._4_4_ - local_1818._4_4_) & uVar31)) ||
                 (fVar13 < (float)((uint)(*(float *)(local_15b4 + lVar15 + -0x78) -
                                         *(float *)(local_11b8 + lVar15 + 0xc)) & uVar31)))
              goto LAB_1803684f2;
              cVar7 = '\x01';
            }
            lVar15 = lVar15 + 0x3c;
            local_1818 = uVar42;
            local_1808 = uVar1;
          } while (lVar15 < 0x78);
          if (cVar7 == '\0') {
LAB_180368506:
            iVar11 = iVar11 + 1;
            if (DAT_180bbeab9 == '\0') goto LAB_180368890;
            goto LAB_18036835f;
          }
          auVar54 = ZEXT464((uint)(float)local_16c0);
          cVar9 = local_16c0._4_1_;
          if ((DAT_180bbeab9 != '\0') && (DVar12 = GetCurrentThreadId(), DAT_180bda160 == DVar12)) {
LAB_180368910:
            DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
            DAT_180bda15c = 0;
            DAT_180bbeab9 = '\0';
            DAT_180bda160 = 0;
          }
          UVar14 = GetTickCount64();
          uVar58 = auVar56._0_4_;
          fVar13 = auVar46._0_4_;
          DAT_180c6f928 = UVar14 + 500;
          goto LAB_180368a4b;
        }
        auVar54 = ZEXT1664(auVar54._0_16_);
        auVar48 = ZEXT1664(auVar48._0_16_);
        auVar46 = ZEXT1664(auVar46._0_16_);
        auVar56 = ZEXT1664(auVar56._0_16_);
        cVar9 = FUN_18036a2a0();
        fVar44 = local_16cc;
        if (cVar9 == '\0') {
LAB_180368999:
          iVar38 = iVar38 + 1;
          goto LAB_18036899c;
        }
        if (((char)local_16b0 == '\0') || (cStack_14d7 == '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        local_17b8 = CONCAT44(fStack_1514,CONCAT22(uStack_1516,local_1518));
        uStack_17b0 = CONCAT44(fStack_150c,fStack_1510);
        uStack_17a0 = CONCAT44(uStack_14fc,uStack_1500);
        uStack_17a8 = uStack_1508;
        local_1798 = CONCAT44(fStack_14f4,local_14f8);
        uStack_1790 = CONCAT26(uStack_14ea,CONCAT24(uStack_14ec,fStack_14f0));
        local_1788 = CONCAT44(uStack_14e4,local_14e8);
        local_1780 = local_14e0;
        local_1838._8_8_ = pfStack_18a0;
        local_1838._0_8_ = local_18a8;
        local_1828 = puStack_1898;
        local_1820 = SUB84(puStack_1890,0);
        local_1af8 = (undefined **)CONCAT71(local_1af8._1_7_,uVar8);
        auVar54 = ZEXT1664(auVar54._0_16_);
        auVar48 = ZEXT1664(auVar48._0_16_);
        auVar46 = ZEXT1664(auVar46._0_16_);
        auVar56 = ZEXT1664(auVar56._0_16_);
        cVar9 = FUN_180365b80(local_16cc,&local_1858,local_1690,&local_17b8);
        if (cVar9 == '\0') {
LAB_180368889:
          iVar38 = iVar38 + 1;
        }
        else {
          local_18a8 = CONCAT44(fStack_14d4,CONCAT22(uStack_14d6,CONCAT11(cStack_14d7,local_14d8)));
          pfStack_18a0 = (float *)CONCAT44(fStack_14cc,fStack_14d0);
          puStack_1890 = (undefined2 *)CONCAT44(uStack_14bc,uStack_14c0);
          puStack_1898 = puStack_14c8;
          local_1888 = (undefined1 *)CONCAT44(fStack_14b4,local_14b8);
          pfStack_1880 = (float *)CONCAT26(uStack_14aa,CONCAT24(uStack_14ac,fStack_14b0));
          local_1878 = CONCAT44(uStack_14a4,local_14a8);
          local_1870 = local_14a0;
          local_17f8 = CONCAT44(local_1178,uStack_117c);
          uStack_17f0 = CONCAT44(fStack_1170,fStack_1174);
          uStack_17e8 = CONCAT44(uStack_1168,uStack_116c);
          uStack_17e0 = CONCAT44(uStack_1160,uStack_1164);
          local_17d8 = CONCAT44(fStack_1158,fStack_115c);
          uStack_17d0 = CONCAT44(uStack_1150,fStack_1154);
          local_17c8 = CONCAT44(local_1148,fStack_114c);
          local_17c0 = uStack_1144;
          auVar54 = ZEXT1664(auVar54._0_16_);
          auVar48 = ZEXT1664(auVar48._0_16_);
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar56 = ZEXT1664(auVar56._0_16_);
          cVar9 = FUN_180365de0(fVar44,&local_17f8,&local_18a8);
          if (cVar9 == '\0') goto LAB_180368889;
          cVar9 = FUN_180369970(&local_1278,local_16c0 & 0xffffffff,local_16c0._4_1_);
          auVar55 = auVar56._0_16_;
          auVar49 = auVar46._0_16_;
          if (cVar9 == '\0') {
            iVar11 = iVar11 + 1;
            if (DAT_180bbeab9 != '\0') {
              DVar12 = GetCurrentThreadId();
              auVar55 = auVar56._0_16_;
              auVar49 = auVar46._0_16_;
              auVar45 = ZEXT416(local_18ec);
              if (DAT_180bda160 != DVar12) goto LAB_1803688a2;
              DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
              DAT_180bda15c = 0;
              DAT_180bbeab9 = '\0';
              DAT_180bda160 = 0;
              cVar9 = '\0';
              fVar53 = 0.0;
              fVar44 = 0.0;
              goto LAB_180368a10;
            }
            break;
          }
          fVar13 = (float)FUN_18036a190();
          fVar44 = local_16cc;
          if (fVar13 == local_16cc) {
            local_17f8 = CONCAT44(fStack_1514,CONCAT22(uStack_1516,local_1518));
            uStack_17f0 = CONCAT44(fStack_150c,fStack_1510);
            uStack_17e0 = CONCAT44(uStack_14fc,uStack_1500);
            uStack_17e8 = uStack_1508;
            local_17d8 = CONCAT44(fStack_14f4,local_14f8);
            uStack_17d0 = CONCAT26(uStack_14ea,CONCAT24(uStack_14ec,fStack_14f0));
            local_17c8 = CONCAT44(uStack_14e4,local_14e8);
            local_17c0 = local_14e0;
            local_17b8 = CONCAT44(fStack_1634,CONCAT22(uStack_1636,CONCAT11(cStack_1637,local_1638))
                                 );
            uStack_17b0 = CONCAT44(fStack_162c,fStack_1630);
            uStack_17a0 = CONCAT44(uStack_161c,uStack_1620);
            uStack_17a8 = uStack_1628;
            local_1798 = CONCAT44(fStack_1614,local_1618);
            uStack_1790 = CONCAT44(uStack_160c,fStack_1610);
            local_1788 = CONCAT44(uStack_1604,fStack_1608);
            local_1780 = uStack_1600;
            local_1af8 = (undefined **)CONCAT71(local_1af8._1_7_,uVar8);
            auVar54 = ZEXT1664(auVar54._0_16_);
            auVar48 = ZEXT1664(auVar48._0_16_);
            auVar46 = ZEXT1664(auVar46._0_16_);
            auVar56 = ZEXT1664(auVar56._0_16_);
            cVar7 = FUN_180365b80(local_16cc,&local_17b8,local_1690,&local_17f8);
            if (cVar7 == '\0') goto LAB_1803687cc;
            local_18a8 = CONCAT44(fStack_14d4,CONCAT22(uStack_14d6,CONCAT11(cStack_14d7,local_14d8))
                                 );
            pfStack_18a0 = (float *)CONCAT44(fStack_14cc,fStack_14d0);
            puStack_1890 = (undefined2 *)CONCAT44(uStack_14bc,uStack_14c0);
            puStack_1898 = puStack_14c8;
            local_1888 = (undefined1 *)CONCAT44(fStack_14b4,local_14b8);
            pfStack_1880 = (float *)CONCAT26(uStack_14aa,CONCAT24(uStack_14ac,fStack_14b0));
            local_1878 = CONCAT44(uStack_14a4,local_14a8);
            local_1870 = local_14a0;
            local_1858 = CONCAT44(local_15f8,CONCAT22(uStack_15fa,CONCAT11(uStack_15fb,uStack_15fc))
                                 );
            uStack_1850 = CONCAT44(fStack_15f0,fStack_15f4);
            uStack_1848 = CONCAT44(uStack_15e8,uStack_15ec);
            uStack_1840 = CONCAT44(uStack_15e0,uStack_15e4);
            local_1838._4_4_ = fStack_15d8;
            local_1838._0_4_ = fStack_15dc;
            local_1838._12_4_ = uStack_15d0;
            local_1838._8_4_ = fStack_15d4;
            local_1828 = (undefined4 *)CONCAT44(local_15c8,fStack_15cc);
            local_1820 = uStack_15c4;
            auVar54 = ZEXT1664(auVar54._0_16_);
            auVar48 = ZEXT1664(auVar48._0_16_);
            auVar46 = ZEXT1664(auVar46._0_16_);
            auVar56 = ZEXT1664(auVar56._0_16_);
            cVar7 = FUN_180365de0(fVar44,&local_1858,&local_18a8);
            if (cVar7 == '\0') goto LAB_1803687cc;
            cVar7 = '\x01';
          }
          else {
LAB_1803687cc:
            cVar7 = '\0';
          }
          auVar55 = auVar56._0_16_;
          auVar49 = auVar46._0_16_;
          lVar15 = 0;
          do {
            bVar40 = cVar7 == '\0';
            cVar7 = '\0';
            if (bVar40) goto LAB_18036884c;
            local_1868 = *(undefined8 **)(local_15b4 + lVar15 + -0x80);
            local_1728 = *(ulonglong *)(local_11b8 + lVar15 + 4);
            puVar18 = local_1868;
            uVar42 = local_1728;
            uVar31 = auVar54._0_4_;
            fVar13 = auVar48._0_4_;
            if (fVar13 < (float)((uint)(SUB84(local_1868,0) - (float)local_1728) & uVar31)) {
LAB_180368838:
              cVar7 = '\0';
            }
            else {
              local_1868._4_4_ = (float)((ulonglong)local_1868 >> 0x20);
              local_1728._4_4_ = (float)(local_1728 >> 0x20);
              if ((fVar13 < (float)((uint)(local_1868._4_4_ - local_1728._4_4_) & uVar31)) ||
                 (fVar13 < (float)((uint)(*(float *)(local_15b4 + lVar15 + -0x78) -
                                         *(float *)(local_11b8 + lVar15 + 0xc)) & uVar31)))
              goto LAB_180368838;
              cVar7 = '\x01';
            }
            lVar15 = lVar15 + 0x3c;
            local_1868 = puVar18;
            local_1728 = uVar42;
          } while (lVar15 < 0x78);
          if (cVar7 != '\0') {
            auVar54 = ZEXT464((uint)(float)local_16c0);
            auVar45 = ZEXT416((uint)(float)local_16c0);
            cVar9 = local_16c0._4_1_;
            if (DAT_180bbeab9 != '\0') {
              DVar12 = GetCurrentThreadId();
              auVar55 = auVar56._0_16_;
              auVar49 = auVar46._0_16_;
              auVar45 = auVar54._0_16_;
              if (DAT_180bda160 == DVar12) goto LAB_180368910;
            }
            fVar53 = local_18f4;
            goto LAB_180368a10;
          }
LAB_18036884c:
          iVar11 = iVar11 + 1;
        }
        if ((DAT_180bbeab9 != '\0') && (DVar12 = GetCurrentThreadId(), DAT_180bda160 == DVar12)) {
          DAT_1808e3a58 = DAT_1808e3a58 + DAT_180bda15c;
          DAT_180bbeab9 = '\0';
          DAT_180bda15c = 0;
          DAT_180bda160 = 0;
        }
      }
LAB_180368890:
      auVar55 = auVar56._0_16_;
      auVar49 = auVar46._0_16_;
      lVar39 = lVar39 + 1;
    } while (lVar39 < (longlong)local_18c8);
    auVar45 = ZEXT416(local_18ec);
LAB_1803688a2:
    cVar9 = '\0';
    fVar44 = local_18f0;
    fVar53 = local_18f0;
  }
LAB_180368a10:
  auVar54 = ZEXT1664(auVar45);
  auVar46 = ZEXT1664(auVar49);
  auVar56 = ZEXT1664(auVar55);
  UVar14 = GetTickCount64();
  uVar58 = auVar56._0_4_;
  auVar49 = auVar54._0_16_;
  fVar13 = auVar46._0_4_;
  if ((cVar7 == '\0') &&
     ((((char)local_16b0 != '\0' || (cStack_1637 == '\0')) && (UVar14 < DAT_180c6f928))))
  goto LAB_180368de1;
  DAT_180c6f928 = UVar14 + 500;
  if (cVar7 == '\0') {
LAB_180368a54:
    local_1948 = 0;
    if (cVar7 != '\0') goto LAB_180368a5a;
LAB_180368a64:
    local_1950 = 0;
  }
  else {
LAB_180368a4b:
    if (cVar9 == '\0') goto LAB_180368a54;
    local_1948 = 1;
LAB_180368a5a:
    if (fVar13 <= auVar54._0_4_) goto LAB_180368a64;
    local_1950 = 1;
  }
  fVar53 = local_18f4;
  auVar49 = vpcmpeqd_avx(ZEXT116(local_18d8._4_1_),SUB6416(ZEXT464(0),0));
  auVar49 = vblendvps_avx(ZEXT416((uint)(float)local_18d8),SUB6416(ZEXT464(0xbf800000),0),auVar49);
  local_1900 = uStack_1320._5_1_;
  local_1908 = local_1358._1_1_;
  local_1910 = uStack_1350._4_4_;
  local_1918 = (undefined4)uStack_1350;
  local_1920 = local_1358._4_4_;
  local_1928 = uStack_1320._4_1_;
  local_1930 = (undefined1)local_1358;
  local_1938 = local_16c8[0];
  local_1940 = local_167c;
  local_1958 = fStack_1610;
  local_1960 = fStack_1614;
  local_1968 = local_1618;
  local_1970 = local_1678[2];
  local_1978 = local_1650;
  local_1980 = local_1678[4];
  local_1988 = local_1678[3];
  local_1990 = local_163c;
  local_1998 = local_1640;
  local_19a0 = auVar49._0_4_;
  local_19b0 = uStack_15e8;
  local_19b8 = uStack_1628._4_4_;
  local_19c0 = uStack_15ec;
  local_19c8 = (undefined4)uStack_1628;
  local_19d0 = uStack_15fb;
  local_19d8 = cStack_1637;
  local_19e0 = local_1644;
  local_19e8 = local_16d0[0];
  local_1a08 = local_18f4;
  local_1a10 = (char)local_16b0;
  local_1a18 = uStack_15e4;
  local_1a20 = uStack_1620;
  local_1a28 = uStack_15e0;
  local_1a30 = uStack_161c;
  local_1a38 = local_16b4;
  local_1a40 = CONCAT31(local_1a40._1_3_,local_16b6);
  local_1a48 = local_1688[0];
  local_1a50 = local_168c;
  local_1a58 = auVar54._0_4_;
  local_1a60 = CONCAT31(local_1a60._1_3_,cVar7);
  local_1a70 = fStack_162c;
  local_1a78 = fStack_1630;
  local_1a80 = fStack_1634;
  local_1a88 = fStack_150c;
  local_1a90 = fStack_1510;
  local_1a98 = fStack_1514;
  local_1aa0 = local_18b8;
  local_1aa8 = (float)local_18b0;
  local_1ab0 = local_18e8;
  local_1ab8 = (double)CONCAT44(local_1ab8._4_4_,local_1658);
  local_1ac0 = (double)CONCAT44(local_1ac0._4_4_,local_165c);
  local_1ac8 = (double)CONCAT44(local_1ac8._4_4_,local_1660);
  local_1ad0 = (double)CONCAT44(local_1ad0._4_4_,local_1698);
  local_1ad8 = (double)CONCAT44(local_1ad8._4_4_,fStack_169c);
  local_1ae0 = (double)CONCAT44(local_1ae0._4_4_,local_16a0);
  local_1ae8 = (double)CONCAT71(local_1ae8._1_7_,local_16b7);
  local_1af0 = (char *)CONCAT71(local_1af0._1_7_,local_16b8);
  local_1af8 = *(undefined ***)(local_1748 + 8);
  local_1a68 = fVar44;
  local_1a00 = iVar30;
  local_19f8 = iVar38;
  local_19f0 = iVar11;
  local_19a8 = uVar58;
  FUN_18036aa10();
  auVar49 = auVar54._0_16_;
LAB_180368de1:
  iVar11 = 0;
  puVar18 = (undefined8 *)0x0;
  uVar31 = *local_1498;
  if (0 < (int)uVar31) {
    lVar15 = 0;
    lVar39 = 0;
    puVar24 = puVar18;
    do {
      puVar35 = (undefined8 *)((longlong)local_1488 + lVar39);
      uVar1 = puVar35[1];
      uVar2 = puVar35[2];
      uVar3 = puVar35[3];
      uVar42 = *(undefined8 *)((longlong)local_1488 + lVar39 + 0x20);
      lVar26 = *(longlong *)(*(longlong *)(*local_1490 + 0x18) + 8 + lVar15);
      puVar23 = puVar18;
      if (lVar26 != 0) {
        puVar23 = (undefined8 *)(lVar26 + 0x10);
      }
      *puVar23 = *puVar35;
      puVar23[1] = uVar1;
      puVar23[2] = uVar2;
      puVar23[3] = uVar3;
      puVar23[4] = uVar42;
      uVar36 = (int)puVar24 + 1;
      puVar24 = (undefined8 *)(ulonglong)uVar36;
      lVar39 = lVar39 + 0x28;
      lVar15 = lVar15 + 8;
      uVar31 = *local_1498;
    } while ((int)uVar36 < (int)uVar31);
  }
  *(uint *)(*local_1480 + 8) = uVar31;
  lVar39 = *local_1478;
  uVar42 = local_1470[1];
  uVar1 = local_1470[2];
  uVar2 = local_1470[3];
  *(undefined8 *)(lVar39 + 0x58) = *local_1470;
  *(undefined8 *)(lVar39 + 0x60) = uVar42;
  *(undefined8 *)(lVar39 + 0x68) = uVar1;
  *(undefined8 *)(lVar39 + 0x70) = uVar2;
  if (cVar7 == '\0') {
    if (fVar53 == 0.0) {
      cVar7 = (0 < (int)local_1688[0]) + '\t';
    }
    else {
      cVar7 = '\x06';
    }
    FUN_180365f40(cVar7,local_1748,&local_1458);
  }
  else {
    auVar46 = ZEXT1664(auVar49);
    FUN_180365f40(0xb,local_1748,&local_1458);
    cVar7 = FUN_180369480(&local_12d8,auVar46._0_8_,cVar9,0);
    if (cVar7 != '\0') {
      FUN_18063ab10(local_6d8,0,0x500);
      pcVar19 = local_6d8;
      lVar39 = 0x20;
      do {
        pcVar19[4] = '\0';
        pcVar19[5] = '\0';
        pcVar19[6] = '\0';
        pcVar19[7] = '\0';
        pcVar19[8] = '\0';
        pcVar19[9] = '\0';
        pcVar19[10] = '\0';
        pcVar19[0xb] = '\0';
        pcVar19[0xc] = '\0';
        pcVar19[0xd] = '\0';
        pcVar19[0xe] = '\0';
        pcVar19[0xf] = '\0';
        pcVar19[0x10] = '\0';
        pcVar19[0x11] = '\0';
        pcVar19[0x12] = '\0';
        pcVar19[0x13] = '\0';
        pcVar19[0x14] = '\0';
        pcVar19[0x15] = '\0';
        pcVar19[0x16] = '\0';
        pcVar19[0x17] = '\0';
        pcVar19[0x18] = '\0';
        pcVar19[0x19] = '\0';
        pcVar19[0x1a] = '\0';
        pcVar19[0x1b] = '\0';
        pcVar19[0x1c] = '\0';
        pcVar19[0x1d] = '\0';
        pcVar19[0x1e] = '\0';
        pcVar19[0x1f] = '\0';
        pcVar19[0x20] = '\0';
        pcVar19[0x21] = '\0';
        pcVar19[0x22] = '\0';
        pcVar19[0x23] = '\0';
        pcVar19[0x24] = '\0';
        pcVar19[0x25] = '\0';
        pcVar19[0x26] = '\0';
        pcVar19[0x27] = '\0';
        pcVar19[0] = '\0';
        pcVar19[1] = '\0';
        pcVar19[2] = '\0';
        pcVar19[3] = '\0';
        pcVar19 = pcVar19 + 0x28;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      local_c18 = *(int *)(local_1708 + 8);
      lVar39 = (longlong)local_c18;
      if (0 < local_c18) {
        pcVar19 = local_6d8;
        plVar34 = *(longlong **)(local_1738[0] + 0x18);
        do {
          plVar34 = plVar34 + 1;
          puVar24 = puVar18;
          if (*plVar34 != 0) {
            puVar24 = (undefined8 *)(*plVar34 + 0x10);
          }
          uVar42 = puVar24[1];
          uVar1 = puVar24[2];
          uVar2 = puVar24[3];
          *(undefined8 *)pcVar19 = *puVar24;
          *(undefined8 *)(pcVar19 + 8) = uVar42;
          *(undefined8 *)(pcVar19 + 0x10) = uVar1;
          *(undefined8 *)(pcVar19 + 0x18) = uVar2;
          *(undefined8 *)(pcVar19 + 0x20) = puVar24[4];
          pcVar19 = pcVar19 + 0x28;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
      }
      uVar42 = *(undefined8 *)(local_1748 + 8);
      pcVar19 = local_6d8;
      lVar39 = 10;
      puVar18 = &local_1118;
      do {
        uVar1 = *(undefined8 *)(pcVar19 + 8);
        uVar2 = *(undefined8 *)(pcVar19 + 0x10);
        uVar3 = *(undefined8 *)(pcVar19 + 0x18);
        *puVar18 = *(undefined8 *)pcVar19;
        puVar18[1] = uVar1;
        puVar18[2] = uVar2;
        puVar18[3] = uVar3;
        uVar1 = *(undefined8 *)(pcVar19 + 0x28);
        uVar2 = *(undefined8 *)(pcVar19 + 0x30);
        uVar3 = *(undefined8 *)(pcVar19 + 0x38);
        puVar18[4] = *(undefined8 *)(pcVar19 + 0x20);
        puVar18[5] = uVar1;
        puVar18[6] = uVar2;
        puVar18[7] = uVar3;
        uVar1 = *(undefined8 *)(pcVar19 + 0x48);
        uVar2 = *(undefined8 *)(pcVar19 + 0x50);
        uVar3 = *(undefined8 *)(pcVar19 + 0x58);
        puVar18[8] = *(undefined8 *)(pcVar19 + 0x40);
        puVar18[9] = uVar1;
        puVar18[10] = uVar2;
        puVar18[0xb] = uVar3;
        uVar1 = *(undefined8 *)(pcVar19 + 0x68);
        puVar18[0xc] = *(undefined8 *)(pcVar19 + 0x60);
        puVar18[0xd] = uVar1;
        uVar1 = *(undefined8 *)(pcVar19 + 0x78);
        puVar18[0xe] = *(undefined8 *)(pcVar19 + 0x70);
        puVar18[0xf] = uVar1;
        pcVar19 = pcVar19 + 0x80;
        lVar39 = lVar39 + -1;
        puVar18 = puVar18 + 0x10;
      } while (lVar39 != 0);
      local_c08 = *(undefined8 *)(local_1748 + 0x58);
      uStack_c00 = *(undefined8 *)(local_1748 + 0x60);
      uStack_bf8 = *(undefined8 *)(local_1748 + 0x68);
      uStack_bf0 = *(undefined8 *)(local_1748 + 0x70);
      local_be8 = *(undefined4 *)(local_1738[0] + 0x48);
      local_be4 = *(undefined4 *)(local_1738[0] + 0x4c);
      local_be0 = local_1648;
      local_bdc = local_164c;
      local_c10 = uVar42;
      FUN_18036b0b0(&DAT_180b90058,&local_1118);
      DAT_180b90050 = 1;
      DAT_180b90098 = uVar42;
      DAT_180b900a0 = lStack_16f8;
      DAT_180b900a8 = fStack_1634;
      DAT_180b900ac = fStack_1630;
      DAT_180b900b0 = fStack_162c;
    }
  }
  uVar31 = *local_1498;
  if (0 < (int)uVar31) {
    puVar24 = puVar18;
    puVar35 = puVar18;
    do {
      puVar23 = (undefined8 *)((longlong)local_1488 + (longlong)puVar24);
      uVar1 = puVar23[1];
      uVar2 = puVar23[2];
      uVar3 = puVar23[3];
      uVar42 = *(undefined8 *)((longlong)(local_1488 + 4) + (longlong)puVar24);
      lVar39 = *(longlong *)(*(longlong *)(*local_1490 + 0x18) + 8 + (longlong)puVar35);
      puVar25 = puVar18;
      if (lVar39 != 0) {
        puVar25 = (undefined8 *)(lVar39 + 0x10);
      }
      *puVar25 = *puVar23;
      puVar25[1] = uVar1;
      puVar25[2] = uVar2;
      puVar25[3] = uVar3;
      puVar25[4] = uVar42;
      iVar11 = iVar11 + 1;
      puVar24 = puVar24 + 5;
      puVar35 = puVar35 + 1;
      uVar31 = *local_1498;
    } while (iVar11 < (int)uVar31);
  }
  *(uint *)(*local_1480 + 8) = uVar31;
  lVar39 = *local_1478;
  uVar42 = local_1470[1];
  uVar1 = local_1470[2];
  uVar2 = local_1470[3];
  *(undefined8 *)(lVar39 + 0x58) = *local_1470;
  *(undefined8 *)(lVar39 + 0x60) = uVar42;
  *(undefined8 *)(lVar39 + 0x68) = uVar1;
  *(undefined8 *)(lVar39 + 0x70) = uVar2;
}



