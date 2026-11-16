// FUN_180010b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180010b80 */

ulonglong FUN_180010b80(undefined8 param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  DWORD DVar5;
  char cVar6;
  uint uVar7;
  DWORD DVar8;
  undefined4 uVar9;
  NTSTATUS NVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  sbyte sVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined8 ****ppppuVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  bool bVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  char *local_408;
  longlong lStack_400;
  char *local_3f8;
  longlong lStack_3f0;
  undefined8 ****local_3e8 [2];
  size_t local_3d8;
  ulonglong local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  char *local_3a8;
  longlong local_3a0;
  undefined1 *local_398;
  undefined8 local_390;
  undefined8 ****local_388;
  undefined8 local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined8 local_340;
  undefined8 ****local_338 [2];
  undefined4 local_328;
  ulonglong local_320;
  undefined1 local_318 [16];
  undefined8 local_308;
  undefined8 ****local_2f8 [2];
  undefined8 local_2e8;
  ulonglong local_2e0;
  undefined1 local_2d8 [16];
  longlong local_2c8;
  char *local_2b8;
  longlong lStack_2b0;
  char *local_2a8;
  longlong lStack_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  ulonglong local_278;
  longlong local_270;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  BCRYPT_ALG_HANDLE local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  longlong local_188;
  longlong local_180;
  DWORD local_170;
  uint local_16c;
  char *local_168;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [2];
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 local_150;
  undefined1 local_14f [2];
  undefined1 local_14d;
  undefined1 local_14c;
  undefined1 local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined1 local_148;
  undefined1 local_147 [2];
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined1 local_140;
  undefined1 local_13f;
  undefined1 local_13e;
  undefined1 local_13d [2];
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [2];
  undefined1 local_134;
  undefined1 local_133;
  undefined1 local_132;
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
  undefined1 local_124 [2];
  undefined1 local_122;
  undefined1 local_121 [2];
  undefined1 local_11f;
  undefined1 local_11e [2];
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
  undefined1 local_110 [2];
  undefined1 local_10e;
  undefined1 local_10d;
  undefined1 local_10c [2];
  undefined1 local_10a [2];
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  undefined1 local_104;
  undefined1 local_103 [2];
  undefined1 local_101 [2];
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd [3];
  undefined1 local_fa;
  undefined1 local_f9;
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6 [4];
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0 [2];
  undefined1 local_ee [3];
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 local_e9;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
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
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  uint local_54;
  int local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = -0x7dca7a57;
  local_4c = 0xa245a51f;
  uVar16 = (uint)&local_104 ^ 0xed4474ab;
  uVar17 = (uint)&local_e6;
  uVar22 = ~uVar17;
  uVar7 = (uint)&local_104 ^ 0x12bb8b54;
  uVar39 = (uint)&local_105 ^ 0x9e10dcc;
  uVar28 = (uint)&local_105 ^ 0xf61ef233;
  uVar40 = (uint)&local_106 ^ 0x1a97cd5d;
  uVar24 = (uint)&local_106 ^ 0xe56832a2;
  uVar41 = (uint)&local_107 ^ 0xd8fa4aa8;
  uVar25 = (uint)&local_107 ^ 0x2705b557;
  uVar19 = (uint)&local_108 ^ 0x8aec7e27;
  uVar29 = (uint)&local_108 ^ 0x751381d8;
  uVar30 = (uint)local_10a ^ 0xb23ca02e;
  uVar42 = (uint)local_10a ^ 0x4dc35fd1;
  uVar43 = (uVar42 & 0x8f8f5703 | uVar30 & 0x7070a8fc) ^ (uVar17 & uVar42 | uVar22 & uVar30);
  uVar42 = ((uVar29 & 0x39d0ba02 | uVar19 & 0xc62f45fd) ^ uVar19 ^ (uVar29 ^ uVar19) & 0x39d0ba02) +
           uVar43;
  bVar2 = (byte)&local_e7;
  uVar30 = uVar42 << (bVar2 & 0x1f);
  uVar19 = uVar42 >> (-bVar2 & 0x1f);
  uVar29 = (uVar43 >> 0xd ^ (uVar43 >> (-bVar2 & 0x1f) | uVar43 << (bVar2 & 0x1f))) * uVar43 *
           0x3c82f165;
  uVar30 = (uVar42 >> 0xd ^ (uVar19 & uVar30 | uVar30 ^ uVar19)) * uVar42 * 0x3c82f165;
  uVar42 = (uint)local_10c ^ 0x8493a6ac ^ (uint)local_10c ^ 0x7b6c5953;
  uVar43 = (uint)&local_10d ^ 0xcee9361f;
  uVar31 = (uint)&local_10e ^ 0x607326f;
  uVar19 = (uint)&local_10e ^ 0xf9f8cd90;
  local_d4 = (uVar19 & 0x66130994 | uVar31 & 0x99ecf66b) ^ (uVar19 ^ uVar31) & 0x66130994 ^ uVar31 ^
             ((uVar25 & 0x6c59dc78 | uVar41 & 0x93a62387) ^
             (uVar25 & 0x6c59dc78 | uVar41 & 0x93a62387)) * -0x33a4770b +
             ((uVar24 & 0xdaa7cf3c | uVar40 & 0x255830c3) ^
             (uVar24 & 0xdaa7cf3c | uVar40 & 0x255830c3)) * 0x239b6e11 +
             ((uVar28 & 0x33620417 | uVar39 & 0xcc9dfbe8) ^
             (uVar28 & 0x33620417 | uVar39 & 0xcc9dfbe8)) +
             ((uVar22 | 0x7070a8fc) &
             ((uVar7 & 0x8f8f5703 | uVar16 & 0x7070a8fc) ^ (uVar7 & uVar17 | uVar16 & uVar22))) +
             ((((((uint)&local_10d ^ 0x3116c9e0) & 0x96233e01 | uVar43 & 0x69dcc1fe) ^ uVar43 ^
               0x69dcc1fe) + (~uVar29 & uVar30)) - ((uVar42 & uVar30 ^ uVar42) & uVar29)) + 1;
  if ((DAT_180bacc54 == '\x01') && (local_68 = *(ulonglong *)(param_2 + 0x10), 0x11 < local_68)) {
    pcVar11 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar11 = *(char **)param_2;
    }
    auVar52[0] = -(*pcVar11 == 'H');
    auVar52[1] = -(pcVar11[1] == 'V');
    auVar52[2] = -(pcVar11[2] == 'H');
    auVar52[3] = -(pcVar11[3] == 'G');
    auVar52[4] = -(pcVar11[4] == 'O');
    auVar52[5] = -(pcVar11[5] == 'D');
    auVar52[6] = -(pcVar11[6] == '-');
    auVar52[7] = -(pcVar11[7] == 'F');
    auVar52[8] = -(pcVar11[8] == 'E');
    auVar52[9] = -(pcVar11[9] == 'A');
    auVar52[10] = -(pcVar11[10] == 'T');
    auVar52[0xb] = -(pcVar11[0xb] == 'U');
    auVar52[0xc] = -(pcVar11[0xc] == 'R');
    auVar52[0xd] = -(pcVar11[0xd] == 'E');
    auVar52[0xe] = -(pcVar11[0xe] == '-');
    auVar52[0xf] = -(pcVar11[0xf] == 'V');
    auVar55[0] = -((char)*(undefined2 *)(pcVar11 + 0x10) == '1');
    auVar55[1] = -((char)((ushort)*(undefined2 *)(pcVar11 + 0x10) >> 8) == '\n');
    auVar55[2] = 0xff;
    auVar55[3] = 0xff;
    auVar55[4] = 0xff;
    auVar55[5] = 0xff;
    auVar55[6] = 0xff;
    auVar55[7] = 0xff;
    auVar55[8] = 0xff;
    auVar55[9] = 0xff;
    auVar55[10] = 0xff;
    auVar55[0xb] = 0xff;
    auVar55[0xc] = 0xff;
    auVar55[0xd] = 0xff;
    auVar55[0xe] = 0xff;
    auVar55[0xf] = 0xff;
    auVar55 = auVar55 & auVar52;
    if ((ushort)((ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar55[0xf] >> 7) << 0xf) == 0xffff) {
      local_d8 = 0x823585a9;
      local_dc = 0x823585a9;
      local_e4 = 0x823585a9;
      local_60._0_4_ = 0x823585a9;
      local_80 = CONCAT44(local_80._4_4_,0x823585a9);
      local_70._0_4_ = 0x823585a9;
      local_258 = 0x823585a9;
      local_250 = 0x823585a9;
      local_260 = 0x823585a9;
      local_25c = 0x823585a9;
      local_8c = 0x823585a9;
      local_254 = 0x823585a9;
      local_bc = 0x823585a9;
      local_264 = 0x823585a9;
      local_90 = 0xa245a51f;
      local_94 = 0xa245a51f;
      local_98 = 0x823585a9;
      local_190 = 0x823585a9;
      local_b8 = 0xa245a51f;
      local_244 = 0xa245a51f;
      local_248 = 0x823585a9;
      local_24c = 0x823585a9;
      local_a4 = 0xa245a51f;
      local_198 = CONCAT44(local_198._4_4_,0xa245a51f);
      local_b0 = 0x823585a9;
      local_9c = 0x823585a9;
      local_ac = 0x823585a9;
      local_a0 = 0x823585a9;
      local_1a0 = CONCAT44(local_1a0._4_4_,0x823585a9);
      local_a8 = 0x823585a9;
      local_1b0 = CONCAT44(local_1b0._4_4_,0xa245a51f);
      local_1a8 = CONCAT44(local_1a8._4_4_,0xa245a51f);
      local_c0 = 0x823585a9;
      local_c4 = 0x823585a9;
      local_1b8 = 0x823585a9;
      local_c8 = 0x823585a9;
      local_d0 = 0x823585a9;
      local_cc = 0x823585a9;
      local_1c0 = CONCAT44(local_1c0._4_4_,0x823585a9);
      local_e0 = 0x823585a9;
      local_1e4 = 0xa245a51f;
      local_1d8 = 0x823585a9;
      local_1d0 = 0xa245a51f;
      local_1cc = 0x823585a9;
      local_1dc = 0x823585a9;
      local_1d4 = 0x823585a9;
      local_210 = 0x823585a9;
      local_1e0 = 0x823585a9;
      local_1ec = 0xa245a51f;
      local_1f8 = 0xa245a51f;
      local_1f4 = 0x823585a9;
      local_1e8 = 0x823585a9;
      local_1fc = 0x823585a9;
      local_1f0 = 0x823585a9;
      local_200 = 0x823585a9;
      local_208 = 0xa245a51f;
      local_20c = 0xa245a51f;
      local_204 = 0x823585a9;
      local_214 = 0x823585a9;
      local_21c = 0x823585a9;
      local_240 = 0x823585a9;
      local_220 = 0x823585a9;
      local_230 = 0xa245a51f;
      local_224 = 0xa245a51f;
      local_228 = 0x823585a9;
      local_22c = 0x823585a9;
      local_218 = 0x823585a9;
      local_23c = 0x823585a9;
      local_234 = 0x823585a9;
      local_b4 = 0x823585a9;
      local_238 = 0x823585a9;
      uVar50 = 0xffffffffffffffff;
      local_168 = param_2;
      local_78 = param_1;
      local_54 = local_d4;
      if (local_68 != 0x12) {
        uVar31 = (uint)&local_12f ^ 0xcaae70a6;
        uVar43 = (uint)&local_12f ^ 0x35518f59;
        uVar25 = (uint)&local_12d ^ 0xa203cefa;
        uVar7 = (uint)&local_12d ^ 0x5dfc3105;
        uVar29 = (uint)&local_12e ^ 0x4b084a52;
        uVar42 = (uint)&local_130 ^ 0xd548f473;
        uVar17 = (uint)&local_130 ^ 0x2ab70b8c;
        uVar30 = (uint)&local_12b ^ 0x3d6c6eec;
        uVar19 = (uint)&local_12b ^ 0xc2939113;
        uVar30 = (uVar19 & 0x13a15eb2 | uVar30 & 0xec5ea14d) ^ 0x2c1ed758 ^
                 (uVar19 & 0x13a15eb2 | uVar30 & 0xec5ea14d) ^ 0x2c1ed758;
        uVar16 = (uint)&local_12c ^ 0xe88f3ada;
        uVar19 = (uint)&local_12c ^ 0x1770c525;
        uVar28 = (uVar19 & 0x1c061ae8 | uVar16 & 0xe3f9e517) ^
                 (uVar19 ^ uVar16) & 0x1c061ae8 ^ uVar16;
        uVar16 = (uint)&local_129 ^ 0xce44fa31;
        uVar19 = (uint)&local_129 ^ 0x31bb05ce;
        uVar24 = (uint)&local_12a ^ 0xf536abe;
        uVar22 = (uint)&local_12a ^ 0xf0ac9541;
        iVar23 = (uVar24 ^ (uVar22 ^ uVar24) &
                           ((uVar19 & 0x4c498daf | uVar16 & 0xb3b67250) ^ uVar16 ^
                           (uVar19 ^ uVar16) & local_d4) ^
                 ((local_d4 ^ 0x4c498da5) & uVar22 | (local_d4 ^ 0xb3b6725a) & uVar24)) +
                 ((uVar28 + 0x55fff035 & uVar28) +
                  (((local_d4 ^ 0xffffffff) & local_d4) - (uVar30 + 0x7078c761 & uVar30)) +
                  -0x17ef0173 +
                 (((uVar17 & 0xe7ea72b6 | uVar42 & 0x18158d49) ^
                  (uVar17 & 0xe7ea72b6 | uVar42 & 0x18158d49)) +
                  ((uVar43 ^ uVar31) & 0x57e087c6 ^ uVar31 ^
                  (uVar43 & 0x57e087c6 | uVar31 & 0xa81f7839)) * 0x2284e4e1 +
                 ((((uint)&local_12e ^ 0xb4f7b5ad) & 0x2219d44 | uVar29 & 0xfdde62bb) ^ uVar29 ^
                 0xfdde62bb) +
                 ((uVar7 & 0xf9a94cf8 | uVar25 & 0x656b307) ^
                  (uVar7 & 0xf9a94cf8 | uVar25 & 0x656b307) | 0xf9a94cf8) + 0x656b309) * -0x6c159427
                 ) * 0x66022a77;
        if (0xf < *(ulonglong *)(param_2 + 0x18)) {
          param_2 = *(char **)param_2;
        }
        pcVar20 = param_2 + local_68;
        local_88._0_4_ = local_d4;
        pcVar11 = (char *)thunk_FUN_1805f7e70(param_2 + 0x12,pcVar20,
                                              CONCAT31((int3)((uint)iVar23 >> 8),(char)iVar23 + 'u')
                                             );
        uVar50 = 0xffffffffffffffff;
        if (pcVar11 != pcVar20) {
          uVar50 = (longlong)pcVar11 - (longlong)param_2;
        }
      }
      uVar19 = (uint)&local_131 ^ 0xc729c4c0;
      uVar7 = (uint)&local_131 ^ 0x38d63b3f;
      uVar24 = local_50 + 0xfe2b863fU ^
               local_50 + 0xfe2b863fU ^ (uVar7 & 0x924c3a85 | uVar19 & 0x6db3c57a) ^
               (local_54 & uVar7 | uVar19 & ~local_54);
      local_70 = CONCAT44(local_70._4_4_,uVar24);
      uVar28 = (uint)&local_132 ^ 0x100bf1b1;
      uVar43 = (uint)&local_133 ^ 0xa80868ca;
      uVar29 = (uint)&local_133 ^ 0x57f79735;
      uVar17 = local_50 + 0x76fe6757U ^ local_50 + 0x76fe6757U ^ local_4c + 0x8e249571;
      uVar32 = (uint)&local_145 ^ 0xbc01ed3f;
      uVar41 = local_54 & uVar32;
      local_88 = CONCAT44(local_88._4_4_,uVar41);
      uVar30 = local_54 ^ 0x6db3c57a;
      bVar2 = (byte)&local_e9;
      uVar7 = uVar30 << (bVar2 & 0x1f);
      uVar42 = uVar30 >> (-bVar2 & 0x1f);
      uVar19 = (uint)&local_134 ^ 0x78dca397;
      uVar31 = (uint)local_136 ^ 0xea89d2a1;
      uVar16 = (uint)local_136 ^ 0x15762d5e;
      uVar25 = (uVar30 >> 0xd ^ (uVar30 >> (-bVar2 & 0x1f) | uVar30 << (bVar2 & 0x1f))) * uVar30 *
               0x7a48a317;
      uVar39 = (uint)&local_137 ^ 0x7cf65c66;
      uVar22 = (uint)&local_137 ^ 0x8309a399;
      uVar7 = (uVar30 >> 0xd ^ (uVar42 & uVar7 | uVar19 ^ uVar42 ^ uVar7 ^ uVar19)) * uVar30 *
              0x7a48a317;
      uVar30 = (uint)&local_138 ^ 0xf22021c;
      uVar19 = (uint)&local_138 ^ 0xf0ddfde3;
      uVar42 = (0x81b0b2e4 - local_4c & uVar30 | local_4c + 0x7e4f4d1b & uVar19) ^
               (uVar19 ^ uVar30) & local_4c + 0x7e4f4d1b ^ uVar30;
      uVar40 = (0x5eadd7ac - local_4c ^ local_4c + 0xa1522853) &
               (local_50 + 0x3830efd1U ^ local_50 + 0x3830efd1U ^ local_4c + 0xa1522853) ^
               local_4c + 0xa1522853;
      uVar30 = (uint)&local_139 ^ 0xa6615e9a;
      uVar19 = (uint)&local_13a ^ 0x1de1ccbe;
      uVar19 = ~((uVar28 ^ local_54 & 0x924c3a85 ^ ~local_54 & 0x6db3c57a ^ uVar28) + uVar19 +
                 ((0x3c2f9ec - local_4c & uVar43 | local_4c + 0xfc3d0613 & uVar29) ^
                 (uVar29 ^ uVar43) &
                 (local_50 + 0xa80fd655U ^ local_50 + 0xa80fd655U ^ local_4c + 0xfc3d0613) ^ uVar43)
                 * -0x657ac2c5 +
                 ((0x22005856U - local_50 ^ local_50 + 0xddffa7a9U) &
                 ((local_50 + 0xa30c09d7U ^ local_50 + 0xa30c09d7U ^ local_4c + 0x463e91b1) -
                 local_4c) + 0xb9c16e4f) +
                 ((local_4c - uVar17) + 0x4fff68b6 & (local_4c - uVar17) + 0x8e249571) +
                (((((local_50 + 0x96b7b7cfU ^ uVar39 ^ local_50 + 0x96b7b7cfU ^ uVar22 ^
                    (uVar22 ^ uVar39) & uVar7) & uVar25) -
                  ((uVar31 ^ uVar16 ^ (uVar16 ^ uVar31) & uVar25) & uVar7)) -
                 (uVar42 + 0x7f5b84a3 & uVar42)) -
                (uVar40 & uVar40 * 2 | uVar30 ^ uVar40 * 2 ^ uVar40 ^ uVar30))) + uVar19;
      uVar16 = (uint)&local_13b ^ 0x9cdb008c;
      uVar7 = (uint)&local_13b ^ 0x6324ff73;
      uVar42 = uVar7 ^ uVar16;
      uVar17 = (uint)local_13d ^ 0x4b46c5b1;
      uVar29 = (uint)local_13d ^ 0xb4b93a4e;
      uVar25 = (uVar29 & local_4c + 0xa5440bf | 0xf5abbf40 - local_4c & uVar17) ^
               (local_4c + 0xa5440bf & uVar29 | 0xf5abbf40 - local_4c & uVar17);
      uVar22 = (uint)&local_13e ^ 0x56edb767;
      uVar29 = (uint)&local_13f ^ 0x68d790cc;
      uVar17 = (uint)&local_13f ^ 0x97286f33;
      uVar39 = (local_4c + 0xfa52e9c5 & uVar17 | 0x5ad163a - local_4c & uVar29) ^
               (uVar17 ^ uVar29) &
               (local_50 + 0x10d5c5b3U ^ local_50 + 0x10d5c5b3U ^ local_4c + 0xfa52e9c5) ^ uVar29;
      uVar28 = (uint)&local_140 ^ 0x32449c8d;
      uVar17 = (uint)&local_141 ^ 0x230f1241;
      uVar29 = (uint)&local_141 ^ 0xdcf0edbe;
      uVar29 = (0xa22bdccc - local_4c & uVar17 | local_4c + 0x5dd42333 & uVar29) ^ uVar17 ^
               (uVar29 ^ uVar17) &
               (local_50 + 0x85f30169U ^ local_50 + 0x85f30169U ^ local_4c + 0x5dd42333);
      uVar43 = (uint)&local_142 ^ 0xb26ef30b;
      uVar17 = (uint)&local_143 ^ 0xea9d0306;
      uVar40 = (uint)&local_143 ^ 0x1562fcf9;
      uVar30 = (uint)&local_144 ^ 0x305ae0cb;
      uVar31 = (uint)&local_144 ^ 0xcfa51f34;
      uVar26 = 0xcb7ee76e - local_4c & local_4c + 0x34811891 |
               0xcb7ee76e - local_4c & local_4c + 0x34811891;
      uVar7 = ((((uVar16 ^ uVar42 & uVar24 & uVar19 ^ (uVar19 | uVar24) & uVar42 ^ uVar7) +
                (uVar39 << 5 & uVar39 | uVar28 ^ uVar39 << 5 ^ uVar39 ^ uVar28) +
                (uVar25 & uVar25 * 8 | uVar22 ^ uVar25 * 8 ^ uVar25 ^ uVar22)) -
               ((uVar29 & uVar29 * 4 | uVar43 ^ uVar29 * 4 ^ uVar29 ^ uVar43) -
               ((uVar31 & 0x39293d2e | uVar30 & 0xc6d6c2d1) ^
                (uVar31 ^ uVar30) &
                ((uVar40 & local_4c + 0x45faf0db | 0xba050f24 - local_4c & uVar17) ^
                (local_4c + 0x45faf0db & uVar40 | 0xba050f24 - local_4c & uVar17)) ^ uVar30 ^
               0x39293d2e))) + (uVar26 + 0x9858a66c & uVar26)) -
              ((local_4c - (local_4c + 0xe9bda0a3)) + 0x9b0c387f &
              (local_4c - (local_4c + 0xe9bda0a3)) + 0xe9bda0a3);
      uVar19 = (uint)&local_145 ^ 0x43fe12c0;
      uVar31 = ((uVar32 & local_54 | uVar19 & ~local_54) ^ (uVar41 | ~local_54 & uVar19)) *
               -0x476198c5;
      uVar17 = uVar7 & uVar31;
      uVar29 = (uint)local_147 ^ 0xa2ec8714;
      uVar19 = (uint)local_147 ^ 0x5d1378eb;
      uVar39 = (uVar19 ^ uVar29) & local_4c + 0x4868fe47 ^ uVar29 ^
               (local_4c + 0x4868fe47 & uVar19 | 0xb79701b8 - local_4c & uVar29);
      uVar40 = (local_4c + 0x69c815d1) -
               (local_50 + 0xfce46ffU ^ local_50 + 0xfce46ffU ^ local_4c + 0x69c815d1);
      uVar26 = 0xe6d41e4a - local_4c & local_4c + 0x192be1b5 |
               0xe6d41e4a - local_4c & local_4c + 0x192be1b5;
      uVar19 = (uint)&local_148 ^ 0x9a1bea3c;
      uVar16 = (uint)&local_149 ^ 0xbb47b551;
      uVar29 = (uint)&local_149 ^ 0x44b84aae;
      uVar30 = (uint)&local_14a ^ 0xb9630d22;
      uVar22 = (uint)&local_14a ^ 0x469cf2dd;
      iVar23 = ((uVar22 & local_4c + 0x916c9cb5 | 0x6e93634a - local_4c & uVar30) ^
               (local_4c + 0x916c9cb5 & uVar22 | 0x6e93634a - local_4c & uVar30)) + uVar7;
      uVar30 = uVar7 * uVar7 * uVar7 * uVar7;
      iVar23 = iVar23 * iVar23;
      uVar41 = iVar23 * iVar23;
      uVar43 = (uint)&local_14b ^ 0xc79c2f08;
      uVar22 = (uint)&local_14b ^ 0x3863d0f7;
      uVar42 = (uint)&local_14c ^ 0x84a72c51;
      iVar23 = (local_50 + 0x17044cfbU ^ local_50 + 0x17044cfbU ^ local_4c + 0x72827e41) - local_4c;
      uVar24 = 0xee597d5c - local_4c & local_4c + 0x11a682a3 |
               0xee597d5c - local_4c & local_4c + 0x11a682a3;
      uVar25 = 0xe8d2f6e8 - local_4c & local_4c + 0x172d0917 |
               0xe8d2f6e8 - local_4c & local_4c + 0x172d0917;
      uVar28 = (uint)&local_14d ^ 0xbed87407;
      uVar32 = (uint)&local_14d ^ 0x41278bf8;
      uVar28 = (local_4c + 0x6ccf5b67 & uVar32 | 0x9330a498 - local_4c & uVar28) ^
               (uVar32 ^ uVar28) & local_4c + 0x6ccf5b67 ^ uVar28;
      uVar19 = ((((uVar31 ^ uVar7 | uVar17) + uVar17) - (uVar39 + 0x45dc1181 & uVar39)) -
               (((uVar29 & local_4c + 0x6c1494fb | 0x93eb6b04 - local_4c & uVar16) ^
                (local_4c + 0x6c1494fb & uVar29 | 0x93eb6b04 - local_4c & uVar16)) +
               (uVar40 * 0x80 | uVar40))) +
               (uVar26 << 6 & uVar26 | uVar19 ^ uVar26 << 6 ^ uVar26 ^ uVar19) +
               (uVar28 + 0x152da7e5 & uVar28) +
               (0x50bd7bb0 - local_4c & local_4c + 0xaf42844f |
               0x50bd7bb0 - local_4c & local_4c + 0xaf42844f) * 0x24a9b675 +
               ((uVar25 | 0xb76f1ef9) & uVar25) +
               (uVar24 + 0x6841c7f3 & uVar24) +
               (iVar23 + 0x130b7deeU & iVar23 + 0x8d7d81bfU) +
               (uVar43 ^ (uVar22 ^ uVar43) & uVar30 ^ (uVar41 & uVar22 | uVar43 & ~uVar41)) +
               (((uVar41 & uVar42 | ((uint)&local_14c ^ 0x7b58d3ac) & ~uVar41) ^ uVar42) & uVar30) *
               -2;
      local_80 = (ulonglong)uVar19;
      local_60 = CONCAT44(local_60._4_4_,local_54);
      uVar42 = (uint)local_14f ^ 0x1c461135;
      uVar22 = (uint)local_14f ^ 0xe3b9eeca;
      uVar29 = (uint)&local_150 ^ 0x58b6e707;
      uVar7 = (uint)&local_150 ^ 0xa74918f8;
      uVar29 = (uVar7 & 0x5de7f056 | uVar29 & 0xa2180fa9) ^ (local_54 & uVar7 | uVar29 & ~local_54);
      uVar17 = ~local_54 | 0xa2180fa9;
      uVar30 = ~uVar17;
      uVar17 = uVar17 & uVar29;
      uVar7 = (uint)&local_151 ^ 0xe1b6da1a ^ (uint)&local_151 ^ 0x1c412044;
      uVar7 = (((uVar29 | uVar30) & uVar7 ^ uVar7) & uVar30) * 2;
      uVar16 = local_4c + 0x68cbd7e3 ^
               (0x9734281c - local_4c ^ local_4c + 0x68cbd7e3) & local_4c + 0x68cbd7e3;
      uVar30 = local_50 + 0xb5fdef59U ^ local_50 + 0xb5fdef59U ^ local_4c + 0x30c3e05f;
      uVar24 = local_50 + 0xc1b4713bU ^ local_50 + 0xc1b4713bU ^ local_4c + 0x6434b7e7;
      uVar28 = (uint)&local_152 ^ 0xc3185333 ^ (uint)&local_152 ^ 0x3ce7accc;
      uVar29 = (uint)&local_153 ^ 0xd179d725;
      uVar25 = (uint)&local_153 ^ 0x2e8628da;
      uVar25 = (uVar25 ^ uVar29) & local_4c + 0xbb524923 ^ uVar29 ^
               (local_4c + 0xbb524923 & uVar25 | 0x44adb6dc - local_4c & uVar29);
      uVar29 = (uint)&local_154 ^ 0xfba348c5;
      uVar43 = (uint)&local_154 ^ 0x45cb73a;
      uVar7 = (uVar22 & 0xa2180fa9 | uVar42 & 0x5de7f056) ^ uVar42 ^ (uVar22 ^ uVar42) & local_54 ^
              local_50 + 0x3fbe2349U ^ local_50 + 0x3fbe2349U ^
              ((((uVar43 & local_4c + 0x7b44a52f | 0x84bb5ad0 - local_4c & uVar29) ^
                (local_4c + 0x7b44a52f & uVar43 | 0x84bb5ad0 - local_4c & uVar29)) * 0xacc8e1d +
               (local_4c + 0x6434b7e7 ^ uVar24)) -
              ((uVar25 + 0x6512abdb & uVar25) +
              ((local_4c + 0x6434b7e7 & uVar28 ^ uVar28) & uVar24) * 2)) * -0x5f2a9bad +
              ((local_4c - uVar30) + 0x571cfb34 & (local_4c - uVar30) + 0x30c3e05f) +
              (uVar16 + 0x29fbb904 & uVar16) + (uVar7 ^ uVar17) + (~uVar17 & uVar7) * -2;
      lVar15 = CONCAT44(uVar7,uVar19);
      uVar38 = (ulonglong)
               ((local_4c -
                (local_50 + 0x6ca20a0fU ^ local_50 + 0x6ca20a0fU ^ local_4c + 0xd068514d)) +
               0xd068514d);
      uVar29 = (uint)local_156 ^ 0xc4f132c7;
      lVar27 = (ulonglong)
               ((local_50 + 0xab9b1dU ^ local_50 + 0xab9b1dU ^ local_4c + 0xb76cf94f) -
               (local_50 + 0xeb0929f3U ^ local_50 + 0xeb0929f3U ^ local_4c + 0xb76cf94f)) + lVar15;
      sVar14 = (sbyte)&local_ea;
      uVar34 = (ulonglong)&local_157 & 0xffffffff ^ 0xf8029c9dc22fcfc2;
      uVar35 = uVar34 ^ (ulonglong)uVar7 << 0x20 ^
               ((uint)uVar34 ^ (uint)&local_157 ^ 0x3dd0303d) & uVar19 ^ uVar34;
      uVar47 = (((local_50 + 0x3301d8a1U ^ local_50 + 0x3301d8a1U ^ local_4c + 0x7e21652d) -
                local_4c) + 0x81de9ad3) + uVar35;
      uVar34 = (ulonglong)&local_158 & 0xffffffff ^ 0x56ca0af1f05f2dc7;
      uVar36 = uVar35 * 0x8c0dac03 *
               (uVar35 >> 0xd ^ (uVar35 >> (-sVar14 & 0x3fU) | uVar35 << sVar14));
      uVar34 = (uVar34 ^ uVar47 >> 0xd ^ uVar34 ^ (uVar47 >> (-sVar14 & 0x3fU) | uVar47 << sVar14))
               * uVar47 * 0x8c0dac03;
      uVar47 = (ulonglong)&local_159 & 0xffffffff ^ 0x190d548fb1b4db26;
      uVar48 = (ulonglong)&local_159 & 0xffffffff ^ 0xe6f2ab704e4b24d9;
      uVar49 = (ulonglong)&local_15a & 0xffffffff ^ 0x7d80f88893aa4ecc;
      uVar35 = (ulonglong)&local_15a & 0xffffffff ^ 0x827f07776c55b133;
      uVar19 = (uint)&local_15b ^ 0x771d55cc;
      uVar7 = (uint)&local_15b ^ 0x88e2aa33;
      uVar7 = (uVar7 & local_4c + 0x8e56870d | 0x71a978f2 - local_4c & uVar19) ^
              (local_4c + 0x8e56870d & uVar7 | 0x71a978f2 - local_4c & uVar19);
      uVar37 = (ulonglong)&local_15c & 0xffffffff ^ 0x30a9a089772f5007;
      uVar19 = (uint)&local_15d;
      local_68 = uVar50;
      if (uVar50 != (((ulonglong)(((uint)&local_15c ^ 0x88d0aff8) & 0x2a6926aa) |
                     uVar37 & 0x30a9a089d596d955) ^ uVar37 ^ 0x2a6926aa) +
                    ((((uVar49 ^ uVar35 ^ (uVar35 ^ uVar49) & uVar36) & uVar34) -
                     ((uVar47 ^ uVar48 ^ (uVar48 ^ uVar47) & uVar34) & uVar36)) -
                    (ulonglong)(uVar7 + 0xe101e140 & uVar7)) +
                    (lVar27 * lVar27 * lVar27 * lVar27 * lVar27 -
                    lVar15 * lVar15 * lVar15 * lVar15 * lVar15) +
                    (ulonglong)
                    (((local_50 + 0xa3f3c0bfU ^ local_50 + 0xa3f3c0bfU ^ local_4c + 0xf65ba367) -
                     local_4c) + 0x9a45c99) * 0x6a8913b3 +
                    (ulonglong)
                    (local_50 + 0x58a9ae11U ^ uVar29 ^ local_4c + 0xde554a53 ^
                     local_50 + 0x58a9ae11U ^ local_4c + 0xde554a53 ^ uVar29) * -0x2bd0f259 +
                    (lVar15 - (uVar38 << 7 | uVar38)) +
                    ((ulonglong)&local_15d & 0xffffffff ^ 0x413948eb ^
                     (ulonglong)((uVar19 ^ 0xbec6b714) & 0x26b337e8 | uVar19 & 0xd94cc817) ^
                    0xffffffff98448014) + 1) {
        uVar7 = (uint)&local_15e ^ 0x45a99a80;
        iVar23 = ((((local_54 ^ 0xf6befeb1) & uVar7 |
                   (local_54 ^ 0x941014e) & ((uint)&local_15e ^ 0xba56657f)) ^ uVar7) &
                 (local_54 ^ 0xf6befeb0)) + ((local_54 ^ 0x941014f) & (local_54 ^ 0xf6befeb1));
        uVar7 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
        uVar19 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
        uVar29 = local_54 ^ 0xb1b43e7f ^ local_54 ^ 0xb1b43e7f;
        uVar38 = (ulonglong)(iVar23 + (uVar19 ^ uVar7) + (~uVar19 & uVar7) * -2);
        lVar15 = (ulonglong)uVar29 << 0x20;
        uVar34 = lVar15 * uVar38;
        uVar35 = ((ulonglong)uVar29 << 0x20) * uVar38;
        uVar34 = uVar50 + uVar38 + lVar15 + (uVar35 ^ uVar34) + (~uVar34 & uVar35) * -2;
        local_60 = CONCAT44(local_60._4_4_,local_54);
        local_80 = (ulonglong)local_54;
        local_90 = local_4c;
        local_98 = local_4c;
        local_a0 = local_4c;
        local_190 = CONCAT44(local_190._4_4_,local_4c);
        local_9c = local_4c;
        local_94 = local_4c;
        local_a4 = local_4c;
        local_198 = (ulonglong)local_4c;
        local_a8 = local_4c;
        local_1a0 = (ulonglong)local_4c;
        local_ac = local_4c;
        local_e4 = local_4c;
        local_b4 = local_4c;
        local_e0 = local_4c;
        local_1a8 = (ulonglong)local_4c;
        local_b0 = local_4c;
        local_dc = local_4c;
        local_88 = CONCAT44(local_88._4_4_,local_4c);
        local_c0 = local_4c;
        local_c8 = local_4c;
        local_c4 = local_4c;
        local_bc = local_4c;
        local_b8 = local_4c;
        local_cc = local_4c;
        local_1b0 = (ulonglong)local_4c;
        local_d0 = local_4c;
        local_d4 = local_4c;
        local_1c0 = (ulonglong)local_4c;
        local_1b8 = CONCAT44(local_1b8._4_4_,local_4c);
        local_d8 = local_4c;
        local_70 = *(ulonglong *)(local_168 + 0x10);
        uVar50 = 0xffffffffffffffff;
        if (uVar34 < local_70) {
          local_8c = local_4c;
          uVar19 = local_54 * local_54 * local_54 * local_54;
          uVar7 = local_54 * local_54 * local_54 * local_54;
          uVar19 = (local_54 ^ 0x70682cbe) + (uVar19 ^ uVar7) + (~uVar19 & uVar7) * -2 ^ local_54 ^
                   0x70682cb4;
          bVar2 = (byte)&local_eb & 0x1f;
          bVar3 = (byte)&local_eb & 0x1f;
          uVar7 = (uVar19 >> 0xd ^ (uVar19 << bVar2 | uVar19 >> 0x20 - bVar2)) * uVar19 * 0x13d512c5
          ;
          uVar29 = (uVar19 >> 0xd ^ (uVar19 << bVar3 | uVar19 >> 0x20 - bVar3)) * uVar19 *
                   0x13d512c5;
          pcVar11 = local_168;
          if (0xf < *(ulonglong *)(local_168 + 0x18)) {
            pcVar11 = *(char **)local_168;
          }
          pcVar21 = pcVar11 + local_70;
          pcVar20 = (char *)thunk_FUN_1805f7e70(pcVar11 + uVar34,pcVar21,
                                                (uVar19 + (~uVar29 & uVar7)) - (~uVar7 & uVar29));
          uVar50 = 0xffffffffffffffff;
          if (pcVar20 != pcVar21) {
            uVar50 = (longlong)pcVar20 - (longlong)pcVar11;
          }
        }
      }
      iVar23 = local_54 + 0xae0506a4;
      iVar33 = local_54 + 0xae0506a4;
      uVar19 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
      uVar7 = iVar33 * iVar33 * iVar33 * iVar33 * iVar33;
      uVar7 = (local_54 ^ 0xae0506a4) + (uVar7 ^ uVar19) + (~uVar7 & uVar19) * -2 ^
              local_54 ^ 0x51faf95b;
      uVar19 = uVar7 * uVar7 * uVar7 * uVar7 * uVar7;
      uVar29 = uVar7 * uVar7 * uVar7 * uVar7 * uVar7;
      if ((local_68 ==
           (CONCAT44(uVar7 + (uVar29 ^ uVar19) + (~uVar29 & uVar19) * -2,
                     local_54 ^ 0xcd4395 ^ local_54) ^ 0xff32bc6a)) ||
         (uVar50 == CONCAT44(local_54 ^ 0x5f87be5c ^ local_54 ^ 0xa07841a3,0xffffffff))) {
        uVar50 = 0;
        goto LAB_180012864;
      }
      lStack_400 = local_68 - 0x12;
      local_2a8 = local_168;
      if (0xf < *(ulonglong *)(local_168 + 0x18)) {
        local_2a8 = *(char **)local_168;
      }
      local_408 = local_2a8 + 0x12;
      uVar34 = uVar50 - local_68;
      uVar38 = CONCAT44(local_54 ^ 0xa39ea90a ^ local_54 ^ 0xa39ea90a,1);
      lStack_2a0 = ((uVar38 ^ uVar34) -
                   ((~uVar34 & uVar38) * 2 + (~(uVar38 * uVar34) & uVar38 * uVar34))) +
                   (~(uVar38 * uVar34) & uVar38 * uVar34);
      local_2a8 = local_2a8 + local_68 + 1;
      local_298 = (undefined1  [16])0x0;
      local_288 = 0;
      local_2d8 = (undefined1  [16])0x0;
      local_2c8 = 0;
      uVar7 = (local_54 ^ 0x5b2bf979) + (~(local_54 * 0x5b2bf979) & local_54 * 0x5b2bf979) * -2 ^
              local_54 ^ 0x5b2bd979;
      uVar19 = (local_54 * local_54 - local_54 * local_54) *
               (local_54 * local_54 + local_54 * local_54) * -0x398246ef;
      uVar17 = (uVar7 * 0x2c8a41a1) % 0x1fd;
      uVar29 = (uVar7 * 0x2c8a41a1) % 0x1fd;
      local_2b8 = local_408;
      lStack_2b0 = lStack_400;
      cVar6 = FUN_180010a30(&local_408,local_298,local_54 ^ 0x1e313910 ^ local_54 ^ 0x3e313911,
                            CONCAT44((local_54 ^ 0x665d6978) +
                                     (~(local_54 * 0x665d6978) & local_54 * 0x665d6978) * -2 ^
                                     local_54,((uVar19 ^ uVar7) + (uVar19 & uVar7) * 2 +
                                              (~uVar29 & uVar17)) - (~uVar17 & uVar29)) ^
                            0x665d697800000000);
      if (cVar6 == '\0') {
LAB_18001a0ac:
        uVar29 = local_54 ^ 0x4b7100e2;
        bVar2 = (byte)local_f0 & 0x1f;
        bVar3 = (byte)local_f0 & 0x1f;
        uVar19 = (uVar29 >> 0xd ^ (uVar29 << bVar2 | uVar29 >> 0x20 - bVar2)) * uVar29 * 0x13c2a463;
        uVar7 = (uVar29 >> 0xd ^ (uVar29 << bVar3 | uVar29 >> 0x20 - bVar3)) * uVar29 * 0x13c2a463;
        iVar23 = local_54 + 0x4b7100e2;
        iVar33 = local_54 + 0x4b7100e2;
        uVar30 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
        uVar17 = iVar33 * iVar33 * iVar33 * iVar33 * iVar33;
        uVar50 = (ulonglong)
                 ((local_54 ^ 0x4b7100e2) + (uVar17 ^ uVar30) + (~uVar17 & uVar30) * -2 ^
                 (uVar29 + (~uVar19 & uVar7)) - (~uVar7 & uVar19));
      }
      else {
        local_3f8 = local_2a8;
        lStack_3f0 = lStack_2a0;
        uVar17 = local_54 ^ 0x4d2ffcf4;
        bVar2 = (byte)local_ee & 0x1f;
        bVar3 = (byte)local_ee & 0x1f;
        uVar25 = (uVar17 >> 0xd ^ (uVar17 << bVar2 | uVar17 >> 0x20 - bVar2)) * uVar17 * 0x2c2e044f;
        uVar29 = (uVar17 >> 0xd ^ (uVar17 << bVar3 | uVar17 >> 0x20 - bVar3)) * uVar17 * 0x2c2e044f;
        uVar16 = (local_54 * -0x54a77705) % 0x1fd;
        uVar22 = (local_54 * -0x54a77705) % 0x1fd;
        iVar23 = local_54 + 0xc6697d9a;
        iVar33 = local_54 + 0xc6697d9a;
        uVar42 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
        uVar30 = iVar33 * iVar33 * iVar33 * iVar33 * iVar33;
        uVar19 = (local_54 * 0x212265e7) % 0xfb;
        uVar7 = (local_54 * 0x212265e7) % 0xfb;
        uVar7 = (local_54 ^ 0x7fa23fe9) + (uVar7 ^ uVar19) + (~uVar19 & uVar7) * -2;
        iVar23 = uVar7 + (local_54 ^ 0x7fa23fe9);
        uVar19 = iVar23 * iVar23 * iVar23 * iVar23;
        uVar24 = iVar23 * iVar23 * iVar23 * iVar23;
        local_68 = uVar50;
        cVar6 = FUN_180010a30(&local_3f8,local_2d8,
                              (uVar29 ^ uVar25) +
                              ((uVar17 + (local_54 * 0x519e815d) % 0x3f1) -
                              (local_54 * 0x519e815d) % 0x3f1) + (~uVar29 & uVar25) * -2 ^ local_54
                              ^ 0x6d2ffcf5,
                              CONCAT44(((local_54 ^ 0x805dc016) & uVar7) +
                                       (~uVar7 & (local_54 ^ 0x7fa23fe9)) + (uVar24 ^ uVar19) +
                                       (~uVar24 & uVar19) * -2,
                                       (local_54 * local_54 - local_54 * local_54) *
                                       (local_54 * local_54 + local_54 * local_54) * -0x1c94a491 +
                                       ((uVar30 ^ uVar42) +
                                        (((local_54 * -0x214f1439) % 0x3f1 + (local_54 ^ 0xc6697d9a)
                                         ) - (local_54 * -0x214f1439) % 0x3f1) +
                                        (~uVar30 & uVar42) * -2 ^
                                       ((local_54 ^ 0xc6695d9a) - (~uVar16 & uVar22)) +
                                       (~uVar22 & uVar16))));
        if (cVar6 == '\0') goto LAB_18001a0ac;
        uVar13 = local_298._0_8_;
        lVar15 = local_298._8_8_ - local_298._0_8_;
        local_3c8 = local_298._0_8_;
        local_3c0 = lVar15;
        cVar6 = FUN_18001edd0(&local_3c8,local_2d8);
        if (cVar6 == '\0') {
          uVar19 = local_54 ^ 0x5fad6ac1;
          sVar14 = (sbyte)&local_f1;
          uVar29 = (uVar19 >> 0xd ^ (uVar19 << sVar14 | uVar19 >> 0x20 - sVar14)) * uVar19 *
                   -0x3d653843;
          uVar7 = (uVar19 >> 0xd ^ (uVar19 << sVar14 | uVar19 >> 0x20 - sVar14)) * uVar19 *
                  -0x3d653843;
          uVar50 = (ulonglong)
                   ~((~uVar29 & uVar7) + (local_54 * 0x47be3fcf) % 0xfb + uVar19 +
                     (-((local_54 * 0x47be3fcf) % 0xfb) - (~uVar7 & uVar29)) ^ local_54);
        }
        else {
          local_3b8 = uVar13;
          local_3b0 = lVar15;
          FUN_180026650(&local_188,&local_3b8);
          local_170 = 0;
          uVar19 = local_54 * local_54 * local_54 * local_54 * local_54;
          uVar7 = local_54 * local_54 * local_54 * local_54 * local_54;
          local_16c = (~uVar19 & uVar7) + ((local_54 ^ 0x6c148969) - (~uVar7 & uVar19)) ^
                      local_54 ^ 0x6c148969;
          uVar29 = local_54 ^ 0x8fb2dc35;
          sVar14 = (sbyte)&local_f2;
          uVar19 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                   0x367dbdd;
          uVar7 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                  0x367dbdd;
          iVar23 = local_54 + 0x81fd5f12;
          iVar33 = local_54 + 0x81fd5f12;
          uVar30 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
          uVar17 = iVar33 * iVar33 * iVar33 * iVar33 * iVar33;
          local_278 = CONCAT44(((local_54 ^ 0x81fd5f12) + (~uVar30 & uVar17)) - (~uVar17 & uVar30) ^
                               local_54,(uVar29 + (~uVar19 & uVar7)) - (~uVar7 & uVar19) ^ local_54)
                      ^ 0x81fd5f128fb2dc35;
          iVar23 = local_54 + 0x5d41a9ef;
          iVar33 = local_54 + 0x5d41a9ef;
          uVar19 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
          uVar7 = iVar33 * iVar33 * iVar33 * iVar33 * iVar33;
          local_270 = CONCAT44((~(local_54 * local_54) & local_54 * local_54) * -0xcb04746 +
                               (0x9ca16f4c - local_4c & local_4c + 0x635e90b3 |
                               0x9ca16f4c - local_4c & local_4c + 0x635e90b3) * 0x6927b5f3 +
                               (local_54 ^ 0x5d41a9ef ^
                               (~uVar19 & uVar7) + ((local_54 ^ 0x5d41a9ef) - (~uVar7 & uVar19))),
                               ((local_54 ^ 0xbe7a56cc) & (local_54 ^ 0x4185a933)) +
                               ((local_54 ^ 0xbe7a56cc) & (local_54 ^ 0x4185a933)));
          local_80 = _Xtime_get_ticks();
          local_60 = local_180 - local_188;
          uVar19 = ((0x8952120a - local_4c & local_4c + 0x76adedf5) -
                   (0x8952120a - local_4c & local_4c + 0x76adedf5)) * -0x7bedfdc7 +
                   (local_54 ^ 0x53b4eecd);
          uVar29 = uVar19 * uVar19 * uVar19 * uVar19 * uVar19;
          uVar22 = uVar19 * uVar19 * uVar19 * uVar19 * uVar19;
          uVar30 = local_54 ^ 0xc2c1c1eb;
          uVar17 = (uVar30 * 0x2c55613f) % 0x3f1;
          uVar16 = (uVar30 * 0x2c55613f) % 0x3f1;
          uVar7 = 0;
          bVar51 = true;
          if ((longlong)local_60 >> 4 ==
              (ulonglong)
              (((uVar19 * 0xa13441d) / 0x3f1) * 0x3f1 + uVar19 * -0xa13441d +
               (uVar19 * 0xa13441d) % 0x3f1 +
               ((local_54 ^ 0x53b4eec1) + (~(local_54 * 0x53b4eec1) & local_54 * 0x53b4eec1) * -2 ^
               uVar19) + (uVar22 ^ uVar29) + (~uVar22 & uVar29) * -2)) {
            local_60 = local_60 & 0xffffffff00000000;
            uVar29 = local_54 ^ 0xad8ad6b8;
            uVar22 = local_54 ^ 0xe7eacbbc;
            sVar14 = (sbyte)local_f6;
            uVar19 = (uVar22 >> 0xd ^ (uVar22 << sVar14 | uVar22 >> 0x20 - sVar14)) * uVar22 *
                     0x9b97475;
            uVar7 = (uVar22 >> 0xd ^ (uVar22 << sVar14 | uVar22 >> 0x20 - sVar14)) * uVar22 *
                    0x9b97475;
            lVar27 = ((ulonglong)
                      (uVar22 + (uVar7 ^ uVar19) + (~uVar7 & uVar19) * -2 ^ local_54 ^ 0xe7eacbbc)
                     << 0x24) + local_188;
            lVar15 = (ulonglong)
                     (((uVar29 * -0x5d9170f7) % 0xffd +
                      ((local_54 ^ 0x52752947) & uVar29 ^
                      (local_54 ^ 0x52752947) & (local_54 ^ 0xad8ad6b8))) -
                     (uVar29 * -0x5d9170f7) % 0xffd) * 0x10;
            if (*(longlong *)(lVar15 + 8 + lVar27) == 0x17) {
              pcVar11 = *(char **)(lVar27 + lVar15);
              auVar56[0] = -(pcVar11[7] == 'R');
              auVar56[1] = -(pcVar11[8] == 'U');
              auVar56[2] = -(pcVar11[9] == 'N');
              auVar56[3] = -(pcVar11[10] == 'T');
              auVar56[4] = -(pcVar11[0xb] == 'I');
              auVar56[5] = -(pcVar11[0xc] == 'M');
              auVar56[6] = -(pcVar11[0xd] == 'E');
              auVar56[7] = -(pcVar11[0xe] == '-');
              auVar56[8] = -(pcVar11[0xf] == 'L');
              auVar56[9] = -(pcVar11[0x10] == 'E');
              auVar56[10] = -(pcVar11[0x11] == 'A');
              auVar56[0xb] = -(pcVar11[0x12] == 'S');
              auVar56[0xc] = -(pcVar11[0x13] == 'E');
              auVar56[0xd] = -(pcVar11[0x14] == '-');
              auVar56[0xe] = -(pcVar11[0x15] == 'V');
              auVar56[0xf] = -(pcVar11[0x16] == '2');
              auVar53[0] = -(*pcVar11 == 'H');
              auVar53[1] = -(pcVar11[1] == 'V');
              auVar53[2] = -(pcVar11[2] == 'H');
              auVar53[3] = -(pcVar11[3] == 'G');
              auVar53[4] = -(pcVar11[4] == 'O');
              auVar53[5] = -(pcVar11[5] == 'D');
              auVar53[6] = -(pcVar11[6] == '-');
              auVar53[7] = -(pcVar11[7] == 'R');
              auVar53[8] = -(pcVar11[8] == 'U');
              auVar53[9] = -(pcVar11[9] == 'N');
              auVar53[10] = -(pcVar11[10] == 'T');
              auVar53[0xb] = -(pcVar11[0xb] == 'I');
              auVar53[0xc] = -(pcVar11[0xc] == 'M');
              auVar53[0xd] = -(pcVar11[0xd] == 'E');
              auVar53[0xe] = -(pcVar11[0xe] == '-');
              auVar53[0xf] = -(pcVar11[0xf] == 'L');
              auVar53 = auVar53 & auVar56;
              bVar51 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) == 0xffff;
            }
            else {
              bVar51 = false;
            }
            if (bVar51 == (bool)(((byte)local_54 ^ 0x1d ^ (byte)local_54) & 1)) {
              uVar7 = (local_54 * 0x5844efcb) % 0x3f1;
              uVar19 = (local_54 * 0x5844efcb) % 0x3f1;
              uVar19 = (local_54 ^ 0xd324cfe) + (uVar19 ^ uVar7) + (~uVar7 & uVar19) * -2;
              iVar23 = uVar19 + (local_54 ^ 0xd324cff);
              uVar42 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
              uVar29 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
              uVar7 = (local_54 * 0x61243cb3) % 0x1fd;
              uVar22 = (local_54 * 0x61243cb3) % 0x1fd;
              uVar22 = (~uVar22 & uVar7) + ((local_54 ^ 0xbe37788c) - (~uVar7 & uVar22)) ^
                       local_54 ^ 0xbe37788c;
              uVar7 = (uVar22 * -0x1da42fcf) % 0xffd;
              uVar24 = (uVar22 * -0x1da42fcf) % 0xffd;
              lVar27 = ((ulonglong)((uVar22 - (~uVar7 & uVar24)) + (~uVar24 & uVar7)) << 0x24) +
                       local_188;
              lVar15 = (ulonglong)
                       (((local_54 ^ 0xd324cff ^ uVar19) - (~uVar29 & uVar42)) + (~uVar42 & uVar29))
                       * 0x10;
              if (*(longlong *)(lVar15 + 8 + lVar27) == 0x10) {
                pcVar11 = *(char **)(lVar27 + lVar15);
                auVar54[0] = -(*pcVar11 == 'i');
                auVar54[1] = -(pcVar11[1] == 'n');
                auVar54[2] = -(pcVar11[2] == 't');
                auVar54[3] = -(pcVar11[3] == 'e');
                auVar54[4] = -(pcVar11[4] == 'r');
                auVar54[5] = -(pcVar11[5] == 'n');
                auVar54[6] = -(pcVar11[6] == 'a');
                auVar54[7] = -(pcVar11[7] == 'l');
                auVar54[8] = -(pcVar11[8] == '-');
                auVar54[9] = -(pcVar11[9] == 'r');
                auVar54[10] = -(pcVar11[10] == 'u');
                auVar54[0xb] = -(pcVar11[0xb] == 'n');
                auVar54[0xc] = -(pcVar11[0xc] == 't');
                auVar54[0xd] = -(pcVar11[0xd] == 'i');
                auVar54[0xe] = -(pcVar11[0xe] == 'm');
                auVar54[0xf] = -(pcVar11[0xf] == 'e');
                bVar51 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar54[0xf] >> 7) << 0xf) == 0xffff;
              }
              else {
                bVar51 = false;
              }
              if (!bVar51) goto LAB_18001e73b;
              local_70 = CONCAT44(local_70._4_4_,
                                  ((local_54 ^ 0x3d3e3e14) & uVar30) +
                                  ((local_54 ^ 0x3d3e3e14) & (local_54 ^ 0xc2c1c1eb)) +
                                  (uVar16 ^ uVar17) + (~uVar17 & uVar16) * -2);
              uVar29 = local_54 ^ 0xaaaf3950;
              iVar23 = (local_54 + 0xaaaf3955) * (local_54 + 0xaaaf3955);
              uVar19 = iVar23 * iVar23;
              iVar23 = (local_54 + 0xaaaf3955) * (local_54 + 0xaaaf3955);
              uVar7 = iVar23 * iVar23;
              uVar7 = (local_54 ^ 0xaaaf3955) + (uVar7 ^ uVar19) + (~uVar7 & uVar19) * -2;
              uVar17 = uVar7 ^ uVar29;
              iVar23 = uVar7 + uVar29;
              sVar14 = (sbyte)&local_f7;
              uVar30 = (uVar17 >> 0xd ^ (uVar17 << sVar14 | uVar17 >> 0x20 - sVar14)) * uVar17 *
                       0x2407937b;
              uVar7 = (uVar17 >> 0xd ^ (uVar17 << sVar14 | uVar17 >> 0x20 - sVar14)) * uVar17 *
                      0x2407937b;
              uVar16 = local_54 ^ 0x3c440371;
              sVar14 = (sbyte)&local_f8;
              uVar19 = (uVar16 >> 0xd ^ (uVar16 << sVar14 | uVar16 >> 0x20 - sVar14)) * uVar16 *
                       0x6d006371;
              uVar22 = (uVar16 >> 0xd ^ (uVar16 << sVar14 | uVar16 >> 0x20 - sVar14)) * uVar16 *
                       0x6d006371;
              lVar27 = ((ulonglong)
                        ((uVar16 + (~uVar19 & uVar22)) - (~uVar22 & uVar19) ^ local_54 ^ 0xc440371)
                       << 0x24) + local_188;
              lVar15 = (ulonglong)
                       (((uVar29 * -0x3d2798cd) / 0x3f1) * 0x3f1 + uVar29 * 0x3d2798cd +
                        (iVar23 * iVar23 - iVar23 * iVar23) * (iVar23 * iVar23 + iVar23 * iVar23) +
                        (uVar29 * -0x3d2798cd) % 0x3f1 + uVar17 + (uVar7 ^ uVar30) +
                       (~uVar7 & uVar30) * -2) * 0x10;
              local_88 = SUB168(SEXT816((longlong)local_80) * SEXT816(-0x29406b2a1a85bd43),8);
              cVar6 = FUN_1800267f0(*(undefined8 *)(lVar15 + lVar27),
                                    *(undefined8 *)(lVar15 + 8 + lVar27),&local_170);
              DVar5 = local_170;
              if ((cVar6 == '\0') || (DVar8 = GetCurrentProcessId(), DVar5 != DVar8))
              goto LAB_18001e73b;
              uVar7 = ((~(local_54 * -0x41b3f2a3) & local_54 * -0x41b3f2a3) +
                      (local_54 ^ 0xbe4c0d5d)) -
                      (~(local_54 * -0x41b3f2a3) & local_54 * -0x41b3f2a3);
              uVar29 = local_54 ^ 0xbe4c0d5b;
              sVar14 = (sbyte)&local_f9;
              uVar17 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                       -0x24c65add;
              uVar19 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                       -0x24c65add;
              uVar19 = (uVar29 + (~uVar17 & uVar19)) - (~uVar19 & uVar17);
              uVar29 = uVar19 ^ uVar7;
              iVar23 = uVar19 + uVar7;
              sVar14 = (sbyte)&local_fa;
              uVar19 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                       0x13f7f81;
              uVar7 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                      0x13f7f81;
              iVar23 = uVar29 + (iVar23 * iVar23 - iVar23 * iVar23) *
                                (iVar23 * iVar23 + iVar23 * iVar23) + (uVar7 ^ uVar19) +
                       (~uVar7 & uVar19) * -2;
              uVar19 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
              uVar7 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
              lVar15 = CONCAT44(local_54 ^ 0xb5417457 ^
                                (0x519ec4a4 - local_4c & local_4c + 0x2e613b5b) * -0x16374e7e +
                                (local_54 ^ 0xb5417457),
                                iVar23 + (uVar7 ^ uVar19) + (~uVar7 & uVar19) * -2) * 0x10;
              if (*(longlong *)(local_188 + 8 + lVar15) == 7) {
                piVar1 = *(int **)(local_188 + lVar15);
                bVar51 = *(int *)((longlong)piVar1 + 3) == 0x3131342e && *piVar1 == 0x2e312e30;
              }
              else {
                bVar51 = false;
              }
              if (!bVar51) goto LAB_18001e73b;
              uVar19 = local_54 * local_54 * local_54 * local_54;
              uVar29 = local_54 * local_54 * local_54 * local_54;
              uVar17 = (local_54 * 0x25f52039) % 0xffd;
              uVar7 = (local_54 * 0x25f52039) % 0xffd;
              local_70 = CONCAT44(local_70._4_4_,
                                  ((uVar7 ^ uVar17) + (~uVar17 & uVar7) * -2) * 0x21c87395 +
                                  (((uVar29 ^ uVar19) +
                                   (local_54 * -0x7d82440d) % 0x3f1 + (local_54 ^ 0x460ee39f)) -
                                   ((local_54 * -0x7d82440d) % 0x3f1 + (~uVar29 & uVar19) * 2) ^
                                   local_54 ^ 0x460ee39e));
              FUN_180001730(local_3e8);
              uVar9 = 1;
              ppppuVar18 = local_3e8;
              if (0xf < local_3d0) {
                ppppuVar18 = local_3e8[0];
              }
              uVar19 = local_54 * local_54 * local_54 * local_54 * local_54;
              uVar7 = local_54 * local_54 * local_54 * local_54 * local_54;
              lVar27 = ((ulonglong)
                        ((~uVar19 & uVar7) + ((local_54 ^ 0xda48002e) - (~uVar7 & uVar19)) ^
                         local_54 ^ 0xa48002e) << 0x24) + local_188;
              lVar15 = (ulonglong)
                       (((0xe127313e - local_4c & local_4c + 0x1ed8cec1) -
                        (0xe127313e - local_4c & local_4c + 0x1ed8cec1)) * 0x7b21cc07 +
                        (local_54 ^ 0xaa1e1cc6) ^ local_54 ^ 0xaa1e1cc1) * 0x10;
              local_60._0_4_ = uVar9;
              if (*(size_t *)(lVar15 + 8 + lVar27) == local_3d8) {
                if (local_3d8 == 0) {
                  bVar51 = true;
                }
                else {
                  iVar23 = memcmp(*(void **)(lVar15 + lVar27),ppppuVar18,local_3d8);
                  bVar51 = iVar23 == 0;
                }
              }
              else {
                bVar51 = false;
              }
              uVar7 = local_54 ^ 0x1e649886;
              sVar14 = (sbyte)local_fd;
              cVar6 = (char)uVar7;
              bVar3 = ((byte)(uVar7 >> 0xd) ^
                      ((byte)(uVar7 << sVar14) | (byte)(uVar7 >> 0x20 - sVar14))) * cVar6 * 'U';
              bVar2 = ((byte)(uVar7 >> 0xd) ^
                      ((byte)(uVar7 << sVar14) | (byte)(uVar7 >> 0x20 - sVar14))) * cVar6 * 'U';
              if (bVar51 != (bool)(~((cVar6 + (~bVar3 & bVar2)) - (~bVar2 & bVar3) ^ (byte)local_54)
                                  & 1)) goto LAB_18001e73b;
              uVar29 = local_54 ^ 0x47e262c6;
              sVar14 = (sbyte)&local_fe;
              uVar19 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                       0x6d77a041;
              uVar7 = (uVar29 >> 0xd ^ (uVar29 << sVar14 | uVar29 >> 0x20 - sVar14)) * uVar29 *
                      0x6d77a041;
              lVar15 = (ulonglong)
                       ((~uVar19 & uVar7) +
                        (((local_54 * local_54 - local_54 * local_54) *
                          (local_54 * local_54 + local_54 * local_54) + uVar29) - (~uVar7 & uVar19))
                        ^ local_54 ^ 0x47e262ce) * 0x10;
              cVar6 = FUN_180026880(*(undefined8 *)(lVar15 + local_188),
                                    *(undefined8 *)(lVar15 + 8 + local_188),&local_16c);
              if (cVar6 == '\0') goto LAB_18001e73b;
              uVar29 = local_54 ^ 0xd328809c;
              uVar7 = local_54 ^ 0xd3288096 ^ uVar29;
              sVar14 = (sbyte)&local_ff;
              uVar19 = (uVar7 >> 0xd ^ (uVar7 << sVar14 | uVar7 >> 0x20 - sVar14)) * uVar7 *
                       0x7f0c0281;
              uVar7 = (uVar7 >> 0xd ^ (uVar7 << sVar14 | uVar7 >> 0x20 - sVar14)) * uVar7 *
                      0x7f0c0281;
              if (local_16c !=
                  (uVar7 ^ uVar19) +
                  ((uVar29 * 0x20f596e9) / 0x3f1) * 0x3f1 + uVar29 * -0x20f596e9 +
                  (uVar29 * uVar29 - uVar29 * uVar29) * (uVar29 * uVar29 + uVar29 * uVar29) +
                  (uVar29 * 0x20f596e9) % 0x3f1 +
                  ((local_54 ^ 0x2cd77f69) & uVar29) +
                  ((local_54 ^ 0x2cd77f63) & (local_54 ^ 0xd3288096)) + (~uVar7 & uVar19) * -2)
              goto LAB_18001e73b;
              uVar7 = local_54 * local_54 * local_54 * local_54 * local_54;
              uVar19 = local_54 * local_54 * local_54 * local_54 * local_54;
              uVar19 = (~uVar7 & uVar19) + ((local_54 ^ 0x96e272ff) - (~uVar19 & uVar7)) ^ local_54
                       ^ 0x96e272f6;
              uVar29 = uVar19 * uVar19 * uVar19 * uVar19;
              uVar7 = uVar19 * uVar19 * uVar19 * uVar19;
              lVar15 = (ulonglong)((uVar19 - (~uVar7 & uVar29)) + (~uVar29 & uVar7)) * 0x10;
              cVar6 = FUN_180026950(*(undefined8 *)(lVar15 + local_188),
                                    *(undefined8 *)(lVar15 + 8 + local_188),&local_278);
              if (cVar6 == '\0') goto LAB_18001e73b;
              uVar29 = local_54 ^ 0x4573a8e5;
              iVar23 = local_54 + 0x4573a8e5;
              iVar33 = local_54 + 0x4573a8e5;
              uVar19 = (uVar29 >> 0xd ^ uVar29) * uVar29 * -0x405c15a3;
              uVar7 = (uVar29 >> 0xd ^ uVar29) * uVar29 * -0x405c15a3;
              uVar7 = (uVar29 - iVar23 * iVar23 * iVar23 * iVar23 * iVar23) +
                      iVar33 * iVar33 * iVar33 * iVar33 * iVar33 + (uVar7 ^ uVar19) +
                      (~uVar7 & uVar19) * -2 ^ local_54 ^ 0x4573a8e5;
              bVar2 = (byte)local_101 & 0x1f;
              bVar3 = (byte)local_101 & 0x1f;
              uVar29 = (uVar7 >> 0xd ^ (uVar7 << bVar2 | uVar7 >> 0x20 - bVar2)) * uVar7 *
                       -0x3581aae3;
              uVar19 = (uVar7 >> 0xd ^ (uVar7 << bVar3 | uVar7 >> 0x20 - bVar3)) * uVar7 *
                       -0x3581aae3;
              local_188 = ((ulonglong)
                           ((uVar7 * uVar7 - uVar7 * uVar7) * (uVar7 * uVar7 + uVar7 * uVar7) +
                            uVar7 + (uVar19 ^ uVar29) + (~uVar19 & uVar29) * -2) << 0x24) +
                          local_188;
              lVar15 = (ulonglong)
                       (local_4c + 0x9971a3c5 ^
                        local_4c + 0x9971a3c5 ^
                        (0x492b8506 - local_4c & local_4c + 0xb6d47af9 |
                        0x492b8506 - local_4c & local_4c + 0xb6d47af9) * 0x5b1371df +
                        (local_54 ^ 0x4e3d0d11) ^
                       (~(local_54 * 0x4e3d0d1b) & local_54 * 0x4e3d0d1b) +
                       ((local_54 ^ 0x4e3d0d1b) - (~(local_54 * 0x4e3d0d1b) & local_54 * 0x4e3d0d1b)
                       )) * 0x10;
              cVar6 = FUN_180026950(*(undefined8 *)(lVar15 + local_188),
                                    *(undefined8 *)(lVar15 + 8 + local_188),&local_270);
              if (cVar6 == '\0') goto LAB_18001e73b;
              lVar15 = ((longlong)(local_88 + local_80) >> 0x17) -
                       ((longlong)(local_88 + local_80) >> 0x3f);
              iVar23 = local_54 * 2;
              iVar23 = iVar23 * iVar23 * iVar23 * iVar23 * iVar23 -
                       iVar23 * iVar23 * iVar23 * iVar23 * iVar23;
              uVar29 = local_54 ^ 0x91e4024f;
              bVar2 = (byte)local_103 & 0x1f;
              bVar3 = (byte)local_103 & 0x1f;
              uVar19 = (uVar29 >> 0xd ^ (uVar29 << bVar2 | uVar29 >> 0x20 - bVar2)) * uVar29 *
                       0x3330d4cb;
              uVar7 = (uVar29 >> 0xd ^ (uVar29 << bVar3 | uVar29 >> 0x20 - bVar3)) * uVar29 *
                      0x3330d4cb;
              if ((((longlong)
                    (((ulonglong)
                      (uVar29 + (uVar7 ^ uVar19) + (~uVar7 & uVar19) * -2 ^ local_54 ^ 0x91e4024f)
                     << 0x20) + lVar15 +
                    (ulonglong)
                    (((iVar23 * 0x76ed7b05 ^ 0x1eU) -
                     (~(iVar23 * -0x102b956a) & iVar23 * -0x102b956a)) +
                    (~(iVar23 * -0x102b956a) & iVar23 * -0x102b956a))) < (longlong)local_278) ||
                  ((longlong)local_278 < lVar15 + -0x78)) ||
                 (local_270 <= (longlong)local_278 || local_270 <= lVar15)) goto LAB_18001e73b;
              bVar51 = (longlong)(local_278 + 0x3c) < local_270;
            }
            else {
LAB_18001e73b:
              bVar51 = true;
            }
            uVar7 = (uint)local_60;
          }
          uVar50 = local_68;
          uVar13 = local_78;
          if ((uVar7 & 1) != 0) {
            thunk_FUN_18015c010(local_3e8);
          }
          if (bVar51) {
            uVar50 = 0;
          }
          else {
            FUN_18015bae0(local_338,"HVHGOD-FEATURE-KEY-V1\n");
            uVar12 = FUN_1801f36b0(local_338,&local_2b8);
            FUN_18015af80(uVar12,10);
            FUN_1801f36b0(local_338,&local_2a8);
            local_368 = (undefined1  [16])0x0;
            local_378 = (undefined1  [16])0x0;
            local_1c8 = (BCRYPT_ALG_HANDLE)0x0;
            NVar10 = BCryptOpenAlgorithmProvider(&local_1c8,L"SHA256",(LPCWSTR)0x0,8);
            if (NVar10 < 0) {
LAB_18001e8fe:
              uVar50 = 0;
            }
            else {
              ppppuVar18 = local_338;
              if (0xf < local_320) {
                ppppuVar18 = local_338[0];
              }
              iVar23 = BCryptHash(local_1c8,&DAT_180bacbf0,0x20,ppppuVar18,local_328,local_378,0x20)
              ;
              BCryptCloseAlgorithmProvider(local_1c8,0);
              if (iVar23 < 0) goto LAB_18001e8fe;
              local_318 = (undefined1  [16])0x0;
              local_308 = 0;
              uVar50 = uVar50 + 1;
              lVar15 = *(ulonglong *)(local_168 + 0x10) - uVar50;
              if (*(ulonglong *)(local_168 + 0x10) < uVar50) {
                    /* WARNING: Subroutine does not return */
                FUN_18015ac40();
              }
              local_3a8 = *(char **)local_168;
              if (*(ulonglong *)(local_168 + 0x18) < 0x10) {
                local_3a8 = local_168;
              }
              local_3a0 = -1;
              if (lVar15 != -1) {
                local_3a0 = lVar15;
              }
              local_3a8 = local_3a8 + uVar50;
              cVar6 = FUN_180010a30(&local_3a8,local_318,0x20000001);
              local_358 = (undefined1  [16])0x0;
              local_348 = 0;
              local_340 = 0xf;
              FUN_18015acb0(local_2f8,uVar13,&local_e5);
              FUN_18015af80(local_2f8,10);
              uVar13 = FUN_1801f36b0(local_2f8,&local_2b8);
              FUN_18015af80(uVar13,10);
              FUN_1801f36b0(local_2f8,&local_2a8);
              if (cVar6 == '\0') {
LAB_18001eb92:
                local_368 = (undefined1  [16])0x0;
                local_378 = (undefined1  [16])0x0;
                uVar50 = 0;
              }
              else {
                local_390 = 0x20;
                ppppuVar18 = local_2f8;
                if (0xf < local_2e0) {
                  ppppuVar18 = local_2f8[0];
                }
                local_380 = local_2e8;
                local_398 = local_378;
                local_388 = ppppuVar18;
                cVar6 = FUN_180010410(0,&local_388,local_318,local_358,&local_398);
                local_368 = (undefined1  [16])0x0;
                local_378 = (undefined1  [16])0x0;
                if (cVar6 == '\0') goto LAB_18001eb92;
                FUN_1800f5780(local_168,local_358);
                uVar50 = CONCAT71((int7)((ulonglong)ppppuVar18 >> 8),1);
              }
              thunk_FUN_18015c010(local_2f8);
              thunk_FUN_18015c010(local_358);
              thunk_FUN_180113710(local_318);
            }
            thunk_FUN_18015c010(local_338);
          }
          FUN_180176390(&local_188);
          uVar50 = uVar50 & 0xffffffff;
        }
      }
      if (local_2d8._0_8_ != 0) {
        uVar34 = local_2c8 - local_2d8._0_8_;
        if (uVar34 < 0x1000) {
          lVar15 = local_2d8._0_8_;
        }
        else {
          if (0x1f < (ulonglong)((local_2d8._0_8_ + -8) - *(longlong *)(local_2d8._0_8_ + -8)))
          goto LAB_18001ebe0;
          uVar34 = uVar34 + 0x27;
          lVar15 = *(longlong *)(local_2d8._0_8_ + -8);
        }
        FUN_1804547d0(lVar15,uVar34);
      }
      if (local_298._0_8_ != 0) {
        uVar34 = local_288 - local_298._0_8_;
        if (uVar34 < 0x1000) {
          lVar15 = local_298._0_8_;
        }
        else {
          if (0x1f < (ulonglong)((local_298._0_8_ + -8) - *(longlong *)(local_298._0_8_ + -8))) {
LAB_18001ebe0:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          uVar34 = uVar34 + 0x27;
          lVar15 = *(longlong *)(local_298._0_8_ + -8);
        }
        FUN_1804547d0(lVar15,uVar34);
      }
      goto LAB_180012864;
    }
  }
  uVar41 = (uint)&local_11a ^ 0x5bd9b4cd;
  uVar39 = (uint)&local_11a ^ 0xa4264b32;
  uVar30 = ((uint)local_110 ^ 0x103e7663 ^ (uint)local_110 ^ 0xefc1899c) &
           (local_d4 & 0x51f2fc89 ^ 0x51f2fc89) + (local_d4 & 0xae0d0376);
  uVar7 = (uint)&local_111 ^ 0xbaf94ccf;
  uVar29 = (uint)&local_112 ^ 0x5a10f565;
  uVar19 = (uint)&local_112 ^ 0xa5ef0a9a;
  uVar16 = (uVar19 & 0x828e0078 | uVar29 & 0x7d71ff87) ^ (uVar19 & 0x828e0078 | uVar29 & 0x7d71ff87)
  ;
  uVar19 = (uint)&local_113 ^ 0xba433f22;
  uVar22 = (uint)&local_114 ^ 0xf9f4ccb1;
  uVar29 = (uint)&local_114 ^ 0x60b334e;
  uVar42 = (uint)&local_115 ^ 0x847b7327;
  uVar17 = (uint)&local_116 ^ 0xa0ec8482;
  uVar24 = (uint)&local_116 ^ 0x5f137b7d;
  uVar24 = (uVar24 ^ uVar17) & 0x4631c288 ^ uVar17 ^ (uVar24 & 0x4631c288 | uVar17 & 0xb9ce3d77);
  uVar44 = (uint)&local_117 ^ 0x529cfc7d;
  uVar25 = (uint)&local_117 ^ 0xad630382;
  uVar28 = (uint)&local_118 ^ 0x4a77593b;
  uVar45 = (uint)&local_118 ^ 0xb588a6c4;
  uVar31 = (uint)&local_119 ^ 0xf92516dc;
  uVar43 = (uint)&local_119 ^ 0x6dae923;
  uVar46 = (uint)&local_11b ^ 0x9f42212f;
  uVar17 = (uint)&local_11b ^ 0x60bdded0;
  uVar32 = (uint)&local_11c ^ 0x142f9c61;
  uVar40 = (uint)&local_11c ^ 0xebd0639e;
  uVar26 = (uint)local_11e ^ 0x9f50ce6e;
  uVar17 = (((((uint)local_11e ^ 0x60af3191) & 0xc6f2317d | uVar26 & 0x390dce82) ^ uVar26 ^
            0xc6f2317d) - ((uVar40 ^ (uVar40 ^ uVar32) & 0x29ada88e ^ uVar32) & 0x29ada88e)) *
           0x1f3de051 +
           ((uVar17 ^ uVar46) & 0xff596d18 ^ uVar46 ^ (uVar17 & 0xff596d18 | uVar46 & 0xa692e7)) *
           -0x373c9831 +
           ((uVar39 & 0x51f2fc89 | uVar41 & 0xae0d0376) ^ uVar41 ^ (uVar39 ^ uVar41) & local_d4 ^
           (((uVar24 + 0x925ef7ec & uVar24) + ((uVar42 ^ uVar42 & 0xfbc830c4) & 0xfbc830c4)) -
           ((uVar43 & 0xaebfac89 | uVar31 & 0x51405376) ^ uVar31 ^
           (uVar43 ^ uVar31) &
           ((uVar45 & 0xaebfac89 | uVar28 & 0x51405376) ^ uVar28 ^
           (uVar45 ^ uVar28) &
           ((uVar25 & 0x66235194 | uVar44 & 0x99dcae6b) ^ (uVar25 ^ uVar44) & 0x66235194 ^ uVar44)))
           ) * 0x361c9eaf +
           (((uVar16 * 8 | uVar16) +
            (uVar7 ^ (uVar30 & ((uint)&local_111 ^ 0x4506b330) | uVar7 & ~uVar30))) -
           ((uVar29 & 0x3196b5ac | uVar22 & 0xce694a53) ^ uVar22 ^
           (uVar29 ^ uVar22) &
           ((((uint)&local_113 ^ 0x45bcc0dd) & 0x3196b5ac | uVar19 & 0xce694a53) ^ uVar19))));
  uVar7 = (uint)&local_11f ^ 0xf6d65695;
  uVar19 = (uint)&local_11f ^ 0x929a96a;
  uVar16 = (uVar19 & 0xab5dbd14 | uVar7 & 0x54a242eb) ^ uVar7 ^ (uVar19 ^ uVar7) & 0xab5dbd14;
  bVar4 = (byte)local_121 ^ 0xe;
  bVar3 = (byte)local_121 ^ 0xf1;
  bVar2 = (byte)&local_122 ^ 0xb9;
  bVar2 = ((byte)&local_e8 ^ bVar2 ^
          bVar2 ^ (bVar4 & 0x6b | bVar3 & 0x94) ^ (bVar3 ^ bVar4) & 0x94 ^ bVar4) & 0x1f;
  uVar29 = (uint)local_124 ^ 0x1104a359;
  uVar7 = uVar17 >> (-bVar2 & 0x1f);
  uVar19 = (uint)&local_125 ^ 0xeeb71d2b;
  uVar30 = (uint)&local_126 ^ 0xefa74fd7;
  uVar29 = (uVar29 ^ uVar17 >> 0xd ^ uVar29 ^ (uVar17 >> (-bVar2 & 0x1f) | uVar17 << bVar2)) *
           uVar17 * -0x7bc85187;
  uVar19 = (uVar30 ^ uVar17 >> 0xd ^
           uVar30 ^ (uVar7 & uVar17 << bVar2 | uVar19 ^ uVar7 ^ uVar17 << bVar2 ^ uVar19)) * uVar17
           * -0x7bc85187;
  uVar22 = (uint)&local_127 ^ 0x6f245244;
  uVar30 = (uint)&local_127 ^ 0x90dbadbb;
  uVar42 = (uint)&local_128 ^ 0xbb04e50c;
  uVar7 = (uint)&local_128 ^ 0x44fb1af3;
  uVar50 = (ulonglong)
           (((uVar7 & 0x9203289c | uVar42 & 0x6dfcd763) ^ (uVar7 & 0x9203289c | uVar42 & 0x6dfcd763)
            ) * 0x1bbdd7b1 + (uVar16 + 0x3c071849 & uVar16) + uVar17 +
           (uVar29 ^ uVar19) + ((uVar22 ^ uVar30 ^ (uVar30 ^ uVar22) & uVar19) & uVar29) * -2);
LAB_180012864:
  return uVar50 & 0xffffffffffffff01;
}



