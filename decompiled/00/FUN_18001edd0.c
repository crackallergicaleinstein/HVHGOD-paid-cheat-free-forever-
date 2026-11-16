// FUN_18001edd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18001edd0 */

uint FUN_18001edd0(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  NTSTATUS NVar6;
  sbyte sVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
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
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  undefined1 *local_308;
  undefined8 local_300;
  longlong local_2f8;
  longlong local_2f0;
  UCHAR local_2e8 [32];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  ulonglong local_270;
  undefined8 local_268;
  ulonglong local_260;
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined1 local_238 [16];
  undefined8 local_228;
  ulonglong local_220;
  uint local_20c [3];
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1f8;
  uint local_1f4;
  uint local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  PCERT_PUBLIC_KEY_INFO local_1d8;
  BCRYPT_ALG_HANDLE local_1d0;
  undefined8 *local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined1 local_168 [16];
  longlong local_158;
  BCRYPT_KEY_HANDLE local_148;
  undefined1 local_13c;
  undefined1 local_13b;
  undefined1 local_13a [2];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
  undefined1 local_131;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c;
  undefined1 local_12b [2];
  undefined1 local_129;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined1 local_122;
  undefined1 local_121;
  undefined1 local_120;
  undefined1 local_11f [3];
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
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
  undefined1 local_10d;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109 [3];
  undefined1 local_106 [2];
  undefined1 local_104;
  undefined1 local_103 [2];
  undefined1 local_101 [2];
  undefined1 local_ff [2];
  undefined1 local_fd;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_fa;
  undefined1 local_f9;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_68 = -0x2b223dcb;
  local_64 = 0x39004afb;
  uVar4 = (uint)&local_f9;
  uVar29 = (uint)local_109 ^ 0x865c2646;
  uVar8 = (uint)local_109 ^ 0x79a3d9b9;
  uVar16 = (uVar29 & 0x5da465b9 | uVar8 & 0xa25b9a46) ^ (uVar8 ^ uVar29) & 0xa25b9a46 ^ uVar29;
  uVar22 = (uint)&local_10a ^ 0x72b79033;
  uVar23 = (uint)&local_10b ^ 0x46179649;
  uVar9 = (uint)&local_10b ^ 0xb9e869b6;
  uVar8 = uVar4 * uVar4 * uVar4 * uVar4 * uVar4;
  uVar17 = uVar4 * uVar4 * uVar4 * uVar4 * uVar4;
  uVar33 = (uint)&local_10c ^ 0xc410999b;
  uVar29 = (uint)&local_10c ^ 0x3bef6664;
  uVar29 = (uVar33 & 0x36b1180b | uVar29 & 0xc94ee7f4) ^ uVar33 ^ (uVar29 ^ uVar33) & 0xc94ee7f4;
  uVar30 = (uint)&local_10d ^ 0xb15eefc5;
  uVar24 = (uint)&local_10d ^ 0x4ea1103a;
  uVar31 = (uint)&local_10e ^ 0x446b5c7c;
  uVar33 = (uint)&local_10e ^ 0xbb94a383;
  uVar33 = (uVar33 ^ uVar31) & 0x1e4fcc0 ^ uVar31 ^ (uVar33 & 0x1e4fcc0 | uVar31 & 0xfe1b033f);
  local_6c = (uVar33 + 0xd14439b3 & uVar33) +
             ((uVar9 & 0xe456c9d7 | uVar23 & 0x1ba93628) ^ uVar23 ^
             (uVar9 ^ uVar23) &
             ((((uint)&local_10a ^ 0x8d486fcc) & 0xe456c9d7 | uVar22 & 0x1ba93628) ^ uVar22)) +
             (((~uVar4 | 0xed671a6e) & (uVar4 | 0x1298e591)) - (uVar16 << 5 | uVar16)) +
             (((uVar8 ^ uVar17) + (~uVar17 & uVar8) * -2) -
             ((uVar24 & 0x68d8a4d0 | uVar30 & 0x97275b2f) ^
             ((uVar29 ^ 0x68d8a4d0) & uVar24 | (uVar29 ^ 0x97275b2f) & uVar30)));
  local_188 = (undefined1  [16])0x0;
  local_178 = 0;
  local_238 = (undefined1  [16])0x0;
  local_228 = 0;
  local_220 = 0xf;
  local_288 = (undefined1  [16])0x0;
  local_278 = 0;
  local_270 = 0xf;
  local_1c8 = param_1;
  local_1c0 = param_2;
  cVar3 = FUN_1801cc8b0(local_238,local_288);
  if (cVar3 == '\0') {
    local_70 = local_6c;
    local_1c0 = CONCAT44(local_1c0._4_4_,local_64);
    local_1c8 = (undefined8 *)CONCAT44(local_1c8._4_4_,local_64);
    local_f8 = 0;
    local_f4 = local_68 + 0xfb4db23b;
    local_f0 = local_68 + 0xfb4db23b;
    local_ec = local_64;
    local_1b8 = (ulonglong)local_64;
    local_e8 = local_68 + 0x77a89ff7;
    local_e4 = local_68 + 0x77a89ff7;
    local_e0 = 0;
    local_78 = 0;
    local_dc = 0;
    local_d8 = local_68 + -0x36829d57;
    local_74 = ~local_6c;
    local_d4 = 0x36829d56 - local_68;
    local_d0 = 0;
    local_1b0 = (ulonglong)local_64;
    local_cc = local_64 + 0xf7379d75;
    local_1a8 = 0;
    local_c8 = local_68 + -0x69619737;
    local_1a0 = (ulonglong)(local_68 + 0x969e68c9);
    uVar4 = (uint)&local_111 ^ 0xf0bd727e;
    uVar24 = uVar4 ^ local_64 + 0xa9a79197 ^
             local_68 + 0xa181188dU ^ uVar4 ^ local_68 + 0xa181188dU ^ local_64 + 0xa9a79197;
    uVar4 = (uint)&local_112 ^ 0xa8c1f125 ^ (uint)&local_112 ^ 0x573e0eda;
    uVar22 = (uint)&local_113 ^ 0x480f09ee;
    uVar8 = (uint)&local_113 ^ 0xb7f0f611;
    uVar23 = (uint)&local_114 ^ 0xb0d51a90;
    uVar29 = (uint)&local_114 ^ 0x4f2ae56f;
    local_c4 = local_64 + 0xffc319;
    local_c0 = local_64 + 0xffc319;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = local_68 + -0x2194215b;
    local_ac = local_64 + 0xca70edd5;
    local_a8 = local_68 + 0xd82de6d9;
    local_a4 = local_68 + 0xd82de6d9;
    local_a0 = local_64 + 0xee2ce1a1;
    local_198 = CONCAT44(local_198._4_4_,local_64);
    local_190 = CONCAT44(local_190._4_4_,local_68 + 0xf9cf3e51U);
    local_9c = local_68 + 0xf9cf3e51;
    local_98 = 0;
    local_94 = local_64 + 0x32e5917f;
    local_90 = local_64 + 0x32e5917f;
    local_8c = 0;
    local_88 = local_68 + -0x754342ad;
    local_84 = local_68 + -0x342ffe37;
    local_80 = 0;
    local_7c = (uint)&local_116;
    uVar30 = (uint)&local_10f ^ 0x160d89fc;
    uVar31 = (uint)&local_110 ^ 0xf5c95ff0;
    uVar33 = (uint)&local_110 ^ 0xa36a00f;
    uVar16 = 0x4c5f63d4 - local_64 & local_64 + 0xb3a09c2b |
             0x4c5f63d4 - local_64 & local_64 + 0xb3a09c2b;
    uVar17 = (uint)&local_115 ^ 0xce882065;
    uVar9 = (uint)&local_115 ^ 0x3177df9a;
    uVar12 = local_6c ^
             (((((uVar33 & local_64 + 0xdef2e1b5 | 0x210d1e4a - local_64 & uVar31) ^
                (local_64 + 0xdef2e1b5 & uVar33 | 0x210d1e4a - local_64 & uVar31)) * 0xc2d9b73 +
               (uVar30 ^ local_6c & 0xaf928535 ^ local_74 & 0x506d7aca ^ uVar30)) -
              (uVar16 + 0xfe5e77f1 & uVar16)) -
             ((local_64 - local_cc) + 0x6cab4fa9 & (local_64 - local_cc) + 0xf7379d75)) +
             ((0x11d31e5e - local_64 & uVar17 | local_64 + 0xee2ce1a1 & uVar9) ^ uVar17 ^
             (uVar9 ^ uVar17) & (local_9c ^ local_68 + 0xf9cf3e51U ^ local_a0)) * 0x8de753d +
             (((((~uVar24 | 0x379c8bfb - uVar24) & uVar4 ^ uVar4) -
               ((uVar29 & 0x9ac01237 | uVar23 & 0x653fedc8) ^ uVar23 ^
               (uVar29 ^ uVar23) &
               (local_68 + 0xfb2921c9U ^
                local_68 + 0xfb2921c9U ^ (uVar8 & 0x9ac01237 | uVar22 & 0x653fedc8) ^
               (uVar8 ^ uVar22) &
               (local_64 - (local_68 + 0x80d11c19U ^ local_68 + 0x80d11c19U ^ local_64 + 0x3e9598cd)
               ) + 0x3e9598cd ^ uVar22))) + local_64) - (local_a4 ^ local_a8 ^ local_ac)) +
             -0x358f122b ^ 0x506d7aca;
    uVar4 = (uint)&local_117 ^ 0xfb60bdb4;
    uVar4 = uVar4 ^ local_68 + 0xa7f69381U ^ local_68 + 0xa7f69381U ^ local_64 + 0xc81ab9f7 ^
            local_64 + 0xc81ab9f7 ^ uVar4;
    uVar22 = local_68 + 0xe139ce1bU ^ local_68 + 0xe139ce1bU ^ local_64 + 0x9523c787;
    uVar23 = (uint)&local_118 ^ 0x27032f28;
    uVar8 = (uint)&local_118 ^ 0xd8fcd0d7;
    uVar9 = (uint)&local_119 ^ 0x661371a0;
    uVar29 = (uint)&local_119 ^ 0x99ec8e5f;
    uVar16 = (0x2405a72a - local_64 & uVar9 | local_64 + 0xdbfa58d5 & uVar29) ^
             (uVar29 ^ uVar9) & local_64 + 0xdbfa58d5 ^ uVar9;
    uVar29 = (uint)&local_11a ^ 0x1038e997;
    uVar9 = (uint)&local_11a ^ 0xefc71668;
    uVar17 = (local_6c * -0x6359e3d3) % 0xffd;
    uVar24 = ((((0x115d08b6 - local_64 & uVar29 | local_64 + 0xeea2f749 & uVar9) ^ uVar29 ^
               (uVar9 ^ uVar29) &
               (local_68 + 0x457229e5U ^ local_68 + 0x457229e5U ^ local_64 + 0xeea2f749)) + local_6c
              ) * -0x6359e3d3) % 0xffd;
    uVar29 = 0xc0983586 - local_64 & local_64 + 0x3f67ca79 |
             0xc0983586 - local_64 & local_64 + 0x3f67ca79;
    uVar30 = (local_68 + 0x643977dU ^ local_68 + 0x643977dU ^ local_64 + 0x7a27b5af) -
             (local_68 + 0x76702f4bU ^ local_68 + 0x76702f4bU ^ local_64 + 0x7a27b5af);
    uVar9 = (uint)&local_11b ^ 0x4ffdafd8;
    uVar31 = (uint)&local_11b ^ 0xb0025027;
    uVar33 = (uint)&local_11c ^ 0xb5086936;
    uVar33 = uVar33 ^ local_64 + 0xf59f64cf ^
             local_68 + 0xac96efa5U ^ uVar33 ^ local_68 + 0xac96efa5U ^ local_64 + 0xf59f64cf;
    uVar4 = (((local_68 + 0x78301205U ^ local_6c ^ local_68 + 0x78301205U ^
              (local_7c ^ 0x53304f66 ^ local_6c ^
              (local_6c & (local_7c ^ 0x53304f66) | (local_7c ^ 0xaccfb099) & local_74)) & local_6c)
             - (((local_64 - uVar22) + 0x76cdadba & (local_64 - uVar22) + 0x9523c787) +
               (uVar4 + 0x817c5857 & uVar4))) +
             (-((0xd89dd62cU - local_68 ^ local_68 + 0x276229d3U) &
               ((uVar8 & local_64 + 0x1c5ed425 | 0xe3a12bda - local_64 & uVar23) ^
               (local_64 + 0x1c5ed425 & uVar8 | 0xe3a12bda - local_64 & uVar23))) -
             (uVar16 + 0xb3b86f75 & uVar16)) +
            ((((uVar31 & local_64 + 0x6070390d | 0x9f8fc6f2 - local_64 & uVar9) ^
              (local_64 + 0x6070390d & uVar31 | 0x9f8fc6f2 - local_64 & uVar9)) +
             ((((uVar17 ^ uVar24) + (~uVar17 & uVar24) * -2) - ((uVar29 | 0xb50ffa80) & uVar29)) -
             (uVar30 * 2 | uVar30))) - (uVar33 + 0xd0aca9db & uVar33))) * 0x42f38139;
    uVar8 = uVar4 & uVar12;
    uVar22 = local_68 + 0x9892b34dU ^ local_68 + 0x9892b34dU ^ local_64 + 0x51e0e973;
    uVar23 = 0xa25c1592 - local_64 & local_64 + 0x5da3ea6d |
             0xa25c1592 - local_64 & local_64 + 0x5da3ea6d;
    uVar33 = (local_68 + 0xbb875753U ^ local_68 + 0xbb875753U ^ local_64 + 0x8666eb61) -
             (local_64 + 0x8666eb61);
    uVar16 = (uVar12 * -0x2651875) % 0xfb;
    uVar17 = ((uVar12 + 0xe61650b7) * -0x2651875 + 0x85f70ba3) % 0xfb;
    uVar24 = (uint)local_11f ^ 0x78678448;
    uVar29 = (0x95c7dcac - local_64 ^ local_64 + 0x6a382353) & local_64 + 0x6a382353 ^
             local_64 + 0x6a382353;
    uVar30 = (0x34a9513a - local_64 ^ local_64 + 0xcb56aec5) &
             (local_68 + 0x67f13981U ^ local_68 + 0x67f13981U ^ local_64 + 0xcb56aec5) ^
             local_64 + 0xcb56aec5;
    uVar31 = (uint)&local_120 ^ 0xb57e1d80;
    uVar9 = (uint)&local_120 ^ 0x4a81e27f;
    uVar4 = (uVar9 & local_64 + 0xe756f107 | 0x18a90ef8 - local_64 & uVar31) ^
            (local_64 + 0xe756f107 & uVar9 | 0x18a90ef8 - local_64 & uVar31) ^
            (uVar30 + 0xea77bc & uVar30) +
            ((((((uint)local_11f ^ 0x87987bb7) & 0xab5c986d | uVar24 & 0x54a36792) ^ uVar24 ^
              0xab5c986d) + (uVar16 ^ uVar17) + (~uVar16 & uVar17) * -2 +
             (((uVar23 + 0x2865b19 & uVar23) +
              ((local_64 - uVar22) + 0x59f86178 & (local_64 - uVar22) + 0x51e0e973) + uVar8 +
              (uVar12 ^ uVar4 | uVar8)) - (uVar33 + 0xa836ce1d & uVar33))) - (uVar29 * 4 | uVar29));
  }
  else {
    local_308 = local_238;
    if (0xf < local_220) {
      local_308 = (undefined1 *)local_238._0_8_;
    }
    local_300 = local_228;
    uVar4 = local_6c & 0x82063085 ^ 0x82063085;
    uVar30 = local_68 + 0x5ad14e41U ^ local_68 + 0x5ad14e41U ^ local_6c & 0x7df9cf7a;
    uVar32 = (uint)&local_121 ^ 0xb1dfc90d;
    uVar25 = (uint)&local_121 ^ 0x4e2036f2;
    uVar26 = 0x94fc4d9a - local_64 & local_64 + 0x6b03b265 |
             0x94fc4d9a - local_64 & local_64 + 0x6b03b265;
    uVar18 = (uint)&local_122 ^ 0x6d196a21;
    uVar19 = (0xb6537bf2 - local_64 ^ local_64 + 0x49ac840d) & local_64 + 0x49ac840d ^
             local_64 + 0x49ac840d;
    uVar20 = (uint)&local_123 ^ 0xf6c7d383;
    uVar29 = (uint)&local_124 ^ 0x894c83c8;
    uVar8 = (uint)&local_124 ^ 0x76b37c37;
    uVar9 = (uVar8 & local_64 + 0x259c108f | 0xda63ef70 - local_64 & uVar29) ^
            (local_64 + 0x259c108f & uVar8 | 0xda63ef70 - local_64 & uVar29);
    uVar27 = (uint)&local_125 ^ 0x67525a85;
    local_78 = 0;
    local_74 = 0;
    local_f4 = local_64 + 0x957b5a49;
    local_f8 = local_64;
    local_f0 = local_68 + 0x54b5198d;
    local_ec = 0;
    local_1b8 = CONCAT44(local_1b8._4_4_,local_64 + 0x135407d5);
    local_e8 = local_64 + 0x135407d5;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = local_68 + -0x520dd753;
    local_d4 = local_68 + -0x520dd753;
    local_1b0 = CONCAT44(local_1b0._4_4_,local_68 + -0x6d1d138f);
    local_d0 = local_68 + -0x6d1d138f;
    local_cc = 0;
    local_1a8 = (ulonglong)local_1a8._4_4_ << 0x20;
    local_c8 = 0;
    local_1a0 = (ulonglong)local_1a0._4_4_ << 0x20;
    local_c4 = local_68 + 0x6874c0bd;
    local_c0 = local_68 + 0x6874c0bd;
    local_bc = 0;
    local_b8 = local_64 + 0x97fd82f;
    local_b4 = local_64 + 0x97fd82f;
    local_b0 = 0;
    local_ac = local_68 + 0x3f244e49;
    local_a8 = local_68 + 0x3f244e49;
    local_198 = 0;
    local_a4 = local_68 + 0xd611c92b;
    local_a0 = local_68 + 0xd611c92b;
    local_190 = 0;
    local_98 = local_64 + 0x3040a709;
    local_9c = local_64;
    local_94 = 0;
    local_90 = local_68 + 0x3d2fcab5;
    local_8c = local_68 + 0x3d2fcab5;
    local_88 = 0;
    local_84 = local_68 + 0x560fd21f;
    local_80 = local_68 + 0x560fd21f;
    local_20c[1] = 0;
    local_7c = local_64;
    local_20c[2] = local_64 + 0x471cb0e5;
    local_200 = 0;
    local_268 = 0;
    local_1fc = 0;
    local_1f8 = local_68 + -0x47c00ac1;
    local_260 = (ulonglong)local_64;
    local_1f4 = local_64 + 0x1bc333c9;
    local_1f0 = local_68 + 0xb84858ad;
    local_1e8 = local_68 + 0xb84858ad;
    local_1ec = 0;
    iVar5 = ((local_64 + local_6c) -
            (local_68 + 0x11a60f81U ^ local_68 + 0x11a60f81U ^ local_64 + 0xd607a099)) + 0x580dd11e;
    local_1e0 = local_6c;
    local_1e4 = (0x38220132U - local_68 ^ local_68 + 0xc7ddfecdU ^ local_6c) & local_6c;
    uVar35 = (uint)&local_137 ^ 0x2dfbdcc5;
    uVar15 = (uint)&local_137 ^ 0xd204233a;
    local_1dc = local_6c;
    local_70 = local_6c & uVar15;
    iVar34 = local_6c + 0x82063085;
    sVar7 = (sbyte)&local_fa;
    uVar17 = local_6c ^ 0x82063085;
    uVar33 = ((local_68 + 0x54b5198dU ^ local_f0 ^ local_f4) - local_64) + 0x6a84a5b7 + uVar17;
    uVar22 = uVar17 >> (-sVar7 & 0x1fU);
    uVar29 = (uint)&local_126 ^ 0x36f568a6;
    uVar16 = uVar33 >> (-sVar7 & 0x1fU);
    uVar8 = (uint)&local_127 ^ 0xa58bd7fd;
    uVar8 = (uVar33 >> 0xd ^ (uVar16 & uVar33 << sVar7 | uVar8 ^ uVar16 ^ uVar33 << sVar7 ^ uVar8))
            * uVar33 * -0x729a789;
    uVar31 = (uint)&local_128 ^ 0x9202e7be;
    uVar33 = (uint)&local_128 ^ 0x6dfd1841;
    uVar12 = (uVar17 >> 0xd ^
             (uVar22 & uVar17 << sVar7 | uVar29 ^ uVar22 ^ uVar17 << sVar7 ^ uVar29)) * uVar17 *
             -0x729a789;
    uVar16 = (uint)&local_129 ^ 0xbd9eafab;
    uVar17 = local_b8 - (local_a8 ^ local_ac ^ local_b4);
    uVar22 = (uint)local_12b ^ 0x9aa2b7b3;
    uVar13 = (uint)&local_12c ^ 0xd071ef95;
    uVar23 = (uint)&local_12c ^ 0x2f8e106a;
    uVar24 = (uint)&local_12d ^ 0xa18f0356;
    uVar29 = (uint)&local_12d ^ 0x5e70fca9;
    uVar29 = (local_64 + 0x471cb0e5 & uVar29 | 0xb8e34f1a - local_64 & uVar24) ^
             (uVar29 ^ uVar24) & local_20c[2] ^ uVar24;
    uVar21 = (uint)&local_12e ^ 0xe497c49a;
    uVar14 = (uint)&local_12e ^ 0x1b683b65;
    uVar24 = (uint)&local_12f ^ 0x624d2deb;
    uVar28 = (uint)&local_12f ^ 0x9db2d214;
    uVar13 = (uVar28 & 0x82063084 | uVar24 & 0x7df9cf7b) ^ (local_6c & uVar28 | uVar24 & ~local_6c)
             ^ (local_64 + 0x1bc333c9 & uVar14 | 0xe43ccc36 - local_64 & uVar21) ^
             (uVar14 ^ uVar21) & (local_1e8 ^ local_1f0 ^ local_1f4) ^ uVar21 ^
             (uVar29 + 0x582e0633 & uVar29) +
             ((uVar23 & 0x97feecb | uVar13 & 0xf6801134) ^
             (uVar23 & 0x97feecb | uVar13 & 0xf6801134)) +
             (iVar5 * iVar5 * iVar5 * iVar5 * iVar5 - iVar34 * iVar34 * iVar34 * iVar34 * iVar34) +
             (0x35721448 - local_64 & local_64 + 0xca8debb7 |
             0x35721448 - local_64 & local_64 + 0xca8debb7) * 0x5b5c6f +
             (0x8c801842 - local_64 & local_64 + 0x737fe7bd |
             0x8c801842 - local_64 & local_64 + 0x737fe7bd) * 0x6e9d8323 +
             (((uVar19 << 6 & uVar19 | uVar20 ^ uVar19 << 6 ^ uVar19 ^ uVar20) +
              ((uVar25 ^ uVar32) & uVar30 ^ uVar32 ^
              (uVar4 & uVar25 | (local_6c & 0x82063085 ^ 0x7df9cf7a) & uVar32)) + (uVar30 & uVar4))
             - ((uVar9 << 6 & uVar9 | uVar27 ^ uVar9 << 6 ^ uVar9 ^ uVar27) +
               (uVar26 << 6 & uVar26 | uVar18 ^ uVar26 << 6 ^ uVar26 ^ uVar18))) +
             (local_98 - local_64) * 0x207c1db1 +
             (((uVar31 ^ (uVar33 ^ uVar31) & uVar12 ^ (uVar8 & uVar33 | uVar31 & ~uVar8)) +
              (((uVar8 & uVar16 | ((uint)&local_129 ^ 0x42615054) & ~uVar8) ^ uVar16) & uVar12) * -2
              ) - (uVar17 & uVar17 * 2 | uVar22 ^ uVar17 * 2 ^ uVar17 ^ uVar22)) + 0x48047dc7;
    uVar22 = (uint)&local_131 ^ 0xd2458ad0;
    uVar23 = (local_68 + 0xc9d5d86bU ^ local_68 + 0xc9d5d86bU ^ local_64 + 0xdfbaca3d) -
             (local_64 + 0xdfbaca3d);
    uVar24 = (uint)&local_132 ^ 0xd2a0315e;
    uVar33 = (uint)&local_133 ^ 0x9e0f6db9;
    uVar8 = (uint)&local_133 ^ 0x61f09246;
    uVar30 = (uint)&local_134 ^ 0x95104ccb;
    uVar29 = (uint)&local_134 ^ 0x6aefb334;
    uVar14 = (uint)&local_135 ^ 0xc2d3d4c7;
    uVar31 = (uint)&local_135 ^ 0x3d2c2b38;
    uVar9 = (uint)&local_136 ^ 0x87a920aa;
    uVar4 = (uint)&local_136 ^ 0x7856df55;
    uVar16 = local_68 + 0x2e380513U ^
             local_68 + 0x2e380513U ^ (uVar15 ^ uVar35) & local_6c ^ uVar35 ^
             (uVar35 & ~local_6c | local_70);
    uVar4 = ((local_64 + 0x1e68b547 & uVar4 | 0xe1974ab8 - local_64 & uVar9) ^ uVar9 ^
            (uVar4 ^ uVar9) &
            (local_68 + 0xf924287dU ^ local_68 + 0xf924287dU ^ local_64 + 0x1e68b547)) + uVar16;
    sVar7 = (sbyte)&local_fb;
    uVar17 = uVar16 >> (-sVar7 & 0x1fU);
    uVar9 = (uint)&local_138 ^ 0x7ccd4562;
    uVar16 = (uVar16 >> 0xd ^ (uVar17 & uVar16 << sVar7 | uVar9 ^ uVar17 ^ uVar16 << sVar7 ^ uVar9))
             * uVar16 * 0x67df568d;
    uVar4 = (uVar4 >> 0xd ^ (uVar4 >> (-sVar7 & 0x1fU) | uVar4 << sVar7)) * uVar4 * 0x67df568d;
    uVar17 = (uint)local_13a ^ 0x23853def ^ (uint)local_13a ^ 0xdc7ac210;
    uVar12 = (uint)&local_13b ^ 0x312acdd9;
    uVar9 = local_68 + 0x45b35945U ^ local_68 + 0x45b35945U ^ local_68 + 0x8b4ee78fU ^
            local_68 + 0x8b4ee78fU;
    uVar29 = (((((local_68 + 0x592ca975U ^ local_68 + 0x592ca975U ^ local_64 + 0xdb8a47bd) +
                 (uVar12 ^ local_68 + 0x44324d5dU ^ local_68 + 0x44324d5dU ^ local_64 + 0x88356a31 ^
                 local_64 + 0x88356a31 ^ uVar12) * -0x71c2fc83 +
                (((uVar17 & uVar16 ^ uVar17) & uVar4) - (~uVar4 & uVar16))) -
               (local_64 + 0xdb8a47bd)) - (uVar9 + 0xe7fcb8cf & uVar9)) +
             ((((uVar23 + 0xfa780935 & uVar23) +
               (local_68 + 0x5c054c73U ^
                local_68 + 0x5c054c73U ^
                (((uint)&local_131 ^ 0x2dba752f) & 0x70150214 | uVar22 & 0x8feafdeb) ^ uVar22 ^
               0x70150214) +
               (((uint)&local_130 ^ 0xdfce3e1b ^ (uint)&local_130 ^ 0x2031c1e4) & local_1e4)) -
              ((uVar29 & 0x42d8548e | uVar30 & 0xbd27ab71) ^ uVar30 ^
              (uVar29 ^ uVar30) &
              ((uVar8 & 0x42d8548e | uVar33 & 0xbd27ab71) ^
              (uVar8 ^ uVar33) &
              (uVar24 ^ local_68 + 0x783962abU ^ local_68 + 0x783962abU ^ local_64 + 0x5ad123f1 ^
              local_64 + 0x5ad123f1 ^ uVar24) ^ uVar33))) -
             ((uVar31 & 0xdf27924 | uVar14 & 0xf20d86db) ^
             (uVar31 & 0xdf27924 | uVar14 & 0xf20d86db)))) * 0x1c683161;
    uVar4 = (uVar29 & uVar13) * 2;
    uVar33 = local_68 + 0x86d5b8cdU ^ local_68 + 0x86d5b8cdU ^ local_68 + 0x7403ec57U ^
             local_68 + 0x7403ec57U;
    uVar16 = (uint)&local_13c ^ 0xffad9f95 ^ (uint)&local_13c ^ 0x52606a;
    uVar17 = (local_6c ^ 0x8fbe292d) & (local_6c ^ 0x7041f6d2) |
             (local_6c ^ 0x8fbe092d) & (local_6c ^ 0x7041d6d2);
    uVar8 = local_6c * local_6c * local_6c * local_6c;
    uVar9 = local_6c * local_6c * local_6c * local_6c;
    uVar8 = ((uVar9 ^ uVar8) + (local_6c * 0x3318beaf) % 0xfb +
            ((~uVar9 & uVar8) * -2 - (local_6c * 0x3318beaf) % 0xfb)) * -0x437c5df7;
    uVar23 = uVar8 ^ uVar17;
    uVar8 = (uVar17 & uVar8) * 2;
    sVar7 = (sbyte)&local_fc;
    uVar24 = (uVar23 >> 0xd ^ (uVar23 << sVar7 | uVar23 >> 0x20 - sVar7)) * uVar23 * -0x15e65113;
    uVar9 = (uVar23 >> 0xd ^ (uVar23 << sVar7 | uVar23 >> 0x20 - sVar7)) * uVar23 * -0x15e65113;
    iVar34 = (local_6c + 0xe4dfa5a0) * (local_6c + 0xe4dfa5a0);
    uVar22 = iVar34 * iVar34;
    iVar34 = (local_6c + 0xe4dfa5a0) * (local_6c + 0xe4dfa5a0);
    uVar17 = iVar34 * iVar34;
    uVar30 = (uVar17 ^ uVar22) + (local_6c ^ 0xe4dfa5a0) + (~uVar17 & uVar22) * -2;
    uVar22 = local_6c ^ 0xe4dfa5a0;
    sVar7 = (sbyte)&local_fd;
    uVar14 = (uVar22 >> 0xd ^ (uVar22 << sVar7 | uVar22 >> 0x20 - sVar7)) * uVar22 * 0x6daa0c2b;
    uVar17 = (uVar22 >> 0xd ^ (uVar22 << sVar7 | uVar22 >> 0x20 - sVar7)) * uVar22 * 0x6daa0c2b;
    uVar12 = (uVar30 * -0x11c21629) % 0x3f1;
    uVar31 = (uVar30 * -0x11c21629) % 0x3f1;
    cVar3 = FUN_180010a30(&local_308,local_188,
                          ((uVar33 + 0x3adfd39e & uVar33) +
                           (uVar29 ^ uVar13 ^ uVar4) + (uVar4 & (uVar29 ^ uVar13)) * 2 +
                          ((uVar16 & uVar29 * uVar13 ^ uVar16) & uVar29 * uVar13)) -
                          (~(uVar29 * uVar13) & uVar29 * uVar13),
                          (ulonglong)
                          ((0x15574236 - local_64 & local_64 + 0xeaa8bdc9) -
                          (0x15574236 - local_64 & local_64 + 0xeaa8bdc9)) * 0x34f2708f +
                          ((ulonglong)
                           ((((uVar17 ^ uVar14) + uVar22 + (~uVar17 & uVar14) * -2 ^ uVar30) +
                            (~uVar31 & uVar12)) - (~uVar12 & uVar31)) << 0x20) +
                          (ulonglong)
                          ((uVar8 ^ uVar23) + (uVar9 ^ uVar24) +
                          ((uVar8 & uVar23) - (~uVar9 & uVar24)) * 2));
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      local_2f0 = local_188._8_8_ - local_188._0_8_;
      local_168 = (undefined1  [16])0x0;
      local_158 = 0;
      local_2f8 = local_188._0_8_;
      local_70 = local_6c;
      uVar9 = local_6c ^ 0x8aa3f01f;
      local_78 = 0;
      local_74 = 0;
      sVar7 = (sbyte)local_ff;
      uVar22 = (uVar9 >> 0xd ^ (uVar9 << sVar7 | uVar9 >> 0x20 - sVar7)) * uVar9 * -0x283a73ef;
      uVar29 = (uVar9 >> 0xd ^ (uVar9 << sVar7 | uVar9 >> 0x20 - sVar7)) * uVar9 * -0x283a73ef;
      uVar33 = (local_6c * -0x116efdfb) % 0xffd;
      uVar17 = (local_6c * -0x116efdfb) % 0xffd;
      uVar4 = local_6c ^ 0xad8d0b1a;
      uVar8 = uVar4 * uVar4 * uVar4 * uVar4 * uVar4;
      uVar4 = uVar4 * uVar4 * uVar4 * uVar4 * uVar4;
      uVar16 = ((~uVar8 & uVar4) + 0x2000) - (~uVar4 & uVar8);
      uVar10 = (ulonglong)uVar16 * 0x6253428f;
      uVar4 = (int)uVar10 + (int)(uVar10 / 0x3f1) * -0x3f1;
      uVar10 = (ulonglong)uVar16 * 0x6253428f;
      uVar8 = (int)uVar10 + (int)(uVar10 / 0x3f1) * -0x3f1;
      cVar3 = FUN_180010a30(&local_2f8,local_168,
                            ((~uVar17 & uVar33) - (~uVar33 & uVar17)) * 0x5115eb07 +
                            (uVar9 + (local_6c * local_6c - local_6c * local_6c) *
                                     (local_6c * local_6c + local_6c * local_6c) + (uVar29 ^ uVar22)
                             + (~uVar29 & uVar22) * -2 ^ local_6c ^ 0x8aa3f01f),
                            ((ulonglong)uVar16 - (ulonglong)(~uVar4 & uVar8)) +
                            (ulonglong)(~uVar8 & uVar4));
      if (cVar3 == '\0') {
        uVar4 = (local_6c * 0x75a30ef5) % 0xffd;
        uVar8 = (local_6c * 0x75a30ef5) % 0xffd;
        uVar4 = ((uVar8 ^ uVar4) + (~uVar4 & uVar8) * -2) * -0x50957fcb;
LAB_1800263d1:
      }
      else {
        local_1d8 = (PCERT_PUBLIC_KEY_INFO)0x0;
        uVar4 = local_6c ^ 0x2ccf6179;
        uVar8 = (uVar4 >> 0xd ^ uVar4) * uVar4 * -0x7f584b59;
        uVar29 = (uVar4 >> 0xd ^ uVar4) * uVar4 * -0x7f584b59;
        local_20c[0] = (~uVar8 & uVar29) + (uVar4 - (~uVar29 & uVar8)) ^ local_6c ^ 0x2ccf6179;
        uVar33 = local_6c ^ 0xc4559ed8;
        bVar1 = (byte)local_101 & 0x1f;
        bVar2 = (byte)local_101 & 0x1f;
        uVar17 = (uVar33 >> 0xd ^ (uVar33 << bVar1 | uVar33 >> 0x20 - bVar1)) * uVar33 * 0x3f3cf237;
        uVar8 = (uVar33 >> 0xd ^ (uVar33 << bVar2 | uVar33 >> 0x20 - bVar2)) * uVar33 * 0x3f3cf237;
        iVar34 = (local_6c + 0xdf6b1822) * (local_6c + 0xdf6b1822);
        uVar9 = iVar34 * iVar34;
        iVar34 = (local_6c + 0xdf6b1822) * (local_6c + 0xdf6b1822);
        uVar29 = iVar34 * iVar34;
        uVar16 = (local_6c * 0x6a4c6fe5) % 0x3f1;
        uVar4 = (local_6c * 0x6a4c6fe5) % 0x3f1;
        uVar4 = CryptDecodeObjectEx((~uVar17 & uVar8) +
                                    ((((local_6c * 0x10ff7b15) % 0xffd + uVar33) -
                                     (local_6c * 0x10ff7b15) % 0xffd) - (~uVar8 & uVar17)) ^
                                    local_6c ^ 0xc4559ed9,&DAT_00000008,(BYTE *)local_168._0_8_,
                                    local_168._8_4_ - local_168._0_4_,
                                    ((uVar4 ^ uVar16) + (~uVar16 & uVar4) * -2) * -0x4490c073 +
                                    ((~uVar9 & uVar29) +
                                     ((local_6c ^ 0xdf6b1822) - (~uVar29 & uVar9)) ^ local_6c ^
                                    0xdf6b9822),(PCRYPT_DECODE_PARA)0x0,&local_1d8,local_20c);
        if (uVar4 == (local_6c ^ 0x806b5276 ^ local_6c ^ 0x806b5276)) {
          uVar4 = 0;
          if (local_168._0_8_ != local_168._8_8_) {
LAB_1800263c7:
            FUN_18063ab10(local_168._0_8_,0);
            goto LAB_1800263d1;
          }
        }
        else {
          local_148 = (BCRYPT_KEY_HANDLE)0x0;
          uVar4 = CryptImportPublicKeyInfoEx2(1,local_1d8,0,(void *)0x0,&local_148);
          LocalFree(local_1d8);
          if ((uVar4 == ((local_6c ^ 0x2dcf63cf) & (local_6c ^ 0xd2309c30) ^
                        (local_6c ^ 0x2dcf63cf) & (local_6c ^ 0xd2309c30))) ||
             (local_148 == (BCRYPT_KEY_HANDLE)0x0)) {
            uVar4 = local_6c * local_6c * local_6c * local_6c;
            uVar8 = local_6c * local_6c * local_6c * local_6c;
            uVar4 = (uVar8 ^ uVar4) * -0x2f0031ed + (~uVar8 & uVar4) * 0x5e0063da +
                    (local_6c ^ 0xe5b2ea6d ^ local_6c ^ 0xe5b2ea6d);
          }
          else {
            local_1d0 = (BCRYPT_ALG_HANDLE)0x0;
            local_2e8[0x10] = '\0';
            local_2e8[0x11] = '\0';
            local_2e8[0x12] = '\0';
            local_2e8[0x13] = '\0';
            local_2e8[0x14] = '\0';
            local_2e8[0x15] = '\0';
            local_2e8[0x16] = '\0';
            local_2e8[0x17] = '\0';
            local_2e8[0x18] = '\0';
            local_2e8[0x19] = '\0';
            local_2e8[0x1a] = '\0';
            local_2e8[0x1b] = '\0';
            local_2e8[0x1c] = '\0';
            local_2e8[0x1d] = '\0';
            local_2e8[0x1e] = '\0';
            local_2e8[0x1f] = '\0';
            local_2e8[0] = '\0';
            local_2e8[1] = '\0';
            local_2e8[2] = '\0';
            local_2e8[3] = '\0';
            local_2e8[4] = '\0';
            local_2e8[5] = '\0';
            local_2e8[6] = '\0';
            local_2e8[7] = '\0';
            local_2e8[8] = '\0';
            local_2e8[9] = '\0';
            local_2e8[10] = '\0';
            local_2e8[0xb] = '\0';
            local_2e8[0xc] = '\0';
            local_2e8[0xd] = '\0';
            local_2e8[0xe] = '\0';
            local_2e8[0xf] = '\0';
            local_298 = 0;
            uStack_290 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2c8 = 0;
            uStack_2c0 = 0;
            iVar34 = local_6c * 2;
            uVar4 = iVar34 * iVar34 * iVar34 * iVar34;
            uVar8 = iVar34 * iVar34 * iVar34 * iVar34;
            uVar4 = (((local_6c ^ 0xf2fd839f) * -0x532af42f) % 0xfb -
                    ((local_6c ^ 0xf2fd839f) * -0x532af42f) % 0xfb) +
                    (~uVar4 & uVar8) * -0x6dcd2aef + (~uVar8 & uVar4) * 0x6dcd2aef;
            uVar29 = local_6c ^ 0xc2478b12;
            bVar1 = (byte)local_103 & 0x1f;
            bVar2 = (byte)local_103 & 0x1f;
            uVar9 = (uVar29 >> 0xd ^ (uVar29 << bVar1 | uVar29 >> 0x20 - bVar1)) * uVar29 *
                    0x32402e45;
            uVar8 = (uVar29 >> 0xd ^ (uVar29 << bVar2 | uVar29 >> 0x20 - bVar2)) * uVar29 *
                    0x32402e45;
            uVar9 = ((((local_6c * 0x1e7c295d) % 0x1fd + uVar29) - (local_6c * 0x1e7c295d) % 0x1fd)
                    + (~uVar9 & uVar8)) - (~uVar8 & uVar9) ^ local_6c ^ 0xc2478b12;
            bVar1 = (byte)&local_104 & 0x1f;
            bVar2 = (byte)&local_104 & 0x1f;
            uVar29 = (uVar9 >> 0xd ^ (uVar9 << bVar1 | uVar9 >> 0x20 - bVar1)) * uVar9 * 0x4ea27b59;
            uVar8 = (uVar9 >> 0xd ^ (uVar9 << bVar2 | uVar9 >> 0x20 - bVar2)) * uVar9 * 0x4ea27b59;
            NVar6 = BCryptOpenAlgorithmProvider
                              (&local_1d0,L"SHA256",(LPCWSTR)0x0,
                               uVar9 + (uVar8 ^ uVar29) + (~uVar8 & uVar29) * -2);
            if ((int)(((local_6c ^ 0x3e320620) & (local_6c ^ 0xc1cdf9df)) +
                     ((local_6c ^ 0x3e320620) & (local_6c ^ 0xc1cdf9df))) <= NVar6) {
              uVar29 = local_6c ^ 0x4bf630f2;
              uVar9 = (local_6c * 0x399e5fd3) % 0xffd;
              uVar8 = (local_6c * 0x399e5fd3) % 0xffd;
              uVar8 = ((local_6c ^ 0x4bf630f2) + (~uVar8 & uVar9)) - (~uVar9 & uVar8);
              uVar33 = (uVar29 * 0x53f25a83) % 0x3f1;
              uVar9 = (uVar29 * 0x53f25a83) % 0x3f1;
              uVar9 = (uVar9 ^ uVar33) + ((local_6c ^ 0xb409cf0d) & uVar8) + (~uVar8 & uVar29) +
                      (~uVar33 & uVar9) * -2;
              bVar1 = (byte)local_106 & 0x1f;
              bVar2 = (byte)local_106 & 0x1f;
              uVar29 = (uVar9 >> 0xd ^ (uVar9 << bVar1 | uVar9 >> 0x20 - bVar1)) * uVar9 *
                       0x287f3faf;
              uVar8 = (uVar9 >> 0xd ^ (uVar9 << bVar2 | uVar9 >> 0x20 - bVar2)) * uVar9 * 0x287f3faf
              ;
              iVar34 = BCryptHash(local_1d0,0,uVar9 + (uVar8 ^ uVar29) + (~uVar8 & uVar29) * -2,
                                  *local_1c8,*(undefined4 *)(local_1c8 + 1),local_2e8,0x20);
              if (-1 < iVar34) {
                local_258 = (undefined1  [16])0x0;
                local_248 = 0;
                cVar3 = FUN_180048200(local_1c0,local_258);
                if (cVar3 != '\0') {
                  if (local_258._8_8_ - local_258._0_8_ == 0x40) {
                    local_2c8 = *(undefined8 *)(undefined1 *)local_258._0_8_;
                    uStack_2c0 = *(undefined8 *)((undefined1 *)local_258._0_8_ + 8);
                    local_2b8 = *(undefined8 *)*(undefined1 (*) [16])(local_258._0_8_ + 0x10);
                    uStack_2b0 = *(undefined8 *)(*(undefined1 (*) [16])(local_258._0_8_ + 0x10) + 8)
                    ;
                    local_2a8 = *(undefined8 *)*(undefined1 (*) [16])(local_258._0_8_ + 0x20);
                    uStack_2a0 = *(undefined8 *)(*(undefined1 (*) [16])(local_258._0_8_ + 0x20) + 8)
                    ;
                    local_298 = *(undefined8 *)*(undefined1 (*) [16])(local_258._0_8_ + 0x30);
                    uStack_290 = *(undefined8 *)(*(undefined1 (*) [16])(local_258._0_8_ + 0x30) + 8)
                    ;
                    *(undefined1 (*) [16])(local_258._0_8_ + 0x30) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(local_258._0_8_ + 0x20) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])(local_258._0_8_ + 0x10) = (undefined1  [16])0x0;
                    *(undefined1 (*) [16])local_258._0_8_ = (undefined1  [16])0x0;
                    NVar6 = BCryptVerifySignature
                                      (local_148,(void *)0x0,local_2e8,0x20,(PUCHAR)&local_2c8,0x40,
                                       0);
                    uVar8 = local_6c * local_6c * local_6c * local_6c * local_6c;
                    uVar29 = local_6c * local_6c * local_6c * local_6c * local_6c;
                    uVar4 = CONCAT31((int3)(uVar4 >> 8),
                                     (int)(((~uVar8 & uVar29) +
                                           (((local_6c * -0x7e52636b) % 0xfb -
                                            (local_6c * -0x7e52636b) % 0xfb) - (~uVar29 & uVar8))) *
                                           -0x1acbefc5 +
                                          ((local_6c ^ 0x890d6e06) & (local_6c ^ 0x76f291f9)) +
                                          ((local_6c ^ 0x890d6e06) & (local_6c ^ 0x76f291f9))) <=
                                     NVar6);
                  }
                }
                thunk_FUN_180113710(local_258);
              }
            }
            local_2e8[0x10] = '\0';
            local_2e8[0x11] = '\0';
            local_2e8[0x12] = '\0';
            local_2e8[0x13] = '\0';
            local_2e8[0x14] = '\0';
            local_2e8[0x15] = '\0';
            local_2e8[0x16] = '\0';
            local_2e8[0x17] = '\0';
            local_2e8[0x18] = '\0';
            local_2e8[0x19] = '\0';
            local_2e8[0x1a] = '\0';
            local_2e8[0x1b] = '\0';
            local_2e8[0x1c] = '\0';
            local_2e8[0x1d] = '\0';
            local_2e8[0x1e] = '\0';
            local_2e8[0x1f] = '\0';
            local_2e8[0] = '\0';
            local_2e8[1] = '\0';
            local_2e8[2] = '\0';
            local_2e8[3] = '\0';
            local_2e8[4] = '\0';
            local_2e8[5] = '\0';
            local_2e8[6] = '\0';
            local_2e8[7] = '\0';
            local_2e8[8] = '\0';
            local_2e8[9] = '\0';
            local_2e8[10] = '\0';
            local_2e8[0xb] = '\0';
            local_2e8[0xc] = '\0';
            local_2e8[0xd] = '\0';
            local_2e8[0xe] = '\0';
            local_2e8[0xf] = '\0';
            local_298 = 0;
            uStack_290 = 0;
            local_2a8 = 0;
            uStack_2a0 = 0;
            local_2b8 = 0;
            uStack_2b0 = 0;
            local_2c8 = 0;
            uStack_2c0 = 0;
            if (local_1d0 != (BCRYPT_ALG_HANDLE)0x0) {
              BCryptCloseAlgorithmProvider(local_1d0,0);
            }
            BCryptDestroyKey(local_148);
          }
          if (local_168._0_8_ != local_168._8_8_) goto LAB_1800263c7;
        }
      }
      if (local_168._0_8_ != 0) {
        uVar10 = local_158 - local_168._0_8_;
        lVar11 = local_168._0_8_;
        if (0xfff < uVar10) {
          lVar11 = *(longlong *)(local_168._0_8_ + -8);
          if (0x1f < (ulonglong)((local_168._0_8_ + -8) - lVar11)) goto LAB_18002650a;
          uVar10 = uVar10 + 0x27;
        }
        FUN_1804547d0(lVar11,uVar10);
      }
      if (local_188._0_8_ != local_188._8_8_) {
        FUN_18063ab10(local_188._0_8_,0);
      }
    }
  }
  if (0xf < local_270) {
    uVar10 = local_270 + 1;
    lVar11 = local_288._0_8_;
    if (0xfff < uVar10) {
      lVar11 = *(longlong *)(local_288._0_8_ + -8);
      if (0x1f < (ulonglong)((local_288._0_8_ + -8) - lVar11)) goto LAB_18002650a;
      uVar10 = local_270 + 0x28;
    }
    FUN_1804547d0(lVar11,uVar10);
  }
  if (0xf < local_220) {
    uVar10 = local_220 + 1;
    lVar11 = local_238._0_8_;
    if (0xfff < uVar10) {
      lVar11 = *(longlong *)(local_238._0_8_ + -8);
      if (0x1f < (ulonglong)((local_238._0_8_ + -8) - lVar11)) goto LAB_18002650a;
      uVar10 = local_220 + 0x28;
    }
    FUN_1804547d0(lVar11,uVar10);
  }
  if (local_188._0_8_ != 0) {
    uVar10 = local_178 - local_188._0_8_;
    lVar11 = local_188._0_8_;
    if (0xfff < uVar10) {
      lVar11 = *(longlong *)(local_188._0_8_ + -8);
      if (0x1f < (ulonglong)((local_188._0_8_ + -8) - lVar11)) {
LAB_18002650a:
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar10 = uVar10 + 0x27;
    }
    FUN_1804547d0(lVar11,uVar10);
  }
  return uVar4 & 0xffffff01;
}



