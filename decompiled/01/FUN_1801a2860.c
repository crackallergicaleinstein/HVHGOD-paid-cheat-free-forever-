// FUN_1801a2860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a2860 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a2860(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined *puVar16;
  undefined1 auVar17 [15];
  char cVar18;
  int iVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  code *pcVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  undefined1 *puVar28;
  undefined2 *puVar29;
  longlong *plVar30;
  ushort *puVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  longlong *plVar35;
  longlong lVar36;
  uint uVar37;
  uint uVar38;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined1 auStack_598 [32];
  uint local_578;
  undefined1 *local_570;
  undefined1 *local_568;
  undefined1 local_560 [16];
  undefined8 local_550;
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined1 local_530 [16];
  int local_520;
  ushort *local_518;
  ulonglong local_510;
  ulonglong *local_508;
  longlong *local_500;
  ulonglong *local_4f8;
  undefined *local_4f0;
  longlong local_4e8;
  ulonglong *local_4e0;
  undefined1 local_4d8 [16];
  undefined1 local_4c8;
  undefined7 uStack_4c7;
  undefined8 uStack_4c0;
  undefined1 local_4b8 [24];
  undefined1 local_4a0 [16];
  undefined8 local_490;
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  ulonglong local_440;
  longlong local_438;
  undefined1 local_430 [24];
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined1 local_400 [8];
  undefined1 *local_3f8;
  undefined1 *local_3f0;
  undefined1 *local_3e8;
  undefined1 *local_3e0;
  undefined1 *local_3d8;
  undefined1 *local_3d0;
  undefined1 *local_3c8;
  undefined1 *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 local_390;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined8 local_378;
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 *local_350;
  undefined1 *local_348;
  undefined1 local_340 [24];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined1 local_310 [32];
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined1 local_21c [16];
  ulonglong local_20c;
  undefined1 local_200 [16];
  undefined1 local_1f0 [24];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined1 local_1c0 [8];
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  ulonglong local_1a8;
  undefined1 local_1a0 [16];
  undefined8 uStack_190;
  undefined8 uStack_188;
  uint local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined1 auStack_f8 [16];
  undefined4 local_e8;
  undefined1 local_e4 [16];
  ulonglong local_d4;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_a8 [20];
  undefined1 local_94;
  longlong local_93;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_598;
  local_578 = 1;
  local_488 = (undefined1  [16])0x0;
  local_448 = param_1;
  local_378 = param_1;
  FUN_1800f4e90(0,local_488,0,1);
  uVar37 = 5;
  local_578 = 5;
  local_4d8 = (undefined1  [16])0x0;
  FUN_18019a380(local_4d8);
  lVar36 = local_4d8._0_8_;
  if (local_4d8._0_8_ == 0) {
    plVar33 = (longlong *)local_4d8._8_8_;
    if ((longlong *)local_4d8._8_8_ == (longlong *)0x0) {
    }
    LOCK();
    plVar30 = (longlong *)(local_4d8._8_8_ + 8);
    lVar36 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar36 != 1) {
    }
    (*(code *)**(undefined8 **)local_4d8._8_8_)(local_4d8._8_8_);
    LOCK();
    piVar1 = (int *)((longlong)plVar33 + 0xc);
    iVar19 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar19 != 1) {
    }
    pcVar24 = *(code **)(*plVar33 + 8);
  }
  else {
    local_c8 = (undefined1  [16])0x0;
    local_b8 = 0;
    local_4f0 = &DAT_1808da720;
    iVar19 = FUN_1805f68d0(&DAT_1808da720);
    if (iVar19 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808da76c == 0x7fffffff) {
      DAT_1808da76c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_1801780e0(local_c8,DAT_180bbe908,DAT_180bbe910 - DAT_180bbe908 >> 3);
    FUN_1805f68fc(&DAT_1808da720);
    local_4e0 = (ulonglong *)local_c8._0_8_;
    local_4f8 = (ulonglong *)local_c8._8_8_;
    if (local_c8._0_8_ != local_c8._8_8_) {
      local_440 = 0xcbf29ce484222325;
      local_438 = 0x100000001b3;
      auVar42 = ZEXT1664(_DAT_18086d370);
      uVar45 = 0x3f80000000000000;
      uVar46 = 0;
      uVar44 = 0x3c23d70a;
      auVar41 = ZEXT864(0);
      uVar43 = 0x3f800000;
      puVar27 = (ulonglong *)local_c8._8_8_;
      do {
        uVar26 = *local_4e0;
        if (uVar26 != *(ulonglong *)(lVar36 + 0x88)) {
          uVar25 = ((((((((uVar26 & 0xff ^ local_440) * local_438 ^ uVar26 >> 8 & 0xff) *
                         0x100000001b3 ^ uVar26 >> 0x10 & 0xff) * 0x100000001b3 ^
                       uVar26 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar26 >> 0x20 & 0xff) *
                      0x100000001b3 ^ uVar26 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar26 >> 0x30 & 0xff
                    ) * 0x100000001b3 ^ uVar26 >> 0x38) * 0x100000001b3 &
                   *(ulonglong *)(lVar36 + 0x78);
          lVar32 = *(longlong *)(*(longlong *)(lVar36 + 0x60) + 8 + uVar25 * 0x10);
          lVar6 = *(longlong *)(lVar36 + 0x50);
          if (lVar32 == lVar6) {
LAB_1801a2b11:
            lVar32 = 0;
          }
          else {
            uVar34 = *(ulonglong *)(lVar32 + 0x10);
            while (uVar26 != uVar34) {
              if (lVar32 == *(longlong *)(*(longlong *)(lVar36 + 0x60) + uVar25 * 0x10))
              goto LAB_1801a2b11;
              lVar32 = *(longlong *)(lVar32 + 8);
              uVar34 = *(ulonglong *)(lVar32 + 0x10);
            }
          }
          if (lVar32 == 0) {
            lVar32 = lVar6;
          }
          if (lVar32 != lVar6) {
            lVar36 = *(longlong *)(lVar32 + 0x18);
            plVar33 = &local_93;
            do {
              plVar33 = (longlong *)((longlong)plVar33 + -1);
              uVar25 = uVar26 / 10;
              *(char *)plVar33 = (char)uVar26 + (char)uVar25 * -10 + '0';
              uVar26 = uVar25;
            } while (uVar25 != 0);
            FUN_18015bdb0(local_310,plVar33,&local_93);
            uVar37 = uVar37 | 0x60;
            local_578 = uVar37;
            local_4f0 = (undefined *)FUN_1800f43d0(param_1,local_310);
            local_520 = 0;
            local_380 = local_418;
            local_388 = local_548;
            local_348 = local_1d8;
            local_350 = local_4a0;
            local_500 = (longlong *)(lVar36 + 8);
            local_518 = (ushort *)(lVar36 + 0x80);
            local_508 = (ulonglong *)(lVar36 + 0x98);
            local_510 = lVar36 + 0x88;
            local_4e8 = lVar36 + 200;
            do {
              lVar36 = local_4e8;
              puVar16 = local_4f0;
              puVar27 = local_508;
              puVar31 = local_518;
              puVar28 = &DAT_1806bdfcc;
              if (local_520 != 0) {
                puVar28 = &DAT_1806be004;
              }
              local_3a8 = (undefined1  [16])0x0;
              local_398 = 0;
              local_390 = 0;
              lVar32 = -1;
              do {
                lVar32 = lVar32 + 1;
              } while (puVar28[lVar32] != '\0');
              FUN_18015ba30(local_3a8);
              puVar28 = (undefined1 *)FUN_1800f43d0(puVar16,local_3a8);
              FUN_1800e60e0(local_430,"model");
              local_418 = ZEXT816(0);
              FUN_1801409d0(local_418 + 8,0);
              local_418[0] = 3;
              uVar20 = FUN_18013f1a0();
              local_418._8_8_ = uVar20;
              local_408 = 0;
              local_3f8 = local_430;
              local_3f0 = local_400;
              FUN_1800f4e90(&local_1b8,&local_3f8,1,2);
              local_1a8 = 0;
              FUN_1800e60e0(local_560,"character");
              local_548 = ZEXT816(0);
              FUN_1801409d0(local_548 + 8,0);
              local_548[0] = 3;
              uVar20 = FUN_18013f1a0();
              local_548._8_8_ = uVar20;
              local_538 = 0;
              local_3e8 = local_560;
              local_3e0 = local_530;
              FUN_1800f4e90(local_1a0,&local_3e8,1,2);
              uStack_190 = 0;
              FUN_1800e60e0(local_1f0,"gloves");
              local_1d8 = ZEXT816(0);
              FUN_1801409d0(local_1d8 + 8,0);
              local_1d8[0] = 3;
              uVar20 = FUN_18013f1a0();
              local_1d8._8_8_ = uVar20;
              local_1c8 = 0;
              local_3d8 = local_1f0;
              local_3d0 = local_1c0;
              FUN_1800f4e90(&uStack_188,&local_3d8,1,2);
              uStack_178 = 0;
              uStack_174 = 0;
              FUN_1800e60e0(local_4b8,"knife");
              local_4a0 = ZEXT816(0);
              FUN_1801409d0(local_4a0 + 8,0);
              local_4a0[0] = 3;
              uVar20 = FUN_18013f1a0();
              local_4a0._8_8_ = uVar20;
              local_490 = 0;
              local_3c8 = local_4b8;
              local_3c0 = local_488;
              FUN_1800f4e90(&local_170,&local_3c8,1,2);
              auStack_168._8_8_ = 0;
              FUN_1800e60e0(local_340,"items");
              local_a8._0_16_ = (undefined1  [16])0x0;
              FUN_1800f4e90(&local_4c8,local_a8,0,1);
              uVar38 = uVar37 | 2;
              local_328 = CONCAT71(uStack_4c7,local_4c8);
              uStack_320 = uStack_4c0;
              local_4c8 = 0;
              uStack_4c0 = 0;
              local_318 = 0;
              local_3b8 = local_340;
              local_3b0 = local_310;
              local_578 = uVar38;
              FUN_1800f4e90(&uStack_158,&local_3b8,1,2);
              uStack_148 = 0;
              local_488._8_8_ = &uStack_140;
              local_488._0_8_ = &local_1b8;
              puVar21 = (undefined1 *)FUN_1800f4e90(local_370,local_488,1,2);
              uVar3 = *puVar28;
              *puVar28 = *puVar21;
              *puVar21 = uVar3;
              uVar20 = *(undefined8 *)(puVar28 + 8);
              puVar2 = (undefined8 *)(puVar21 + 8);
              *(undefined8 *)(puVar28 + 8) = *puVar2;
              *puVar2 = uVar20;
              FUN_1801409d0(puVar2,*puVar21);
              _eh_vector_destructor_iterator_(&local_1b8,0x18,5,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_340,0x18,2,FUN_1800aab30);
              FUN_1801409d0(&uStack_4c0,local_4c8);
              _eh_vector_destructor_iterator_(local_4b8,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_1f0,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_560,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_430,0x18,2,FUN_1800aab30);
              if (*puVar27 == 0) {
                uVar4 = *puVar31;
                uVar26 = ((ulonglong)(uVar4 >> 8) ^
                         ((ulonglong)uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                         0x100000001b3 & DAT_180cc9cb8;
                lVar36 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar26 * 0x10);
                if (lVar36 == DAT_180cc9c90) {
LAB_1801a33c4:
                  lVar36 = 0;
                }
                else {
                  uVar5 = *(ushort *)(lVar36 + 0x10);
                  while (uVar4 != uVar5) {
                    if (lVar36 == *(longlong *)(DAT_180cc9ca0 + uVar26 * 0x10)) goto LAB_1801a33c4;
                    lVar36 = *(longlong *)(lVar36 + 8);
                    uVar5 = *(ushort *)(lVar36 + 0x10);
                  }
                }
                lVar32 = DAT_180cc9c90;
                if (lVar36 != 0) {
                  lVar32 = lVar36;
                }
                if (((lVar32 != DAT_180cc9c90) &&
                    (puVar29 = (undefined2 *)(*(longlong *)(lVar32 + 0x18) * 0xb8 + DAT_180cc9bf8),
                    puVar29 != (undefined2 *)0x0)) && (*(char *)(puVar29 + 0x58) == '\x03')) {
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_1ac = 0;
                  local_1a8 = local_1a8 & 0xffffffff00000000;
                  local_1a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
                  auVar17 = (undefined1  [15])local_1a0._1_15_;
                  local_180 = local_180 & 0xffffff00;
                  uStack_17c = 0xffffffff;
                  uStack_178 = 0xffffffff;
                  uStack_174 = 0xffffffff;
                  uVar39 = auVar41._0_4_;
                  local_170 = (ulonglong)uVar39 << 0x20;
                  auStack_f8 = auVar42._0_16_;
                  uStack_158 = 0xffffffff;
                  local_150 = CONCAT44(uVar43,uVar39);
                  uStack_148 = CONCAT44(uVar39,uVar39);
                  uStack_140 = CONCAT44(0xffffffff,uVar39);
                  lStack_138 = (ulonglong)uVar39 << 0x20;
                  local_130 = CONCAT44(uVar39,uVar43);
                  uStack_128 = CONCAT44(uVar39,uVar39);
                  uStack_120 = 0xffffffff;
                  uStack_108 = CONCAT44(0xffffffff,uVar39);
                  lStack_100 = (ulonglong)uVar39 << 0x20;
                  local_e8 = 0xffffffff;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = local_e4._8_8_;
                  local_e4 = auVar7 << 0x40;
                  local_cc = 0;
                  local_2f0 = 0;
                  local_2e8 = 0;
                  local_2e4 = 0;
                  local_2e0 = 0;
                  local_1a0._8_8_ = SUB168((undefined1  [16])0x0,8);
                  local_2d8 = 0;
                  uStack_2d0 = local_1a0._8_8_;
                  uStack_2c8 = 0;
                  uStack_2c0 = 0xf;
                  uStack_190 = 0;
                  uStack_188 = 0xf;
                  auVar40[0xf] = 0;
                  auVar40._0_15_ = auVar17;
                  local_1a0 = auVar40 << 8;
                  local_2b8 = CONCAT44(0xffffffff,local_180);
                  uStack_2b0 = 0xffffffffffffffff;
                  auStack_168._0_8_ = auVar42._0_8_;
                  auStack_168._8_8_ = auVar42._8_8_;
                  local_2a8 = local_170;
                  uStack_2a0 = auStack_168._0_8_;
                  uStack_298 = auStack_168._8_8_;
                  uStack_290 = 0xffffffff;
                  local_288 = local_150;
                  uStack_280 = uStack_148;
                  uStack_278 = uStack_140;
                  lStack_270 = lStack_138;
                  local_268 = local_130;
                  uStack_260 = uStack_128;
                  uStack_258 = 0xffffffff;
                  uStack_240 = uStack_108;
                  lStack_238 = lStack_100;
                  uStack_230 = auStack_168._0_8_;
                  local_228 = vmovhpd_avx(auStack_f8);
                  local_220 = 0xffffffff;
                  auVar40 = auVar41._0_16_;
                  auVar7 = vinsertps_avx(local_e4,auVar40,0x20);
                  local_21c = vinsertps_avx(auVar7,auVar40,0x30);
                  local_20c = CONCAT44((int)(local_d4 >> 0x20),uVar39) & 0xffffff00ffffffff;
                  auVar41 = ZEXT1664(auVar40);
                  auVar42 = ZEXT1664(auStack_f8);
                  local_2ec = uVar44;
                  uStack_250 = uVar45;
                  local_248 = uVar46;
                  local_1b4 = uVar44;
                  auStack_168 = auStack_f8;
                  uStack_118 = uVar45;
                  uStack_110 = uVar46;
                  local_e4 = local_21c;
                  local_d4 = local_20c;
                  uVar26 = FUN_18021adc0(lVar32,*puVar29,&local_2f0);
                  FUN_18015c010(local_1a0);
                  if (uVar26 != 0) {
                    local_568 = local_360;
                    plVar33 = &local_93;
                    do {
                      plVar33 = (longlong *)((longlong)plVar33 + -1);
                      uVar25 = uVar26 / 10;
                      *(char *)plVar33 = (char)uVar26 + (char)uVar25 * -10 + '0';
                      uVar26 = uVar25;
                    } while (uVar25 != 0);
                    FUN_18015bdb0(local_1f0,plVar33,&local_93);
                    local_578 = uVar37 | 0x182;
                    puVar21 = (undefined1 *)FUN_1800e6ec0(local_360,local_1f0);
                    local_560 = (undefined1  [16])0x0;
                    local_550 = 0;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = local_548._8_8_;
                    local_548 = auVar11 << 0x40;
                    FUN_18015ba30(local_560,"character",9);
                    puVar22 = (undefined1 *)FUN_1800f43d0(puVar28,local_560);
                    uVar3 = *puVar22;
                    *puVar22 = *puVar21;
                    *puVar21 = uVar3;
                    uVar20 = *(undefined8 *)(puVar22 + 8);
                    puVar2 = (undefined8 *)(puVar21 + 8);
                    *(undefined8 *)(puVar22 + 8) = *puVar2;
                    *puVar2 = uVar20;
                    FUN_1801409d0(puVar2,*puVar21);
                    FUN_18015c010(local_1f0);
                    puVar31 = local_518;
                    uVar38 = uVar37 | 0x182;
                  }
                }
              }
              else {
                cVar18 = FUN_18017f370(lVar36);
                if (cVar18 == '\0') {
                  local_a8._0_16_ = (undefined1  [16])0x0;
                  plVar33 = (longlong *)FUN_180113860(&DAT_180bb9388);
                  lVar36 = DAT_180bb9380;
                  local_a8._8_8_ = plVar33;
                  local_a8._0_8_ = DAT_180bb9380;
                  if (plVar33 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar33 + 1) = (int)plVar33[1] + 1;
                    UNLOCK();
                  }
                  LOCK();
                  UNLOCK();
                  bVar8 = (byte)DAT_180bb9388;
                  DAT_180bb9388 = (longlong)plVar33;
                  if ((bVar8 & 3) == 2) {
                    FUN_1805fa36c();
                  }
                  uVar26 = local_510;
                  if (0xf < puVar27[1]) {
                    uVar26 = puVar27[-2];
                  }
                  uVar25 = 0;
                  uVar34 = 0xcbf29ce484222325;
                  if (*puVar27 != 0) {
                    do {
                      uVar34 = (uVar34 ^ *(byte *)(uVar26 + uVar25)) * 0x100000001b3;
                      uVar25 = uVar25 + 1;
                    } while (uVar25 < *puVar27);
                  }
                  lVar32 = FUN_180177b00(lVar36 + 0x50,local_200,local_510,uVar34);
                  lVar32 = *(longlong *)(lVar32 + 8);
                  if (((lVar32 != 0) && (lVar32 != *(longlong *)(lVar36 + 0x58))) &&
                     (cVar18 = FUN_1801efc70(*(longlong *)(lVar32 + 0x30) * 0xd8 +
                                             *(longlong *)(lVar36 + 0x38)), cVar18 != '\0')) {
                    local_568 = local_530;
                    lVar32 = *(longlong *)(lVar32 + 0x30);
                    lVar36 = *(longlong *)(lVar36 + 0x38);
                    local_530 = ZEXT816(0);
                    FUN_1801409d0(local_530 + 8,0);
                    local_530[0] = 3;
                    FUN_180111c50(&local_470,lVar32 * 0xd8 + lVar36 + 0x40);
                    local_530._8_8_ = local_470;
                    local_560 = (undefined1  [16])0x0;
                    local_550 = 0;
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = local_548._8_8_;
                    local_548 = auVar10 << 0x40;
                    FUN_18015ba30(local_560,"model",5);
                    puVar21 = (undefined1 *)FUN_1800f43d0(puVar28,local_560);
                    auVar7 = local_530;
                    uVar3 = *puVar21;
                    *puVar21 = local_530[0];
                    local_530[0] = uVar3;
                    auVar40 = local_530;
                    uVar20 = *(undefined8 *)(puVar21 + 8);
                    local_530._8_8_ = auVar7._8_8_;
                    *(undefined8 *)(puVar21 + 8) = local_530._8_8_;
                    local_530._0_8_ = auVar40._0_8_;
                    local_530._8_8_ = uVar20;
                    FUN_1801409d0(local_530 + 8,uVar3);
                  }
                  puVar31 = local_518;
                  if (plVar33 != (longlong *)0x0) {
                    LOCK();
                    plVar30 = plVar33 + 1;
                    lVar36 = *plVar30;
                    *(int *)plVar30 = (int)*plVar30 + -1;
                    UNLOCK();
                    if ((int)lVar36 == 1) {
                      (**(code **)*plVar33)(plVar33);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar33 + 0xc);
                      iVar19 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      puVar31 = local_518;
                      if (iVar19 == 1) {
                        (**(code **)(*plVar33 + 8))(plVar33);
                        puVar31 = local_518;
                      }
                    }
                  }
                }
                else {
                  FUN_1801950a0(extraout_XMM0_Qa,&local_1b8,lVar36);
                  if ((local_e4[4] != '\0') && (cVar18 = FUN_1801f0600(&local_1b8), cVar18 != '\0'))
                  {
                    local_570 = local_a8;
                    local_a8._0_16_ = ZEXT816(0);
                    FUN_1801409d0(local_a8 + 8,0);
                    local_a8[0] = 3;
                    FUN_180111c50(&local_478,&uStack_178);
                    local_a8._8_8_ = local_478;
                    local_560 = (undefined1  [16])0x0;
                    local_550 = 0;
                    auVar9._8_8_ = 0;
                    auVar9._0_8_ = local_548._8_8_;
                    local_548 = auVar9 << 0x40;
                    FUN_18015ba30(local_560,"model",5);
                    puVar21 = (undefined1 *)FUN_1800f43d0(puVar28,local_560);
                    auVar7 = (undefined1  [16])local_a8._0_16_;
                    uVar3 = *puVar21;
                    *puVar21 = local_a8[0];
                    local_a8[0] = uVar3;
                    auVar40 = (undefined1  [16])local_a8._0_16_;
                    uVar20 = *(undefined8 *)(puVar21 + 8);
                    local_a8._8_8_ = auVar7._8_8_;
                    *(undefined8 *)(puVar21 + 8) = local_a8._8_8_;
                    local_a8._0_8_ = auVar40._0_8_;
                    local_a8._8_8_ = uVar20;
                    FUN_1801409d0(local_a8 + 8,uVar3);
                  }
                  FUN_1801ab310(&local_1b8);
                }
              }
              uVar37 = uVar38;
              plVar33 = (longlong *)*local_500;
              plVar30 = (longlong *)*plVar33;
              if (plVar30 != plVar33) {
                do {
                  uVar4 = *(ushort *)(plVar30 + 2);
                  uVar26 = (((ulonglong)uVar4 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                           (ulonglong)(uVar4 >> 8)) * 0x100000001b3 & DAT_180cc9cb8;
                  lVar36 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar26 * 0x10);
                  if (lVar36 == DAT_180cc9c90) {
LAB_1801a3808:
                    lVar36 = 0;
                  }
                  else {
                    uVar5 = *(ushort *)(lVar36 + 0x10);
                    while (uVar4 != uVar5) {
                      if (lVar36 == *(longlong *)(DAT_180cc9ca0 + uVar26 * 0x10))
                      goto LAB_1801a3808;
                      lVar36 = *(longlong *)(lVar36 + 8);
                      uVar5 = *(ushort *)(lVar36 + 0x10);
                    }
                  }
                  lVar32 = DAT_180cc9c90;
                  if (lVar36 != 0) {
                    lVar32 = lVar36;
                  }
                  if ((((lVar32 != DAT_180cc9c90) &&
                       (lVar36 = *(longlong *)(lVar32 + 0x18) * 0xb8 + DAT_180cc9bf8, lVar36 != 0))
                      && (*(char *)(lVar36 + 0xb0) != '\x04')) &&
                     (*(char *)(lVar36 + 0xb0) != '\x03')) {
                    uVar20 = FUN_18019f170(&local_2f0,plVar30 + 3);
                    uVar26 = FUN_18021adc0(extraout_XMM0_Qa_00,(short)plVar30[2],uVar20);
                    if (uVar26 != 0) {
                      plVar35 = &local_93;
                      do {
                        plVar35 = (longlong *)((longlong)plVar35 + -1);
                        uVar25 = uVar26 / 10;
                        *(char *)plVar35 = (char)uVar26 + (char)uVar25 * -10 + '0';
                        uVar26 = uVar25;
                      } while (uVar25 != 0);
                      FUN_18015bdb0(local_1f0,plVar35,&local_93);
                      uVar37 = uVar37 | 0x18;
                      local_578 = uVar37;
                      if (*(char *)(lVar36 + 0xb0) == '\x02') {
                        local_568 = local_a8;
                        local_a8._0_16_ = ZEXT816(0);
                        FUN_1801409d0(local_a8 + 8,0);
                        local_a8[0] = 3;
                        FUN_180111c50(&local_468,local_1f0);
                        local_a8._8_8_ = local_468;
                        local_560 = (undefined1  [16])0x0;
                        local_550 = 0;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = local_548._8_8_;
                        local_548 = auVar12 << 0x40;
                        FUN_18015ba30(local_560,"gloves",6);
                        puVar21 = (undefined1 *)FUN_1800f43d0(puVar28,local_560);
                        auVar7 = (undefined1  [16])local_a8._0_16_;
                        uVar3 = *puVar21;
                        *puVar21 = local_a8[0];
                        local_a8[0] = uVar3;
                        auVar40 = (undefined1  [16])local_a8._0_16_;
                        uVar20 = *(undefined8 *)(puVar21 + 8);
                        local_a8._8_8_ = auVar7._8_8_;
                        *(undefined8 *)(puVar21 + 8) = local_a8._8_8_;
                        local_a8._0_8_ = auVar40._0_8_;
                        local_a8._8_8_ = uVar20;
                        FUN_1801409d0(local_a8 + 8,uVar3);
                      }
                      else {
                        local_568 = local_a8;
                        if (*(char *)(lVar36 + 0xb0) == '\x01') {
                          local_a8._0_16_ = ZEXT816(0);
                          FUN_1801409d0(local_a8 + 8,0);
                          local_a8[0] = 3;
                          FUN_180111c50(&local_460,local_1f0);
                          local_a8._8_8_ = local_460;
                          local_560 = (undefined1  [16])0x0;
                          local_550 = 0;
                          auVar13._8_8_ = 0;
                          auVar13._0_8_ = local_548._8_8_;
                          local_548 = auVar13 << 0x40;
                          FUN_18015ba30(local_560,"knife",5);
                          puVar21 = (undefined1 *)FUN_1800f43d0(puVar28,local_560);
                          auVar7 = (undefined1  [16])local_a8._0_16_;
                          uVar3 = *puVar21;
                          *puVar21 = local_a8[0];
                          local_a8[0] = uVar3;
                          auVar40 = (undefined1  [16])local_a8._0_16_;
                          uVar20 = *(undefined8 *)(puVar21 + 8);
                          local_a8._8_8_ = auVar7._8_8_;
                          *(undefined8 *)(puVar21 + 8) = local_a8._8_8_;
                          local_a8._0_8_ = auVar40._0_8_;
                          local_a8._8_8_ = uVar20;
                          FUN_1801409d0(local_a8 + 8,uVar3);
                        }
                        else {
                          local_a8._0_16_ = ZEXT816(0);
                          FUN_1801409d0(local_a8 + 8,0);
                          local_a8[0] = 3;
                          FUN_180111c50(&local_458,local_1f0);
                          local_a8._8_8_ = local_458;
                          local_560 = (undefined1  [16])0x0;
                          local_550 = 0;
                          auVar14._8_8_ = 0;
                          auVar14._0_8_ = local_548._8_8_;
                          local_548 = auVar14 << 0x40;
                          FUN_18015ba30(local_560,"items",5);
                          uVar20 = FUN_1800f43d0(puVar28,local_560);
                          uVar23 = FUN_18015b360(local_4b8,lVar36 + 0x28);
                          puVar21 = (undefined1 *)FUN_1800f43d0(uVar20,uVar23);
                          auVar7 = (undefined1  [16])local_a8._0_16_;
                          uVar3 = *puVar21;
                          *puVar21 = local_a8[0];
                          local_a8[0] = uVar3;
                          auVar40 = (undefined1  [16])local_a8._0_16_;
                          uVar20 = *(undefined8 *)(puVar21 + 8);
                          local_a8._8_8_ = auVar7._8_8_;
                          *(undefined8 *)(puVar21 + 8) = local_a8._8_8_;
                          local_a8._0_8_ = auVar40._0_8_;
                          local_a8._8_8_ = uVar20;
                          FUN_1801409d0(local_a8 + 8,uVar3);
                          local_568 = local_a8;
                          local_a8._0_16_ = ZEXT816(0);
                          FUN_1801409d0(local_a8 + 8,0);
                          local_a8[0] = 3;
                          FUN_180111c50(&local_450,local_1f0);
                          local_a8._8_8_ = local_450;
                          local_560 = (undefined1  [16])0x0;
                          local_550 = 0;
                          auVar15._8_8_ = 0;
                          auVar15._0_8_ = local_548._8_8_;
                          local_548 = auVar15 << 0x40;
                          FUN_18015ba30(local_560,"items",5);
                          uVar20 = FUN_1800f43d0(puVar28,local_560);
                          uVar23 = FUN_18015b360(local_4b8,lVar36 + 8);
                          puVar21 = (undefined1 *)FUN_1800f43d0(uVar20,uVar23);
                          auVar7 = (undefined1  [16])local_a8._0_16_;
                          uVar3 = *puVar21;
                          *puVar21 = local_a8[0];
                          local_a8[0] = uVar3;
                          auVar40 = (undefined1  [16])local_a8._0_16_;
                          uVar20 = *(undefined8 *)(puVar21 + 8);
                          local_a8._8_8_ = auVar7._8_8_;
                          *(undefined8 *)(puVar21 + 8) = local_a8._8_8_;
                          local_a8._0_8_ = auVar40._0_8_;
                          local_a8._8_8_ = uVar20;
                          FUN_1801409d0(local_a8 + 8,uVar3);
                        }
                      }
                      FUN_18015c010(local_1f0);
                    }
                  }
                  plVar30 = (longlong *)*plVar30;
                } while (plVar30 != plVar33);
                puVar31 = local_518;
              }
              local_520 = local_520 + 1;
              local_4e8 = local_4e8 + 0x48;
              local_510 = local_510 + 0x20;
              local_518 = puVar31 + 1;
              local_508 = local_508 + 4;
              local_500 = local_500 + 8;
            } while (local_520 < 2);
            lVar36 = local_4d8._0_8_;
            param_1 = local_448;
          }
          puVar27 = local_4f8;
        }
        local_4e0 = local_4e0 + 1;
      } while (local_4e0 != puVar27);
    }
    FUN_1800f0160(local_c8);
    plVar33 = (longlong *)local_4d8._8_8_;
    if ((longlong *)local_4d8._8_8_ == (longlong *)0x0) {
    }
    LOCK();
    plVar30 = (longlong *)(local_4d8._8_8_ + 8);
    lVar36 = *plVar30;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)lVar36 != 1) {
    }
    (*(code *)**(undefined8 **)local_4d8._8_8_)(local_4d8._8_8_);
    LOCK();
    piVar1 = (int *)((longlong)plVar33 + 0xc);
    iVar19 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar19 != 1) {
    }
    pcVar24 = *(code **)(*plVar33 + 8);
  }
  (*pcVar24)(plVar33);
                    /* WARNING: Read-only address (ram,0x00018086d370) is written */
}



