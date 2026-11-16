// FUN_18031ef00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031ef00 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18031ef00(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar12;
  int iVar11;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint *puVar16;
  longlong *plVar17;
  float *pfVar18;
  float *pfVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  float *pfVar23;
  byte bVar24;
  ulonglong uVar25;
  char *pcVar26;
  uint uVar27;
  char cVar28;
  longlong lVar29;
  undefined **ppuVar30;
  int *piVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  char cVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 auVar44 [64];
  undefined1 extraout_var_04 [56];
  undefined1 auVar45 [64];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 auVar46 [64];
  undefined1 extraout_var_08 [56];
  undefined1 auVar47 [16];
  undefined1 *puVar52;
  undefined1 in_ZMM6 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  undefined *puVar54;
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar59 [64];
  undefined1 auStack_21a8 [32];
  double **local_2188;
  double **local_2180;
  double *local_2178;
  double *local_2170;
  double *local_2168;
  double *local_2160;
  double *local_2158;
  double *local_2150;
  double *local_2148;
  double *local_2140;
  longlong *local_2138;
  int local_2130;
  undefined1 local_2128;
  float *local_2120;
  float local_2118;
  undefined4 local_2110;
  undefined8 local_2108;
  undefined8 local_2100;
  undefined4 local_20f8;
  undefined8 local_20f0;
  char local_20e8;
  char local_20e7;
  char local_20e6;
  char local_20e5;
  char local_20e4;
  float local_20e0;
  char *local_20d8;
  undefined1 *puStack_20d0;
  uint local_20c8;
  undefined8 local_20b8;
  undefined5 uStack_20b0;
  uint uStack_20ab;
  undefined2 uStack_20a7;
  undefined1 uStack_20a5;
  bool local_2098 [16];
  undefined8 local_2088;
  undefined8 uStack_2080;
  undefined8 local_2078;
  undefined8 uStack_2070;
  undefined8 local_2068;
  undefined8 uStack_2060;
  undefined8 local_2058;
  undefined8 uStack_2050;
  undefined8 local_2048;
  undefined8 uStack_2040;
  undefined8 local_2038;
  undefined8 uStack_2030;
  undefined8 local_2028;
  undefined8 uStack_2020;
  undefined8 local_2018;
  undefined8 uStack_2010;
  undefined8 local_2008;
  undefined8 uStack_2000;
  undefined8 local_1ff8;
  undefined8 uStack_1ff0;
  undefined8 local_1fe8;
  undefined8 uStack_1fe0;
  undefined8 local_1fd8;
  undefined8 uStack_1fd0;
  undefined8 local_1fc8;
  undefined8 uStack_1fc0;
  undefined8 local_1fb8;
  undefined8 uStack_1fb0;
  undefined8 local_1fa8;
  undefined8 uStack_1fa0;
  undefined1 local_1f98 [16];
  int *local_1f88;
  undefined1 local_1f80;
  undefined1 local_1f7f;
  undefined1 local_1f7e;
  undefined1 local_1f7d;
  undefined1 local_1f7c;
  undefined1 local_1f7b [3];
  int local_1f78;
  undefined8 local_1f70;
  int local_1f60;
  int local_1f5c [4];
  float local_1f4c [3];
  float local_1f40;
  float local_1f3c [3];
  float local_1f30;
  uint local_1f2c;
  char *local_1f28;
  float local_1f20;
  float local_1f1c;
  float local_1f18;
  float local_1f14;
  float local_1f10;
  float local_1f0c;
  undefined4 local_1f08;
  undefined4 local_1f04;
  undefined4 local_1f00;
  float local_1efc;
  char local_1ef8 [1424];
  undefined1 local_1968 [16];
  undefined8 local_1958;
  undefined8 uStack_1950;
  char local_1948 [656];
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
  undefined8 local_1628;
  undefined8 uStack_1620;
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
  undefined1 local_15a8 [16];
  undefined1 local_1598 [16];
  char *local_1588;
  double local_1580;
  double *local_1578;
  double *local_1570;
  double local_1568;
  double local_1560;
  double local_1558;
  double local_1550;
  double local_1548;
  double *local_1540;
  double local_1538;
  double *local_1530;
  double *local_1528;
  double local_1520;
  double local_1518;
  double local_1510;
  double local_1508;
  double local_1500;
  double *local_14f8;
  double *local_14f0;
  double local_14e8;
  double local_14e0;
  double local_14d8;
  double *local_14d0;
  double local_14c8;
  double local_14c0;
  double local_14b8;
  double local_14b0;
  double *local_14a8;
  double *local_14a0;
  double local_1498;
  double local_1490;
  double local_1488;
  double local_1480;
  double local_1478;
  double local_1470;
  double local_1468;
  double local_1460;
  double *local_1458;
  double local_1450;
  longlong local_1448;
  double local_1440;
  double local_1438;
  double local_1430;
  double local_1428;
  double local_1420;
  double *local_1418;
  double *local_1410;
  double local_1408;
  double local_1400;
  double local_13f8;
  double *local_13f0;
  double *local_13e8;
  double local_13e0;
  double local_13d8;
  double local_13d0;
  double local_13c8;
  double *local_13c0;
  double *local_13b8;
  double local_13b0;
  double local_13a8;
  double local_13a0;
  double local_1398;
  double *local_1390;
  double local_1388;
  double local_1380;
  double *local_1378;
  double local_1370;
  double local_1368;
  double *local_1360;
  undefined4 local_1358;
  undefined8 local_1354;
  undefined4 local_134c;
  char *local_1348;
  longlong lStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined1 *puStack_1320;
  undefined8 local_1318;
  undefined1 *puStack_1310;
  undefined8 local_1308;
  undefined1 *puStack_1300;
  char *local_12f8;
  longlong lStack_12f0;
  char *local_12e8;
  longlong lStack_12e0;
  undefined8 local_12d8;
  undefined1 *puStack_12d0;
  undefined8 local_12c8;
  undefined1 *puStack_12c0;
  undefined8 local_12b8;
  undefined1 *puStack_12b0;
  undefined8 local_12a8;
  undefined1 *puStack_12a0;
  undefined8 local_1298;
  undefined1 *puStack_1290;
  char *local_1288;
  longlong lStack_1280;
  char *local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined1 *puStack_1260;
  int local_1258 [4];
  undefined8 local_1248;
  float local_1240;
  undefined8 local_123c;
  float local_1234;
  undefined8 local_1230;
  float local_1228;
  undefined1 local_1224 [8];
  undefined1 local_121c [8];
  undefined1 local_1214 [8];
  undefined1 local_120c [12];
  undefined1 local_1200 [32];
  undefined1 local_11e0 [8];
  undefined1 local_11d8 [8];
  undefined1 local_11d0 [8];
  undefined1 local_11c8 [8];
  undefined1 local_11c0 [8];
  undefined1 local_11b8 [8];
  undefined1 local_11b0 [8];
  undefined1 local_11a8 [8];
  undefined1 local_11a0 [32];
  undefined1 local_1180 [32];
  undefined1 local_1160 [32];
  undefined1 local_1140 [32];
  undefined1 local_1120 [32];
  undefined1 local_1100 [32];
  undefined1 local_10e0 [32];
  undefined1 local_10c0 [32];
  undefined1 local_10a0 [32];
  undefined1 local_1080 [32];
  undefined1 local_1060 [32];
  undefined1 local_1040 [32];
  undefined1 local_1020 [32];
  undefined1 local_1000 [16];
  undefined1 local_ff0 [16];
  undefined1 local_fe0 [32];
  undefined1 local_fc0 [24];
  undefined1 local_fa8 [64];
  undefined1 local_f68 [96];
  undefined1 local_f08 [112];
  undefined1 local_e98 [112];
  undefined1 local_e28 [128];
  undefined1 local_da8 [128];
  undefined1 local_d28 [160];
  undefined1 local_c88 [176];
  undefined1 local_bd8 [192];
  undefined1 local_b18 [192];
  undefined1 local_a58 [208];
  longlong local_988;
  int local_980 [2];
  undefined8 local_978;
  float local_970;
  longlong local_968;
  double *local_960;
  double *local_958;
  longlong local_950;
  byte local_928;
  char local_927 [7];
  undefined8 local_920;
  float local_918;
  float local_910;
  undefined1 local_90c [4];
  undefined8 local_908;
  int local_900;
  int local_8f8;
  float local_8f4;
  float local_8f0;
  float local_8ec;
  float local_8e8;
  float local_8e4;
  uint local_8e0;
  int local_8dc;
  int local_8d8;
  undefined4 local_8d4;
  uint local_8d0;
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int local_8c0;
  float local_8bc;
  float local_8b8;
  undefined4 local_8b4;
  int local_8b0;
  int local_8ac;
  float local_8a8;
  undefined4 local_8a4;
  uint local_8a0;
  float local_89c;
  uint local_898 [2];
  undefined1 local_890 [8];
  undefined1 *local_888;
  undefined4 local_880;
  float local_87c;
  double local_878;
  undefined8 local_870;
  float local_868;
  float local_860;
  float local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined1 **local_850;
  undefined1 *local_848;
  longlong *local_840;
  undefined1 local_838 [8];
  undefined1 *local_830;
  undefined1 local_828 [8];
  undefined1 local_820 [8];
  undefined1 *local_818 [2];
  float local_808;
  undefined1 auStack_804 [4];
  undefined1 auStack_800 [8];
  float local_7f8 [102];
  undefined1 uStack_660;
  undefined2 uStack_65f;
  undefined1 uStack_65d;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined1 uStack_654;
  undefined2 uStack_653;
  undefined1 uStack_651;
  float fStack_650;
  undefined8 uStack_64c;
  undefined8 local_644;
  undefined8 uStack_63c;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined1 uStack_62c;
  undefined2 uStack_62b;
  undefined1 uStack_629;
  float fStack_628;
  undefined1 local_624 [16];
  undefined8 *local_608;
  longlong local_600;
  double **local_5f8;
  float *local_5f0;
  undefined1 *local_5e8;
  float *local_5e0;
  undefined1 *local_5d8;
  float *local_5c8;
  undefined1 *local_5c0;
  char *local_5b8;
  longlong *local_5b0;
  longlong *local_5a8;
  double **local_5a0;
  double **local_598;
  float *local_590;
  undefined1 **local_588;
  float *local_580;
  undefined1 **local_578;
  undefined1 local_568 [32];
  undefined1 local_548 [132];
  float local_4c4;
  float fStack_4c0;
  float local_4b8;
  float local_4b4;
  char local_440;
  undefined1 local_438 [48];
  undefined1 local_408 [48];
  undefined1 local_3d8 [264];
  char local_2d0;
  undefined1 local_2c8 [152];
  uint local_230;
  float local_21c;
  float local_1b8;
  float local_1b4;
  undefined1 local_1b0 [32];
  float local_190 [8];
  int local_170 [6];
  int local_158 [4];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [8];
  undefined1 auStack_130 [8];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined1 local_38 [16];
  
  local_38 = in_ZMM6._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_21a8;
  uVar27 = 0;
  local_20c8 = 0;
  if (((DAT_180cc8668 == 1) || (DAT_180cc87b8 != '\0')) && (DAT_180cc8820 != '\0')) {
    cVar34 = '\x01';
  }
  else {
    cVar34 = '\0';
  }
  if ((DAT_180cc8668 == 1) && (DAT_180cc8888 == '\0')) {
    DAT_180bbeabe = DAT_180cc8668;
LAB_18031eff0:
    if ((DAT_180cc86e8 == '\0') || (DAT_180bbeabe != 0)) goto LAB_18031f001;
    bVar3 = true;
  }
  else {
    DAT_180bbeabe = 0;
    if (DAT_180cc8668 == 1) goto LAB_18031eff0;
LAB_18031f001:
    bVar3 = false;
  }
  local_888 = &DAT_1808e3d20;
  local_850 = &local_888;
  local_848 = &DAT_1808e3d20;
  local_840 = &local_988;
  if (param_2 == 0) {
    local_968 = 0;
  }
  else {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    local_968 = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      local_968 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
  }
  local_20e4 = cVar34;
  local_988 = param_2;
  FUN_180180d50(&DAT_180bb8890,&local_958);
  if ((local_968 == 0) || (local_950 == 0)) {
    pcVar26 = "no pawn";
    goto LAB_180329ac0;
  }
  iVar9 = FUN_18032a950(&local_1f80);
  cVar6 = *(char *)(iVar9 + local_950);
  iVar9 = FUN_18032aa50(&local_1f7f);
  local_928 = *(byte *)(iVar9 + local_950) & 1;
  if (((cVar6 == '\0') || ((cVar6 - 7U & 0xfd) == 0)) || (DAT_180b900c0 != '\0')) {
    FUN_18032a330(&local_850,"move type / edgebug");
    DAT_1808e3d23 = 0;
  }
  auVar46 = ZEXT864(0);
  if (local_928 == 0) {
LAB_18031fc9c:
    DAT_1808e3d22 = '\0';
    _DAT_1808e3d31 = _DAT_1808e3d31 & 0xffff00;
    if (DAT_1808e3d20 != '\0') {
      DAT_1808e3da0 = DAT_1808e3da0 + 1;
    }
  }
  else {
    if ((DAT_1808e3d6c != '\0') && (0 < DAT_1808e3da0)) {
      if (DAT_1808e3d6d == '\0') {
        local_2088 = 0xdb35e39b27e1c185;
        uStack_2080 = 0xa05181ee77d57a06;
        local_2078 = 0x929654b1461b7377;
        uStack_2070 = 0xa5cea54bfef7110;
        local_2068 = 0xa70c9f7f916b7e19;
        uStack_2060 = 0x2b2d6d82aa402c0a;
        local_2058 = 0xc064ed9510bc010b;
        uStack_2050 = 0xfec09918395f26c4;
        local_2048 = 0x835e2313e2c48f8d;
        uStack_2040 = 0xf863c3261a551f0e;
        local_2038 = 0x56a0bc092c25563f;
        uStack_2030 = 0x67ff882c0a9bdf38;
        local_2028 = 0xe9fbbd57d9292e61;
        uStack_2020 = 0x24c1d5fafa9ec992;
        local_2018 = 0xe0a313cd38802513;
        uStack_2010 = 0x3a86d390ee208d6c;
        local_2008 = 0x95484dcb29dcfd95;
        uStack_2000 = 0xc5f2049e64fab916;
        local_1ff8 = 0x99be47e160dada07;
        local_2108 = 0x1047a904a2394520;
        uStack_1ff0 = 0x1047a904a2394520;
        builtin_strncpy(local_1ef8 + 0x460,
                        "[pixelsurf-wall] PREDICTION MISS cmd={}: the engine promised a catch {} commands after the jump, the hull was back on the ground after {} without one\n"
                        ,0x97);
        local_1ef8[0x4f7] = '\0';
        local_1ef8[0x4f8] = '\0';
        local_1ef8[0x4f9] = '\0';
        local_1ef8[0x4fa] = '\0';
        local_1ef8[0x4fb] = '\0';
        local_1ef8[0x4fc] = '\0';
        local_1ef8[0x4fd] = '\0';
        local_1ef8[0x4fe] = '\0';
        local_1ef8[0x4ff] = '\0';
        local_20d8 = local_1ef8 + 0x460;
        local_1348 = local_20d8;
        lVar14 = -1;
        do {
          puStack_20d0 = (undefined1 *)(lVar14 + 1);
          lVar29 = lVar14 + 0x461;
          lVar14 = (longlong)puStack_20d0;
        } while (local_1ef8[lVar29] != '\0');
        lStack_1340 = (longlong)puStack_20d0;
        FUN_180333330(&local_20d8,local_988 + 8,&DAT_1808e3d68,&DAT_1808e3da0);
        if (DAT_1808e3d6d == '\0') {
          FUN_180329b50(&local_888,"prediction-miss");
        }
      }
      _DAT_1808e3d6c = _DAT_1808e3d6c & 0xff00;
    }
    if (local_928 == 0) goto LAB_18031fc9c;
    if (0 < (int)DAT_1808e3d44) {
      local_2088 = 0xdb35e39b27e1c185;
      uStack_2080 = 0xa05181ee77d57a06;
      local_2078 = 0x929654b1461b7377;
      uStack_2070 = 0xa5cea54bfef7110;
      local_2068 = 0xa70c9f7f916b7e19;
      uStack_2060 = 0x2b2d6d82aa402c0a;
      local_2058 = 0xc064ed9510bc010b;
      uStack_2050 = 0xfec09918395f26c4;
      local_2048 = 0x835e2313e2c48f8d;
      uStack_2040 = 0xf863c3261a551f0e;
      local_2038 = 0x56a0bc092c25563f;
      local_2108 = 0x67ff882c0a9bdf38;
      uStack_2030 = 0x67ff882c0a9bdf38;
      builtin_strncpy(local_1ef8 + 0xc0,
                      "[pixelsurf-wall] RIDE END cmd={} held {} commands, the hull is on the ground again\n"
                      ,0x54);
      local_1ef8[0x114] = '\0';
      local_1ef8[0x115] = '\0';
      local_1ef8[0x116] = '\0';
      local_1ef8[0x117] = '\0';
      local_1ef8[0x118] = '\0';
      local_1ef8[0x119] = '\0';
      local_1ef8[0x11a] = '\0';
      local_1ef8[0x11b] = '\0';
      local_1ef8[0x11c] = '\0';
      local_1ef8[0x11d] = '\0';
      local_1ef8[0x11e] = '\0';
      local_1ef8[0x11f] = '\0';
      local_20d8 = local_1ef8 + 0xc0;
      local_12e8 = local_20d8;
      lVar14 = -1;
      do {
        puStack_20d0 = (undefined1 *)(lVar14 + 1);
        lVar29 = lVar14 + 0xc1;
        lVar14 = (longlong)puStack_20d0;
      } while (local_1ef8[lVar29] != '\0');
      lStack_12e0 = (longlong)puStack_20d0;
      FUN_1803334a0(&local_20d8,local_988 + 8,&DAT_1808e3d44);
      FUN_180329b50(&local_888,"landed");
      DAT_1808e3d44 = 0;
    }
    if (local_928 == 0) goto LAB_18031fc9c;
    DAT_1808e3d23 = '\0';
    _DAT_1808e3d98 = 0;
    DAT_1808e3da0 = 0;
    DAT_1808e3d30 = '\0';
    _DAT_1808e3d38 = auVar46._0_4_;
    _DAT_1808e3d84 = -1;
    DAT_1808e3d8c = '\0';
    DAT_1808e3d48 = -1;
    DAT_1808e3d70 = 0;
  }
  auVar59 = ZEXT464(0x40800000);
  FUN_18030ad50(auVar59._0_8_);
  iVar9 = FUN_18032ab50(&local_1f7e);
  local_960 = *(double **)(iVar9 + local_950);
  if (local_960 == (double *)0x0) {
    pcVar26 = "no services";
    goto LAB_180329ac0;
  }
  puVar13 = (undefined8 *)FUN_18030a970(local_fc0);
  _DAT_1808e3ab0 = *puVar13;
  uRam00000001808e3ab8 = puVar13[1];
  DAT_1808e3ac0 = *(undefined4 *)(puVar13 + 2);
  DAT_180bbeabb = 1;
  if (DAT_180b8e111 == '\0') {
    iVar9 = FUN_18032ac50(&local_1f7d);
    local_978 = *(ulonglong *)(iVar9 + local_950);
    local_970 = *(float *)((ulonglong *)(iVar9 + local_950) + 1);
  }
  else {
    local_970 = DAT_180b8e17c;
    local_978 = DAT_180b8e174;
  }
  local_920 = DAT_180b8e168;
  local_918 = DAT_180b8e170;
  iVar9 = FUN_18032ad50(&local_1f7c);
  lVar14 = *(longlong *)(iVar9 + local_950);
  if (lVar14 != 0) {
    iVar9 = FUN_18032ae50(local_1f7b);
    local_870 = *(ulonglong *)(iVar9 + lVar14);
    local_868 = *(float *)((longlong)iVar9 + 8 + lVar14);
    cVar6 = FUN_18030ada0(&local_870);
    if (cVar6 != '\0') {
      if (1.0 < local_870._4_4_ * local_870._4_4_ + (float)local_870 * (float)local_870 +
                local_868 * local_868) {
        local_920 = local_870;
        local_918 = local_868;
      }
    }
  }
  auVar48 = ZEXT464(0x3f800000);
  cVar6 = FUN_18030ada0(&local_978);
  if ((cVar6 != '\0') && (cVar6 = FUN_18030ada0(&local_920), cVar6 != '\0')) {
    if (auVar48._0_4_ <
        (float)local_920 * (float)local_920 + local_920._4_4_ * local_920._4_4_ +
        local_918 * local_918) {
      fVar38 = -1.0;
      if ((((local_928 != 0) || (DAT_1808e3d20 == '\0')) || (-1.0 <= local_970)) ||
         ((local_970 <= -20.0 ||
          (fVar35 = (float)FUN_1801c7700(local_970 - DAT_1808e3db0), 1.5 < fVar35)))) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (((-8.293333 <= local_970) && (local_970 <= -5.62895)) || (local_927[0] = '\0', bVar7)) {
        local_927[0] = '\x01';
      }
      local_2100 = FUN_1803032c0(local_950,local_960);
      local_440 = '\0';
      local_2d0 = '\0';
      fVar35 = 3.0;
      local_910 = 3.0;
      fVar37 = 37.0;
      local_8f0 = 37.0;
      local_608 = &local_920;
      local_5f8 = &local_960;
      local_5f0 = &local_8f0;
      local_5e8 = local_3d8;
      local_5e0 = &local_910;
      local_5d8 = local_548;
      local_600 = local_2100;
      if (*(char *)(local_2100 + 0x48) != '\0') {
        if (((DAT_1808e3d20 == '\0') || (DAT_1808e3dc4 == '\0')) ||
           (7 < (ulonglong)(*(longlong *)(local_988 + 8) - (longlong)DAT_1808e3dc8))) {
LAB_1803200b8:
          cVar6 = FUN_180303860(0x48);
          if (cVar6 != '\0') {
            FUN_180334700(local_548);
            FUN_180334700(local_3d8);
            iVar9 = 0;
            local_910 = fVar35;
            local_8f0 = fVar37;
            do {
              FUN_18032af50(&local_608,iVar9);
              iVar9 = iVar9 + 1;
            } while (iVar9 < 0x48);
            DAT_1808e3dc8 = *(int *)(local_988 + 8);
          }
          if (local_440 == '\0') {
            DAT_1808e3dc4 = '\0';
            goto LAB_18032017b;
          }
        }
        else {
          auVar48 = ZEXT464(0x41a00000);
          uVar10 = FUN_180309c00(0x48,auVar48._0_8_);
          cVar6 = FUN_180303860(uVar10);
          if (cVar6 != '\0') {
            iVar9 = 0;
            auVar53 = ZEXT1664(_DAT_18086dba0);
            fVar57 = 360.0;
            fVar39 = 72.0;
            do {
              uVar36 = FUN_180308020(((float)iVar9 * fVar57) / fVar39 - DAT_1808e3dc0);
              if ((float)(uVar36 & auVar53._0_4_) <= auVar48._0_4_) {
                FUN_18032af50(&local_608,iVar9);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 0x48);
          }
          if (local_440 == '\0') goto LAB_1803200b8;
        }
        fVar37 = (float)FUN_180636c80(CONCAT44(0x80000000,-local_4b4),
                                      CONCAT44(0x80000000,-local_4b8));
        DAT_1808e3dc0 = (float)FUN_180308020(fVar37 * 57.29578);
        DAT_1808e3dc4 = '\x01';
      }
LAB_18032017b:
      auVar48 = ZEXT464(DAT_180b0dfc8._4_4_);
      bVar24 = *(byte *)(local_988 + 0x60) >> 1 & 1;
      if (bVar24 == 0) {
        DAT_180c6f3dc = '\0';
      }
      else if (DAT_180c6f3dd == 0) {
        DAT_180c6f3dc = '\x01';
      }
      cVar6 = DAT_180c6f3dc;
      fVar37 = 1.0;
      if (DAT_180bda1bc <= fVar35) {
        if (DAT_180bda1bc <= 2.0) {
          uVar25 = (ulonglong)((1.0 < DAT_180bda1bc) + 1);
        }
        else {
          uVar25 = 3;
        }
      }
      else {
        uVar25 = 4;
      }
      local_1f78 = (int)uVar25;
      if ((*(longlong *)(local_988 + 8) % (longlong)uVar25 == 0) ||
         (*(longlong *)(local_988 + 8) <= (longlong)DAT_1808e3d5c)) {
        cVar28 = '\x01';
      }
      else {
        cVar28 = '\0';
      }
      DAT_1808e3d90 = 0;
      _DAT_1808e3d31 = _DAT_1808e3d31 & 0xffff00;
      fVar57 = 90.0;
      auVar53 = ZEXT464(0x3c800000);
      DAT_180c6f3dd = bVar24;
      local_20e7 = DAT_180c6f3dc;
      local_20e6 = cVar28;
      if (local_928 != 0) {
        if (local_440 != '\0') {
          auVar43 = vpcmpeqd_avx(ZEXT116(DAT_180bbeabe),SUB6416(ZEXT464(0),0));
          auVar43 = vblendvps_avx(SUB6416(ZEXT464(0x40000000),0),SUB6416(ZEXT464(0x3eb33333),0),
                                  auVar43);
          if (local_910 <= auVar43._0_4_) {
            lVar14 = FUN_1800ef4a0(local_548);
            auVar49 = ZEXT464(*(uint *)(lVar14 + 0x90));
            lVar14 = FUN_1800ef4a0(local_548);
            uVar15 = FUN_18026ba30(local_1224,auVar49._0_8_,*(undefined4 *)(lVar14 + 0x94));
            puVar13 = (undefined8 *)FUN_180450f70(uVar15,local_121c);
            _DAT_1808e3db8 = *puVar13;
            if (DAT_1808e3d26 == '\0') {
              if (DAT_1808e3d20 == '\0') {
                auVar49._0_8_ = FUN_18031e0b0(&DAT_1808e3db8,&local_978,auVar48._0_8_);
                auVar49._8_56_ = extraout_var;
                auVar48 = ZEXT1664(auVar49._0_16_);
              }
              else {
                auVar48 = ZEXT464((uint)DAT_1808e3db4);
              }
            }
            else {
              auVar48 = ZEXT464((uint)DAT_1808e3d28);
            }
            auVar50._0_8_ = FUN_18031de10(&DAT_1808e3db8,auVar48._0_8_);
            auVar50._8_56_ = extraout_var_00;
            auVar49 = ZEXT1664(auVar50._0_16_);
            if ((DAT_1808e3d20 == '\0') && (DAT_1808e3d26 == '\0')) {
              FUN_180244aa0((float)auVar50._0_8_ - auVar48._0_4_);
              fVar38 = (float)FUN_1801c7700();
              if (fVar57 < fVar38) {
                pcVar26 = "view too far from the wall tangent";
                goto LAB_180329ac0;
              }
            }
            uVar15 = auVar49._0_8_;
            if (0.08 < local_910) {
              local_1f5c[3] = 0x3d4ccccd;
              local_1f3c[0] = local_910 * fVar35;
              local_1f40 = fVar35;
              puVar16 = (uint *)FUN_1800e75c0(local_1f3c,local_1f5c + 3,&local_1f40);
              uVar15 = auVar49._0_8_;
              uVar25 = (ulonglong)*puVar16;
            }
            else {
              uVar25 = auVar46._0_8_;
            }
            DAT_1808e3db4 = (float)FUN_18031df20(uVar15,&DAT_1808e3db8,uVar25);
            _DAT_1808e3d20 = 0x101;
            DAT_1808e3d94 = 0;
            _DAT_1808e3d25 = 0;
            if (DAT_180cc87b8 != '\0') {
              if (cVar34 == '\0') {
                if (DAT_1808e3d22 == '\0') {
                  fVar38 = (float)FUN_180450df0(&local_978);
                  if (240.0 <= fVar38) {
                    FUN_18031dff0(local_988,local_968,auVar53._0_8_);
                    DAT_1808e3d22 = '\x01';
                  }
                }
              }
            }
            goto LAB_180321c7e;
          }
        }
        if (bVar3) {
          fVar57 = 75.0;
          if (local_2d0 != '\0') {
            fVar39 = (float)FUN_180450df0(&local_978);
            if (60.0 <= fVar39) {
              lVar14 = FUN_1800ef4a0(local_3d8);
              auVar59 = ZEXT464(*(uint *)(lVar14 + 0x90));
              lVar14 = FUN_1800ef4a0(local_3d8);
              uVar15 = FUN_18026ba30(local_1214,auVar59._0_8_,*(undefined4 *)(lVar14 + 0x94));
              FUN_180450f70(uVar15,local_890);
              if (DAT_1808e3d26 == '\0') {
                if (DAT_1808e3d20 == '\0') {
                  auVar59._0_8_ = FUN_18031e0b0(local_890,&local_978,auVar48._0_8_);
                  auVar59._8_56_ = extraout_var_01;
                  auVar59 = ZEXT1664(auVar59._0_16_);
                }
                else {
                  auVar59 = ZEXT464((uint)DAT_1808e3db4);
                }
              }
              else {
                auVar59 = ZEXT464((uint)DAT_1808e3d28);
              }
              auVar51._0_8_ = FUN_18031de10(local_890,auVar59._0_8_);
              auVar51._8_56_ = extraout_var_02;
              auVar53 = ZEXT1664(auVar51._0_16_);
              if (DAT_1808e3d26 == '\0') {
                FUN_180244aa0((float)auVar51._0_8_ - auVar59._0_4_);
                fVar39 = (float)FUN_1801c7700();
                if (fVar57 < fVar39) goto LAB_180321105;
              }
              local_1f3c[1] = 28.0;
              local_1f30 = local_8f0;
              local_1f3c[2] = fVar35;
              puVar16 = (uint *)FUN_1800e75c0(&local_1f30,local_1f3c + 2,local_1f3c + 1);
              uVar15 = auVar53._0_8_;
              uVar27 = *puVar16;
              auVar59 = ZEXT464(uVar27);
              auVar56 = ZEXT416(uVar27);
              fVar35 = 0.015625;
              auVar43 = ZEXT416(uVar27);
              if (cVar34 == '\0') {
LAB_180320fc9:
                auVar56 = auVar43;
              }
              else {
                if (cVar28 == '\0') goto LAB_180320fc9;
                if (4 < *(longlong *)(local_988 + 8) - (longlong)DAT_1808e3d78) {
                  DAT_1808e3d78 = (int)*(longlong *)(local_988 + 8);
                  DAT_1808e3d80 = -1;
                  local_2100 = CONCAT44(0x41200000,uVar27);
                  local_20f8 = 0x41b00000;
                  local_1258[0] = 0;
                  local_1258[1] = 6;
                  local_1258[2] = 0xe;
                  local_1258[3] = 0x1a;
                  iVar9 = 0;
                  pfVar23 = (float *)&local_2100;
                  DAT_1808e3d7c = fVar38;
                  do {
                    auVar43 = auVar59._0_16_;
                    uVar15 = auVar53._0_8_;
                    if (-1 < DAT_1808e3d80) break;
                    if ((iVar9 == 0) ||
                       (fVar38 = (float)FUN_1801c7700(*pfVar23 - auVar59._0_4_), fVar37 <= fVar38))
                    {
                      piVar31 = local_1258;
                      auVar48 = ZEXT464((uint)*pfVar23);
                      do {
                        iVar11 = *piVar31;
                        local_8ac = 0;
                        local_880 = auVar46._0_4_;
                        local_8dc = iVar11;
                        uVar10 = FUN_18031df20(auVar53._0_8_,local_890,auVar48._0_8_);
                        local_2110 = 0xffffffff;
                        local_2118 = auVar46._0_4_;
                        local_2120 = (float *)0x0;
                        local_2128 = 0;
                        local_2138 = (longlong *)0x0;
                        local_2140 = (double *)0x0;
                        local_2148 = (double *)((ulonglong)local_2148 & 0xffffffff00000000);
                        local_2150 = (double *)CONCAT44(local_2150._4_4_,0xffffffff);
                        local_2158 = (double *)CONCAT44(local_2158._4_4_,fVar35);
                        local_2160 = (double *)&local_880;
                        local_2168 = (double *)&local_8ac;
                        local_2170 = (double *)CONCAT44(local_2170._4_4_,iVar11 + 0x30);
                        local_2178 = (double *)CONCAT44(local_2178._4_4_,3);
                        local_2180 = (double **)CONCAT71(local_2180._1_7_,1);
                        local_2188 = (double **)CONCAT44(local_2188._4_4_,uVar10);
                        local_2130 = iVar11;
                        cVar34 = FUN_18031e430(local_988,local_968,&local_958,local_960);
                        if (cVar34 != '\0') {
                          DAT_1808e3d7c = auVar48._0_4_;
                          DAT_1808e3d80 = local_8dc;
                          fVar38 = (float)FUN_180450df0(&local_978);
                          lVar14 = local_988;
                          local_14e8 = (double)fVar38;
                          local_14e0 = (double)local_918;
                          local_14d8 = (double)local_920._4_4_;
                          local_14d0 = (double *)(double)(float)local_920;
                          local_1f60 = local_8ac - local_8dc;
                          local_14c8 = (double)auVar48._0_4_;
                          local_15a8._8_8_ = 0x2d23cc61d24a6509;
                          local_15a8._0_8_ = 0xe4d876cf5aa1f67a;
                          local_1598._8_8_ = 0x91e97532caa6fc1a;
                          local_1598._0_8_ = 0x9a657cc97e029352;
                          local_2088 = 0xdb35e39b27e1c185;
                          uStack_2080 = 0xa05181ee77d57a06;
                          local_2078 = 0x929654b1461b7377;
                          uStack_2070 = 0xa5cea54bfef7110;
                          local_2068 = 0xa70c9f7f916b7e19;
                          uStack_2060 = 0x2b2d6d82aa402c0a;
                          local_2058 = 0xc064ed9510bc010b;
                          uStack_2050 = 0xfec09918395f26c4;
                          local_2048 = 0x835e2313e2c48f8d;
                          uStack_2040 = 0xf863c3261a551f0e;
                          local_2038 = 0x56a0bc092c25563f;
                          uStack_2030 = 0x67ff882c0a9bdf38;
                          local_2028 = 0xe9fbbd57d9292e61;
                          uStack_2020 = 0x24c1d5fafa9ec992;
                          local_2018 = 0xe0a313cd38802513;
                          uStack_2010 = 0x3a86d390ee208d6c;
                          local_2008 = 0x95484dcb29dcfd95;
                          uStack_2000 = 0xc5f2049e64fab916;
                          local_1ff8 = 0x99be47e160dada07;
                          uStack_1ff0 = 0x1047a904a2394520;
                          local_1fe8 = 0x9a6f01af4f2ca929;
                          local_2108 = 0x91e97532caa6fc1a;
                          uStack_1fe0 = 0x91e97532caa6fc1a;
                          local_1638 = 0x75736c657869705b;
                          uStack_1630 = 0x5d6c6c61772d6672;
                          local_1628 = 0x43414f5250504120;
                          uStack_1620 = 0x7d7b3d646d632048;
                          local_1618 = 0x3a7b206e72757420;
                          uStack_1610 = 0x676564207d66302e;
                          local_1608 = 0x6874206f746e6920;
                          uStack_1600 = 0x202c6c6c61772065;
                          local_15f8 = 0x206e6920706d756a;
                          uStack_15f0 = 0x616d6d6f63207d7b;
                          local_15e8 = 0x746163282073646e;
                          uStack_15e0 = 0x6f63207d7b206863;
                          local_15d8 = 0x612073646e616d6d;
                          uStack_15d0 = 0x6568742072657466;
                          local_15c8 = 0x662029706d756a20;
                          uStack_15c0 = 0x6769726f206d6f72;
                          local_15b8 = 0x312e3a7b283d6e69;
                          uStack_15b0 = 0x66312e3a7b2c7d66;
                          auVar56._8_8_ = 0x1047a904a2394520;
                          auVar56._0_8_ = 0x99be47e160dada07;
                          local_15a8 = auVar56 ^ local_15a8;
                          auVar42._8_8_ = 0x91e97532caa6fc1a;
                          auVar42._0_8_ = 0x9a6f01af4f2ca929;
                          local_1598 = auVar42 ^ local_1598;
                          plVar17 = (longlong *)FUN_18015b110(local_ff0,&local_1638);
                          local_20d8 = (char *)*plVar17;
                          puStack_20d0 = (undefined1 *)plVar17[1];
                          local_2168 = &local_14e8;
                          local_2170 = &local_14e0;
                          local_2178 = &local_14d8;
                          local_2180 = &local_14d0;
                          local_2188 = (double **)&local_1f60;
                          FUN_180333710(&local_20d8,lVar14 + 8,&local_14c8,&local_8dc);
                          break;
                        }
                        piVar31 = piVar31 + 1;
                      } while (piVar31 != (int *)&local_1248);
                    }
                    auVar43 = auVar59._0_16_;
                    uVar15 = auVar53._0_8_;
                    iVar9 = iVar9 + 1;
                    pfVar23 = pfVar23 + 1;
                  } while (iVar9 < 3);
                  cVar34 = local_20e4;
                  cVar6 = local_20e7;
                  goto LAB_180320fc9;
                }
              }
              uVar22 = auVar56._0_8_;
              if (auVar46._0_4_ <= DAT_1808e3d7c) {
                auVar47._8_8_ = 0;
                auVar47._0_8_ = *(longlong *)(local_988 + 8) - (longlong)DAT_1808e3d78;
                auVar43 = vpcmpgtq_avx(SUB6416(ZEXT864(8),0),auVar47);
                auVar43 = vblendvps_avx(auVar56,ZEXT416((uint)DAT_1808e3d7c),auVar43);
                uVar22 = auVar43._0_8_;
              }
              uVar15 = FUN_18031df20(uVar15,local_890,uVar22);
              DAT_1808e3d3c = (float)uVar15;
              _DAT_1808e3d31 = CONCAT12(DAT_1808e3d33,0x101);
              if (cVar34 != '\0') {
                if ((DAT_1808e3d80 == 0) &&
                   ((longlong)DAT_1808e3d78 == *(longlong *)(local_988 + 8))) {
                  DAT_1808e3d90 = 2;
                  DAT_1808e3d22 = '\x01';
                  DAT_1808e3d30 = '\x01';
                  _DAT_1808e3d84 = CONCAT44(0xffffffff,DAT_1808e3d84);
                  DAT_1808e3d8c = '\0';
                  DAT_1808e3d2c = fVar35;
                }
                else if (cVar6 == '\0') {
                  DAT_1808e3d90 = 1;
                }
              }
              local_2168 = (double *)CONCAT44(local_2168._4_4_,auVar46._0_4_);
              local_2170 = (double *)CONCAT71(local_2170._1_7_,1);
              local_2178 = (double *)((ulonglong)local_2178 & 0xffffffffffffff00);
              local_2180 = (double **)((ulonglong)local_2180 & 0xffffffffffffff00);
              local_2188 = (double **)CONCAT71(local_2188._1_7_,1);
              DAT_1808e3db4 = DAT_1808e3d3c;
              FUN_18031e220(local_988,local_960,uVar15,1);
              if (DAT_1808e3d90 != 1) {
                if (DAT_1808e3d90 == 2) {
                  FUN_18031dff0(local_988,local_968,DAT_1808e3d2c);
                }
              }
              goto LAB_1803219a8;
            }
LAB_180321105:
            if (local_2d0 != '\0') goto LAB_1803219c4;
          }
          if ((cVar34 != '\0') && (cVar34 = FUN_180334710(&DAT_180bda1c0), cVar34 == '\0')) {
            FUN_18026ba30(local_828,local_920 & 0xffffffff,local_920._4_4_);
            fVar38 = (float)FUN_180450df0(&local_978);
            fVar35 = 57.295776;
            if (80.0 <= fVar38) {
              fVar38 = (float)FUN_180636c80(local_978._4_4_,local_978 & 0xffffffff);
              auVar48 = ZEXT464((uint)(fVar38 * fVar35));
            }
            pfVar23 = (float *)0x0;
            auVar59 = ZEXT464(0x4e6e6b28);
            auVar53 = ZEXT1664(auVar46._0_16_);
            pfVar18 = (float *)FUN_180334740(&DAT_180bda1c0);
            pfVar19 = (float *)FUN_180334730(&DAT_180bda1c0);
            if (pfVar18 != pfVar19) {
              fVar37 = 16.0;
              fVar38 = 12.0;
              do {
                fVar39 = (float)FUN_1801c7700(pfVar18[6] - local_918);
                if (fVar39 <= fVar37) {
                  uVar15 = FUN_180450f50(pfVar18 + 2,local_120c,0x43020000);
                  uVar15 = FUN_180450f20(pfVar18,local_11d8,uVar15);
                  uVar22 = FUN_180450f50(pfVar18 + 4,local_11d0,0x42200000);
                  FUN_180450ef0(uVar15,local_820,uVar22);
                  FUN_180450f20(local_820,&local_858,local_828);
                  auVar44._0_8_ = FUN_180450df0(&local_858);
                  auVar44._8_56_ = extraout_var_03;
                  auVar49 = ZEXT1664(auVar44._0_16_);
                  if ((float)auVar44._0_8_ <= 1500.0) {
                    if (fVar38 <= (float)auVar44._0_8_) {
                      fVar39 = (float)FUN_180636c80(local_854,local_858);
                      auVar50 = ZEXT464((uint)(fVar39 * fVar35));
                    }
                    else {
                      fVar39 = (float)FUN_180636c80(pfVar18[3],pfVar18[2]);
                      auVar45._0_8_ = FUN_18031df20(fVar39 * fVar35,pfVar18 + 4,0x41600000);
                      auVar45._8_56_ = extraout_var_04;
                      auVar50 = ZEXT1664(auVar45._0_16_);
                    }
                    auVar56 = auVar50._0_16_;
                    auVar43 = auVar49._0_16_;
                    if (fVar38 <= auVar49._0_4_) {
                      FUN_180244aa0(auVar50._0_4_ - auVar48._0_4_);
                      fVar39 = (float)FUN_1801c7700();
                      auVar56 = auVar50._0_16_;
                      auVar43 = auVar49._0_16_;
                      if (fVar57 < fVar39) goto LAB_1803212fc;
                    }
                    if (auVar43._0_4_ < auVar59._0_4_) {
                      auVar59 = ZEXT1664(auVar43);
                      auVar53 = ZEXT1664(auVar56);
                      pfVar23 = pfVar18;
                    }
                  }
                }
LAB_1803212fc:
                pfVar18 = pfVar18 + 7;
              } while (pfVar18 != pfVar19);
              if (pfVar23 != (float *)0x0) {
                DAT_1808e3d26 = 1;
                fVar38 = (float)FUN_180636c80(pfVar23[3],pfVar23[2]);
                cVar34 = local_20e7;
                uVar25 = auVar53._0_8_;
                uVar10 = auVar46._0_4_;
                DAT_1808e3d28 = fVar38 * fVar35;
                DAT_1808e3d3c = auVar53._0_4_;
                _DAT_1808e3d31 = CONCAT12(DAT_1808e3d33,0x101);
                _DAT_1808e3d25 = CONCAT11(DAT_1808e3d26,1);
                DAT_1808e3d90 = (uint)(local_20e7 == '\0');
                plVar17 = (longlong *)(local_988 + 8);
                lVar14 = *plVar17;
                DAT_1808e3db4 = DAT_1808e3d3c;
                if (0x3f < lVar14 - DAT_1808e3da8) {
                  DAT_1808e3da8 = (int)lVar14;
                  local_14b0 = (double)DAT_1808e3d28;
                  local_14a8 = (double *)(double)DAT_1808e3d3c;
                  local_14a0 = (double *)(double)auVar59._0_4_;
                  local_1498 = (double)pfVar23[1];
                  local_1490 = (double)*pfVar23;
                  local_2088 = 0xdb35e39b27e1c185;
                  uStack_2080 = 0xa05181ee77d57a06;
                  local_2078 = 0x929654b1461b7377;
                  uStack_2070 = 0xa5cea54bfef7110;
                  local_2068 = 0xa70c9f7f916b7e19;
                  uStack_2060 = 0x2b2d6d82aa402c0a;
                  local_2058 = 0xc064ed9510bc010b;
                  uStack_2050 = 0xfec09918395f26c4;
                  local_2048 = 0x835e2313e2c48f8d;
                  uStack_2040 = 0xf863c3261a551f0e;
                  local_2038 = 0x56a0bc092c25563f;
                  uStack_2030 = 0x67ff882c0a9bdf38;
                  local_2028 = 0xe9fbbd57d9292e61;
                  uStack_2020 = 0x24c1d5fafa9ec992;
                  local_2018 = 0xe0a313cd38802513;
                  local_2108 = 0x3a86d390ee208d6c;
                  uStack_2010 = 0x3a86d390ee208d6c;
                  local_16b8 = 0x75736c657869705b;
                  uStack_16b0 = 0x5d6c6c61772d6672;
                  local_16a8 = 0x6d63204741524420;
                  uStack_16a0 = 0x206f74207d7b3d64;
                  local_1698 = 0x766f727020656874;
                  uStack_1690 = 0x20746f7073206e65;
                  local_1688 = 0x2c7d66302e3a7b28;
                  uStack_1680 = 0x3a297d66302e3a7b;
                  local_1678 = 0x207d66302e3a7b20;
                  uStack_1670 = 0x62202c7374696e75;
                  local_1668 = 0x7b20676e69726165;
                  uStack_1660 = 0x72202c7d66312e3a;
                  local_1658 = 0x676e6f6c61206e75;
                  uStack_1650 = 0x2e3a7b2077617920;
                  local_1648 = 0xa7d6631;
                  uStack_1640 = 0;
                  plVar20 = (longlong *)FUN_18015b110(local_1000,&local_16b8);
                  local_20d8 = (char *)*plVar20;
                  puStack_20d0 = (undefined1 *)plVar20[1];
                  local_2178 = &local_14b0;
                  local_2180 = &local_14a8;
                  local_2188 = &local_14a0;
                  FUN_180333910(&local_20d8,plVar17,&local_1490,&local_1498);
                  uVar10 = auVar46._0_4_;
                  uVar25 = (ulonglong)(uint)DAT_1808e3d3c;
                }
                local_2168 = (double *)CONCAT44(local_2168._4_4_,uVar10);
                local_2170 = (double *)CONCAT71(local_2170._1_7_,1);
                local_2178 = (double *)((ulonglong)local_2178 & 0xffffffffffffff00);
                local_2180 = (double **)((ulonglong)local_2180 & 0xffffffffffffff00);
                local_2188 = (double **)CONCAT71(local_2188._1_7_,1);
                FUN_18031e220(local_988,local_960,uVar25,1);
                if (cVar34 != '\0') {
                }
LAB_1803219a8:
                FUN_18031e380(local_988,local_968);
              }
            }
          }
        }
LAB_1803219c4:
        pcVar26 = "left the wall on the ground";
        goto LAB_180329ac0;
      }
      if (DAT_1808e3d20 == '\0') {
        if (local_440 == '\0') {
          if (!bVar3) {
            DAT_1808e3d90 = 0;
          }
          if (cVar34 == '\0') {
            DAT_1808e3d90 = 0;
          }
          cVar34 = FUN_180233fc0(local_3d8);
          if (cVar34 == '\0') {
          }
          fVar38 = (float)FUN_180450df0(&local_978);
          if (120.0 <= fVar38) {
            if (local_970 <= -200.0) {
            }
            lVar14 = FUN_1800ef4a0(local_3d8);
            auVar59 = ZEXT464(*(uint *)(lVar14 + 0x90));
            lVar14 = FUN_1800ef4a0(local_3d8);
            uVar15 = FUN_18026ba30(local_11c8,auVar59._0_8_,*(undefined4 *)(lVar14 + 0x94));
            FUN_180450f70(uVar15,local_838);
            fVar38 = (float)FUN_180636c80(local_978._4_4_,local_978 & 0xffffffff);
            fVar38 = fVar38 * 57.295776;
            uVar15 = FUN_18031de10(local_838,fVar38);
            FUN_180244aa0((float)uVar15 - fVar38);
            fVar38 = (float)FUN_1801c7700();
            if (fVar38 <= 60.0) {
              local_1f5c[1] = 0x41400000;
              local_1f5c[2] = 0x3e99999a;
              local_1f4c[0] = local_8f0 * 0.6;
              puVar21 = (undefined4 *)FUN_1800e75c0(local_1f4c,local_1f5c + 2,local_1f5c + 1);
              uVar15 = FUN_18031df20(uVar15,local_838,*puVar21);
              DAT_1808e3d3c = (float)uVar15;
              _DAT_1808e3d31 = 0x10101;
              DAT_1808e3d74 = 1;
              local_2168 = (double *)CONCAT44(local_2168._4_4_,auVar46._0_4_);
              local_2170 = (double *)((ulonglong)local_2170 & 0xffffffffffffff00);
              local_2178 = (double *)CONCAT71(local_2178._1_7_,1);
              local_2180 = (double **)((ulonglong)local_2180 & 0xffffffffffffff00);
              local_2188 = (double **)CONCAT71(local_2188._1_7_,1);
              DAT_1808e3db4 = DAT_1808e3d3c;
              FUN_18031e220(local_988,local_960,uVar15,0);
            }
          }
        }
        lVar14 = FUN_1800ef4a0(local_548);
        auVar49 = ZEXT464(*(uint *)(lVar14 + 0x90));
        lVar14 = FUN_1800ef4a0(local_548);
        uVar15 = FUN_18026ba30(local_11c0,auVar49._0_8_,*(undefined4 *)(lVar14 + 0x94));
        puVar13 = (undefined8 *)FUN_180450f70(uVar15,local_11e0);
        _DAT_1808e3db8 = *puVar13;
        uVar15 = FUN_18031e0b0(&DAT_1808e3db8,&local_978,auVar48._0_8_);
        auVar48._0_8_ = FUN_18031de10(&DAT_1808e3db8,uVar15);
        auVar48._8_56_ = extraout_var_05;
        auVar49 = ZEXT1664(auVar48._0_16_);
        FUN_180244aa0((float)auVar48._0_8_ - (float)uVar15);
        fVar38 = (float)FUN_1801c7700();
        if (fVar57 < fVar38) {
        }
        DAT_1808e3db4 = (float)FUN_18031df20(auVar49._0_8_,&DAT_1808e3db8,auVar46._0_8_);
        _DAT_1808e3d20 = 1;
LAB_180321c78:
        DAT_1808e3d94 = 0;
      }
      else if (local_440 == '\0') {
        if (((local_927[0] != '\0') || (0 < (int)DAT_1808e3d9c)) ||
           ((DAT_1808e3d21 != '\0' && (DAT_1808e3da0 < 0x29)))) goto LAB_180321c78;
        DAT_1808e3d94 = DAT_1808e3d94 + 1;
        if (6 < DAT_1808e3d94) {
          pcVar26 = "wall lost in the air";
          goto LAB_180329ac0;
        }
      }
      else {
        DAT_1808e3d94 = 0;
        lVar14 = FUN_1800ef4a0(local_548);
        auVar48 = ZEXT464(*(uint *)(lVar14 + 0x90));
        lVar14 = FUN_1800ef4a0(local_548);
        uVar15 = FUN_18026ba30(local_11b8,auVar48._0_8_,*(undefined4 *)(lVar14 + 0x94));
        puVar13 = (undefined8 *)FUN_180450f70(uVar15,local_11b0);
        _DAT_1808e3db8 = *puVar13;
        uVar15 = FUN_18031de10(&DAT_1808e3db8,DAT_1808e3db4);
        DAT_1808e3db4 = (float)FUN_18031df20(uVar15,&DAT_1808e3db8,auVar46._0_8_);
      }
LAB_180321c7e:
      DAT_1808e3d3c = DAT_1808e3db4;
      _DAT_1808e3d31 = CONCAT21(1,DAT_1808e3d31);
      DAT_1808e3d34 = auVar46._0_4_;
      DAT_1808e3d74 = '\0';
      auVar48 = ZEXT464((uint)(local_978._4_4_ * local_978._4_4_));
      fVar38 = local_978._4_4_ * local_978._4_4_ + (float)local_978 * (float)local_978;
      if (fVar38 == DAT_1808e3d34) {
        auVar49 = ZEXT1664(auVar46._0_16_);
      }
      else if (fVar38 < 0.0) {
        auVar55._0_8_ = FUN_18061e150(fVar38);
        auVar55._8_56_ = extraout_var_06;
        auVar49 = ZEXT1664(auVar55._0_16_);
      }
      else {
        auVar49 = ZEXT464((uint)SQRT(fVar38));
      }
      local_20e0 = auVar49._0_4_;
      fVar38 = 0.017453292;
      auVar50 = ZEXT464((uint)(DAT_1808e3db4 * 0.017453292));
      fVar35 = (float)FUN_180637540(DAT_1808e3db4 * 0.017453292);
      uVar10 = FUN_180638e00(auVar50._0_8_);
      local_2108 = CONCAT44(local_2108._4_4_,uVar10);
      if (local_928 == 0) {
        auVar59 = ZEXT464((uint)local_20e0);
LAB_180325e2d:
        cVar34 = local_20e6;
        auVar56 = auVar59._0_16_;
        auVar43 = auVar46._0_16_;
        if ((((((DAT_1808e3d20 != '\0') && (local_20e4 != '\0')) && (DAT_180bbeabe == 0)) &&
             (((DAT_1808e3d30 != '\0' || (local_927[0] != '\0')) ||
              ((local_20e6 != '\0' && ((0 < DAT_1808e3da0 && (DAT_1808e3d70 < 3)))))))) &&
            (DAT_1808e3da0 < 0xa1)) && (-250.0 < local_970)) {
          local_1f4c[1] = 1.4013e-44;
          local_1f4c[2] = (float)(0x36 - DAT_1808e3da0);
          pfVar23 = local_1f4c + 1;
          if (9 < (int)local_1f4c[2]) {
            pfVar23 = local_1f4c + 2;
          }
          if (0x30 < (int)local_1f4c[2]) {
            pfVar23 = (float *)&DAT_180701d44;
          }
          local_85c = *pfVar23;
          stack0xfffffffffffff99c = 0;
          uStack_65c = 0;
          uStack_658 = 0;
          uStack_654 = 0;
          uStack_653 = 0;
          uStack_651 = 0;
          fStack_650 = 0.0;
          uStack_64c = 0;
          local_644 = 0;
          uStack_63c = 0;
          uStack_634 = 0;
          uStack_630 = 0;
          uStack_62c = 0;
          uStack_62b = 0;
          uStack_629 = 0;
          fStack_628 = 0.0;
          local_624 = (undefined1  [16])0x0;
          _local_808 = 0x100000000;
          auStack_800 = (undefined1  [8])0x0;
          local_7f8[0] = 0.0;
          local_7f8[1] = 0.0;
          local_7f8[2] = 0.0;
          local_7f8[3] = 0.0;
          local_7f8[4] = 0.0;
          local_7f8[5] = 0.0;
          local_7f8[6] = 0.0;
          local_7f8[7] = 1.4013e-45;
          local_7f8[8] = 1.4013e-45;
          local_7f8[9] = 0.0;
          local_7f8[10] = 0.0;
          local_7f8[0xb] = 0.0;
          local_7f8[0xc] = 1.4013e-45;
          local_7f8[0xd] = 2.8026e-45;
          local_7f8[0xe] = 0.0;
          local_7f8[0xf] = 0.0;
          local_7f8[0x10] = 0.0;
          local_7f8[0x11] = 1.4013e-45;
          local_7f8[0x12] = 0.0;
          local_7f8[0x13] = 1.4013e-45;
          local_7f8[0x14] = 0.0;
          local_7f8[0x15] = 0.3;
          local_7f8[0x16] = 1.4013e-45;
          local_7f8[0x17] = 0.0;
          local_7f8[0x18] = 1.4013e-45;
          local_7f8[0x19] = 0.0;
          local_7f8[0x1a] = -0.3;
          local_7f8[0x1b] = 1.4013e-45;
          local_7f8[0x1c] = 0.0;
          local_7f8[0x1d] = 1.4013e-45;
          local_7f8[0x1e] = 0.0;
          local_7f8[0x1f] = 1.0;
          local_7f8[0x20] = 1.4013e-45;
          local_7f8[0x21] = 0.0;
          local_7f8[0x22] = 1.4013e-45;
          local_7f8[0x23] = 0.0;
          local_7f8[0x24] = -1.0;
          local_7f8[0x25] = 1.4013e-45;
          local_7f8[0x26] = 0.0;
          local_7f8[0x27] = 1.4013e-45;
          local_7f8[0x28] = 0.0;
          local_7f8[0x29] = 3.0;
          local_7f8[0x2a] = 1.4013e-45;
          local_7f8[0x2b] = 0.0;
          local_7f8[0x2c] = 1.4013e-45;
          local_7f8[0x2d] = 0.0;
          local_7f8[0x2e] = -3.0;
          local_7f8[0x2f] = 1.4013e-45;
          local_7f8[0x30] = 0.0;
          local_7f8[0x31] = 1.4013e-45;
          local_7f8[0x32] = 0.0;
          local_7f8[0x33] = 8.0;
          local_7f8[0x34] = 1.4013e-45;
          local_7f8[0x35] = 0.0;
          local_7f8[0x36] = 1.4013e-45;
          local_7f8[0x37] = 0.0;
          local_7f8[0x38] = -8.0;
          local_7f8[0x39] = 1.4013e-45;
          local_7f8[0x3a] = 0.0;
          local_7f8[0x3b] = 1.4013e-45;
          local_7f8[0x3c] = 0.0;
          local_7f8[0x3d] = 16.0;
          local_7f8[0x3e] = 1.4013e-45;
          local_7f8[0x3f] = 0.0;
          local_7f8[0x40] = 1.4013e-45;
          local_7f8[0x41] = 0.0;
          local_7f8[0x42] = -16.0;
          local_7f8[0x43] = 1.4013e-45;
          local_7f8[0x44] = 0.0;
          local_7f8[0x45] = 1.4013e-45;
          local_7f8[0x46] = 0.0;
          local_7f8[0x47] = 0.0;
          local_7f8[0x48] = 1.4013e-45;
          local_7f8[0x49] = 0.0;
          local_7f8[0x4a] = 1.4013e-45;
          local_7f8[0x4b] = 25.0;
          local_7f8[0x4c] = 0.0;
          local_7f8[0x4d] = 1.4013e-45;
          local_7f8[0x4e] = 0.0;
          local_7f8[0x4f] = 1.4013e-45;
          local_7f8[0x50] = 60.0;
          local_7f8[0x51] = -0.05;
          local_7f8[0x52] = 1.4013e-45;
          local_7f8[0x53] = 0.0;
          local_7f8[0x54] = 1.4013e-45;
          local_7f8[0x55] = 0.0;
          local_7f8[0x56] = 0.05;
          local_7f8[0x57] = 1.4013e-45;
          local_7f8[0x58] = 0.0;
          local_7f8[0x59] = 1.4013e-45;
          local_7f8[0x5a] = 0.0;
          local_7f8[0x5b] = -0.15;
          local_7f8[0x5c] = 1.4013e-45;
          local_7f8[0x5d] = 0.0;
          local_7f8[0x5e] = 1.4013e-45;
          local_7f8[0x5f] = 0.0;
          local_7f8[0x60] = 0.15;
          local_7f8[0x61] = 1.4013e-45;
          local_7f8[0x62] = 0.0;
          local_7f8[99] = 1.4013e-45;
          local_7f8[100] = 0.0;
          fVar35 = local_978._4_4_ * local_978._4_4_ + (float)local_978 * (float)local_978;
          if (fVar35 < 0.0) {
            auVar59 = ZEXT1664(auVar43);
            auVar48 = ZEXT1664(auVar56);
            auVar46._0_8_ = FUN_18061e150();
            auVar56 = auVar48._0_16_;
            auVar43 = auVar59._0_16_;
            auVar46._8_56_ = extraout_var_07;
            auVar42 = auVar46._0_16_;
          }
          else {
            auVar42 = ZEXT416((uint)SQRT(fVar35));
          }
          auVar47 = vmaxss_avx(auVar42,SUB6416(ZEXT464(0x3f800000),0));
          auVar42 = vcmpss_avx(auVar43,ZEXT416((uint)((DAT_1808e3db8 * local_978._4_4_ -
                                                      DAT_1808e3dbc * (float)local_978) /
                                                     auVar47._0_4_)),1);
          auVar42 = vblendvps_avx(SUB6416(ZEXT464(0xbf800000),0),SUB6416(ZEXT464(0x3f800000),0),
                                  auVar42);
          auVar48 = ZEXT1664(auVar42);
          auVar53 = ZEXT1664(auVar47);
          auVar49 = ZEXT1664(SUB6416(ZEXT464(0xbf800000),0));
          auVar46 = ZEXT1664(auVar43);
          auVar59 = ZEXT1664(auVar56);
          fVar35 = (float)FUN_180309c30();
          uVar27 = uStack_20ab;
          uStack_20ab = uStack_20ab & 0xffffff;
          uStack_20a7 = 0;
          uStack_20a5 = 0;
          uVar5 = local_20b8._5_2_;
          uVar8 = local_20b8._7_1_;
          stack0xfffffffffffff99c =
               CONCAT17(local_20b8._7_1_,
                        CONCAT25(local_20b8._5_2_,CONCAT14(1,fVar35 * auVar48._0_4_)));
          uStack_65c = 0;
          uStack_658 = CONCAT31((int3)uVar27,1);
          uStack_654 = 0;
          uStack_653 = 0;
          uStack_651 = 0;
          fStack_650 = (float)FUN_180309c30(0x3cc49ba6,auVar53._0_8_);
          fStack_650 = fStack_650 * auVar48._0_4_;
          uStack_20ab = uStack_20ab & 0xffffff;
          uStack_20a7 = 0;
          uStack_20a5 = 0;
          uStack_64c = (ulonglong)CONCAT13(uVar8,CONCAT21(uVar5,1));
          local_644 = (ulonglong)CONCAT41(uStack_20ab,1);
          fVar35 = (float)FUN_180309c30(0x3d449ba6,auVar53._0_8_);
          uVar27 = uStack_20ab;
          uStack_20ab = uStack_20ab & 0xffffff;
          uStack_20a7 = 0;
          uStack_20a5 = 0;
          uStack_63c = CONCAT17(uVar8,CONCAT25(uVar5,CONCAT14(1,fVar35 * auVar48._0_4_)));
          uStack_634 = 0;
          uStack_630 = CONCAT31((int3)uVar27,1);
          uStack_62c = 0;
          uStack_62b = 0;
          uStack_629 = 0;
          fVar35 = (float)FUN_180309c30(0x3dc49ba6,auVar53._0_8_);
          uStack_20ab = uStack_20ab & 0xffffff;
          uStack_20a7 = 0;
          uStack_20a5 = 0;
          fStack_628 = fVar35 * auVar48._0_4_;
          local_624._1_2_ = uVar5;
          local_624[0] = 1;
          local_624[3] = uVar8;
          local_624._4_4_ = 0;
          local_624[8] = 1;
          local_624._9_4_ = uStack_20ab;
          local_624._13_3_ = 0;
          local_830 = &DAT_1808e3d20;
          local_818[0] = &DAT_1808e3d20;
          local_8e8 = auVar46._0_4_;
          local_5c8 = &local_808;
          local_5c0 = &DAT_1808e3d20;
          local_5b8 = local_927;
          local_5b0 = &local_988;
          local_5a8 = &local_968;
          local_5a0 = &local_958;
          local_598 = &local_960;
          local_590 = &local_85c;
          local_588 = &local_830;
          local_580 = &local_8e8;
          local_578 = local_818;
          local_8d4 = 0;
          local_8e4 = auVar46._0_4_;
          local_980[0] = -1;
          local_8e0 = 0xffffffff;
          uVar27 = 0xffffffff;
          auVar48 = ZEXT1664(auVar49._0_16_);
          if (-1 < DAT_1808e3d48) {
            local_8d0 = 0;
            local_2188 = (double **)&local_8d0;
            cVar6 = FUN_18032b410(&local_5c8,DAT_1808e3d48,&local_8d4,&local_8e4);
            if (cVar6 != '\0') {
              local_980[0] = DAT_1808e3d48;
              local_8e0 = local_8d0;
              auVar48 = ZEXT464((uint)local_8e8);
              uVar27 = local_8d0;
            }
          }
          if (local_927[0] == '\0') {
LAB_180326651:
            if ((0 < (int)DAT_1808e3d9c) ||
               ((DAT_1808e3d6c != '\0' && (DAT_1808e3d68 - DAT_1808e3da0 < 9)))) goto LAB_180326678;
            bVar24 = 1;
          }
          else {
            if ((0 < DAT_1808e3d98) && (DAT_1808e3d48 != 4)) {
              local_898[0] = 0;
              local_8b4 = 0;
              local_89c = auVar46._0_4_;
              local_2188 = (double **)local_898;
              cVar6 = FUN_18032b410(&local_5c8,4,&local_8b4,&local_89c);
              if ((cVar6 != '\0') && ((local_980[0] < 0 || (auVar48._0_4_ - 2.0 <= local_8e8)))) {
                local_980[0] = 4;
                auVar48 = ZEXT464((uint)local_8e8);
                local_8e0 = local_898[0];
                local_8d4 = local_8b4;
                local_8e4 = local_89c;
                uVar27 = local_898[0];
              }
            }
            if (local_927[0] == '\0') goto LAB_180326651;
LAB_180326678:
            bVar24 = 0;
          }
          fVar35 = auVar48._0_4_;
          iVar9 = local_980[0];
          if ((local_980[0] < 0) ||
             ((cVar34 != '\0' && (DAT_1808e3da0 % (int)((uint)bVar24 * 2 + 6) == 0)))) {
            _DAT_1808e3ddc = _DAT_1808e3ddc + 1;
            piVar31 = &DAT_180802dd0;
            do {
              iVar11 = *piVar31;
              if ((iVar11 != DAT_1808e3d48) || ((int)uVar27 < 0)) {
                local_8a4 = 0;
                local_8a0 = 0;
                local_8a8 = auVar46._0_4_;
                local_2188 = (double **)&local_8a0;
                cVar34 = FUN_18032b410(&local_5c8,iVar11,&local_8a4,&local_8a8);
                if (cVar34 != '\0') {
                  auVar43 = vpcmpgtd_avx(SUB6416(ZEXT464(0),0),ZEXT416(uVar27));
                  auVar43 = vblendvps_avx(SUB6416(ZEXT464(0x40c00000),0),auVar46._0_16_,auVar43);
                  if (auVar43._0_4_ + auVar48._0_4_ < local_8e8) {
                    auVar48 = ZEXT464((uint)local_8e8);
                    local_8e0 = local_8a0;
                    local_980[0] = iVar11;
                    local_8d4 = local_8a4;
                    local_8e4 = local_8a8;
                    iVar9 = iVar11;
                    goto LAB_18032678e;
                  }
                }
                iVar9 = local_980[0];
              }
LAB_18032678e:
              fVar35 = auVar48._0_4_;
              piVar31 = piVar31 + 1;
            } while (piVar31 != (int *)&DAT_180802e34);
          }
          if (local_927[0] != '\0') {
            uVar27 = DAT_1808e3d44 & 0x80000003;
            if ((int)uVar27 < 0) {
              uVar27 = (uVar27 - 1 | 0xfffffffc) + 1;
            }
            if (uVar27 == 1) {
              local_13a0 = (double)(float)local_920;
              local_1398 = (double)(DAT_1808e3dbc * local_978._4_4_ +
                                   DAT_1808e3db8 * (float)local_978);
              local_1390 = (double *)(double)fVar35;
              local_2088 = 0xdb35e39b27e1c185;
              uStack_2080 = 0xa05181ee77d57a06;
              local_2078 = 0x929654b1461b7377;
              uStack_2070 = 0xa5cea54bfef7110;
              local_2068 = 0xa70c9f7f916b7e19;
              uStack_2060 = 0x2b2d6d82aa402c0a;
              local_2058 = 0xc064ed9510bc010b;
              uStack_2050 = 0xfec09918395f26c4;
              local_2048 = 0x835e2313e2c48f8d;
              uStack_2040 = 0xf863c3261a551f0e;
              local_2038 = 0x56a0bc092c25563f;
              uStack_2030 = 0x67ff882c0a9bdf38;
              local_2028 = 0xe9fbbd57d9292e61;
              uStack_2020 = 0x24c1d5fafa9ec992;
              local_2018 = 0xe0a313cd38802513;
              uStack_2010 = 0x3a86d390ee208d6c;
              local_2008 = 0x95484dcb29dcfd95;
              uStack_2000 = 0xc5f2049e64fab916;
              local_1ff8 = 0x99be47e160dada07;
              local_2108 = 0x1047a904a2394520;
              uStack_1ff0 = 0x1047a904a2394520;
              builtin_strncpy(local_1ef8 + 800,
                              "[pixelsurf-wall] ride-steer cmd={} t={} act={} chosen={} dist={:.3f} lateral_v={:.4f} (u/s, negative = into the wall) x={:.4f} confirm={} searches={}\n"
                              ,0x97);
              local_1ef8[0x3b7] = '\0';
              local_1ef8[0x3b8] = '\0';
              local_1ef8[0x3b9] = '\0';
              local_1ef8[0x3ba] = '\0';
              local_1ef8[0x3bb] = '\0';
              local_1ef8[0x3bc] = '\0';
              local_1ef8[0x3bd] = '\0';
              local_1ef8[0x3be] = '\0';
              local_1ef8[0x3bf] = '\0';
              lVar14 = -1;
              do {
                puStack_20d0 = (undefined1 *)(lVar14 + 1);
                lVar29 = lVar14 + 0x321;
                lVar14 = (longlong)puStack_20d0;
              } while (local_1ef8[lVar29] != '\0');
              local_20d8 = local_1ef8 + 800;
              if (DAT_180bbeabc == '\0') {
                iVar9 = local_980[0];
              }
              else {
                local_2160 = (double *)&DAT_1808e3ddc;
                local_2168 = (double *)&DAT_1808e3d98;
                local_2170 = &local_13a0;
                local_2178 = &local_1398;
                local_2180 = &local_1390;
                local_2188 = (double **)local_980;
                FUN_1803361c0(local_da8,local_988 + 8,&DAT_1808e3d44,&DAT_1808e3d48);
                local_1308 = 9;
                puStack_1300 = local_da8;
                local_20b8 = (char *)0x9;
                uStack_20b0 = SUB85(puStack_1300,0);
                uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_1300 >> 0x28);
                local_1f98._8_8_ = puStack_20d0;
                local_1f98._0_8_ = local_20d8;
                uVar15 = FUN_1801d97f0(local_1140,local_1f98,&local_20b8);
                FUN_18030e280(uVar15);
                FUN_18015c010(local_1140);
                iVar9 = local_980[0];
              }
            }
          }
          cVar34 = DAT_1808e3d30;
          if (iVar9 < 0) {
            DAT_1808e3d30 = '\0';
            DAT_1808e3d48 = -1;
            DAT_1808e3d70 = DAT_1808e3d70 + 1;
            if (cVar34 != '\0') {
              local_1388 = (double)local_970;
              local_2088 = 0xdb35e39b27e1c185;
              uStack_2080 = 0xa05181ee77d57a06;
              local_2078 = 0x929654b1461b7377;
              uStack_2070 = 0xa5cea54bfef7110;
              local_2068 = 0xa70c9f7f916b7e19;
              uStack_2060 = 0x2b2d6d82aa402c0a;
              local_2058 = 0xc064ed9510bc010b;
              uStack_2050 = 0xfec09918395f26c4;
              local_2048 = 0x835e2313e2c48f8d;
              uStack_2040 = 0xf863c3261a551f0e;
              local_2038 = 0x56a0bc092c25563f;
              uStack_2030 = 0x67ff882c0a9bdf38;
              local_2028 = 0xe9fbbd57d9292e61;
              local_2108 = 0x24c1d5fafa9ec992;
              uStack_2020 = 0x24c1d5fafa9ec992;
              builtin_strncpy(local_1ef8 + 0x120,
                              "[pixelsurf-wall] line lost cmd={} air_ticks={} vz={:.2f}: no correction ends in a catch any more\n"
                              ,0x62);
              local_1ef8[0x182] = '\0';
              local_1ef8[0x183] = '\0';
              local_1ef8[0x184] = '\0';
              local_1ef8[0x185] = '\0';
              local_1ef8[0x186] = '\0';
              local_1ef8[0x187] = '\0';
              local_1ef8[0x188] = '\0';
              local_1ef8[0x189] = '\0';
              local_1ef8[0x18a] = '\0';
              local_1ef8[0x18b] = '\0';
              local_1ef8[0x18c] = '\0';
              local_1ef8[0x18d] = '\0';
              local_1ef8[0x18e] = '\0';
              local_1ef8[399] = '\0';
              local_20b8 = local_1ef8 + 0x120;
              local_12f8 = local_20b8;
              lVar14 = -1;
              do {
                lStack_12f0 = lVar14 + 1;
                lVar29 = lVar14 + 0x121;
                lVar14 = lStack_12f0;
              } while (local_1ef8[lVar29] != '\0');
              uStack_20b0 = (undefined5)lStack_12f0;
              uStack_20ab._0_3_ = (undefined3)((ulonglong)lStack_12f0 >> 0x28);
              FUN_180333f90(&local_20b8,local_988 + 8,&DAT_1808e3da0,&local_1388);
            }
          }
          else {
            if (iVar9 != DAT_1808e3d48) {
              _DAT_1808e3dd8 = _DAT_1808e3dd8 + 1;
              if ((iVar9 != DAT_1808e3d48) && (iVar9 != 0)) {
                local_1380 = (double)local_8e4;
                lVar29 = (longlong)iVar9;
                local_1378 = (double *)
                             (double)*(float *)((longlong)local_818 + lVar29 * 0x14 + 0x10);
                local_2088 = 0xdb35e39b27e1c185;
                uStack_2080 = 0xa05181ee77d57a06;
                local_2078 = 0x929654b1461b7377;
                uStack_2070 = 0xa5cea54bfef7110;
                local_2068 = 0xa70c9f7f916b7e19;
                uStack_2060 = 0x2b2d6d82aa402c0a;
                local_2058 = 0xc064ed9510bc010b;
                uStack_2050 = 0xfec09918395f26c4;
                local_2048 = 0x835e2313e2c48f8d;
                uStack_2040 = 0xf863c3261a551f0e;
                local_2038 = 0x56a0bc092c25563f;
                uStack_2030 = 0x67ff882c0a9bdf38;
                local_2028 = 0xe9fbbd57d9292e61;
                uStack_2020 = 0x24c1d5fafa9ec992;
                local_2018 = 0xe0a313cd38802513;
                uStack_2010 = 0x3a86d390ee208d6c;
                local_2008 = 0x95484dcb29dcfd95;
                local_2108 = 0xc5f2049e64fab916;
                uStack_2000 = 0xc5f2049e64fab916;
                builtin_strncpy(local_1ef8 + 0x200,
                                "[pixelsurf-wall] STEER cmd={} air_ticks={} correction #{} yaw {:+.1f} wish={} duck={} turn={} carries the ride {} more commands (vz {:.2f})\n"
                                ,0x8d);
                local_1ef8[0x28d] = '\0';
                local_1ef8[0x28e] = '\0';
                local_1ef8[0x28f] = '\0';
                lVar14 = -1;
                do {
                  puStack_20d0 = (undefined1 *)(lVar14 + 1);
                  lVar4 = lVar14 + 0x201;
                  lVar14 = (longlong)puStack_20d0;
                } while (local_1ef8[lVar4] != '\0');
                local_20d8 = local_1ef8 + 0x200;
                if (DAT_180bbeabc != '\0') {
                  local_2160 = &local_1380;
                  local_2168 = (double *)&local_8e0;
                  local_2188 = &local_1378;
                  local_2180 = (double **)(auStack_804 + lVar29 * 0x14);
                  local_2178 = (double *)(auStack_804 + lVar29 * 0x14 + 4);
                  local_2170 = (double *)(auStack_804 + lVar29 * 0x14 + 8);
                  FUN_180336040(local_e28,local_988 + 8,&DAT_1808e3da0,local_980);
                  local_1268 = 9;
                  puStack_1260 = local_e28;
                  local_20b8 = (char *)0x9;
                  uStack_20b0 = SUB85(puStack_1260,0);
                  uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_1260 >> 0x28);
                  local_1f98._8_8_ = puStack_20d0;
                  local_1f98._0_8_ = local_20d8;
                  uVar15 = FUN_1801d97f0(local_fe0,local_1f98,&local_20b8);
                  FUN_18030e280(uVar15);
                  FUN_18015c010(local_fe0);
                }
                iVar9 = local_980[0];
              }
            }
            DAT_1808e3d30 = '\x01';
            DAT_1808e3d70 = 0;
            lVar14 = (longlong)iVar9;
            DAT_1808e3d3c = DAT_1808e3db4 + *(float *)((longlong)local_818 + lVar14 * 0x14 + 0x10);
            if ((auStack_804[lVar14 * 0x14] == '\0') || (DAT_1808e3d8c != '\0')) {
              uVar8 = 0;
            }
            else {
              uVar8 = 1;
            }
            _DAT_1808e3d31 = CONCAT12(auStack_804[lVar14 * 0x14 + 8],CONCAT11(uVar8,DAT_1808e3d31));
            DAT_1808e3d34 = local_7f8[lVar14 * 5];
            DAT_1808e3d48 = iVar9;
            if (*(int *)(auStack_804 + lVar14 * 0x14 + 4) != 0) {
              if (*(int *)(auStack_804 + lVar14 * 0x14 + 4) == 0) {
                _DAT_1808e3d84 = CONCAT44(*(undefined4 *)(local_830 + 0x68),0xffffffff);
              }
              else {
                uVar10 = 100000;
                if (*(int *)(auStack_804 + lVar14 * 0x14 + 4) == 1) {
                  uVar10 = 0;
                }
                _DAT_1808e3d84 = CONCAT44(uVar10,0xffffffff);
              }
            }
          }
        }
      }
      else {
        if (DAT_1808e3d20 == '\0') {
LAB_1803252e7:
          auVar59 = ZEXT464((uint)local_20e0);
        }
        else {
          if (((cVar34 == '\0') || (auVar49._0_4_ < 100.0)) ||
             ((cVar28 == '\0' && (DAT_1808e3da4 != 0)))) {
            if ((DAT_1808e3d20 != '\0') && (cVar34 != '\0')) {
              DAT_1808e3d90 = (uint)(cVar6 == '\0');
            }
            goto LAB_1803252e7;
          }
          iVar9 = DAT_1808e3d4c;
          if ((-1 < DAT_1808e3d4c) && ((longlong)DAT_1808e3d4c <= *(longlong *)(local_988 + 8))) {
            _DAT_1808e3d4c = CONCAT44(DAT_1808e3d50,0xffffffff);
            DAT_1808e3d58 = '\x01';
            iVar9 = -1;
          }
          cVar34 = -1 < iVar9;
          if (DAT_1808e3d58 == '\0') {
LAB_180321ecc:
            iVar9 = -1;
            local_1f88 = (int *)CONCAT44(local_1f88._4_4_,0xffffffff);
          }
          else {
            local_1f88 = (int *)CONCAT44(local_1f88._4_4_,DAT_1808e3d50);
            if ((_DAT_1808e3d4c < 0) ||
               (iVar9 = DAT_1808e3d50, (longlong)DAT_1808e3d54 < *(longlong *)(local_988 + 8)))
            goto LAB_180321ecc;
          }
          local_8f8 = 0;
          local_8ec = auVar46._0_4_;
          local_138 = (undefined1  [8])0x0;
          auStack_130 = (undefined1  [8])0x0;
          uStack_128 = 0.0;
          uStack_120 = 0;
          local_118 = 0;
          uStack_110 = 0;
          uStack_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = 0;
          auVar48 = ZEXT1664(auVar48._0_16_);
          auVar49 = ZEXT1664(auVar49._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar50 = ZEXT1664(auVar59._0_16_);
          local_20e5 = cVar34;
          FUN_180333ad0(local_138,8);
          local_2178 = (double *)local_138;
          local_2180 = (double **)&DAT_1808e3d20;
          local_2188 = &local_960;
          FUN_18032b290(local_438,&local_988,&local_968,&local_958);
          cVar6 = '\0';
          local_20e8 = '\0';
          local_908 = (undefined *)CONCAT35(local_908._5_3_,0x1ffffffff);
          local_900 = -1;
          iVar11 = 0;
          local_20f0 = (ulonglong)local_20f0._4_4_ << 0x20;
          lVar14 = 0;
          puVar13 = &DAT_180802ff0;
          fVar37 = 60.0;
          auVar59 = ZEXT464(0x3f7851ec);
          fVar38 = 0.5;
          do {
            if ((cVar6 != '\0') || (cVar34 != '\0')) break;
            fVar57 = auVar53._0_4_;
            if (iVar9 < 0) {
              if (lVar14 < 2) goto LAB_180321fe7;
              iVar12 = (int)local_20f0;
              cVar6 = local_20e8;
              if ((longlong)(iVar11 + -2) != *(longlong *)(local_988 + 8) % 6) goto LAB_1803221ed;
              iVar11 = (int)local_20f0;
              DAT_1808e3d2c = fVar57;
LAB_180322062:
              if (fVar37 <= auVar49._0_4_) {
                local_2188 = (double **)&local_8ec;
                cVar34 = FUN_18032b190(local_438,puVar13,auVar59._0_8_,&local_8f8);
                if (cVar34 != '\0') {
                  FUN_18030ad50(auVar50._0_8_);
                  auVar55 = ZEXT1664(auVar53._0_16_);
                  auVar49 = ZEXT1664(auVar59._0_16_);
                  lVar29 = 4;
                  do {
                    fVar57 = (auVar49._0_4_ + auVar55._0_4_) * fVar38;
                    auVar51 = ZEXT464((uint)fVar57);
                    local_8b0 = 0;
                    local_8b8 = auVar46._0_4_;
                    local_2188 = (double **)&local_8b8;
                    cVar34 = FUN_18032b190(local_438,puVar13,fVar57,&local_8b0);
                    if (cVar34 == '\0') {
                      auVar55 = ZEXT1664(auVar51._0_16_);
                    }
                    else {
                      auVar49 = ZEXT1664(auVar51._0_16_);
                      local_8f8 = local_8b0;
                      local_8ec = local_8b8;
                    }
                    lVar29 = lVar29 + -1;
                  } while (lVar29 != 0);
                  DAT_1808e3d2c = auVar49._0_4_;
                  local_20e8 = '\x01';
                  local_908 = (undefined *)*puVar13;
                  local_900 = *(int *)(puVar13 + 1);
                  auVar49 = ZEXT464((uint)local_20e0);
                  iVar9 = (int)local_1f88;
                }
                iVar11 = (int)local_20f0;
                cVar6 = local_20e8;
              }
              cVar34 = local_20e5;
              iVar12 = iVar11;
            }
            else {
              iVar12 = iVar11;
              if (iVar11 == iVar9) {
LAB_180321fe7:
                if (1 < lVar14) {
                  DAT_1808e3d2c = fVar57;
                  if (iVar9 < 0) goto LAB_180322062;
                }
                DAT_1808e3d2c = fVar57;
                if (*(longlong *)(local_988 + 8) == (*(longlong *)(local_988 + 8) / 3) * 3) {
                  local_2188 = (double **)&local_8ec;
                  cVar34 = FUN_18032b190(local_438,puVar13,auVar53._0_8_,&local_8f8);
                  if (cVar34 != '\0') {
                    local_908 = (undefined *)*puVar13;
                    local_900 = *(int *)(puVar13 + 1);
                    goto LAB_18032221d;
                  }
                }
                iVar11 = (int)local_20f0;
                cVar6 = local_20e8;
                goto LAB_180322062;
              }
            }
LAB_1803221ed:
            iVar11 = iVar12 + 1;
            local_20f0 = CONCAT44(local_20f0._4_4_,iVar11);
            lVar14 = lVar14 + 1;
            puVar13 = (undefined8 *)((longlong)puVar13 + 0xc);
          } while ((longlong)puVar13 < 0x180803050);
          local_90c = (undefined1  [4])0xffffffff;
          if (cVar6 == '\0') {
LAB_18032464d:
            fVar38 = auVar49._0_4_;
            DAT_1808e3d90 = (uint)(local_20e7 == '\0');
            DAT_1808e3da4 = DAT_1808e3da4 + 1;
            if (local_20e5 == '\0') {
              if (((local_20e6 != '\0') && (150.0 <= fVar38)) &&
                 ((longlong)(ulonglong)(uint)(local_1f78 * 6) <=
                  *(longlong *)(local_988 + 8) - (longlong)DAT_1808e3d60)) {
                DAT_1808e3d60 = (int)*(longlong *)(local_988 + 8);
                _DAT_1808e3d64 = -1;
                local_158[0] = 4;
                local_158[1] = 9;
                local_158[2] = 0x10;
                local_158[3] = 0x1a;
                piVar31 = local_158;
LAB_180324700:
                local_2130 = *piVar31;
                local_8c8 = 0;
                local_2118 = auVar46._0_4_;
                local_2110 = 0xffffffff;
                local_2120 = (float *)0x0;
                local_2128 = 0;
                local_2138 = (longlong *)0x0;
                local_2140 = (double *)0x0;
                local_2148 = (double *)((ulonglong)local_2148 & 0xffffffff00000000);
                local_2150 = (double *)CONCAT44(local_2150._4_4_,0xffffffff);
                local_2158 = (double *)CONCAT44(local_2158._4_4_,auVar53._0_4_);
                local_2160 = (double *)&local_860;
                local_2168 = (double *)&local_8c8;
                local_2170 = (double *)CONCAT44(local_2170._4_4_,local_2130 + 0x30);
                local_2178 = (double *)CONCAT44(local_2178._4_4_,3);
                local_2180 = (double **)CONCAT71(local_2180._1_7_,1);
                local_2188 = (double **)CONCAT44(local_2188._4_4_,DAT_1808e3db4);
                local_8cc = local_2130;
                local_860 = local_2118;
                cVar34 = FUN_18031e430(local_988,local_968,&local_958,local_960);
                fVar38 = auVar49._0_4_;
                if (cVar34 == '\0') goto code_r0x0001803247c0;
                _DAT_1808e3d64 = local_8cc;
                DAT_1808e3d5c = local_8cc + 2 + *(int *)(local_988 + 8);
                local_1400 = (double)fVar38;
                local_13f8 = (double)local_918;
                local_13f0 = (double *)(double)local_920._4_4_;
                local_13e8 = (double *)(double)(float)local_920;
                local_1f5c[0] = local_8c8 - local_8cc;
                local_2088 = 0xdb35e39b27e1c185;
                uStack_2080 = 0xa05181ee77d57a06;
                local_2078 = 0x929654b1461b7377;
                uStack_2070 = 0xa5cea54bfef7110;
                local_2068 = 0xa70c9f7f916b7e19;
                uStack_2060 = 0x2b2d6d82aa402c0a;
                local_2058 = 0xc064ed9510bc010b;
                uStack_2050 = 0xfec09918395f26c4;
                local_2048 = 0x835e2313e2c48f8d;
                uStack_2040 = 0xf863c3261a551f0e;
                local_2038 = 0x56a0bc092c25563f;
                uStack_2030 = 0x67ff882c0a9bdf38;
                local_2028 = 0xe9fbbd57d9292e61;
                uStack_2020 = 0x24c1d5fafa9ec992;
                local_2018 = 0xe0a313cd38802513;
                uStack_2010 = 0x3a86d390ee208d6c;
                local_2008 = 0x95484dcb29dcfd95;
                uStack_2000 = 0xc5f2049e64fab916;
                local_1ff8 = 0x99be47e160dada07;
                uStack_1ff0 = 0x1047a904a2394520;
                local_1fe8 = 0x9a6f01af4f2ca929;
                uStack_1fe0 = 0x91e97532caa6fc1a;
                local_1fd8 = 0x4f948c455ded471b;
                local_2108 = 0xb10776480ca86bd4;
                uStack_1fd0 = 0xb10776480ca86bd4;
                builtin_strncpy(local_1948,
                                "[pixelsurf-wall] ZONE ahead cmd={}: a jump {} commands from now catches (surf {} commands after it); searching every command until then. origin=({:.1f},{:.1f},{:.1f}) speed={:.1f}\n"
                                ,0xb5);
                local_1948[0xb5] = '\0';
                local_1948[0xb6] = '\0';
                local_1948[0xb7] = '\0';
                local_1948[0xb8] = '\0';
                local_1948[0xb9] = '\0';
                local_1948[0xba] = '\0';
                local_1948[0xbb] = '\0';
                local_1948[0xbc] = '\0';
                local_1948[0xbd] = '\0';
                local_1948[0xbe] = '\0';
                local_1948[0xbf] = '\0';
                lVar14 = -1;
                do {
                  puStack_20d0 = (undefined1 *)(lVar14 + 1);
                  lVar29 = lVar14 + 1;
                  lVar14 = (longlong)puStack_20d0;
                } while (local_1948[lVar29] != '\0');
                local_20d8 = local_1948;
                if (DAT_180bbeabc != '\0') {
                  local_2170 = &local_1400;
                  local_2178 = &local_13f8;
                  local_2180 = &local_13f0;
                  local_2188 = &local_13e8;
                  FUN_180336560(local_f08,local_988 + 8,&local_8cc,local_1f5c);
                  local_1328 = 7;
                  puStack_1320 = local_f08;
                  local_20b8 = (char *)0x7;
                  uStack_20b0 = SUB85(puStack_1320,0);
                  uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_1320 >> 0x28);
                  local_1f98._8_8_ = puStack_20d0;
                  local_1f98._0_8_ = local_20d8;
                  uVar15 = FUN_1801d97f0(local_1020,local_1f98,&local_20b8);
                  FUN_18030e280(uVar15);
                  FUN_18015c010(local_1020);
                  fVar38 = auVar49._0_4_;
                }
              }
LAB_1803247fd:
              if ((DAT_1808e3da4 == 1) ||
                 (0x3f < *(longlong *)(local_988 + 8) - (longlong)DAT_1808e3da8)) {
                DAT_1808e3da8 = *(int *)(local_988 + 8);
                local_13e0 = (double)uStack_128._4_4_;
                local_13d8 = (double)(float)auStack_130._0_4_;
                local_13d0 = (double)(((longlong)DAT_180bda1c8 - (longlong)DAT_180bda1c0) / 0x1c);
                local_13c8 = (double)fVar38;
                local_13c0 = (double *)(double)local_918;
                local_13b8 = (double *)(double)local_920._4_4_;
                local_13b0 = (double)(float)local_920;
                local_2088 = 0xdb35e39b27e1c185;
                uStack_2080 = 0xa05181ee77d57a06;
                local_2078 = 0x929654b1461b7377;
                uStack_2070 = 0xa5cea54bfef7110;
                local_2068 = 0xa70c9f7f916b7e19;
                uStack_2060 = 0x2b2d6d82aa402c0a;
                local_2058 = 0xc064ed9510bc010b;
                uStack_2050 = 0xfec09918395f26c4;
                local_2048 = 0x835e2313e2c48f8d;
                uStack_2040 = 0xf863c3261a551f0e;
                local_2038 = 0x56a0bc092c25563f;
                uStack_2030 = 0x67ff882c0a9bdf38;
                local_2028 = 0xe9fbbd57d9292e61;
                uStack_2020 = 0x24c1d5fafa9ec992;
                local_2018 = 0xe0a313cd38802513;
                uStack_2010 = 0x3a86d390ee208d6c;
                local_2008 = 0x95484dcb29dcfd95;
                uStack_2000 = 0xc5f2049e64fab916;
                local_1ff8 = 0x99be47e160dada07;
                uStack_1ff0 = 0x1047a904a2394520;
                local_1fe8 = 0x9a6f01af4f2ca929;
                uStack_1fe0 = 0x91e97532caa6fc1a;
                local_1fd8 = 0x4f948c455ded471b;
                uStack_1fd0 = 0xb10776480ca86bd4;
                local_1fc8 = 0x35a5004309b1b61d;
                uStack_1fc0 = 0x5b5a30d674a48d9e;
                local_1fb8 = 0xa73d3b392572a64f;
                local_2108 = 0x8edd3f5c2400c2c8;
                uStack_1fb0 = 0x8edd3f5c2400c2c8;
                builtin_strncpy(local_1948 + 0xc0,
                                "[pixelsurf-wall] waiting cmd={} no catch within {} commands of a jump here; jump held back. origin=({:.1f},{:.1f},{:.1f}) speed={:.1f} spots={} | plain: lands@{} nearest vz {:.1f}@{} | crouch: lands@{} nearest vz {:.1f}@{}\n"
                                ,0xe0);
                lVar14 = -1;
                do {
                  puStack_20d0 = (undefined1 *)(lVar14 + 1);
                  lVar29 = lVar14 + 0xc1;
                  lVar14 = (longlong)puStack_20d0;
                } while (local_1948[lVar29] != '\0');
                local_20d8 = local_1948 + 0xc0;
                if (DAT_180bbeabc != '\0') {
                  local_2140 = (double *)&uStack_128;
                  local_2148 = &local_13e0;
                  local_2150 = (double *)(auStack_130 + 4);
                  local_2158 = (double *)(local_138 + 4);
                  local_2160 = &local_13d8;
                  local_2168 = (double *)local_138;
                  local_2170 = &local_13d0;
                  local_2178 = &local_13c8;
                  local_2180 = &local_13c0;
                  local_2188 = &local_13b8;
                  FUN_180336330(local_b18,local_988 + 8,&DAT_180701d44,&local_13b0);
                  local_1318 = 0xd;
                  puStack_1310 = local_b18;
                  local_20b8 = &DAT_0000000d;
                  uStack_20b0 = SUB85(puStack_1310,0);
                  uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_1310 >> 0x28);
                  local_1f98._8_8_ = puStack_20d0;
                  local_1f98._0_8_ = local_20d8;
                  uVar15 = FUN_1801d97f0(local_1160,local_1f98,&local_20b8);
                  FUN_18030e280(uVar15);
                  FUN_18015c010(local_1160);
                }
              }
            }
            fVar38 = 0.017453292;
            goto LAB_1803252e7;
          }
LAB_18032221d:
          local_90c = (undefined1  [4])0xffffffff;
          FUN_18030ad50(auVar50._0_8_);
          local_8f4 = auVar46._0_4_;
          local_2178 = (double *)&DAT_1808e3d20;
          local_2180 = &local_960;
          local_2188 = &local_958;
          FUN_18032b3e0(local_408,&local_8f4,&local_988,&local_968);
          local_190[0] = 0.0;
          local_190[1] = 0.0;
          local_190[2] = 0.0;
          local_190[3] = 0.0;
          local_190[4] = 0.0;
          local_190[5] = 0.0;
          local_190[6] = 0.0;
          local_190[7] = 0.0;
          local_1b0 = vpcmpeqd_avx2(auVar48._0_32_,auVar48._0_32_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar59 = ZEXT1664(auVar50._0_16_);
          local_90c = (undefined1  [4])FUN_18032b2c0(local_408,&local_908);
          uVar25 = (ulonglong)local_908 & 0xffffffff;
          if ((((int)local_908 == -1) && (local_908._4_1_ == '\x01')) && (local_900 == -1)) {
            local_1b0._0_4_ = local_90c;
            local_190[0] = local_8f4;
          }
          if ((((int)local_908 == 0) && (local_908._4_1_ == '\x01')) && (local_900 == -1)) {
            local_1b0._4_4_ = local_90c;
            local_190[1] = local_8f4;
          }
          if ((((int)local_908 == 10) && (local_908._4_1_ == '\x01')) && (local_900 == -1)) {
            local_1b0._8_4_ = local_90c;
            local_190[2] = local_8f4;
          }
          if ((((int)local_908 == 0x16) && (local_908._4_1_ == '\x01')) && (local_900 == -1)) {
            local_1b0._12_4_ = local_90c;
            local_190[3] = local_8f4;
          }
          if ((((int)local_908 == -1) && (local_908._4_1_ == '\0')) && (local_900 == -1)) {
            local_1b0._16_4_ = local_90c;
            local_190[4] = local_8f4;
          }
          if ((int)local_908 == 0) {
            if ((local_908._4_1_ == '\x01') && (local_900 == 0x1c)) {
              local_1b0._20_4_ = local_90c;
              local_190[5] = local_8f4;
            }
            if ((local_908._4_1_ == '\x01') && (local_900 == 0x1f)) {
              local_1b0._24_4_ = local_90c;
              local_190[6] = local_8f4;
            }
            if ((local_908._4_1_ == '\x01') && (local_900 == 0x22)) {
              local_1b0._28_4_ = local_90c;
              local_190[7] = local_8f4;
            }
          }
          local_1f70 = local_908;
          local_1f88 = (int *)CONCAT44(local_1f88._4_4_,local_900);
          ppuVar30 = (undefined **)&DAT_180802ff0;
          lVar14 = 0;
          iVar9 = local_900;
          fVar38 = local_8f4;
          puVar54 = local_908;
          fVar37 = DAT_1808e3d2c;
          cVar34 = local_908._4_1_;
          do {
            local_1b8 = auVar53._0_4_;
            local_1b4 = DAT_1808e3d2c;
            pfVar23 = &local_1b8;
            local_1f70 = puVar54;
            do {
              fVar57 = *pfVar23;
              if (((*(int *)ppuVar30 == (int)uVar25) &&
                  (*(char *)((longlong)ppuVar30 + 4) == cVar34)) &&
                 (*(int *)(ppuVar30 + 1) == iVar9)) {
                if (fVar57 != DAT_1808e3d2c) goto LAB_180322456;
              }
              else {
LAB_180322456:
                iVar9 = FUN_18032b2c0(local_408,ppuVar30,fVar57);
                if (-1 < iVar9) {
                  lVar29 = lVar14 / 0xc;
                  if (local_190[lVar29] < local_8f4) {
                    *(int *)(local_1b0 + lVar29 * 4) = iVar9;
                    local_190[lVar29] = local_8f4;
                  }
                  if (fVar38 + auVar59._0_4_ < local_8f4) {
                    local_90c = (undefined1  [4])iVar9;
                    puVar54 = *ppuVar30;
                    local_1f88 = (int *)CONCAT44(local_1f88._4_4_,*(int *)(ppuVar30 + 1));
                    fVar38 = local_8f4;
                    fVar37 = fVar57;
                  }
                }
                uVar25 = (ulonglong)local_908 & 0xffffffff;
                iVar9 = local_900;
                cVar34 = local_908._4_1_;
              }
              pfVar23 = pfVar23 + 1;
            } while (pfVar23 != (float *)local_1b0);
            local_1f70 = puVar54;
            ppuVar30 = (undefined **)((longlong)ppuVar30 + 0xc);
            lVar14 = lVar14 + 0xc;
          } while (ppuVar30 != &PTR_DAT_180803050);
          FUN_18015bb30(local_568);
          FUN_18015bb50(local_568);
          local_20d8 = (char *)0x3;
          puVar52 = local_fa8;
          puStack_20d0 = puVar52;
          piVar31 = &DAT_180802ff8;
          puVar33 = local_1b0;
          lVar14 = 0;
          local_20f0 = 8;
          uVar15 = 3;
          do {
            if (*(int *)(local_1b0 + lVar14) < 0) {
              uVar22 = FUN_18015bae0(local_1060,&DAT_180701178);
              uVar27 = uVar27 | 1;
            }
            else {
              local_1488 = (double)*(float *)((longlong)local_190 + lVar14);
              local_20d8 = "{}/{:.0f}u";
              puStack_20d0 = (undefined1 *)0xa;
              local_1f98._8_8_ = 10;
              local_1f98._0_8_ = &DAT_180802c50;
              uVar22 = FUN_180333b50(local_1040,local_1f98,puVar33,&local_1488);
              uVar27 = uVar27 | 2;
            }
            local_20c8 = uVar27;
            if (*piVar31 < 0) {
              FUN_18015bb30(local_1200);
              FUN_18015bb50(local_1200);
              puVar32 = local_1200;
              uVar36 = uVar27 | 8;
            }
            else {
              FUN_18015bea0(local_11a0);
              puVar32 = local_11a0;
              uVar36 = uVar27 | 0x44;
            }
            if ((char)piVar31[-1] == '\0') {
              local_1f28 = "nowish";
            }
            else if (piVar31[-2] < 0) {
              local_1f28 = "plain";
            }
            else {
              local_1f28 = "crouch";
              if (-1 < *piVar31) {
                local_1f28 = "crouch-rel";
              }
            }
            local_20c8 = uVar36;
            FUN_180336870(local_fa8,&local_1f28,puVar32,uVar22);
            local_1278 = " {}{}={}";
            uStack_1270 = 8;
            local_1f98._8_8_ = puVar52;
            local_1f98._0_8_ = uVar15;
            local_20b8 = " {}{}={}";
            uStack_20b0 = 8;
            uStack_20ab = uStack_20ab & 0xff000000;
            FUN_1801d97f0(local_1180,&local_20b8,local_1f98);
            uVar27 = uVar36 | 0x10;
            local_20c8 = uVar27;
            FUN_18015b0d0(local_568,local_1180);
            FUN_18015c010(local_1180);
            if ((uVar36 & 8) != 0) {
              uVar27 = uVar36 & 0xfffffff7 | 0x10;
              local_20c8 = uVar27;
              FUN_18015c010(local_1200);
            }
            if ((uVar27 & 4) != 0) {
              uVar27 = uVar27 & 0xfffffffb;
              local_20c8 = uVar27;
              FUN_18015c010(local_11a0);
            }
            if ((uVar27 & 2) != 0) {
              uVar27 = uVar27 & 0xfffffffd;
              local_20c8 = uVar27;
              FUN_18015c010(local_1040);
            }
            if ((uVar27 & 1) != 0) {
              uVar27 = uVar27 & 0xfffffffe;
              local_20c8 = uVar27;
              FUN_18015c010(local_1060);
            }
            puVar33 = puVar33 + 4;
            lVar14 = lVar14 + 4;
            piVar31 = piVar31 + 3;
            local_20f0 = local_20f0 + -1;
          } while (local_20f0 != 0);
          local_2088 = 0xdb35e39b27e1c185;
          uStack_2080 = 0xa05181ee77d57a06;
          local_2078 = 0x929654b1461b7377;
          uStack_2070 = 0xa5cea54bfef7110;
          local_2068 = 0xa70c9f7f916b7e19;
          uStack_2060 = 0x2b2d6d82aa402c0a;
          local_2058 = 0xc064ed9510bc010b;
          uStack_2050 = 0xfec09918395f26c4;
          local_2048 = 0x835e2313e2c48f8d;
          uStack_2040 = 0xf863c3261a551f0e;
          local_2038 = 0x56a0bc092c25563f;
          uStack_2030 = 0x67ff882c0a9bdf38;
          local_2028 = 0xe9fbbd57d9292e61;
          local_20f0 = 0x24c1d5fafa9ec992;
          uStack_2020 = 0x24c1d5fafa9ec992;
          builtin_strncpy(local_1ef8 + 400,
                          "[pixelsurf-wall] PLANS cmd={} (ride commands/units each plan would get from this very moment):{}\n"
                          ,0x62);
          local_1ef8[0x1f2] = '\0';
          local_1ef8[499] = '\0';
          local_1ef8[500] = '\0';
          local_1ef8[0x1f5] = '\0';
          local_1ef8[0x1f6] = '\0';
          local_1ef8[0x1f7] = '\0';
          local_1ef8[0x1f8] = '\0';
          local_1ef8[0x1f9] = '\0';
          local_1ef8[0x1fa] = '\0';
          local_1ef8[0x1fb] = '\0';
          local_1ef8[0x1fc] = '\0';
          local_1ef8[0x1fd] = '\0';
          local_1ef8[0x1fe] = '\0';
          local_1ef8[0x1ff] = '\0';
          local_20b8 = local_1ef8 + 400;
          local_1288 = local_20b8;
          lVar14 = -1;
          do {
            lStack_1280 = lVar14 + 1;
            lVar29 = lVar14 + 0x191;
            lVar14 = lStack_1280;
          } while (local_1ef8[lVar29] != '\0');
          uStack_20b0 = (undefined5)lStack_1280;
          uStack_20ab._0_3_ = (undefined3)((ulonglong)lStack_1280 >> 0x28);
          FUN_180333bc0(&local_20b8,local_988 + 8,local_568);
          local_900 = (int)local_1f88;
          _DAT_1808e3d84 = CONCAT44((int)local_1f70,(int)local_1f88);
          DAT_1808e3d8c = (char)((ulonglong)local_1f70 >> 0x20) == '\0';
          DAT_1808e3d2c = fVar37;
          local_908 = puVar54;
          FUN_18015c010(local_568);
          fVar37 = fVar38;
          if (((DAT_1808e3d58 == '\0') && (-1 < (int)local_90c)) && (fVar38 < 220.0)) {
            local_8d8 = 0;
            local_8c4 = (int)local_90c;
            iVar9 = -1;
            local_170[0] = 0;
            local_170[1] = 1;
            local_170[2] = 5;
            local_170[3] = 6;
            local_170[4] = 7;
            local_1f88 = local_170;
            uVar15 = 0x600000003;
            uVar22 = 0x100000000a;
            fVar57 = 25.0;
            do {
              iVar11 = *local_1f88;
              lVar14 = (longlong)iVar11;
              local_148 = uVar15;
              uStack_140 = uVar22;
              piVar31 = (int *)&local_148;
              do {
                iVar2 = *piVar31;
                local_878._0_4_ = 0;
                local_8c0 = 0;
                local_2118 = auVar46._0_4_;
                iVar12 = iVar2 + 0x4c;
                if (100 < iVar12) {
                  iVar12 = 100;
                }
                local_2110 = (&DAT_180802ff8)[lVar14 * 3];
                local_2120 = &local_8bc;
                local_2128 = 0;
                local_2138 = (longlong *)&local_8c0;
                local_2140 = (double *)0x0;
                local_2148 = (double *)CONCAT44(local_2148._4_4_,-iVar2);
                local_2150 = (double *)
                             CONCAT44(local_2150._4_4_,
                                      *(undefined4 *)((longlong)&DAT_180802ff0 + lVar14 * 0xc));
                local_2158 = (double *)CONCAT44(local_2158._4_4_,auVar53._0_4_);
                local_2160 = (double *)&local_87c;
                local_2168 = &local_878;
                local_2170 = (double *)CONCAT44(local_2170._4_4_,iVar12);
                local_2178 = (double *)CONCAT44(local_2178._4_4_,3);
                local_2180 = (double **)
                             CONCAT71(local_2180._1_7_,
                                      *(undefined1 *)((longlong)&DAT_180802ff0 + lVar14 * 0xc + 4));
                local_2188 = (double **)CONCAT44(local_2188._4_4_,DAT_1808e3db4);
                local_2130 = iVar2;
                local_8bc = local_2118;
                local_87c = local_2118;
                cVar34 = FUN_18031e430(local_988,local_968,&local_958,local_960);
                if (cVar34 != '\0') {
                  if (fVar38 + fVar57 < local_8bc) {
                    local_8c4 = local_8c0;
                    local_8d8 = iVar2;
                    iVar9 = iVar11;
                    fVar38 = local_8bc;
                  }
                }
                piVar31 = piVar31 + 1;
              } while (piVar31 != (int *)local_138);
              local_1f88 = local_1f88 + 1;
            } while (local_1f88 != local_170 + 5);
            if (0 < local_8d8) {
              iVar11 = local_8d8 + *(int *)(local_988 + 8);
              _DAT_1808e3d4c = CONCAT44(iVar9,iVar11);
              DAT_1808e3d54 = iVar11 + 6;
              if (DAT_1808e3d5c < DAT_1808e3d54) {
                DAT_1808e3d5c = DAT_1808e3d54;
              }
              auVar49 = ZEXT464((uint)local_20e0);
              local_1480 = (double)local_20e0;
              local_1478 = (double)local_918;
              local_1470 = (double)local_920._4_4_;
              local_1468 = (double)(float)local_920;
              local_1460 = (double)fVar38;
              local_1458 = (double *)0x180802cc4;
              if (*(int *)((longlong)&DAT_180802ff0 + (longlong)iVar9 * 0xc) < 0) {
                local_1458 = (double *)0x180802cac;
              }
              local_1450 = (double)fVar37;
              local_1968._8_8_ = 0x306ed46293177f5b;
              local_1968._0_8_ = 0xb5c321d04ee0a12b;
              local_2088 = 0xdb35e39b27e1c185;
              uStack_2080 = 0xa05181ee77d57a06;
              local_2078 = 0x929654b1461b7377;
              uStack_2070 = 0xa5cea54bfef7110;
              local_2068 = 0xa70c9f7f916b7e19;
              uStack_2060 = 0x2b2d6d82aa402c0a;
              local_2058 = 0xc064ed9510bc010b;
              uStack_2050 = 0xfec09918395f26c4;
              local_2048 = 0x835e2313e2c48f8d;
              uStack_2040 = 0xf863c3261a551f0e;
              local_2038 = 0x56a0bc092c25563f;
              uStack_2030 = 0x67ff882c0a9bdf38;
              local_2028 = 0xe9fbbd57d9292e61;
              uStack_2020 = 0x24c1d5fafa9ec992;
              local_2018 = 0xe0a313cd38802513;
              uStack_2010 = 0x3a86d390ee208d6c;
              local_2008 = 0x95484dcb29dcfd95;
              uStack_2000 = 0xc5f2049e64fab916;
              local_1ff8 = 0x99be47e160dada07;
              uStack_1ff0 = 0x1047a904a2394520;
              local_1fe8 = 0x9a6f01af4f2ca929;
              local_2108 = 0x91e97532caa6fc1a;
              uStack_1fe0 = 0x91e97532caa6fc1a;
              builtin_strncpy(local_1ef8 + 0x500,
                              "[pixelsurf-wall] DEFER cmd={}: jumping now rides {} commands / {:.0f} units, the {} plan jumped in {} commands rides {} / {:.0f}. origin=({:.1f}"
                              ,0x90);
              auVar43._8_8_ = 0x1047a904a2394520;
              auVar43._0_8_ = 0x99be47e160dada07;
              local_1968 = local_1968 ^ auVar43;
              local_1958 = 0x3a7b3d6465657073;
              uStack_1950 = 0xa7d66312e;
              lVar14 = -1;
              do {
                puStack_20d0 = (undefined1 *)(lVar14 + 1);
                lVar29 = lVar14 + 0x501;
                lVar14 = (longlong)puStack_20d0;
              } while (local_1ef8[lVar29] != '\0');
              local_20d8 = local_1ef8 + 0x500;
              if (DAT_180bbeabc != '\0') {
                local_2150 = &local_1480;
                local_2158 = &local_1478;
                local_2160 = &local_1470;
                local_2168 = &local_1468;
                local_2170 = &local_1460;
                local_2178 = (double *)&local_8c4;
                local_2180 = (double **)&local_8d8;
                local_2188 = &local_1458;
                FUN_180336690(local_c88,(int *)(local_988 + 8),local_90c,&local_1450);
                local_1298 = 0xb;
                puStack_1290 = local_c88;
                local_20b8 = (char *)0xb;
                uStack_20b0 = SUB85(puStack_1290,0);
                uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_1290 >> 0x28);
                local_1f98._8_8_ = puStack_20d0;
                local_1f98._0_8_ = local_20d8;
                uVar15 = FUN_1801d97f0(local_10e0,local_1f98,&local_20b8);
                FUN_18030e280(uVar15);
                FUN_18015c010(local_10e0);
              }
              goto LAB_18032464d;
            }
          }
          lVar14 = local_988;
          pfVar18 = DAT_180bda1c8;
          pfVar23 = DAT_180bda1c0;
          DAT_1808e3d58 = '\0';
          _DAT_1808e3d4c = -1;
          DAT_1808e3d90 = 2;
          DAT_1808e3d22 = '\x01';
          DAT_1808e3da4 = 0;
          DAT_1808e3d30 = '\x01';
          _DAT_1808e3d38 = auVar46._0_4_;
          _DAT_1808e3d6c = 1;
          DAT_1808e3d68 = local_8f8;
          DAT_180bda1b8 = DAT_180bda1b8 + 1;
          _DAT_1808e3dcc = *(undefined4 *)(local_988 + 8);
          _DAT_1808e3dd0 = DAT_180bda1b0;
          _DAT_1808e3dd4 = DAT_180bda1b4;
          _DAT_1808e3dd8 = 0;
          _DAT_1808e3de0 = -1;
          auVar59 = ZEXT464((uint)local_2108);
          fVar38 = (float)local_920;
          fVar57 = local_920._4_4_;
          if (DAT_180bda1c0 != DAT_180bda1c8) {
            fVar39 = 0.9;
            fVar58 = 6.0;
            pfVar19 = DAT_180bda1c0 + 1;
            do {
              fVar40 = (pfVar19[-1] - fVar38) * (pfVar19[-1] - fVar38) +
                       (*pfVar19 - fVar57) * (*pfVar19 - fVar57);
              if (fVar40 == auVar46._0_4_) {
LAB_1803239a6:
                if (fVar39 < auVar59._0_4_ * pfVar19[2] + fVar35 * pfVar19[1]) goto LAB_180323a94;
              }
              else {
                if (fVar40 < 0.0) {
                  fVar40 = (float)FUN_18061e150(fVar40);
                }
                else {
                  fVar40 = SQRT(fVar40);
                }
                if (fVar40 < fVar58) goto LAB_1803239a6;
              }
              pfVar1 = pfVar19 + 6;
              pfVar19 = pfVar19 + 7;
            } while (pfVar1 != pfVar18);
          }
          local_1f08 = auVar59._0_4_;
          if (0x2f < (ulonglong)(((longlong)pfVar18 - (longlong)pfVar23) / 0x1c)) {
            FUN_180334750(&DAT_180bda1c0,local_11a8,pfVar23);
            local_1f08 = auVar59._0_4_;
          }
          local_1f04 = DAT_1808e3db8;
          local_1f00 = DAT_1808e3dbc;
          local_1efc = local_918;
          local_1f14 = fVar38;
          local_1f10 = fVar57;
          local_1f0c = fVar35;
          FUN_180334c40(&DAT_180bda1c0,&local_1f14);
          pfVar18 = DAT_180bda1c8;
          lVar14 = local_988;
          pfVar23 = DAT_180bda1c0;
          fVar38 = (float)local_920;
          fVar57 = local_920._4_4_;
LAB_180323a94:
          local_1448 = ((longlong)pfVar18 - (longlong)pfVar23) / 0x1c;
          local_1440 = (double)fVar37;
          local_2098[0] = DAT_1808e3d8c == '\0';
          local_1438 = (double)DAT_1808e3d2c;
          local_1430 = (double)(float)local_978;
          auVar59 = ZEXT464((uint)local_20e0);
          local_1428 = (double)local_20e0;
          local_1420 = (double)local_918;
          local_1418 = (double *)(double)fVar57;
          local_1410 = (double *)(double)fVar38;
          local_1408 = (double)local_8ec;
          local_2088 = 0xdb35e39b27e1c185;
          uStack_2080 = 0xa05181ee77d57a06;
          local_2078 = 0x929654b1461b7377;
          uStack_2070 = 0xa5cea54bfef7110;
          local_2068 = 0xa70c9f7f916b7e19;
          uStack_2060 = 0x2b2d6d82aa402c0a;
          local_2058 = 0xc064ed9510bc010b;
          uStack_2050 = 0xfec09918395f26c4;
          local_2048 = 0x835e2313e2c48f8d;
          uStack_2040 = 0xf863c3261a551f0e;
          local_2038 = 0x56a0bc092c25563f;
          uStack_2030 = 0x67ff882c0a9bdf38;
          local_2028 = 0xe9fbbd57d9292e61;
          uStack_2020 = 0x24c1d5fafa9ec992;
          local_2018 = 0xe0a313cd38802513;
          uStack_2010 = 0x3a86d390ee208d6c;
          local_2008 = 0x95484dcb29dcfd95;
          uStack_2000 = 0xc5f2049e64fab916;
          local_1ff8 = 0x99be47e160dada07;
          uStack_1ff0 = 0x1047a904a2394520;
          local_1fe8 = 0x9a6f01af4f2ca929;
          uStack_1fe0 = 0x91e97532caa6fc1a;
          local_1fd8 = 0x4f948c455ded471b;
          uStack_1fd0 = 0xb10776480ca86bd4;
          local_1fc8 = 0x35a5004309b1b61d;
          uStack_1fc0 = 0x5b5a30d674a48d9e;
          local_1fb8 = 0xa73d3b392572a64f;
          uStack_1fb0 = 0x8edd3f5c2400c2c8;
          local_1fa8 = 0xefe67c07e4e44b71;
          local_2108 = 0xf3b0b42a9dc4e322;
          uStack_1fa0 = 0xf3b0b42a9dc4e322;
          builtin_strncpy(local_1948 + 0x1a0,
                          "[pixelsurf-wall] JUMP cmd={} proven: the engine reaches a surf {} commands after this jump (vz {:.2f}) at origin=({:.3f},{:.1f},{:.1f}) speed={:.1f} vx={:.3f} when={:.3f} duck_from={} wish={} ride={} ({:.0f} units) spots={}\n"
                          ,0xe1);
          local_1948[0x281] = '\0';
          local_1948[0x282] = '\0';
          local_1948[0x283] = '\0';
          local_1948[0x284] = '\0';
          local_1948[0x285] = '\0';
          local_1948[0x286] = '\0';
          local_1948[0x287] = '\0';
          local_1948[0x288] = '\0';
          local_1948[0x289] = '\0';
          local_1948[0x28a] = '\0';
          local_1948[0x28b] = '\0';
          local_1948[0x28c] = '\0';
          local_1948[0x28d] = '\0';
          local_1948[0x28e] = '\0';
          local_1948[0x28f] = '\0';
          lVar29 = -1;
          do {
            puStack_20d0 = (undefined1 *)(lVar29 + 1);
            lVar4 = lVar29 + 0x1a1;
            lVar29 = (longlong)puStack_20d0;
          } while (local_1948[lVar4] != '\0');
          local_20d8 = local_1948 + 0x1a0;
          if (DAT_180bbeabc != '\0') {
            local_2138 = &local_1448;
            local_2140 = &local_1440;
            local_2148 = (double *)local_90c;
            local_2150 = (double *)local_2098;
            local_2158 = (double *)&DAT_1808e3d88;
            local_2160 = &local_1438;
            local_2168 = &local_1430;
            local_2170 = &local_1428;
            local_2178 = &local_1420;
            local_2180 = &local_1418;
            local_2188 = &local_1410;
            uStack_1330 = FUN_180333d40(local_a58,lVar14 + 8,&local_8f8,&local_1408);
            local_1338 = 0xe;
            local_20b8 = (char *)0xe;
            uStack_20b0 = (undefined5)uStack_1330;
            uStack_20ab._0_3_ = (undefined3)((ulonglong)uStack_1330 >> 0x28);
            local_1f98._8_8_ = puStack_20d0;
            local_1f98._0_8_ = local_20d8;
            uVar15 = FUN_1801d97f0(local_1120,local_1f98,&local_20b8);
            FUN_18030e280(uVar15);
            FUN_18015c010(local_1120);
          }
          fVar38 = 0.017453292;
        }
        if (local_928 == 0) goto LAB_180325e2d;
      }
      fVar35 = local_918;
      if (local_440 != '\0') {
        fVar58 = local_4b8;
        fVar40 = local_4b4;
        fVar37 = (float)FUN_180636c80(local_4b4,local_4b8);
        fVar38 = (fVar37 * 57.295776 + 90.0) * fVar38;
        auVar48 = ZEXT464((uint)fVar38);
        fVar37 = fVar35 + 5.0;
        fVar57 = local_4c4;
        fVar39 = fStack_4c0;
        fVar38 = (float)FUN_180638e00(fVar38);
        fVar38 = fVar38 * 28.0;
        fVar41 = (float)FUN_180637540(auVar48._0_8_);
        local_1f70 = (undefined *)CONCAT44(fVar39,fVar57);
        DAT_180b8fd30 = fVar37 - auVar46._0_4_;
        local_1234 = DAT_180b8fd30;
        auVar43 = vunpcklps_avx(ZEXT416((uint)(fVar57 - fVar41 * 28.0)),
                                ZEXT416((uint)(fVar39 - fVar38)));
        _DAT_180b8fd28 = auVar43._0_8_;
        local_123c = _DAT_180b8fd28;
        DAT_180b8fd3c = fVar37 + auVar46._0_4_;
        local_1240 = DAT_180b8fd3c;
        auVar43 = vunpcklps_avx(ZEXT416((uint)(fVar57 + fVar41 * 28.0)),
                                ZEXT416((uint)(fVar38 + fVar39)));
        _DAT_180b8fd34 = auVar43._0_8_;
        local_1248 = _DAT_180b8fd34;
        local_1228 = DAT_180b8fd3c;
        auVar43 = vunpcklps_avx(ZEXT416((uint)(fVar58 * 12.0 + fVar57)),
                                ZEXT416((uint)(fVar40 * 12.0 + fVar39)));
        _DAT_180b8fd40 = auVar43._0_8_;
        local_1230 = _DAT_180b8fd40;
        DAT_180b8fd24 = (1 < DAT_1808e3d98) + 1;
        DAT_180b8fd20 = 1;
        _DAT_180b8fd48 = DAT_180b8fd3c;
      }
      lVar14 = local_2100;
      fVar37 = auVar59._0_4_;
      fVar38 = auVar46._0_4_;
      if (local_928 == 0) {
        if (local_927[0] == '\0') {
          iVar9 = (int)(_DAT_1808e3d98 >> 0x20);
          _DAT_1808e3d98 = _DAT_1808e3d98 & 0xffffffff00000000;
          if (0 < iVar9) {
            DAT_1808e3d9c = iVar9 - 1;
            _DAT_1808e3d98 = (ulonglong)DAT_1808e3d9c << 0x20;
          }
          if (0 < (int)DAT_1808e3d44) {
            local_1508 = (double)DAT_1808e3d3c;
            local_1510 = (double)local_910;
            local_1f2c = (uint)(local_440 != '\0');
            fVar37 = local_978._4_4_ * local_978._4_4_ + (float)local_978 * (float)local_978;
            if (fVar37 != fVar38) {
              if (fVar37 < 0.0) {
                fVar38 = (float)FUN_18061e150(fVar37);
              }
              else {
                fVar38 = SQRT(fVar37);
              }
            }
            local_1518 = (double)fVar38;
            local_1520 = (double)fVar35;
            local_1528 = (double *)(double)local_920._4_4_;
            local_1530 = (double *)(double)(float)local_920;
            local_1538 = (double)local_970;
            local_2088 = 0xdb35e39b27e1c185;
            uStack_2080 = 0xa05181ee77d57a06;
            local_2078 = 0x929654b1461b7377;
            uStack_2070 = 0xa5cea54bfef7110;
            local_2068 = 0xa70c9f7f916b7e19;
            uStack_2060 = 0x2b2d6d82aa402c0a;
            local_2058 = 0xc064ed9510bc010b;
            uStack_2050 = 0xfec09918395f26c4;
            local_2048 = 0x835e2313e2c48f8d;
            uStack_2040 = 0xf863c3261a551f0e;
            local_2038 = 0x56a0bc092c25563f;
            uStack_2030 = 0x67ff882c0a9bdf38;
            local_2028 = 0xe9fbbd57d9292e61;
            uStack_2020 = 0x24c1d5fafa9ec992;
            local_2018 = 0xe0a313cd38802513;
            uStack_2010 = 0x3a86d390ee208d6c;
            local_2008 = 0x95484dcb29dcfd95;
            local_2100 = -0x3a0dfb619b0546ea;
            uStack_2000 = 0xc5f2049e64fab916;
            builtin_strncpy(local_1ef8 + 0x290,
                            "[pixelsurf-wall] RIDE END cmd={} held {} commands, vz={:.2f} origin=({:.3f},{:.1f},{:.3f}) speed={:.1f} wall={} wall_dist={:.2f} yaw={:.2f}\n"
                            ,0x8d);
            local_1ef8[0x31d] = '\0';
            local_1ef8[0x31e] = '\0';
            local_1ef8[799] = '\0';
            lVar14 = -1;
            do {
              puStack_20d0 = (undefined1 *)(lVar14 + 1);
              lVar29 = lVar14 + 0x291;
              lVar14 = (longlong)puStack_20d0;
            } while (local_1ef8[lVar29] != '\0');
            local_20d8 = local_1ef8 + 0x290;
            if (DAT_180bbeabc != '\0') {
              local_2158 = &local_1508;
              local_2160 = &local_1510;
              local_2168 = (double *)&local_1f2c;
              local_2170 = &local_1518;
              local_2178 = &local_1520;
              local_2180 = &local_1528;
              local_2188 = &local_1530;
              FUN_180335c80(local_d28,local_988 + 8,&DAT_1808e3d44,&local_1538);
              local_12c8 = 10;
              puStack_12c0 = local_d28;
              local_20b8 = (char *)0xa;
              uStack_20b0 = SUB85(puStack_12c0,0);
              uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_12c0 >> 0x28);
              local_1f98._8_8_ = puStack_20d0;
              local_1f98._0_8_ = local_20d8;
              uVar15 = FUN_1801d97f0(local_10c0,local_1f98,&local_20b8);
              FUN_18030e280(uVar15);
              FUN_18015c010(local_10c0);
            }
            if (local_440 == '\0') {
              FUN_180329b50(&local_888,"wall-gone");
              DAT_1808e3d44 = 0;
            }
            else {
              pcVar26 = "vz-below-window";
              if (-5.62895 < local_970) {
                pcVar26 = "vz-above-window";
              }
              FUN_180329b50(&local_888,pcVar26);
              DAT_1808e3d44 = 0;
            }
          }
        }
        else {
          DAT_1808e3d98 = DAT_1808e3d98 + 1;
          _DAT_1808e3d98 = CONCAT44(0x10,DAT_1808e3d98);
          DAT_1808e3d44 = DAT_1808e3d44 + 1;
          DAT_1808e3df0 = local_920;
          DAT_1808e3df8 = fVar35;
          if (DAT_1808e3d44 == 1) {
            _DAT_1808e3de4 = local_920;
            _DAT_1808e3de0 = DAT_1808e3da0;
            _DAT_1808e3dec = fVar35;
          }
          else if ((int)DAT_1808e3d44 % 6 != 1) goto LAB_180328f25;
          if ((*(char *)(local_2100 + 0x48) != '\0') && (cVar34 = FUN_180303860(1), cVar34 != '\0'))
          {
            local_1360 = *(double **)(lVar14 + 0x18);
            local_1358 = *(undefined4 *)(lVar14 + 0x20);
            local_1354 = *(undefined8 *)(lVar14 + 0x24);
            local_134c = *(undefined4 *)(lVar14 + 0x2c);
            local_1f20 = (float)local_920 - auVar46._0_4_;
            local_1f1c = local_920._4_4_ - auVar46._0_4_;
            fVar38 = 48.0;
            local_1f18 = local_918 - 48.0;
            local_2180 = (double **)(lVar14 + 0x30);
            local_2178 = local_960;
            local_2188 = &local_1360;
            FUN_180419610(&DAT_180c64068,local_2c8,&local_920,&local_1f20);
            auVar43 = auVar46._0_16_;
            if ((((uint)local_21c & 0x7f800000) == 0x7f800000) || (1.0 <= local_21c)) {
              auVar56 = SUB6416(ZEXT464(0xbf800000),0);
            }
            else {
              auVar56 = ZEXT416((uint)(local_21c * fVar38));
            }
            auVar42 = vcmpss_avx(auVar43,auVar56,2);
            auVar42 = vblendvps_avx(auVar43,ZEXT416(local_230),auVar42);
            local_1370 = (double)auVar42._0_4_;
            local_1368 = (double)auVar56._0_4_;
            local_1580 = (double)DAT_1808e3d3c;
            auVar48 = ZEXT464((uint)(float)local_978);
            fVar38 = local_978._4_4_ * local_978._4_4_ + (float)local_978 * (float)local_978;
            fVar35 = (float)local_978;
            if (fVar38 != auVar46._0_4_) {
              if (fVar38 < 0.0) {
                auVar53._0_8_ = FUN_18061e150(fVar38);
                fVar35 = auVar48._0_4_;
                auVar53._8_56_ = extraout_var_08;
                auVar43 = auVar53._0_16_;
              }
              else {
                auVar43 = ZEXT416((uint)SQRT(fVar38));
              }
            }
            local_13a8 = (double)auVar43._0_4_;
            local_14b8 = (double)fVar35;
            local_14c0 = (double)local_920._4_4_;
            local_14f0 = (double *)(double)(float)local_920;
            local_14f8 = (double *)(double)local_970;
            local_1500 = (double)local_918;
            local_2088 = 0xdb35e39b27e1c185;
            uStack_2080 = 0xa05181ee77d57a06;
            local_2078 = 0x929654b1461b7377;
            uStack_2070 = 0xa5cea54bfef7110;
            local_2068 = 0xa70c9f7f916b7e19;
            uStack_2060 = 0x2b2d6d82aa402c0a;
            local_2058 = 0xc064ed9510bc010b;
            uStack_2050 = 0xfec09918395f26c4;
            local_2048 = 0x835e2313e2c48f8d;
            uStack_2040 = 0xf863c3261a551f0e;
            local_2038 = 0x56a0bc092c25563f;
            uStack_2030 = 0x67ff882c0a9bdf38;
            local_2028 = 0xe9fbbd57d9292e61;
            uStack_2020 = 0x24c1d5fafa9ec992;
            local_2018 = 0xe0a313cd38802513;
            uStack_2010 = 0x3a86d390ee208d6c;
            local_2008 = 0x95484dcb29dcfd95;
            uStack_2000 = 0xc5f2049e64fab916;
            local_1ff8 = 0x99be47e160dada07;
            local_2100 = 0x1047a904a2394520;
            uStack_1ff0 = 0x1047a904a2394520;
            builtin_strncpy(local_1ef8 + 0x3c0,
                            "[pixelsurf-wall] RIDE cmd={} t={} z={:.2f} vz={:.2f} x={:.3f} y={:.1f} vx={:.3f} speed={:.1f} yaw={:.3f} floor_gap={:.2f} floor_nz={:.2f} act={}\n"
                            ,0x92);
            local_1ef8[0x452] = '\0';
            local_1ef8[0x453] = '\0';
            local_1ef8[0x454] = '\0';
            local_1ef8[0x455] = '\0';
            local_1ef8[0x456] = '\0';
            local_1ef8[0x457] = '\0';
            local_1ef8[0x458] = '\0';
            local_1ef8[0x459] = '\0';
            local_1ef8[0x45a] = '\0';
            local_1ef8[0x45b] = '\0';
            local_1ef8[0x45c] = '\0';
            local_1ef8[0x45d] = '\0';
            local_1ef8[0x45e] = '\0';
            local_1ef8[0x45f] = '\0';
            lVar14 = -1;
            do {
              puStack_20d0 = (undefined1 *)(lVar14 + 1);
              lVar29 = lVar14 + 0x3c1;
              lVar14 = (longlong)puStack_20d0;
            } while (local_1ef8[lVar29] != '\0');
            local_20d8 = local_1ef8 + 0x3c0;
            if (DAT_180bbeabc != '\0') {
              local_2148 = (double *)&DAT_1808e3d48;
              local_2150 = &local_1370;
              local_2158 = &local_1368;
              local_2160 = &local_1580;
              local_2168 = &local_13a8;
              local_2170 = &local_14b8;
              local_2178 = &local_14c0;
              local_2180 = &local_14f0;
              local_2188 = &local_14f8;
              FUN_180335e30(local_bd8,local_988 + 8,&DAT_1808e3d44,&local_1500);
              local_12d8 = 0xc;
              puStack_12d0 = local_bd8;
              local_20b8 = &DAT_0000000c;
              uStack_20b0 = SUB85(puStack_12d0,0);
              uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_12d0 >> 0x28);
              local_1f98._8_8_ = puStack_20d0;
              local_1f98._0_8_ = local_20d8;
              uVar15 = FUN_1801d97f0(local_1100,local_1f98,&local_20b8);
              FUN_18030e280(uVar15);
              FUN_18015c010(local_1100);
            }
          }
        }
