// FUN_180027640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180027640 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_180027640(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  DWORD DVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *******pppppppuVar14;
  ULONGLONG UVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  undefined8 *puVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  ulonglong uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  undefined1 *puVar54;
  longlong lVar55;
  bool bVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  longlong local_480;
  ulonglong local_478;
  longlong local_470;
  ulonglong local_468;
  ulonglong local_460;
  longlong *local_458;
  undefined1 *local_450;
  undefined8 local_448;
  undefined *local_440;
  undefined8 local_438;
  ulonglong local_430;
  longlong *local_428;
  longlong local_420;
  longlong local_418;
  undefined8 *******local_410 [2];
  size_t local_400;
  ulonglong local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined7 uStack_3c7;
  undefined8 local_3b8;
  ulonglong local_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  ulonglong local_390;
  ulonglong local_388;
  longlong *local_380;
  longlong local_378;
  longlong local_368;
  longlong local_360;
  undefined1 local_358 [16];
  longlong local_348;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  uint local_288;
  uint local_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined1 local_268 [16];
  longlong local_258;
  DWORD local_248;
  int local_244;
  ulonglong local_240;
  ulonglong local_238;
  undefined8 local_230;
  ulonglong local_228;
  undefined8 local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 *local_1e0;
  undefined1 local_1ba [4];
  undefined1 local_1b6 [2];
  undefined1 local_1b4 [2];
  undefined1 local_1b2;
  undefined1 local_1b1 [2];
  undefined1 local_1af;
  undefined1 local_1ae [2];
  undefined1 local_1ac;
  undefined1 local_1ab;
  undefined1 local_1aa [2];
  undefined1 local_1a8;
  undefined1 local_1a7;
  undefined1 local_1a6;
  undefined1 local_1a5;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b [2];
  undefined1 local_199;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  undefined1 local_195 [2];
  undefined1 local_193;
  undefined1 local_192 [2];
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 local_18e;
  undefined1 local_18d;
  undefined1 local_18c;
  undefined1 local_18b;
  undefined1 local_18a;
  undefined1 local_189;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182 [2];
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined1 local_17c;
  undefined1 local_17b [2];
  undefined1 local_179;
  undefined1 local_178;
  undefined1 local_177;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173 [2];
  undefined1 local_171 [4];
  undefined1 local_16d;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166 [2];
  undefined1 local_164;
  undefined1 local_163 [2];
  undefined1 local_161 [2];
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b [2];
  undefined1 local_159 [3];
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a [2];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143 [2];
  undefined1 local_141 [3];
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135 [3];
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  ulonglong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = 0x9c0eeb85;
  local_4c = 0x42ca014d;
  uVar37 = (uint)&local_12d;
  local_288 = uVar37 ^ 0xb8dfbfd7;
  local_28c = 0x9c0eeb85;
  local_294 = 0x9c0eeb85;
  local_2a0 = 0x9c0eeb85;
  local_290 = 0x9c0eeb85;
  local_298 = 0x9c0eeb85;
  local_3e0 = 0x9c0eeb85;
  local_2ac = 0x42ca014d;
  local_2a4 = 0x42ca014d;
  local_2a8 = 0x9c0eeb85;
  local_2b8 = 0x9c0eeb85;
  local_2b0 = 0x9c0eeb85;
  local_29c = 0x9c0eeb85;
  local_2b4 = 0x9c0eeb85;
  local_3e8 = 0x9c0eeb85;
  local_2bc = 0x9c0eeb85;
  local_2c0 = 0x9c0eeb85;
  local_2c4 = 0x9c0eeb85;
  local_2dc = 0x9c0eeb85;
  local_2cc = 0x42ca014d;
  local_2c8 = 0x42ca014d;
  local_2d0 = 0x9c0eeb85;
  local_2d4 = 0x9c0eeb85;
  local_310 = 0x9c0eeb85;
  local_2d8 = 0x9c0eeb85;
  local_2e0 = 0x42ca014d;
  local_2e8 = 0x42ca014d;
  local_2e4 = 0x9c0eeb85;
  local_3f0 = 0x9c0eeb85;
  local_2ec = 0x9c0eeb85;
  local_2f0 = 0x9c0eeb85;
  local_304 = 0x9c0eeb85;
  local_2f8 = 0x9c0eeb85;
  local_bc = 0x9c0eeb85;
  local_300 = 0x9c0eeb85;
  local_328 = 0x42ca014d;
  local_314 = 0x42ca014d;
  local_318 = 0x9c0eeb85;
  local_31c = 0x9c0eeb85;
  local_324 = 0x42ca014d;
  local_320 = 0x42ca014d;
  local_330 = 0x42ca014d;
  local_334 = 0x42ca014d;
  local_270 = 0x9c0eeb85;
  local_32c = 0x9c0eeb85;
  local_30c = 0x42ca014d;
  local_2fc = 0x42ca014d;
  local_308 = 0x9c0eeb85;
  local_2f4 = 0x9c0eeb85;
  local_200._0_4_ = 0x9c0eeb85;
  local_104 = 0x9c0eeb85;
  local_108 = 0x42ca014d;
  local_278 = 0x42ca014d;
  local_114 = 0x9c0eeb85;
  local_10c = 0x9c0eeb85;
  local_110 = 0x9c0eeb85;
  local_128 = 0x9c0eeb85;
  local_118 = 0x42ca014d;
  local_280 = 0x42ca014d;
  local_124 = 0x9c0eeb85;
  local_11c = 0x9c0eeb85;
  local_12c = 0x9c0eeb85;
  local_120 = 0x9c0eeb85;
  uVar45 = (uint)&local_153 ^ 0x24af4966;
  uVar25 = (uint)&local_153 ^ 0xdb50b699;
  local_78 = CONCAT44(local_78._4_4_,uVar37) ^ 0xb8dfbfd7;
  uVar16 = (local_288 * 0x5f45c947) % 0xfb;
  uVar17 = (local_288 * 0x5f45c947) % 0xfb;
  uVar18 = (uint)&local_154;
  uVar46 = (uint)&local_155 ^ 0x1f;
  uVar38 = (uint)&local_155 ^ 0x65f3b5e0;
  uVar26 = (uint)&local_156 ^ 0x9fc88054;
  uVar8 = (uint)&local_156 ^ 0x60377fab;
  uVar8 = (uVar8 & 0xcc157eb4 | uVar26 & 0x33ea814b) ^ (uVar8 ^ uVar26) & 0xcc157eb4 ^ uVar26;
  uVar26 = ((((uVar38 ^ (uVar38 ^ uVar46) & uVar17 ^ uVar46) & uVar16) -
            ((uVar18 ^ 0xb2a01ca9 ^ uVar18 ^ 0x4d5fe356 ^
             (uVar18 ^ 0x4d5fe356 ^ uVar18 ^ 0xb2a01ca9) & uVar16) & uVar17)) +
           ~((uVar25 & 0x46bb36a4 | uVar45 & 0xb944c95b) ^ 0xffffffff ^
            (uVar25 ^ uVar45) & 0x46bb36a4 ^ uVar45) +
           ((local_288 | 0x73aa8130) - (local_288 & 0x73aa8130))) - (uVar8 + 0x8bf57aea & uVar8);
  uVar27 = ~local_288;
  local_70 = CONCAT44(local_70._4_4_,uVar37) ^ 0xb8dfbfd7;
  uVar16 = (uint)local_159 ^ 0xdf51c391;
  uVar8 = (uint)local_159 ^ 0x20ae3c6e;
  uVar16 = (uVar8 & 0x73aa8130 | uVar16 & 0x8c557ecf) ^ (local_288 & uVar8 | uVar16 & uVar27);
  bVar3 = (byte)&local_12e;
  uVar17 = (uint)local_15b ^ 0xb7c6410c ^ (uint)local_15b ^ 0x4839bef3;
  uVar8 = (uVar16 >> 0xd ^ (uVar16 >> (-bVar3 & 0x1f) | uVar16 << (bVar3 & 0x1f))) * uVar16 *
          -0x619194e1;
  uVar25 = (uint)&local_15c ^ 0x937f960 ^ (uint)&local_15c ^ 0xf6c8069f;
  uVar38 = (uVar16 >> 0xd ^ (uVar16 >> (-bVar3 & 0x1f) | uVar16 << (bVar3 & 0x1f))) * uVar16 *
           -0x619194e1;
  uVar46 = (uint)&local_15d ^ 0x739a0e69;
  uVar45 = (uint)&local_15d ^ 0x8c65f196;
  uVar16 = (uint)&local_15e ^ 0xcfbf1f4b;
  uVar18 = (uint)&local_15e ^ 0x3040e0b4;
  local_88._0_4_ = 0;
  local_b8._0_4_ = 0x548fd79a;
  local_b0._0_4_ = 0x548fd79a;
  local_a8._0_4_ = 0;
  local_a0 = local_a0 & 0xffffffff00000000;
  uVar16 = (uVar18 & 0xf7f3860c | uVar16 & 0x80c79f3) ^ (uVar18 & 0xf7f3860c | uVar16 & 0x80c79f3);
  local_98 = local_98 & 0xffffffff00000000;
  local_58 = 0xe52a3b94;
  local_f0._0_4_ = 0xe52a3b94;
  local_68 = 0x42ca014d;
  local_e8._0_4_ = 0x9ab81f5a;
  local_64 = 0x2d172e2c;
  local_60 = 0x2d172e2c;
  local_5c = 0;
  local_100 = CONCAT44(local_100._4_4_,0x1d852c1c);
  local_7c = 0x1d852c1c;
  local_dc = 0x4abb16ca;
  local_240 = 0x42ca014d;
  local_d8 = 0xa926fe1c;
  local_238._0_4_ = 0xb34d75fe;
  local_230 = 0xb34d75fe;
  local_228 = CONCAT44(local_228._4_4_,0xf12f4be4);
  local_220._0_4_ = 0xf12f4be4;
  local_d4 = 0;
  local_d0 = 0;
  uVar25 = (uVar16 * 4 | uVar16) +
           ((uVar46 & 0xdd47e4b5 | uVar45 & 0x22b81b4a) ^ (uVar45 ^ uVar46) & 0x22b81b4a ^ uVar46) *
           0x1e44dba1 +
           (((uVar25 & uVar38 ^ uVar25) & uVar8) - ((uVar17 & uVar8 ^ uVar17) & uVar38)) +
           ((local_288 * -0x2546b31b) / 0x3f1) * 0x3f1 + local_288 * 0x2546b31b +
           (local_288 * -0x2546b31b) % 0x3f1 + (local_288 & 0x8c557ecf | uVar27 & 0x73aa8130);
  local_cc = 0x42ca014d;
  local_218 = 0x42ca014d;
  local_c8 = 0xee5ed07c;
  local_210._0_4_ = 0xee5ed07c;
  local_c4 = 0;
  iVar9 = uVar26 * uVar26;
  local_c0 = iVar9 * uVar26;
  uVar8 = (uint)local_166 ^ 0x1072e0d;
  uVar17 = (uVar26 & ~uVar25) + (uVar25 & ~uVar26);
  uVar18 = (uint)&local_15f ^ 0xfaa5b53;
  uVar38 = (uint)local_163 ^ 0xdf9ff709;
  uVar19 = (uint)&local_164 ^ 0xf003d665;
  uVar45 = (uint)&local_164 ^ 0xffc299a;
  uVar16 = (uint)local_166 ^ 0xfef8d1f2;
  uVar46 = (uVar8 & uVar25 | uVar16 & ~uVar25) ^ (uVar26 & uVar8 | ~uVar26 & uVar16);
  bVar3 = (byte)&local_12f;
  uVar28 = uVar46 << (bVar3 & 0x1f);
  uVar25 = uVar46 >> (-bVar3 & 0x1f);
  uVar8 = (uint)&local_167 ^ 0x9fd7665c;
  uVar29 = uVar46 << (bVar3 & 0x1f);
  uVar34 = uVar46 >> (-bVar3 & 0x1f);
  uVar16 = (uint)&local_169 ^ 0x6eb17cb7;
  uVar25 = ((uint)&local_168 ^ 0xcc82e2bf ^ uVar46 >> 0xd ^
           (uint)&local_168 ^ 0xcc82e2bf ^ (uVar25 & uVar28 | uVar8 ^ uVar25 ^ uVar28 ^ uVar8)) *
           uVar46 * 0x3c785c5d;
  uVar30 = (uVar46 >> 0xd ^ (uVar34 & uVar29 | uVar16 ^ uVar34 ^ uVar29 ^ uVar16)) * uVar46 *
           0x3c785c5d;
  uVar28 = (uint)&local_16a ^ 0x76574a03;
  uVar46 = ~uVar30;
  uVar35 = (uint)&local_16a ^ 0x89a8b5fc;
  uVar8 = (uint)&local_16b ^ 0x5926f1cb;
  uVar16 = (uint)&local_16b ^ 0xa6d90e34;
  uVar16 = ((uVar16 ^ uVar8) & (uint)local_78 ^ uVar8 ^ uVar16) & (uint)local_70;
  uVar8 = (uint)&local_16c ^ 0x390086ef;
  uVar47 = (((uint)local_70 & uVar8 | ((uint)&local_16c ^ 0xc6ff7910) & uVar27) ^ uVar8) &
           (uint)local_78;
  uVar8 = uVar16 + uVar47;
  uVar47 = uVar47 & uVar16;
  uVar39 = (uint)local_78 * (uint)local_78 * (uint)local_78 * (uint)local_78 * (uint)local_78;
  uVar31 = (uint)local_78 * (uint)local_78 * (uint)local_78 * (uint)local_78 * (uint)local_78;
  uVar48 = (uint)&local_16d ^ 0x7db9eea2;
  uVar40 = (uint)&local_16d ^ 0x8246115d;
  uVar22 = (uint)local_171 ^ 0x3be71b0a;
  uVar41 = (uint)local_171 ^ 0xc418e4f5;
  uVar29 = (uint)local_173 ^ 0xd6c9ba3a;
  uVar16 = (uint)local_173 ^ 0x293645c5;
  uVar36 = (uVar16 & 0xf724cf1c | uVar29 & 0x8db30e3) ^ (uVar16 & 0xf724cf1c | uVar29 & 0x8db30e3);
  uVar23 = (uint)&local_174 ^ 0xb6621f00;
  uVar49 = (uint)&local_174 ^ 0x499de0ff;
  uVar29 = (uint)&local_175 ^ 0x5e675df6;
  uVar50 = (uint)&local_175 ^ 0xa198a209;
  uVar34 = (uint)&local_176 ^ 0x61b2229d;
  uVar21 = (uint)&local_177 ^ 0x826052ce;
  uVar24 = (uint)&local_177 ^ 0x7d9fad31;
  uVar42 = (uint)&local_178 ^ 0x45e76c71;
  uVar16 = (uint)&local_178 ^ 0xba18938e;
  uVar43 = local_288 & 0x28d55d6;
  uVar16 = (uVar16 & 0x28d55d6 | uVar42 & 0xfd72aa29) ^ uVar42 ^ (uVar16 ^ uVar42) & local_288 |
           uVar43;
  uVar51 = uVar16 ^ uVar43;
  uVar42 = (uint)&local_179;
  uVar16 = (~uVar16 & uVar43) * 2;
  uVar43 = (uint)local_17b ^ 0x6fb2dc94;
  uVar52 = (uint)local_17b ^ 0x904d236b;
  uVar53 = (uint)&local_17c ^ 0x4271e70 ^ (uint)&local_17c ^ 0x7bd8e18f;
  uVar52 = (((uVar43 & 0x3e0a8997 | uVar52 & 0xc1f57668) ^ (uVar52 ^ uVar43) & 0xc1f57668 ^ uVar43)
           + 0x28d55d6) * local_288;
  uVar43 = (uint)&local_17d ^ 0xd5ba2948;
  uVar20 = CONCAT44(uVar43 ^ ((uVar41 & 0x928c78b7 | uVar22 & 0x6d738748) ^
                             (uVar41 & 0x928c78b7 | uVar22 & 0x6d738748)) + (uVar37 ^ 0xba52ea01) +
                             ((uVar36 * 2 + 0x6a3944a0) -
                             (uVar36 + 0x6a3944a0 & uVar36 |
                             (uVar49 ^ uVar23) & uVar36 ^ uVar23 ^
                             (uVar36 + 0x6a3944a0 & uVar49 | 0x95c6bb5f - uVar36 & uVar23))) +
                             ((uVar24 & 0xaaf59029 | uVar21 & 0x550a6fd6) ^ uVar21 ^
                             (uVar24 ^ uVar21) &
                             ((((uint)&local_176 ^ 0x9e4ddd62) & 0xaaf59029 | uVar34 & 0x550a6fd6) ^
                             uVar34)) +
                             ((uVar50 ^ uVar29) & 0x3ad13678 ^ uVar29 ^
                             (uVar50 & 0x3ad13678 | uVar29 & 0xc52ec987)) * 0x6bc69209 ^
                    (uVar52 ^ local_288 * 0x28d55d6) +
                    ((local_288 * 0x28d55d6 & uVar53 ^ uVar53) & uVar52) * -2 +
                    (uVar51 ^ uVar16) +
                    ((uVar42 ^ 0x2f1c7df2 ^ uVar42 ^ 0xd0e3820c ^
                     (uVar42 ^ 0xd0e3820c ^ uVar42 ^ 0x2f1c7df2) & uVar51) & uVar16) * -2 ^ uVar43,
                    ((((uVar48 ^ uVar40 ^ (uVar40 ^ uVar48) & uVar39) & uVar31) - (~uVar31 & uVar39)
                     ) + (uVar8 ^ uVar47) + ((uVar8 ^ 0x7fffffff) & uVar47) * -2 +
                    (((uint)local_78 * 0x58ec5a01) / 0x3f1) * 0x3f1 + (uint)local_78 * -0x58ec5a01 +
                    ((uint)local_78 * 0x58ec5a01) % 0x3f1) * 0x6f748ed5 +
                    ((uVar35 ^ uVar28) & uVar25 ^ uVar28 ^ (uVar30 & uVar35 | uVar28 & uVar46)) +
                    (uVar46 & uVar25) * -2 +
                    (uVar26 * uVar26 * uVar26 * uVar26 * uVar26 - local_c0 * iVar9) +
                    ((((uint)local_161 ^ 0xded33c30 ^ (uint)local_161 ^ 0x212cc3cf) &
                     (uVar18 ^ (uVar17 & ((uint)&local_15f ^ 0xf055a4ac) | uVar18 & ~uVar17))) -
                    ((uVar45 & 0xdf16db88 | uVar19 & 0x20e92477) ^
                    (uVar45 ^ uVar19) &
                    ((((uint)local_163 ^ 0x206008f6) & 0xdf16db88 | uVar38 & 0x20e92477) ^ uVar38) ^
                    uVar19)));
  uVar13 = 0xffffffffffffffff;
  local_3d8 = param_4;
  local_3d0 = param_3;
  local_284 = local_288;
  local_1e0 = param_2;
  local_f8 = param_1;
  local_54 = local_288;
  local_208._0_4_ = iVar9;
  if (uVar20 < (ulonglong)param_1[1]) {
    uVar8 = (uint)&local_14c ^ 0x8608625f;
    uVar17 = (uint)&local_14c ^ 0x79f79da0;
    uVar25 = (uint)&local_14b ^ 0x95811ba2;
    uVar16 = (uint)&local_14b ^ 0x6a7ee45d;
    uVar8 = (uVar16 & 0xf00f6394 | uVar25 & 0xff09c6b) ^ (uVar17 & 0xf00f63ba | uVar8 & 0xff09c45) ^
            (local_288 & uVar16 | uVar25 & ~local_288) ^ (local_288 & uVar17 | uVar8 & ~local_288);
    uVar25 = (uint)&local_14d ^ 0xe7e0ee26;
    uVar17 = (uint)&local_14d ^ 0x181f11d9;
    uVar16 = (uint)&local_14e ^ 0x8f1db87b;
    uVar17 = ((uVar17 & local_288 | uVar25 & ~local_288) ^
             (local_288 & uVar17 | ~local_288 & uVar25)) * 0x690acc3b;
    uVar38 = uVar8 ^ uVar16 ^ uVar16 ^ uVar17;
    uVar8 = (uVar8 & uVar17) * 2;
    uVar16 = uVar38 & uVar8;
    uVar17 = (uint)&local_14f ^ 0xc592e360;
    uVar26 = (uint)&local_150 ^ 0x555d31a3;
    uVar25 = (uint)&local_150 ^ 0xaaa2ce5c;
    uVar45 = (uVar25 & 0x7c4dd3c0 | uVar26 & 0x83b22c3f) ^ uVar26 ^ (uVar25 ^ uVar26) & 0x7c4dd3c0;
    uVar26 = (uint)&local_151 ^ 0xd3a3bfc5;
    uVar25 = (uint)&local_151 ^ 0x2c5c403a;
    uVar26 = (uVar25 & 0xdd304c8e | uVar26 & 0x22cfb371) ^
             (uVar25 & 0xdd304c8e | uVar26 & 0x22cfb371);
    uVar18 = (uint)&local_152 ^ 0x412cfdcd;
    uVar25 = (uint)&local_152 ^ 0xbed30232;
    uVar25 = (uVar25 & 0x57bc83da | uVar18 & 0xa8437c25) ^
             (uVar25 & 0x57bc83da | uVar18 & 0xa8437c25);
    lVar12 = *param_1;
    lVar55 = param_1[1] + lVar12;
    local_90._0_4_ = uVar27;
    lVar11 = thunk_FUN_1805f7e70(uVar20 + lVar12,lVar55,
                                 (((uVar26 + 0x292a4315 & uVar26) + (uVar45 << 7 ^ uVar45) +
                                  (uVar45 << 7 & uVar45)) - (uVar25 + 0x9f18b901 & uVar25)) +
                                 (uVar17 ^ uVar16 ^ (uVar8 | uVar38) ^ uVar17) + uVar16 * 2);
    uVar13 = 0xffffffffffffffff;
    if (lVar11 != lVar55) {
      uVar13 = lVar11 - lVar12;
    }
  }
  uVar8 = (uint)&local_17e ^ 0x59ae22b9 ^ (uint)&local_17e ^ 0x86100446;
  uVar17 = (0x3f0dd7e6 - local_4c ^ local_4c + 0xc0f22819) & local_4c + 0xc0f22819 ^
           local_4c + 0xc0f22819;
  uVar25 = (uint)&local_17f ^ 0xed2ffca7;
  uVar16 = (uint)&local_17f ^ 0x12d00358;
  uVar16 = (local_4c + 0x4dbcebf5 & uVar16 | 0xb243140a - local_4c & uVar25) ^ uVar25 ^
           (uVar16 ^ uVar25) &
           (local_50 + 0xf15d102d ^ local_50 + 0xf15d102d ^ local_4c + 0x4dbcebf5);
  uVar25 = (uint)&local_180 ^ 0x3b5b900f;
  iVar9 = ((local_50 + 0xe95addad ^ local_50 + 0xe95addad ^ local_54 & 0x294fdb18 |
           (uVar8 & local_54 ^ uVar8) & 0xd6b024e7) - ((uVar17 | 0x85c30b96) & uVar17)) -
          (uVar16 & uVar16 * 4 | uVar25 ^ uVar16 * 4 ^ uVar16 ^ uVar25);
  local_90 = CONCAT44(local_90._4_4_,iVar9);
  local_b8 = CONCAT44(local_b8._4_4_,local_4c + 0x40ef36e7);
  local_88 = CONCAT44(local_88._4_4_,local_4c);
  local_b0 = CONCAT44(local_b0._4_4_,local_50 + 0x9f91907);
  local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
  local_a0 = 0;
  local_98 = 0;
  local_58 = local_4c + 0xbc4355ad;
  local_f0 = CONCAT44(local_f0._4_4_,local_4c + 0xbc4355ad);
  local_68 = local_50 + 0xa8de4705;
  local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
  local_60 = (local_4c - (local_50 + 0x448d3333 ^ local_50 + 0x448d3333 ^ local_4c + 0x5dd9ed53)) +
             local_54;
  local_64 = 0;
  local_5c = local_54;
  uVar46 = (local_54 * -0x1f055081) % 0xffd;
  uVar25 = (local_60 * -0x1f055081 + 0xeb66792d) % 0xffd;
  uVar8 = ~uVar46 & uVar25;
  local_78 = (ulonglong)uVar8;
  uVar34 = 0x7097fd08 - local_4c & local_4c + 0x8f6802f7 |
           0x7097fd08 - local_4c & local_4c + 0x8f6802f7;
  uVar21 = (uint)local_182 ^ 0x588b396;
  uVar26 = (uint)local_182 ^ 0xfa774c69;
  uVar37 = (uint)&local_183 ^ 0xb77124f1;
  uVar16 = (uint)&local_183 ^ 0x488edb0e;
  uVar17 = (uint)&local_184 ^ 0xa36d4051 ^ (uint)&local_184 ^ 0x5c92bfae;
  uVar19 = (uint)&local_185 ^ 0x37f1ea9a;
  uVar22 = (uint)&local_186 ^ 0x41043a41;
  uVar28 = (uint)&local_186 ^ 0xbefbc5be;
  uVar23 = 0xb6473e38 - local_4c & local_4c + 0x49b8c1c7 |
           0xb6473e38 - local_4c & local_4c + 0x49b8c1c7;
  uVar18 = (uint)&local_187 ^ 0x5503f835;
  uVar45 = local_50 + 0x751d0011 ^ uVar18 ^ local_4c + 0xfa19592f ^ local_50 + 0x751d0011 ^
           local_50 + 0xc17ade75 ^ uVar18 ^ local_50 + 0xc17ade75 ^ local_4c + 0xfa19592f;
  uVar29 = local_50 + 0xc07c90a9 ^ local_50 + 0xc07c90a9 ^ local_4c + 0xf58ecb5f;
  uVar38 = (uint)&local_188 ^ 0x31d5b137;
  uVar18 = (uint)&local_188 ^ 0xce2a4ec8;
  if ((uVar13 == CONCAT44((uVar18 & (local_54 ^ 0xa9110165) | (local_54 ^ 0x56eefe9a) & uVar38) ^
                          ((local_54 ^ 0x56eefe9a) & uVar18 | (local_54 ^ 0xa9110165) & uVar38),
                          ((uint)&local_189 ^ 0xdfb5cbb3 ^ (uint)&local_189 ^ 0x204a344c) &
                          (((local_4c - uVar29) + 0xd8e5a74d & (local_4c - uVar29) + 0xf58ecb5f) +
                           (0x4d56f7f8 - local_4c & local_4c + 0xb2a90807 |
                           0x4d56f7f8 - local_4c & local_4c + 0xb2a90807) * 0x3be7bb9d +
                           ((uVar26 & 0x211fd251 | uVar21 & 0xdee02dae) ^
                           ((uVar34 ^ 0x211fd251) & uVar26 | (uVar34 ^ 0xdee02dae) & uVar21)) +
                          (uVar45 + 0xd5c8b583 & uVar45) +
                          (uVar23 * 8 | uVar23) +
                          ((((((uint)&local_185 ^ 0xc80e1565) & 0xbf5ad32e | uVar19 & 0x40a52cd1) ^
                             uVar19 ^ 0x40a52cd1) +
                           (~((uVar16 & local_4c + 0x367fc543 | 0xc9803abc - local_4c & uVar37) ^
                             (local_4c + 0x367fc543 & uVar16 | 0xc9803abc - local_4c & uVar37)) &
                            uVar17 ^ uVar17)) -
                          ((uVar28 & 0x6a07e90d | uVar22 & 0x95f816f2) ^
                          (uVar28 & 0x6a07e90d | uVar22 & 0x95f816f2))) + 1) * 0x9ce2173 +
                          (local_54 ^
                           (((((local_4c + 0x40ef36e7) - local_4c) + -0x40ef36e7) * 0x28489291 +
                            (uVar25 ^ uVar46)) -
                           (uVar8 * 2 +
                           (local_58 - (local_50 + 0xa8de4705 ^ local_68 ^ local_4c + 0xbc4355ad))))
                           + iVar9 ^ 0x294fdb18))) || (local_1e0[1] == 0)) {
    uVar16 = (uint)&local_18a ^ 0xb384eec9;
    uVar8 = (uint)&local_18a ^ 0x4c7b1136;
    uVar8 = (uVar8 & 0xece15d04 | uVar16 & 0x131ea2fb) ^ (local_54 & uVar8 | uVar16 & ~local_54);
    uVar38 = (uint)&local_199 ^ 0x8d1144b6;
    uVar18 = (uint)&local_199 ^ 0x72eebb49;
    uVar34 = (uint)&local_18b ^ 0x94892e17;
    uVar16 = (uint)&local_18b ^ 0x6b76d1e8;
    uVar17 = 0x74476c44 - local_4c & local_4c + 0x8bb893bb |
             0x74476c44 - local_4c & local_4c + 0x8bb893bb;
    iVar9 = (local_50 + 0x82ef288b ^ local_50 + 0x82ef288b ^ local_4c + 0x83ced72f) - local_4c;
    uVar19 = (uint)&local_18c ^ 0xbbd0aadd;
    uVar45 = (uint)&local_18c ^ 0x442f5522;
    uVar28 = (uint)&local_18d ^ 0x8ab04b40;
    uVar46 = (uint)&local_18d ^ 0x754fb4bf;
    uVar25 = (uint)&local_18e ^ 0xe083cf37;
    uVar26 = (uint)&local_18e ^ 0x1f7c30c8;
    uVar37 = (uVar26 & 0xb02afa1a | uVar25 & 0x4fd505e5) ^
             (uVar26 ^ uVar25) &
             (local_50 + 0xf0f967d1 ^ local_50 + 0xf0f967d1 ^ local_4c + 0x3a254891) -
             (local_50 + 0x9a764249 ^ local_50 + 0x9a764249 ^ local_4c + 0x3a254891) ^ uVar25;
    uVar25 = (uint)&local_18f ^ 0x626e14c2;
    uVar29 = (uint)&local_18f ^ 0x9d91eb3d;
    uVar21 = 0x77e6cb18 - local_4c & local_4c + 0x881934e7 |
             0x77e6cb18 - local_4c & local_4c + 0x881934e7;
    uVar22 = (uint)&local_190 ^ 0x39b4eca9;
    uVar26 = (uint)&local_190 ^ 0xc64b1356;
    uVar26 = (uVar26 & local_4c + 0xf36eda3 | 0xf0c9125c - local_4c & uVar22) ^
             (local_4c + 0xf36eda3 & uVar26 | 0xf0c9125c - local_4c & uVar22);
    uVar25 = (((uVar17 << 6 | uVar17) +
              ((uVar16 ^ uVar34) & local_54 & 0x131ea2fb ^ uVar34 ^
              ((local_54 & 0xece15d04 ^ 0xece15d04) & uVar16 |
              (local_54 & 0xece15d04 ^ 0x131ea2fb) & uVar34))) -
             ((uVar46 & 0x7ea114e9 | uVar28 & 0x815eeb16) ^ uVar28 ^
             (uVar46 ^ uVar28) &
             (local_50 + 0x92d89ea1 ^
              local_50 + 0x92d89ea1 ^ (uVar45 & 0x7ea114e9 | uVar19 & 0x815eeb16) ^
             (iVar9 + 0x7c3128d1U & uVar45 | 0x83ced72eU - iVar9 & uVar19)))) -
             (((uVar26 | 0x97967e29) & uVar26) +
             (local_4c + 0xfe3ff525 ^ local_50 + 0x883c220f ^
              (0x1c00ada - local_4c ^ local_4c + 0xfe3ff525) & local_4c + 0xfe3ff525 ^
             local_50 + 0x883c220f) + (uVar21 << 7 | uVar21) +
             ((uVar25 ^ uVar29) & uVar37 & 0x4fd505e5 ^ uVar29 ^
             (~uVar37 & uVar25 & 0xb02afa1a | (uVar37 | 0x4fd505e5) & uVar29)));
    uVar26 = uVar25 & uVar8;
    uVar28 = (uint)local_192 ^ 0x3d1ac373;
    iVar9 = (local_50 + 0x24a55499 ^ local_50 + 0x24a55499 ^ local_4c + 0x2aafddeb) - local_4c;
    uVar16 = (uint)&local_193 ^ 0x39f0e8c0;
    uVar17 = (uint)&local_193 ^ 0xc60f173f;
    uVar45 = (uVar8 * 0x7cb7f0eb) % 0xfb;
    uVar16 = ((uVar8 + (local_50 + 0xbf2a2b81 ^
                        (uVar17 & local_4c + 0x9755a3ef | 0x68aa5c10 - local_4c & uVar16) ^
                       local_50 + 0xbf2a2b81 ^
                       (local_4c + 0x9755a3ef & uVar17 | 0x68aa5c10 - local_4c & uVar16))) *
             0x7cb7f0eb) % 0xfb;
    uVar46 = (uint)local_195 ^ 0xc4555dc4 ^ (uint)local_195 ^ 0x3b;
    uVar34 = (uint)&local_196 ^ 0x1d456a41;
    uVar37 = (uint)&local_196 ^ 0xe2ba95be;
    uVar21 = (0x1555eb4e - local_4c ^ local_4c + 0xeaaa14b1) & local_4c + 0xeaaa14b1 ^
             local_4c + 0xeaaa14b1;
    uVar29 = (uint)&local_197 ^ 0x12131dd;
    uVar17 = (uint)&local_198 ^ 0x3ffe8c6d;
    uVar19 = (uint)&local_198 ^ 0xc0017392;
    uVar17 = (uVar19 ^ uVar17) & local_4c + 0xe976101d ^ uVar17 ^
             (local_4c + 0xe976101d & uVar19 | 0x1689efe2 - local_4c & uVar17);
    uVar16 = (0x9b82aa20 - local_50 ^ local_50 + 0x647d55df ^
             local_4c + 0x831fc54b ^ 0x7ce03ab4 - local_4c) +
             (((uVar21 << 5 & uVar21 | uVar29 ^ uVar21 << 5 ^ uVar21 ^ uVar29) +
               ((0x83f04d3e - local_4c & uVar34 | local_4c + 0x7c0fb2c1 & uVar37) ^
               (uVar37 ^ uVar34) & local_4c + 0x7c0fb2c1 ^ uVar34) * 0x6e419bc7 +
              (((0xfa - local_50 ^ local_50 + 5 ^ uVar16) & uVar45) -
              ((uVar46 & uVar45 ^ uVar46) & uVar16))) - (uVar17 + 0x6fa26359 & uVar17)) +
             (((local_50 + 0x9f4e7f5 ^
                local_50 + 0x9f4e7f5 ^
                (((uint)local_192 ^ 0xc2e53c8c) & 0x5938f826 | uVar28 & 0xa6c707d9) ^ uVar28 ^
               0x5938f826) + ((uVar8 ^ uVar25 | uVar26) - uVar26)) -
             (iVar9 + 0xdaa9f329U & iVar9 + 0xd5502215U));
    uVar8 = ((uVar18 ^ uVar38) & local_54 ^ uVar38 ^ (local_54 & uVar18 | ~local_54 & uVar38)) *
            0x281a4369;
    uVar17 = uVar16 & uVar8;
    uVar16 = uVar8 ^ uVar16 | uVar17;
    uVar25 = (uint)local_19b ^ 0xc70a9231;
    uVar26 = ~uVar16;
    uVar8 = (uint)local_19b ^ 0x38f56dce;
    uVar18 = ~uVar17 | uVar26;
    uVar37 = ~uVar18;
    uVar16 = (uVar8 & uVar17 | uVar25 & ~uVar17) ^ (uVar16 & uVar8 | uVar25 & uVar26) | uVar37;
    uVar17 = (uint)&local_19c ^ 0x124cf629;
    uVar38 = (uint)&local_19c ^ 0xedb309d6;
    uVar45 = local_4c + 0xdcb64757 ^
             (0x2349b8a8 - local_4c ^ local_4c + 0xdcb64757) & local_4c + 0xdcb64757;
    uVar8 = (uint)&local_19d ^ 0x326e04ac;
    uVar19 = local_50 + 0x46ab8167 ^ uVar8 ^ local_50 + 0x46ab8167 ^ local_4c + 0x7cdd4ef7 ^
             uVar8 ^ local_4c + 0x7cdd4ef7;
    iVar9 = (local_50 + 0x47a18069 ^ local_50 + 0x47a18069 ^ local_4c + 0x64657f07) - local_4c;
    uVar8 = iVar9 + 0x9b9a80f9;
    uVar34 = (uint)&local_19e ^ 0x177abd7e;
    uVar28 = (uint)&local_19e ^ 0xe8854281;
    uVar25 = (0xe40ec6fc - local_4c ^ local_4c + 0x1bf13903) &
             (local_50 + 0x5db3721f ^ local_50 + 0x5db3721f ^ local_4c + 0x1bf13903) ^
             local_4c + 0x1bf13903;
    uVar21 = (uint)&local_19f ^ 0x3205b08b;
    uVar29 = (uint)&local_19f ^ 0xcdfa4f74;
    uVar46 = (uint)&local_1a0 ^ 0x2a5fd757;
    uVar26 = (uint)&local_1a0 ^ 0xd5a028a8;
    uVar46 = (local_4c + 0x4bef1f8b & uVar26 | 0xb410e074 - local_4c & uVar46) ^
             (uVar26 ^ uVar46) &
             (local_50 + 0x7bba1833 ^ local_50 + 0x7bba1833 ^ local_4c + 0x4bef1f8b) ^ uVar46;
    uVar22 = (uint)&local_1a1 ^ 0x9e0010fe;
    uVar26 = (uint)&local_1a1 ^ 0x61ffef01;
    uVar26 = (uVar26 & local_4c + 0x22b65659 | 0xdd49a9a6 - local_4c & uVar22) ^
             (local_4c + 0x22b65659 & uVar26 | 0xdd49a9a6 - local_4c & uVar22);
    uVar8 = (uVar26 + 0x141356f9 & uVar26) +
            (((uVar25 * 2 + 0x2e92d8f7) -
             (uVar25 & uVar25 + 0x2e92d8f7 |
             (0xd16d2708 - uVar25 & uVar21 | uVar25 + 0x2e92d8f7 & uVar29) ^
             (uVar29 ^ uVar21) & uVar25 ^ uVar21)) - (uVar46 << 7 | uVar46)) +
            (uVar8 & uVar8 * 2 |
            (uVar28 ^ uVar34) & uVar8 * 2 ^ uVar34 ^ (uVar8 & uVar28 | 0x64657f06U - iVar9 & uVar34)
            ) + (((((uVar38 & uVar37 | uVar18 & uVar17) ^ uVar17 ^ (uVar38 ^ uVar17) & uVar16) +
                  (uVar16 & uVar37) * 2) - (uVar45 * 8 | uVar45)) - (uVar19 + 0x941c3777 & uVar19));
    goto LAB_180033ff2;
  }
  local_268 = (undefined1  [16])0x0;
  local_258 = 0;
  local_358 = (undefined1  [16])0x0;
  local_348 = 0;
  uVar17 = (uint)&local_1a2 ^ 0x99936882;
  uVar26 = (uint)&local_1a2 ^ 0x666c977d;
  uVar38 = (uint)&local_1a3 ^ 0x81ed68c4;
  uVar18 = (uint)&local_1a3 ^ 0x7e12973b;
  uVar45 = (uint)&local_1a4 ^ 0x5668aeee;
  uVar25 = (uint)&local_1a4 ^ 0xa9975111;
  uVar16 = (uint)&local_1a5 ^ 0x5092a63f;
  uVar8 = (uint)&local_1a6 ^ 0x467d6097;
  uVar46 = (uint)&local_1a5 ^ 0xaf6d59c0;
  uVar37 = (uint)&local_1a6 ^ 0xb9829f68;
  uVar20 = (ulonglong)&local_1a7 & 0xffffffff ^ 0xa2489553cbf54530;
  uVar20 = uVar20 ^ (ulonglong)
                    (((uVar8 & local_54 | uVar37 & ~local_54) ^
                     (local_54 & uVar8 | ~local_54 & uVar37)) * -0x4272f5b7 +
                    ((uVar46 & 0xcef99584 | uVar16 & 0x31066a7b) ^
                     (uVar25 & 0xcef99584 | uVar45 & 0x31066a7b) ^
                     (local_54 & uVar25 | uVar45 & ~local_54) ^
                    (local_54 & uVar46 | uVar16 & ~local_54))) << 0x20 ^
           ((uint)uVar20 ^ (uint)&local_1a7 ^ 0x340abacf) &
           ((uVar18 ^ uVar38) & local_54 ^ uVar38 ^ (local_54 & uVar18 | ~local_54 & uVar38)) *
           0x1c63dcd9 +
           (local_50 + 0xa39f5671 ^
            local_50 + 0xa39f5671 ^ (uVar26 & 0xfb4d9cf4 | uVar17 & 0x4b2630b) ^
            (local_54 & uVar26 | uVar17 & ~local_54) ^ local_54 ^ 0xfb4d9cf4) ^ uVar20;
  local_478 = local_f8[1] - uVar20;
  local_70 = uVar13;
  if ((ulonglong)local_f8[1] < uVar20) {
                    /* WARNING: Subroutine does not return */
    FUN_18015ac40();
  }
  if (uVar13 <= local_478) {
    local_478 = uVar13;
  }
  local_480 = uVar20 + *local_f8;
  uVar16 = ~local_54;
  local_90 = CONCAT44(local_90._4_4_,uVar16);
  uVar17 = (uint)&local_1a8 ^ 0x40b9c4eb;
  uVar8 = (uint)&local_1a8 ^ 0xbf463b14;
  uVar18 = (0x6fd0fbc - local_4c & uVar17 | local_4c + 0xf902f043 & uVar8) ^
           (uVar8 ^ uVar17) & local_4c + 0xf902f043 ^ uVar17;
  iVar32 = (local_50 + 0xae5f716d ^ local_50 + 0xae5f716d ^ local_4c + 0xda46083d) - local_4c;
  uVar8 = iVar32 + 0x25b9f7c3;
  uVar24 = (uint)local_1aa ^ 0xc840813b;
  uVar38 = (uint)local_1aa ^ 0x37bf7ec4;
  uVar17 = (uint)&local_1ab ^ 0xdf384d0d;
  uVar25 = uVar17 ^ local_50 + 0x6835cb4b ^ local_50 + 0x6835cb4b ^ local_4c + 0x830f8d89 ^
           local_4c + 0x830f8d89 ^ uVar17;
  uVar17 = (local_50 + 0x99a277bd ^ local_50 + 0x99a277bd ^ local_4c + 0x2809c2f7) -
           (local_4c + 0x2809c2f7);
  uVar26 = local_54 * local_54 * local_54 * local_54;
  uVar45 = local_54 * local_54 * local_54 * local_54;
  uVar34 = (uint)&local_1ac ^ 0xbb8827d0 ^ (uint)&local_1ac ^ 0x4477d82d;
  iVar9 = local_4c - (local_50 + 0x6419caa3 ^ local_50 + 0x6419caa3 ^ local_4c + 0x3a23d6b9);
  uVar22 = local_50 + 0x992dcd01 ^ local_50 + 0x992dcd01 ^ local_4c + 0x80b7ccb7;
  uVar23 = (uint)local_1ae ^ 0x631717;
  uVar46 = (uint)local_1ae ^ 0xff9ce8e8;
  uVar37 = (uint)&local_1af ^ 0x330bf8ec;
  uVar29 = (uint)&local_1af ^ 0xccf40713;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  local_b8 = CONCAT44(local_b8._4_4_,local_50 + 0xcf3b5267);
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  local_a8 = 0;
  local_a0 = 0;
  local_58 = local_4c + 0x9c82f91d;
  local_98 = (ulonglong)local_4c;
  local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
  local_68 = local_50 + 0xa3673613;
  local_64 = local_50 + 0xa3673613;
  local_e8 = (ulonglong)local_4c;
  local_60 = local_4c + 0xe04c5069;
  local_5c = local_50 + 0x7654bf5f;
  local_100 = (ulonglong)(local_50 + 0x7654bf5f);
  local_7c = 0;
  local_dc = local_50 + 0x2d51140f;
  local_d8 = local_4c + 0x24155e67;
  local_240 = CONCAT44(local_240._4_4_,local_4c);
  local_238 = CONCAT44(local_238._4_4_,local_50 + 0xe4eb3993);
  local_228 = (ulonglong)(local_50 + 0x1c76e675);
  local_220 = (ulonglong)local_220._4_4_ << 0x20;
  local_d4 = local_50 + 0x866eb45;
  local_d0 = 0;
  local_cc = local_4c + 0xccd7241b;
  local_218 = CONCAT44(local_218._4_4_,local_4c + 0xccd7241b);
  local_210 = CONCAT44(local_210._4_4_,local_50 + 0xa725b189);
  local_c8 = local_50 + 0xa725b189;
  local_208 = CONCAT44(local_208._4_4_,local_50 + 0x91f28d2d);
  local_c4 = local_50 + 0x91f28d2d;
  local_c0 = local_50 + 0x99676f91;
  uVar43 = (uint)local_1b1 ^ 0x78f961bd;
  uVar42 = (0x405864d0 - local_50 ^ local_50 + 0xbfa79b2f ^ local_54) & local_54;
  local_200 = CONCAT44(local_200._4_4_,uVar42);
  uVar21 = (uint)local_1b6 ^ 0xf8f691d2;
  local_bc = local_54 & uVar21;
  uVar19 = (uint)local_1b1 ^ 0x87069e42;
  uVar28 = (uint)&local_1b2 ^ 0x70cbd01a;
  uVar8 = uVar28 ^ (uVar19 & 0x3faa060a | uVar43 & 0xc055f9f5) ^
          (local_54 & uVar19 | uVar43 & ~local_54) ^
          ((uVar29 & 0x67f2082e | uVar37 & 0x980df7d1) ^ uVar37 ^
          (uVar29 ^ uVar37) &
          ((uVar46 & 0x67f2082e | uVar23 & 0x980df7d1) ^
          (uVar46 ^ uVar23) &
          ((0x4448ea1c - local_4c ^ local_4c + 0xbbb715e3) & local_4c + 0xbbb715e3 ^
          local_4c + 0xbbb715e3) ^ uVar23)) +
          ((((uVar8 & uVar8 * 4 |
             (uVar38 ^ uVar24) & uVar8 * 4 ^ uVar24 ^
             (uVar8 & uVar38 | 0xda46083cU - iVar32 & uVar24)) +
            ((local_54 & 0xe055f9f4 | uVar16 & 0x1faa060b) - (uVar18 + 0x26c7a93b & uVar18))) -
           (uVar25 + 0xd247925e & uVar25)) - (uVar17 + 0xef5e8a13 & uVar17)) +
          ((local_4c - uVar22) + 0xacba2169 & (local_4c - uVar22) + 0x80b7ccb7) +
          (((uVar45 ^ uVar26) + ((uVar34 & uVar45 ^ uVar34) & uVar26) * -2) -
          (iVar9 + 0x59474506U & iVar9 + 0x3a23d6b9U)) ^ uVar28;
  local_78 = (ulonglong)uVar8;
  uVar17 = (local_4c - (local_50 + 0x7654bf5f ^ local_5c ^ local_60)) + 0xe04c5069;
  iVar9 = (local_50 + 0xe4eb3993 ^ local_50 + 0xe4eb3993 ^ local_d8) - local_4c;
  uVar25 = (uint)local_1b4 ^ 0x31722f42;
  cVar7 = (char)local_4c;
  bVar3 = ((byte)&local_130 ^ (0x68U - cVar7 & cVar7 + 0x97U | 0x68U - cVar7 & cVar7 + 0x97U)) &
          0x1f;
  uVar26 = (uint)local_1b6 ^ 0x7096e2d;
  uVar18 = (uVar21 & local_54 | uVar26 & ~local_54) ^ (local_bc | uVar16 & uVar26);
  uVar38 = ((0x59c59e70 - local_4c ^ local_4c + 0xa63a618f) & local_4c + 0xa63a618f ^
           local_4c + 0xa63a618f) + uVar18;
  uVar26 = uVar18 >> (-bVar3 & 0x1f);
  uVar16 = uVar38 >> (-bVar3 & 0x1f);
  uVar26 = (uVar18 >> 0xd ^ (uVar26 & uVar18 << bVar3 | uVar18 << bVar3 ^ uVar26)) * uVar18 *
           0x7679dbc3;
  uVar16 = (uVar38 >> 0xd ^ (uVar16 & uVar38 << bVar3 | uVar38 << bVar3 ^ uVar16)) * uVar38 *
           0x7679dbc3;
  uVar38 = (uint)local_1ba ^ 0x9953b86b;
  uVar18 = (uint)local_1ba ^ 0x66ac4794;
  uVar18 = (uVar18 & local_4c + 0xd9e6f9b | 0xf2619064 - local_4c & uVar38) ^
           (local_4c + 0xd9e6f9b & uVar18 | 0xf2619064 - local_4c & uVar38);
  local_230._0_4_ = local_50 + 0x1c76e675;
  cVar7 = FUN_180010a30(&local_480,local_268,
                        (uVar18 + 0x1bfd0da5 & uVar18) * -0x5bd52293 +
                        ((local_c8 ^ uVar25 ^ local_50 + 0xa725b189 ^ local_cc ^
                         uVar25 ^ local_c4 ^ local_50 + 0x91f28d2d ^ local_4c + 0xccd7241b) *
                         0x2327f249 -
                        ((0xd453648 - local_4c ^ local_4c + 0xf2bac9b7) & local_4c + 0xf2bac9b7 ^
                        local_4c + 0xf2bac9b7) * local_54) * -0x5bd52293 +
                        (iVar9 + 0xbeb17e20U & iVar9 + 0xdbeaa199U) * -0x5bd52293 +
                        ((uVar17 | 0xb7c8b2ed) & uVar17) * -0x5bd52293 +
                        uVar42 * -0x5bd52293 + local_58 * -0x76a3413 + local_4c * 0x71eefb0e +
                        (local_50 + 0xf5e0cfa5 ^ local_50 + 0xf5e0cfa5 ^ local_4c + 0x479b4205) *
                        -0x6a84c6fb +
                        (((~local_50 + local_50 ^ uVar26) & uVar16) - (~uVar16 & uVar26)) *
                        -0x5bd52293 + -0x6fce05f2 + uVar8);
  if (cVar7 == '\0') {
LAB_180033f1e:
    uVar8 = 0;
  }
  else {
    local_70 = local_70 + (local_54 ^ 0x53ad3915 ^ local_54 ^ 0x53ad3914) +
               ((ulonglong)
                ((0x8fc88c4c - local_4c & local_4c + 0x703773b3) * 0x2d9860b5 +
                 (0x8fc88c4c - local_4c & local_4c + 0x703773b3) * -0x2d9860b5 +
                 (local_54 ^ 0x2bdf8a2e) ^ local_54 ^ 0x2bdf8a2e) << 0x20);
    local_90 = CONCAT44(local_90._4_4_,local_54);
    local_88 = CONCAT44(local_88._4_4_,local_54);
    local_d4 = local_4c;
    local_228 = CONCAT44(local_228._4_4_,local_4c);
    local_220 = (ulonglong)local_4c;
    local_d0 = local_4c;
    local_238 = (ulonglong)local_4c;
    local_230._0_4_ = local_4c;
    local_d8 = local_4c;
    local_240 = (ulonglong)local_4c;
    local_7c = local_4c;
    local_58 = local_4c;
    local_a0 = CONCAT44(local_a0._4_4_,local_4c);
    local_64 = local_4c;
    local_60 = local_4c;
    local_5c = local_4c;
    local_dc = local_4c;
    local_68 = local_4c;
    local_100 = CONCAT44(local_100._4_4_,local_4c);
    local_e8 = CONCAT44(local_e8._4_4_,local_4c);
    local_98 = CONCAT44(local_98._4_4_,local_4c);
    local_a8 = (ulonglong)local_4c;
    local_b8 = (ulonglong)local_4c;
    local_b0 = CONCAT44(local_b0._4_4_,local_4c);
    local_78 = CONCAT44(local_78._4_4_,local_54);
    local_cc = local_54;
    local_270 = CONCAT44(local_270._4_4_,local_4c);
    local_110 = local_4c;
    local_114 = local_4c;
    local_104 = local_4c;
    local_278 = CONCAT44(local_278._4_4_,local_4c);
    local_118 = local_4c;
    local_11c = local_4c;
    local_10c = local_4c;
    local_108 = local_4c;
    local_280 = CONCAT44(local_280._4_4_,local_4c);
    local_120 = local_4c;
    local_124 = local_4c;
    local_12c = local_4c;
    local_bc = local_4c;
    local_208 = (ulonglong)local_4c;
    local_c0 = local_4c;
    local_200 = (ulonglong)local_4c;
    local_128 = local_4c;
    local_c4 = local_4c;
    local_210 = (ulonglong)local_4c;
    local_218 = (ulonglong)local_4c;
    local_c8 = local_4c;
    local_f0 = local_f8[1] - local_70;
    if ((ulonglong)local_f8[1] < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_18015ac40();
    }
    uVar25 = local_54 ^ 0xe5e78444;
    bVar3 = (byte)&local_131 & 0x1f;
    bVar2 = (byte)&local_131 & 0x1f;
    uVar26 = (uVar25 >> 0xd ^ (uVar25 << bVar3 | uVar25 >> 0x20 - bVar3)) * uVar25 * 0x50c5967f;
    uVar17 = (uVar25 >> 0xd ^ (uVar25 << bVar2 | uVar25 >> 0x20 - bVar2)) * uVar25 * 0x50c5967f;
    uVar16 = local_54 ^ 0x9e331d4a;
    uVar8 = local_54 ^ 0x61cce2b5;
    local_468 = CONCAT44((uVar25 + (~uVar17 & uVar26)) - (~uVar26 & uVar17) ^ local_54,
                         (uVar8 ^ uVar16) + (~(uVar8 * uVar16) & uVar8 * uVar16) * -2) ^
                0x1a187bbb00000000;
    if (local_f0 < local_468) {
      local_468 = local_f0;
    }
    local_470 = local_70 + *local_f8;
    bVar3 = (byte)&local_132 & 0x1f;
    bVar2 = (byte)&local_132 & 0x1f;
    uVar8 = ((0x20000001 << bVar3 | 0x20000001U >> 0x20 - bVar3) ^ 0x10000) * 0x4abff83b;
    uVar16 = ((0x20000001 << bVar2 | 0x20000001U >> 0x20 - bVar2) ^ 0x10000) * 0x4abff83b;
    cVar7 = FUN_180010a30(&local_470,local_358,(~uVar8 & uVar16) + (0x20000001 - (~uVar16 & uVar8)))
    ;
    if (cVar7 == '\0') goto LAB_180033f1e;
    local_458 = (longlong *)(local_268._8_8_ - local_268._0_8_);
    local_78 = local_268._0_8_;
    local_460 = local_268._0_8_;
    local_f8 = local_458;
    FUN_180026650(&local_1f8,&local_460);
    uVar8 = (local_54 * 0x2155e9b) % 0xffd ^ (local_54 * 0x2155e9b) % 0xffd;
    if (DAT_180bacc54 == '\x01') {
      uVar26 = ((local_54 ^ 0x4c1398b9) & (local_54 ^ 0xb3ec674d)) +
               ((local_54 ^ 0x4c1398b2) & (local_54 ^ 0xb3ec6746));
      bVar3 = (byte)local_135 & 0x1f;
      bVar2 = (byte)local_135 & 0x1f;
      uVar38 = (uVar26 >> 0xd ^ (uVar26 << bVar3 | uVar26 >> 0x20 - bVar3)) * uVar26 * -0x999792f;
      uVar16 = (uVar26 >> 0xd ^ (uVar26 << bVar2 | uVar26 >> 0x20 - bVar2)) * uVar26 * -0x999792f;
      iVar9 = local_54 * 2;
      uVar17 = iVar9 * iVar9 * iVar9 * iVar9;
      uVar25 = iVar9 * iVar9 * iVar9 * iVar9;
      uVar18 = ((~uVar17 & uVar25) - (~uVar25 & uVar17)) * -0xda048c1;
      bVar3 = (byte)&local_136 & 0x1f;
      bVar2 = (byte)&local_136 & 0x1f;
      uVar25 = (uVar18 >> 0xd ^ (uVar18 << bVar3 | uVar18 >> 0x20 - bVar3)) * uVar18 * -0x2e5b9c23;
      uVar17 = (uVar18 >> 0xd ^ (uVar18 << bVar2 | uVar18 >> 0x20 - bVar2)) * uVar18 * -0x2e5b9c23;
      if (local_1f0 - local_1f8 >> 4 !=
          CONCAT44((uVar18 + (~uVar25 & uVar17)) - (~uVar17 & uVar25),
                   ((((uVar26 * -0x22a1f4ad) / 0xfb) * 0xfb + uVar26 * 0x22a1f4ae +
                    (uVar26 * -0x22a1f4ad) % 0xfb) - (~uVar16 & uVar38)) + (~uVar38 & uVar16)))
      goto LAB_18002f576;
      uVar17 = local_54 ^ 0xf766f570;
      bVar3 = (byte)&local_137 & 0x1f;
      bVar2 = (byte)&local_137 & 0x1f;
      uVar16 = (uVar17 >> 0xd ^ (uVar17 << bVar3 | uVar17 >> 0x20 - bVar3)) * uVar17 * -0x58203017;
      uVar18 = (uVar17 >> 0xd ^ (uVar17 << bVar2 | uVar17 >> 0x20 - bVar2)) * uVar17 * -0x58203017;
      uVar25 = (local_54 * -0xac92321) % 0x3f1;
      uVar26 = (local_54 * -0xac92321) % 0x3f1;
      lVar12 = (ulonglong)
               (((uVar26 ^ uVar25) + (~uVar25 & uVar26) * -2) * -0x23c0d68d +
               ((uVar17 - (~uVar18 & uVar16)) + (~uVar16 & uVar18) ^ local_54 ^ 0xf766f570)) * 0x10;
      if ((*(longlong *)(local_1f8 + 8 + lVar12) != 0x23) ||
         (iVar9 = memcmp(*(void **)(local_1f8 + lVar12),"HVHGOD-INTERNAL-RUNTIME-IDENTITY-V5",0x23),
         iVar9 != 0)) goto LAB_18002f576;
      iVar9 = local_54 + 0xd75bade6;
      iVar32 = local_54 + 0xd75bade6;
      uVar16 = iVar9 * iVar9 * iVar9 * iVar9 * iVar9;
      uVar8 = iVar32 * iVar32 * iVar32 * iVar32 * iVar32;
      uVar8 = (uVar8 ^ uVar16) + (local_54 ^ 0xd75bade6) + (~uVar8 & uVar16) * -2;
      uVar16 = uVar8 * uVar8 * uVar8 * uVar8;
      uVar17 = uVar8 * uVar8 * uVar8 * uVar8;
      local_70 = CONCAT44(local_70._4_4_,
                          (~uVar16 & uVar17) +
                          ((local_54 ^ uVar8 ^ 0xd75bade7) - (~uVar17 & uVar16)));
      local_440 = &DAT_180bacbf0;
      local_438 = 0x20;
      puVar54 = &local_3c8;
      FUN_1800381e0(puVar54,&local_440);
      iVar9 = (local_54 + 0x8ea6101f) * (local_54 + 0x8ea6101f);
      uVar8 = iVar9 * iVar9;
      iVar9 = (local_54 + 0x8ea6101f) * (local_54 + 0x8ea6101f);
      uVar16 = iVar9 * iVar9;
      uVar8 = (~uVar8 & uVar16) + ((local_54 ^ 0x8ea6101f) - (~uVar16 & uVar8)) ^ local_54;
      if (0xf < local_3b0) {
        puVar54 = (undefined1 *)CONCAT71(uStack_3c7,local_3c8);
      }
      local_448 = local_3b8;
      uVar25 = local_54 ^ 0xa02aa3b4;
      bVar3 = (byte)&local_138 & 0x1f;
      bVar2 = (byte)&local_138 & 0x1f;
      uVar18 = (uVar25 >> 0xd ^ (uVar25 << bVar3 | uVar25 >> 0x20 - bVar3)) * uVar25 * 0x13cbc7b7;
      uVar16 = (uVar25 >> 0xd ^ (uVar25 << bVar2 | uVar25 >> 0x20 - bVar2)) * uVar25 * 0x13cbc7b7;
      iVar9 = (local_54 + 0xdaeb4855) * (local_54 + 0xdaeb4855);
      uVar17 = iVar9 * iVar9;
      iVar9 = (local_54 + 0xdaeb4855) * (local_54 + 0xdaeb4855);
      uVar26 = iVar9 * iVar9;
      uVar26 = (local_54 ^ 0xdaeb4855) + (uVar26 ^ uVar17) + (~uVar26 & uVar17) * -2;
      uVar17 = local_54 ^ 0xdaeb4855;
      puVar33 = (undefined8 *)
                (CONCAT44((uVar17 * uVar26 ^ uVar26 * uVar17) + (uVar26 ^ uVar17) +
                          (~(uVar26 * uVar17) & uVar17 * uVar26) * -2,
                          (0x2c473460 - local_4c & local_4c + 0xd3b8cb9f |
                          0x2c473460 - local_4c & local_4c + 0xd3b8cb9f) * 0x3140f235 +
                          (((~uVar18 & uVar16) +
                           (((local_54 * 0x1db39475) % 0xffd + uVar25) -
                           (local_54 * 0x1db39475) % 0xffd)) - (~uVar16 & uVar18) ^ local_54 ^
                          0xa02aa3b1)) * 0x10 + local_1f8);
      local_4d8 = *puVar33;
      uStack_4d0 = puVar33[1];
      local_450 = puVar54;
      uVar16 = FUN_18000d980(&local_4d8,&local_450);
      uVar18 = local_54 ^ 0x67571900;
      bVar3 = (byte)&local_139 & 0x1f;
      bVar2 = (byte)&local_139 & 0x1f;
      uVar38 = (uVar18 >> 0xd ^ (uVar18 << bVar3 | uVar18 >> 0x20 - bVar3)) * uVar18 * 0x495f3415;
      uVar17 = (uVar18 >> 0xd ^ (uVar18 << bVar2 | uVar18 >> 0x20 - bVar2)) * uVar18 * 0x495f3415;
      uVar26 = local_54 ^ 0x67571900;
      bVar3 = (byte)&local_13a & 0x1f;
      bVar2 = (byte)&local_13a & 0x1f;
      uVar45 = (uVar26 >> 0xd ^ (uVar26 << bVar3 | uVar26 >> 0x20 - bVar3)) * uVar26 * 0x7c74d0d7;
      uVar25 = (uVar26 >> 0xd ^ (uVar26 << bVar2 | uVar26 >> 0x20 - bVar2)) * uVar26 * 0x7c74d0d7;
      bVar56 = uVar16 != ((uVar26 + (~uVar45 & uVar25)) - (~uVar25 & uVar45) ^
                         uVar18 + (uVar17 ^ uVar38) + (~uVar17 & uVar38) * -2);
    }
    else {
LAB_18002f576:
      bVar56 = false;
    }
    if ((uVar8 & 1) != 0) {
      if (0xf < local_3b0) {
        lVar11 = CONCAT71(uStack_3c7,local_3c8);
        uVar13 = local_3b0 + 1;
        lVar12 = lVar11;
        if (0xfff < uVar13) {
          lVar12 = *(longlong *)(lVar11 + -8);
          if (0x1f < (ulonglong)((lVar11 + -8) - lVar12)) goto LAB_180037920;
          uVar13 = local_3b0 + 0x28;
        }
        FUN_1804547d0(lVar12,uVar13);
      }
      local_3b8 = 0;
      local_3b0 = 0xf;
      local_3c8 = 0;
    }
    if (bVar56) {
      local_4c8 = *local_1e0;
      uStack_4c0 = local_1e0[1];
      uVar16 = local_54 * local_54 * local_54 * local_54;
      uVar18 = local_54 * local_54 * local_54 * local_54;
      uVar26 = (local_54 * 0x5ce95cd1) % 0x1fd;
      uVar25 = (local_54 * 0x5ce95cd1) % 0x1fd;
      uVar45 = local_54 ^ 0x8a1fa5ce;
      bVar3 = (byte)&local_13b & 0x1f;
      bVar2 = (byte)&local_13b & 0x1f;
      uVar46 = (uVar45 >> 0xd ^ (uVar45 << bVar3 | uVar45 >> 0x20 - bVar3)) * uVar45 * -0x381fd157;
      uVar8 = (uVar45 >> 0xd ^ (uVar45 << bVar2 | uVar45 >> 0x20 - bVar2)) * uVar45 * -0x381fd157;
      uVar17 = (local_54 * -0x604d6f7f) % 0x1fd;
      uVar38 = (local_54 * -0x604d6f7f) % 0x1fd;
      puVar33 = (undefined8 *)
                ((ulonglong)(((~uVar16 & uVar18) - (~uVar18 & uVar16)) * -0x482799d9 + 1) * 0x10 +
                ((ulonglong)
                 ((uVar38 ^ uVar17) * -0x16e99e23 + (~uVar17 & uVar38) * 0x2dd33c46 +
                 (((local_54 ^ 0x8a1fa5ce) + (~uVar25 & uVar26)) - (~uVar26 & uVar25) ^
                 (uVar8 ^ uVar46) + uVar45 + (~uVar8 & uVar46) * -2)) << 0x24) + local_1f8);
      local_4b8 = *puVar33;
      uStack_4b0 = puVar33[1];
      uVar8 = FUN_18000d980(&local_4b8,&local_4c8);
      iVar9 = local_54 + 0x677f7dc6;
      iVar32 = local_54 + 0x677f7dc6;
      uVar16 = iVar9 * iVar9 * iVar9 * iVar9 * iVar9;
      uVar17 = iVar32 * iVar32 * iVar32 * iVar32 * iVar32;
      if (uVar8 == (((local_54 ^ 0x677f7dc6) + (~uVar16 & uVar17)) - (~uVar17 & uVar16) ^ local_54 ^
                   0x677f7dc6)) goto LAB_180036dca;
      uVar17 = local_54 ^ 0x4b9ab7f4;
      bVar3 = (byte)&local_13c & 0x1f;
      bVar2 = (byte)&local_13c & 0x1f;
      uVar16 = (uVar17 >> 0xd ^ (uVar17 << bVar3 | uVar17 >> 0x20 - bVar3)) * uVar17 * 0x3bb46b6b;
      uVar25 = (uVar17 >> 0xd ^ (uVar17 << bVar2 | uVar17 >> 0x20 - bVar2)) * uVar17 * 0x3bb46b6b;
      uVar26 = local_54 ^ 0xfb2f168d;
      bVar3 = (byte)&local_13d & 0x1f;
      bVar2 = (byte)&local_13d & 0x1f;
      uVar18 = (uVar26 >> 0xd ^ (uVar26 << bVar3 | uVar26 >> 0x20 - bVar3)) * uVar26 * 0x7f042321;
      uVar8 = (uVar26 >> 0xd ^ (uVar26 << bVar2 | uVar26 >> 0x20 - bVar2)) * uVar26 * 0x7f042321;
      if (*(longlong *)
           ((ulonglong)
            (((uVar25 ^ uVar16) +
              ((uVar17 + (local_54 * 0x5b835c77) % 0xffd) - (local_54 * 0x5b835c77) % 0xffd) +
              (~uVar25 & uVar16) * -2 ^ local_54 ^ 0x4b9ab7f6) +
            ((0x861ac238 - local_4c & local_4c + 0x79e53dc7) -
            (0x861ac238 - local_4c & local_4c + 0x79e53dc7)) * -0x7414ea09) * 0x10 + 8 +
           ((ulonglong)((uVar26 + (~uVar18 & uVar8)) - (~uVar8 & uVar18) ^ local_54 ^ 0xfb2f168d) <<
           0x24) + local_1f8) == 0) goto LAB_180036dca;
      local_90 = CONCAT44(local_90._4_4_,local_4c + 0x151aea73);
      local_88 = (ulonglong)(local_4c + 0x151aea73);
      local_b8 = CONCAT44(local_b8._4_4_,local_4c + 0xfb53865);
      local_b0 = (ulonglong)(local_4c + 0xfb53865);
      local_a8 = local_a8 & 0xffffffff00000000;
      local_a0 = 0;
      local_98 = CONCAT44(local_98._4_4_,local_4c);
      local_58 = local_4c;
      local_f0 = CONCAT44(local_f0._4_4_,local_4c + 0x6838b307);
      local_68 = 0;
      local_e8 = 0;
      local_64 = local_4c + 0x1fb8159d;
      local_60 = local_4c + 0x1f9b8f53;
      local_5c = 0;
      local_100 = CONCAT44(local_100._4_4_,local_4c + 0xf8646a31);
      local_7c = local_54 * 2;
      uVar17 = local_54 ^ 0x4eaa5885;
      uVar18 = local_54 ^ 0x4eaa5887;
      iVar9 = uVar18 + uVar17;
      uVar16 = uVar18 ^ uVar17;
      bVar3 = (byte)&local_13e & 0x1f;
      bVar2 = (byte)&local_13e & 0x1f;
      uVar8 = (uVar16 >> 0xd ^ (uVar16 << bVar3 | uVar16 >> 0x20 - bVar3)) * uVar16 * -0x4f088939;
      uVar16 = (uVar16 >> 0xd ^ (uVar16 << bVar2 | uVar16 >> 0x20 - bVar2)) * uVar16 * -0x4f088939;
      uVar45 = local_7c * local_7c * local_7c * local_7c;
      uVar38 = local_7c * local_7c * local_7c * local_7c;
      local_70 = local_1f8 +
                 ((ulonglong)((0x5ae65e0c - local_4c & local_4c + 0x2519a1f3) * 0x3a16dcbe) << 0x24)
      ;
      uVar26 = (local_54 * -0x2800027) % 0xfb;
      uVar25 = (local_54 * -0x2800027) % 0xfb;
      uVar25 = ((~uVar25 & uVar26) - (~uVar26 & uVar25)) * 0x19824f3d;
      iVar32 = (local_54 ^ 0x4c895807) + (local_54 ^ 0x4c895807);
      if (CONCAT44((iVar32 * iVar32 - iVar32 * iVar32) * (iVar32 * iVar32 + iVar32 * iVar32),
                   (uVar25 ^ 0x400) + (uVar25 & 0x400) * 2) <
          *(ulonglong *)
           ((ulonglong)
            ((uVar16 ^ uVar8) +
             iVar9 * iVar9 * iVar9 * iVar9 * iVar9 +
             ((((local_54 ^ 0xb155a778) & uVar17) + ((local_54 ^ 0xb155a77a) & uVar18)) -
             iVar9 * iVar9 * iVar9 * iVar9 * iVar9) + (~uVar16 & uVar8) * -2 +
            (((~uVar45 & uVar38) + (local_54 * -0x1b4c063f) % 0xfb) -
            ((~uVar38 & uVar45) + (local_54 * -0x1b4c063f) % 0xfb)) * 0x1d74dbdf) * 0x10 + 8 +
           local_70)) goto LAB_180036dca;
      local_70._4_4_ = (undefined4)(local_70 >> 0x20);
      local_70 = CONCAT44(local_70._4_4_,local_54);
      local_90 = CONCAT44(local_90._4_4_,local_4c + 0x2d0dc573);
      local_88 = (ulonglong)(local_4c + 0x80e240d);
      local_b8 = 0;
      local_b0 = (ulonglong)(local_4c + 0xdf98c157);
      local_a8 = 0;
      local_a0 = 0;
      uVar25 = local_54 ^ 0xf3be9485;
      local_98 = CONCAT44(local_98._4_4_,local_4c + 0x90a51a6b);
      local_58 = 0;
      uVar16 = (uVar25 >> 0xd ^ uVar25) * uVar25 * 0x7359a291;
      uVar8 = (uVar25 >> 0xd ^ uVar25) * uVar25 * 0x7359a291;
      uVar18 = local_54 ^ 0xe80cde0;
      bVar3 = (byte)local_141 & 0x1f;
      bVar2 = (byte)local_141 & 0x1f;
      uVar17 = (uVar18 >> 0xd ^ (uVar18 << bVar3 | uVar18 >> 0x20 - bVar3)) * uVar18 * -0x24988db7;
      uVar26 = (uVar18 >> 0xd ^ (uVar18 << bVar2 | uVar18 >> 0x20 - bVar2)) * uVar18 * -0x24988db7;
      if (*(longlong *)
           ((ulonglong)((uVar25 + (~uVar16 & uVar8)) - (~uVar8 & uVar16) ^ local_54 ^ 0xf3be9486) *
            0x10 + local_1f8 +
            ((ulonglong)((uVar18 - (~uVar26 & uVar17)) + (~uVar17 & uVar26) ^ local_54 ^ 0xe80cde0)
            << 0x24) + 8) == 0) goto LAB_180036dca;
      uVar8 = (local_54 ^ 0x4f04b8b8) & (local_54 ^ 0xb0fb4744) ^
              (local_54 ^ 0x4f04b8bb) & (local_54 ^ 0xb0fb4747);
      uVar16 = uVar8 * uVar8 * uVar8 * uVar8;
      uVar17 = uVar8 * uVar8 * uVar8 * uVar8;
      uVar16 = (~uVar16 & uVar17) + (uVar8 - (~uVar17 & uVar16));
      local_70 = CONCAT44(local_70._4_4_,uVar16);
      local_90 = local_1f8 + ((ulonglong)(local_54 ^ 0xc484bbe0 ^ local_54 ^ 0x484bbe0) << 0x24);
      local_88 = 0;
      uVar25 = local_54 ^ 0x94f73ca4;
      bVar3 = (byte)local_143 & 0x1f;
      bVar2 = (byte)local_143 & 0x1f;
      uVar17 = (uVar25 >> 0xd ^ (uVar25 << bVar3 | uVar25 >> 0x20 - bVar3)) * uVar25 * 0x5e205099;
      uVar8 = (uVar25 >> 0xd ^ (uVar25 << bVar2 | uVar25 >> 0x20 - bVar2)) * uVar25 * 0x5e205099;
      uVar25 = (uVar25 + (~uVar17 & uVar8)) - (~uVar8 & uVar17);
      uVar17 = (uVar25 * -0x293a607b) % 0x3f1;
      uVar8 = (uVar25 * -0x293a607b) % 0x3f1;
      if (CONCAT44(((local_54 ^ uVar25 ^ 0x94f73ca4) - (~uVar17 & uVar8)) + (~uVar8 & uVar17),
                   local_54 ^ 0x9c9d6b7f ^
                   (local_54 ^ 0x9c9d6bff) +
                   (~(local_54 * -0x63629401) & local_54 * -0x63629401) * -2) <
          *(ulonglong *)((ulonglong)uVar16 * 0x10 + 8 + local_90)) goto LAB_180036dca;
      bVar3 = (byte)&local_144 & 0x1f;
      bVar2 = (byte)&local_144 & 0x1f;
      uVar16 = (4 << bVar3 | 4U >> 0x20 - bVar3) * -0x570b579c;
      uVar8 = (4 << bVar2 | 4U >> 0x20 - bVar2) * -0x570b579c;
      uVar26 = local_54 * local_54 * local_54 * local_54 * local_54;
      uVar17 = local_54 * local_54 * local_54 * local_54 * local_54;
      uVar25 = (local_54 * 0x33b11f43) % 0xffd;
      uVar18 = (local_54 * 0x33b11f43) % 0xffd;
      lVar11 = ((ulonglong)
                ((local_54 ^ 0xe85bf27d) + (uVar18 ^ uVar25) + (~uVar25 & uVar18) * -2 ^
                (~uVar26 & uVar17) + ((local_54 ^ 0xe85bf27d) - (~uVar17 & uVar26))) << 0x24) +
               local_1f8;
      lVar12 = (ulonglong)((uVar8 ^ uVar16) + 4 + (~uVar8 & uVar16) * -2) * 0x10;
      if (*(longlong *)(lVar12 + 8 + lVar11) == 1) {
        bVar56 = **(char **)(lVar11 + lVar12) == '0';
      }
      else {
        bVar56 = false;
      }
      cVar7 = (char)local_4c;
      bVar4 = (byte)local_54;
      bVar3 = (-cVar7 - 0x14U & cVar7 + 0x13U) * 'a' + (-cVar7 - 0x14U & cVar7 + 0x13U) * -0x61 +
              bVar4;
      bVar2 = bVar4 ^ 0xb;
      cVar7 = ((~(bVar2 * bVar3) & bVar3 * bVar2) + (bVar4 & bVar3) + (~bVar3 & bVar2)) -
              (~(bVar3 * bVar2) & bVar2 * bVar3);
      if (bVar56 != (bool)(cVar7 + (cVar7 * cVar7 * cVar7 * cVar7 * cVar7 ^
                                   cVar7 * cVar7 * cVar7 * cVar7 * cVar7) & 1U)) {
        uVar16 = local_54 ^ 0x69b7d782;
        bVar3 = (byte)&local_145 & 0x1f;
        bVar2 = (byte)&local_145 & 0x1f;
        uVar8 = (uVar16 >> 0xd ^ (uVar16 << bVar3 | uVar16 >> 0x20 - bVar3)) * uVar16 * 0x3e894329;
        uVar17 = (uVar16 >> 0xd ^ (uVar16 << bVar2 | uVar16 >> 0x20 - bVar2)) * uVar16 * 0x3e894329;
        uVar20 = CONCAT44((uVar16 + (local_54 * local_54 - local_54 * local_54) *
                                    (local_54 * local_54 + local_54 * local_54) + (~uVar8 & uVar17))
                          - (~uVar17 & uVar8) ^ local_54,4) ^ 0x69b7d78200000000;
        bVar3 = (byte)&local_146 & 0x3f;
        bVar2 = (byte)&local_146 & 0x3f;
        uVar44 = (uVar20 >> 0xd ^ (uVar20 << bVar3 | uVar20 >> 0x40 - bVar3)) * uVar20 * 0x636272d5;
        uVar13 = (uVar20 >> 0xd ^ (uVar20 << bVar2 | uVar20 >> 0x40 - bVar2)) * uVar20 * 0x636272d5;
        puVar33 = (undefined8 *)
                  ((uVar20 * uVar20 * uVar20 * uVar20 * uVar20 -
                   uVar20 * uVar20 * uVar20 * uVar20 * uVar20) * 0x10 + uVar20 * 0x10 + local_1f8 +
                  ((uVar13 ^ uVar44) + (~uVar13 & uVar44) * -2) * 0x10);
        if (puVar33[1] == 1) {
          bVar56 = *(char *)*puVar33 == '1';
        }
        else {
          bVar56 = false;
        }
        uVar8 = local_54 ^ 0x2c6e0538;
        bVar3 = (byte)&local_147 & 0x1f;
        bVar2 = (byte)&local_147 & 0x1f;
        uVar16 = (uVar8 >> 0xd ^ (uVar8 << bVar3 | uVar8 >> 0x20 - bVar3)) * uVar8 * 0x2b7226a9;
        uVar17 = (uVar8 >> 0xd ^ (uVar8 << bVar2 | uVar8 >> 0x20 - bVar2)) * uVar8 * 0x2b7226a9;
        uVar8 = (uVar8 + (~uVar16 & uVar17)) - (~uVar17 & uVar16) ^ local_54 ^ 0x2c6e0539;
        bVar3 = (byte)&local_148 & 0x1f;
        bVar2 = (byte)&local_148 & 0x1f;
        cVar7 = (char)uVar8;
        if (bVar56 != (bool)(cVar7 + (((byte)(uVar8 >> 0xd) ^
                                      ((byte)(uVar8 << bVar2) | (byte)(uVar8 >> 0x20 - bVar2))) *
                                      cVar7 * -0x31 ^
                                     ((byte)(uVar8 >> 0xd) ^
                                     ((byte)(uVar8 << bVar3) | (byte)(uVar8 >> 0x20 - bVar3))) *
                                     cVar7 * -0x31) & 1)) goto LAB_180036dca;
      }
      local_430 = local_78;
      local_428 = local_f8;
      cVar7 = FUN_18001edd0(&local_430,local_358);
      if (cVar7 == '\0') goto LAB_180036dca;
      uVar8 = local_54 ^ 0xa9161b18 ^ local_54;
      local_78 = CONCAT44(local_78._4_4_,uVar8) ^ 0xa9161b1e;
      local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
      puVar33 = (undefined8 *)
                ((ulonglong)(uVar8 ^ 0xa9161b1e) * 0x10 +
                ((ulonglong)
                 ((~((local_54 ^ 0x932e7cc1) * (local_54 ^ 0x932e7cc1)) &
                  (local_54 ^ 0x932e7cc1) * (local_54 ^ 0x932e7cc1)) * -2) << 0x24) + local_1f8);
      local_4a8 = *puVar33;
      uStack_4a0 = puVar33[1];
      cVar7 = FUN_1800382c0(&local_4a8);
      lVar12 = local_1f8;
      if (cVar7 == '\0') {
        iVar9 = local_54 + 0xbeae2700;
        iVar32 = local_54 + 0xbeae2700;
        uVar16 = iVar9 * iVar9 * iVar9 * iVar9 * iVar9;
        uVar8 = iVar32 * iVar32 * iVar32 * iVar32 * iVar32;
        uVar8 = (local_54 ^ 0xbeae2700) + (uVar8 ^ uVar16) + (~uVar8 & uVar16) * -2 ^ local_54;
      }
      else {
        uVar8 = ((0xec8f74bc - local_4c & local_4c + 0x13708b43) -
                (0xec8f74bc - local_4c & local_4c + 0x13708b43)) * 0x22113a0d +
                (local_54 ^ 0xaaed5d7f);
        uVar16 = uVar8 * uVar8 * uVar8 * uVar8;
        uVar17 = uVar8 * uVar8 * uVar8 * uVar8;
        uVar25 = local_54 ^ 0xb68db0f5;
        bVar3 = (byte)local_14a & 0x1f;
        bVar2 = (byte)local_14a & 0x1f;
        uVar26 = (uVar25 >> 0xd ^ (uVar25 << bVar3 | uVar25 >> 0x20 - bVar3)) * uVar25 * 0x4d5fb475;
        uVar18 = (uVar25 >> 0xd ^ (uVar25 << bVar2 | uVar25 >> 0x20 - bVar2)) * uVar25 * 0x4d5fb475;
        local_390 = CONCAT44((uVar25 + (~uVar26 & uVar18)) - (~uVar18 & uVar26) ^ local_54,
                             (uVar17 ^ uVar16) +
                             (((uVar8 * -0x6f156c9d) % 0x1fd + (local_54 ^ 0xaaed5d7f ^ uVar8)) -
                             (uVar8 * -0x6f156c9d) % 0x1fd) + (~uVar17 & uVar16) * -2) ^
                    0xb68db0f500000000;
        local_388 = 0;
        cVar7 = FUN_180038770(*(undefined8 *)(local_1f8 + 0x70),*(undefined8 *)(local_1f8 + 0x78));
        uVar13 = local_390;
        if ((((cVar7 == '\0') || (local_390 == 0)) ||
            (cVar7 = FUN_180038810(lVar12 + 0x80,0x40), cVar7 == '\0')) ||
           (((cVar7 = FUN_180038810(lVar12 + 0x90,0x20), cVar7 == '\0' ||
             (cVar7 = FUN_180038770(*(undefined8 *)(lVar12 + 0xa0),*(undefined8 *)(lVar12 + 0xa8)),
             uVar20 = local_388, cVar7 == '\0')) || ((local_388 == 0 || (0x7fffffff < local_388)))))
           ) {
          uVar8 = 0;
        }
        else {
          local_3a8 = (undefined1  [16])0x0;
          local_398 = 0;
          local_498 = *local_1e0;
          uStack_490 = local_1e0[1];
          cVar7 = FUN_180010a30(&local_498,local_3a8);
          if (cVar7 == '\0') {
            uVar8 = 0;
          }
          else {
            local_418 = local_3a8._8_8_ - local_3a8._0_8_;
            local_420 = local_3a8._0_8_;
            FUN_180026650(&local_380,&local_420);
            local_248 = 0;
            local_244 = 0;
            local_368 = 0;
            local_360 = 0;
            lVar12 = _Xtime_get_ticks();
            if ((local_378 - (longlong)local_380 >> 4 == 0xc) && (local_380[1] == 0x17)) {
              pcVar1 = (char *)*local_380;
              auVar57[0] = -(pcVar1[7] == 'R');
              auVar57[1] = -(pcVar1[8] == 'U');
              auVar57[2] = -(pcVar1[9] == 'N');
              auVar57[3] = -(pcVar1[10] == 'T');
              auVar57[4] = -(pcVar1[0xb] == 'I');
              auVar57[5] = -(pcVar1[0xc] == 'M');
              auVar57[6] = -(pcVar1[0xd] == 'E');
              auVar57[7] = -(pcVar1[0xe] == '-');
              auVar57[8] = -(pcVar1[0xf] == 'L');
              auVar57[9] = -(pcVar1[0x10] == 'E');
              auVar57[10] = -(pcVar1[0x11] == 'A');
              auVar57[0xb] = -(pcVar1[0x12] == 'S');
              auVar57[0xc] = -(pcVar1[0x13] == 'E');
              auVar57[0xd] = -(pcVar1[0x14] == '-');
              auVar57[0xe] = -(pcVar1[0x15] == 'V');
              auVar57[0xf] = -(pcVar1[0x16] == '2');
              auVar59[0] = -(*pcVar1 == 'H');
              auVar59[1] = -(pcVar1[1] == 'V');
              auVar59[2] = -(pcVar1[2] == 'H');
              auVar59[3] = -(pcVar1[3] == 'G');
              auVar59[4] = -(pcVar1[4] == 'O');
              auVar59[5] = -(pcVar1[5] == 'D');
              auVar59[6] = -(pcVar1[6] == '-');
              auVar59[7] = -(pcVar1[7] == 'R');
              auVar59[8] = -(pcVar1[8] == 'U');
              auVar59[9] = -(pcVar1[9] == 'N');
              auVar59[10] = -(pcVar1[10] == 'T');
              auVar59[0xb] = -(pcVar1[0xb] == 'I');
              auVar59[0xc] = -(pcVar1[0xc] == 'M');
              auVar59[0xd] = -(pcVar1[0xd] == 'E');
              auVar59[0xe] = -(pcVar1[0xe] == '-');
              auVar59[0xf] = -(pcVar1[0xf] == 'L');
              auVar59 = auVar59 & auVar57;
              if (((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) != 0xffff) ||
                 (local_380[3] != 0x10)) goto LAB_1800378eb;
              pcVar1 = (char *)local_380[2];
              auVar58[0] = -(*pcVar1 == 'i');
              auVar58[1] = -(pcVar1[1] == 'n');
              auVar58[2] = -(pcVar1[2] == 't');
              auVar58[3] = -(pcVar1[3] == 'e');
              auVar58[4] = -(pcVar1[4] == 'r');
              auVar58[5] = -(pcVar1[5] == 'n');
              auVar58[6] = -(pcVar1[6] == 'a');
              auVar58[7] = -(pcVar1[7] == 'l');
              auVar58[8] = -(pcVar1[8] == '-');
              auVar58[9] = -(pcVar1[9] == 'r');
              auVar58[10] = -(pcVar1[10] == 'u');
              auVar58[0xb] = -(pcVar1[0xb] == 'n');
              auVar58[0xc] = -(pcVar1[0xc] == 't');
              auVar58[0xd] = -(pcVar1[0xd] == 'i');
              auVar58[0xe] = -(pcVar1[0xe] == 'm');
              auVar58[0xf] = -(pcVar1[0xf] == 'e');
              if (((((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar58[0xf] >> 7) << 0xf) != 0xffff) ||
                   (cVar7 = FUN_1800267f0(local_380[10],local_380[0xb]), DVar6 = local_248,
                   cVar7 == '\0')) || (DVar10 = GetCurrentProcessId(), DVar6 != DVar10)) ||
                 ((local_380[0xd] != 7 ||
                  (*(int *)(local_380[0xc] + 3) != 0x3131342e ||
                   *(int *)local_380[0xc] != 0x2e312e30)))) goto LAB_1800378eb;
              FUN_180001730(local_410);
              plVar5 = local_380;
              pppppppuVar14 = local_410;
              if (0xf < local_3f8) {
                pppppppuVar14 = local_410[0];
              }
              if (((local_380[0xf] != local_400) ||
                  ((local_400 != 0 &&
                   (iVar9 = memcmp((void *)local_380[0xe],pppppppuVar14,local_400), iVar9 != 0))))
                 || ((cVar7 = FUN_180026880(plVar5[0x10],plVar5[0x11]), cVar7 == '\0' ||
                     (((((local_244 != 10 ||
                         (cVar7 = FUN_180026950(local_380[0x12],local_380[0x13]), cVar7 == '\0')) ||
                        (cVar7 = FUN_180026950(local_380[0x14],local_380[0x15]), lVar55 = local_360,
                        lVar11 = local_368, cVar7 == '\0')) ||
                       ((lVar12 = lVar12 / 10000000 - lVar12 / -0x6769800000000000,
                        lVar12 + 0x1e < local_368 || (local_368 < lVar12 + -0x78)))) ||
                      (local_360 <= lVar12 || local_360 <= local_368)))))) {
                thunk_FUN_18015c010(local_410);
                goto LAB_1800378eb;
              }
              lVar12 = local_368 + 0x3c;
              thunk_FUN_18015c010(local_410);
              if (lVar12 < lVar55) goto LAB_1800378eb;
              AcquireSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
              uVar44 = DAT_180bacc70;
              if ((uVar13 < DAT_180bacc78) || (uVar20 < DAT_180bacc70)) {
LAB_180037d0d:
                ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
                goto LAB_1800378eb;
              }
              if ((uVar13 == DAT_180bacc78) && (uVar13 != 0)) {
                if (DAT_1808d4018 < 0x10) {
                  puVar33 = &DAT_1808d4000;
                }
                else {
                  puVar33 = DAT_1808d4000;
                }
                if ((*(size_t *)(local_1f8 + 0x88) != DAT_1808d4010) ||
                   ((DAT_1808d4010 != 0 &&
                    (iVar9 = memcmp(*(void **)(local_1f8 + 0x80),puVar33,DAT_1808d4010), iVar9 != 0)
                    ))) goto LAB_180037d0d;
              }
              if (uVar20 == uVar44) {
                if (DAT_1808d4038 < 0x10) {
                  puVar33 = &DAT_1808d4020;
                }
                else {
                  puVar33 = DAT_1808d4020;
                }
                if ((local_1e0[1] != DAT_1808d4030) ||
                   (((DAT_1808d4030 != 0 &&
                     (iVar9 = memcmp((void *)*local_1e0,puVar33,DAT_1808d4030), iVar9 != 0)) ||
                    (pppppppuVar14 = (undefined8 *******)GetTickCount64(),
                    DAT_180bacc68 <= pppppppuVar14)))) goto LAB_180037d0d;
                uVar44 = DAT_180bacc70;
              }
              if (uVar44 < uVar20) {
                local_410[0] = (undefined8 *******)0x0;
                lVar12 = _Xtime_get_ticks();
                UVar15 = GetTickCount64();
                cVar7 = FUN_18003acd0(&DAT_180bacc88,lVar11,lVar55,lVar12 / 10000,UVar15,local_410);
                if (cVar7 == '\0') {
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
                  goto LAB_1800378eb;
                }
                DAT_180bacc68 = local_410[0];
                FUN_180175270(&DAT_1808d4020,local_1e0);
              }
              DAT_180bacc78 = uVar13;
              FUN_180175270(&DAT_1808d4000,local_1f8 + 0x80);
              DAT_180bacc70 = uVar20;
              DAT_180bacc80 = lVar55;
              ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bacc60);
              FUN_180175270(local_3d0,local_1f8 + 0x20);
              FUN_180175270(local_3d8,local_1f8 + 0x30);
              if (*(longlong *)(local_1f8 + 0x48) == 1) {
                bVar56 = **(char **)(local_1f8 + 0x40) == '1';
              }
              else {
                bVar56 = false;
              }
              *param_5 = bVar56;
              uVar8 = 1;
            }
            else {
LAB_1800378eb:
              uVar8 = 0;
            }
            FUN_180176390(&local_380);
          }
          thunk_FUN_180113710(local_3a8);
        }
      }
    }
    else {
LAB_180036dca:
      uVar8 = local_54 ^ 0xf537d249 ^ local_54 ^ 0xf537d249;
      uVar16 = uVar8 * uVar8 * uVar8 * uVar8;
      uVar17 = uVar8 * uVar8 * uVar8 * uVar8;
      uVar8 = (uVar8 - (~uVar17 & uVar16)) + (~uVar16 & uVar17);
    }
    if (local_1f8 != 0) {
      uVar13 = local_1e8 - local_1f8;
      lVar12 = local_1f8;
      if (0xfff < uVar13) {
        lVar12 = *(longlong *)(local_1f8 + -8);
        if (0x1f < (ulonglong)((local_1f8 + -8) - lVar12)) goto LAB_180037920;
        uVar13 = uVar13 + 0x27;
      }
      FUN_1804547d0(lVar12,uVar13);
    }
  }
  if (local_358._0_8_ != local_358._8_8_) {
    FUN_18063ab10(local_358._0_8_,0,local_358._8_8_ - local_358._0_8_);
  }
  if (local_268._0_8_ != local_268._8_8_) {
    FUN_18063ab10(local_268._0_8_,0);
  }
  if (local_358._0_8_ != 0) {
    uVar13 = local_348 - local_358._0_8_;
    lVar12 = local_358._0_8_;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(local_358._0_8_ + -8);
      if (0x1f < (ulonglong)((local_358._0_8_ + -8) - lVar12)) goto LAB_180037920;
      uVar13 = uVar13 + 0x27;
    }
    FUN_1804547d0(lVar12,uVar13);
  }
  if (local_268._0_8_ != 0) {
    uVar13 = local_258 - local_268._0_8_;
    lVar12 = local_268._0_8_;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(local_268._0_8_ + -8);
      if (0x1f < (ulonglong)((local_268._0_8_ + -8) - lVar12)) {
LAB_180037920:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar13 = uVar13 + 0x27;
    }
    FUN_1804547d0(lVar12,uVar13);
  }
LAB_180033ff2:
  return uVar8 & 0xffffff01;
}



