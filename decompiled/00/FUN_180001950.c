// FUN_180001950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180001950 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_180001950(ushort *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  NTSTATUS NVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *******pppppppuVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulonglong uVar40;
  uint uVar41;
  undefined1 auVar42 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined8 *******local_4d0 [2];
  undefined8 local_4c0;
  ulonglong local_4b8;
  undefined8 *******local_4b0;
  undefined8 local_4a8;
  undefined8 *******local_4a0 [2];
  undefined8 local_490;
  ulonglong local_488;
  undefined *local_480;
  undefined8 local_478;
  undefined8 *******local_470;
  undefined8 local_468;
  undefined1 *local_460;
  undefined8 local_458;
  uint *local_450;
  BCRYPT_HASH_HANDLE *local_448;
  ushort **local_440;
  ulonglong local_438;
  ulonglong local_430;
  ulonglong local_428;
  ulonglong local_420;
  ulonglong local_418;
  ulonglong local_410;
  ulonglong local_408;
  undefined8 local_400;
  ulonglong local_3f8;
  ulonglong local_3f0;
  ulonglong local_3e8;
  undefined8 local_3e0;
  ulonglong local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  ulonglong local_3b8;
  undefined8 local_3b0;
  ulonglong local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  uint local_330;
  uint local_32c;
  uint local_328;
  uint local_324;
  uint local_320;
  uint local_31c;
  uint local_318;
  int local_314;
  uint local_310;
  uint local_30c;
  int local_308;
  int local_304;
  int local_300;
  int local_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  uint local_2e8;
  int local_2e4;
  int local_2e0;
  int local_2dc;
  undefined4 local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  int local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  int local_2bc;
  undefined4 local_2b8;
  int local_2b4;
  int local_2b0;
  undefined4 local_2ac;
  int local_2a8;
  int local_2a4;
  uint local_2a0;
  uint local_29c;
  ushort *local_298;
  BCRYPT_ALG_HANDLE local_290;
  BCRYPT_HASH_HANDLE local_288;
  ulonglong local_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  ulonglong local_260;
  undefined8 local_258;
  ulonglong local_250;
  ulonglong local_248;
  undefined8 local_240;
  ulonglong local_238;
  ulonglong local_230;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  undefined8 local_210;
  undefined8 local_208;
  ulonglong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  uint local_1a4;
  undefined8 local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169 [2];
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162 [3];
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d [2];
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [3];
  undefined1 local_153 [2];
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f [4];
  undefined1 local_14b [2];
  undefined1 local_149 [2];
  undefined1 local_147 [2];
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d [3];
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [2];
  undefined1 local_134 [3];
  undefined1 local_131;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c;
  undefined1 local_12b;
  undefined1 local_12a;
  undefined1 local_129;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122 [2];
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e [5];
  undefined1 local_119;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  undefined1 local_115;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 local_111;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d [2];
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108 [3];
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  ulonglong local_68;
  undefined8 *******local_60;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = 0xea16f98b;
  local_4c = 0x6c2bcf2f;
  uVar19 = (uint)&local_101;
  local_54 = uVar19 ^ 0x22acafbf;
  if ((param_1 == (ushort *)0x0) || (DAT_180bacc54 == '\0')) {
    uVar14 = (uint)&local_111 ^ 0x4517201e;
    uVar7 = (uint)&local_111 ^ 0xbae8dfe1;
    uVar19 = ((uVar19 ^ 0x16257437) & uVar7 | (uVar19 ^ 0xe9da8bc8) & uVar14) ^
             (uVar7 & (uVar19 ^ 0x16257437) | (uVar19 ^ 0xe9da8bc8) & uVar14);
  }
  else {
    uVar14 = (uint)&local_112 ^ 0xffaf97e4;
    uVar28 = ~local_54;
    uVar20 = (uint)&local_112 ^ 0x50681b;
    uVar15 = (uint)local_122 ^ 0xd715cca3;
    uVar16 = (uint)local_122 ^ 0x28ea335c;
    uVar41 = local_54 * local_54 * local_54 * local_54 * local_54;
    uVar38 = local_54 * local_54 * local_54 * local_54 * local_54;
    uVar32 = (uint)&local_114 ^ 0xed108f2e;
    uVar36 = ~uVar38;
    uVar21 = (uint)&local_114 ^ 0x12ef70d1;
    uVar7 = (uint)&local_115 ^ 0xe1f8ed08;
    uVar37 = (uint)&local_115 ^ 0x1e0712f7;
    uVar33 = uVar19 ^ 0x85509df7;
    uVar7 = (uVar7 & 0x3cc7668b | uVar37 & 0xc3389974) ^ uVar7 ^ (uVar37 ^ uVar7) & 0xc3389974;
    uVar14 = (uVar7 + 0xf02db593 & uVar7) +
             ((uVar21 ^ uVar32) & uVar41 ^ uVar32 ^ (uVar38 & uVar21 | uVar32 & uVar36)) +
             (uVar36 & uVar41) * -2 +
             (((uint)&local_113 ^ 0xd5fda707 ^ (uint)&local_113 ^ 0x2a0258f8 ^ (uVar28 | 0x580397fa)
              | ~((uVar20 & 0xa7fc6805 | uVar14 & 0x580397fa) ^
                 (local_54 & uVar20 | uVar14 & uVar28)) & (uVar28 | 0x580397fa)) ^ 0xffffffff);
    uVar7 = (uint)&local_116 ^ 0x4cafa1a7;
    uVar20 = (uint)&local_117;
    uVar7 = (uVar7 ^ (uVar33 & uVar7 | ((uint)&local_116 ^ 0xb3505e58) & (uVar19 ^ 0x7aaf6208))) &
            uVar14;
    uVar20 = uVar20 ^ 0xa3e39a7b ^
             (uVar20 ^ 0x5c1c6584 ^ uVar20 ^ 0xa3e39a7b) & uVar14 ^ uVar20 ^ 0xa3e39a7b |
             uVar19 ^ 0x7aaf6208;
    uVar14 = ~uVar7;
    uVar32 = uVar20 | uVar14;
    uVar37 = (uint)&local_118 ^ 0x68f1ad30;
    uVar36 = (uint)&local_118 ^ 0x970e52cf;
    uVar21 = ~uVar32;
    uVar14 = (uVar7 & uVar36 | uVar14 & uVar37) ^ (uVar37 ^ uVar36) & uVar20 ^ uVar36;
    uVar36 = (uint)&local_119 ^ 0xb58b6b60;
    uVar7 = (uint)&local_119 ^ 0x4a74949f;
    uVar20 = uVar14 & uVar21;
    uVar7 = (uVar7 ^ uVar36) & uVar14 ^ uVar36 ^ (uVar7 & uVar21 | uVar32 & uVar36) | uVar20;
    uVar22 = uVar20 & uVar7;
    uVar29 = uVar20 ^ uVar7 | uVar22;
    uVar34 = uVar33 * uVar33 * uVar33 * uVar33 * uVar33;
    uVar39 = uVar33 * uVar33 * uVar33 * uVar33 * uVar33;
    uVar23 = (uint)local_11e ^ 0x463bc0b5;
    uVar7 = (uint)local_11e ^ 0xb9c43f4a;
    uVar14 = (uint)&local_11f ^ 0x9ce26e19 ^ (uint)&local_11f ^ 0x631d91e6;
    uVar35 = (uint)&local_120 ^ 0x2a3cba98;
    uVar33 = (uVar15 & uVar28 | local_54 & uVar16) ^ (uVar16 ^ uVar15) & local_54 ^ uVar15 |
             local_54;
    uVar15 = (uint)&local_123 ^ 0x9c6faba5;
    uVar30 = (uVar15 ^ (local_54 & uVar15 | ((uint)&local_123 ^ 0x6390545a) & ~local_54)) & uVar33;
    uVar33 = ~local_54 | uVar33;
    uVar37 = (uint)&local_124 ^ 0x7cce5da5;
    uVar15 = (uint)&local_124 ^ 0x8331a25a;
    uVar31 = uVar37 ^ uVar15;
    uVar16 = (uint)&local_125 ^ 0xe47817c8;
    uVar20 = (uint)&local_126 ^ 0x602e6f2e;
    uVar24 = (uint)&local_126 ^ 0x9fd190d1;
    uVar36 = (uint)&local_127 ^ 0xa88095a8;
    uVar28 = (uint)&local_128 ^ 0xb55f04bc;
    uVar21 = (uint)&local_128 ^ 0x4aa0fb43;
    uVar38 = (uVar21 & 0xfbe54632 | uVar28 & 0x41ab9cd) ^ (uVar21 & 0xfbe54632 | uVar28 & 0x41ab9cd)
    ;
    uVar25 = (uint)&local_129 ^ 0x6a14536f;
    uVar21 = (uint)&local_129 ^ 0x95ebac90;
    uVar28 = (uint)&local_12a;
    uVar32 = (uint)&local_12b ^ 0x9889dcdd;
    uVar41 = (uint)&local_12b ^ 0x67762322;
    uVar26 = (uint)&local_12c ^ 0x3da62cf5;
    if ((uVar26 ^ (uVar32 & 0x92a4d8ef | uVar41 & 0x6d5b2710) ^
         (uVar41 ^ uVar32) & 0x6d5b2710 ^ uVar32 ^
        ((((((uint)&local_127 ^ 0x577f6a57) & 0xd1a27d8a | uVar36 & 0x2e5d8275) ^ uVar36 ^
          0x2e5d8275) +
         (((uVar15 ^ uVar31 & uVar33 ^ uVar31 & uVar30 ^ uVar37) +
          ((uVar30 | uVar33) ^ 0x7fffffff) * -2) -
         ((uVar24 & 0x25a47c64 | uVar20 & 0xda5b839b) ^ uVar20 ^
         (uVar24 ^ uVar20) &
         ((((uint)&local_125 ^ 0x1b87e837) & 0x25a47c64 | uVar16 & 0xda5b839b) ^ uVar16)))) -
        ((uVar28 ^ 0xeb2c8384 ^
         (uVar28 ^ 0x14d37c7b ^ uVar28 ^ 0xeb2c8384) &
         (uVar38 & 0xe7135c13 |
         (uVar21 & 0xe7135c13 | uVar25 & 0x18eca3ec) ^ uVar25 ^ (uVar21 ^ uVar25) & uVar38) ^
         uVar28 ^ 0xeb2c8384) & uVar38)) + 1 ^ uVar26) * 0x4b5d331f +
        ((((uint)&local_120 ^ 0xd5c34567) & 0x3af3d7 | uVar35 & 0xffc50c28) ^ uVar35 ^ 0x3af3d7) +
        (((uVar14 & uVar34 ^ uVar14) & uVar39) -
        ((uVar23 ^ uVar7 ^ (uVar7 ^ uVar23) & uVar39) & uVar34)) +
        (uVar22 ^ uVar29) + (uVar29 & uVar22) * 2 == (uint)*param_1) {
      uVar21 = (uint)&local_13a ^ 0xfbb419f2;
      uVar36 = (uint)&local_13a ^ 0x44be60d;
      uVar7 = ~(local_54 | 0x94a944df);
      uVar14 = (uint)&local_12d ^ 0x32cf3ec9;
      uVar28 = uVar7 | local_54 & 0x94a944df;
      uVar24 = (uVar14 ^ ((local_54 | 0x94a944df) & uVar14 | ((uint)&local_12d ^ 0x49108120) & uVar7
                         )) & local_54 & 0x94a944df;
      uVar25 = (uint)&local_12e ^ 0xebd4df21;
      uVar37 = (uint)&local_12e ^ 0x142b20de;
      uVar7 = (uint)&local_12f ^ 0xc93380ba;
      uVar38 = (uint)&local_130 ^ 0x83107195;
      uVar41 = (uint)&local_131 ^ 0x1ab1a50d;
      uVar32 = (uint)&local_131 ^ 0xe54e5af2;
      uVar14 = (uint)local_134 ^ 0x410e452a;
      uVar15 = (uint)local_134 ^ 0xbef1bad5;
      uVar22 = (uVar15 & 0x1d6d0508 | uVar14 & 0xe292faf7) ^ 0xacae077e ^
               (uVar15 & 0x1d6d0508 | uVar14 & 0xe292faf7) ^ 0xacae077e;
      uVar15 = (uint)local_136 ^ 0xb9f8cfd3;
      uVar23 = (uint)&local_137 ^ 0xe70feec5;
      uVar16 = (uint)&local_137 ^ 0x18f0113a;
      uVar33 = (uint)&local_138 ^ 0x7230e525;
      uVar20 = (uint)&local_139 ^ 0xb400f2f;
      uVar14 = (uint)&local_139 ^ 0xf4bff0d0;
      uVar7 = (uVar14 & 0x94a9449f | uVar20 & 0x6b56bb60) ^ (local_54 & uVar14 | uVar20 & ~local_54)
              ^ uVar33 ^
              (-((uVar16 & 0x8205e9a0 | uVar23 & 0x7dfa165f) ^ uVar23 ^
                (uVar16 ^ uVar23) &
                ((((uint)local_136 ^ 0x4607302c) & 0x8205e9a0 | uVar15 & 0x7dfa165f) ^ uVar15)) -
              (uVar22 + 0xa1373e07 & uVar22)) * -0x3b443d77 +
              (((uVar37 & ~uVar28 | uVar28 & uVar25) ^ uVar25 ^ (uVar37 ^ uVar25) & uVar24) -
              (((uVar7 ^ (~uVar28 & uVar7 | ((uint)&local_12f ^ 0x36cc7f45) & uVar28)) & uVar24) * 2
              + ((uVar32 & 0x29702acd | uVar41 & 0xd68fd532) ^ uVar41 ^
                (uVar32 ^ uVar41) &
                ((((uint)&local_130 ^ 0x7cef8e6a) & 0x29702acd | uVar38 & 0xd68fd532) ^ uVar38)))) ^
              uVar33;
      uVar16 = ((uVar36 ^ uVar21) & local_54 ^ uVar21 ^ (uVar21 & ~local_54 | local_54 & uVar36)) *
               -0x666e630b;
      uVar14 = uVar7 | uVar16;
      uVar16 = uVar16 & uVar7;
      uVar20 = (uVar7 * 0x50507567) % 0xffd;
      uVar28 = (uVar7 * 0x50507567) % 0xffd;
      uVar15 = (uint)local_13d ^ 0xd4ef0748;
      uVar32 = (uint)local_13d ^ 0x2b10f8b7;
      uVar33 = (uint)&local_13e ^ 0xc23d64c4;
      uVar21 = (uint)&local_13f ^ 0x909d1cf7;
      uVar7 = (uint)&local_13f ^ 0x6f62e308;
      auVar42._0_4_ = SUB84(&local_140,0);
      auVar42._4_4_ = (int)&local_141;
      auVar42._8_8_ = 0;
      uVar21 = (uVar7 & 0x8fad7352 | uVar21 & 0x70528cad) ^ uVar21 ^ (uVar7 ^ uVar21) & 0x8fad7352;
      uVar7 = uVar21 * 2;
      auVar42 = ZEXT416(uVar7 & uVar21) |
                ((auVar42 ^ _DAT_180669490) & ZEXT416(uVar7) |
                ~ZEXT416(uVar7) & (ZEXT816(0xb27381ce55d4f044) ^ auVar42)) ^
                (ZEXT416(uVar21) & (auVar42 ^ _DAT_180669490) |
                ~ZEXT416(uVar21) & (ZEXT816(0xb27381ce55d4f044) ^ auVar42));
      uVar21 = (uint)&local_142 ^ 0x83b38a8a;
      uVar7 = (uint)&local_142 ^ 0x7c4c7575;
      uVar7 = (uVar7 & 0xa9d56cec | uVar21 & 0x562a9313) ^
              (uVar7 & 0xa9d56cec | uVar21 & 0x562a9313);
      if ((int)(((((uVar20 & uVar32 | uVar15 & ~uVar20) ^ (uVar32 ^ uVar15) & uVar28 ^ uVar15) -
                 (auVar42._4_4_ +
                 auVar42._0_4_ +
                 (((uVar20 & uVar33 | ((uint)&local_13e ^ 0xb3b) & ~uVar20) ^ uVar33) & uVar28) * 2)
                 ) + (~uVar16 & uVar14) + (uVar16 & uVar14) * 2) - (uVar7 * 2 | uVar7)) <=
          *(int *)(param_1 + 0x1e)) {
        uVar32 = uVar19 ^ 0xa3dd6800;
        uVar14 = (uint)&local_143 ^ 0x10a3bd67;
        uVar7 = (uint)&local_143 ^ 0xef5c4298;
        uVar28 = (uVar7 & 0x8171c947 | uVar14 & 0x7e8e36b8) ^ uVar14 ^ (uVar7 ^ uVar14) & local_54;
        uVar14 = (uint)&local_144 ^ 0xd292d17d;
        uVar7 = (uint)&local_145 ^ 0x7d9358c1 ^ (uint)&local_145 ^ 0x826ca73e;
        uVar20 = (uVar7 & uVar28 ^ uVar7) & uVar32;
        uVar33 = (uVar14 ^ (uVar32 & uVar14 |
                           (uVar19 ^ 0x5c2297ff) & ((uint)&local_144 ^ 0x2d6d2e82))) & uVar28;
        uVar16 = (uint)local_147 ^ 0xa8836c05;
        uVar21 = (uint)local_147 ^ 0x577c93fa;
        uVar14 = (uint)local_149 ^ 0xf8846ded;
        uVar36 = ~(uVar32 * uVar28);
        uVar7 = (uint)local_149 ^ 0x77b9212;
        uVar15 = (uint)local_14b ^ 0x362fdec1;
        uVar21 = ((((uint)local_14b ^ 0xc9d0213e) & 0x304ba49b | uVar15 & 0xcfb45b64) ^ uVar15 ^
                 0xcfb45b64) +
                 ((uVar7 ^ uVar14) & uVar28 * uVar32 ^ uVar14 ^
                 (uVar32 * uVar28 & uVar7 | uVar14 & uVar36)) + (uVar36 & uVar28 * uVar32) * -2 + 1
                 + ((uVar20 & uVar33 | uVar20 ^ uVar33) -
                   ((uVar21 & 0x4c65a5cb | uVar16 & 0xb39a5a34) ^
                   (uVar21 & 0x4c65a5cb | uVar16 & 0xb39a5a34)));
        uVar14 = (uint)local_14f ^ 0x8620e7f6;
        uVar7 = (uint)local_14f ^ 0x79df1809;
        uVar7 = (uVar7 & 0x9847607c | uVar14 & 0x67b89f83) ^ (uVar7 ^ uVar14) & 0x9847607c ^ uVar14;
        uVar14 = (uint)&local_150 ^ 0xbe0ec5ed;
        uVar15 = (uint)&local_150 ^ 0x41f13a12;
        uVar14 = (uVar14 & 0x633be0a7 | uVar15 & 0x9cc41f58) ^
                 (uVar15 ^ uVar14) & 0x9cc41f58 ^ uVar14;
        uVar15 = ((uVar7 + 0x554cf635 & uVar7) - ((uVar14 | 0xd021d5ae) & uVar14)) * 0x2f3e9371;
        uVar20 = (uint)&local_151 ^ 0x271cb759;
        uVar33 = (uint)local_153 ^ 0x4359c12;
        uVar7 = (uint)local_153 ^ 0xfbca63ed;
        uVar28 = uVar21 ^ 0x21a30fa4 ^ uVar15 ^ 0x21a30fa4;
        bVar3 = (byte)&local_102;
        uVar32 = uVar28 << (bVar3 & 0x1f);
        uVar16 = uVar28 >> (-bVar3 & 0x1f);
        uVar14 = (uint)local_156 ^ 0xd19e2628;
        uVar14 = (uVar28 >> 0xd ^ (uVar16 & uVar32 | uVar14 ^ uVar16 ^ uVar32 ^ uVar14)) * uVar28 *
                 0x28b2b83;
        uVar28 = (uVar28 >> 0xd ^ (uVar28 >> (-bVar3 & 0x1f) | uVar28 << (bVar3 & 0x1f))) * uVar28 *
                 0x28b2b83;
        uVar36 = (uint)&local_157 ^ 0x97389b96 ^ (uint)&local_157 ^ 0x68c76469;
        uVar32 = (uint)&local_158 ^ 0x2f760ed9;
        uVar16 = (uint)&local_159 ^ 0x73881a03;
        uVar37 = (uint)&local_159 ^ 0x8c77e5fc;
        if (*(int *)(param_1 + 0x1e) <=
            (int)(((uVar7 ^ uVar33) & 0x8ed1b9f6 ^ uVar33 ^
                  (uVar7 & 0x8ed1b9f6 | uVar33 & 0x712e4609)) * 0x5ff1fdb +
                  (uVar20 ^ uVar15 & uVar21 ^ (uVar15 | uVar21) ^ uVar20) + (uVar15 & uVar21) * 2 +
                  (uVar28 ^ uVar14) + ((uVar36 & uVar28 ^ uVar36) & uVar14) * -2 +
                  ((uVar37 ^ uVar16) & 0xbc63e952 ^ uVar16 ^
                  (uVar37 & 0xbc63e952 | uVar16 & 0x439c16ad)) * 0x66389d9 +
                  ((((uint)&local_158 ^ 0xd089f126) & 0x706b0c02 | uVar32 & 0x8f94f3fd) ^ uVar32 ^
                  0x8f94f3fd) + 1)) {
          lVar9 = (longlong)*(int *)(param_1 + 0x1e);
          local_1a4 = *(uint *)((longlong)param_1 + lVar9 + 0x50);
          uVar7 = *(uint *)((longlong)param_1 + lVar9 + 0x54);
          uVar10 = (ulonglong)uVar7;
          if ((((*(int *)((longlong)param_1 + lVar9) == 0x4550) &&
               (uVar40 = (longlong)param_1 + lVar9, *(short *)(uVar40 + 0x18) == 0x20b)) &&
              (uVar14 = ((~(local_54 * local_54) & local_54 * local_54) -
                        (~(local_54 * local_54) & local_54 * local_54)) * -0xd3d799,
              uVar12 = ((ulonglong)uVar14 << 0x20) * 0xf0,
              uVar13 = ((ulonglong)uVar14 << 0x20) * 0xf0,
              CONCAT44(uVar14,0xf0) + (uVar13 ^ uVar12) + (~uVar12 & uVar13) * -2 ==
              (ulonglong)*(ushort *)(uVar40 + 0x14))) &&
             (((*(ushort *)(uVar40 + 6) != 0 &&
               ((int)(uint)*(ushort *)(uVar40 + 6) <=
                (int)(uVar19 ^ 0x32b47392 ^ local_54 ^ 0x1018dc4d))) && (uVar7 <= local_1a4)))) {
            uVar14 = (local_54 * 0x4ac63545) % 0x3f1;
            uVar7 = (local_54 * 0x4ac63545) % 0x3f1;
            uVar14 = ((uVar19 ^ 0x32b01960) + (uVar7 ^ uVar14) + 0x6c2bcf2f) -
                     ((~uVar14 & uVar7) * 2 + 0x6c2bcf2f);
            iVar17 = (uVar19 ^ 0x3ab01960) + uVar14;
            uVar15 = iVar17 * iVar17 * iVar17 * iVar17;
            uVar7 = iVar17 * iVar17 * iVar17 * iVar17;
            uVar14 = (~uVar15 & uVar7) + ((uVar14 ^ uVar19 ^ 0x3ab01960) - (~uVar7 & uVar15));
            bVar3 = (byte)&local_103 & 0x1f;
            bVar4 = (byte)&local_103 & 0x1f;
            uVar7 = (uVar14 >> 0xd ^ (uVar14 << bVar3 | uVar14 >> 0x20 - bVar3)) * uVar14 *
                    0x4fcd8a77;
            uVar15 = (uVar14 >> 0xd ^ (uVar14 << bVar4 | uVar14 >> 0x20 - bVar4)) * uVar14 *
                     0x4fcd8a77;
            if (local_1a4 <=
                (~uVar7 & uVar15) +
                ((uVar14 * uVar14 * uVar14 * uVar14 * uVar14 +
                 ((uVar14 + 0x6c2bcf2f) - (uVar14 * uVar14 * uVar14 * uVar14 * uVar14 + 0x6c2bcf2f))
                 ) - (~uVar15 & uVar7))) {
              uVar27 = (ulonglong)*(int *)(param_1 + 0x1e);
              uVar14 = (uVar19 ^ 0x576e46c2) & (uVar19 ^ 0xa891b835) |
                       (uVar19 ^ 0x576e47ca) & (uVar19 ^ 0xa891b93d);
              bVar3 = (byte)&local_104 & 0x1f;
              bVar4 = (byte)&local_104 & 0x1f;
              uVar15 = (uVar14 >> 0xd ^ (uVar14 << bVar3 | uVar14 >> 0x20 - bVar3)) * uVar14 *
                       0x11e14453;
              uVar7 = (uVar14 >> 0xd ^ (uVar14 << bVar4 | uVar14 >> 0x20 - bVar4)) * uVar14 *
                      0x11e14453;
              uVar12 = (ulonglong)
                       ((uVar14 - uVar14 * uVar14 * uVar14 * uVar14 * uVar14) +
                        uVar14 * uVar14 * uVar14 * uVar14 * uVar14 + (uVar7 ^ uVar15) +
                       (~uVar7 & uVar15) * -2);
              uVar13 = uVar12 ^ uVar27;
              local_68 = uVar12 & uVar27;
              lVar9 = uVar12 + uVar27;
              bVar3 = (byte)&local_105 & 0x3f;
              bVar4 = (byte)&local_105 & 0x3f;
              uVar12 = (uVar13 >> 0xd ^ (uVar13 << bVar3 | uVar13 >> 0x40 - bVar3)) * uVar13 *
                       0x7b59e171;
              uVar27 = (uVar13 >> 0xd ^ (uVar13 << bVar4 | uVar13 >> 0x40 - bVar4)) * uVar13 *
                       0x7b59e171;
              local_60 = (undefined8 *******)(uVar27 ^ uVar12);
              local_1a0 = 0;
              local_198 = 0;
              local_190 = (ulonglong)*(ushort *)(uVar40 + 6);
              uVar14 = ((uVar19 ^ 0xbedc7d86) & (uVar19 ^ 0x41238251)) +
                       ((uVar19 ^ 0xbedc7dae) & (uVar19 ^ 0x41238279));
              local_188 = 0;
              local_180 = (ulonglong)uVar14;
              uVar7 = (uVar19 ^ 0x392ff7d6) & (uVar19 ^ 0xc6d00829) ^
                      (uVar19 ^ 0x392ff7d6) & (uVar19 ^ 0xc6d00829);
              uVar16 = (uVar7 * 0x7b8f36a3) % 0x3f1;
              uVar15 = (uVar7 * 0x7b8f36a3) % 0x3f1;
              if (uVar13 + (lVar9 * lVar9 - lVar9 * lVar9) * (lVar9 * lVar9 + lVar9 * lVar9) +
                  (longlong)local_60 + (local_68 - (~uVar27 & uVar12)) * 2 +
                  CONCAT44((uVar15 ^ uVar16) + uVar7 + (~uVar16 & uVar15) * -2,uVar14) * local_190
                  <= uVar10) {
                local_290 = (BCRYPT_ALG_HANDLE)0x0;
                local_288 = (BCRYPT_HASH_HANDLE)0x0;
                local_298 = param_1;
                local_178 = uVar10;
                NVar8 = BCryptOpenAlgorithmProvider(&local_290,L"SHA256",(LPCWSTR)0x0,0);
                if (NVar8 < (int)((~(local_54 * local_54) & local_54 * local_54) * -0x2127c191 +
                                  (~(local_54 * local_54) & local_54 * local_54) * 0x2127c191 +
                                 (local_54 ^ 0xfa740c22 ^ local_54 ^ 0xfa740c22))) {
                  local_54 = local_54 ^ 0x6efb92de;
                  uVar19 = local_54 * local_54 * local_54 * local_54;
                  uVar7 = local_54 * local_54 * local_54 * local_54;
                  uVar19 = (~uVar19 & uVar7) - (~uVar7 & uVar19);
                }
                else {
                  uVar7 = local_54 ^ 0x58b2fd1b;
                  bVar3 = (byte)local_108 & 0x1f;
                  bVar4 = (byte)local_108 & 0x1f;
                  uVar14 = (uVar7 >> 0xd ^ (uVar7 << bVar3 | uVar7 >> 0x20 - bVar3)) * uVar7 *
                           0x61e6390b;
                  uVar19 = (uVar7 >> 0xd ^ (uVar7 << bVar4 | uVar7 >> 0x20 - bVar4)) * uVar7 *
                           0x61e6390b;
                  local_68 = 0;
                  NVar8 = BCryptCreateHash(local_290,&local_288,(PUCHAR)0x0,0,(PUCHAR)0x0,
                                           (local_54 * 0x502e6543) % 0x3f1 + uVar7 +
                                           (-(local_54 * local_54 * local_54 * local_54 * local_54)
                                           - (local_54 * 0x502e6543) % 0x3f1) +
                                           local_54 * local_54 * local_54 * local_54 * local_54 +
                                           (uVar19 ^ uVar14) + (~uVar19 & uVar14) * -2 ^ local_54 ^
                                           0x58b2fd1b,local_54 ^ 0x29edfae0 ^ local_54 ^ 0x29edfae0)
                  ;
                  local_450 = &local_1a4;
                  local_440 = &local_298;
                  local_448 = &local_288;
                  if ((int)((0x34671d0c - local_4c & local_4c + 0xcb98e2f3) * -0x5dc6ca1a) <= NVar8)
                  {
                    local_68 = FUN_18000d930(&local_450,0,uVar10);
                  }
                  local_30c = local_54;
                  local_318 = local_54;
                  local_2b0 = local_4c + 0x2fdd0651;
                  local_2c0 = local_4c + 0x2fdd0651;
                  local_2e4 = local_4c * 2;
                  local_29c = local_4c;
                  local_2a0 = local_4c;
                  local_2ac = 0;
                  local_2b4 = local_4c + 0xb1cf70d;
                  local_2ec = local_4c + 0xb1cf70d;
                  local_2a8 = local_4c + 0xdbbb0a1;
                  local_2a4 = local_4c + 0x6b608963;
                  local_2e8 = local_54;
                  local_328 = local_54;
                  local_2e0 = local_4c + 0xcf3dbb57;
                  local_2dc = local_4c + 0x9c45aa3b;
                  local_314 = local_4c + 0x9c45aa3b;
                  local_2d8 = 0;
                  local_2d4 = local_4c + 0x3a55657;
                  local_2d0 = local_4c + 0xa7dae8e7;
                  local_2cc = local_4c + 0x6b2bc1e1;
                  local_2f0 = local_4c + 0x6b2bc1e1;
                  local_2bc = local_4c + 0xcfffd825;
                  local_2c8 = local_4c + 0x17e6919f;
                  local_2c4 = 0;
                  local_2b8 = 0;
                  local_2f8 = local_4c + 0xdb581621;
                  local_3b8 = (ulonglong)(local_4c + 0xdb581621);
                  local_3a0 = 0;
                  local_2f4 = local_4c + 0x67d3207f;
                  local_3a8 = (ulonglong)(local_4c + 0x67d3207f);
                  local_3b0 = 0;
                  local_400 = 0;
                  auVar1._8_8_ = 0;
                  auVar1._0_8_ = uVar40 * 0x8f2f5229;
                  local_390 = SUB168(auVar1 * ZEXT816(0x5197f7d73404147),8);
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar40 * 0x8f2f5229;
                  local_398 = SUB168(auVar2 * ZEXT816(0x5197f7d73404147),8);
                  local_3e0 = 0;
                  local_2fc = local_4c + 0x746e0191;
                  local_3c0 = (ulonglong)(local_4c + 0x746e0191);
                  local_308 = local_4c + 0x7e100285;
                  local_3d8 = (ulonglong)(local_4c + 0x7e100285);
                  local_300 = local_4c + 0x17f51209;
                  local_3d0 = (ulonglong)(local_4c + 0x17f51209);
                  local_304 = local_4c + 0xc966c8e9;
                  local_3e8 = (ulonglong)(local_4c + 0xc966c8e9);
                  local_3c8 = (ulonglong)*(ushort *)(uVar40 + 0x14);
                  local_d0 = local_54;
                  local_60 = (undefined8 *******)(ulonglong)local_54;
                  local_420 = (ulonglong)local_4c;
                  local_374 = local_4c;
                  local_370 = local_4c;
                  local_36c = local_4c;
                  local_428 = (ulonglong)local_4c;
                  local_378 = local_4c;
                  local_430 = (ulonglong)local_4c;
                  local_37c = local_4c;
                  local_438 = (ulonglong)local_4c;
                  local_380 = local_4c;
                  local_78 = local_4c;
                  local_368 = local_4c;
                  local_1b8 = (ulonglong)local_4c;
                  local_1b0 = CONCAT44(local_1b0._4_4_,local_4c);
                  local_70 = local_4c;
                  local_6c = local_4c;
                  local_1e8 = (ulonglong)local_4c;
                  local_1e0 = CONCAT44(local_1e0._4_4_,local_4c);
                  local_384 = local_4c;
                  local_1c0 = (ulonglong)local_4c;
                  local_74 = local_4c;
                  local_230 = CONCAT44(local_230._4_4_,local_4c);
                  local_31c = local_4c;
                  local_310 = local_4c;
                  local_3f0 = (ulonglong)local_4c;
                  local_320 = local_4c;
                  local_3f8 = (ulonglong)local_4c;
                  local_324 = local_4c;
                  local_340 = local_4c;
                  local_32c = local_4c;
                  local_33c = local_4c;
                  local_330 = local_4c;
                  local_348 = local_4c;
                  local_344 = local_4c;
                  local_408 = (ulonglong)local_4c;
                  local_34c = local_4c;
                  local_338 = local_4c;
                  local_334 = local_4c;
                  local_35c = local_4c;
                  local_350 = local_4c;
                  local_360 = local_4c;
                  local_354 = local_4c;
                  local_410 = (ulonglong)local_4c;
                  local_358 = local_4c;
                  local_418 = (ulonglong)local_4c;
                  local_364 = local_4c;
                  local_1c8 = (ulonglong)local_4c;
                  local_7c = local_4c;
                  local_1d8 = CONCAT44(local_1d8._4_4_,local_4c);
                  local_1d0 = CONCAT44(local_1d0._4_4_,local_4c);
                  local_84 = local_4c;
                  local_80 = local_4c;
                  local_1f0 = (ulonglong)local_4c;
                  local_88 = local_4c;
                  local_200 = CONCAT44(local_200._4_4_,local_4c);
                  local_1f8 = CONCAT44(local_1f8._4_4_,local_4c);
                  local_94 = local_4c;
                  local_208 = CONCAT44(local_208._4_4_,local_4c);
                  local_228 = (ulonglong)local_4c;
                  local_218 = CONCAT44(local_218._4_4_,local_4c);
                  local_90 = local_4c;
                  local_8c = local_4c;
                  local_9c = local_4c;
                  local_98 = local_4c;
                  local_178 = CONCAT44(local_178._4_4_,local_54);
                  local_1a0 = CONCAT44(local_1a0._4_4_,local_54);
                  local_a4 = local_4c;
                  local_a0 = local_4c;
                  local_238 = (ulonglong)local_4c;
                  local_a8 = local_4c;
                  local_b0 = local_4c;
                  local_ac = local_4c;
                  local_248 = CONCAT44(local_248._4_4_,local_4c);
                  local_b8 = local_4c;
                  local_dc = local_4c;
                  local_c8 = local_4c;
                  local_240 = CONCAT44(local_240._4_4_,local_4c);
                  local_c4 = local_4c;
                  local_b4 = local_4c;
                  local_bc = local_4c;
                  local_c0 = local_4c;
                  local_cc = local_4c;
                  local_d8 = local_4c;
                  local_d4 = local_4c;
                  local_258 = CONCAT44(local_258._4_4_,local_4c);
                  local_e0 = local_4c;
                  local_220 = (ulonglong)local_4c;
                  local_210 = CONCAT44(local_210._4_4_,local_4c);
                  local_f4 = local_4c;
                  local_e8 = local_4c;
                  local_250 = (ulonglong)local_4c;
                  local_e4 = local_4c;
                  local_f0 = local_4c;
                  local_ec = local_4c;
                  local_fc = local_4c;
                  local_260 = (ulonglong)local_4c;
                  local_280 = (ulonglong)local_4c;
                  local_100 = local_4c;
                  local_270 = (ulonglong)local_4c;
                  local_f8 = local_4c;
                  local_198 = CONCAT44(local_198._4_4_,local_4c);
                  local_180 = CONCAT44(local_180._4_4_,local_4c);
                  local_278 = (ulonglong)local_4c;
                  local_268 = CONCAT44(local_268._4_4_,local_4c);
                  local_190 = CONCAT44(local_190._4_4_,local_4c);
                  local_188 = CONCAT44(local_188._4_4_,local_4c);
                  if ((char)local_68 != '\0') {
                    uVar13 = (ulonglong)(local_54 ^ 0xdb681dd ^ local_54 ^ 0xdb681c5);
                    uVar12 = (uVar40 * 0x8f2f5229) % 0xfb;
                    uVar10 = (uVar40 * 0x8f2f5229) % 0xfb;
                    local_68 = (uVar10 ^ uVar12) + (uVar13 ^ uVar40) +
                               ((uVar13 & uVar40) - (ulonglong)((uint)uVar10 & ~(uint)uVar12)) * 2 +
                               local_3c8;
                    iVar17 = (local_54 + 0xafbc5531) * (local_54 + 0xafbc5531);
                    uVar7 = iVar17 * iVar17;
                    iVar17 = (local_54 + 0xafbc5531) * (local_54 + 0xafbc5531);
                    uVar15 = iVar17 * iVar17;
                    uVar16 = local_54 ^ 0xafbc5531;
                    bVar3 = (byte)&local_109 & 0x1f;
                    bVar4 = (byte)&local_109 & 0x1f;
                    uVar14 = (uVar16 >> 0xd ^ (uVar16 << bVar3 | uVar16 >> 0x20 - bVar3)) * uVar16 *
                             -0x67c57ebd;
                    uVar19 = (uVar16 >> 0xd ^ (uVar16 << bVar4 | uVar16 >> 0x20 - bVar4)) * uVar16 *
                             -0x67c57ebd;
                    local_60 = (undefined8 *******)
                               (ulonglong)
                               ((uVar14 ^ uVar19) + uVar16 + (~uVar14 & uVar19) * -2 ^
                               (~uVar7 & uVar15) +
                               (((local_54 ^ 0xafbc5531) + (local_54 * 0x78ece975) % 0x3f1) -
                               ((~uVar15 & uVar7) + (local_54 * 0x78ece975) % 0x3f1)));
                    uVar19 = (local_4c + 0x12e0105b & 0xed1fefa4 - local_4c |
                             0xed1fefa4 - local_4c & local_4c + 0x12e0105b) * -0x32439d71 +
                             (local_54 ^
                              ((~(local_54 * -0x14f22da5) & local_54 * -0x14f22da5) +
                              (local_54 ^ 0xeb0dd25b)) -
                              (~(local_54 * -0x14f22da5) & local_54 * -0x14f22da5) ^ 0xeb0dd25b);
                    do {
                      if (*(ushort *)(uVar40 + 6) <= (ushort)uVar19) {
                        pppppppuVar11 = local_60;
                        goto LAB_18000af81;
                      }
                      uVar14 = local_54 ^ 0x5df30697 ^ local_54 ^ 0x7df30697;
                      bVar3 = (byte)&local_10a & 0x1f;
                      bVar4 = (byte)&local_10a & 0x1f;
                      uVar20 = (uVar14 >> 0xd ^ (uVar14 << bVar3 | uVar14 >> 0x20 - bVar3)) * uVar14
                               * 0x44ae9aa1;
                      uVar7 = (uVar14 >> 0xd ^ (uVar14 << bVar4 | uVar14 >> 0x20 - bVar4)) * uVar14
                              * 0x44ae9aa1;
                      iVar17 = (local_54 + 0xbb4d2c82) * (local_54 + 0xbb4d2c82);
                      uVar15 = iVar17 * iVar17;
                      iVar17 = (local_54 + 0xbb4d2c82) * (local_54 + 0xbb4d2c82);
                      uVar16 = iVar17 * iVar17;
                      cVar6 = '\x01';
                      if ((uVar14 + (uVar7 ^ uVar20) + (~uVar7 & uVar20) * -2 &
                          *(uint *)(local_68 + 0x24 + (ulonglong)(uVar19 & 0xffff) * 0x28)) !=
                          (((~uVar15 & uVar16) + (local_54 ^ 0xbb4d2c82)) - (~uVar16 & uVar15) ^
                           local_54 ^ 0xbb4d2c82)) {
                        uVar7 = (local_54 ^ 0x92dba8e6) +
                                (~(local_54 * -0x6d24571a) & local_54 * -0x6d24571a) * -2;
                        uVar14 = local_54 ^ 0x92dba8e6 ^ uVar7;
                        bVar3 = (byte)&local_10b & 0x1f;
                        bVar4 = (byte)&local_10b & 0x1f;
                        uVar15 = (uVar14 >> 0xd ^ (uVar14 << bVar3 | uVar14 >> 0x20 - bVar3)) *
                                 uVar14 * -0x4d70b645;
                        uVar14 = (uVar14 >> 0xd ^ (uVar14 << bVar4 | uVar14 >> 0x20 - bVar4)) *
                                 uVar14 * -0x4d70b645;
                        lVar9 = local_68 + (ulonglong)(uVar19 & 0xffff) * 0x28;
                        cVar6 = '\x01';
                        if (*(int *)(lVar9 + 0x10) !=
                            (((local_54 ^ 0x6d245719) & uVar7) + (~uVar7 & (local_54 ^ 0x92dba8e6))
                            + (~uVar15 & uVar14)) - (~uVar14 & uVar15)) {
                          uVar14 = (local_54 * 0x6048e245) % 0x1fd;
                          uVar7 = (local_54 * 0x6048e245) % 0x1fd;
                          local_60 = (undefined8 *******)
                                     (ulonglong)
                                     (((local_54 ^ 0x5405dd3) + (~uVar7 & uVar14)) -
                                      (~uVar14 & uVar7) ^ local_54 ^ 0x5405dd2);
                          cVar6 = FUN_18000d930(&local_450,*(undefined4 *)(lVar9 + 0xc),
                                                *(undefined4 *)(lVar9 + 0x10));
                        }
                      }
                      uVar19 = uVar19 + (((local_54 ^ 0x19da2385) +
                                         (~(local_54 * 0x19da2385) & local_54 * 0x19da2385)) -
                                         (~(local_54 * 0x19da2385) & local_54 * 0x19da2385) ^
                                         local_54 ^ 0x19da2384);
                    } while (cVar6 != '\0');
                  }
                  pppppppuVar11 = (undefined8 *******)0;
LAB_18000af81:
                  local_4e8 = (undefined1  [16])0x0;
                  local_4f8 = (undefined1  [16])0x0;
                  if (((ulonglong)pppppppuVar11 & 1) == 0) {
                    local_60 = (undefined8 *******)((ulonglong)local_60 & 0xffffffff00000000);
                  }
                  else {
                    NVar8 = BCryptFinishHash(local_288,local_4f8,0x20,
                                             local_54 ^ 0xcd3dbcc5 ^ local_54 ^ 0xcd3dbcc5);
                    local_60 = (undefined8 *******)
                               CONCAT44(local_60._4_4_,
                                        CONCAT31((int3)((uint)NVar8 >> 8),
                                                 (int)(local_54 ^ 0x9636646b ^ local_54 ^ 0x9636646b
                                                      ) <= NVar8));
                  }
                  if (local_288 != (BCRYPT_HASH_HANDLE)0x0) {
                    BCryptDestroyHash(local_288);
                  }
                  BCryptCloseAlgorithmProvider(local_290,0);
                  local_e4 = local_4c + 0xbb0acb35;
                  local_1a0 = CONCAT44(local_1a0._4_4_,local_4c + 0xbb0acb35);
                  local_e0 = local_4c + 0x18dd70f;
                  local_258 = 0;
                  local_e8 = local_4c + 0xb17388e9;
                  local_190 = CONCAT44(local_190._4_4_,local_4c + 0xb17388e9);
                  local_250 = CONCAT44(local_250._4_4_,local_4c + 0xecf929b1);
                  local_f0 = local_4c + 0xecf929b1;
                  local_268 = 0;
                  local_100 = local_4c + 0x1bf9c68b;
                  local_280 = CONCAT44(local_280._4_4_,local_4c + 0x1bf9c68b);
                  local_fc = local_4c + 0xbd7dfb29;
                  local_188 = CONCAT44(local_188._4_4_,local_4c + 0xbd7dfb29);
                  local_278 = CONCAT44(local_278._4_4_,local_4c + 0x38f21b5b);
                  local_180 = CONCAT44(local_180._4_4_,local_4c + 0x38f21b5b);
                  local_178 = CONCAT44(local_178._4_4_,local_54);
                  local_a4 = local_54;
                  local_f8 = local_4c + 0xc481361d;
                  local_270 = CONCAT44(local_270._4_4_,local_4c + 0xc481361d);
                  local_198 = local_198 & 0xffffffff00000000;
                  local_f4 = local_4c + 0x592cf747;
                  local_260 = CONCAT44(local_260._4_4_,local_4c + 0x592cf747);
                  local_ec = 0;
                  local_dc = 0;
                  uVar7 = (local_54 * -0x1aa2a0af) % 0xffd;
                  uVar19 = (local_54 * -0x1aa2a0af) % 0xffd;
                  local_d0 = local_4c + 0xc078e5e1;
                  local_248 = (ulonglong)(local_4c + 0xc078e5e1);
                  iVar17 = (((local_54 ^ 0x436e438c) + (~uVar19 & uVar7)) - (~uVar7 & uVar19) ^
                           (local_54 ^ 0x436e438c) +
                           (~(local_54 * 0x436e438c) & local_54 * 0x436e438c) * -2) + local_4c;
                  local_d4 = local_4c;
                  local_240 = 0;
                  local_c8 = local_4c + 0xaf348209;
                  local_cc = local_4c + 0xaf348209;
                  local_88 = local_4c + 0xbe322eeb;
                  local_220 = (ulonglong)(local_4c + 0xbe322eeb);
                  local_84 = 0;
                  local_80 = local_4c + 0x50c0819f;
                  local_200 = (ulonglong)(local_4c + 0x50c0819f);
                  local_1e8 = CONCAT44(local_1e8._4_4_,local_4c + 0xf7e3cb63);
                  local_218 = (ulonglong)(local_4c + 0xf7e3cb63);
                  local_210 = 0;
                  local_98 = local_4c + 0x887894bd;
                  local_b0 = local_4c + 0x887894bd;
                  local_208 = 0;
                  local_bc = 0;
                  local_90 = local_4c + 0xf805197b;
                  local_230 = (ulonglong)(local_4c + 0xf805197b);
                  local_1f0 = CONCAT44(local_1f0._4_4_,local_4c + 0x81927613);
                  local_94 = local_4c + 0x81927613;
                  local_c0 = local_54;
                  local_b8 = local_54 ^ 0x80291449;
                  local_b4 = local_4c;
                  local_1e0 = 0;
                  local_1d8 = 0;
                  local_1f8 = 0;
                  local_8c = 0;
                  local_228 = CONCAT44(local_228._4_4_,local_4c + 0xc149e137);
                  local_a0 = local_4c + 0xc149e137;
                  local_9c = local_4c + 0xbc0c0193;
                  local_ac = local_4c + 0xbc0c0193;
                  local_238 = local_238 & 0xffffffff00000000;
                  local_d8 = local_54;
                  local_c4 = local_54 ^ 0x66727dff ^ local_54 ^ 0x66727dff;
                  local_1b0 = 0;
                  bVar3 = (byte)local_10d & 0x1f;
                  bVar4 = (byte)local_10d & 0x1f;
                  bVar5 = (byte)&local_10e & 0x1f;
                  local_6c = local_b8 << bVar5 | local_b8 >> 0x20 - bVar5;
                  bVar5 = (byte)&local_10e & 0x1f;
                  uVar19 = local_b8 << bVar5 | local_b8 >> 0x20 - bVar5;
                  local_1b8 = CONCAT44(local_1b8._4_4_,uVar19);
                  local_7c = local_4c + 0x85a7382f;
                  local_1c8 = (ulonglong)(local_4c + 0x85a7382f);
                  local_1d0 = 0;
                  local_1c0 = 0;
                  local_74 = 0;
                  local_70 = 0;
                  local_78 = local_4c + 0xe3b0d0b7;
                  local_a8 = local_b8;
                  if ((char)local_60 == '\0') {
                    local_68 = CONCAT44(local_68._4_4_,iVar17 - local_4c);
                    uVar14 = ((local_c4 << bVar3 | local_c4 >> 0x20 - bVar3) ^ local_c4 >> 0xd) *
                             local_c4 * -0xac333d1;
                    uVar7 = ((local_c4 << bVar4 | local_c4 >> 0x20 - bVar4) ^ local_c4 >> 0xd) *
                            local_c4 * -0xac333d1;
                    local_60 = (undefined8 *******)
                               CONCAT44(local_60._4_4_,
                                        local_c4 + (uVar7 ^ uVar14) + (~uVar7 & uVar14) * -2);
                    uVar7 = (local_6c ^ local_b8 >> 0xd) * local_b8 * 0x10736b79;
                    uVar19 = (uVar19 ^ local_b8 >> 0xd) * local_b8 * 0x10736b79;
                    uVar7 = (~uVar7 & uVar19) + (local_b8 - (~uVar19 & uVar7)) ^
                            local_54 ^ 0x80291449;
                    uVar19 = 0;
                  }
                  else {
                    local_480 = &DAT_180bacc10;
                    local_478 = 0x20;
                    local_60 = local_4a0;
                    local_68._0_4_ = iVar17;
                    FUN_180001790(local_60,&local_480,
                                  (~(local_54 * local_54) & local_54 * local_54) * -0x695e2e6e &
                                  0xffffff01);
                    uVar7 = local_54 ^ 0x176d61a6;
                    bVar3 = (byte)&local_10f & 0x1f;
                    bVar4 = (byte)&local_10f & 0x1f;
                    uVar14 = (uVar7 >> 0xd ^ (uVar7 << bVar3 | uVar7 >> 0x20 - bVar3)) * uVar7 *
                             -0x4421aa43;
                    uVar19 = (uVar7 >> 0xd ^ (uVar7 << bVar4 | uVar7 >> 0x20 - bVar4)) * uVar7 *
                             -0x4421aa43;
                    local_68 = CONCAT44(local_68._4_4_,
                                        local_54 ^ 0x176d61a7 ^
                                        uVar7 + (uVar19 ^ uVar14) + (~uVar19 & uVar14) * -2);
                    if (0xf < local_488) {
                      local_60 = local_4a0[0];
                    }
                    local_4b0 = local_60;
                    local_4a8 = local_490;
                    local_60 = (undefined8 *******)
                               CONCAT44(local_60._4_4_,local_54 ^ 0x4c8fa1b3 ^ local_54);
                    local_460 = local_4f8;
                    local_458 = 0x20;
                    FUN_180001790(local_4d0,&local_460,0);
                    uVar19 = (local_54 * 0x3ce2aca1) % 0xffd;
                    uVar7 = (local_54 * 0x3ce2aca1) % 0xffd;
                    uVar19 = (local_54 ^ 0x87d42f96) + (uVar7 ^ uVar19) + (~uVar19 & uVar7) * -2 ^
                             local_54 ^ 0x87d42f97;
                    bVar3 = (byte)&local_110 & 0x1f;
                    bVar4 = (byte)&local_110 & 0x1f;
                    uVar7 = ((uVar19 >> 0xd ^ (uVar19 << bVar4 | uVar19 >> 0x20 - bVar4)) * uVar19 *
                             0x25c968b5 ^
                            (uVar19 >> 0xd ^ (uVar19 << bVar3 | uVar19 >> 0x20 - bVar3)) * uVar19 *
                            0x25c968b5) +
                            (((uVar19 * 0x3ba91f0f) % 0x3f1 + uVar19) -
                            (uVar19 * 0x3ba91f0f) % 0x3f1);
                    local_470 = local_4d0;
                    if (0xf < local_4b8) {
                      local_470 = local_4d0[0];
                    }
                    local_468 = local_4c0;
                    iVar17 = FUN_18000d980(&local_470,&local_4b0);
                    uVar15 = 0x4868c958 - local_4c & local_4c + 0xb79736a7;
                    uVar19 = (0x4868c958 - local_4c & local_4c + 0xb79736a7 | uVar15) * 0x3b406259 +
                             (local_54 ^ 0xef6b4184) ^ local_54 ^ 0xef6b4184;
                    uVar14 = uVar19 * uVar19 * uVar19 * uVar19 * uVar19;
                    uVar16 = uVar19 * uVar19 * uVar19 * uVar19 * uVar19;
                    uVar19 = CONCAT31((int3)(uVar15 >> 8),
                                      iVar17 != uVar19 + (uVar16 ^ uVar14) + (~uVar16 & uVar14) * -2
                                     );
                  }
                  if ((uVar7 & 1) != 0) {
                    thunk_FUN_18015c010(local_4d0);
                  }
                  if ((local_68 & 1) != 0) {
                    thunk_FUN_18015c010(local_4a0);
                  }
                  if ((char)uVar19 != '\0') {
                    DAT_180bacca8 = local_298;
                  }
                }
                goto LAB_18000582a;
              }
            }
          }
          iVar17 = local_54 + 0xffc3900;
          iVar18 = local_54 + 0xffc3900;
          uVar14 = iVar17 * iVar17 * iVar17 * iVar17 * iVar17;
          uVar7 = iVar18 * iVar18 * iVar18 * iVar18 * iVar18;
          uVar19 = (((uVar19 ^ 0x2d5096bf) + (uVar7 ^ uVar14)) -
                   ((~uVar7 & uVar14) * 2 + -0x27a861a2)) + 0xd8579e5e ^ local_54 ^ 0xffc3900;
          uVar14 = uVar19 * uVar19 * uVar19 * uVar19 * uVar19;
          uVar7 = uVar19 * uVar19 * uVar19 * uVar19 * uVar19;
          uVar19 = uVar19 + (uVar7 ^ uVar14) + (~uVar7 & uVar14) * -2;
          goto LAB_18000582a;
        }
      }
    }
    uVar14 = (uint)&local_15a ^ 0xa891de6b;
    uVar7 = (uint)&local_15a ^ 0x576e2194;
    uVar20 = (uVar7 & 0xa57019b4 | uVar14 & 0x5a8fe64b) ^ (uVar7 & 0xa57019b4 | uVar14 & 0x5a8fe64b)
    ;
    uVar21 = (uint)&local_15b ^ 0x550c5c48;
    uVar16 = (local_54 * -0x51b56449) % 0xfb;
    uVar28 = (local_54 * -0x51b56449) % 0xfb;
    uVar32 = (uint)local_15d ^ 0x97e3a5c3;
    uVar7 = (uint)local_15d ^ 0x681c5a3c;
    uVar14 = (uint)&local_15e ^ 0x29ba6f1f;
    uVar15 = (uint)&local_15f ^ 0x13043403;
    uVar33 = (uint)&local_15f ^ 0xecfbcbfc;
    uVar15 = (uVar33 & 0xa2998210 | uVar15 & 0x5d667def) ^ uVar15 ^ (uVar33 ^ uVar15) & 0xa2998210;
    uVar15 = (uVar15 * 2 | uVar15) +
             ((uVar16 & uVar7 | uVar32 & ~uVar16) ^ (uVar7 ^ uVar32) & uVar28 ^ uVar32) +
             ((uVar14 ^ (uVar16 & uVar14 | ((uint)&local_15e ^ 0xd64590e0) & ~uVar16)) & uVar28) *
             -2 + (((local_54 & 0xcf62fe11) + ((uVar19 ^ 0x1d535040) & 0x309d01ee)) -
                  (uVar20 << 7 & uVar20 | uVar21 ^ uVar20 << 7 ^ uVar20 ^ uVar21));
    uVar14 = local_54 & 0x309d01ee ^ 0xcf62fe11;
    uVar7 = (uint)local_162 ^ 0x49b0f211;
    uVar19 = (uint)local_162 ^ 0xb64f0dee;
    uVar16 = (uVar19 & 0x5ade9ba2 | uVar7 & 0xa521645d) ^ (uVar19 & 0x5ade9ba2 | uVar7 & 0xa521645d)
    ;
    uVar7 = (uint)&local_163 ^ 0xa7d3d8a8;
    uVar19 = (uint)&local_163 ^ 0x582c2757;
    uVar28 = (uVar7 & 0xa6bd2385 | uVar19 & 0x5942dc7a) ^ (uVar19 ^ uVar7) & 0x5942dc7a ^ uVar7;
    uVar7 = (uint)&local_164 ^ 0xb74dd94b;
    uVar19 = (uint)&local_164 ^ 0x48b226b4;
    uVar20 = (uVar19 & 0xb8c5e4f8 | uVar7 & 0x473a1b07) ^ (uVar19 ^ uVar7) & 0xb8c5e4f8 ^ uVar7;
    uVar32 = (uint)&local_165 ^ 0x36784430;
    uVar21 = (uint)&local_165 ^ 0xc987bbcf;
    uVar19 = (uint)&local_166 ^ 0x47ef6389 ^ (uint)&local_166 ^ 0xb8109c76;
    uVar33 = (uint)&local_167 ^ 0x66c63ec1;
    uVar7 = (uint)&local_167 ^ 0x9939c13e;
    uVar7 = (uVar7 & 0x536e95c2 | uVar33 & 0xac916a3d) ^ (uVar7 ^ uVar33) & 0x536e95c2 ^ uVar33;
    uVar14 = (uVar7 << 7 | uVar7) +
             ((uVar21 ^ (uVar21 ^ uVar32) & uVar20 ^ uVar32 | 0x15bb9635 - uVar20) & uVar19 ^ uVar19
             ) + (uVar28 + 0xae6ad077 & uVar28) +
                 (uVar16 + 0xbb61ccbb & uVar16) +
                 (uVar14 ^ (~local_54 | 0x309d01ee)) + ~(uVar14 | ~local_54 | 0x309d01ee);
    uVar19 = (uint)local_169;
    uVar7 = (uint)&local_16a ^ 0xbcd3c6e1 ^ (uint)&local_16a ^ 0x432c391e;
    uVar20 = (uVar19 ^ 0x8d32c39 ^ uVar19 ^ 0xf72cd3c6 ^
             (uVar19 ^ 0xf72cd3c6 ^ uVar19 ^ 0x8d32c39) & uVar15) & uVar14;
    uVar16 = (uVar7 & uVar14 ^ uVar7) & uVar15;
    uVar21 = (uint)&local_16b ^ 0x5650c11e;
    iVar17 = uVar14 + uVar15;
    uVar7 = iVar17 * iVar17 * iVar17 * iVar17;
    uVar19 = iVar17 * iVar17 * iVar17 * iVar17;
    uVar19 = ((uVar16 & uVar20 | uVar21 ^ uVar16 ^ uVar20 ^ uVar21) + (~uVar7 & uVar19)) -
             (~uVar19 & uVar7);
  }
LAB_18000582a:
  return uVar19 & 0xffffff01;
}



