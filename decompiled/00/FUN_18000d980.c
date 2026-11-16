// FUN_18000d980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18000d980 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_18000d980(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_3f8 [32];
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined **local_3c8;
  uint local_3c0;
  undefined4 local_3b8;
  uint local_3b0;
  undefined4 local_3a8;
  uint local_3a0;
  undefined **local_398;
  undefined *local_390;
  undefined4 *local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  undefined8 local_370;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  uint local_344;
  ulonglong local_340;
  ulonglong local_338;
  ulonglong local_330;
  undefined8 local_328;
  undefined8 local_320;
  int *local_318;
  ulonglong *local_310;
  ulonglong *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2f0 [15];
  undefined1 local_2e1;
  undefined1 local_2e0 [8];
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [4];
  undefined1 local_2cc;
  undefined1 local_2cb;
  undefined1 local_2ca;
  undefined1 local_2c9;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  ulonglong local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  uint local_234;
  undefined4 local_230;
  uint local_22c;
  undefined8 local_228;
  undefined4 local_220;
  uint local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  uint local_20c;
  undefined4 local_208;
  uint local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  uint local_1f8;
  int local_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
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
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_3f8;
  local_360 = (uint)&local_2c9 ^ 0xd1768c64;
  uVar1 = (uint)&local_2ca;
  local_358 = uVar1 ^ 0x8037b80c;
  uVar2 = (uint)&local_2cb;
  local_354 = uVar2 ^ 0xda874559;
  uVar3 = (uint)&local_2cc;
  local_35c = uVar3 ^ 0x4f9ffcae;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_2f8 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_350 = 0xf545d5a7;
