// FUN_18032bde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032bde0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18032bde0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  short sVar5;
  int iVar6;
  ULONGLONG UVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [16];
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  longlong lVar13;
  byte bVar14;
  char cVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined **ppuVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [64];
  undefined1 auStack_ca8 [32];
  undefined **local_c88;
  undefined **local_c80;
  undefined8 *local_c78;
  undefined8 *local_c70;
  undefined8 **local_c68;
  undefined **local_c60;
  double *local_c58;
  double *local_c50;
  double *local_c48;
  double *local_c40;
  double *local_c38;
  double *local_c30;
  double *local_c28;
  double *local_c20;
  double *local_c18;
  double *local_c10;
  longlong local_c08;
  undefined8 *local_c00;
  double *local_bf8;
  undefined8 *local_bf0;
  double *local_be8;
  double *local_be0;
  longlong local_bd8;
  double *local_bd0;
  double *local_bc8;
  double *local_bc0;
  double *local_bb8;
  undefined8 *local_bb0;
  uint *local_ba8;
  undefined8 *local_ba0;
  int *local_b98;
  double *local_b90;
  double *local_b88;
  double *local_b80;
  double *local_b78;
  longlong local_b70;
  double *local_b68;
  char *local_b60;
  double *local_b58;
  double *local_b50;
  double *local_b48;
  double *local_b40;
  double *local_b38;
  double *local_b30;
  undefined4 *local_b28;
  undefined4 *local_b20;
  double *local_b18;
  uint *local_b10;
  double *local_b08;
  undefined8 *local_b00;
  double *local_af8;
  double *local_af0;
  longlong local_ae8;
  double *local_ae0;
  longlong local_ad8;
  longlong local_ad0;
  double *local_ac8;
  char **local_ac0;
  undefined1 *local_ab8;
  double *local_ab0;
  char **local_aa8;
  double *local_aa0;
  double *local_a98;
  double *local_a90;
  double *local_a88;
  undefined8 *local_a78;
  longlong local_a70;
  char local_a68;
  undefined8 local_a60;
  double local_a58;
  double local_a50;
  double local_a48;
  double local_a40;
  byte local_a38 [16];
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  float local_9c8;
  float fStack_9c4;
  float fStack_9c0;
  float fStack_9bc;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 local_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 *local_728;
  longlong lStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  longlong local_6e8;
  longlong lStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  double dStack_6b8;
  undefined8 uStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined8 uStack_698;
  undefined4 uStack_690;
  undefined2 uStack_68c;
  undefined2 uStack_68a;
  double local_688;
  byte bStack_680;
  byte bStack_67f;
  int iStack_67e;
  undefined2 uStack_67a;
  undefined6 uStack_678;
  undefined2 uStack_672;
  undefined2 uStack_670;
  undefined6 uStack_66e;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 *local_428;
  ulonglong uStack_420;
  undefined1 local_408 [4];
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  float local_3f8;
  float local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  uint local_3e4;
  undefined1 local_3e0;
  undefined4 local_3dc;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  char *local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  undefined8 local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined *local_2b8;
  undefined8 **ppuStack_2b0;
  double local_2a8;
  char *local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8 [2];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [16];
  char local_1a8 [8];
  undefined4 local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined1 local_180 [16];
  int local_170 [2];
  uint local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  float fStack_144;
  uint uStack_140;
  float fStack_13c;
  uint local_138 [2];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined4 local_f4;
  ulonglong local_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_ca8;
  local_a60 = (double)((ulonglong)local_a60 & 0xffffffff00000000);
  if (DAT_180b8fd50 == '\0') {
  }
  local_298 = CONCAT71(uRam0000000180b8fd51,DAT_180b8fd50);
  uStack_290 = _DAT_180b8fd58;
  uStack_288 = uRam0000000180b8fd60;
  uStack_280 = uRam0000000180b8fd68;
  local_278 = _DAT_180b8fd70;
  uStack_270 = _DAT_180b8fd78;
  uStack_268 = _DAT_180b8fd80;
  uStack_260 = _DAT_180b8fd88;
  local_258 = _DAT_180b8fd90;
  uStack_250 = _DAT_180b8fd98;
  uStack_248 = uRam0000000180b8fda0;
  uStack_240 = _DAT_180b8fda8;
  uVar4 = uStack_240;
  local_238 = _DAT_180b8fdb0;
  uStack_230 = _DAT_180b8fdb8;
  uStack_228 = _DAT_180b8fdc0;
  uStack_220 = uRam0000000180b8fdc8;
  local_218 = _DAT_180b8fdd0;
  uStack_210 = _DAT_180b8fdd8;
  uStack_208 = _DAT_180b8fde0;
  uStack_200 = _DAT_180b8fde8;
  local_1f8 = _DAT_180b8fdf0;
  uStack_1f0 = uRam0000000180b8fdf8;
  local_1e8[0] = PTR_DAT_180b8fe00;
  DAT_180b8fd50 = 0;
  if (param_2 == (undefined8 *)0x0) {
    DAT_180b8fd50 = 0;
  }
  if ((char)(uRam0000000180b8fd60 >> 0x20) == '\0') {
    uStack_240._0_4_ = (float)_DAT_180b8fda8;
    if ((float)uStack_240 < 0.0) {
      DAT_180b8fd50 = 0;
    }
    if (6.0 < (float)uStack_240) {
      DAT_180b8fd50 = 0;
    }
  }
  auVar33 = ZEXT864(0);
  local_a78 = param_2;
  uStack_240 = uVar4;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_1d8 = _DAT_180bb8890;
  local_1b8 = _DAT_180bb88b0;
  auVar33 = ZEXT1664(auVar33._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
  iVar6 = DAT_180c6f3a0;
  lVar13 = 0;
  if (param_2[8] != 0) {
    lVar13 = param_2[8] + 0x10;
  }
  if (local_1d8._8_8_ == 0) {
  }
  if (lVar13 == 0) {
  }
  if ((DAT_180c6f3a0 == 0) && (UVar7 = GetTickCount64(), DAT_180c6f3b8 <= UVar7)) {
    local_108 = &DAT_1808ff9c0;
    iVar6 = FUN_1805f68d0(&DAT_1808ff9c0);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808ffa0c == 0x7fffffff) {
      DAT_1808ffa0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6f3a0 == 0) && (DAT_180c6f3b8 <= UVar7)) {
      DAT_180c6f3a0 = FUN_1804174b0("C_BasePlayerPawn");
      if (DAT_180c6f3a0 == 0) {
        DAT_180c6f3b8 = UVar7 + 1000;
      }
      else {
        DAT_180c6f3b8 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c6f3a0;
    FUN_1805f68fc(&DAT_1808ff9c0);
  }
  auVar29 = auVar33._0_16_;
  lVar16 = *(longlong *)((longlong)iVar6 + local_1d8._8_8_);
  if (lVar16 == 0) {
  }
  local_a68 = DAT_180cc8668;
  lVar18 = *(longlong *)(lVar13 + 0x30);
  if ((lVar18 == 0) || (lVar18 == -0x10)) {
    fVar39 = 0.0;
  }
  else {
    fVar39 = *(float *)(lVar18 + 0x1c);
  }
  local_a48 = (double)CONCAT44(local_a48._4_4_,fVar39);
  fVar37 = *(float *)(lVar13 + 0x48);
  fVar38 = *(float *)(lVar13 + 0x4c);
  bVar14 = *(byte *)(param_2 + 0xc) >> 2 & 1;
  iVar6 = 0;
  local_170[0] = 0;
  fVar36 = 0.0;
  uVar2 = *(uint *)(lVar13 + 0x10);
  uVar35 = 0x7fffffff;
  fVar25 = 1e-06;
  if (0 < (int)uVar2) {
    plVar17 = *(longlong **)(lVar13 + 0x18);
    uVar19 = (ulonglong)uVar2;
    do {
      plVar17 = plVar17 + 1;
      lVar18 = 0;
      if (*plVar17 != 0) {
        lVar18 = *plVar17 + 0x10;
      }
      if ((lVar18 != 0) && (1e-06 < ABS(*(float *)(lVar18 + 0x24)))) {
        iVar6 = iVar6 + 1;
        fVar36 = fVar36 + *(float *)(lVar18 + 0x24);
      }
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
    local_170[0] = iVar6;
  }
  iVar6 = local_170[0];
  auVar32 = ZEXT464(0x3a83126f);
  auVar28 = auVar32._0_16_;
  local_138[0] = uVar2;
  if (DAT_180b8fd1d != '\0') {
    auVar40 = ZEXT464((uint)(fVar39 - DAT_180b8fd10));
    fVar25 = 1e-06;
    fVar23 = DAT_180b8fd10;
    uVar35 = 0x7fffffff;
    sVar5 = thunk_FUN_180624430(fVar39 - DAT_180b8fd10);
    auVar29 = auVar33._0_16_;
    fVar22 = auVar33._0_4_;
    auVar28 = auVar32._0_16_;
    if (sVar5 < 1) {
      fVar22 = (float)FUN_180615070(auVar40._0_8_,0x43b40000);
      auVar29 = auVar33._0_16_;
      auVar28 = auVar32._0_16_;
      fVar23 = DAT_180b8fd10;
    }
    if ((((auVar28._0_4_ < (float)((uint)fVar22 & uVar35)) ||
         (0.01 < (float)((uint)(fVar37 - DAT_180b8fd14) & uVar35))) ||
        (0.01 < (float)((uint)(fVar38 - DAT_180b8fd18) & uVar35))) ||
       ((bVar14 != DAT_180b8fd1c || (0 < iVar6)))) {
      dVar30 = (double)DAT_180b8fd18;
      dVar26 = (double)fVar37;
      local_a50 = (double)fVar22;
      local_728 = (undefined8 *)0xdb35e39b27e1c185;
      lStack_720 = 0xa05181ee77d57a06;
      uStack_718 = 0x929654b1461b7377;
      uStack_710 = 0xa5cea54bfef7110;
      local_708 = 0xa70c9f7f916b7e19;
      uStack_700 = 0x2b2d6d82aa402c0a;
      uStack_6f8 = 0xc064ed9510bc010b;
      uStack_6f0 = 0xfec09918395f26c4;
      local_6e8 = 0x835e2313e2c48f8d;
      lStack_6e0 = 0xf863c3261a551f0e;
      uStack_6d8 = 0x56a0bc092c25563f;
      uStack_6d0 = 0x67ff882c0a9bdf38;
      local_6c8 = 0xe9fbbd57d9292e61;
      uStack_6c0 = 0x24c1d5fafa9ec992;
      dStack_6b8 = -3.274053720118996e+157;
      uStack_6b0 = 9.219521739633918e-27;
      local_6a8 = -3.785023793442884e-206;
      dStack_6a0 = -8.922102202732586e+28;
      uStack_698._0_4_ = 0x60dada07;
      uStack_698._4_4_ = 0x99be47e1;
      uStack_690 = 0xa2394520;
      uStack_68c = 0xa904;
      uStack_68a = 0x1047;
      local_688 = -2.3351055037742689e-181;
      bStack_680 = 0x1a;
      bStack_67f = 0xfc;
      iStack_67e = 0x7532caa6;
      uStack_67a = 0x91e9;
      uStack_678 = 0x8c455ded471b;
      uStack_672 = 0x4f94;
      local_2a0 = (char *)0xb10776480ca86bd4;
      uStack_670 = 0x6bd4;
      uStack_66e = 0xb10776480ca8;
      local_a28 = 0x75736c657869705b;
      uStack_a20 = 0x205d6475612d6672;
      uStack_a18 = 0x66207d7b3d646d63;
      uStack_a10 = 0x6d6f63206c616e69;
      local_a08 = 0x66696420646e616d;
      uStack_a00 = 0x6f72662073726566;
      uStack_9f8 = 0x6c7020656874206d;
      uStack_9f0 = 0x6e6f2064656e6e61;
      local_9e8 = 0x7b20776179203a65;
      uStack_9e0 = 0x7b3e2d7d66342e3a;
      uStack_9d8 = 0x6428207d66342e3a;
      uStack_9d0 = 0x297d66342e3a7b3d;
      local_9c8 = 4.7417842e+30;
      fStack_9c4 = 1.7884541e+22;
      fStack_9c0 = 4.240086e-11;
      fStack_9bc = 1.4404077e-11;
      uStack_9b8 = 0x207d66322e3a7b3e;
      uStack_9b0 = 0x2e3a7b207466656c;
      local_9a8 = 0x2e3a7b3e2d7d6632;
      uStack_9a0 = 0x6b637564207d6632;
      uStack_998 = 0x207d7b3e2d7d7b20;
      uStack_990 = 0x706574735f776179;
      local_988 = 0x6d7573207d7b3d73;
      uStack_980 = 0x207d66342e3a7b3d;
      uStack_978 = 0x7d7b3d7370657473;
      uStack_970 = 10;
      uVar19 = 0xffffffffffffffff;
      do {
        uStack_420 = uVar19 + 1;
        lVar18 = uVar19 + 0x11;
        uVar19 = uStack_420;
      } while (local_a38[lVar18] != 0);
      local_428 = &local_a28;
      local_a60 = dVar26;
      if (DAT_180bbeabc != '\0') {
        uStack_6c0 = uStack_290;
        local_728 = (undefined8 *)0x3000000000000000;
        dStack_6b8 = (double)fVar23;
        lStack_720 = 0x8000000000000008;
        uStack_6b0 = (double)fVar39;
        uStack_718 = 0x8000000000000010;
        local_6a8 = local_a50;
        uStack_710 = 0x8000000000000018;
        dStack_6a0 = (double)DAT_180b8fd14;
        local_708 = 0x8000000000000020;
        uStack_698._0_4_ = SUB84(dVar26,0);
        uStack_698._4_4_ = (undefined4)((ulonglong)dVar26 >> 0x20);
        uStack_700 = 0x8000000000000028;
        uStack_690 = SUB84(dVar30,0);
        uStack_68c = (undefined2)((ulonglong)dVar30 >> 0x20);
        uStack_68a = (undefined2)((ulonglong)dVar30 >> 0x30);
        uStack_6f8 = 0x8000000000000030;
        local_688 = (double)fVar38;
        uStack_6f0 = 0x8000000000000038;
        bStack_680 = DAT_180b8fd1c;
        local_6e8 = 0x5000000000000040;
        bStack_67f = bVar14;
        lStack_6e0 = 0x5000000000000041;
        iStack_67e = iVar6;
        uStack_6d8 = 0x1000000000000042;
        uStack_67a = SUB82((double)fVar36,0);
        uStack_678 = (undefined6)((ulonglong)(double)fVar36 >> 0x10);
        uStack_6d0 = 0x8000000000000046;
        uStack_672 = (undefined2)uVar2;
        uStack_670 = (undefined2)(uVar2 >> 0x10);
        local_6c8 = 0x100000000000004e;
        local_108 = (undefined *)0xd;
        uStack_100 = &local_728;
        fStack_19c = 0.0;
        fStack_198 = 0.0;
        fStack_194 = 0.0;
        fStack_190 = 0.0;
        fStack_18c = 0.0;
        uStack_188 = 0xf;
        local_1a0 = 0;
        local_a60 = (double)CONCAT44(uStack_698._4_4_,1);
        uVar19 = 0;
        uVar20 = 0;
        do {
          bVar14 = (byte)((ulonglong)(&local_728)[uVar20] >> 0x3c);
          if (bVar14 == 0xc) {
            uVar19 = uVar19 + *(longlong *)
                               ((longlong)&dStack_6b8 +
                               ((ulonglong)(&local_728)[uVar20] & 0xfffffffffffffff));
          }
          else if (bVar14 == 0xb) {
            uVar19 = uVar19 + 0x20;
          }
          else {
            uVar19 = uVar19 + 8;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 < 0xd);
        lVar18 = uStack_420 + uVar19;
        if (CARRY8(uStack_420,uVar19)) {
          lVar18 = -1;
        }
        auVar33 = ZEXT1664(auVar28);
        auVar32 = ZEXT1664(auVar29);
        uStack_698 = dVar26;
        FUN_1800f5540(&local_1a0,lVar18);
        local_2b8 = local_108;
        ppuStack_2b0 = uStack_100;
        local_c88 = (undefined **)0x0;
        FUN_1801da050(&local_108,&local_1a0,&local_428,&local_2b8);
        FUN_18030e280(&local_1a0);
        FUN_18015c010(&local_1a0);
        auVar29 = auVar32._0_16_;
        auVar28 = auVar33._0_16_;
      }
    }
  }
  local_108 = (undefined *)CONCAT71(local_108._1_7_,DAT_180b8fc98);
  local_108 = (undefined *)CONCAT44(DAT_180b8fca4,(undefined4)local_108);
  uStack_100 = (undefined8 **)CONCAT44(DAT_180b8fca0,DAT_180b8fc9c);
  local_f8 = DAT_180b8fc8c;
  local_f4 = DAT_180b8fc90;
  uStack_698._4_4_ = 0;
  uStack_690 = 0;
  uStack_68c = 0;
  uStack_718 = local_1d8._0_8_;
  uStack_710 = local_1d8._8_8_;
  local_708 = local_1d8._16_8_;
  uStack_700 = local_1d8._24_8_;
  uStack_6f8 = local_1b8._0_8_;
  uStack_6f0 = local_1b8._8_8_;
  local_c88 = (undefined **)&local_108;
  auVar33 = ZEXT1664(auVar28);
  auVar32 = ZEXT1664(auVar29);
  local_728 = param_2;
  lStack_720 = lVar13;
  local_6e8 = lVar16;
  pauVar8 = (undefined1 (*) [32])FUN_18030dbd0(&local_1a0,local_1d8._8_8_,lVar16);
  auVar1 = *pauVar8;
  local_e8 = *(ulonglong *)pauVar8[1];
  auVar31._8_8_ = 0;
  auVar31._0_8_ = local_e8;
  auVar29 = auVar1._0_16_;
  uVar24 = vextractps_avx(auVar29,1);
  uStack_6d8 = CONCAT44(uVar24,auVar1._0_4_);
  uVar24 = vextractps_avx(auVar29,2);
  uVar3 = vextractps_avx(auVar29,3);
  uStack_6d0 = CONCAT44(uVar3,uVar24);
  auVar28 = auVar1._16_16_;
  uVar24 = vextractps_avx(auVar28,1);
  local_6c8 = CONCAT44(uVar24,auVar1._16_4_);
  uVar24 = vextractps_avx(auVar28,2);
  uVar3 = vextractps_avx(auVar28,3);
  uStack_6c0 = CONCAT44(uVar3,uVar24);
  auVar29 = vshufps_avx(auVar31,auVar31,0x55);
  dStack_6b8 = (double)CONCAT44(auVar29._0_4_,(int)local_e8);
  uStack_6b0 = (double)CONCAT44(uStack_280._4_4_,*(undefined4 *)(pauVar8[1] + 8));
  local_6a8 = (double)local_278;
  dStack_6a0 = (double)uStack_270;
  uStack_698._0_4_ = (float)uStack_268;
  auVar33 = ZEXT1664(auVar33._0_16_);
  auVar32 = ZEXT1664(auVar32._0_16_);
  auVar40 = ZEXT1664(auVar28);
  fVar39 = (float)uStack_270;
  fVar22 = uStack_270._4_4_;
  lStack_6e0 = FUN_1803032c0(local_1d8._8_8_,lVar16);
  auVar29 = auVar32._0_16_;
  fVar23 = auVar33._0_4_;
  auVar28 = auVar40._0_16_;
  if (*(char *)(lStack_6e0 + 0x48) == '\0') {
  }
  local_168 = local_168 & 0xffffff00;
  fStack_164 = 0.0;
  fStack_160 = 0.0;
  fStack_15c = 0.0;
  fStack_158 = 0.0;
  fStack_154 = auVar32._0_4_;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_140 = uStack_140 & 0xffffff00;
  uVar24 = 0xbf800000;
  fStack_13c = -1.0;
  cVar15 = '\0';
  local_1a8[0] = '\0';
  fStack_150 = fStack_154;
  fStack_144 = fStack_154;
  if (local_a68 == '\x01') {
    if (uStack_288._4_1_ == '\0') {
      if (fStack_154 <= (float)uStack_240) {
        uVar24 = 0x40400000;
        if ((float)uStack_240 <= 3.0) goto LAB_18032cebd;
      }
    }
    else {
LAB_18032cebd:
      local_2a0._0_5_ = (uint5)(uint)local_2a0;
      local_c88 = (undefined **)local_2a0;
      FUN_1804136a0(uVar24,&local_a28,param_2,local_1d8);
      auVar29 = auVar32._0_16_;
      fVar23 = auVar33._0_4_;
      auVar28 = auVar40._0_16_;
      if (uStack_978._4_1_ != '\0') {
        if (local_a28._1_1_ != '\0') {
          sVar5 = thunk_FUN_180624430(uStack_9d0 & 0xffffffff);
          auVar29 = auVar32._0_16_;
          fVar23 = auVar33._0_4_;
          auVar28 = auVar40._0_16_;
          if (sVar5 < 1) {
            sVar5 = thunk_FUN_180624430(uStack_9d0._4_4_);
            auVar29 = auVar32._0_16_;
            fVar23 = auVar33._0_4_;
            auVar28 = auVar40._0_16_;
            if (sVar5 < 1) {
              sVar5 = thunk_FUN_180624430(local_9c8);
              auVar29 = auVar32._0_16_;
              fVar23 = auVar33._0_4_;
              auVar28 = auVar40._0_16_;
              if (sVar5 < 1) {
                sVar5 = thunk_FUN_180624430(fStack_9c4);
                auVar29 = auVar32._0_16_;
                fVar23 = auVar33._0_4_;
                auVar28 = auVar40._0_16_;
                if (sVar5 < 1) {
                  sVar5 = thunk_FUN_180624430(fStack_9c0);
                  auVar29 = auVar32._0_16_;
                  fVar23 = auVar33._0_4_;
                  auVar28 = auVar40._0_16_;
                  if (sVar5 < 1) {
                    sVar5 = thunk_FUN_180624430(fStack_9bc);
                    auVar29 = auVar32._0_16_;
                    fVar23 = auVar33._0_4_;
                    auVar28 = auVar40._0_16_;
                    if (sVar5 < 1) {
                      cVar15 = '\x01';
                    }
                  }
                }
              }
            }
          }
        }
        auVar31 = local_180;
        local_1a0 = CONCAT31(local_1a0._1_3_,cVar15);
        fStack_19c = (float)uStack_9d0;
        fStack_198 = (float)(uStack_9d0 >> 0x20);
        fStack_194 = local_9c8;
        fStack_190 = fStack_9c4;
        fStack_18c = fStack_9c0;
        uStack_188 = CONCAT44(uStack_9b0._4_4_,fStack_9bc);
        local_180._0_4_ = (undefined4)local_9a8;
        auVar27 = local_180;
        local_180._9_7_ = auVar31._9_7_;
        local_180._0_8_ = auVar27._0_8_;
        local_180[8] = (undefined1)uStack_998;
        local_168 = local_1a0;
        fStack_164 = fStack_19c;
        fStack_160 = fStack_198;
        fStack_15c = local_9c8;
        fStack_158 = fStack_9c4;
        fStack_154 = fStack_9c0;
        fStack_150 = fStack_9bc;
        uStack_14c = uStack_9b0._4_4_;
        auVar31 = vinsertps_avx(local_180,ZEXT416((uint)uStack_9a0),0x10);
        local_180 = vinsertps_avx(auVar31,ZEXT416(uStack_9a0._4_4_),0x30);
        uStack_148 = local_180._0_4_;
        fStack_144 = local_180._4_4_;
        uStack_140 = local_180._8_4_;
        fStack_13c = local_180._12_4_;
        local_1a8[0] = cVar15;
      }
    }
  }
  if ((fVar23 < (float)((uint)fVar37 & uVar35)) || (fVar23 < (float)((uint)fVar38 & uVar35))) {
    auVar32 = ZEXT1664(auVar29);
    auVar40 = ZEXT1664(auVar28);
    fVar23 = (float)FUN_180636c80();
    fVar23 = fVar23 * 57.295776 + local_a48._0_4_;
    auVar33 = ZEXT464((uint)fVar23);
    sVar5 = thunk_FUN_180624430(fVar23);
    auVar29 = auVar32._0_16_;
    auVar28 = auVar40._0_16_;
    if (sVar5 < 1) {
      uVar24 = FUN_180615070(auVar33._0_8_,0x43b40000);
      auVar29 = auVar32._0_16_;
      auVar28 = auVar40._0_16_;
      local_a58 = (double)CONCAT44(local_a58._4_4_,uVar24);
      goto LAB_18032d0ab;
    }
  }
  local_a58 = (double)CONCAT44(local_a58._4_4_,auVar29._0_4_);
LAB_18032d0ab:
  fVar23 = fVar38 * fVar38 + fVar37 * fVar37;
  if (fVar23 < 0.0) {
    auVar33 = ZEXT1664(auVar29);
    auVar32 = ZEXT1664(auVar28);
    fVar23 = (float)FUN_18061e150();
    auVar29 = auVar33._0_16_;
    auVar28 = auVar32._0_16_;
  }
  else {
    fVar23 = SQRT(fVar23);
  }
  local_a40 = (double)CONCAT44(local_a40._4_4_,fVar23);
  auVar28 = vminss_avx(auVar28,ZEXT416((uint)(fVar23 * auVar28._0_4_)));
  local_a50 = (double)CONCAT44(local_a50._4_4_,auVar28._0_4_);
  auVar28 = ZEXT416((uint)uStack_250._4_4_);
  fVar23 = uStack_250._4_4_ * uStack_250._4_4_ + (float)uStack_248 * (float)uStack_248 +
           uStack_248._4_4_ * uStack_248._4_4_;
  if (fVar23 < 0.0) {
    auVar33 = ZEXT1664(auVar29);
    auVar32 = ZEXT464((uint)uStack_250._4_4_);
    fVar23 = (float)FUN_18061e150();
    auVar28 = auVar32._0_16_;
    auVar29 = auVar33._0_16_;
  }
  else {
    fVar23 = SQRT(fVar23);
  }
  auVar33 = ZEXT1664(auVar29);
  auVar32 = ZEXT1664(auVar28);
  sVar5 = thunk_FUN_180624430();
  auVar29 = auVar33._0_16_;
  if ((0 < sVar5) || (fVar23 < fVar25)) {
    fVar23 = 1.0;
    auVar27 = auVar29;
    auVar28 = auVar29;
  }
  else {
    auVar27._0_4_ = auVar32._0_4_ / fVar23;
    auVar27._4_12_ = auVar32._4_12_;
    auVar28._0_4_ = (float)uStack_248 / fVar23;
    auVar28._4_12_ = SUB6012((undefined1  [60])0x0,0);
    fVar23 = uStack_248._4_4_ / fVar23;
  }
  auVar28 = vunpcklps_avx(auVar27,auVar28);
  local_108 = auVar28._0_8_;
  uStack_100 = (undefined8 **)CONCAT44(uStack_100._4_4_,fVar23);
  local_1a0 = 0;
  fStack_19c = 1e+09;
  fStack_198 = 1.0;
  fStack_194 = 0.0;
  fStack_190 = 0.0;
  auVar40 = ZEXT1664(auVar29);
  fStack_18c = auVar33._0_4_;
  local_a60._0_4_ = NAN;
  local_2a0 = "n/a";
  uStack_188._0_4_ = (uint)fStack_18c;
  if (cVar15 == '\0') {
    auVar34 = ZEXT464(0x4e6e6b28);
  }
  else {
    local_3e8 = 0;
    local_3e0 = 0;
    local_3dc = 0xbf800000;
    local_408[0] = 1;
    local_404 = uStack_280._4_4_;
    local_400 = (float)local_278;
    local_3fc = local_278._4_4_;
    local_3f0 = (float)uStack_268;
    local_3ec = uStack_268._4_4_;
    local_c80 = (undefined **)CONCAT44(local_c80._4_4_,0x41400000);
    local_c88 = (undefined **)&local_108;
    local_3f8 = fVar39;
    local_3f4 = fVar22;
    local_3e4 = (uint)fStack_18c;
    pauVar9 = (undefined1 (*) [16])FUN_18030d8f0(&local_428,&local_728,local_408,&local_168);
    auVar29 = *pauVar9;
    auVar32 = ZEXT1664(auVar29);
    local_1a0 = auVar29._0_4_;
    fStack_19c = auVar29._4_4_;
    fStack_198 = auVar29._8_4_;
    fStack_194 = auVar29._12_4_;
    fStack_190 = (float)*(undefined8 *)pauVar9[1];
    fStack_18c = (float)((ulonglong)*(undefined8 *)pauVar9[1] >> 0x20);
    uStack_188._0_4_ = *(uint *)(pauVar9[1] + 8);
    if (0.001 < local_a40._0_4_) {
      auVar40 = ZEXT464((uint)(local_a58._0_4_ * 0.017453292));
      fVar25 = (float)FUN_180638e00(local_a58._0_4_ * 0.017453292);
      fVar25 = fVar25 * (fStack_154 - fVar22);
      fVar23 = (float)FUN_180637540(auVar40._0_8_);
      auVar29 = auVar32._0_16_;
      local_a60._0_4_ = fVar25 + fVar23 * (fStack_158 - fVar39);
    }
    local_2a0 = "none";
    auVar28 = vshufps_avx(auVar29,auVar29,0x55);
    auVar34 = ZEXT1664(auVar28);
    if (local_238._4_1_ != '\0') {
      if (local_238._5_1_ == auVar29[2]) {
        if ((float)((uint)((float)uStack_230 - fStack_150) & uVar35) <= 0.2) {
          if (auVar28._0_4_ < 1e+08) {
            local_2a0 = "gap_after";
            if ((float)((uint)(uStack_230._4_4_ - auVar28._0_4_) & uVar35) <= 0.06) {
              local_2a0 = "none";
            }
          }
        }
        else {
          local_2a0 = "vz_end";
        }
      }
      else {
        local_2a0 = "contact(model no, engine yes)";
        if (local_238._5_1_ != '\0') {
          local_2a0 = "contact(model yes, engine no)";
        }
      }
    }
    DAT_180b8fcdc = 1;
    DAT_180b8fce0 = uStack_290;
    _DAT_180b8fce8 = CONCAT44(fStack_160,fStack_164);
    DAT_180b8fcf0 = fStack_15c;
    _DAT_180b8fcf4 = CONCAT44(fStack_154,fStack_158);
    DAT_180b8fcfc = fStack_150;
    _DAT_180b8fd00 = uStack_14c;
    _DAT_180b8fd04 = uStack_148;
    DAT_180b8fd08 = fStack_144;
    DAT_180b8fd0c = (undefined1)uStack_140;
    auVar40 = ZEXT464((uint)fStack_18c);
    auVar32 = ZEXT464((uint)uStack_250._4_4_);
  }
  local_130 = (undefined1  [16])0x0;
  local_120 = (undefined1  [16])0x0;
  FUN_18015ba30(local_130,&DAT_1807d30f8,1);
  iVar6 = 0;
  if (0 < (int)uVar2) {
    lVar16 = 0;
    do {
      if (0x3f < lVar16) break;
      lVar18 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 8 + lVar16);
      lVar11 = 0;
      if (lVar18 != 0) {
        lVar11 = lVar18 + 0x10;
      }
      if (lVar11 != 0) {
        local_c78 = (undefined8 *)(double)*(float *)(lVar11 + 0x24);
        local_c88 = (undefined **)(double)*(float *)(lVar11 + 0x14);
        ppuVar21 = &PTR_180700558;
        if (iVar6 != 0) {
          ppuVar21 = (undefined **)&DAT_1807d30d8;
        }
        local_c80 = *(undefined ***)(lVar11 + 8);
        FUN_18015abc0(&local_108,0x28,"%s%.3f/b%llx/y%.3f",ppuVar21);
        lVar18 = -1;
        do {
          lVar11 = lVar18 + 1;
          lVar18 = lVar18 + 1;
        } while (*(char *)((longlong)&local_108 + lVar11) != '\0');
        FUN_18015b2a0(local_130,&local_108);
      }
      iVar6 = iVar6 + 1;
      lVar16 = lVar16 + 8;
    } while (iVar6 < (int)uVar2);
    param_2 = local_a78;
  }
  FUN_18015b2a0(local_130,&DAT_1807d32dc,1);
  fVar23 = auVar32._0_4_;
  fVar25 = auVar33._0_4_;
  local_a40 = (double)(float)local_1f8;
  local_3d0 = (double)uStack_200._4_4_;
  local_3d8 = (double)(float)uStack_200;
  local_3c8 = (double)uStack_208._4_4_;
  local_3c0 = "model";
  if ((char)uStack_208 != '\0') {
    local_3c0 = "learned";
  }
  local_3b8 = (double)uStack_210._4_4_;
  local_3b0 = (double)(fStack_150 - uStack_210._4_4_);
  auVar29 = vcmpss_avx(auVar34._0_16_,ZEXT416(0x4cbebc20),1);
  auVar29 = vblendvps_avx(SUB6416(ZEXT464(0xbf800000),0),auVar34._0_16_,auVar29);
  local_3a8 = (double)auVar29._0_4_;
  local_3a0 = (double)fStack_194;
  local_398 = (double)auVar40._0_4_;
  local_a60 = (double)(float)local_a60;
  local_390 = (double)fStack_13c;
  local_388 = (double)fStack_144;
  local_380 = (double)fStack_150;
  local_378 = (double)fStack_154;
  local_370 = (double)fStack_158;
  local_368 = (double)fStack_15c;
  local_360 = (double)fStack_160;
  local_358 = (double)fStack_164;
  local_350 = (double)uStack_230._4_4_;
  local_348 = (double)(float)uStack_230;
  local_340 = (double)(float)uStack_228;
  local_338 = (double)uStack_228._4_4_;
  local_330 = (double)fVar36;
  local_328 = param_2[0xc];
  local_a50 = (double)local_a50._0_4_;
  local_a58 = (double)local_a58._0_4_;
  local_320 = (double)fVar38;
  local_318 = (double)fVar37;
  local_a48 = (double)local_a48._0_4_;
  local_310 = (double)local_258._4_4_;
  local_308 = (double)uStack_260._4_4_;
  fVar37 = fVar22 * fVar22 + fVar39 * fVar39;
  if (fVar37 != fVar25) {
    if (fVar37 < 0.0) {
      fVar25 = (float)FUN_18061e150(fVar37);
      fVar23 = auVar32._0_4_;
    }
    else {
      fVar25 = SQRT(fVar37);
    }
  }
  local_300 = (double)fVar25;
  local_2f8 = (double)(float)uStack_268;
  local_2f0 = (double)fVar22;
  local_2e8 = (double)fVar39;
  local_2e0 = (double)local_278._4_4_;
  local_2d8 = (double)(float)local_278;
  local_2a8 = (double)uStack_280._4_4_;
  local_2d0 = (double)uStack_240._4_4_;
  local_2c8 = (double)(float)uStack_240;
  local_2c0 = (double)uStack_248._4_4_;
  local_2b8 = (undefined *)(double)(float)uStack_248;
  local_428 = (undefined8 *)(double)fVar23;
  local_a38[4] = 0x26;
  local_a38[5] = 0;
  local_a38[6] = 0;
  local_a38[7] = 0;
  local_a38[0] = 0;
  local_a38[1] = 0;
  local_a38[2] = 0;
  local_a38[3] = 0;
  pbVar12 = local_a38;
  if (-1 < (int)uStack_280) {
    pbVar12 = (byte *)&uStack_280;
  }
  pbVar10 = local_a38 + 4;
  if ((int)uStack_280 < 0x27) {
    pbVar10 = pbVar12;
  }
  uVar19 = (ulonglong)*pbVar10;
  if (0x26 < uVar19) {
    uVar19 = 0x26;
  }
  local_108 = (undefined *)FUN_18030e660(uStack_288 & 0xff);
  local_728 = (undefined8 *)0xdb35e39b27e1c185;
  lStack_720 = 0xa05181ee77d57a06;
  uStack_718 = 0x929654b1461b7377;
  uStack_710 = 0xa5cea54bfef7110;
  local_708 = 0xa70c9f7f916b7e19;
  uStack_700 = 0x2b2d6d82aa402c0a;
  uStack_6f8 = 0xc064ed9510bc010b;
  uStack_6f0 = 0xfec09918395f26c4;
  local_6e8 = 0x835e2313e2c48f8d;
  lStack_6e0 = 0xf863c3261a551f0e;
  uStack_6d8 = 0x56a0bc092c25563f;
  uStack_6d0 = 0x67ff882c0a9bdf38;
  local_6c8 = 0xe9fbbd57d9292e61;
  uStack_6c0 = 0x24c1d5fafa9ec992;
  dStack_6b8 = -3.274053720118996e+157;
  uStack_6b0 = 9.219521739633918e-27;
  local_6a8 = -3.785023793442884e-206;
  dStack_6a0 = -8.922102202732586e+28;
  uStack_698._0_4_ = 0x60dada07;
  uStack_698._4_4_ = 0x99be47e1;
  uStack_690 = 0xa2394520;
  uStack_68c = 0xa904;
  uStack_68a = 0x1047;
  local_688 = -2.3351055037742689e-181;
  bStack_680 = 0x1a;
  bStack_67f = 0xfc;
  iStack_67e = 0x7532caa6;
  uStack_67a = 0x91e9;
  uStack_678 = 0x8c455ded471b;
  uStack_672 = 0x4f94;
  uStack_670 = 0x6bd4;
  uStack_66e = 0xb10776480ca8;
  local_668 = 0x35a5004309b1b61d;
  uStack_660 = 0x5b5a30d674a48d9e;
  uStack_658 = 0xa73d3b392572a64f;
  uStack_650 = 0x8edd3f5c2400c2c8;
  local_648 = 0xefe67c07e4e44b71;
  uStack_640 = 0xf3b0b42a9dc4e322;
  uStack_638 = 0x617eb6fd00a53ba3;
  uStack_630 = 0x2de935c0128ee4fc;
  local_628 = 0x478f2afbac69aaa5;
  uStack_620 = 0xcbdcc34e14e75ba6;
  uStack_618 = 0xfcb4b591bb2a4897;
  uStack_610 = 0xed8a82b4c2a70f30;
  local_608 = 0xfd656f5fa97c17b9;
  uStack_600 = 0x4883c462eb7a3faa;
  uStack_5f8 = 0x1db6975e079f42b;
  uStack_5f0 = 0x8f8784786e324e64;
  local_5e8 = 0xb680a373d1d6ccad;
  uStack_5e0 = 0xda10e0628380eae;
  uStack_5d8 = 0xad27f9e9312dc35f;
  uStack_5d0 = 0x6c20190c997e96d8;
  local_5c8 = 0x4082fb37de319b81;
  uStack_5c0 = 0x6cc6aa5ad1b352b2;
  uStack_5b8 = 0x13c5942d27926233;
  uStack_5b0 = 0x54c6ecf04a09160c;
  local_5a8 = 0xd6bec9abf99af0b5;
  uStack_5a0 = 0x59cf2d7ec27f4fb6;
  uStack_598 = 0xf01717c178eb73a7;
  uStack_590 = 0x3dd982e468f694c0;
  local_588 = 0x48d628fc43b7e49;
  uStack_580 = 0xfacaa192f5bf653a;
  uStack_578 = 0xbbedd3a5e275303b;
  uStack_570 = 0x908615287216b474;
  local_568 = 0x68c780a3f8c3f33d;
  uStack_560 = 0x49611936b9402b3e;
  uStack_558 = 0xa17a1199b7f3e0ef;
  uStack_550 = 0x2c8ad9bc84f8cc68;
  local_548 = 0x47d9e26759bcbb11;
  uStack_540 = 0xc4ab358aab5778c2;
  uStack_538 = 0x808c735d18eca8c3;
  uStack_530 = 0x5c1dd420dbb3be1c;
  local_528 = 0x2d66205b2f3b6bc5;
  uStack_520 = 0xf281beae7f2f2446;
  uStack_518 = 0xe4c691714d751db7;
  uStack_510 = 0x5c8d2714c7491b50;
  local_508 = 0xf93cdc3f98c52859;
  uStack_500 = 0x7d5daa42b199d64a;
  uStack_4f8 = 0x12952a551815ab4b;
  uStack_4f0 = 0x50f0d5d840b8d104;
  local_4e8 = 0xd58e5fd3ea1e39cd;
  uStack_4e0 = 0x4a93ffe621aec94e;
  uStack_4d8 = 0xa8d0f8c9337f007f;
  uStack_4d0 = 0xba2fc4ec11f58978;
  local_4c8 = 0x3c2bfa17e082d8a1;
  uStack_4c0 = 0x76f212ba01f873d2;
  uStack_4b8 = 0x32d3508d3fd9cf53;
  uStack_4b0 = 0x8cb71050f57a37ac;
  local_4a8 = 0xe7788a8b3136a7d5;
  uStack_4a0 = 0x1822415e6c546356;
  uStack_498 = 0xebee84a168348447;
  uStack_490 = 0x6277e5c4a992ef60;
  local_488 = 0xec9f3e6f56865369;
  uStack_480 = 0xe419b1f2d200a65a;
  uStack_478 = 0xa1c4c9056546f15b;
  uStack_470 = 0x337b30814021614;
  local_468 = 0x87d53d03110b605d;
  uStack_460 = 0xad8a6d967bfe37de;
  uStack_458 = 0xf96d77f92ccc508f;
  uStack_450 = 0xe10d7c1c2b5a6d08;
  local_448 = 0x4216b8c7ec3df5b1;
  uStack_440 = 0x45e0f0eaa51e8d62;
  local_438 = 0xb3aef3bd07fee5e3;
  uStack_430 = 0x8019728019e88f3c;
  local_a28 = 0x75736c657869705b;
  uStack_a20 = 0x205d6365722d6672;
  uStack_a18 = 0x73207d7b3d646d63;
  uStack_a10 = 0x207d7b3d65746174;
  local_a08 = 0x77207d7b3d6e776f;
  uStack_a00 = 0x6170207d7b3d7968;
  uStack_9f8 = 0x7465207d7b3d6874;
  uStack_9f0 = 0x616c70207d7b3d61;
  local_9e8 = 0x3d6e207d7b23656e;
  uStack_9e0 = 0x2c7d66342e3a7b28;
  uStack_9d8 = 0x7b2c7d66342e3a7b;
  uStack_9d0 = 0x6720297d66342e3a;
  local_9c8 = 9.836234e+35;
  fStack_9c4 = 2.1271967e+23;
  fStack_9c0 = 4.558133e+30;
  fStack_9bc = 9.8335975e+35;
  uStack_9b8 = 0x207c207d66352e3a;
  uStack_9b0 = 0x7b283d6f20657270;
  local_9a8 = 0x3a7b2c7d66332e3a;
  uStack_9a0 = 0x2e3a7b2c7d66332e;
  uStack_998 = 0x283d7620297d6633;
  uStack_990 = 0x7b2c7d66332e3a7b;
  local_988 = 0x3a7b2c7d66332e3a;
  uStack_980 = 0x707320297d66332e;
  uStack_978 = 0x322e3a7b3d646565;
  uStack_970 = 0x7367616c66207d66;
  local_968 = 0x67207d78233a7b3d;
  uStack_960 = 0x3a7b3d646e756f72;
  uStack_958 = 0x6b637564207d7823;
  uStack_950 = 0x207d66322e3a7b3d;
  local_948 = 0x2f7d7b3d66727573;
  uStack_940 = 0x7c207d66312e3a7b;
  uStack_938 = 0x77617920646d6320;
  uStack_930 = 0x207d66342e3a7b3d;
  local_928 = 0x207d7b3d68736977;
  uStack_920 = 0x3a7b283d7379656b;
  uStack_918 = 0x2e3a7b2c7d66302e;
  uStack_910 = 0x73697720297d6630;
  local_908 = 0x2e3a7b3d72696468;
  uStack_900 = 0x68736977207d6633;
  uStack_8f8 = 0x3a7b3d6465657073;
  uStack_8f0 = 0x747562207d66312e;
  local_8e8 = 0x233a7b3d736e6f74;
  uStack_8e0 = 0x7370657473207d78;
  uStack_8d8 = 0x73747563207d7b3d;
  uStack_8d0 = 0x5f776179207d7b3d;
  local_8c8 = 0x7d7b3d7370657473;
  uStack_8c0 = 0x207d66332e3a7b2f;
  uStack_8b8 = 0x206c65646f6d207c;
  uStack_8b0 = 0x3a7b3d7065747367;
  local_8a8 = 0x636361207d66332e;
  uStack_8a0 = 0x66332e3a7b3d6c65;
  uStack_898 = 0x646e655f7a76207d;
  uStack_890 = 0x207d66332e3a7b3d;
  local_888 = 0x3d746361746e6f63;
  uStack_880 = 0x615f706167207d7b;
  uStack_878 = 0x2e3a7b3d72657466;
  uStack_870 = 0x6e65207c207d6634;
  local_868 = 0x3d6b6f20656e6967;
  uStack_860 = 0x3a7b283d6f207d7b;
  uStack_858 = 0x2e3a7b2c7d66332e;
  uStack_850 = 0x332e3a7b2c7d6633;
  local_848 = 0x7b283d7620297d66;
  uStack_840 = 0x3a7b2c7d66332e3a;
  uStack_838 = 0x2e3a7b2c7d66332e;
  uStack_830 = 0x616c6620297d6633;
  local_828 = 0x7d78233a7b3d7367;
  uStack_820 = 0x3d646e756f726720;
  uStack_818 = 0x7564207d78233a7b;
  uStack_810 = 0x66322e3a7b3d6b63;
  local_808 = 0x7b3d66727573207d;
  uStack_800 = 0x7d66312e3a7b2f7d;
  uStack_7f8 = 0x6e6f6c615f766420;
  uStack_7f0 = 0x7b3d687369775f67;
  local_7e8 = 0x7664207d66332e3a;
  uStack_7e0 = 0x7d66332e3a7b3d7a;
  uStack_7d8 = 0x342e3a7b3d7a6420;
  uStack_7d0 = 0x7070696c63207d66;
  local_7c8 = 0x6167207d7b3d6465;
  uStack_7c0 = 0x7d66342e3a7b3d70;
  uStack_7b8 = 0x746361746e6f6320;
  uStack_7b0 = 0x3d726961207d7b3d;
  local_7a8 = 0x72655f7a76207d7b;
  uStack_7a0 = 0x7d66332e3a7b3d72;
  uStack_798 = 0x7473726966207c20;
  uStack_790 = 0x7d7b3d666669645f;
  local_788 = 0x68775f7065747320;
  uStack_780 = 0x7c207d7b3d736e65;
  uStack_778 = 0x2e3a7b3d66657220;
  uStack_770 = 0x20297d7b287d6633;
  local_768 = 0x3a7b3d67206c6163;
  uStack_760 = 0x3d7367207d66322e;
  uStack_758 = 0x61207d66332e3a7b;
  uStack_750 = 0x7d66332e3a7b3d73;
  local_748 = 0x6565707378616d20;
  uStack_740 = 0x7d66312e3a7b3d64;
  local_738 = 10;
  uStack_730 = 0;
  lVar13 = -1;
  do {
    local_a70 = lVar13 + 1;
    lVar16 = lVar13 + 0x11;
    lVar13 = local_a70;
  } while (local_a38[lVar16] != 0);
  local_a78 = &local_a28;
  local_c88 = &PTR_DAT_180803050 + uVar19 * 2;
  local_a88 = &local_a40;
  local_a90 = &local_3d0;
  local_a98 = &local_3d8;
  local_aa0 = &local_3c8;
  local_aa8 = &local_3c0;
  local_ab0 = &local_3b8;
  local_ab8 = local_130;
  local_ac0 = &local_2a0;
  local_ac8 = &local_3b0;
  local_ad0 = (longlong)&local_1a0 + 1;
  local_ad8 = (longlong)&local_1a0 + 2;
  local_ae0 = &local_3a8;
  local_ae8 = (longlong)&local_1a0 + 3;
  local_af0 = &local_3a0;
  local_af8 = &local_398;
  local_b00 = &local_a60;
  local_b08 = &local_390;
  local_b10 = &uStack_140;
  local_b18 = &local_388;
  local_b20 = &uStack_148;
  local_b28 = &uStack_14c;
  local_b30 = &local_380;
  local_b38 = &local_378;
  local_b40 = &local_370;
  local_b48 = &local_368;
  local_b50 = &local_360;
  local_b58 = &local_358;
  local_b60 = local_1a8;
  local_b68 = &local_350;
  local_b70 = (longlong)&local_238 + 5;
  local_b78 = &local_348;
  local_b80 = &local_340;
  local_b88 = &local_338;
  local_b90 = &local_330;
  local_b98 = local_170;
  local_ba0 = &local_218;
  local_ba8 = local_138;
  local_bb0 = &local_328;
  local_bb8 = &local_a50;
  local_bc0 = &local_a58;
  local_bc8 = &local_320;
  local_bd0 = &local_318;
  local_bd8 = (longlong)&uStack_220 + 4;
  local_be0 = &local_a48;
  local_be8 = &local_310;
  local_bf0 = &local_258;
  local_bf8 = &local_308;
  local_c00 = &uStack_260;
  local_c08 = (longlong)&uStack_268 + 4;
  local_c10 = &local_300;
  local_c18 = &local_2f8;
  local_c20 = &local_2f0;
  local_c28 = &local_2e8;
  local_c30 = &local_2e0;
  local_c38 = &local_2d8;
  local_c40 = &local_2a8;
  local_c48 = &local_2d0;
  local_c50 = &local_2c8;
  local_c58 = &local_2c0;
  local_c60 = &local_2b8;
  local_c68 = &local_428;
  local_c70 = &local_238;
  local_c78 = &uStack_1f0;
  local_c80 = local_1e8;
  FUN_180334100(&local_a78,&uStack_290,&local_108,(longlong)&uStack_288 + 4);
  FUN_18015c010(local_130);
}



