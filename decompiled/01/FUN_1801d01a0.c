// FUN_1801d01a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d01a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801d01a0(void)

{
  ulonglong uVar1;
  size_t sVar2;
  size_t sVar3;
  longlong ******pppppplVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  undefined1 (*pauVar17) [16];
  longlong lVar18;
  undefined8 uVar19;
  float *pfVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  longlong *******ppppppplVar26;
  longlong lVar27;
  longlong lVar28;
  undefined8 *puVar29;
  ulonglong *puVar30;
  char *_Buf1;
  ulonglong *puVar31;
  undefined8 *******pppppppuVar32;
  char *pcVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  ulonglong *puVar36;
  undefined1 auVar37 [8];
  undefined **ppuVar38;
  byte bVar39;
  longlong *plVar40;
  longlong *******ppppppplVar41;
  undefined4 uVar42;
  undefined8 *puVar43;
  undefined8 uVar44;
  uint uVar45;
  uint uVar46;
  bool bVar47;
  bool bVar48;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  float fVar53;
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [16];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [16];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [64];
  undefined1 auStackY_a88 [32];
  undefined1 local_a48 [8];
  longlong ******pppppplStack_a40;
  undefined8 local_a28;
  byte local_a20;
  char local_a1f;
  uint local_a1c;
  undefined8 local_a18;
  uint local_a10;
  float local_a0c;
  undefined1 local_a08 [8];
  undefined8 uStack_a00;
  longlong local_9e8;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  float local_9b8;
  float fStack_9b4;
  undefined4 uStack_9b0;
  float fStack_9ac;
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined8 local_968;
  undefined8 uStack_960;
  undefined1 local_958 [16];
  undefined8 local_948;
  undefined8 uStack_940;
  undefined1 local_938 [16];
  undefined8 local_928;
  undefined8 uStack_920;
  undefined1 local_918 [16];
  undefined8 local_908;
  undefined8 uStack_900;
  undefined1 local_8f8 [16];
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined1 local_8d8 [16];
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_8b8 [16];
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined4 local_898;
  undefined1 local_890 [16];
  undefined8 local_880;
  undefined8 local_878;
  undefined1 local_870 [16];
  undefined8 local_860;
  undefined8 local_858;
  undefined1 local_850 [16];
  undefined8 local_840;
  undefined8 local_838;
  undefined1 local_830 [16];
  undefined8 local_820;
  undefined8 local_818;
  undefined1 local_808 [32];
  undefined1 local_7e8 [32];
  undefined1 local_7c8 [32];
  undefined1 local_7a8 [32];
  undefined1 local_788 [32];
  undefined1 local_768 [32];
  undefined1 local_748 [40];
  undefined1 local_720 [32];
  undefined1 local_700 [32];
  undefined1 local_6e0 [32];
  undefined1 local_6c0 [40];
  undefined8 local_698 [74];
  float local_448 [2];
  undefined1 local_440 [16];
  longlong lStack_430;
  undefined8 uStack_428;
  undefined1 local_420 [8];
  longlong *plStack_418;
  longlong *plStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  float *local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined8 local_3c8;
  undefined1 *local_3c0;
  undefined8 *******local_3b8 [2];
  size_t local_3a8;
  ulonglong local_3a0;
  undefined8 *******local_398 [2];
  size_t local_388;
  ulonglong local_380;
  undefined1 local_378 [32];
  longlong *******local_358 [2];
  longlong ******local_348;
  ulonglong local_340;
  undefined1 local_338 [16];
  longlong local_328;
  undefined1 local_318 [32];
  undefined1 local_2f8 [33];
  char local_2d7;
  char local_2d5;
  undefined1 local_2d0 [32];
  longlong *******local_2b0 [2];
  longlong ******local_2a0;
  ulonglong local_298;
  undefined1 local_290 [32];
  undefined1 local_270 [40];
  ulonglong local_248 [4];
  ulonglong local_228 [4];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  ulonglong local_1c8 [4];
  undefined1 local_1a8 [32];
  undefined1 local_188 [33];
  undefined1 local_167;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [40];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStackY_a88;
  local_a1c = 0;
  local_a28 = (ulonglong *)((ulonglong)local_a28 & 0xffffffff00000000);
  local_9b8 = 0.0;
  FUN_1801cdbd0(local_698);
  puVar43 = &DAT_180bb8af0;
  if ((DAT_180bb8a8b != '\0') && (DAT_180bb8d22 == '\0')) {
    DAT_180bb8a8b = '\0';
    pauVar17 = (undefined1 (*) [16])FUN_18015ac20(&DAT_180bb8eb0,local_a08,&DAT_180bb8af0);
    _local_a48 = *pauVar17;
    cVar12 = FUN_180172480(puVar43,local_a48);
    if (cVar12 != '\0') {
      FUN_1800f5750(&DAT_1808da978,&DAT_180bb8eb0);
      lVar18 = FUN_1801ce280();
      if (lVar18 != 0) {
        FUN_1800f5750(&DAT_1808da958,lVar18 + 0x20);
        FUN_1801d42f0(&DAT_180bb92c0,lVar18 + 0xe8);
      }
    }
  }
  lVar18 = FUN_1801ce280();
  if ((lVar18 == 0) && (DAT_180bb8a8a == 0)) {
    FUN_1800f5750(&DAT_1808da978,&DAT_180bb8eb0);
    lVar18 = FUN_1801ce280();
    if (lVar18 == 0) {
      FUN_1800f5710(&DAT_1808da978);
      FUN_1800f5710(&DAT_1808da958);
    }
    else {
      FUN_1800f5750(&DAT_1808da958,lVar18 + 0x20);
    }
LAB_1801d033e:
    DAT_180bb8a89 = '\0';
  }
  else if ((DAT_180bb8a89 != '\0') &&
          (DAT_180bb8a84 = DAT_180bb8a84 + DAT_180bbae00, 3.0 < DAT_180bb8a84)) goto LAB_1801d033e;
  uVar19 = FUN_18043b170();
  local_a08 = (undefined1  [8])uVar19;
  lVar18 = FUN_180439770();
  local_9e8 = lVar18;
  local_a18 = (undefined8 *)FUN_180439770();
  FUN_18043b4f0(DAT_180ccaa64 - DAT_180ccaa54,DAT_180ccaa68 - DAT_180ccaa58);
  pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_9d8,"##config_page");
  _local_a48 = *pauVar17;
  cVar12 = FUN_18043bb90(local_a48,DAT_180ccaa6c,DAT_180ccaa70,0);
  if (cVar12 == '\0') goto LAB_1801d2e11;
  pfVar20 = (float *)FUN_18043b1e0(&local_9d8);
  local_a0c = *pfVar20;
  auVar59 = ZEXT464((uint)local_a0c);
  fVar66 = *(float *)(lVar18 + 0x1f0);
  bVar47 = local_a0c < 520.0;
  local_a20 = bVar47;
  lVar21 = FUN_18043b1b0();
  fVar53 = *(float *)(lVar21 + 0x28);
  *(float *)(lVar21 + 0x28) = fVar53 - (fVar66 + fVar66 + 170.0);
  lVar22 = FUN_180439770();
  uVar11 = DAT_180bb8a68;
  uVar42 = *(undefined4 *)(lVar22 + 0x2a4);
  lVar22 = FUN_180439770();
  *(undefined4 *)(lVar22 + 0x2a4) = uVar11;
  local_a10 = 0x42080000;
  FUN_18043a820(0x1a,0x42080000);
  FUN_18043a820(0xf,0x41e80000);
  pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_9b8,"Search configs or authors");
  _local_a48 = *pauVar17;
  puVar43 = (undefined8 *)FUN_18015b110(&local_400,"##cloud_search");
  local_9d8 = *puVar43;
  uStack_9d0 = puVar43[1];
  FUN_18043ced0(&local_9d8,&DAT_1808da938,0x80,local_a48);
  local_9b8 = *(float *)(lVar21 + 0x3c);
  fStack_9b4 = *(float *)(lVar21 + 0x40);
  uStack_9b0 = *(undefined4 *)(lVar21 + 0x44);
  fStack_9ac = *(float *)(lVar21 + 0x48);
  auVar55 = ZEXT464((uint)(local_9b8 + *(float *)(lVar21 + 0x20)));
  fVar49 = fStack_9b4 + *(float *)(lVar21 + 0x24);
  FUN_18043a8b0();
  FUN_18043a8b0();
  *(float *)(lVar21 + 0x28) = fVar53;
  lVar22 = FUN_180439770();
  *(undefined4 *)(lVar22 + 0x2a4) = uVar42;
  local_9d8 = CONCAT44((fStack_9ac * 0.5 + fVar49) - 8.0,auVar55._0_4_ + 7.0);
  uStack_9d0 = 0x4180000041800000;
  FUN_1801ce330(uVar19,&local_9d8,10,DAT_180bb8a64);
  auVar52 = ZEXT864(0);
  FUN_18043b3e0(0);
  uVar45 = (uint)DAT_180bb8a8a;
  pcVar33 = "New##new";
  if (uVar45 != 0) {
    pcVar33 = "Cancel##new";
  }
  pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_400,pcVar33);
  _local_a48 = *pauVar17;
  uVar44 = 4;
  if (uVar45 != 0) {
    uVar44 = 7;
  }
  cVar12 = FUN_1801cf220(local_a48,0x42980000,uVar44,1);
  if (cVar12 != '\0') {
    uVar45 = (uint)DAT_180bb8a8a;
    DAT_180bb8a8a = uVar45 == 0;
    DAT_180bb8a80 = 0;
    FUN_1800f5710(&DAT_1808da9b8);
    DAT_180bb8a89 = '\0';
    if (uVar45 == 0) {
      uVar44 = FUN_18015bae0(local_a48,&PTR_180700558);
      uVar45 = 1;
    }
    else {
      lVar22 = FUN_1801ce280();
      if (lVar22 == 0) {
        uVar44 = FUN_18015bae0(local_420,&PTR_180700558);
        uVar45 = 4;
      }
      else {
        lVar22 = FUN_1801ce280();
        uVar44 = FUN_18015b360(&local_400,lVar22 + 0x20);
        uVar45 = 2;
      }
      local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,uVar45);
      uVar44 = FUN_18015b360(local_440,uVar44);
      uVar45 = uVar45 | 8;
    }
    local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,uVar45);
    local_a1c = uVar45;
    FUN_1800f5750(&DAT_1808da958,uVar44);
    if ((uVar45 & 8) != 0) {
      uVar45 = uVar45 & 0xfffffff7;
      local_a1c = uVar45;
      FUN_18015c010(local_440);
    }
    if ((uVar45 & 4) != 0) {
      uVar45 = uVar45 & 0xfffffffb;
      local_a1c = uVar45;
      FUN_18015c010(local_420);
    }
    if ((uVar45 & 2) != 0) {
      uVar45 = uVar45 & 0xfffffffd;
      local_a1c = uVar45;
      FUN_18015c010(&local_400);
    }
    if ((uVar45 & 1) != 0) {
      local_a1c = uVar45 & 0xfffffffe;
      FUN_18015c010(local_a48);
    }
  }
  FUN_18043b3e0(0);
  pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_400,"Refresh##refresh");
  _local_a48 = *pauVar17;
  cVar12 = FUN_1801cf220(local_a48,0x42bc0000,3,0);
  if (cVar12 != '\0') {
    FUN_18016d810(&DAT_180bb8af0);
    FUN_180167480(&DAT_180bb8af0,1);
  }
  FUN_18043b470();
  iVar15 = FUN_1801d42a0(&DAT_180bb8b18);
  uVar23 = FUN_180176620(&DAT_180bb8b18);
  iVar16 = FUN_180176620(&DAT_180bb8b18);
  puVar43 = (undefined8 *)FUN_18015b110(&local_9b8,"All##cfg_all");
  local_9d8 = *puVar43;
  uStack_9d0 = puVar43[1];
  cVar12 = FUN_1801cfc40(&local_9d8,uVar23 & 0xffffffff,DAT_180bb8a8c == 0);
  if (cVar12 != '\0') {
    DAT_180bb8a8c = 0;
  }
  FUN_18043b3e0(0);
  puVar43 = (undefined8 *)FUN_18015b110(&local_9b8,"Mine##cfg_mine");
  local_9d8 = *puVar43;
  uStack_9d0 = puVar43[1];
  cVar12 = FUN_1801cfc40(&local_9d8,iVar15,DAT_180bb8a8c == 1);
  if (cVar12 != '\0') {
    DAT_180bb8a8c = 1;
  }
  FUN_18043b3e0(0);
  puVar43 = (undefined8 *)FUN_18015b110(&local_9b8,"Workshop##cfg_workshop");
  local_9d8 = *puVar43;
  uStack_9d0 = puVar43[1];
  cVar12 = FUN_1801cfc40(&local_9d8,iVar16 - iVar15,DAT_180bb8a8c == 2);
  if (cVar12 != '\0') {
    DAT_180bb8a8c = 2;
  }
  lVar22 = FUN_18043b1b0();
  auVar50 = *(undefined1 (*) [16])(lVar22 + 0x3c);
  auVar58 = vshufps_avx(auVar50,auVar50,0xff);
  auVar50 = vshufps_avx(auVar50,auVar50,0x55);
  FUN_180433450(uVar19,auVar55._0_8_,auVar58._0_4_ + auVar50._0_4_ + *(float *)(lVar21 + 0x24),
                auVar55._0_4_ + auVar59._0_4_);
  FUN_18043b470();
  FUN_18043b560(&local_9d8);
  lVar21 = FUN_18043b1e0(&local_9b8);
  fVar53 = *(float *)(lVar21 + 4);
  auVar55 = ZEXT464(0x41e00000);
  if (bVar47) {
    auVar56 = ZEXT1664(auVar59._0_16_);
    auVar59 = ZEXT1664(auVar59._0_16_);
    auVar60 = ZEXT464(0x43520000);
  }
  else {
    local_9b8 = 290.0;
    local_448[0] = 212.0;
    local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,auVar59._0_4_ * 0.4);
    pfVar20 = (float *)FUN_1800e75c0(&local_a28,local_448,&local_9b8);
    auVar56 = ZEXT464((uint)*pfVar20);
    auVar59 = ZEXT464((uint)((auVar59._0_4_ - *pfVar20) - fVar66));
    auVar50 = vmaxss_avx(ZEXT416((uint)((fVar53 - auVar55._0_4_) - *(float *)(lVar18 + 500))),
                         ZEXT416(0x43200000));
    auVar60 = ZEXT1664(auVar50);
  }
  local_9b8 = auVar60._0_4_;
  pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_400,"##cloud_config_list");
  _local_a48 = *pauVar17;
  cVar12 = FUN_18043bb90(local_a48,auVar59._0_8_,auVar60._0_8_,1);
  fVar53 = auVar59._0_4_;
  auVar60 = ZEXT464(0x41c00000);
  auVar70 = ZEXT464(0x42100000);
  if (cVar12 != '\0') {
    pfVar20 = (float *)FUN_18043b1e0(&local_a28);
    local_448[0] = *pfVar20;
    FUN_180113f10(local_440);
    puVar30 = DAT_180bb8b20;
    local_440 = (undefined1  [16])0x0;
    lStack_430 = 0;
    local_a28 = DAT_180bb8b20;
    puVar36 = DAT_180bb8b18;
    if (DAT_180bb8b18 == DAT_180bb8b20) {
LAB_1801d0c04:
      puVar43 = (undefined8 *)local_440._0_8_;
      puVar34 = (undefined8 *)local_440._8_8_;
      local_a28 = DAT_180bb8b20;
    }
    else {
      do {
        if (*(char *)((longlong)puVar36 + 0xe3) == '\0') {
          FUN_180176650(local_440,puVar36);
        }
        puVar36 = puVar36 + 0x2d;
      } while (puVar36 != puVar30);
      local_a28 = DAT_180bb8b20;
      if (DAT_180bb8b18 == DAT_180bb8b20) goto LAB_1801d0c04;
      puVar30 = DAT_180bb8b20;
      puVar36 = DAT_180bb8b18 + 0x20;
      puVar43 = (undefined8 *)local_440._0_8_;
      puVar34 = (undefined8 *)local_440._8_8_;
      do {
        if (*(char *)((longlong)puVar36 + -0x1d) != '\0') {
          puVar30 = puVar36 + -3;
          if (puVar43 != puVar34) {
            uVar23 = *puVar36;
            uVar1 = puVar36[-1];
            puVar35 = puVar43;
            do {
              puVar31 = puVar30;
              if (0xf < uVar23) {
                puVar31 = (ulonglong *)*puVar30;
              }
              sVar2 = puVar35[2];
              puVar29 = puVar35;
              if (0xf < (ulonglong)puVar35[3]) {
                puVar29 = (undefined8 *)*puVar35;
              }
              if ((sVar2 == uVar1) &&
                 ((sVar2 == 0 || (iVar15 = memcmp(puVar29,puVar31,sVar2), iVar15 == 0))))
              goto LAB_1801d0be6;
              puVar35 = puVar35 + 0x2d;
            } while (puVar35 != puVar34);
          }
          FUN_18016a4e0(local_248);
          if (local_248 != puVar30) {
            if (0xf < *puVar36) {
              puVar30 = (ulonglong *)*puVar30;
            }
            FUN_180113930(local_248,puVar30,puVar36[-1]);
          }
          puVar30 = puVar36 + 1;
          if (local_228 != puVar30) {
            if (0xf < puVar36[4]) {
              puVar30 = (ulonglong *)*puVar30;
            }
            FUN_180113930(local_228,puVar30,puVar36[3]);
          }
          puVar30 = puVar36 + 5;
          if (local_1c8 != puVar30) {
            if (0xf < puVar36[8]) {
              puVar30 = (ulonglong *)*puVar30;
            }
            FUN_180113930(local_1c8,puVar30,puVar36[7]);
          }
          local_167 = 1;
          if (local_440._8_8_ == lStack_430) {
            FUN_180178db0(local_440,local_440._8_8_,local_248);
          }
          else {
            FUN_18017a9c0(local_440._8_8_,local_248);
            local_440._8_8_ = local_440._8_8_ + 0x168;
          }
          FUN_18015c010(local_100);
          FUN_18015c010(local_120);
          FUN_18015c010(local_140);
          FUN_18015c010(local_160);
          FUN_18015c010(local_188);
          FUN_18015c010(local_1a8);
          FUN_18015c010(local_1c8);
          FUN_18015c010(local_1e8);
          FUN_18015c010(local_208);
          FUN_18015c010(local_228);
          FUN_18015c010(local_248);
          puVar43 = (undefined8 *)local_440._0_8_;
          puVar34 = (undefined8 *)local_440._8_8_;
LAB_1801d0be6:
          puVar30 = local_a28;
        }
        puVar31 = puVar36 + 0xd;
        puVar36 = puVar36 + 0x2d;
      } while (puVar31 != puVar30);
    }
    FUN_1801d44d0(puVar43,puVar34);
    local_3e0 = local_448;
    local_3d8 = &DAT_180bb8af0;
    local_3d0 = local_a18;
    local_3c8 = local_a08;
    local_3c0 = &DAT_180ccaa20;
    iVar15 = 0;
    uVar45 = 0xffffffff;
    local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,0xffffffff);
    local_a18 = (undefined8 *)local_440._8_8_;
    puVar43 = (undefined8 *)local_440._8_8_;
    puVar34 = (undefined8 *)local_440._0_8_;
    if (local_440._0_8_ == local_440._8_8_) {
LAB_1801d104e:
      local_a48 = (undefined1  [8])0x1807c6a00;
      if (DAT_180bb8b18 == DAT_180bb8b20) {
        local_a48 = (undefined1  [8])0x1807c69f0;
      }
      pppppplStack_a40 = (longlong ******)0xffffffffffffffff;
      do {
        pppppplStack_a40 = (longlong ******)((longlong)pppppplStack_a40 + 1);
      } while (*(char *)((longlong)local_a48 + (longlong)pppppplStack_a40) != '\0');
      FUN_1801d0060(local_a48,local_448[0],DAT_180bb8a64,auVar70._0_8_);
    }
    else {
      do {
        puVar30 = DAT_180bb8b20;
        if (DAT_180bb8a8c == 1) {
          if (*(char *)((longlong)puVar34 + 0xe1) == '\0') {
LAB_1801d0ce2:
            _local_420 = (undefined1  [16])0x0;
            plStack_410 = (longlong *)0x0;
            if (DAT_180bb8b18 != DAT_180bb8b20) {
              plStack_418 = (longlong *)0x0;
              pcVar33 = (char *)((longlong)DAT_180bb8b18 + 0xe3);
              plVar40 = plStack_418;
              do {
                if (*pcVar33 != '\0') {
                  puVar43 = puVar34;
                  if (0xf < (ulonglong)puVar34[3]) {
                    puVar43 = (undefined8 *)*puVar34;
                  }
                  sVar2 = *(size_t *)(pcVar33 + 0x15);
                  _Buf1 = pcVar33 + 5;
                  if (0xf < *(ulonglong *)(pcVar33 + 0x1d)) {
                    _Buf1 = *(char **)_Buf1;
                  }
                  if ((sVar2 == puVar34[2]) &&
                     ((sVar2 == 0 || (iVar16 = memcmp(_Buf1,puVar43,sVar2), iVar16 == 0)))) {
                    local_a08 = (undefined1  [8])(pcVar33 + -0xe3);
                    if (plVar40 == plStack_410) {
                      FUN_1801b6250(local_420,plVar40);
                      plVar40 = plStack_418;
                    }
                    else {
                      *plVar40 = (longlong)(pcVar33 + -0xe3);
                      plVar40 = (longlong *)((longlong)plStack_418 + 8);
                      plStack_418 = plVar40;
                    }
                  }
                }
                puVar36 = (ulonglong *)(pcVar33 + 0x85);
                pcVar33 = pcVar33 + 0x168;
              } while (puVar36 != puVar30);
            }
            cVar12 = FUN_1801d3eb0();
            local_a1f = cVar12;
            if (cVar12 == '\0') {
              plVar40 = plStack_418;
              auVar37 = local_420;
              uVar19 = extraout_XMM0_Qa;
              if (local_420 != (undefined1  [8])plStack_418) {
                do {
                  cVar13 = FUN_1801d3eb0(uVar19,*(undefined8 *)auVar37);
                  if (cVar13 != '\0') goto LAB_1801d0e45;
                  auVar37 = (undefined1  [8])((longlong)auVar37 + 8);
                  uVar19 = extraout_XMM0_Qa_00;
                } while (auVar37 != (undefined1  [8])plVar40);
              }
              if (local_420 != (undefined1  [8])0x0) {
                if ((0xfff < ((longlong)plStack_410 - (longlong)local_420 & 0xfffffffffffffff8U)) &&
                   (0x1f < (ulonglong)
                           ((longlong)local_420 + (-8 - *(longlong *)((longlong)local_420 + -8)))))
                goto LAB_1801d2f2e;
                FUN_1804547d0();
              }
            }
            else {
LAB_1801d0e45:
              bVar39 = *(byte *)((longlong)puVar34 + 0xe1);
              if (uVar45 != bVar39) {
                local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,(uint)bVar39);
                local_a48 = (undefined1  [8])0x1807c69e0;
                if (bVar39 != 0) {
                  local_a48 = (undefined1  [8])0x1807c68d8;
                }
                pppppplStack_a40 = (longlong ******)0xffffffffffffffff;
                do {
                  pppppplStack_a40 = (longlong ******)((longlong)pppppplStack_a40 + 1);
                } while (*(char *)((longlong)local_a48 + (longlong)pppppplStack_a40) != '\0');
                FUN_1801d0060(local_a48,local_448[0],DAT_180bb8a64,auVar60._0_8_);
              }
              puVar30 = DAT_180bb8b20;
              if (DAT_180bb8b18 != DAT_180bb8b20) {
                uVar23 = puVar34[3];
                sVar2 = puVar34[2];
                puVar36 = DAT_180bb8b18;
                do {
                  puVar43 = puVar34;
                  if (0xf < uVar23) {
                    puVar43 = (undefined8 *)*puVar34;
                  }
                  sVar3 = puVar36[2];
                  puVar31 = puVar36;
                  if (0xf < puVar36[3]) {
                    puVar31 = (ulonglong *)*puVar36;
                  }
                  if ((sVar3 == sVar2) &&
                     ((sVar3 == 0 || (iVar16 = memcmp(puVar31,puVar43,sVar3), iVar16 == 0)))) {
                    uVar19 = 1;
                    goto LAB_1801d0f07;
                  }
                  puVar36 = puVar36 + 0x2d;
                } while (puVar36 != puVar30);
              }
              uVar19 = 0;
LAB_1801d0f07:
              FUN_1801d2f50(&local_3e0,puVar34,(longlong)plStack_418 - (longlong)local_420 >> 3,
                            uVar19);
              iVar15 = iVar15 + 1;
              uVar23 = 0;
              if (puVar34[2] != 0) {
                do {
                  uVar23 = uVar23 + 1;
                } while (uVar23 < (ulonglong)puVar34[2]);
                cVar12 = local_a1f;
              }
              lVar18 = FUN_180177b00(&DAT_180bb92c0,&local_400);
              if ((*(longlong *)(lVar18 + 8) == 0) || (DAT_1808da948 != 0)) {
                plVar40 = plStack_418;
                auVar37 = local_420;
                uVar19 = extraout_XMM0_Qa_01;
                if (local_420 != (undefined1  [8])plStack_418) {
                  do {
                    uVar44 = *(undefined8 *)auVar37;
                    if ((cVar12 != '\0') ||
                       (cVar13 = FUN_1801d3eb0(uVar19,uVar44), uVar19 = extraout_XMM0_Qa_02,
                       cVar13 != '\0')) {
                      uVar19 = FUN_1801d2f50(&local_3e0,uVar44);
                      iVar15 = iVar15 + 1;
                    }
                    auVar37 = (undefined1  [8])((longlong)auVar37 + 8);
                  } while (auVar37 != (undefined1  [8])plVar40);
                  goto LAB_1801d0fe8;
                }
              }
              else {
LAB_1801d0fe8:
              }
              if (local_420 != (undefined1  [8])0x0) {
                if ((0xfff < ((longlong)plStack_410 - (longlong)local_420 & 0xfffffffffffffff8U)) &&
                   (0x1f < (ulonglong)
                           ((longlong)local_420 + (-8 - *(longlong *)((longlong)local_420 + -8)))))
                {
LAB_1801d2f2e:
                    /* WARNING: Subroutine does not return */
                  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                }
                FUN_1804547d0();
              }
              uVar45 = (uint)local_a28;
            }
            puVar43 = local_a18;
          }
        }
        else if ((DAT_180bb8a8c != 2) || (*(char *)((longlong)puVar34 + 0xe1) != '\0'))
        goto LAB_1801d0ce2;
        puVar34 = puVar34 + 0x2d;
      } while (puVar34 != puVar43);
      if (iVar15 == 0) goto LAB_1801d104e;
    }
    FUN_18043c2a0();
    FUN_180111850(local_440);
    fVar53 = auVar59._0_4_;
  }
  bVar39 = local_a20;
  lVar18 = -1;
  auVar59 = ZEXT464(local_9d8._4_4_);
  auVar62 = ZEXT464((uint)(float)local_9d8);
  if (local_a20 == 0) {
    fVar66 = (float)local_9d8 + fVar53 + fVar66;
    lVar22 = FUN_180439770();
    uVar19 = auVar56._0_8_;
    lVar21 = 0;
    if (*(longlong *)(lVar22 + 0x478) != *(longlong *)(lVar22 + 0x480)) {
      lVar21 = *(longlong *)(lVar22 + 0x480) + -0x78;
    }
    if (lVar21 != 0) {
      *(float *)(lVar21 + 0x30) = fVar66;
      *(int *)(lVar21 + 0x34) = auVar59._0_4_;
      *(undefined4 *)(lVar21 + 0x38) = 0;
    }
  }
  else {
    lVar22 = FUN_180439770();
    uVar19 = auVar56._0_8_;
    lVar21 = 0;
    if (*(longlong *)(lVar22 + 0x478) != *(longlong *)(lVar22 + 0x480)) {
      lVar21 = *(longlong *)(lVar22 + 0x480) + -0x78;
    }
    if (lVar21 != 0) {
      fVar66 = *(float *)(lVar21 + 0x38);
      if (auVar52._0_4_ < fVar66) {
        lVar22 = FUN_180439770();
        *(float *)(lVar21 + 0x34) = fVar66 + *(float *)(lVar22 + 500) + *(float *)(lVar21 + 0x34);
      }
      lVar22 = FUN_180439770();
      uVar19 = auVar56._0_8_;
      *(undefined4 *)(lVar21 + 0x30) = *(undefined4 *)(lVar22 + 0x1e8);
      *(undefined4 *)(lVar21 + 0x38) = 0;
    }
  }
  pppppplStack_a40 = (longlong ******)0x12;
  local_a48 = (undefined1  [8])"##config_selection";
  auVar50 = vpcmpeqd_avx(ZEXT116(bVar39),SUB6416(ZEXT464(0),0));
  auVar56 = ZEXT464((uint)local_9b8);
  auVar50 = vblendvps_avx(SUB6416(ZEXT464(0x43b90000),0),ZEXT416((uint)local_9b8),auVar50);
  cVar12 = FUN_18043bb90(local_a48,uVar19,auVar50._0_8_,1);
  fVar53 = auVar56._0_4_;
  fVar66 = auVar59._0_4_;
  if (cVar12 == '\0') {
    auVar60 = ZEXT464(local_a10);
    lVar21 = local_9e8;
  }
  else {
    lVar22 = FUN_180439770();
    lVar21 = 0;
    if (*(longlong *)(lVar22 + 0x478) != *(longlong *)(lVar22 + 0x480)) {
      lVar21 = *(longlong *)(lVar22 + 0x480) + -0x78;
    }
    if (lVar21 == 0) {
      auVar51 = ZEXT1664(auVar52._0_16_);
    }
    else {
      lVar22 = FUN_180439770();
      local_9b8 = (*(float *)(lVar21 + 0x28) - *(float *)(lVar22 + 0x1e8)) -
                  *(float *)(lVar21 + 0x30);
      local_448[0] = auVar52._0_4_;
      pfVar20 = &local_9b8;
      if (local_9b8 <= auVar52._0_4_) {
        pfVar20 = local_448;
      }
      auVar51 = ZEXT464((uint)*pfVar20);
    }
    lVar21 = FUN_1801ce280();
    plVar40 = (longlong *)0x0;
    uVar19 = 0xf;
    if (lVar21 == 0) {
      local_968 = 0;
      uStack_960 = 0xf;
      local_978._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar50[0xf] = 0;
      auVar50._0_15_ = local_978._1_15_;
      local_978 = auVar50 << 8;
      local_948 = 0;
      uStack_940 = 0xf;
      local_958._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar58[0xf] = 0;
      auVar58._0_15_ = local_958._1_15_;
      local_958 = auVar58 << 8;
      local_928 = 0;
      uStack_920 = 0xf;
      local_938._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar61[0xf] = 0;
      auVar61._0_15_ = local_938._1_15_;
      local_938 = auVar61 << 8;
      local_908 = 0;
      uStack_900 = 0xf;
      local_918._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar64[0xf] = 0;
      auVar64._0_15_ = local_918._1_15_;
      local_918 = auVar64 << 8;
      local_8e8 = 0;
      uStack_8e0 = 0xf;
      local_8f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar67[0xf] = 0;
      auVar67._0_15_ = local_8f8._1_15_;
      local_8f8 = auVar67 << 8;
      local_8c8 = 0;
      uStack_8c0 = 0xf;
      local_8d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar63[0xf] = 0;
      auVar63._0_15_ = local_8d8._1_15_;
      local_8d8 = auVar63 << 8;
      local_8a8 = 0;
      uStack_8a0 = 0xf;
      local_8b8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar65[0xf] = 0;
      auVar65._0_15_ = local_8b8._1_15_;
      local_8b8 = auVar65 << 8;
      local_898 = 0;
      local_880 = 0;
      local_878 = 0xf;
      local_890._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar68[0xf] = 0;
      auVar68._0_15_ = local_890._1_15_;
      local_890 = auVar68 << 8;
      local_860 = 0;
      local_858 = 0xf;
      local_870._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar69[0xf] = 0;
      auVar69._0_15_ = local_870._1_15_;
      local_870 = auVar69 << 8;
      local_840 = 0;
      local_838 = 0xf;
      local_850._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_850._1_15_;
      local_850 = auVar8 << 8;
      local_820 = 0;
      local_818 = 0xf;
      local_830._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_830._1_15_;
      local_830 = auVar9 << 8;
      puVar24 = local_978;
      uVar45 = local_a1c | 0x1ffe0;
    }
    else {
      puVar24 = (undefined1 *)FUN_18016c8d0(local_808,lVar21);
      uVar45 = local_a1c | 0x10;
    }
    local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,uVar45);
    FUN_18016c8d0(local_3b8,puVar24);
    uVar46 = uVar45;
    if ((uVar45 >> 0x10 & 1) != 0) {
      uVar46 = uVar45 & 0xfffeffff;
      local_a28 = (ulonglong *)(CONCAT44(local_a28._4_4_,uVar45) & 0xfffffffffffeffff);
      FUN_18015c010(local_830);
      FUN_18015c010(local_850);
      FUN_18015c010(local_870);
      FUN_18015c010(local_890);
      FUN_18015c010(local_8b8);
      FUN_18015c010(local_8d8);
      FUN_18015c010(local_8f8);
      FUN_18015c010(local_918);
      FUN_18015c010(local_938);
      FUN_18015c010(local_958);
      FUN_18015c010(local_978);
    }
    uVar45 = uVar46;
    if ((uVar46 & 0x10) != 0) {
      uVar45 = uVar46 & 0xffffffef;
      local_a28 = (ulonglong *)(CONCAT44(local_a28._4_4_,uVar46) & 0xffffffffffffffef);
      FUN_18015c010(local_6c0);
      FUN_18015c010(local_6e0);
      FUN_18015c010(local_700);
      FUN_18015c010(local_720);
      FUN_18015c010(local_748);
      FUN_18015c010(local_768);
      FUN_18015c010(local_788);
      FUN_18015c010(local_7a8);
      FUN_18015c010(local_7c8);
      FUN_18015c010(local_7e8);
      FUN_18015c010(local_808);
    }
    bVar39 = DAT_180bb8a8a;
    bVar47 = local_3a8 != 0;
    if ((local_3a8 == 0) || (local_2d7 != '\0')) {
      uVar46 = 0;
    }
    else {
      uVar46 = 1;
    }
    pppppppuVar32 = local_3b8;
    if (0xf < local_3a0) {
      pppppppuVar32 = local_3b8[0];
    }
    puVar43 = &DAT_1808da998;
    if (0xf < DAT_1808da9b0) {
      puVar43 = DAT_1808da998;
    }
    if (((DAT_1808da9a8 == local_3a8) &&
        (((DAT_1808da9a8 == 0 || (iVar15 = memcmp(puVar43,pppppppuVar32,DAT_1808da9a8), iVar15 == 0)
          ) && (bVar39 == 0)))) || (DAT_180bb8a88 = '\0', bVar39 == 0)) {
      if (bVar47) {
        local_a08 = (undefined1  [8])local_398;
        if (0xf < local_380) {
          local_a08 = (undefined1  [8])local_398[0];
        }
        pppppplStack_a40 = (longlong ******)0xe;
        local_a48 = (undefined1  [8])"Unnamed config";
        uStack_a00 = local_388;
        ppppppplVar26 = (longlong *******)FUN_180165e50(local_440,local_a08,local_a48);
        uVar45 = uVar45 | 0x20000;
      }
      else {
        local_998 = (undefined1  [16])0x0;
        local_988 = (undefined1  [16])0x0;
        FUN_18015ba30(local_998,"Select a config",0xf);
        ppppppplVar26 = (longlong *******)local_998;
        uVar45 = uVar45 | 0x40000;
      }
      local_a28 = (ulonglong *)CONCAT44(local_a28._4_4_,uVar45);
      ppppppplVar41 = ppppppplVar26;
      if ((longlong ******)0xf < ppppppplVar26[3]) {
        ppppppplVar41 = (longlong *******)*ppppppplVar26;
      }
      pppppplVar4 = ppppppplVar26[2];
      pauVar17 = (undefined1 (*) [16])
                 FUN_18043b290(&local_400,auVar51._0_8_,0x42500000,auVar52._0_8_);
      auVar54 = ZEXT1664(*pauVar17);
      lVar21 = FUN_180439770();
      if (*(longlong *)(lVar21 + 0x4a8) == *(longlong *)(lVar21 + 0x4b0)) {
        puVar43 = &DAT_180bbac80;
      }
      else {
        puVar43 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar21 + 0x4b0) + -4) * 0x13;
      }
      cVar12 = (char)uVar46;
      auVar50 = vpcmpeqd_avx(ZEXT416(uVar46),SUB6416(ZEXT464(0),0));
      auVar60 = ZEXT464(local_a10);
      auVar50 = vblendvps_avx(ZEXT416(local_a10),auVar52._0_16_,auVar50);
      auVar58 = vshufps_avx(auVar54._0_16_,auVar54._0_16_,0x55);
      auVar57 = ZEXT1664(auVar58);
      local_a48 = (undefined1  [8])ppppppplVar41;
      pppppplStack_a40 = pppppplVar4;
      FUN_1801cd9d0(puVar43,auVar54._0_8_,auVar58._0_8_,auVar51._0_4_ - auVar50._0_4_);
      if (cVar12 == '\0') {
LAB_1801d1f2f:
        bVar48 = false;
      }
      else {
        auVar50 = vshufps_avx(auVar54._0_16_,auVar54._0_16_,0xaa);
        uStack_a00._0_4_ = auVar55._0_4_;
        local_a08._4_4_ = auVar57._0_4_ + 10.0;
        local_a08._0_4_ = (auVar50._0_4_ + auVar54._0_4_) - (float)uStack_a00;
        uStack_a00._4_4_ = (float)uStack_a00;
        local_a48 = (undefined1  [8])0x1807c6890;
        pppppplStack_a40 = (longlong ******)0x14;
        cVar13 = FUN_1801cf760(local_a48,local_a08,5,1);
        if (cVar13 == '\0') goto LAB_1801d1f2f;
        bVar48 = true;
      }
      uVar46 = uVar45;
      if ((uVar45 >> 0x12 & 1) != 0) {
        uVar46 = uVar45 & 0xfffbffff;
        local_a28 = (ulonglong *)(CONCAT44(local_a28._4_4_,uVar45) & 0xfffffffffffbffff);
        FUN_18015c010(local_998);
      }
      uVar45 = uVar46;
      if ((uVar46 >> 0x11 & 1) != 0) {
        uVar45 = uVar46 & 0xfffdffff;
        local_a28 = (ulonglong *)(CONCAT44(local_a28._4_4_,uVar46) & 0xfffffffffffdffff);
        FUN_18015c010(local_440);
      }
      if (bVar48) {
        DAT_180bb8a88 = DAT_180bb8a88 == '\0';
        pppppppuVar32 = local_3b8;
        if (0xf < local_3a0) {
          pppppppuVar32 = local_3b8[0];
        }
        FUN_180113930(&DAT_1808da998,pppppppuVar32,local_3a8);
        pppppppuVar32 = local_398;
        if (0xf < local_380) {
          pppppppuVar32 = local_398[0];
        }
        FUN_180113930(&DAT_1808da958,pppppppuVar32,local_388);
        DAT_180bb8a89 = '\0';
      }
      if ((DAT_180bb8a88 == '\0') || (cVar12 == '\0')) {
        fVar66 = 0.5;
        lVar21 = local_9e8;
      }
      else {
        lVar21 = FUN_180439770();
        puVar25 = (undefined4 *)FUN_180439d10(lVar21 + 0x1b8,0x1a);
        if (puVar25 != (undefined4 *)0x0) {
          local_a18 = (undefined8 *)CONCAT44(*puVar25,0x1a);
          puVar43 = *(undefined8 **)(lVar21 + 0x4c8);
          if (puVar43 == *(undefined8 **)(lVar21 + 0x4d0)) {
            FUN_1801b6250(lVar21 + 0x4c0,puVar43,&local_a18);
          }
          else {
            *puVar43 = local_a18;
            *(longlong *)(lVar21 + 0x4c8) = *(longlong *)(lVar21 + 0x4c8) + 8;
          }
          *puVar25 = 0x42000000;
        }
        pppppplStack_a40 = (longlong ******)0xb;
        local_a48 = (undefined1  [8])"Config name";
        uStack_a00 = 0xc;
        local_a08 = (undefined1  [8])"##cloud_name";
        FUN_18043ced0(local_a08,&DAT_1808da958,0x80,local_a48);
        lVar21 = FUN_180439770();
        iVar15 = 0;
        do {
          lVar22 = *(longlong *)(lVar21 + 0x4c8);
          if (*(longlong *)(lVar21 + 0x4c0) == lVar22) break;
          puVar25 = (undefined4 *)FUN_180439d10(lVar21 + 0x1b8,*(undefined4 *)(lVar22 + -8));
          if (puVar25 != (undefined4 *)0x0) {
            *puVar25 = *(undefined4 *)(lVar22 + -4);
          }
          *(longlong *)(lVar21 + 0x4c8) = *(longlong *)(lVar21 + 0x4c8) + -8;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 1);
        lVar21 = local_9e8;
        fVar66 = 0.5;
        auVar55 = ZEXT464((uint)((auVar51._0_4_ - *(float *)(local_9e8 + 0x1f0)) * 0.5));
        local_a08 = (undefined1  [8])&DAT_1808da958;
        if (0xf < DAT_1808da970) {
          local_a08 = (undefined1  [8])DAT_1808da958;
        }
        _local_a48 = ZEXT816(0x180700558);
        uStack_a00 = DAT_1808da968;
        lVar22 = FUN_180165e50(local_440,local_a08,local_a48);
        local_a28 = (ulonglong *)(CONCAT44(local_a28._4_4_,uVar45) | 0x80000);
        if (*(longlong *)(lVar22 + 0x10) == 0) {
LAB_1801d219c:
          uVar19 = 0;
        }
        else {
          pppppppuVar32 = local_398;
          if (0xf < local_380) {
            pppppppuVar32 = local_398[0];
          }
          puVar43 = &DAT_1808da958;
          if (0xf < DAT_1808da970) {
            puVar43 = DAT_1808da958;
          }
          if ((DAT_1808da968 == local_388) &&
             ((DAT_1808da968 == 0 ||
              (iVar15 = memcmp(puVar43,pppppppuVar32,DAT_1808da968), iVar15 == 0))))
          goto LAB_1801d219c;
          uVar19 = 1;
        }
        pppppplStack_a40 = (longlong ******)0xe;
        local_a48 = (undefined1  [8])"Rename##rename";
        cVar13 = FUN_1801cec70(local_a48,auVar55._0_8_,5,uVar19);
        if ((cVar13 == '\0') || (cVar13 = FUN_18016d190(&DAT_180bb8af0,local_3b8), cVar13 == '\0'))
        {
          bVar48 = false;
        }
        else {
          bVar48 = true;
        }
        uVar46 = uVar45 & 0xfff7ffff;
        local_a28 = (ulonglong *)(CONCAT44(local_a28._4_4_,uVar45) & 0xfffffffffff7ffff);
        FUN_18015c010(local_440);
        if (bVar48) {
          DAT_180bb8a88 = '\0';
        }
        lVar27 = FUN_180439770();
        uVar19 = auVar55._0_8_;
        lVar22 = 0;
        if (*(longlong *)(lVar27 + 0x478) != *(longlong *)(lVar27 + 0x480)) {
          lVar22 = *(longlong *)(lVar27 + 0x480) + -0x78;
        }
        if ((lVar22 != 0) && (auVar52._0_4_ < *(float *)(lVar22 + 0x38))) {
          lVar27 = FUN_180439770();
          uVar19 = auVar55._0_8_;
          *(float *)(lVar22 + 0x30) =
               *(float *)(lVar22 + 0x44) + *(float *)(lVar22 + 0x3c) + *(float *)(lVar27 + 0x1f0);
          *(undefined4 *)(lVar22 + 0x34) = *(undefined4 *)(lVar22 + 0x40);
          *(undefined4 *)(lVar22 + 0x38) = 0;
        }
        local_a48 = (undefined1  [8])0x1807c6b28;
        pppppplStack_a40 = (longlong ******)0x15;
        cVar13 = FUN_1801cec70(local_a48,uVar19,7,1);
        if (cVar13 != '\0') {
          DAT_180bb8a88 = '\0';
          pppppppuVar32 = local_398;
          if (0xf < local_380) {
            pppppppuVar32 = local_398[0];
          }
          FUN_180113930(&DAT_1808da958,pppppppuVar32,local_388);
        }
        lVar27 = FUN_180439770();
        lVar22 = 0;
        if (*(longlong *)(lVar27 + 0x478) != *(longlong *)(lVar27 + 0x480)) {
          lVar22 = *(longlong *)(lVar27 + 0x480) + -0x78;
        }
        uVar45 = uVar46;
        if (lVar22 != 0) {
          fVar53 = *(float *)(lVar22 + 0x38);
          if (auVar52._0_4_ < fVar53) {
            lVar27 = FUN_180439770();
            *(float *)(lVar22 + 0x34) =
                 fVar53 + *(float *)(lVar27 + 500) + *(float *)(lVar22 + 0x34);
          }
          lVar27 = FUN_180439770();
          *(undefined4 *)(lVar22 + 0x30) = *(undefined4 *)(lVar27 + 0x1e8);
          *(undefined4 *)(lVar22 + 0x38) = 0;
        }
      }
      uVar42 = DAT_180bb8a64;
      auVar55 = ZEXT464(0x41b00000);
      auVar54 = ZEXT464(0x41d00000);
      if (local_2d5 == '\0') {
        if (local_2d7 != '\0') {
          if (local_328 == 0) {
            pauVar17 = (undefined1 (*) [16])FUN_18015b0f0(&local_9b8);
            auVar69 = auVar70._0_16_;
            auVar68 = auVar56._0_16_;
            auVar65 = auVar52._0_16_;
            auVar63 = auVar60._0_16_;
            auVar67 = auVar62._0_16_;
            auVar64 = auVar59._0_16_;
            auVar61 = auVar54._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar51._0_16_;
            uVar45 = uVar45 | 0x100000;
          }
          else {
            if (0x7fffffffffffffffU - local_328 < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            FUN_18015a9c0(local_a08);
            auVar69 = auVar70._0_16_;
            auVar68 = auVar56._0_16_;
            auVar65 = auVar52._0_16_;
            auVar63 = auVar60._0_16_;
            auVar67 = auVar62._0_16_;
            auVar64 = auVar59._0_16_;
            auVar61 = auVar54._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar51._0_16_;
            pauVar17 = (undefined1 (*) [16])local_a08;
            uVar45 = uVar45 | 0x200000;
          }
          local_440 = (undefined1  [16])0x0;
          lStack_430 = 0;
          uStack_428 = 0;
          local_440 = *pauVar17;
          lStack_430 = *(longlong *)pauVar17[1];
          uStack_428 = *(undefined8 *)(pauVar17[1] + 8);
          (*pauVar17)[0] = 0;
          *(undefined8 *)pauVar17[1] = 0;
          *(undefined8 *)(pauVar17[1] + 8) = 0xf;
          if ((uVar45 >> 0x15 & 1) != 0) {
            uVar45 = uVar45 & 0xffdfffff;
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            auVar70 = ZEXT1664(auVar63);
            auVar62 = ZEXT1664(auVar65);
            auVar51 = ZEXT1664(auVar68);
            auVar54 = ZEXT1664(auVar69);
            FUN_18015c010(local_a08);
            auVar69 = auVar54._0_16_;
            auVar68 = auVar51._0_16_;
            auVar65 = auVar62._0_16_;
            auVar63 = auVar70._0_16_;
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          if ((uVar45 >> 0x14 & 1) != 0) {
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            auVar70 = ZEXT1664(auVar63);
            auVar62 = ZEXT1664(auVar65);
            auVar51 = ZEXT1664(auVar68);
            auVar54 = ZEXT1664(auVar69);
            FUN_18015c010(&local_9b8);
            auVar69 = auVar54._0_16_;
            auVar68 = auVar51._0_16_;
            auVar65 = auVar62._0_16_;
            auVar63 = auVar70._0_16_;
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          if (local_348 != (longlong ******)0x0) {
            local_a48 = (undefined1  [8])local_358;
            if (0xf < local_340) {
              local_a48 = (undefined1  [8])local_358[0];
            }
            pppppplStack_a40 = local_348;
            ppuVar38 = (undefined **)&DAT_1806bbee0;
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            auVar70 = ZEXT1664(auVar63);
            auVar62 = ZEXT1664(auVar65);
            auVar51 = ZEXT1664(auVar68);
            auVar54 = ZEXT1664(auVar69);
            pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_400,&DAT_1806bbee0);
            _local_a08 = *pauVar17;
            cVar13 = FUN_180113ae0(local_a48,local_a08);
            if (cVar13 != '\0') {
              ppuVar38 = &PTR_180700558;
            }
            uVar19 = FUN_18015bae0(&local_3e0,ppuVar38);
            ppuVar38 = (undefined **)&DAT_1807c6b40;
            if (lStack_430 == 0) {
              ppuVar38 = &PTR_180700558;
            }
            uVar19 = FUN_1800e7600(&local_9d8,ppuVar38,uVar19);
            uVar19 = FUN_1800e5ec0(local_420,uVar19,local_358);
            FUN_18015b0d0(local_440,uVar19);
            FUN_18015c010(local_420);
            FUN_18015c010(&local_9d8);
            FUN_18015c010(&local_3e0);
            auVar69 = auVar54._0_16_;
            auVar68 = auVar51._0_16_;
            auVar65 = auVar62._0_16_;
            auVar63 = auVar70._0_16_;
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          if (lStack_430 != 0) {
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            auVar70 = ZEXT1664(auVar63);
            auVar62 = ZEXT1664(auVar65);
            auVar51 = ZEXT1664(auVar68);
            auVar54 = ZEXT1664(auVar69);
            plVar40 = (longlong *)FUN_18015ac20(local_440,&local_400);
            local_a48 = (undefined1  [8])*plVar40;
            pppppplStack_a40 = (longlong ******)plVar40[1];
            FUN_1801d0060(local_a48,auVar52._0_8_,DAT_180bb8a64,auVar59._0_8_);
            auVar69 = auVar54._0_16_;
            auVar68 = auVar51._0_16_;
            auVar65 = auVar62._0_16_;
            auVar63 = auVar70._0_16_;
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          auVar51 = ZEXT1664(auVar50);
          auVar55 = ZEXT1664(auVar58);
          auVar54 = ZEXT1664(auVar61);
          auVar59 = ZEXT1664(auVar64);
          auVar62 = ZEXT1664(auVar67);
          auVar60 = ZEXT1664(auVar63);
          auVar52 = ZEXT1664(auVar65);
          auVar56 = ZEXT1664(auVar68);
          auVar70 = ZEXT1664(auVar69);
          FUN_18015c010(local_440);
        }
      }
      else {
        puVar43 = (undefined8 *)FUN_1801cfae0(local_440,local_3b8);
        local_a48 = (undefined1  [8])puVar43;
        if (0xf < (ulonglong)puVar43[3]) {
          local_a48 = (undefined1  [8])*puVar43;
        }
        pppppplStack_a40 = (longlong ******)puVar43[2];
        FUN_1801d0060(local_a48,auVar51._0_8_,uVar42,auVar55._0_8_);
        FUN_18015c010(local_440);
        local_a48 = (undefined1  [8])local_2b0;
        if (0xf < local_298) {
          local_a48 = (undefined1  [8])local_2b0[0];
        }
        pppppplStack_a40 = local_2a0;
        FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a64,0x42300000);
      }
      uVar19 = auVar55._0_8_;
      if (bVar47) {
        puVar43 = &DAT_180bb8ed0;
        if (0xf < DAT_180bb8ee8) {
          puVar43 = DAT_180bb8ed0;
        }
        pppppppuVar32 = local_3b8;
        if (0xf < local_3a0) {
          pppppppuVar32 = local_3b8[0];
        }
        if (local_3a8 == DAT_180bb8ee0) {
          if (local_3a8 != 0) {
            iVar15 = memcmp(pppppppuVar32,puVar43,local_3a8);
            uVar19 = auVar55._0_8_;
            if (iVar15 != 0) goto LAB_1801d2697;
          }
          local_a48 = (undefined1  [8])0x1807c6b48;
          pppppplStack_a40 = (longlong ******)0x6;
          FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a64,uVar19);
        }
      }
LAB_1801d2697:
      fVar66 = (auVar51._0_4_ - *(float *)(lVar21 + 0x1f0)) * fVar66;
      auVar55 = ZEXT464((uint)fVar66);
      pppppplStack_a40 = (longlong ******)0xa;
      local_a48 = (undefined1  [8])"Load##load";
      cVar13 = FUN_1801cec70(local_a48,fVar66,1,bVar47);
      if (cVar13 != '\0') {
        FUN_1800e5120(local_3b8);
      }
      lVar28 = FUN_180439770();
      lVar22 = 0;
      lVar27 = lVar22;
      if (*(longlong *)(lVar28 + 0x478) != *(longlong *)(lVar28 + 0x480)) {
        lVar27 = *(longlong *)(lVar28 + 0x480) + -0x78;
      }
      if ((lVar27 != 0) && (auVar52._0_4_ < *(float *)(lVar27 + 0x38))) {
        lVar28 = FUN_180439770();
        *(float *)(lVar27 + 0x30) =
             *(float *)(lVar27 + 0x44) + *(float *)(lVar27 + 0x3c) + *(float *)(lVar28 + 0x1f0);
        *(undefined4 *)(lVar27 + 0x34) = *(undefined4 *)(lVar27 + 0x40);
        *(undefined4 *)(lVar27 + 0x38) = 0;
      }
      uVar19 = auVar55._0_8_;
      if (cVar12 == '\0') {
LAB_1801d278e:
        uVar44 = 0;
      }
      else {
        puVar43 = &DAT_180bb8ed0;
        if (0xf < DAT_180bb8ee8) {
          puVar43 = DAT_180bb8ed0;
        }
        pppppppuVar32 = local_3b8;
        if (0xf < local_3a0) {
          pppppppuVar32 = local_3b8[0];
        }
        if (local_3a8 != DAT_180bb8ee0) goto LAB_1801d278e;
        if (local_3a8 != 0) {
          iVar15 = memcmp(pppppppuVar32,puVar43,local_3a8);
          uVar19 = auVar55._0_8_;
          if (iVar15 != 0) goto LAB_1801d278e;
        }
        uVar44 = 1;
      }
      pppppplStack_a40 = (longlong ******)0xa;
      local_a48 = (undefined1  [8])"Save##save";
      cVar13 = FUN_1801cec70(local_a48,uVar19,2,uVar44);
      if (cVar13 != '\0') {
        FUN_1800e5400();
      }
      lVar28 = FUN_180439770();
      lVar27 = lVar22;
      if (*(longlong *)(lVar28 + 0x478) != *(longlong *)(lVar28 + 0x480)) {
        lVar27 = *(longlong *)(lVar28 + 0x480) + -0x78;
      }
      if (lVar27 != 0) {
        fVar66 = *(float *)(lVar27 + 0x38);
        if (auVar52._0_4_ < fVar66) {
          lVar28 = FUN_180439770();
          *(float *)(lVar27 + 0x34) = fVar66 + *(float *)(lVar28 + 500) + *(float *)(lVar27 + 0x34);
        }
        lVar28 = FUN_180439770();
        *(undefined4 *)(lVar27 + 0x30) = *(undefined4 *)(lVar28 + 0x1e8);
        *(undefined4 *)(lVar27 + 0x38) = 0;
      }
      cVar13 = local_2d5;
      if (local_2d7 == '\0') {
        if (local_2d5 != '\0') {
          pppppplStack_a40 = (longlong ******)0x1f;
          local_a48 = (undefined1  [8])"Private. Saved to your account.";
LAB_1801d28a9:
          uVar42 = DAT_180bb8a64;
          goto LAB_1801d28b0;
        }
        if (cVar12 == '\0') goto LAB_1801d1ce8;
        cVar14 = FUN_1800ea250(local_3b8,&DAT_180bb8ed0);
        fVar66 = auVar70._0_4_;
        if (cVar14 == '\0') {
          pauVar17 = (undefined1 (*) [16])FUN_18015b110(&local_400,"Load before saving.");
          _local_a48 = *pauVar17;
          goto LAB_1801d28a9;
        }
      }
      else {
        pppppplStack_a40 = (longlong ******)0x18;
        local_a48 = (undefined1  [8])"Read-only. Fork to edit.";
        uVar42 = DAT_180bb8a7c;
LAB_1801d28b0:
        FUN_1801d0060(local_a48,auVar51._0_8_,uVar42,auVar54._0_8_);
        fVar66 = auVar70._0_4_;
        if (local_2d7 != '\0') {
          pppppplStack_a40 = (longlong ******)0x19;
          local_a48 = (undefined1  [8])"Create private fork##fork";
          cVar13 = FUN_1801cec70(local_a48,auVar51._0_8_,9,1);
          fVar66 = auVar70._0_4_;
          if (cVar13 != '\0') {
            DAT_180bb8a8a = 1;
            DAT_180bb8a80 = 2;
            pppppppuVar32 = local_3b8;
            if (0xf < local_3a0) {
              pppppppuVar32 = local_3b8[0];
            }
            FUN_180113930(&DAT_1808da9b8,pppppppuVar32,local_3a8);
            puVar43 = (undefined8 *)FUN_1801cdef0(&local_3e0,local_398," fork");
            auVar68 = auVar70._0_16_;
            auVar65 = auVar56._0_16_;
            auVar63 = auVar52._0_16_;
            auVar67 = auVar60._0_16_;
            auVar64 = auVar62._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar54._0_16_;
            auVar50 = auVar51._0_16_;
            if ((undefined8 **)puVar43 != &DAT_1808da958) {
              FUN_18015c010(&DAT_1808da958);
              auVar68 = auVar70._0_16_;
              auVar65 = auVar56._0_16_;
              auVar63 = auVar52._0_16_;
              auVar67 = auVar60._0_16_;
              auVar64 = auVar62._0_16_;
              auVar61 = auVar59._0_16_;
              auVar58 = auVar54._0_16_;
              auVar50 = auVar51._0_16_;
              DAT_1808da958 = (undefined8 *)*puVar43;
              uRam00000001808da960 = puVar43[1];
              DAT_1808da968 = puVar43[2];
              DAT_1808da970 = puVar43[3];
              puVar43[2] = 0;
              puVar43[3] = 0xf;
              *(undefined1 *)puVar43 = 0;
            }
            auVar51 = ZEXT1664(auVar50);
            auVar54 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar62 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            auVar52 = ZEXT1664(auVar63);
            auVar56 = ZEXT1664(auVar65);
            auVar55 = ZEXT1664(auVar68);
            FUN_18015c010(&local_3e0);
            fVar66 = auVar55._0_4_;
          }
        }
        if (cVar12 == '\0') goto LAB_1801d1ce8;
        cVar13 = local_2d5;
      }
      local_a48 = (undefined1  [8])0x1807c6bf0;
      if (cVar13 != '\0') {
        local_a48 = (undefined1  [8])0x1807c6bd0;
      }
      do {
        lVar18 = lVar18 + 1;
      } while (*(char *)((longlong)local_a48 + lVar18) != '\0');
      pppppplStack_a40 = (longlong ******)lVar18;
      cVar12 = FUN_1801cf220(local_a48,(auVar51._0_4_ - fVar66) - *(float *)(lVar21 + 0x1f0),8,0);
      if (cVar12 != '\0') {
        DAT_180bb8a8a = 1;
        DAT_180bb8a80 = (local_2d5 != '\0') + 1;
        pppppppuVar32 = local_3b8;
        if (0xf < local_3a0) {
          pppppppuVar32 = local_3b8[0];
        }
        FUN_180113930(&DAT_1808da9b8,pppppppuVar32,local_3a8);
        puVar43 = (undefined8 *)FUN_1801cdef0(&local_3e0,local_398," copy");
        auVar65 = auVar56._0_16_;
        auVar63 = auVar52._0_16_;
        auVar67 = auVar60._0_16_;
        auVar64 = auVar62._0_16_;
        auVar61 = auVar59._0_16_;
        auVar58 = auVar54._0_16_;
        auVar50 = auVar51._0_16_;
        if ((undefined8 **)puVar43 != &DAT_1808da958) {
          FUN_18015c010(&DAT_1808da958);
          auVar65 = auVar56._0_16_;
          auVar63 = auVar52._0_16_;
          auVar67 = auVar60._0_16_;
          auVar64 = auVar62._0_16_;
          auVar61 = auVar59._0_16_;
          auVar58 = auVar54._0_16_;
          auVar50 = auVar51._0_16_;
          DAT_1808da958 = (undefined8 *)*puVar43;
          uRam00000001808da960 = puVar43[1];
          DAT_1808da968 = puVar43[2];
          DAT_1808da970 = puVar43[3];
          puVar43[2] = 0;
          puVar43[3] = 0xf;
          *(undefined1 *)puVar43 = 0;
        }
        auVar51 = ZEXT1664(auVar50);
        auVar54 = ZEXT1664(auVar58);
        auVar59 = ZEXT1664(auVar61);
        auVar62 = ZEXT1664(auVar64);
        auVar60 = ZEXT1664(auVar67);
        auVar52 = ZEXT1664(auVar63);
        auVar56 = ZEXT1664(auVar65);
        FUN_18015c010(&local_3e0);
      }
      lVar27 = FUN_180439770();
      lVar18 = lVar22;
      if (*(longlong *)(lVar27 + 0x478) != *(longlong *)(lVar27 + 0x480)) {
        lVar18 = *(longlong *)(lVar27 + 0x480) + -0x78;
      }
      lVar27 = lVar22;
      puVar30 = DAT_180bb8b18;
      if ((lVar18 != 0) && (auVar52._0_4_ < *(float *)(lVar18 + 0x38))) {
        lVar28 = FUN_180439770();
        *(float *)(lVar18 + 0x30) =
             *(float *)(lVar18 + 0x44) + *(float *)(lVar18 + 0x3c) + *(float *)(lVar28 + 0x1f0);
        *(undefined4 *)(lVar18 + 0x34) = *(undefined4 *)(lVar18 + 0x40);
        *(undefined4 *)(lVar18 + 0x38) = 0;
        puVar30 = DAT_180bb8b18;
      }
      for (; puVar30 != DAT_180bb8b20; puVar30 = puVar30 + 0x2d) {
        lVar18 = lVar27 + 1;
        if (*(char *)((longlong)puVar30 + 0xe3) != '\0') {
          lVar18 = lVar27;
        }
        lVar27 = lVar18;
      }
      pauVar17 = (undefined1 (*) [16])
                 FUN_18043b290(&local_400,DAT_180bb8b20,auVar60._0_8_,auVar52._0_8_);
      _local_a08 = *pauVar17;
      if ((local_2d5 == '\0') && (lVar27 < 2)) {
        uVar19 = 0;
      }
      else {
        uVar19 = 1;
      }
      pppppplStack_a40 = (longlong ******)0xe;
      local_a48 = (undefined1  [8])"Delete##delete";
      cVar12 = FUN_1801cf760(local_a48,local_a08,6,uVar19);
      if (cVar12 != '\0') {
        DAT_180bb8a89 = DAT_180bb8a89 == '\0';
        DAT_180bb8a84 = auVar52._0_4_;
      }
      lVar18 = FUN_180439770();
      uVar19 = auVar54._0_8_;
      if (*(longlong *)(lVar18 + 0x478) != *(longlong *)(lVar18 + 0x480)) {
        lVar22 = *(longlong *)(lVar18 + 0x480) + -0x78;
      }
      if (lVar22 != 0) {
        fVar66 = *(float *)(lVar22 + 0x38);
        if (auVar52._0_4_ < fVar66) {
          lVar18 = FUN_180439770();
          *(float *)(lVar22 + 0x34) = fVar66 + *(float *)(lVar18 + 500) + *(float *)(lVar22 + 0x34);
        }
        lVar18 = FUN_180439770();
        uVar19 = auVar54._0_8_;
        *(undefined4 *)(lVar22 + 0x30) = *(undefined4 *)(lVar18 + 0x1e8);
        *(undefined4 *)(lVar22 + 0x38) = 0;
      }
      if (DAT_180bb8a89 != '\0') {
        local_a48 = (undefined1  [8])0x1807c6c20;
        pppppplStack_a40 = (longlong ******)0x13;
        FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a7c,uVar19);
        pppppplStack_a40 = (longlong ******)0x16;
        local_a48 = (undefined1  [8])"Confirm delete##delete";
        cVar12 = FUN_1801cec70(local_a48,auVar51._0_8_,6,1);
        if (cVar12 != '\0') {
          FUN_18016b8b0(&DAT_180bb8af0,local_3b8);
          FUN_1800f5710(&DAT_1808da978);
          DAT_180bb8a89 = '\0';
        }
      }
    }
    else {
      bVar47 = DAT_180bb8a80 == 2;
      if (bVar47) {
        local_a48 = (undefined1  [8])0x1807c6a30;
      }
      else {
        local_a48 = (undefined1  [8])0x1807c6a60;
        if (DAT_180bb8a80 == 1) {
          local_a48 = (undefined1  [8])0x1807c6a48;
        }
      }
      pppppplStack_a40 = (longlong ******)0xffffffffffffffff;
      do {
        pppppplStack_a40 = (longlong ******)((longlong)pppppplStack_a40 + 1);
      } while (*(char *)((longlong)local_a48 + (longlong)pppppplStack_a40) != '\0');
      FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a60,auVar55._0_8_);
      if (bVar47) {
        local_a48 = (undefined1  [8])0x1807c6a78;
        pppppplStack_a40 = (longlong ******)0x1f;
        FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a7c,auVar55._0_8_);
      }
      puVar30 = DAT_180bb8b20;
      uVar23 = DAT_1808da9d0;
      sVar2 = DAT_1808da9c8;
      puVar43 = DAT_1808da9b8;
      if ((DAT_1808da9c8 != 0) && (puVar36 = DAT_180bb8b18, DAT_180bb8b18 != DAT_180bb8b20)) {
        do {
          puVar34 = &DAT_1808da9b8;
          if (0xf < uVar23) {
            puVar34 = puVar43;
          }
          sVar3 = puVar36[2];
          puVar31 = puVar36;
          if (0xf < puVar36[3]) {
            puVar31 = (ulonglong *)*puVar36;
          }
        } while (((sVar3 != sVar2) ||
                 ((sVar3 != 0 && (iVar15 = memcmp(puVar31,puVar34,sVar3), iVar15 != 0)))) &&
                (puVar36 = puVar36 + 0x2d, puVar36 != puVar30));
        if (puVar36 != puVar30) {
          lVar18 = 0x108;
          if (*(char *)((longlong)puVar36 + 0xe3) == '\0') {
            lVar18 = 0x20;
          }
          pcVar33 = (char *)(lVar18 + (longlong)puVar36);
          local_a48 = (undefined1  [8])pcVar33;
          if (0xf < *(ulonglong *)(pcVar33 + 0x18)) {
            local_a48 = *(undefined1 (*) [8])pcVar33;
          }
          pppppplStack_a40 = *(longlong *******)(pcVar33 + 0x10);
          FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a64,0x42300000);
          uVar42 = DAT_180bb8a64;
          if (bVar47) {
            uVar44 = FUN_1801cfae0(local_440,puVar36);
            puVar43 = (undefined8 *)FUN_18015ac20(uVar44,&local_400);
            local_a48 = (undefined1  [8])*puVar43;
            pppppplStack_a40 = (longlong ******)puVar43[1];
            FUN_1801d0060(local_a48,auVar51._0_8_,uVar42,auVar60._0_8_);
            FUN_18015c010(local_440);
          }
        }
      }
      pppppplStack_a40 = (longlong ******)0x4;
      local_a48 = (undefined1  [8])&DAT_1807c6a98;
      FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a60,0x41a00000);
      lVar18 = FUN_180439770();
      puVar25 = (undefined4 *)FUN_180439d10(lVar18 + 0x1b8,0x1a);
      if (puVar25 != (undefined4 *)0x0) {
        local_a18 = (undefined8 *)CONCAT44(*puVar25,0x1a);
        puVar43 = *(undefined8 **)(lVar18 + 0x4c8);
        if (puVar43 == *(undefined8 **)(lVar18 + 0x4d0)) {
          FUN_1801b6250(lVar18 + 0x4c0,puVar43,&local_a18);
        }
        else {
          *puVar43 = local_a18;
          *(longlong *)(lVar18 + 0x4c8) = *(longlong *)(lVar18 + 0x4c8) + 8;
        }
        *puVar25 = 0x42080000;
      }
      pppppplStack_a40 = (longlong ******)0xb;
      local_a48 = (undefined1  [8])"Config name";
      uStack_a00 = 0xc;
      local_a08 = (undefined1  [8])"##cloud_name";
      FUN_18043ced0(local_a08,&DAT_1808da958,0x80,local_a48);
      lVar18 = FUN_180439770();
      iVar15 = 0;
      do {
        lVar21 = *(longlong *)(lVar18 + 0x4c8);
        if (*(longlong *)(lVar18 + 0x4c0) == lVar21) break;
        puVar25 = (undefined4 *)FUN_180439d10(lVar18 + 0x1b8,*(undefined4 *)(lVar21 + -8));
        if (puVar25 != (undefined4 *)0x0) {
          *puVar25 = *(undefined4 *)(lVar21 + -4);
        }
        *(longlong *)(lVar18 + 0x4c8) = *(longlong *)(lVar18 + 0x4c8) + -8;
        iVar15 = iVar15 + 1;
      } while (iVar15 < 1);
      local_a08 = (undefined1  [8])&DAT_1808da958;
      if (0xf < DAT_1808da970) {
        local_a08 = (undefined1  [8])DAT_1808da958;
      }
      _local_a48 = ZEXT816(0x180700558);
      uStack_a00 = DAT_1808da968;
      lVar18 = FUN_180165e50(local_440,local_a08,local_a48);
      lVar18 = *(longlong *)(lVar18 + 0x10);
      FUN_18015c010(local_440);
      _local_a08 = (undefined1  [16])0x0;
      if (bVar47) {
        local_a48 = (undefined1  [8])&DAT_1808da9b8;
        if (0xf < DAT_1808da9d0) {
          local_a48 = (undefined1  [8])DAT_1808da9b8;
        }
        pppppplStack_a40 = (longlong ******)DAT_1808da9c8;
      }
      else {
        pppppplStack_a40 = (longlong ******)0x0;
        local_a48 = (undefined1  [8])0x0;
      }
      FUN_180172610(&DAT_180bb8af0,local_a08,local_a48);
      bVar48 = uStack_a00 != 0;
      if (uStack_a00 != 0) {
        local_a48 = local_a08;
        pppppplStack_a40 = (longlong ******)uStack_a00;
        FUN_1801d0060(local_a48,auVar51._0_8_,DAT_180bb8a7c,0x42400000);
      }
      if ((lVar18 == 0) || (bVar48)) {
        uVar44 = 0;
      }
      else {
        uVar44 = 1;
      }
      local_a48 = (undefined1  [8])0x1807c6ae0;
      if (bVar47) {
        local_a48 = (undefined1  [8])0x1807c6ac0;
      }
      pppppplStack_a40 = (longlong ******)0xffffffffffffffff;
      do {
        pppppplStack_a40 = (longlong ******)((longlong)pppppplStack_a40 + 1);
      } while (*(char *)((longlong)local_a48 + (longlong)pppppplStack_a40) != '\0');
      cVar12 = FUN_1801cec70(local_a48,auVar51._0_8_,bVar47 + '\b',uVar44);
      auVar67 = auVar56._0_16_;
      auVar64 = auVar52._0_16_;
      auVar61 = auVar62._0_16_;
      auVar58 = auVar59._0_16_;
      auVar50 = auVar51._0_16_;
      uVar44 = auVar51._0_8_;
      if (cVar12 != '\0') {
        if (DAT_180bb8a80 == 0) {
          uVar19 = FUN_1800b4410(local_a48);
          FUN_1800f4710(uVar19,local_440,0xffffffff);
          FUN_1801409d0(local_a48 + 8,local_a48[0]);
          cVar12 = FUN_18016c0e0();
          if ((cVar12 == '\0') || (cVar12 = FUN_1800e4880(1), cVar12 == '\0')) {
            cVar12 = '\0';
          }
          else {
            cVar12 = '\x01';
          }
          FUN_18015c010(local_440);
        }
        else if (bVar47) {
          puVar43 = &DAT_180bb8ed0;
          if (0xf < DAT_180bb8ee8) {
            puVar43 = DAT_180bb8ed0;
          }
          puVar34 = &DAT_1808da9b8;
          if (0xf < DAT_1808da9d0) {
            puVar34 = DAT_1808da9b8;
          }
          if (DAT_1808da9c8 == DAT_180bb8ee0) {
            if (DAT_1808da9c8 != 0) {
              iVar15 = memcmp(puVar34,puVar43,DAT_1808da9c8);
              auVar67 = auVar56._0_16_;
              auVar64 = auVar52._0_16_;
              auVar61 = auVar62._0_16_;
              auVar58 = auVar59._0_16_;
              auVar50 = auVar51._0_16_;
              if (iVar15 != 0) goto LAB_1801d1a85;
            }
            uVar19 = FUN_1800abfc0(local_a48);
            local_9b8 = 1.43493e-42;
            puVar43 = (undefined8 *)FUN_1800f4710(uVar19,&local_9d8,0xffffffff);
            auVar67 = auVar56._0_16_;
            auVar64 = auVar52._0_16_;
            auVar61 = auVar62._0_16_;
            auVar58 = auVar59._0_16_;
            auVar50 = auVar51._0_16_;
            bVar6 = true;
            bVar5 = false;
            bVar48 = true;
          }
          else {
LAB_1801d1a85:
            plStack_410 = plVar40;
            uStack_408 = uVar19;
            stack0xfffffffffffffbe1 = SUB1615((undefined1  [16])0x0,1);
            auVar10[0xf] = 0;
            auVar10._0_15_ = stack0xfffffffffffffbe1;
            _local_420 = auVar10 << 8;
            puVar43 = (undefined8 *)local_420;
            bVar6 = false;
            bVar5 = true;
            bVar48 = false;
          }
          local_400 = *puVar43;
          uStack_3f8 = puVar43[1];
          uStack_3f0 = puVar43[2];
          uStack_3e8 = puVar43[3];
          *(undefined1 *)puVar43 = 0;
          puVar43[2] = 0;
          puVar43[3] = 0xf;
          if (bVar5) {
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            FUN_18015c010(local_420);
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          if (bVar6) {
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            FUN_18015c010(&local_9d8);
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          if (bVar48) {
            auVar52 = ZEXT1664(auVar50);
            auVar55 = ZEXT1664(auVar58);
            auVar59 = ZEXT1664(auVar61);
            auVar56 = ZEXT1664(auVar64);
            auVar60 = ZEXT1664(auVar67);
            FUN_1801409d0(local_a48 + 8,local_a48[0]);
            auVar67 = auVar60._0_16_;
            auVar64 = auVar56._0_16_;
            auVar61 = auVar59._0_16_;
            auVar58 = auVar55._0_16_;
            auVar50 = auVar52._0_16_;
          }
          auVar51 = ZEXT1664(auVar50);
          auVar59 = ZEXT1664(auVar58);
          auVar62 = ZEXT1664(auVar61);
          auVar52 = ZEXT1664(auVar64);
          auVar56 = ZEXT1664(auVar67);
          cVar12 = FUN_18016c9f0();
          FUN_18015c010(&local_400);
        }
        else {
          cVar12 = FUN_18016c6e0();
          puVar30 = DAT_180bb8b20;
          sVar2 = DAT_1808da9c8;
          if (cVar12 != '\0') {
            puVar36 = DAT_180bb8b18;
            puVar43 = &DAT_1808da9b8;
            if (0xf < DAT_1808da9d0) {
              puVar43 = DAT_1808da9b8;
            }
            for (; puVar36 != puVar30; puVar36 = puVar36 + 0x2d) {
              if (*(char *)((longlong)puVar36 + 0xe3) != '\0') {
                puVar31 = puVar36;
                if (0xf < puVar36[3]) {
                  puVar31 = (ulonglong *)*puVar36;
                }
                if ((sVar2 == puVar36[2]) &&
                   ((sVar2 == 0 || (iVar15 = memcmp(puVar43,puVar31,sVar2), iVar15 == 0))))
                goto LAB_1801d1bad;
              }
            }
            cVar12 = FUN_1800e4880(1);
            if (cVar12 != '\0') {
LAB_1801d1bad:
              cVar12 = '\x01';
              goto LAB_1801d1bba;
            }
          }
          cVar12 = '\0';
        }
LAB_1801d1bba:
        uVar44 = auVar51._0_8_;
        if (cVar12 != '\0') {
          puVar43 = &DAT_180bb8eb0;
          if (0xf < DAT_180bb8ec8) {
            puVar43 = DAT_180bb8eb0;
          }
          DAT_180bb8a8b = bVar47;
          FUN_180113930(&DAT_1808da978,puVar43,DAT_180bb8ec0);
          DAT_180bb8a8a = 0;
          DAT_180bb8a8c = bVar47 + 1;
          DAT_1808da948 = 0;
          puVar43 = &DAT_1808da938;
          if (0xf < DAT_1808da950) {
            puVar43 = DAT_1808da938;
          }
          *(undefined1 *)puVar43 = 0;
          lVar18 = FUN_1801ce280();
          uVar44 = auVar51._0_8_;
          if (lVar18 != 0) {
            puVar43 = (undefined8 *)(lVar18 + 0x20);
            if ((undefined8 **)puVar43 != &DAT_1808da958) {
              if (0xf < *(ulonglong *)(lVar18 + 0x38)) {
                puVar43 = (undefined8 *)*puVar43;
              }
              FUN_180113930(&DAT_1808da958,puVar43,*(undefined8 *)(lVar18 + 0x30));
            }
            uVar44 = auVar51._0_8_;
            if (bVar47) {
              if (*(char *)(lVar18 + 0xe3) != '\0') {
                lVar18 = lVar18 + 0xe8;
              }
              FUN_1801d42f0(&DAT_180bb92c0,lVar18);
              uVar44 = auVar51._0_8_;
            }
          }
        }
      }
      pppppplStack_a40 = (longlong ******)0x15;
      local_a48 = (undefined1  [8])"Cancel##cancel_create";
      cVar12 = FUN_1801cec70(local_a48,uVar44,7,1);
      if (cVar12 != '\0') {
        DAT_180bb8a8a = 0;
        pppppppuVar32 = local_398;
        if (0xf < local_380) {
          pppppppuVar32 = local_398[0];
        }
        FUN_180113930(&DAT_1808da958,pppppppuVar32,local_388);
      }
      auVar60 = ZEXT464(local_a10);
      lVar21 = local_9e8;
    }
LAB_1801d1ce8:
    FUN_18043c2a0();
    FUN_18015c010(local_270);
    FUN_18015c010(local_290);
    FUN_18015c010(local_2b0);
    FUN_18015c010(local_2d0);
    FUN_18015c010(local_2f8);
    FUN_18015c010(local_318);
    FUN_18015c010(local_338);
    FUN_18015c010(local_358);
    FUN_18015c010(local_378);
    FUN_18015c010(local_398);
    FUN_18015c010(local_3b8);
    fVar53 = auVar56._0_4_;
    fVar66 = auVar59._0_4_;
    bVar39 = local_a20;
  }
  if (bVar39 == 0) {
    fVar66 = fVar66 + fVar53 + *(float *)(lVar21 + 500);
    lVar21 = FUN_180439770();
    lVar18 = 0;
    if (*(longlong *)(lVar21 + 0x478) != *(longlong *)(lVar21 + 0x480)) {
      lVar18 = *(longlong *)(lVar21 + 0x480) + -0x78;
    }
    if (lVar18 != 0) {
      *(int *)(lVar18 + 0x30) = auVar62._0_4_;
      *(float *)(lVar18 + 0x34) = fVar66;
      *(undefined4 *)(lVar18 + 0x38) = 0;
    }
  }
  else {
    lVar21 = FUN_180439770();
    lVar18 = 0;
    if (*(longlong *)(lVar21 + 0x478) != *(longlong *)(lVar21 + 0x480)) {
      lVar18 = *(longlong *)(lVar21 + 0x480) + -0x78;
    }
    if (lVar18 != 0) {
      fVar66 = *(float *)(lVar18 + 0x38);
      if (auVar52._0_4_ < fVar66) {
        lVar21 = FUN_180439770();
        *(float *)(lVar18 + 0x34) = fVar66 + *(float *)(lVar21 + 500) + *(float *)(lVar18 + 0x34);
      }
      lVar21 = FUN_180439770();
      *(undefined4 *)(lVar18 + 0x30) = *(undefined4 *)(lVar21 + 0x1e8);
      *(undefined4 *)(lVar18 + 0x38) = 0;
    }
  }
  _local_a08 = (undefined1  [16])0x0;
  _local_a48 = (undefined1  [16])0x0;
  FUN_180172610(&DAT_180bb8af0,local_a08,local_a48);
  uVar19 = auVar60._0_8_;
  if (uStack_a00 == 0) {
    if ((DAT_180bb8a8c == 2) && (DAT_180bb8a8a == 0)) {
      puVar43 = (undefined8 *)FUN_180172510(&DAT_180bb8af0,&local_400);
      uVar19 = auVar60._0_8_;
      local_a48 = (undefined1  [8])*puVar43;
      pppppplStack_a40 = (longlong ******)puVar43[1];
      if (puVar43[1] != 0) goto LAB_1801d2efd;
    }
    uVar23 = (ulonglong)(uint)local_a0c;
  }
  else {
    local_a48 = local_a08;
    pppppplStack_a40 = (longlong ******)uStack_a00;
LAB_1801d2efd:
    auVar52 = ZEXT464((uint)local_a0c);
    FUN_1801d0060(local_a48,local_a0c,DAT_180bb8a7c,auVar60._0_8_);
    uVar23 = auVar52._0_8_;
    uVar19 = auVar60._0_8_;
  }
  local_a48 = (undefined1  [8])&DAT_180bb8f50;
  if (0xf < DAT_180bb8f68) {
    local_a48 = (undefined1  [8])DAT_180bb8f50;
  }
  pppppplStack_a40 = (longlong ******)DAT_180bb8f60;
  FUN_1801d0060(local_a48,uVar23,DAT_180bb8a64,uVar19);
  FUN_18043c2a0();