LAB_18000dc3e:
  do {
    while (-0x29a863ac < (int)local_350) {
      if (local_350 == 0xd6579c55) {
        *local_310 = local_340 & local_338 | local_340 ^ local_338;
        local_2a0 = 0xb2dc70c730b18c30;
        local_298 = CONCAT44((uVar3 ^ 0xdaf7053e) & (uVar3 ^ 0xf7601cd7) |
                             (uVar3 ^ 0x89fe328) & (uVar3 ^ 0x2508fac1),0x4ad6ed68);
        local_290 = CONCAT44(0xe6e0f612,
                             (uVar3 ^ 0x326cb2b9) & (uVar3 ^ 0x8f18216a) |
                             (uVar3 ^ 0x70e7de95) & (uVar3 ^ 0xcd934d46));
        local_288 = CONCAT44((uVar3 ^ 0x6f8846ff) & (uVar3 ^ 0xa94d4c1d) |
                             (uVar3 ^ 0x56b2b3e2) & (uVar3 ^ 0x9077b900),
                             (uVar3 ^ 0xe0b677c3) & (uVar3 ^ 0x8c344cdd) |
                             (uVar3 ^ 0x73cbb322) & (uVar3 ^ 0x1f49883c));
        local_280 = CONCAT44((uVar3 ^ 0xb53d8256) & (uVar3 ^ 0x5ba24494) |
                             (uVar3 ^ 0xa45dbb6b) & (uVar3 ^ 0x4ac27da9),
                             (uVar3 ^ 0xef9abbf2) & (uVar3 ^ 0x72588f6) |
                             (uVar3 ^ 0xf8da7709) & (uVar3 ^ 0x1065440d));
        local_278 = CONCAT44((uVar3 ^ 0xa7123144) & (uVar3 ^ 0xab234a83) |
                             (uVar3 ^ 0x54dcb57c) & (uVar3 ^ 0x58edcebb),
                             (uVar3 ^ 0xab6c5a59) & (uVar3 ^ 0xb05ae121) |
                             (uVar3 ^ 0x4fa51ede) & (uVar3 ^ 0x5493a5a6));
        local_270 = CONCAT44((uVar3 ^ 0x7c57c908) & (uVar3 ^ 0x52fbaf99) |
                             (uVar3 ^ 0xad045066) & (uVar3 ^ 0x83a836f7),
                             (uVar3 ^ 0x3f7ca46f) & (uVar3 ^ 0x82f4f98a) |
                             (uVar3 ^ 0x7d0b0675) & (uVar3 ^ 0xc0835b90));
        local_268 = CONCAT44((uVar3 ^ 0xfba6bc21) & (uVar3 ^ 0xbc3263e) |
                             (uVar3 ^ 0xf43cd9c1) & (uVar3 ^ 0x45943de),0xc5fba944);
        local_260 = CONCAT44((uVar3 ^ 0x9d90c052) & (uVar3 ^ 0x7f8984c7) |
                             (uVar3 ^ 0x80767b38) & (uVar3 ^ 0x626f3fad),
                             (uVar3 ^ 0xb5375bb7) & (uVar3 ^ 0x5e9dbbc3) |
                             (uVar3 ^ 0xa162443c) & (uVar3 ^ 0x4ac8a448));
        local_330 = (ulonglong)
                    ((uVar3 ^ 0xecab686a) & (uVar3 ^ 0x18ed76c5) |
                    (uVar3 ^ 0xe712893a) & (uVar3 ^ 0x13549795));
        local_344 = (uVar3 ^ 0xc99bd41) & (uVar3 ^ 0xd2599535) |
                    (uVar3 ^ 0x2da66aca) & (uVar3 ^ 0xf36642be);
        uVar4 = (uVar2 ^ 0xafee850) * 0x6a517e35 >> 0xd ^ (uVar2 ^ 0xafee850) * 0x28bf1a80;
        uVar6 = (uVar2 ^ 0xafee850) * 0x6a517e35 >> 0xd ^ (uVar2 ^ 0xafee850) * 0x28bf1a80;
        uVar7 = 0x59365b3a;
        uVar5 = (uVar1 ^ 0xa58ff6c3) & (uVar1 ^ 0x53a6baa1) |
                (uVar1 ^ 0xac59455e) & (uVar1 ^ 0x5a70093c);
        local_308 = &local_258;
LAB_18000f5f3:
        if (uVar4 != uVar6) {
          uVar5 = uVar7;
        }
        local_350 = uVar5 ^ local_350;
      }
      else {
        if (local_350 != 0x4b170f2f) {
          if (local_350 == 0xdf812fc8) {
            *local_308 = (ulonglong)local_344 << 0x20 & local_330 |
                         local_330 ^ (ulonglong)local_344 << 0x20;
            local_250 = 0xe85898f238dfb446;
            local_300 = CONCAT44((uVar3 ^ 0x82449863) & (uVar3 ^ 0x6ffe6459) |
                                 (uVar3 ^ 0x90019ba6) & (uVar3 ^ 0x7dbb679c),0x47a686af);
            _uStack_100 = CONCAT44((uVar3 ^ 0x47347cb0) & (uVar3 ^ 0xabd1eabc) |
                                   (uVar3 ^ 0x542e1543) & (uVar3 ^ 0xb8cb834f),0xb5a61e41);
            local_188 = 0x393af51d937dc4e1;
            uStack_180 = CONCAT44(0x1160393d,
                                  (uVar3 ^ 0xfaa4838b) & (uVar3 ^ 0x121bb08e) |
                                  (uVar3 ^ 0xede44f71) & (uVar3 ^ 0x55b7c74));
            local_b8 = local_2d0;
            puStack_b0 = local_2d8;
            local_a8 = local_2e0;
            puStack_a0 = &local_2e1;
            local_98 = local_2f0;
            local_3c0 = (uVar3 ^ 0x83231d8c) & (uVar3 ^ 0xc9836f23) |
                        (uVar3 ^ 0x367c90dc) & (uVar3 ^ 0x7cdce273);
            local_3b8 = 0x1f;
            local_3b0 = (uVar3 ^ 0xf920cdf6) & (uVar3 ^ 0x6df3206) |
                        (uVar3 ^ 0xf920cdf9) & (uVar3 ^ 0x6df3209);
            local_3a0 = (uVar3 ^ 0x9ccfe25) & (uVar3 ^ 0xf63301d5) |
                        (uVar3 ^ 0x9ccfe2a) & (uVar3 ^ 0xf63301da);
            local_370 = 0x6b1420c7257f5ce3;
            local_378 = &local_300;
            local_380 = &local_2c8;
            local_388 = &local_248;
            local_390 = &DAT_180669720;
            local_398 = &PTR_LAB_180669730;
            local_3a8 = 0;
            local_3c8 = &PTR_FUN_1808d40d0;
            local_3d0 = &local_c8;
            local_3d8 = &local_2f8;
            local_328 = param_1;
            local_320 = param_2;
            local_c8 = param_1;
            uStack_c0 = param_2;
            (*(code *)(&PTR_LAB_180669730)
                      [(int)((uVar3 ^ 0x3d0db208) & (uVar3 ^ 0xc2f24d5f) |
                            (uVar3 ^ 0x3d0db2a0) & (uVar3 ^ 0xc2f24df7))])
                      (&DAT_180baccc0,
                       (uVar3 ^ 0xd0a0055d) & (uVar3 ^ 0x2f5ffa62) |
                       (uVar3 ^ 0xd0a0059d) & (uVar3 ^ 0x2f5ffaa2),&local_148,&local_1c8);
            if (DAT_1808d5f00 != (local_48 ^ (ulonglong)auStack_3f8)) {
            }
            return local_108._4_4_ ^
                   ((local_35c ^ 0xb3632d9f) & (local_35c ^ 0x6c55914b) |
                   (local_35c ^ 0x93aa6eb4) & (local_35c ^ 0x4c9cd260));
          }
          goto LAB_18000ee63;
        }
        uVar7 = (local_348 ^ 0xbeb35677) & (local_34c ^ 0xcd286ab9) |
                (local_34c ^ 0x32d79546) & (local_348 ^ 0x414ca988);
        uVar5 = (local_34c ^ local_348) * 0x4beba04f;
        *local_318 = (uVar5 | uVar7) * 2 - (uVar7 ^ uVar5);
        local_1f0 = 0x4dfa21fc;
        local_1ec = (uVar3 ^ 0x45a85d0e) & (uVar3 ^ 0x7c8ad917) |
                    (uVar3 ^ 0x837526e8) & (uVar3 ^ 0xba57a2f1);
        local_1e8 = (uVar3 ^ 0xec5a97a9) & (uVar3 ^ 0xc0543152) |
                    (uVar3 ^ 0x3fabcead) & (uVar3 ^ 0x13a56856);
        local_1e4 = (uVar3 ^ 0xfec66429) & (uVar3 ^ 0x5b0913b2) |
                    (uVar3 ^ 0xa4f6ec4d) & (uVar3 ^ 0x1399bd6);
        local_1e0 = (uVar3 ^ 0xca2b7221) & (uVar3 ^ 0xc75b59bc) |
                    (uVar3 ^ 0x38a4a643) & (uVar3 ^ 0x35d48dde);
        local_1dc = 0xa36febf5;
        local_1d8 = (uVar3 ^ 0xe298d13d) & (uVar3 ^ 0xf4935e9) |
                    (uVar3 ^ 0xf0b6ca16) & (uVar3 ^ 0x1d672ec2);
        local_1d4 = CONCAT44((uVar3 ^ 0x3858b6b5) & (uVar3 ^ 0x17f323fb) |
                             (uVar3 ^ 0xe80cdc04) & (uVar3 ^ 0xc7a7494a),
                             (uVar3 ^ 0x509f7995) & (uVar3 ^ 0x22a4cc1d) |
                             (uVar3 ^ 0xdd5b33e2) & (uVar3 ^ 0xaf60866a));
        local_1cc = 0x1c4c8dae;
        local_2c8 = CONCAT44((uVar3 ^ 0x719b4cbf) & (uVar3 ^ 0xebd897e9) |
                             (uVar3 ^ 0x14276816) & (uVar3 ^ 0x8e64b340),0x9893aab4);
        local_2c0 = 0x7c6560b11b146e6a;
        local_2b8 = 0x6f7bae30aab3653e;
        local_2b0 = CONCAT44(0xfee42ab1,
                             (uVar3 ^ 0x320f94f2) & (uVar3 ^ 0xa36a8fb6) |
                             (uVar3 ^ 0x5c957049) & (uVar3 ^ 0xcdf06b0d));
        local_340 = 0xbe9b6323;
        local_338 = (ulonglong)
                    ((uVar3 ^ 0xda1de00b) & (uVar3 ^ 0x3ed82d2a) |
                    (uVar3 ^ 0xc127d2d5) & (uVar3 ^ 0x25e21ff4)) << 0x20;
        local_350 = 0x9d40937a;
        if (((uVar2 ^ 0x71c96d0b) * -0x2fc56d80 ^ (uVar2 ^ 0x71c96d0b) * -0x1a5f8adb >> 0xd) !=
            ((uVar2 ^ 0x71c96d0b) * -0x1a5f8adb >> 0xd ^ (uVar2 ^ 0x71c96d0b) * -0x2fc56d80)) {
          local_350 = 0xc476c840;
        }
        local_350 = local_350 ^ 0x4b170f2f;
        local_310 = &local_2a8;
      }
    }
    if (local_350 == 0x8f61c76f) {
      uVar5 = (uVar1 ^ 0xb25dced9) & (uVar1 ^ 0x1d42d981) |
              (uVar1 ^ 0xe2bd267e) & (uVar1 ^ 0x4da23126);
    }
    else {
      if (local_350 != 0x9c722008) {
        if (local_350 != 0xa516a9f2) {
LAB_18000ee63:
          local_248 = 0x55d54630;
          local_244 = (undefined4)DAT_1806694a0;
          uStack_23c = DAT_1806694a0._8_4_;
          uStack_238 = DAT_1806694a0._12_4_;
          iStack_240 = -0x5ba64cce - DAT_1806694a0._4_4_;
          local_234 = (uVar3 ^ 0xdcc6942c) & (uVar3 ^ 0x9e3d1399) |
                      (uVar3 ^ 0x61c2ec66) & (uVar3 ^ 0x23396bd3);
          local_230 = 0x1b154b1c;
          local_22c = (uVar3 ^ 0x275bc7fa) & (uVar3 ^ 0x34314abc) |
                      (uVar3 ^ 0xcbceb543) & (uVar3 ^ 0xd8a43805);
          local_228 = 0x2421b8ae248337be;
          local_220 = 0xa51ccbc;
          local_21c = (uVar3 ^ 0x8c85beee) & (uVar3 ^ 0xc8817e6e) |
                      (uVar3 ^ 0x377e8191) & (uVar3 ^ 0x737a4111);
          local_218 = 0x23767bb0;
          local_214 = 0x5228fe0d;
          local_210 = 0xf7f5590e;
          local_20c = (uVar3 ^ 0x2d3fb707) & (uVar3 ^ 0xbf67477d) |
                      (uVar3 ^ 0x4098b882) & (uVar3 ^ 0xd2c048f8);
          local_208 = 0xb4b10af7;
          local_204 = (uVar3 ^ 0x74a1327c) & (uVar3 ^ 0xab978ea8) |
                      (uVar3 ^ 0x54687157) & (uVar3 ^ 0x8b5ecd83);
          local_200 = 0xb5a61e41;
          local_1fc = 0x131a69f3;
          local_1f8 = (uVar3 ^ 0x5c0026c5) & (uVar3 ^ 0x81e427b5) |
                      (uVar3 ^ 0x7e1bd84a) & (uVar3 ^ 0xa3ffd93a);
          uVar5 = (local_354 * 2 | 0x144e9ac0) - (uVar2 ^ 0xd0a00839) ^ 0xc0b77384;
          uVar4 = uVar5 * -0x356fc11b >> 0x15 | uVar5 * -0x7e08d800;
          uVar5 = (local_354 * 2 | 0x144e9ac0) - (uVar2 ^ 0xd0a00839) ^ 0xc0b77384;
          uVar6 = uVar5 * -0x356fc11b >> 0x15 | uVar5 * -0x7e08d800;
          uVar7 = (uVar1 ^ 0x4afcb31d) & (uVar1 ^ 0xcf275e2a) |
                  (uVar1 ^ 0x30d8a1d5) & (uVar1 ^ 0xb5034ce2);
          uVar5 = (uVar1 ^ 0x387f2af) & (uVar1 ^ 0x422ad7d8) |
                  (uVar1 ^ 0xbdd52827) & (uVar1 ^ 0xfc780d50);
          local_34c = local_35c;
          local_348 = local_35c;
          local_318 = &local_1f4;
          goto LAB_18000f5f3;
        }
        local_350 = 0x4b170f2f;
        goto LAB_18000dc3e;
      }
      uVar5 = 0x43f30fc0;
    }
    local_350 = uVar5 ^ local_350;
  } while( true );
}