LAB_180328f25:
        cVar34 = DAT_180bbeabc;
        fVar37 = auVar59._0_4_;
        if ((1 < DAT_1808e3d98) && (DAT_1808e3d23 == '\0')) {
          DAT_1808e3d23 = '\x01';
          DAT_180b8fc33 = 1;
          DAT_180bbeabc = 1;
          local_1540 = (double *)(double)DAT_1808e3dbc;
          local_1548 = (double)DAT_1808e3db8;
          local_1550 = (double)DAT_1808e3db4;
          local_1558 = (double)local_970;
          local_2088 = 0xdb35e39b27e1c185;
          uStack_2080 = 0xa05181ee77d57a06;
          local_2078 = 0x929654b1461b7377;
          uStack_2070 = 0xa5cea54bfef7110;
          local_2068 = 0xa70c9f7f916b7e19;
          uStack_2060 = 0x2b2d6d82aa402c0a;
          local_2058 = 0xc064ed9510bc010b;
          uStack_2050 = 0xfec09918395f26c4;
          local_2048 = 0x835e2313e2c48f8d;
          uStack_2040 = 0xf863c3261a551f0e;
          local_2038 = 0x56a0bc092c25563f;
          local_2100 = 0x67ff882c0a9bdf38;
          uStack_2030 = 0x67ff882c0a9bdf38;
          builtin_strncpy(local_1ef8 + 0x60,
                          "[pixelsurf-wall] HIT: vz={:.3f} yaw={:.2f} normal=({:.3f},{:.3f}) air_ticks={} predicted={}\n"
                          ,0x5d);
          local_1ef8[0xbd] = '\0';
          local_1ef8[0xbe] = '\0';
          local_1ef8[0xbf] = '\0';
          lVar14 = -1;
          do {
            puStack_20d0 = (undefined1 *)(lVar14 + 1);
            lVar29 = lVar14 + 0x61;
            lVar14 = (longlong)puStack_20d0;
          } while (local_1ef8[lVar29] != '\0');
          local_20d8 = local_1ef8 + 0x60;
          local_2178 = (double *)&DAT_1808e3d68;
          local_2180 = (double **)&DAT_1808e3da0;
          local_2188 = &local_1540;
          FUN_180335b70(local_f68,&local_1558,&local_1550,&local_1548);
          local_12b8 = 6;
          puStack_12b0 = local_f68;
          local_20b8 = (char *)0x6;
          uStack_20b0 = SUB85(puStack_12b0,0);
          uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_12b0 >> 0x28);
          local_1f98._8_8_ = puStack_20d0;
          local_1f98._0_8_ = local_20d8;
          uVar15 = FUN_1801d97f0(local_10a0,local_1f98,&local_20b8);
          FUN_18030e280(uVar15);
          FUN_18015c010(local_10a0);
          _DAT_1808e3d6c = CONCAT11(1,DAT_1808e3d6c);
          DAT_180bbeabc = cVar34;
          FUN_18030e480();
          fVar37 = auVar59._0_4_;
        }
      }
      if (DAT_1808e3d20 != DAT_1808e3d24) {
        local_1560 = (double)fVar37;
        local_1568 = (double)local_970;
        local_1570 = (double *)(double)local_910;
        local_1578 = (double *)(double)DAT_1808e3db4;
        local_1588 = "RELEASE";
        if (DAT_1808e3d20 != '\0') {
          local_1588 = "LOCK";
        }
        local_2088 = 0xdb35e39b27e1c185;
        uStack_2080 = 0xa05181ee77d57a06;
        local_2078 = 0x929654b1461b7377;
        uStack_2070 = 0xa5cea54bfef7110;
        local_2068 = 0xa70c9f7f916b7e19;
        uStack_2060 = 0x2b2d6d82aa402c0a;
        local_2058 = 0xc064ed9510bc010b;
        uStack_2050 = 0xfec09918395f26c4;
        local_2048 = 0x835e2313e2c48f8d;
        uStack_2040 = 0xf863c3261a551f0e;
        local_2038 = 0x56a0bc092c25563f;
        local_2100 = 0x67ff882c0a9bdf38;
        uStack_2030 = 0x67ff882c0a9bdf38;
        builtin_strncpy(local_1ef8,
                        "[pixelsurf-wall] {} cmd={} ground={} yaw={:.2f} wall_dist={:.2f} vz={:.2f} speed={:.1f}\n"
                        ,0x59);
        local_1ef8[0x59] = '\0';
        local_1ef8[0x5a] = '\0';
        local_1ef8[0x5b] = '\0';
        local_1ef8[0x5c] = '\0';
        local_1ef8[0x5d] = '\0';
        local_1ef8[0x5e] = '\0';
        local_1ef8[0x5f] = '\0';
        lVar14 = -1;
        do {
          puStack_20d0 = (undefined1 *)(lVar14 + 1);
          lVar29 = lVar14 + 1;
          lVar14 = (longlong)puStack_20d0;
        } while (local_1ef8[lVar29] != '\0');
        local_20d8 = local_1ef8;
        if (DAT_180bbeabc != '\0') {
          local_2170 = &local_1560;
          local_2178 = &local_1568;
          local_2180 = &local_1570;
          local_2188 = &local_1578;
          FUN_180335a30(local_e98,&local_1588,local_988 + 8,&local_928);
          local_12a8 = 7;
          puStack_12a0 = local_e98;
          local_20b8 = (char *)0x7;
          uStack_20b0 = SUB85(puStack_12a0,0);
          uStack_20ab._0_3_ = (undefined3)((ulonglong)puStack_12a0 >> 0x28);
          local_1f98._8_8_ = puStack_20d0;
          local_1f98._0_8_ = local_20d8;
          uVar15 = FUN_1801d97f0(local_1080,local_1f98,&local_20b8);
          FUN_18030e280(uVar15);
          FUN_18015c010();
        }
        DAT_1808e3d24 = DAT_1808e3d20;
      }
      DAT_1808e3db0 = local_970;
      _DAT_1808e3dac = local_970;
      if ((_DAT_1808e3d84 < 0) || (DAT_1808e3d20 == '\0')) {
LAB_1803299ae:
        DAT_1808e3d8d = 0;
      }
      else {
        if (local_928 == 0) {
          if ((DAT_1808e3da0 < DAT_1808e3d88) ||
             ((-1 < DAT_1808e3d84 && (DAT_1808e3d84 <= DAT_1808e3da0)))) goto LAB_1803299ae;
        }
        else if ((DAT_1808e3d90 != 2) || (DAT_1808e3d88 != 0)) goto LAB_1803299ae;
        DAT_1808e3d8d = 1;
      }
      local_2168 = (double *)CONCAT44(local_2168._4_4_,DAT_1808e3d34);
      local_2170 = (double *)CONCAT71(local_2170._1_7_,DAT_1808e3d74 == '\0');
      local_2178 = (double *)CONCAT71(local_2178._1_7_,DAT_1808e3d33);
      local_2180 = (double **)CONCAT71(local_2180._1_7_,DAT_1808e3d8d);
      local_2188 = (double **)CONCAT71(local_2188._1_7_,DAT_1808e3d32);
      FUN_18031e220(local_988,local_960,DAT_1808e3d3c,local_928);
      if (DAT_1808e3d90 == 1) {
        FUN_18031e380(local_988,local_968);
      }
      else if (DAT_1808e3d90 == 2) {
        FUN_18031dff0(local_988,local_968,DAT_1808e3d2c);
      }
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
    }
  }
  pcVar26 = "bad state";
LAB_180329ac0:
  FUN_18032a330(&local_850,pcVar26);
code_r0x0001803247c0:
  piVar31 = piVar31 + 1;
  if (piVar31 == (int *)&local_148) goto LAB_1803247fd;
  goto LAB_180324700;
}