LAB_1801d2e11:
  lVar21 = 4;
  lVar18 = FUN_180439770();
  puVar43 = (undefined8 *)(lVar18 + 0x1b8);
  puVar34 = local_698;
  do {
    puVar29 = puVar34;
    puVar35 = puVar43;
    uVar19 = puVar29[1];
    uVar44 = puVar29[2];
    uVar7 = puVar29[3];
    *puVar35 = *puVar29;
    puVar35[1] = uVar19;
    puVar35[2] = uVar44;
    puVar35[3] = uVar7;
    uVar19 = puVar29[5];
    uVar44 = puVar29[6];
    uVar7 = puVar29[7];
    puVar35[4] = puVar29[4];
    puVar35[5] = uVar19;
    puVar35[6] = uVar44;
    puVar35[7] = uVar7;
    uVar19 = puVar29[9];
    uVar44 = puVar29[10];
    uVar7 = puVar29[0xb];
    puVar35[8] = puVar29[8];
    puVar35[9] = uVar19;
    puVar35[10] = uVar44;
    puVar35[0xb] = uVar7;
    uVar19 = puVar29[0xd];
    puVar35[0xc] = puVar29[0xc];
    puVar35[0xd] = uVar19;
    uVar19 = puVar29[0xf];
    puVar35[0xe] = puVar29[0xe];
    puVar35[0xf] = uVar19;
    lVar21 = lVar21 + -1;
    puVar43 = puVar35 + 0x10;
    puVar34 = puVar29 + 0x10;
  } while (lVar21 != 0);
  uVar19 = puVar29[0x11];
  uVar44 = puVar29[0x12];
  uVar7 = puVar29[0x13];
  puVar35[0x10] = puVar29[0x10];
  puVar35[0x11] = uVar19;
  puVar35[0x12] = uVar44;
  puVar35[0x13] = uVar7;
  uVar19 = puVar29[0x15];
  uVar44 = puVar29[0x16];
  uVar7 = puVar29[0x17];
  puVar35[0x14] = puVar29[0x14];
  puVar35[0x15] = uVar19;
  puVar35[0x16] = uVar44;
  puVar35[0x17] = uVar7;
  uVar19 = puVar29[0x19];
  puVar35[0x18] = puVar29[0x18];
  puVar35[0x19] = uVar19;
}



