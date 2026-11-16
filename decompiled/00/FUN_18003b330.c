// FUN_18003b330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18003b330 */

ulonglong FUN_18003b330(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                       undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,
                       undefined8 *param_8,int param_9,longlong *param_10)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined7 uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  char *local_458;
  undefined8 uStack_450;
  char *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  char *local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 ***local_3b8 [2];
  longlong local_3a8;
  ulonglong local_3a0;
  undefined8 *local_398;
  undefined8 local_390;
  undefined8 *local_388;
  undefined8 local_380;
  undefined8 *local_378;
  undefined8 local_370;
  undefined8 *local_368;
  undefined8 local_360;
  undefined8 *local_358;
  undefined8 local_350;
  undefined8 *local_348;
  undefined8 local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  longlong local_320;
  undefined8 *local_318;
  undefined8 local_310;
  undefined8 *local_308;
  undefined8 local_300;
  undefined8 *local_2f8;
  undefined8 local_2f0;
  undefined8 ***local_2e8;
  longlong local_2e0;
  undefined8 *local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong lStack_290;
  undefined8 local_288;
  longlong local_278;
  longlong lStack_270;
  undefined8 local_268;
  undefined4 local_260;
  int local_25c;
  int local_258;
  uint local_254;
  int local_250;
  int local_24c;
  uint local_248;
  undefined4 local_244;
  int local_240;
  undefined4 local_23c;
  undefined4 local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  ulonglong local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined1 local_17c;
  undefined1 local_17b;
  undefined1 local_17a [2];
  undefined1 local_178;
  undefined1 local_177 [2];
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  undefined1 local_16f [2];
  undefined1 local_16d;
  undefined1 local_16c;
  undefined1 local_16b;
  undefined1 local_16a;
  undefined1 local_169 [2];
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 local_161;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159 [2];
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152 [2];
  undefined1 local_150;
  undefined1 local_14f;
  undefined1 local_14e;
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [2];
  undefined1 local_144 [2];
  undefined1 local_142 [3];
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b [3];
  undefined1 local_138 [2];
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130 [2];
  undefined1 local_12e;
  undefined1 local_12d;
  int local_12c;
  uint local_128;
  undefined4 local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  uint local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  int local_dc;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined8 *local_c0;
  uint local_b4;
  uint local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  int local_84;
  uint local_80;
  int local_7c;
  undefined8 *local_78;
  uint local_6c;
  int local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_68 = -0x651e62eb;
  local_64 = 0x4856c89;
  uVar10 = (uint)&local_149 ^ 0xac8bf234;
  uVar7 = (uint)&local_149 ^ 0x53740dcb;
  uVar4 = (uint)&local_12d & 0x6dfdc746;
  uVar7 = (uVar7 & 0x6dfdc746 | uVar10 & 0x920238b9) ^ (uVar7 ^ uVar10) & (uint)&local_12d ^ uVar10
          | uVar4;
  uVar21 = (uint)&local_14a ^ 0x1a3393f;
  uVar18 = (uint)&local_14a ^ 0xfe5cc6c0;
  uVar25 = (uint)&local_14b ^ 0xfbde8d21;
  uVar10 = (uint)&local_14b ^ 0x42172de;
  uVar10 = (uVar10 & 0x691b1d40 | uVar25 & 0x96e4e2bf) ^ (uVar10 ^ uVar25) & 0x691b1d40 ^ uVar25;
  uVar30 = (uint)&local_14c;
  uVar26 = (uint)&local_14d ^ 0x8d29ff2f;
  uVar25 = (uint)&local_14d ^ 0x72d600d0;
  uVar25 = (uVar25 & 0xcb5dad7c | uVar26 & 0x34a25283) ^ (uVar25 & 0xcb5dad7c | uVar26 & 0x34a25283)
  ;
  uVar22 = (uint)&local_14e ^ 0xf052e688;
  uVar29 = (uint)&local_14f ^ 0xd826115b;
  uVar26 = (uint)&local_14f ^ 0x27d9eea4;
  uVar26 = (uVar26 & 0xcfd21880 | uVar29 & 0x302de77f) ^ (uVar26 & 0xcfd21880 | uVar29 & 0x302de77f)
  ;
  local_6c = (uVar26 + 0x7c1b61e3 & uVar26) +
             (((uVar30 ^ 0x3935375d ^
               (uVar30 ^ 0xc6cac8a2 ^ uVar30 ^ 0x3935375d) & uVar10 ^ uVar30 ^ 0x3935375d) &
              uVar10 + 0x1e32d3b9) - (uVar25 & uVar25 * 8 | uVar22 ^ uVar25 * 8 ^ uVar25 ^ uVar22))
             + (uVar4 ^ uVar7) + ((uVar18 ^ (uVar18 ^ uVar21) & uVar7 ^ uVar21) & uVar4) * -2;
  if (param_10 != (longlong *)0x0) {
    uVar4 = (uint)&local_150 ^ 0x501d80;
    uVar7 = (uint)&local_150 ^ 0xb30ee27e;
    uVar25 = (uint)local_152 ^ 0xeb1eac67;
    uVar10 = (uint)local_152 ^ 0x14e15398;
    uVar10 = (uVar10 ^ uVar25) & 0xa3df6c84 ^ uVar25 ^ (uVar10 & 0xa3df6c84 | uVar25 & 0x5c20937b);
    uVar21 = (uint)&local_153 ^ 0xbebc3cf1 ^ (uint)&local_153 ^ 0x4143c30e;
    uVar30 = (uint)&local_154 ^ 0x8743d974;
    uVar25 = (uint)&local_154 ^ 0x78bc268b;
    uVar22 = (uint)&local_155 ^ 0x267103b3;
    uVar18 = (uint)&local_156 ^ 0x2b63fd7f;
    uVar29 = (uint)&local_156 ^ 0xd49c0280;
    uVar31 = (uint)&local_157 ^ 0xc3624fb5;
    uVar26 = (uint)&local_157 ^ 0x3c9db04a;
    uVar29 = ((local_6c ^ 0x4eaf626d) & uVar31 | (local_6c ^ 0xb1509d92) & uVar26) ^
             (uVar26 ^ uVar31) &
             (local_6c & 0x4eaf626d ^ ((uVar7 ^ uVar4) & local_6c ^ uVar4 ^ uVar7) & 0xb1509d92) -
             (((uVar29 & 0x68a99ba9 | uVar18 & 0x97566456) ^
              (uVar29 ^ uVar18) &
              ((((uint)&local_155 ^ 0xd98efc4c) & 0x68a99ba9 | uVar22 & 0x97566456) ^ uVar22) ^
              uVar18) +
             (uVar25 ^ (uVar25 ^ uVar30) & (uVar10 + 0x74c541d9 & uVar21 ^ uVar21 | ~uVar10) ^
                       uVar30)) ^ uVar31;
    local_198 = (undefined8 *)(ulonglong)uVar29;
    local_b4 = ~local_6c;
    uVar4 = (uint)local_159 ^ 0x456224ee;
    uVar10 = (uint)&local_15a ^ 0x6bd90c02;
    uVar7 = (uint)&local_15a ^ 0x9426f3fd;
    uVar7 = (uVar10 & 0xc7af0b | uVar7 & 0xff3850f4) ^ uVar10 ^ (uVar7 ^ uVar10) & 0xff3850f4;
    uVar18 = (uint)&local_15b ^ 0xdba767e;
    uVar25 = (uint)&local_15c ^ 0x13d1fcb1;
    uVar10 = (uint)&local_15c ^ 0xec2e034e;
    uVar10 = (uVar10 & 0xc5548136 | uVar25 & 0x3aab7ec9) ^
             (uVar10 & 0xc5548136 | uVar25 & 0x3aab7ec9);
    uVar26 = (uint)&local_15d ^ 0xd0eb3095;
    uVar25 = (uint)&local_15d ^ 0x2f14cf6a;
    local_e8 = ((uVar25 & 0x3ac53533 | uVar26 & 0xc53acacc) ^
               ((uVar10 ^ 0x3ac53533) & uVar25 | (uVar10 ^ 0xc53acacc) & uVar26)) +
               ((local_6c & 0x9bdfd30e |
                (uVar4 ^ (local_6c & uVar4 | ((uint)local_159 ^ 0x20000811) & local_b4)) &
                0x64202cf1) - (uVar7 & uVar7 * 8 | uVar18 ^ uVar7 * 8 ^ uVar7 ^ uVar18));
    local_ac = 0xffffffff;
    local_a8 = 0xe4e18c0a;
    local_1c8 = CONCAT44(local_1c8._4_4_,0xe4e18c0a);
    local_a4 = 0x59bfd32e;
    local_a0 = 0x59bfd32e;
    local_1c0 = 0x4856c89;
    local_9c = 0x184fa5ec;
    local_1b8 = 0;
    local_98 = 0;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    local_1a8 = local_1a8 & 0xffffffff00000000;
    local_94 = 0;
    local_90 = 0x4856c89;
    local_8c = 0x31c503ce;
    local_88 = 0;
    local_84 = 0xfc30a3a0;
    local_1a0 = CONCAT44(local_1a0._4_4_,0xfc30a3a0);
    local_190 = (undefined8 *)((ulonglong)local_190 & 0xffffffff00000000);
    local_128 = 0;
    local_228 = 0;
    local_12c = 0;
    local_124 = 0;
    local_120 = 0x9e94e33c;
    local_11c = 0xdf821f2c;
    local_118 = 0x91ec20c2;
    local_114 = 0x91ec20c2;
    local_110 = 0;
    local_7c = 0x32b2de82;
    local_10c = 0x32b2de82;
    local_220 = 0x4856c89;
    local_108 = 0xf3df1e5a;
    local_218 = 0;
    local_104 = 0x4856c89;
    local_100 = 0x66f1c48c;
    local_fc = 0;
    local_f4 = 0x95a40dd6;
    local_f8 = 0x4856c89;
    local_f0 = 0x8c620f18;
    local_ec = 0x8c620f18;
    local_e4 = 0;
    local_80 = 0x4856c89;
    local_e0 = 0x6706885a;
    local_dc = 0;
    local_210 = CONCAT44(local_210._4_4_,0xc24dc4d4);
    local_d8 = 0xc24dc4d4;
    local_d0 = 0x780ffbba;
    local_d4 = 0x4856c89;
    local_208 = CONCAT44(local_208._4_4_,0x5674e8d0);
    local_cc = 0x5674e8d0;
    local_c8 = 0x68643ff0;
    local_200 = 0x68643ff0;
    uVar23 = (uint)&local_15e ^ 0xd905f3b1 ^ (uint)&local_15e ^ 0x26fa0c4e;
    local_c4 = 0;
    uVar10 = (uint)local_169 ^ 0xb0cb9bd2;
    uVar4 = (uint)local_169 ^ 0x4f34642d;
    uVar25 = (uint)&local_162 ^ 0xa00db971;
    uVar7 = local_6c * local_6c;
    local_78 = (undefined8 *)CONCAT44(local_78._4_4_,uVar7);
    uVar36 = (((uVar4 & 0xa2722c1a | uVar10 & 0x5d8dd3e5) ^ 0x853487cc ^
              (uVar4 & 0xa2722c1a | uVar10 & 0x5d8dd3e5) ^ 0x853487cc) + local_6c) * local_6c;
    uVar18 = (uint)&local_15f ^ 0xacd374d1;
    uVar31 = (uint)&local_160 ^ 0x8c236c7b;
    uVar26 = (uint)&local_160 ^ 0x73dc9384;
    uVar24 = (uint)&local_161 ^ 0xc085a90f;
    uVar4 = (uint)&local_162 ^ 0x5ff2468e;
    uVar10 = (uVar25 & local_6c | uVar4 & ~local_6c) ^ (local_6c & uVar25 | local_b4 & uVar4) |
             local_6c;
    uVar4 = (uint)&local_163;
    uVar35 = uVar4 ^ 0x8a06accb ^ (uVar4 ^ 0xeb6db008 ^ uVar4 ^ 0x14924ff7) & local_6c ^ 0x9e94e33c
             ^ (uVar10 & (uVar4 ^ 0xeb6db008) | (uVar4 ^ 0x14924ff7) & ~uVar10);
    uVar4 = (uint)&local_164 ^ 0xdd7c348c;
    uVar4 = ((uVar4 ^ (uVar10 & uVar4 | ((uint)&local_164 ^ 0x2283cb73) & ~uVar10)) & local_6c) * 2;
    uVar19 = (uint)&local_165 ^ 0xb7ed24df;
    uVar20 = (uint)&local_166 ^ 0x724135ab;
    uVar21 = (uint)&local_166 ^ 0x8dbeca54;
    uVar30 = (uint)&local_167 ^ 0x71d89e5a;
    uVar10 = (uint)&local_167 ^ 0x8e2761a5;
    uVar22 = (uint)&local_16a ^ 0x102be320;
    uVar25 = (uint)&local_16a ^ 0xefd41cdf;
    uVar32 = (uint)&local_16b ^ 0x499155c;
    uVar11 = (uint)&local_16b ^ 0xfb66eaa3;
    uVar33 = (uint)&local_16c ^ 0xcb7695c1;
    uVar12 = (uint)&local_16c ^ 0x34896a3e;
    uVar33 = (uVar12 & 0x90f54196 | uVar33 & 0x6f0abe69) ^ (uVar12 ^ uVar33) & 0x90f54196 ^ uVar33;
    uVar27 = (uint)&local_16d ^ 0xec184448;
    uVar12 = (uint)&local_16d ^ 0x13e7bbb7;
    uVar4 = ((((uVar32 & 0x495090c3 | uVar11 & 0xb6af6f3c) ^ (uVar11 ^ uVar32) & 0xb6af6f3c ^ uVar32
              ) * -0x2f65b8b5 +
              (((uVar22 ^ uVar25 ^ (uVar25 ^ uVar22) & uVar36) & uVar7) - (~uVar7 & uVar36)) +
             ((uVar30 & 0x6a5bf229 | uVar10 & 0x95a40dd6) ^ uVar30 ^ (uVar10 ^ uVar30) & 0x95a40dd6)
             * 0x61ceb957 +
             (((uVar35 ^ uVar4) + (~uVar35 & uVar4) * -2) -
             ((uVar21 & 0xa08ff926 | uVar20 & 0x5f7006d9) ^ uVar20 ^
             (uVar21 ^ uVar20) &
             ((((uint)&local_165 ^ 0x4812db20) & 0xa08ff926 | uVar19 & 0x5f7006d9) ^ uVar19)))) -
            ((uVar12 & 0xdafd8642 | uVar27 & 0x250279bd) ^
            ((uVar33 ^ 0xdafd8642) & uVar12 | (uVar33 ^ 0x250279bd) & uVar27))) * -0x2d264695 +
            (uVar24 ^ (uVar26 & 0x64202cf1 | uVar31 & 0x9bdfd30e) ^
             (local_6c & uVar26 | uVar31 & ~local_6c) ^ uVar24 ^
            ((((uint)&local_15f ^ 0x532c8b2e) & 0x566f65ee | uVar18 & 0xa9909a11) ^ uVar18 ^
            0x566f65ee) +
            (((local_6c * 0x64202cf1 ^ 0xffffffff) & local_6c * 0x64202cf1) -
            ((uVar23 & local_6c * 0x64202cf1 ^ uVar23) & local_6c * 0x64202cf1)) + local_e8);
    uVar25 = (uint)local_16f ^ 0x3d563fe1;
    uVar10 = (uint)local_16f ^ 0xc2a9c01e;
    uVar18 = (uint)&local_170 ^ 0x592a9f61;
    uVar7 = (uint)&local_170 ^ 0xa6d5609e;
    uVar8 = ((ulonglong)uVar4 << 0x20) * (longlong)local_198;
    uVar14 = CONCAT44(uVar4,(uVar7 & 0xf9079744 | uVar18 & 0x6f868bb) ^
                            (uVar7 ^ uVar18) & 0xf9079744 ^ uVar18) * (longlong)local_198;
    uVar28 = (ulonglong)&local_171 & 0xffffffff ^ 0x17afce615f5c7fab;
    uVar34 = (ulonglong)&local_171 & 0xffffffff ^ 0xe850319ea0a38054;
    uVar15 = (ulonglong)&local_172 & 0xffffffff ^ 0xee05e5f8a391b05a;
    uVar7 = (uint)&local_173;
    *param_10 = ((uVar8 & uVar34 | uVar28 & ~uVar8) ^ (uVar34 ^ uVar28) & uVar14 ^ uVar28) +
                ((uVar15 ^ (uVar8 & uVar15 |
                           ((ulonglong)&local_172 & 0xffffffff ^ 0x11fa1a075c6e4fa5) & ~uVar8)) &
                uVar14) * -2 +
                ((ulonglong)((uVar7 ^ 0xc3b6931e) & 0x96090cd5 | uVar7 & 0x69f6f32a) ^
                 0xffffffff41b6930a ^ (ulonglong)&local_173 & 0xffffffff ^ 0x3c496ce1) + 1 +
                (ulonglong)
                ((uVar25 & 0xcbd03439 | uVar10 & 0x342fcbc6) ^ uVar25 ^
                (uVar10 ^ uVar25) & 0x342fcbc6) * -0xb5bc2f21 + CONCAT44(uVar4,uVar29);
    local_c0 = param_3;
    local_b0 = local_6c;
  }
  local_458 = "internal-runtime";
  uStack_450 = 0x10;
  local_390 = param_3[2];
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  local_398 = param_3;
  local_2b8 = param_2;
  local_2b0 = param_1;
  local_1e4 = param_4;
  iVar5 = FUN_18000d980(&local_398,&local_458);
  local_198 = (undefined8 *)CONCAT44(local_198._4_4_,iVar5);
  local_a8 = local_6c;
  uVar4 = (uint)&local_174 ^ 0xaea6c2ae;
  uVar22 = (uint)&local_174 ^ 0x51593d51;
  uVar7 = (uint)&local_175 ^ 0x90a8b107;
  uVar12 = uVar7 ^ local_64 + 0x264c5c67 ^ local_64 + 0x264c5c67 ^ uVar7;
  local_b4 = local_64 + 0xe8bf0e6d ^ 0x1740f192 - local_64;
  uVar10 = (uint)local_177 ^ 0x22b6017e;
  uVar7 = (uint)local_177 ^ 0xdd49fe81;
  uVar7 = (uVar7 ^ uVar10) & local_64 + 0x414e77d ^ uVar10 ^
          (local_64 + 0x414e77d & uVar7 | 0xfbeb1882 - local_64 & uVar10);
  local_b0 = local_68 + 0xea06aef;
  local_ac = local_68 + 0xea06aef;
  local_1c8 = 0;
  local_a4 = local_64 + 0xf9432bfd;
  local_a0 = local_64 + 0xf9432bfd;
  local_1c0 = local_1c0 & 0xffffffff00000000;
  local_9c = local_68 + 0x78b1d2ef;
  local_98 = local_68 + 0x16a177bd;
  local_1b0 = (ulonglong)(0xe95e8842 - local_68);
  local_94 = 0;
  local_1a8 = (ulonglong)local_64;
  local_90 = local_64 + 0x25752fe3;
  local_8c = local_68 + 0x656c4145;
  local_88 = local_68 + 0x656c4145;
  local_84 = local_68 + 0x533d1485;
  local_1a0 = (ulonglong)(local_68 + 0x533d1485);
  local_190 = (undefined8 *)CONCAT44(local_190._4_4_,local_68 + -0x69518aa1);
  local_12c = local_68 + -0x69518aa1;
  local_128 = local_64;
  local_228 = (ulonglong)local_64;
  local_124 = 0;
  local_80 = local_64 + 0x64a7d7b3;
  local_120 = local_64 + 0x64a7d7b3;
  local_11c = local_68 + 0x368760e5;
  local_118 = local_68 + 0x368760e5;
  local_114 = local_68 + 0xf68c84af;
  local_110 = local_68 + 0xf68c84af;
  local_7c = local_68 + -0x533ee2bd;
  local_10c = local_68 + -0x533ee2bd;
  local_220 = local_220 & 0xffffffff00000000;
  local_108 = 0;
  uVar10 = (uint)&local_178 ^ 0x4a8c0dfe;
  local_218 = local_218 & 0xffffffff00000000;
  local_104 = 0;
  local_100 = 0;
  local_fc = 0;
  uVar10 = uVar10 ^ local_64 + 0x89186c5 ^
           local_68 + 0xda162df1U ^ uVar10 ^ local_68 + 0xda162df1U ^ local_64 + 0x89186c5;
  local_f8 = 0;
  local_f4 = local_68 + 0x5d537aa3;
  local_f0 = 0;
  local_258 = (uVar10 + 0xfa9e61eb & uVar10) + (uVar7 << 5 | uVar7);
  local_ec = 0;
  local_e4 = local_64 + 0x48b47d1f;
  local_e8 = local_64;
  local_e0 = 0;
  local_dc = local_68 + 0x14f6248d;
  local_d8 = 0;
  local_210 = (ulonglong)local_64;
  local_d4 = local_64 + 0xa831e655;
  local_d0 = local_68 + 0x79255a09;
  local_208 = (ulonglong)(local_68 + 0x79255a09U);
  local_cc = local_68 + -0xbb4f093;
  local_c8 = local_68 + -0xbb4f093;
  local_200 = CONCAT44(local_200._4_4_,local_68 + -0x6d3ed0a5);
  local_c4 = local_68 + 0x204f03ef;
  local_260 = 0;
  local_2c8 = (ulonglong)local_64;
  local_25c = local_64 + 0xdb3cedef;
  local_2c0 = 0;
  local_250 = local_68 + 0x7696a699;
  local_24c = local_68 + 0x7696a699;
  local_254 = local_64;
  local_248 = local_64 + 0x25aa23b3;
  local_244 = 0;
  local_240 = local_64 + 0xd29f7271;
  local_1f8 = (ulonglong)local_64;
  local_23c = 0;
  local_238 = 0;
  local_234 = local_6c;
  local_22c = local_6c;
  local_230 = local_6c;
  local_c0 = (undefined8 *)((ulonglong)local_c0 & 0xffffffff00000000);
  uVar26 = local_6c * -0xdc57897;
  uVar31 = (uint)local_17a ^ 0xc8e943af;
  uVar7 = (uint)local_17a ^ 0x3716bc50;
  uVar10 = (uint)&local_17b ^ 0x1069d869;
  uVar18 = (uint)&local_17c ^ 0x5de4d8e7;
  uVar25 = (uint)&local_17c ^ 0xa21b2718;
  uVar11 = (local_64 + 0x25752fe3 & uVar25 | 0xda8ad01c - local_64 & uVar18) ^
           (uVar25 ^ uVar18) & (local_88 ^ local_8c ^ local_90) ^ uVar18;
  uVar21 = (uint)&local_17d ^ 0xea679fc8;
  uVar25 = (uint)&local_17d ^ 0x15986037;
  uVar29 = (uint)&local_17e ^ 0xbd810f9a;
  uVar30 = (uint)&local_17e ^ 0x427ef065;
  uVar18 = (uint)&local_17f ^ 0xac238ba6;
  iVar13 = ((((((uVar22 & 0xf23a8769 | uVar4 & 0xdc57896) ^ uVar4 ^ (uVar22 ^ uVar4) & local_6c |
               local_6c & 0xf23a8769) - ((uVar12 + 0xf3c7bd9c & uVar12) + (local_6c & 0xf23a8769)))
             - uVar18) + local_b4 +
            ((uVar26 & uVar7 | uVar31 & ~uVar26) ^ (uVar7 ^ uVar31) & local_6c * -0xdc57897 ^ uVar31
            ) + (((uVar26 & uVar10 | ((uint)&local_17b ^ 0xef962796) & ~uVar26) ^ uVar10) &
                local_6c * -0xdc57897) * -2) - ((uVar11 + 0x31f745a1 & uVar11) + local_258)) +
           ((uVar30 & 0xa333a9d2 | uVar29 & 0x5ccc562d) ^
           (uVar30 ^ uVar29) &
           ((uVar25 & 0xa333a9d2 | uVar21 & 0x5ccc562d) ^ uVar21 ^
           (uVar25 ^ uVar21) &
           (local_118 ^ local_11c ^ local_80) - (local_110 ^ local_114 ^ local_120)) ^ uVar29) +
           (0xf1f6d048 - local_64 & local_64 + 0xe092fb7 |
           0xf1f6d048 - local_64 & local_64 + 0xe092fb7);
  uVar31 = iVar13 + uVar18 + 1;
  uVar26 = ~(local_6c | 0xf23a8769) & local_6c & 0xf23a8769;
  uVar4 = local_6c & 0xf23a8769 | ~(local_6c | 0xf23a8769);
  uVar7 = ~uVar4;
  uVar10 = (uint)&local_180 ^ 0x2735f387;
  uVar25 = ~uVar26 & uVar7;
  uVar26 = ((uVar10 & uVar7 | ((uint)&local_180 ^ 0xd8ca0c78) & uVar4) ^ uVar10) & uVar26;
  uVar4 = (uint)&local_181 ^ 0xb78e6149;
  uVar7 = uVar4 ^ uVar26 ^ uVar25 ^ uVar4;
  uVar4 = ((0x22ac855cU - local_68 ^ local_f4 ^ uVar25) & uVar26) * 2;
  uVar19 = (uint)&local_182 ^ 0x63a678fa;
  uVar24 = ~uVar7;
  uVar30 = (uint)&local_182 ^ 0x9c598705;
  uVar22 = (uint)&local_183 ^ 0xd8a858db;
  uVar10 = (uint)&local_183 ^ 0x2757a724;
  uVar25 = (local_64 - (local_68 + 0x79255a09U ^ local_d0 ^ local_d4)) + 0xa831e655;
  uVar26 = (local_64 - local_25c) + 0xdb3cedef;
  uVar27 = (uint)&local_184 ^ 0xfe240a7;
  uVar20 = (uint)&local_184 ^ 0xf01dbf58;
  uVar29 = (uint)&local_185 ^ 0x29980bf2;
  uVar21 = (uint)&local_185 ^ 0xd667f40d;
  uVar11 = (local_64 + 0x25aa23b3 & uVar21 | 0xda55dc4c - local_64 & uVar29) ^
           (uVar21 ^ uVar29) & local_248 ^ uVar29;
  uVar33 = (uint)&local_186 ^ 0xaef2c78e;
  uVar21 = (uint)&local_186 ^ 0x510d3871;
  uVar29 = local_6c ^ 0xf23a8769;
  uVar12 = (local_240 - local_64) + 0x2d608d8f;
  bVar1 = (byte)&local_12e & 0x1f;
  bVar2 = (byte)&local_12e & 0x1f;
  uVar23 = (uVar29 >> 0xd ^ (uVar29 << bVar1 | uVar29 >> 0x20 - bVar1)) * uVar29 * 0x346a47ef;
  uVar32 = (uVar29 >> 0xd ^ (uVar29 << bVar2 | uVar29 >> 0x20 - bVar2)) * uVar29 * 0x346a47ef;
  uVar29 = (uVar31 * -0x488a4835) % 0x3f1;
  uVar18 = ((iVar13 + uVar18 + 1) * -0x488a4835) % 0x3f1;
  if ((iVar5 != ((((uVar12 * 0x10 | uVar12) +
                   ((uVar21 & 0x7cbd586f | uVar33 & 0x8342a790) ^
                   ((uVar11 ^ 0x7cbd586f) & uVar21 | (uVar11 ^ 0x8342a790) & uVar33)) +
                   (~uVar23 & uVar32) +
                  ((uVar20 & 0x47791522 | uVar27 & 0xb886eadd) ^
                  ((uVar26 ^ 0x47791522) & uVar20 | (uVar26 ^ 0xb886eadd) & uVar27)) +
                  ((uVar25 | 0xd27bf086) & uVar25) +
                  ((0xb74b82e0 - local_64 & uVar22 | local_64 + 0x48b47d1f & uVar10) ^
                  (uVar10 ^ uVar22) & local_e4 ^ uVar22) * -0x7c5e1985 +
                  ((uVar30 ^ uVar19) & uVar4 ^ uVar19 ^ (uVar7 & uVar30 | uVar19 & uVar24)) +
                  (uVar24 & uVar4) * -2) - (~uVar32 & uVar23) ^ uVar31) + (~uVar18 & uVar29)) -
                (~uVar29 & uVar18)) && (local_1e4 != 0)) {
    local_380 = param_5[2];
    local_388 = param_5;
    if (0xf < (ulonglong)param_5[3]) {
      local_388 = (undefined8 *)*param_5;
    }
    local_78 = param_5;
    uVar4 = (local_6c * -0x4f1bba89) % 0x1fd;
    uVar7 = (local_6c * -0x4f1bba89) % 0x1fd;
    uVar25 = (local_6c ^ 0xf56ddba2) + (uVar7 ^ uVar4) + (~uVar4 & uVar7) * -2;
    uVar7 = local_6c ^ 0xf56ddb82;
    iVar13 = (local_6c + 0xf56ddb82) * (local_6c + 0xf56ddb82);
    iVar5 = (local_6c + 0xf56ddb82) * (local_6c + 0xf56ddb82);
    bVar1 = (byte)local_130 & 0x1f;
    bVar2 = (byte)local_130 & 0x1f;
    uVar10 = (uVar7 >> 0xd ^ (uVar7 << bVar1 | uVar7 >> 0x20 - bVar1)) * uVar7 * 0x932765d;
    uVar4 = (uVar7 >> 0xd ^ (uVar7 << bVar2 | uVar7 >> 0x20 - bVar2)) * uVar7 * 0x932765d;
    uVar18 = (((uVar7 + (local_6c * -0x6ea8a1b7) % 0x3f1 + (iVar5 - iVar13) * (iVar5 + iVar13)) -
              (local_6c * -0x6ea8a1b7) % 0x3f1) + (~uVar10 & uVar4)) - (~uVar4 & uVar10);
    iVar5 = uVar18 + uVar25;
    uVar26 = iVar5 * iVar5 * iVar5 * iVar5;
    uVar21 = iVar5 * iVar5 * iVar5 * iVar5;
    uVar30 = local_6c ^ 0x1038a477;
    bVar1 = (byte)&local_131 & 0x1f;
    bVar2 = (byte)&local_131 & 0x1f;
    uVar22 = (uVar30 >> 0xd ^ (uVar30 << bVar1 | uVar30 >> 0x20 - bVar1)) * uVar30 * -0x428ea4c1;
    uVar4 = (uVar30 >> 0xd ^ (uVar30 << bVar2 | uVar30 >> 0x20 - bVar2)) * uVar30 * -0x428ea4c1;
    iVar5 = (local_6c + 0x1038a477) * (local_6c + 0x1038a477);
    uVar10 = iVar5 * iVar5;
    iVar5 = (local_6c + 0x1038a477) * (local_6c + 0x1038a477);
    uVar7 = iVar5 * iVar5;
    uVar4 = (~uVar10 & uVar7) + ((local_6c ^ 0x1038a477) - (~uVar7 & uVar10)) ^
            uVar30 + (uVar4 ^ uVar22) + (~uVar4 & uVar22) * -2;
    uVar7 = uVar4 * uVar4 * uVar4 * uVar4;
    uVar10 = uVar4 * uVar4 * uVar4 * uVar4;
    local_1b8._0_4_ = local_68 + 0x78b1d2ef;
    cVar3 = FUN_180038810(&local_388,
                          CONCAT44((uVar4 - (~uVar10 & uVar7)) + (~uVar7 & uVar10),
                                   (uVar21 ^ uVar26) + (uVar18 ^ uVar25) + (~uVar21 & uVar26) * -2))
    ;
    if (cVar3 != '\0') {
      local_c0 = param_6;
      if (param_6[2] != 0) {
        uVar7 = local_6c ^ 0x1a0726b8;
        iVar5 = local_6c + 0x1a0726b8;
        iVar13 = local_6c + 0x1a0726b8;
        bVar1 = (byte)&local_132 & 0x1f;
        bVar2 = (byte)&local_132 & 0x1f;
        uVar10 = (uVar7 >> 0xd ^ (uVar7 << bVar1 | uVar7 >> 0x20 - bVar1)) * uVar7 * 0x71d64d81;
        uVar4 = (uVar7 >> 0xd ^ (uVar7 << bVar2 | uVar7 >> 0x20 - bVar2)) * uVar7 * 0x71d64d81;
        uVar8 = (ulonglong)
                (((uVar7 - iVar5 * iVar5 * iVar5 * iVar5 * iVar5) +
                  iVar13 * iVar13 * iVar13 * iVar13 * iVar13 + (~uVar10 & uVar4)) -
                 (~uVar4 & uVar10) ^ local_6c ^ 0x1a0726f8);
        uVar15 = uVar8 * uVar8 * uVar8 * uVar8;
        uVar14 = uVar8 * uVar8 * uVar8 * uVar8;
        if ((ulonglong)param_6[2] <= (uVar8 + (~uVar15 & uVar14)) - (~uVar14 & uVar15)) {
          local_370 = param_7[2];
          local_378 = param_7;
          if (0xf < (ulonglong)param_7[3]) {
            local_378 = (undefined8 *)*param_7;
          }
          uVar18 = local_6c ^ 0x6eabdc1f;
          bVar1 = (byte)&local_133 & 0x1f;
          bVar2 = (byte)&local_133 & 0x1f;
          uVar10 = (uVar18 >> 0xd ^ (uVar18 << bVar1 | uVar18 >> 0x20 - bVar1)) * uVar18 *
                   0x204eb211;
          uVar4 = (uVar18 >> 0xd ^ (uVar18 << bVar2 | uVar18 >> 0x20 - bVar2)) * uVar18 * 0x204eb211
          ;
          uVar25 = local_6c ^ 0xefd31ba3;
          bVar1 = (byte)&local_134 & 0x1f;
          bVar2 = (byte)&local_134 & 0x1f;
          uVar7 = (uVar25 >> 0xd ^ (uVar25 << bVar1 | uVar25 >> 0x20 - bVar1)) * uVar25 *
                  -0x55670d6d;
          uVar26 = (uVar25 >> 0xd ^ (uVar25 << bVar2 | uVar25 >> 0x20 - bVar2)) * uVar25 *
                   -0x55670d6d;
          uVar7 = uVar25 + (uVar26 ^ uVar7) + (~uVar26 & uVar7) * -2;
          iVar5 = (local_6c + 0xefd31ba3) * (local_6c + 0xefd31ba3);
          uVar25 = iVar5 * iVar5;
          iVar5 = (local_6c + 0xefd31ba3) * (local_6c + 0xefd31ba3);
          uVar21 = iVar5 * iVar5;
          uVar26 = (uVar7 * -0x4297135f) % 0xfb;
          uVar30 = (uVar7 * -0x4297135f) % 0xfb;
          uVar26 = (((local_6c ^ 0xefd31ba3) + (uVar21 ^ uVar25) + (~uVar21 & uVar25) * -2 ^ uVar7)
                   + (~uVar30 & uVar26)) - (~uVar26 & uVar30);
          bVar1 = (byte)&local_135 & 0x1f;
          bVar2 = (byte)&local_135 & 0x1f;
          uVar25 = (uVar26 >> 0xd ^ (uVar26 << bVar1 | uVar26 >> 0x20 - bVar1)) * uVar26 *
                   -0x1a5bcf07;
          uVar7 = (uVar26 >> 0xd ^ (uVar26 << bVar2 | uVar26 >> 0x20 - bVar2)) * uVar26 *
                  -0x1a5bcf07;
          cVar3 = FUN_180038810(&local_378,
                                CONCAT44((uVar26 + (~uVar25 & uVar7)) - (~uVar7 & uVar25),
                                         uVar18 + (uVar4 ^ uVar10) + (~uVar4 & uVar10) * -2 ^
                                         local_6c) ^ 0x6eabdc5f);
          if (cVar3 != '\0') {
            local_360 = param_8[2];
            local_368 = param_8;
            if (0xf < (ulonglong)param_8[3]) {
              local_368 = (undefined8 *)*param_8;
            }
            local_198 = param_8;
            iVar5 = (local_6c ^ 0xad60cc82) + (local_6c ^ 0xad60ccc2);
            uVar4 = iVar5 * iVar5 * iVar5 * iVar5;
            uVar7 = iVar5 * iVar5 * iVar5 * iVar5;
            uVar8 = (ulonglong)
                    ((local_6c ^ 0xad60cc82 ^ local_6c ^ 0xad60ccc2) + (uVar7 ^ uVar4) +
                    (~uVar7 & uVar4) * -2);
            uVar15 = uVar8 * uVar8 * uVar8 * uVar8 * uVar8;
            uVar14 = uVar8 * uVar8 * uVar8 * uVar8 * uVar8;
            cVar3 = FUN_180038810(&local_368,uVar8 + (uVar14 ^ uVar15) + (~uVar14 & uVar15) * -2);
            if (cVar3 != '\0') {
              local_84 = 0;
              local_b4 = local_64 + 0x7f1c4ff7;
              local_b0 = local_64 + 0x7f1c4ff7;
              local_ac = local_64 + 0x63115167;
              local_a8 = local_64 + 0x63115167;
              local_1c8 = CONCAT44(local_1c8._4_4_,local_64 + 0x98d7d0a9);
              local_a4 = 0;
              local_a0 = local_64 + 0x1fba71e7;
              local_190 = param_7;
              local_1c0 = CONCAT44(local_1c0._4_4_,local_64 + 0x39cf0eeb);
              local_9c = local_64 + 0xee56aac1;
              local_1b8 = CONCAT44(local_1b8._4_4_,local_64 + 0xd5e80aaf);
              local_98 = local_64 + 0xd5e80aaf;
              local_1b0 = CONCAT44(local_1b0._4_4_,local_64 + 0xb8806013);
              local_1a8 = CONCAT44(local_1a8._4_4_,local_64 + 0xaa2533c5);
              local_94 = local_64 + 0xd643ef3d;
              local_90 = local_64 + 0x6fcc28f5;
              local_8c = local_64 + 0x96c03fed;
              local_88 = local_6c * 0x41889d71;
              local_1a0 = local_1a0 & 0xffffffff00000000;
              if ((int)(((local_6c ^ 0x41889d71) + (~(local_6c * 0x41889d71) & local_88)) -
                        (~local_88 & local_6c * 0x41889d71) ^ local_6c ^ 0x41889d72) <= param_9) {
                local_278 = 0;
                lStack_270 = 0;
                local_268 = 0;
                local_298 = 0;
                lStack_290 = 0;
                local_288 = 0;
                local_350 = local_2b0[2];
                local_358 = local_2b0;
                if (0xf < (ulonglong)local_2b0[3]) {
                  local_358 = (undefined8 *)*local_2b0;
                }
                uVar4 = local_6c ^ 0xd4e0f094 ^ local_6c ^ 0xd4e0d094;
                bVar1 = (byte)&local_136 & 0x1f;
                bVar2 = (byte)&local_136 & 0x1f;
                uVar7 = (uVar4 >> 0xd ^ (uVar4 << bVar1 | uVar4 >> 0x20 - bVar1)) * uVar4 *
                        -0x2b4bec9f;
                uVar10 = (uVar4 >> 0xd ^ (uVar4 << bVar2 | uVar4 >> 0x20 - bVar2)) * uVar4 *
                         -0x2b4bec9f;
                iVar5 = local_6c * 2;
                lVar9 = CONCAT44((iVar5 * iVar5 * iVar5 * iVar5 * iVar5 -
                                 iVar5 * iVar5 * iVar5 * iVar5 * iVar5) * -0x4e86fa57,
                                 (uVar4 + (~uVar7 & uVar10)) - (~uVar10 & uVar7));
                uVar14 = lVar9 * lVar9 * lVar9 * lVar9;
                uVar8 = lVar9 * lVar9 * lVar9 * lVar9;
                cVar3 = FUN_180010a30(&local_358,&local_278,1,
                                      lVar9 + (uVar8 ^ uVar14) + (~uVar8 & uVar14) * -2);
                if (cVar3 == '\0') {
LAB_180046f32:
                  local_78 = (undefined8 *)CONCAT44(local_78._4_4_,local_6c);
                  local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,local_64 + 0x2716f535);
                  uVar4 = local_6c ^ 0x427348b1;
                  uVar7 = local_6c * local_6c * local_6c * local_6c * local_6c;
                  uVar10 = local_6c * local_6c * local_6c * local_6c * local_6c;
                  uVar7 = ((~uVar7 & uVar10) + (local_6c ^ 0x427348b1)) - (~uVar10 & uVar7);
                  uVar4 = ((~(uVar7 * uVar4) & uVar7 * uVar4) + (uVar7 ^ uVar4)) -
                          (~(uVar7 * uVar4) & uVar7 * uVar4);
LAB_1800473c4:
                  uVar8 = (ulonglong)uVar4;
                  if (local_298 != lStack_290) {
LAB_1800474c7:
                    FUN_18063ab10(local_298,0,lStack_290 - local_298);
                  }
                }
                else {
                  local_340 = local_2b8[2];
                  local_348 = local_2b8;
                  if (0xf < (ulonglong)local_2b8[3]) {
                    local_348 = (undefined8 *)*local_2b8;
                  }
                  uVar4 = local_6c ^ 0x40df0290;
                  bVar1 = (byte)local_138 & 0x1f;
                  bVar2 = (byte)local_138 & 0x1f;
                  uVar18 = (uVar4 >> 0xd ^ (uVar4 << bVar1 | uVar4 >> 0x20 - bVar1)) * uVar4 *
                           -0x6ad49d8f;
                  uVar7 = (uVar4 >> 0xd ^ (uVar4 << bVar2 | uVar4 >> 0x20 - bVar2)) * uVar4 *
                          -0x6ad49d8f;
                  uVar10 = (local_6c * 0x2441ed77) % 0x3f1;
                  uVar25 = (local_6c * 0x2441ed77) % 0x3f1;
                  cVar3 = FUN_180010a30(&local_348,&local_298,
                                        (uVar7 ^ uVar18) + uVar4 + (~uVar7 & uVar18) * -2 ^ local_6c
                                        ^ 0x40df0291,
                                        CONCAT44(local_6c ^ 0x21e5da4b ^ local_6c,
                                                 local_6c ^ 0x57a5ad4 ^
                                                 (~uVar25 & uVar10) +
                                                 ((local_6c ^ 0x57a7ad4) - (~uVar10 & uVar25))) ^
                                        0x21e5da4b00000000);
                  lVar9 = local_278;
                  if (cVar3 == '\0') goto LAB_180046f32;
                  lVar17 = lStack_270 - local_278;
                  local_338 = local_278;
                  local_330 = lVar17;
                  cVar3 = FUN_18001edd0(&local_338,&local_298);
                  if (cVar3 == '\0') {
                    uVar4 = 0;
                    goto LAB_1800473c4;
                  }
                  local_328 = lVar9;
                  local_320 = lVar17;
                  FUN_180026650(&local_1e0,&local_328);
                  uVar7 = (local_6c * -0x44ddb819) % 0xffd;
                  uVar4 = (local_6c * -0x44ddb819) % 0xffd;
                  iVar5 = local_6c * 2;
                  if (local_1d8 - local_1e0 >> 4 ==
                      (CONCAT44((iVar5 * iVar5 * iVar5 * iVar5 * iVar5 -
                                iVar5 * iVar5 * iVar5 * iVar5 * iVar5) * 0x203f90db +
                                ((local_6c ^ 0x90f2d115) & (local_6c ^ 0x6f0d2eea)) +
                                ((local_6c ^ 0x90f2d115) & (local_6c ^ 0x6f0d2eea)),
                                ((local_6c ^ 0x824632e4) - (~uVar7 & uVar4)) + (~uVar4 & uVar7) ^
                                local_6c) ^ 0x824632e8)) {
                    local_448 = "HVHGOD-RUNTIME-LEASE-V2";
                    uStack_440 = 0x17;
                    uVar7 = local_6c ^ 0x5b7af215;
                    bVar1 = (byte)local_13b & 0x1f;
                    bVar2 = (byte)local_13b & 0x1f;
                    uVar10 = (uVar7 >> 0xd ^ (uVar7 << bVar1 | uVar7 >> 0x20 - bVar1)) * uVar7 *
                             0x687509e7;
                    uVar4 = (uVar7 >> 0xd ^ (uVar7 << bVar2 | uVar7 >> 0x20 - bVar2)) * uVar7 *
                            0x687509e7;
                    uVar4 = local_6c * local_6c * local_6c * local_6c * local_6c + (uVar4 ^ uVar10)
                            + (uVar7 - local_6c * local_6c * local_6c * local_6c * local_6c) +
                            (~uVar4 & uVar10) * -2;
                    uVar15 = CONCAT44(((local_6c ^ 0xa4850dea) & uVar4) +
                                      (~uVar4 & (local_6c ^ 0x5b7af215)),
                                      (0x7d2a2bd0 - local_64 & local_64 + 0x82d5d42f) * 0x303b9e3e +
                                      (local_6c ^ 0x3da52e33 ^ local_6c ^ 0x3da52e33) +
                                      ((~(local_6c * local_6c) & local_6c * local_6c) -
                                      (~(local_6c * local_6c) & local_6c * local_6c)) * -0x2a7c4aff)
                    ;
                    bVar1 = (byte)&local_13c & 0x3f;
                    bVar2 = (byte)&local_13c & 0x3f;
                    uVar14 = (uVar15 >> 0xd ^ (uVar15 << bVar1 | uVar15 >> 0x40 - bVar1)) * uVar15 *
                             0x8bd68507;
                    uVar8 = (uVar15 >> 0xd ^ (uVar15 << bVar2 | uVar15 >> 0x40 - bVar2)) * uVar15 *
                            0x8bd68507;
                    puVar6 = (undefined4 *)
                             (((uVar8 ^ uVar14) + (~uVar8 & uVar14) * -2) * 0x10 +
                             uVar15 * 0x10 + local_1e0);
                    local_438 = *puVar6;
                    uStack_434 = puVar6[1];
                    uStack_430 = puVar6[2];
                    uStack_42c = puVar6[3];
                    uVar4 = FUN_18000d980(&local_438,&local_448);
                    uVar18 = local_6c ^ 0x51c0d989;
                    bVar1 = (byte)&local_13d & 0x1f;
                    bVar2 = (byte)&local_13d & 0x1f;
                    uVar10 = (uVar18 >> 0xd ^ (uVar18 << bVar1 | uVar18 >> 0x20 - bVar1)) * uVar18 *
                             -0x488f0797;
                    uVar7 = (uVar18 >> 0xd ^ (uVar18 << bVar2 | uVar18 >> 0x20 - bVar2)) * uVar18 *
                            -0x488f0797;
                    uVar25 = (local_6c * 0x645cbfbf) % 0x3f1;
                    uVar26 = (local_6c * 0x645cbfbf) % 0x3f1;
                    if (uVar4 == ((local_6c ^ 0x51c0d989) + (uVar26 ^ uVar25) +
                                  (~uVar25 & uVar26) * -2 ^
                                 (~uVar10 & uVar7) + (uVar18 - (~uVar7 & uVar10))))
                    goto LAB_1800477bf;
                    local_428 = "internal-runtime";
                    uStack_420 = 0x10;
                    iVar5 = (local_6c + 0x8ba1f72f) * (local_6c + 0x8ba1f72f);
                    uVar4 = iVar5 * iVar5;
                    iVar5 = (local_6c + 0x8ba1f72f) * (local_6c + 0x8ba1f72f);
                    uVar7 = iVar5 * iVar5;
                    puVar6 = (undefined4 *)
                             ((CONCAT44((0x40ace6d6 - local_64 & local_64 + 0xbf531929) * -0xb16ae82
                                        + (((local_6c ^ 0x8ba1f72f) + (~uVar4 & uVar7)) -
                                           (~uVar7 & uVar4) ^ local_6c ^ 0x8ba1f72f),
                                        local_6c ^ 0x5af9eea4 ^ local_6c) ^ 0x5af9eea5) * 0x10 +
                             local_1e0);
                    local_418 = *puVar6;
                    uStack_414 = puVar6[1];
                    uStack_410 = puVar6[2];
                    uStack_40c = puVar6[3];
                    iVar5 = FUN_18000d980(&local_418,&local_428);
                    uVar4 = local_6c ^ 0x76e33858;
                    iVar13 = uVar4 + (local_6c ^ 0x76e33858);
                    uVar7 = iVar13 * iVar13 * iVar13 * iVar13 * iVar13;
                    uVar10 = iVar13 * iVar13 * iVar13 * iVar13 * iVar13;
                    if ((iVar5 == (uVar10 ^ uVar7) +
                                  ((local_6c ^ 0x891cc7a7) & uVar4) +
                                  (~uVar4 & (local_6c ^ 0x76e33858)) + (~uVar10 & uVar7) * -2) ||
                       (uVar4 = ((~(local_6c * -0x34c2e715) & local_6c * -0x34c2e715) +
                                (local_6c ^ 0xcb3d18eb)) -
                                (~(local_6c * -0x34c2e715) & local_6c * -0x34c2e715) ^ local_6c ^
                                0xcb3d18e9, bVar1 = (byte)&local_13e & 0x1f,
                       bVar2 = (byte)&local_13e & 0x1f,
                       uVar10 = (uVar4 >> 0xd ^ (uVar4 << bVar1 | uVar4 >> 0x20 - bVar1)) * uVar4 *
                                -0x6d1e6e1d,
                       uVar7 = (uVar4 >> 0xd ^ (uVar4 << bVar2 | uVar4 >> 0x20 - bVar2)) * uVar4 *
                               -0x6d1e6e1d,
                       *(longlong *)
                        ((ulonglong)
                         (uVar4 + (uVar4 * uVar4 - uVar4 * uVar4) * (uVar4 * uVar4 + uVar4 * uVar4)
                          + (uVar7 ^ uVar10) + (~uVar7 & uVar10) * -2) * 0x10 + 8 + local_1e0) == 0)
                       ) goto LAB_1800477bf;
                    local_310 = param_5[2];
                    if (0xf < (ulonglong)param_5[3]) {
                      local_78 = (undefined8 *)*param_5;
                    }
                    local_318 = local_78;
                    bVar1 = (byte)&local_13f & 0x3f;
                    bVar2 = (byte)&local_13f & 0x3f;
                    uVar8 = (3L << bVar1 | 3UL >> 0x40 - bVar1) * 0x4a2ef5a3;
                    uVar14 = (3L << bVar2 | 3UL >> 0x40 - bVar2) * 0x4a2ef5a3;
                    puVar6 = (undefined4 *)
                             (local_1e0 + ((uVar14 ^ uVar8) + 3 + (~uVar14 & uVar8) * -2) * 0x10);
                    local_408 = *puVar6;
                    uStack_404 = puVar6[1];
                    uStack_400 = puVar6[2];
                    uStack_3fc = puVar6[3];
                    uVar4 = FUN_18000d980(&local_408,&local_318);
                    if ((uVar4 == (local_6c ^ 0xb5bc722 ^ local_6c ^ 0xb5bc722)) ||
                       (uVar7 = (local_6c * 0x352b1aff) % 0xfb,
                       uVar4 = (local_6c * 0x352b1aff) % 0xfb,
                       cVar3 = FUN_180038810((CONCAT44(((~uVar4 & uVar7) - (~uVar7 & uVar4)) *
                                                       -0x6a24efad +
                                                       (local_6c ^ 0x3ccc0c7f ^ local_6c ^
                                                       0x3ccc0c7f),
                                                       ((local_6c ^ 0xca637e8c) +
                                                       (~(local_6c * -0x359c8174) &
                                                       local_6c * -0x359c8174)) -
                                                       (~(local_6c * -0x359c8174) &
                                                       local_6c * -0x359c8174) ^ local_6c) ^
                                             0xca637e8f) * 0x10 + local_1e0,0x20), cVar3 == '\0'))
                    goto LAB_1800477bf;
                    iVar5 = local_6c + 0x9eff0b0a;
                    iVar13 = local_6c + 0x9eff0b0a;
                    uVar25 = iVar5 * iVar5 * iVar5 * iVar5 * iVar5;
                    uVar29 = iVar13 * iVar13 * iVar13 * iVar13 * iVar13;
                    uVar10 = local_6c * local_6c * local_6c * local_6c * local_6c;
                    uVar30 = local_6c * local_6c * local_6c * local_6c * local_6c;
                    uVar26 = (local_6c ^ 0x3fe3af2f) +
                             (~(local_6c * 0x3fe3af2f) & local_6c * 0x3fe3af2f) * -2 ^ local_6c ^
                             0x3fe3af2f;
                    uVar7 = uVar26 * uVar26 * uVar26 * uVar26 * uVar26;
                    uVar21 = uVar26 * uVar26 * uVar26 * uVar26 * uVar26;
                    uVar22 = local_6c ^ 0xc683b6df;
                    uVar18 = (uVar22 >> 0xd ^ uVar22) * uVar22 * -0x6888273b;
                    uVar4 = (uVar22 >> 0xd ^ uVar22) * uVar22 * -0x6888273b;
                    cVar3 = FUN_180038810((ulonglong)
                                          ((uVar30 ^ uVar10) + (local_6c ^ 0x9eff0b0e) +
                                           (~uVar30 & uVar10) * -2 ^
                                          (((local_6c * -0x6d540433) / 0x3f1) * 0x3f1 +
                                           local_6c * 0x6d540433 +
                                           (local_6c * -0x6d540433) % 0x3f1 +
                                           (local_6c ^ 0x9eff0b0a) + (~uVar25 & uVar29)) -
                                          (~uVar29 & uVar25)) * 0x10 +
                                          ((ulonglong)
                                           (uVar26 + (uVar21 ^ uVar7) + (~uVar21 & uVar7) * -2) <<
                                          0x24) + local_1e0,
                                          CONCAT44((uVar22 + (~uVar18 & uVar4)) - (~uVar4 & uVar18)
                                                   ^ local_6c,0x40) ^ 0xc683b6df00000000);
                    if (cVar3 == '\0') goto LAB_1800477bf;
                    local_300 = param_6[2];
                    if (0xf < (ulonglong)param_6[3]) {
                      local_c0 = (undefined8 *)*param_6;
                    }
                    local_308 = local_c0;
                    uVar10 = local_6c ^ 0xd83db02b ^ local_6c ^ 0xd83db02d;
                    bVar1 = (byte)local_142 & 0x1f;
                    bVar2 = (byte)local_142 & 0x1f;
                    uVar18 = (uVar10 >> 0xd ^ (uVar10 << bVar1 | uVar10 >> 0x20 - bVar1)) * uVar10 *
                             0x47c262db;
                    uVar4 = (uVar10 >> 0xd ^ (uVar10 << bVar2 | uVar10 >> 0x20 - bVar2)) * uVar10 *
                            0x47c262db;
                    uVar7 = local_6c * local_6c * local_6c * local_6c;
                    uVar25 = local_6c * local_6c * local_6c * local_6c;
                    puVar6 = (undefined4 *)
                             ((ulonglong)((uVar10 + (~uVar18 & uVar4)) - (~uVar4 & uVar18)) * 0x10 +
                             ((ulonglong)
                              (((~uVar7 & uVar25) - (~uVar25 & uVar7)) * -0x6357ea51 +
                              (((0x59ba514a - local_64 & local_64 + 0xa645aeb5) -
                               (0x59ba514a - local_64 & local_64 + 0xa645aeb5)) * -0x25fc75e1 +
                               (local_6c ^ 0xf21dbacf) ^
                              (0x3bf8ad9c - local_64 & local_64 + 0xc4075263 |
                              0x3bf8ad9c - local_64 & local_64 + 0xc4075263) * -0x5d6b5fe1 +
                              (local_6c ^ 0xf21dbacf))) << 0x24) + local_1e0);
                    local_3f8 = *puVar6;
                    uStack_3f4 = puVar6[1];
                    uStack_3f0 = puVar6[2];
                    uStack_3ec = puVar6[3];
                    iVar5 = FUN_18000d980(&local_3f8,&local_308);
                    uVar4 = local_6c ^ 0x2cc27f6c;
                    uVar10 = (0x2b441fba - local_64 & local_64 + 0xd4bbe045 |
                             0x2b441fba - local_64 & local_64 + 0xd4bbe045) * 0x16174609 +
                             (local_6c ^ 0x2cc27f6c);
                    uVar7 = uVar10 ^ uVar4;
                    bVar1 = (byte)local_144 & 0x1f;
                    bVar2 = (byte)local_144 & 0x1f;
                    uVar25 = (uVar7 >> 0xd ^ (uVar7 << bVar1 | uVar7 >> 0x20 - bVar1)) * uVar7 *
                             -0x59c9ac41;
                    uVar7 = (uVar7 >> 0xd ^ (uVar7 << bVar2 | uVar7 >> 0x20 - bVar2)) * uVar7 *
                            -0x59c9ac41;
                    if (iVar5 == (uVar4 * uVar4 - uVar4 * uVar4) * (uVar4 * uVar4 + uVar4 * uVar4) +
                                 ((local_6c ^ 0xd33d8093) & uVar10) + (~uVar10 & uVar4) +
                                 (uVar7 ^ uVar25) + (~uVar7 & uVar25) * -2) goto LAB_1800477bf;
                    local_3e8 = *(undefined4 *)(local_1e0 + 0x70);
                    uStack_3e4 = *(undefined4 *)(local_1e0 + 0x74);
                    uStack_3e0 = *(undefined4 *)(local_1e0 + 0x78);
                    uStack_3dc = *(undefined4 *)(local_1e0 + 0x7c);
                    uVar7 = (local_6c * 0x42b95e79) % 0xfb;
                    uVar4 = (local_6c * 0x42b95e79) % 0xfb;
                    uVar4 = ((uVar4 ^ uVar7) + (~uVar7 & uVar4) * -2) * -0x6040cb25;
                    uVar10 = local_6c * local_6c * local_6c * local_6c * local_6c;
                    uVar7 = local_6c * local_6c * local_6c * local_6c * local_6c;
                    uVar7 = ((~uVar10 & uVar7) + (local_6c ^ 0x813db8a7)) - (~uVar7 & uVar10);
                    uVar10 = local_6c ^ 0x813db8a7;
                    uVar10 = (uVar10 * uVar7 ^ uVar7 * uVar10) + (uVar7 ^ uVar10) +
                             (~(uVar7 * uVar10) & uVar10 * uVar7) * -2;
                    bVar1 = (byte)local_146 & 0x1f;
                    bVar2 = (byte)local_146 & 0x1f;
                    uVar25 = (uVar10 >> 0xd ^ (uVar10 << bVar1 | uVar10 >> 0x20 - bVar1)) * uVar10 *
                             -0x4950ee5d;
                    uVar7 = (uVar10 >> 0xd ^ (uVar10 << bVar2 | uVar10 >> 0x20 - bVar2)) * uVar10 *
                            -0x4950ee5d;
                    cVar3 = FUN_180038810(&local_3e8,
                                          CONCAT44((~uVar25 & uVar7) +
                                                   ((uVar10 + (uVar10 * uVar10 - uVar10 * uVar10) *
                                                              (uVar10 * uVar10 + uVar10 * uVar10)) -
                                                   (~uVar7 & uVar25)),
                                                   (uVar4 ^ 0x40) + (uVar4 & 0x40) * 2));
                    if (cVar3 == '\0') goto LAB_1800477bf;
                    uVar4 = local_6c ^ 0xd06a22b8 ^ local_6c ^ 0xd06a22b3;
                    uVar10 = (uVar4 * -0x35b2c82d) % 0xffd;
                    uVar26 = (uVar4 * -0x35b2c82d) % 0xffd;
                    uVar18 = local_6c ^ 0xdcc94f7d;
                    bVar1 = (byte)&local_147 & 0x1f;
                    bVar2 = (byte)&local_147 & 0x1f;
                    uVar25 = (uVar18 >> 0xd ^ (uVar18 << bVar1 | uVar18 >> 0x20 - bVar1)) * uVar18 *
                             0x55d783d9;
                    uVar7 = (uVar18 >> 0xd ^ (uVar18 << bVar2 | uVar18 >> 0x20 - bVar2)) * uVar18 *
                            0x55d783d9;
                    uVar18 = uVar18 + (uVar7 ^ uVar25) + (~uVar7 & uVar25) * -2 ^ local_6c ^
                             0xdcc94f7d;
                    uVar25 = (uVar18 * -0x48392171) % 0xffd;
                    uVar7 = (uVar18 * -0x48392171) % 0xffd;
                    cVar3 = FUN_180038810((ulonglong)
                                          ((uVar4 + (~uVar26 & uVar10)) - (~uVar10 & uVar26)) * 0x10
                                          + ((ulonglong)
                                             ((uVar18 + (~uVar7 & uVar25)) - (~uVar25 & uVar7)) <<
                                            0x24) + local_1e0,
                                          CONCAT44((local_6c ^ 0x74ff1c7d) +
                                                   (~(local_6c * 0x74ff1c7d) & local_6c * 0x74ff1c7d
                                                   ) * -2 ^ local_6c ^ 0x74ff1c7d,0x20));
                    if (cVar3 == '\0') goto LAB_1800477bf;
                    local_2f0 = param_7[2];
                    if (0xf < (ulonglong)param_7[3]) {
                      local_190 = (undefined8 *)*param_7;
                    }
                    local_2f8 = local_190;
                    FUN_1800381e0(local_3b8,&local_2f8);
                    if (local_3a8 == 0) {
LAB_180046f0a:
                      uVar8 = 0;
                    }
                    else {
                      local_2e8 = local_3b8;
                      if (0xf < local_3a0) {
                        local_2e8 = local_3b8[0];
                      }
                      local_2e0 = local_3a8;
                      local_3d8 = *(undefined4 *)(local_1e0 + 0x40);
                      uStack_3d4 = *(undefined4 *)(local_1e0 + 0x44);
                      uStack_3d0 = *(undefined4 *)(local_1e0 + 0x48);
                      uStack_3cc = *(undefined4 *)(local_1e0 + 0x4c);
                      iVar5 = FUN_18000d980(&local_3d8,&local_2e8);
                      if (iVar5 == 0) goto LAB_180046f0a;
                      local_2d0 = param_8[2];
                      if (0xf < (ulonglong)param_8[3]) {
                        local_198 = (undefined8 *)*param_8;
                      }
                      local_2d8 = local_198;
                      local_3c8 = *(undefined4 *)(local_1e0 + 0x70);
                      uStack_3c4 = *(undefined4 *)(local_1e0 + 0x74);
                      uStack_3c0 = *(undefined4 *)(local_1e0 + 0x78);
                      uStack_3bc = *(undefined4 *)(local_1e0 + 0x7c);
                      iVar5 = FUN_18000d980(&local_3c8,&local_2d8);
                      lVar9 = local_1e0;
                      if (iVar5 == 0) goto LAB_180046f0a;
                      local_1ec = 0;
                      local_1e8 = 0;
                      local_2a8 = 0;
                      local_2a0 = 0;
                      cVar3 = FUN_1800267f0(*(undefined8 *)(local_1e0 + 0x50),
                                            *(undefined8 *)(local_1e0 + 0x58),&local_1ec);
                      if (((((cVar3 == '\0') || (local_1ec != local_1e4)) ||
                           (cVar3 = FUN_180026880(*(undefined8 *)(lVar9 + 0x80),
                                                  *(undefined8 *)(lVar9 + 0x88),&local_1e8),
                           cVar3 == '\0')) ||
                          ((local_1e8 != param_9 ||
                           (cVar3 = FUN_180026950(*(undefined8 *)(local_1e0 + 0x90),
                                                  *(undefined8 *)(local_1e0 + 0x98),&local_2a8),
                           cVar3 == '\0')))) ||
                         (cVar3 = FUN_180026950(*(undefined8 *)(local_1e0 + 0xa0),
                                                *(undefined8 *)(local_1e0 + 0xa8),&local_2a0),
                         cVar3 == '\0')) {
LAB_180047de7:
                        uVar8 = 0;
                      }
                      else {
                        lVar17 = _Xtime_get_ticks();
                        lVar17 = lVar17 / 10000000 - lVar17 / -0x6769800000000000;
                        if (((lVar17 + 0x1e < local_2a8) || (local_2a8 < lVar17 + -0x78)) ||
                           (local_2a0 <= local_2a8 || local_2a0 <= lVar17)) goto LAB_180047de7;
                        uVar16 = (undefined7)((ulonglong)lVar9 >> 8);
                        uVar8 = CONCAT71(uVar16,local_2a0 <= local_2a8 + 0x3c);
                        if ((param_10 != (longlong *)0x0) && (local_2a0 <= local_2a8 + 0x3c)) {
                          *param_10 = local_2a0;
                          uVar8 = CONCAT71(uVar16,1);
                        }
                      }
                    }
                    thunk_FUN_18015c010(local_3b8);
                  }
                  else {
LAB_1800477bf:
                    uVar7 = local_6c ^ 0x90305e6f;
                    bVar1 = (byte)&local_148 & 0x1f;
                    bVar2 = (byte)&local_148 & 0x1f;
                    uVar10 = (uVar7 >> 0xd ^ (uVar7 << bVar1 | uVar7 >> 0x20 - bVar1)) * uVar7 *
                             0x23d04de1;
                    uVar4 = (uVar7 >> 0xd ^ (uVar7 << bVar2 | uVar7 >> 0x20 - bVar2)) * uVar7 *
                            0x23d04de1;
                    uVar4 = uVar7 + (uVar4 ^ uVar10) + (~uVar4 & uVar10) * -2;
                    uVar8 = (ulonglong)
                            ((0x3f05710 - local_64 & local_64 + 0xfc0fa8ef) * 0x5bc45dda +
                            ((local_6c ^ 0x6fcfa190) & uVar4) + (~uVar4 & (local_6c ^ 0x90305e6f)));
                  }
                  FUN_180176390(&local_1e0);
                  if (local_298 != lStack_290) goto LAB_1800474c7;
                }
                if (local_278 != lStack_270) {
                  FUN_18063ab10(local_278,0,lStack_270 - local_278);
                }
                thunk_FUN_180113710(&local_298);
                thunk_FUN_180113710(&local_278);
                uVar8 = uVar8 & 0xffffffff;
                goto LAB_180040531;
              }
            }
          }
        }
      }
    }
  }
  uVar7 = local_6c * local_6c * local_6c * local_6c * local_6c;
  uVar4 = local_6c * local_6c * local_6c * local_6c * local_6c;
  uVar8 = (ulonglong)~((~uVar7 & uVar4) + ((local_6c ^ 0x904c82c7) - (~uVar4 & uVar7)) ^ local_6c);
LAB_180040531:
  return uVar8 & 0xffffffffffffff01;
}



