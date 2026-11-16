// FUN_1801becd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801becd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1801becd0(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
                  char param_5,longlong param_6)

{
  undefined1 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined8 **ppuVar17;
  longlong lVar18;
  undefined8 **ppuVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  ushort uVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  char cVar30;
  undefined1 (*pauVar31) [16];
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  undefined1 auStack_778 [32];
  undefined1 local_758 [8];
  undefined8 *puStack_750;
  undefined8 local_748;
  float local_740;
  undefined8 *local_738;
  undefined8 local_730;
  float local_728;
  undefined8 *local_720;
  uint local_718;
  undefined8 *local_710;
  undefined1 local_708 [16];
  undefined1 auStack_6f8 [16];
  undefined1 local_6e8;
  undefined7 uStack_6e7;
  undefined8 uStack_6e0;
  longlong local_6d8;
  undefined8 *local_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined1 local_6a8 [24];
  undefined1 local_690 [16];
  undefined8 local_680;
  undefined8 local_678 [3];
  undefined1 local_660 [16];
  undefined8 local_650;
  undefined8 local_648 [3];
  undefined1 local_630 [16];
  undefined8 local_620;
  undefined8 local_618 [3];
  undefined1 local_600 [16];
  undefined8 local_5f0;
  undefined8 local_5e8 [3];
  undefined1 local_5d0 [16];
  undefined8 local_5c0;
  undefined1 local_5b8 [24];
  undefined1 local_5a0 [16];
  undefined8 local_590;
  undefined8 local_588 [3];
  undefined1 local_570 [16];
  undefined8 local_560;
  undefined8 local_558 [3];
  undefined1 local_540 [16];
  undefined8 local_530;
  undefined8 local_528 [3];
  undefined1 local_510 [16];
  undefined8 local_500;
  undefined8 local_4f8 [3];
  undefined1 local_4e0 [16];
  undefined8 local_4d0;
  undefined4 local_4c8 [2];
  char *local_4c0;
  undefined4 local_4b8;
  char *local_4b0;
  undefined4 local_4a8;
  char *local_4a0;
  undefined4 local_498;
  char *local_490;
  undefined4 local_488;
  undefined1 *local_480;
  undefined4 local_478;
  undefined *local_470;
  undefined4 local_468;
  char *local_460;
  undefined4 local_458;
  char *local_450;
  undefined4 local_448;
  undefined1 *local_440;
  undefined4 local_438;
  char *local_430;
  undefined4 local_428;
  undefined *local_420;
  undefined4 local_418;
  char *local_410;
  undefined4 local_408;
  char *local_400;
  undefined4 local_3f8;
  char *local_3f0;
  undefined4 local_3e8;
  char *local_3e0;
  undefined4 local_3d8;
  undefined *local_3d0;
  undefined4 local_3c8;
  char *local_3c0;
  undefined4 local_3b8;
  char *local_3b0;
  undefined4 local_3a8;
  undefined *local_3a0;
  undefined4 local_398;
  char *local_390;
  undefined4 local_388;
  undefined *local_380;
  undefined4 local_378;
  undefined *local_370;
  undefined4 local_368;
  undefined *local_360;
  undefined4 local_358;
  undefined *local_350;
  undefined4 local_348;
  char *local_340;
  undefined4 local_338;
  char *local_330;
  undefined4 local_328;
  char *local_320;
  undefined4 local_318;
  char *local_310;
  undefined4 local_308;
  char *local_300;
  undefined4 local_2f8;
  char *local_2f0;
  undefined4 local_2e8;
  char *local_2e0;
  undefined4 local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  undefined *local_2b0;
  undefined4 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  char *local_290;
  undefined4 local_288;
  char *local_280;
  undefined4 local_278;
  char *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 auStack_250 [2];
  undefined8 local_240;
  undefined8 local_238 [2];
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined1 (*local_118) [16];
  longlong lStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined1 (*local_f8) [16];
  longlong lStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_778;
  local_738 = (undefined8 *)CONCAT44(local_738._4_4_,param_4);
  local_718 = 0;
  local_6d0 = param_1;
  if ((param_2 == (undefined8 *)0x0) || (param_3 == 0)) goto LAB_1801c126f;
  uVar25 = 0xffffffffffffffff;
  local_720 = param_2;
  local_710 = param_1;
  local_6d8 = param_3;
  if ((DAT_180bb8a58 == 0) && (UVar11 = GetTickCount64(), DAT_180bb8a50 <= UVar11)) {
    local_710 = (undefined8 *)&DAT_1808da370;
    iVar8 = FUN_1805f68d0(&DAT_1808da370);
    if (iVar8 != 0) goto LAB_1801c12da;
    if (DAT_1808da3bc == 0x7fffffff) {
      DAT_1808da3bc = 0x7ffffffe;
      goto LAB_1801c12ef;
    }
    if ((DAT_180bb8a58 == 0) && (DAT_180bb8a50 <= UVar11)) {
      DAT_180bb8a58 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180bb8a58 == 0) {
        DAT_180bb8a50 = UVar11 + 1000;
      }
      else {
        DAT_180bb8a50 = 0xffffffffffffffff;
      }
    }
    FUN_1805f68fc(&DAT_1808da370);
  }
  lVar12 = FUN_1801c6070(param_3);
  uVar22 = (ulonglong)DAT_180bb8a48;
  if ((DAT_180bb8a48 == 0) && (UVar11 = GetTickCount64(), DAT_180bb8a40 <= UVar11)) {
    local_710 = (undefined8 *)&DAT_1808da320;
    iVar8 = FUN_1805f68d0(&DAT_1808da320);
    if (iVar8 != 0) goto LAB_1801c12da;
    if (DAT_1808da36c == 0x7fffffff) {
      DAT_1808da36c = 0x7ffffffe;
      goto LAB_1801c12ef;
    }
    uVar22 = (ulonglong)DAT_180bb8a48;
    if ((DAT_180bb8a48 == 0) && (DAT_180bb8a40 <= UVar11)) {
      DAT_180bb8a48 = FUN_1804174b0("CGameSceneNode");
      uVar22 = (ulonglong)DAT_180bb8a48;
      if (DAT_180bb8a48 == 0) {
        DAT_180bb8a40 = UVar11 + 1000;
      }
      else {
        DAT_180bb8a40 = 0xffffffffffffffff;
      }
    }
    FUN_1805f68fc(&DAT_1808da320);
  }
  auVar39 = ZEXT864(0);
  if ((lVar12 == 0) || ((int)uVar22 == 0)) {
LAB_1801bef7f:
    local_740 = NAN;
    local_748 = (undefined8 *)0x7fc000007fc00000;
  }
  else {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (uVar22 + lVar12 == 0) {
      bVar5 = false;
      fVar27 = (float)uStack_6e0;
      puVar24 = (undefined8 *)CONCAT71(uStack_6e7,local_6e8);
    }
    else {
      local_740 = auVar39._0_4_;
      local_748 = (undefined8 *)CONCAT44(local_740,local_740);
      cVar6 = FUN_1804514f0(&local_748,uVar22 + lVar12,0xc);
      if (cVar6 == '\0') {
        bVar5 = false;
        fVar27 = (float)uStack_6e0;
        puVar24 = (undefined8 *)CONCAT71(uStack_6e7,local_6e8);
      }
      else {
        bVar5 = true;
        fVar27 = local_740;
        puVar24 = local_748;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    if (!bVar5) goto LAB_1801bef7f;
    local_748 = puVar24;
    local_740 = fVar27;
  }
  fVar27 = local_740;
  fVar32 = NAN;
  local_758 = (undefined1  [8])local_748;
  uVar22 = (ulonglong)DAT_180bb8a38;
  if (DAT_180bb8a38 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180bb8a30 <= UVar11) {
      local_710 = (undefined8 *)&DAT_1808da2d0;
      iVar8 = FUN_1805f68d0(&DAT_1808da2d0);
      if (iVar8 != 0) goto LAB_1801c12da;
      if (DAT_1808da31c == 0x7fffffff) {
        DAT_1808da31c = 0x7ffffffe;
        goto LAB_1801c12ef;
      }
      uVar22 = (ulonglong)DAT_180bb8a38;
      if ((DAT_180bb8a38 == 0) && (DAT_180bb8a30 <= UVar11)) {
        DAT_180bb8a38 = FUN_1804174b0("C_BaseEntity");
        uVar22 = (ulonglong)DAT_180bb8a38;
        if (DAT_180bb8a38 == 0) {
          DAT_180bb8a30 = UVar11 + 1000;
        }
        else {
          DAT_180bb8a30 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808da2d0);
      if ((int)uVar22 != 0) goto LAB_1801bf054;
    }
    cVar30 = '\0';
  }
  else {
LAB_1801bf054:
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    bVar5 = false;
    if (uVar22 + param_3 != 0) {
      local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffffffffff00);
      cVar6 = FUN_1804514f0(&local_730,uVar22 + param_3,1);
      if (cVar6 == '\0') {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    cVar6 = (char)local_730;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    cVar30 = '\0';
    if (bVar5) {
      cVar30 = cVar6;
    }
  }
  uVar22 = (ulonglong)DAT_180bb8a28;
  if (DAT_180bb8a28 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180bb8a20 <= UVar11) {
      local_710 = (undefined8 *)&DAT_1808da280;
      iVar8 = FUN_1805f68d0(&DAT_1808da280);
      if (iVar8 != 0) goto LAB_1801c12da;
      if (DAT_1808da2cc == 0x7fffffff) {
        DAT_1808da2cc = 0x7ffffffe;
        goto LAB_1801c12ef;
      }
      uVar22 = (ulonglong)DAT_180bb8a28;
      if ((DAT_180bb8a28 == 0) && (DAT_180bb8a20 <= UVar11)) {
        DAT_180bb8a28 = FUN_1804174b0("C_BaseEntity");
        uVar22 = (ulonglong)DAT_180bb8a28;
        if (DAT_180bb8a28 == 0) {
          DAT_180bb8a20 = UVar11 + 1000;
        }
        else {
          DAT_180bb8a20 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808da280);
      if ((int)uVar22 != 0) goto LAB_1801bf15e;
    }
    iVar9 = -1;
  }
  else {
LAB_1801bf15e:
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    bVar5 = false;
    if (uVar22 + param_3 != 0) {
      local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffff00000000);
      cVar6 = FUN_1804514f0(&local_730,uVar22 + param_3,4);
      if (cVar6 == '\0') {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
    }
    iVar8 = (uint)local_730;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    iVar9 = -1;
    if (bVar5) {
      iVar9 = iVar8;
    }
  }
  local_710 = (undefined8 *)CONCAT44(local_710._4_4_,iVar9);
  uVar22 = (ulonglong)DAT_180bb8a18;
  if (DAT_180bb8a18 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180bb8a10 <= UVar11) {
      local_730 = (undefined8 *)&DAT_1808da230;
      iVar8 = FUN_1805f68d0(&DAT_1808da230);
      if (iVar8 != 0) goto LAB_1801c12da;
      if (DAT_1808da27c == 0x7fffffff) {
        DAT_1808da27c = 0x7ffffffe;
        goto LAB_1801c12ef;
      }
      uVar22 = (ulonglong)DAT_180bb8a18;
      if ((DAT_180bb8a18 == 0) && (DAT_180bb8a10 <= UVar11)) {
        DAT_180bb8a18 = FUN_1804174b0("C_CSPlayerPawn");
        uVar22 = (ulonglong)DAT_180bb8a18;
        if (DAT_180bb8a18 == 0) {
          DAT_180bb8a10 = UVar11 + 1000;
        }
        else {
          DAT_180bb8a10 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808da230);
      if ((int)uVar22 != 0) goto LAB_1801bf26f;
    }
LAB_1801bf2eb:
    local_748 = (undefined8 *)CONCAT44(fVar32,fVar32);
    local_740 = fVar32;
  }
  else {
LAB_1801bf26f:
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (uVar22 + param_3 == 0) {
      bVar5 = false;
      fVar28 = (float)uStack_6e0;
      puVar24 = (undefined8 *)CONCAT71(uStack_6e7,local_6e8);
    }
    else {
      local_740 = auVar39._0_4_;
      local_748 = (undefined8 *)CONCAT44(local_740,local_740);
      cVar6 = FUN_1804514f0(&local_748,uVar22 + param_3,0xc);
      if (cVar6 == '\0') {
        bVar5 = false;
        fVar28 = (float)uStack_6e0;
        puVar24 = (undefined8 *)CONCAT71(uStack_6e7,local_6e8);
      }
      else {
        bVar5 = true;
        fVar28 = local_740;
        puVar24 = local_748;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    if (!bVar5) goto LAB_1801bf2eb;
    local_748 = puVar24;
    local_740 = fVar28;
  }
  local_730 = local_748;
  local_728 = local_740;
  if ((param_5 == '\0') || (DAT_180b8e2b0 == '\0')) goto LAB_1801bf406;
  iVar8 = FUN_1805f68d0(&DAT_180b8e260);
  if (iVar8 != 0) goto LAB_1801c12da;
  if (DAT_180b8e2ac == 0x7fffffff) {
    DAT_180b8e2ac = 0x7ffffffe;
    goto LAB_1801c12ef;
  }
  local_268 = _DAT_180b8e220;
  uStack_260 = uRam0000000180b8e228;
  uStack_258 = uRam0000000180b8e230;
  auStack_250[0] = uRam0000000180b8e238;
  local_6c8 = _DAT_180b8e240;
  uStack_6c0 = uRam0000000180b8e248;
  uStack_6b8 = uRam0000000180b8e250;
  uStack_6b0 = uRam0000000180b8e258;
  auVar39 = ZEXT1664(auVar39._0_16_);
  FUN_1805f68fc(&DAT_180b8e260);
  auVar2._8_8_ = uStack_6c0;
  auVar2._0_8_ = local_6c8;
  auVar2._16_8_ = uStack_6b8;
  auVar2._24_8_ = uStack_6b0;
  auVar35 = ZEXT1664(auVar2._16_16_);
  auVar39 = ZEXT1664(auVar39._0_16_);
  sVar7 = thunk_FUN_180624430();
  if (sVar7 < 1) {
    auVar3._8_8_ = uStack_6c0;
    auVar3._0_8_ = local_6c8;
    auVar3._16_8_ = uStack_6b8;
    auVar3._24_8_ = uStack_6b0;
    auVar37 = vshufps_avx(auVar3._16_16_,auVar3._16_16_,0x55);
    auVar36 = ZEXT1664(auVar37);
    auVar35 = ZEXT1664(auVar35._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    sVar7 = thunk_FUN_180624430();
    if ((0 < sVar7) || (auVar36._0_4_ * auVar36._0_4_ + auVar35._0_4_ * auVar35._0_4_ < 1e-06))
    goto LAB_1801bf406;
    fVar32 = (float)FUN_180636c80(auVar36._0_8_);
    auVar35 = ZEXT864(0);
    auVar36 = ZEXT864(0);
    fVar32 = fVar32 * 57.29578;
  }
  else {
LAB_1801bf406:
    auVar36 = ZEXT464((uint)local_728);
    auVar35 = ZEXT464((uint)local_730);
    fVar32 = local_730._4_4_;
  }
  auVar38 = ZEXT464((uint)fVar32);
  fVar32 = (float)local_758._0_4_;
  sVar7 = thunk_FUN_180624430(local_758._0_4_);
  if (0 < sVar7) {
LAB_1801c126f:
    *(undefined1 *)(local_6d0 + 2) = 0;
  }
  fVar28 = (float)local_758._4_4_;
  sVar7 = thunk_FUN_180624430(local_758._4_4_);
  if ((0 < sVar7) || (sVar7 = thunk_FUN_180624430(fVar27), 0 < sVar7)) goto LAB_1801c126f;
  uVar29 = 0x7fffffff;
  fVar34 = 100000.0;
  if ((((100000.0 < ABS(fVar32)) ||
       ((((100000.0 < ABS(fVar28) || (100000.0 < ABS(fVar27))) ||
         (sVar7 = thunk_FUN_180624430(auVar35._0_8_), 0 < sVar7)) ||
        ((sVar7 = thunk_FUN_180624430(auVar38._0_8_), 0 < sVar7 ||
         (sVar7 = thunk_FUN_180624430(auVar36._0_8_), 0 < sVar7)))))) ||
      (fVar34 < (float)(auVar35._0_4_ & uVar29))) ||
     (((fVar34 < (float)(auVar38._0_4_ & uVar29) || (fVar34 < (float)(auVar36._0_4_ & uVar29))) ||
      ((1 < (byte)(cVar30 - 2U) || (iVar9 < 0)))))) goto LAB_1801c126f;
  uVar22 = (ulonglong)DAT_180bb8a08;
  if (DAT_180bb8a08 == 0) {
    UVar11 = GetTickCount64();
    auVar40 = auVar39._0_16_;
    auVar37 = auVar38._0_16_;
    if (DAT_180bb8a00 <= UVar11) {
      local_730 = (undefined8 *)&DAT_1808da1e0;
      iVar8 = FUN_1805f68d0(&DAT_1808da1e0);
      if (iVar8 != 0) {
LAB_1801c12da:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808da22c == 0x7fffffff) {
        DAT_1808da22c = 0x7ffffffe;
LAB_1801c12ef:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar22 = (ulonglong)DAT_180bb8a08;
      if ((DAT_180bb8a08 == 0) && (DAT_180bb8a00 <= UVar11)) {
        DAT_180bb8a08 = FUN_1804174b0("CCSPlayerController");
        uVar22 = (ulonglong)DAT_180bb8a08;
        if (DAT_180bb8a08 == 0) {
          DAT_180bb8a00 = UVar11 + 1000;
        }
        else {
          DAT_180bb8a00 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808da1e0);
      auVar40 = auVar39._0_16_;
      auVar37 = auVar38._0_16_;
      if ((int)uVar22 != 0) goto LAB_1801bf5cf;
    }
    puVar24 = local_720;
LAB_1801bf652:
    auStack_6f8 = ZEXT816(0xf) << 0x40;
    local_708._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_708._1_15_;
    local_708 = auVar4 << 8;
    plVar14 = (longlong *)local_708;
    uVar29 = 4;
  }
  else {
LAB_1801bf5cf:
    puVar24 = local_720;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if ((undefined *)(uVar22 + (longlong)puVar24) == (undefined *)0x0) {
      bVar5 = false;
      puVar21 = local_6d0;
    }
    else {
      local_720 = (undefined8 *)0x0;
      cVar6 = FUN_1804514f0(&local_720,(undefined *)(uVar22 + (longlong)puVar24),8);
      if (cVar6 == '\0') {
        bVar5 = false;
        puVar21 = local_6d0;
      }
      else {
        bVar5 = true;
        puVar21 = local_720;
      }
    }
    lVar12 = FUN_18017ea70();
    auVar40 = auVar39._0_16_;
    auVar37 = auVar38._0_16_;
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    puVar20 = (undefined8 *)0x0;
    if (bVar5) {
      puVar20 = puVar21;
    }
    if (puVar20 == (undefined8 *)0x0) goto LAB_1801bf652;
    plVar14 = (longlong *)FUN_180454030(&local_6c8,puVar20,0x30);
    auVar40 = auVar39._0_16_;
    auVar37 = auVar38._0_16_;
    uVar29 = 2;
  }
  local_718 = uVar29;
  local_118 = (undefined1 (*) [16])*plVar14;
  lStack_110 = plVar14[1];
  uStack_108 = plVar14[2];
  uStack_100 = plVar14[3];
  local_f8 = local_118;
  lStack_f0 = lStack_110;
  uStack_e8 = uStack_108;
  uStack_e0 = uStack_100;
  *(undefined1 *)plVar14 = 0;
  plVar14[2] = 0;
  plVar14[3] = 0xf;
  if ((uVar29 & 4) != 0) {
    uVar29 = uVar29 & 0xfffffffb;
    auVar39 = ZEXT1664(auVar37);
    auVar35 = ZEXT1664(auVar40);
    local_718 = uVar29;
    FUN_18015c010(local_708);
    auVar40 = auVar35._0_16_;
    auVar37 = auVar39._0_16_;
  }
  if ((uVar29 & 2) != 0) {
    uVar29 = uVar29 & 0xfffffffd;
    auVar39 = ZEXT1664(auVar37);
    auVar35 = ZEXT1664(auVar40);
    local_718 = uVar29;
    FUN_18015c010(&local_6c8);
    auVar40 = auVar35._0_16_;
    auVar37 = auVar39._0_16_;
  }
  auVar39 = ZEXT1664(auVar37);
  auVar35 = ZEXT1664(auVar40);
  FUN_1800e60e0(local_4f8,&DAT_1806bdfa4);
  local_4e0 = ZEXT816(0);
  FUN_1801409d0(local_4e0 + 8,0);
  local_4e0[0] = 7;
  local_4e0._8_8_ = (double)fVar32;
  local_4d0 = 0;
  local_758 = (undefined1  [8])local_4f8;
  puStack_750 = (undefined8 *)local_4c8;
  FUN_1800f4e90(local_228,local_758,1,2);
  local_218 = 0;
  FUN_1800e60e0(local_528,&DAT_1806bdfa8);
  local_510 = ZEXT816(0);
  FUN_1801409d0(local_510 + 8,0);
  local_510[0] = 7;
  local_510._8_8_ = (double)fVar28;
  local_500 = 0;
  local_758 = (undefined1  [8])local_528;
  puStack_750 = local_4f8;
  FUN_1800f4e90(local_210,local_758,1,2);
  local_200 = 0;
  FUN_1800e60e0(local_558,&DAT_1806bdfb4);
  local_540 = ZEXT816(0);
  FUN_1801409d0(local_540 + 8,0);
  local_540[0] = 7;
  local_540._8_8_ = (double)fVar27;
  local_530 = 0;
  local_758 = (undefined1  [8])local_558;
  puStack_750 = local_528;
  FUN_1800f4e90(local_1f8,local_758,1,2);
  local_1e8 = 0;
  FUN_1800e60e0(local_588,&DAT_1807c5d68);
  local_570 = ZEXT816(0);
  FUN_1801409d0(local_570 + 8,0);
  local_570[0] = 7;
  local_570._8_8_ = (double)auVar39._0_4_;
  local_560 = 0;
  local_758 = (undefined1  [8])local_588;
  puStack_750 = local_558;
  FUN_1800f4e90(local_1e0,local_758,1,2);
  local_1d0 = 0;
  FUN_1800e60e0(local_5b8,&DAT_1807c5d6c);
  local_5a0 = ZEXT816(0);
  FUN_1801409d0(local_5a0 + 8,0);
  local_5a0[0] = 6;
  local_5a0[8] = cVar30;
  local_5a0._9_7_ = 0;
  local_590 = 0;
  local_758 = (undefined1  [8])local_5b8;
  puStack_750 = local_588;
  FUN_1800f4e90(local_1c8,local_758,1,2);
  local_1b8 = 0;
  FUN_1800e60e0(local_5e8,"health");
  local_720 = (undefined8 *)CONCAT44(local_720._4_4_,100);
  local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffff00000000);
  local_5d0 = ZEXT816(0);
  ppuVar19 = (undefined8 **)&local_730;
  if (-1 < iVar9) {
    ppuVar19 = &local_710;
  }
  ppuVar17 = &local_720;
  if (iVar9 < 0x65) {
    ppuVar17 = ppuVar19;
  }
  iVar8 = *(int *)ppuVar17;
  FUN_1801409d0(local_5d0 + 8,0);
  local_5d0[0] = 5;
  local_5d0._8_8_ = (longlong)iVar8;
  local_5c0 = 0;
  puStack_750 = (undefined8 *)local_5b8;
  local_758 = (undefined1  [8])local_5e8;
  FUN_1800f4e90(local_1b0,local_758,1,2);
  local_1a0 = 0;
  FUN_1800e60e0(&local_268,&DAT_1806bd758);
  uVar22 = uStack_108;
  auVar37 = auVar35._0_16_;
  if (uStack_108 == 0) {
    local_6c8 = 0;
    uStack_6c0 = 0;
    uStack_6b8 = 0;
    uStack_6b0 = 0;
    auVar39 = ZEXT1664(auVar37);
    FUN_18015ba30(&local_6c8,"Player",6);
    auVar37 = auVar39._0_16_;
    puVar21 = &local_6c8;
    uVar29 = uVar29 | 8;
  }
  else {
    local_708 = (undefined1  [16])0x0;
    auStack_6f8 = (undefined1  [16])0x0;
    pauVar31 = (undefined1 (*) [16])&local_f8;
    if (0xf < uStack_100) {
      pauVar31 = local_118;
    }
    if (0x7fffffffffffffff < uStack_108) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uStack_108 < 0x10) {
      auStack_6f8._8_8_ = 0xf;
      auStack_6f8._0_8_ = uStack_108;
      local_708 = *pauVar31;
    }
    else {
      uVar15 = uStack_108 | 0xf;
      uVar23 = 0x7fffffffffffffff;
      if ((uVar15 < 0x8000000000000000) && (uVar23 = uVar15, uVar15 < 0x16)) {
        uVar23 = 0x16;
      }
      auVar39 = ZEXT1664(auVar37);
      uVar33 = FUN_18015bca0(uVar23 + 1);
      local_708._0_8_ = uVar33;
      auStack_6f8._8_8_ = uVar23;
      auStack_6f8._0_8_ = uVar22;
      FUN_18063aed0(uVar33,pauVar31,uVar22 + 1);
      auVar37 = auVar39._0_16_;
    }
    puVar21 = (undefined8 *)local_708;
    uVar29 = uVar29 | 0x10;
  }
  auVar39 = ZEXT1664(auVar37);
  local_718 = uVar29;
  FUN_1800e6ec0(auStack_250,puVar21);
  local_240 = 0;
  local_758 = (undefined1  [8])&local_268;
  puStack_750 = local_238;
  FUN_1800f4e90(local_198,local_758,1,2);
  local_188 = 0;
  FUN_1800e60e0(local_618,"kills");
  local_600 = ZEXT816(0);
  FUN_1801409d0(local_600 + 8,0);
  local_600[0] = 5;
  local_600._8_8_ = 0;
  local_5f0 = 0;
  local_758 = (undefined1  [8])local_618;
  puStack_750 = local_5e8;
  FUN_1800f4e90(local_180,local_758,1,2);
  local_170 = 0;
  FUN_1800e60e0(local_648,"deaths");
  local_630 = ZEXT816(0);
  FUN_1801409d0(local_630 + 8,0);
  local_630[0] = 5;
  local_630._8_8_ = 0;
  local_620 = 0;
  local_758 = (undefined1  [8])local_648;
  puStack_750 = local_618;
  FUN_1800f4e90(local_168,local_758,1,2);
  local_158 = 0;
  FUN_1800e60e0(local_678,"assists");
  local_660 = ZEXT816(0);
  FUN_1801409d0(local_660 + 8,0);
  local_660[0] = 5;
  local_660._8_8_ = 0;
  local_650 = 0;
  puStack_750 = local_648;
  local_758 = (undefined1  [8])local_678;
  FUN_1800f4e90(local_150,local_758,1,2);
  local_140 = 0;
  FUN_1800e60e0(local_6a8,&DAT_1807c5d98);
  local_690 = ZEXT816(0);
  FUN_1801409d0(local_690 + 8,0);
  local_690[0] = 4;
  local_720 = (undefined8 *)((ulonglong)local_720 & 0xffffffffffffff00);
  local_690._8_8_ = local_720;
  local_680 = 0;
  local_758 = (undefined1  [8])local_6a8;
  puStack_750 = local_678;
  FUN_1800f4e90(local_138,local_758,1,2);
  local_128 = 0;
  puStack_750 = (undefined8 *)local_120;
  local_758 = (undefined1  [8])local_228;
  FUN_1800f4e90(&local_6e8,local_758,1,2);
  _eh_vector_destructor_iterator_(local_228,0x18,0xb,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_6a8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_678,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_648,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_618,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(&local_268,0x18,2,FUN_1800aab30);
  if ((uVar29 & 0x10) != 0) {
    uVar29 = uVar29 & 0xffffffef;
    FUN_18015c010(local_708);
  }
  if ((uVar29 & 8) != 0) {
    FUN_18015c010(&local_6c8);
  }
  _eh_vector_destructor_iterator_(local_5e8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_5b8,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_588,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_558,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_528,0x18,2,FUN_1800aab30);
  _eh_vector_destructor_iterator_(local_4f8,0x18,2,FUN_1800aab30);
  if (param_5 == '\0') {
    local_720 = (undefined8 *)local_758;
    _local_758 = ZEXT816(0);
    FUN_1801409d0(&puStack_750,0);
    local_758[0] = 5;
    puStack_750 = (undefined8 *)(longlong)(int)local_738;
    local_708 = (undefined1  [16])0x0;
    auStack_6f8 = ZEXT816(0);
    FUN_18015ba30(local_708,&DAT_1807c5da0,4);
    puVar16 = (undefined1 *)FUN_1800f43d0(&local_6e8,local_708);
    auVar37 = _local_758;
    uVar1 = *puVar16;
    *puVar16 = local_758[0];
    local_758[0] = uVar1;
    auVar40 = _local_758;
    uVar33 = *(undefined8 *)(puVar16 + 8);
    puStack_750 = auVar37._8_8_;
    *(undefined8 **)(puVar16 + 8) = puStack_750;
    local_758 = auVar40._0_8_;
    puStack_750 = (undefined8 *)uVar33;
    FUN_1801409d0(&puStack_750,uVar1);
  }
  iVar8 = DAT_180bb89f8;
  if (DAT_180bb89f8 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180bb89f0) {
      iVar8 = 0;
    }
    else {
      local_738 = (undefined8 *)&DAT_1808da190;
      iVar8 = FUN_1805f68d0(&DAT_1808da190);
      if (iVar8 != 0) goto LAB_1801c1398;
      if (DAT_1808da1dc == 0x7fffffff) {
        DAT_1808da1dc = 0x7ffffffe;
        goto LAB_1801c130d;
      }
      if ((DAT_180bb89f8 == 0) && (DAT_180bb89f0 <= UVar11)) {
        DAT_180bb89f8 = FUN_1804174b0("CCSPlayerController",0xb8174144);
        if (DAT_180bb89f8 == 0) {
          DAT_180bb89f0 = UVar11 + 1000;
        }
        else {
          DAT_180bb89f0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180bb89f8;
      FUN_1805f68fc(&DAT_1808da190);
    }
  }
  lVar12 = FUN_1801c6070(puVar24,iVar8);
  iVar8 = DAT_180bb89e8;
  if (DAT_180bb89e8 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180bb89e0) {
      iVar8 = 0;
    }
    else {
      local_738 = (undefined8 *)&DAT_1808da140;
      iVar8 = FUN_1805f68d0(&DAT_1808da140);
      if (iVar8 != 0) {
LAB_1801c1398:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808da18c == 0x7fffffff) {
        DAT_1808da18c = 0x7ffffffe;
LAB_1801c130d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bb89e8 == 0) && (DAT_180bb89e0 <= UVar11)) {
        DAT_180bb89e8 = FUN_1804174b0("CCSPlayerController_ActionTrackingServices",0x1729a24d);
        if (DAT_180bb89e8 == 0) {
          DAT_180bb89e0 = UVar11 + 1000;
        }
        else {
          DAT_180bb89e0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180bb89e8;
      FUN_1805f68fc(&DAT_1808da140);
    }
  }
  if ((lVar12 != 0) && (iVar8 != 0)) {
    lVar12 = iVar8 + lVar12;
    local_748 = (undefined8 *)local_758;
    local_710 = (undefined8 *)CONCAT44(local_710._4_4_,999);
    local_738 = (undefined8 *)((ulonglong)local_738 & 0xffffffff00000000);
    uVar22 = (ulonglong)DAT_180bb89d8;
    if (DAT_180bb89d8 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180bb89d0) {
        uVar22 = 0;
      }
      else {
        local_720 = (undefined8 *)&DAT_1808da0f0;
        iVar8 = FUN_1805f68d0(&DAT_1808da0f0);
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da13c == 0x7fffffff) {
          DAT_1808da13c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        uVar22 = (ulonglong)DAT_180bb89d8;
        if ((DAT_180bb89d8 == 0) && (DAT_180bb89d0 <= UVar11)) {
          DAT_180bb89d8 = FUN_1804174b0("CSMatchStats_t",0xe456fe5);
          uVar22 = (ulonglong)DAT_180bb89d8;
          if (DAT_180bb89d8 == 0) {
            DAT_180bb89d0 = UVar11 + 1000;
          }
          else {
            DAT_180bb89d0 = 0xffffffffffffffff;
          }
        }
        FUN_1805f68fc(&DAT_1808da0f0);
      }
    }
    if ((lVar12 == 0) || ((int)uVar22 == 0)) {
      iVar8 = 0;
    }
    else {
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (uVar22 + lVar12 == 0) {
        bVar5 = false;
        iVar9 = (int)local_738;
      }
      else {
        local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffff00000000);
        cVar6 = FUN_1804514f0(&local_730,uVar22 + lVar12,4);
        if (cVar6 == '\0') {
          bVar5 = false;
          iVar9 = (int)local_738;
        }
        else {
          bVar5 = true;
          iVar9 = (uint)local_730;
        }
      }
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      iVar8 = 0;
      if (bVar5) {
        iVar8 = iVar9;
      }
    }
    local_720 = (undefined8 *)CONCAT44(local_720._4_4_,iVar8);
    _local_758 = ZEXT816(0);
    ppuVar19 = &local_738;
    if (-1 < iVar8) {
      ppuVar19 = &local_720;
    }
    ppuVar17 = &local_710;
    if (iVar8 < 1000) {
      ppuVar17 = ppuVar19;
    }
    iVar8 = *(int *)ppuVar17;
    FUN_1801409d0(&puStack_750,0);
    local_758[0] = 5;
    puStack_750 = (undefined8 *)(longlong)iVar8;
    local_708 = (undefined1  [16])0x0;
    auStack_6f8 = ZEXT816(0);
    FUN_18015ba30(local_708,"kills",5);
    puVar16 = (undefined1 *)FUN_1800f43d0(&local_6e8,local_708);
    auVar37 = _local_758;
    uVar1 = *puVar16;
    *puVar16 = local_758[0];
    local_758[0] = uVar1;
    auVar40 = _local_758;
    uVar33 = *(undefined8 *)(puVar16 + 8);
    puStack_750 = auVar37._8_8_;
    *(undefined8 **)(puVar16 + 8) = puStack_750;
    local_758 = auVar40._0_8_;
    puStack_750 = (undefined8 *)uVar33;
    FUN_1801409d0(&puStack_750,uVar1);
    local_748 = (undefined8 *)local_758;
    local_710 = (undefined8 *)CONCAT44(local_710._4_4_,999);
    local_738 = (undefined8 *)((ulonglong)local_738 & 0xffffffff00000000);
    uVar22 = (ulonglong)DAT_180bb89c8;
    if (DAT_180bb89c8 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180bb89c0) {
        uVar22 = 0;
      }
      else {
        local_720 = (undefined8 *)&DAT_1808da0a0;
        iVar8 = FUN_1805f68d0(&DAT_1808da0a0);
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da0ec == 0x7fffffff) {
          DAT_1808da0ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        uVar22 = (ulonglong)DAT_180bb89c8;
        if ((DAT_180bb89c8 == 0) && (DAT_180bb89c0 <= UVar11)) {
          DAT_180bb89c8 = FUN_1804174b0("CSMatchStats_t",0xaf18870f);
          uVar22 = (ulonglong)DAT_180bb89c8;
          if (DAT_180bb89c8 == 0) {
            DAT_180bb89c0 = UVar11 + 1000;
          }
          else {
            DAT_180bb89c0 = 0xffffffffffffffff;
          }
        }
        FUN_1805f68fc(&DAT_1808da0a0);
      }
    }
    if ((lVar12 == 0) || ((int)uVar22 == 0)) {
      iVar8 = 0;
    }
    else {
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (uVar22 + lVar12 == 0) {
        bVar5 = false;
        iVar9 = (int)local_738;
      }
      else {
        local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffff00000000);
        cVar6 = FUN_1804514f0(&local_730,uVar22 + lVar12,4);
        if (cVar6 == '\0') {
          bVar5 = false;
          iVar9 = (int)local_738;
        }
        else {
          bVar5 = true;
          iVar9 = (uint)local_730;
        }
      }
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      iVar8 = 0;
      if (bVar5) {
        iVar8 = iVar9;
      }
    }
    local_720 = (undefined8 *)CONCAT44(local_720._4_4_,iVar8);
    _local_758 = ZEXT816(0);
    ppuVar19 = &local_738;
    if (-1 < iVar8) {
      ppuVar19 = &local_720;
    }
    ppuVar17 = &local_710;
    if (iVar8 < 1000) {
      ppuVar17 = ppuVar19;
    }
    iVar8 = *(int *)ppuVar17;
    FUN_1801409d0(&puStack_750,0);
    local_758[0] = 5;
    puStack_750 = (undefined8 *)(longlong)iVar8;
    local_708 = (undefined1  [16])0x0;
    auStack_6f8 = ZEXT816(0);
    FUN_18015ba30(local_708,"deaths",6);
    puVar16 = (undefined1 *)FUN_1800f43d0(&local_6e8,local_708);
    auVar37 = _local_758;
    uVar1 = *puVar16;
    *puVar16 = local_758[0];
    local_758[0] = uVar1;
    auVar40 = _local_758;
    uVar33 = *(undefined8 *)(puVar16 + 8);
    puStack_750 = auVar37._8_8_;
    *(undefined8 **)(puVar16 + 8) = puStack_750;
    local_758 = auVar40._0_8_;
    puStack_750 = (undefined8 *)uVar33;
    FUN_1801409d0(&puStack_750,uVar1);
    local_748 = (undefined8 *)local_758;
    local_710 = (undefined8 *)CONCAT44(local_710._4_4_,999);
    local_738 = (undefined8 *)((ulonglong)local_738 & 0xffffffff00000000);
    uVar22 = (ulonglong)DAT_180bb89b8;
    if (DAT_180bb89b8 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180bb89b0) {
        uVar22 = 0;
      }
      else {
        local_720 = (undefined8 *)&DAT_1808da050;
        iVar8 = FUN_1805f68d0(&DAT_1808da050);
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da09c == 0x7fffffff) {
          DAT_1808da09c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        uVar22 = (ulonglong)DAT_180bb89b8;
        if ((DAT_180bb89b8 == 0) && (DAT_180bb89b0 <= UVar11)) {
          DAT_180bb89b8 = FUN_1804174b0("CSMatchStats_t",0xb792db50);
          uVar22 = (ulonglong)DAT_180bb89b8;
          if (DAT_180bb89b8 == 0) {
            DAT_180bb89b0 = UVar11 + 1000;
          }
          else {
            DAT_180bb89b0 = 0xffffffffffffffff;
          }
        }
        FUN_1805f68fc(&DAT_1808da050);
      }
    }
    if ((lVar12 == 0) || ((int)uVar22 == 0)) {
      iVar8 = 0;
    }
    else {
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      if (uVar22 + lVar12 == 0) {
        bVar5 = false;
        iVar9 = (int)local_738;
      }
      else {
        local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffff00000000);
        cVar6 = FUN_1804514f0(&local_730,uVar22 + lVar12,4);
        if (cVar6 == '\0') {
          bVar5 = false;
          iVar9 = (int)local_738;
        }
        else {
          bVar5 = true;
          iVar9 = (uint)local_730;
        }
      }
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      iVar8 = 0;
      if (bVar5) {
        iVar8 = iVar9;
      }
    }
    local_720 = (undefined8 *)CONCAT44(local_720._4_4_,iVar8);
    _local_758 = ZEXT816(0);
    ppuVar19 = &local_738;
    if (-1 < iVar8) {
      ppuVar19 = &local_720;
    }
    ppuVar17 = &local_710;
    if (iVar8 < 1000) {
      ppuVar17 = ppuVar19;
    }
    iVar8 = *(int *)ppuVar17;
    FUN_1801409d0(&puStack_750,0);
    local_758[0] = 5;
    puStack_750 = (undefined8 *)(longlong)iVar8;
    local_708 = (undefined1  [16])0x0;
    auStack_6f8 = ZEXT816(0);
    FUN_18015ba30(local_708,"assists",7);
    puVar16 = (undefined1 *)FUN_1800f43d0(&local_6e8,local_708);
    auVar37 = _local_758;
    uVar1 = *puVar16;
    *puVar16 = local_758[0];
    local_758[0] = uVar1;
    auVar40 = _local_758;
    uVar33 = *(undefined8 *)(puVar16 + 8);
    puStack_750 = auVar37._8_8_;
    *(undefined8 **)(puVar16 + 8) = puStack_750;
    local_758 = auVar40._0_8_;
    puStack_750 = (undefined8 *)uVar33;
    FUN_1801409d0(&puStack_750,uVar1);
  }
  uVar22 = (ulonglong)DAT_180bb89a8;
  if (DAT_180bb89a8 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180bb89a0 <= UVar11) {
      local_748 = (undefined8 *)&DAT_1808da000;
      iVar8 = FUN_1805f68d0(&DAT_1808da000);
      if (iVar8 != 0) goto LAB_1801c138d;
      if (DAT_1808da04c == 0x7fffffff) {
        DAT_1808da04c = 0x7ffffffe;
        goto LAB_1801c1382;
      }
      uVar22 = (ulonglong)DAT_180bb89a8;
      if ((DAT_180bb89a8 == 0) && (DAT_180bb89a0 <= UVar11)) {
        DAT_180bb89a8 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        uVar22 = (ulonglong)DAT_180bb89a8;
        if (DAT_180bb89a8 == 0) {
          DAT_180bb89a0 = UVar11 + 1000;
        }
        else {
          DAT_180bb89a0 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808da000);
      if ((int)uVar22 != 0) goto LAB_1801c0792;
    }
    puVar21 = (undefined8 *)0x0;
    lVar12 = local_6d8;
  }
  else {
LAB_1801c0792:
    lVar12 = local_6d8;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (uVar22 + lVar12 == 0) {
      bVar5 = false;
      puVar24 = local_6d0;
    }
    else {
      local_738 = (undefined8 *)0x0;
      cVar6 = FUN_1804514f0(&local_738,uVar22 + lVar12,8);
      if (cVar6 == '\0') {
        bVar5 = false;
        puVar24 = local_6d0;
      }
      else {
        bVar5 = true;
        puVar24 = local_738;
      }
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    puVar21 = (undefined8 *)0x0;
    if (bVar5) {
      puVar21 = puVar24;
    }
  }
  uVar22 = (ulonglong)DAT_180bb8998;
  if (DAT_180bb8998 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180bb8990) {
      uVar22 = 0;
    }
    else {
      local_748 = (undefined8 *)&DAT_1808d9fb0;
      iVar8 = FUN_1805f68d0(&DAT_1808d9fb0);
      if (iVar8 != 0) goto LAB_1801c138d;
      if (DAT_1808d9ffc == 0x7fffffff) {
        DAT_1808d9ffc = 0x7ffffffe;
        goto LAB_1801c1382;
      }
      uVar22 = (ulonglong)DAT_180bb8998;
      if ((DAT_180bb8998 == 0) && (DAT_180bb8990 <= UVar11)) {
        DAT_180bb8998 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        uVar22 = (ulonglong)DAT_180bb8998;
        if (DAT_180bb8998 == 0) {
          DAT_180bb8990 = UVar11 + 1000;
        }
        else {
          DAT_180bb8990 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1808d9fb0);
    }
  }
  if ((puVar21 != (undefined8 *)0x0) && ((int)uVar22 != 0)) {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if ((undefined *)(uVar22 + (longlong)puVar21) != (undefined *)0x0) {
      local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffff00000000);
      FUN_1804514f0(&local_730,(undefined *)(uVar22 + (longlong)puVar21),4);
    }
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
  }
  lVar13 = FUN_1803d4150();
  if (lVar13 != 0) {
    iVar8 = DAT_180bb8988;
    if (DAT_180bb8988 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180bb8980) {
        iVar8 = 0;
      }
      else {
        local_748 = (undefined8 *)&DAT_1808d9f60;
        iVar8 = FUN_1805f68d0(&DAT_1808d9f60);
        if (iVar8 != 0) goto LAB_1801c138d;
        if (DAT_1808d9fac == 0x7fffffff) {
          DAT_1808d9fac = 0x7ffffffe;
          goto LAB_1801c1382;
        }
        if ((DAT_180bb8988 == 0) && (DAT_180bb8980 <= UVar11)) {
          DAT_180bb8988 = FUN_1804174b0("C_EconEntity",0x537b0586);
          if (DAT_180bb8988 == 0) {
            DAT_180bb8980 = UVar11 + 1000;
          }
          else {
            DAT_180bb8980 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180bb8988;
        FUN_1805f68fc(&DAT_1808d9f60);
      }
    }
    iVar9 = DAT_180bb8978;
    if (DAT_180bb8978 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180bb8970) {
        iVar9 = 0;
      }
      else {
        local_748 = (undefined8 *)&DAT_1808d9f10;
        iVar9 = FUN_1805f68d0(&DAT_1808d9f10);
        if (iVar9 != 0) goto LAB_1801c138d;
        if (DAT_1808d9f5c == 0x7fffffff) {
          DAT_1808d9f5c = 0x7ffffffe;
          goto LAB_1801c1382;
        }
        if ((DAT_180bb8978 == 0) && (DAT_180bb8970 <= UVar11)) {
          DAT_180bb8978 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
          if (DAT_180bb8978 == 0) {
            DAT_180bb8970 = UVar11 + 1000;
          }
          else {
            DAT_180bb8970 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180bb8978;
        FUN_1805f68fc(&DAT_1808d9f10);
      }
    }
    if ((iVar8 != 0) && (iVar9 != 0)) {
      uVar22 = (ulonglong)DAT_180bb8968;
      if (DAT_180bb8968 == 0) {
        UVar11 = GetTickCount64();
        if (UVar11 < DAT_180bb8960) {
          uVar22 = 0;
        }
        else {
          local_748 = (undefined8 *)&DAT_1808d9ec0;
          iVar10 = FUN_1805f68d0(&DAT_1808d9ec0);
          if (iVar10 != 0) {
LAB_1801c138d:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808d9f0c == 0x7fffffff) {
            DAT_1808d9f0c = 0x7ffffffe;
LAB_1801c1382:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          uVar22 = (ulonglong)DAT_180bb8968;
          if ((DAT_180bb8968 == 0) && (DAT_180bb8960 <= UVar11)) {
            DAT_180bb8968 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
            uVar22 = (ulonglong)DAT_180bb8968;
            if (DAT_180bb8968 == 0) {
              uVar25 = UVar11 + 1000;
            }
            DAT_180bb8960 = uVar25;
          }
          FUN_1805f68fc(&DAT_1808d9ec0);
        }
      }
      uVar29 = auVar39._0_4_;
      lVar13 = (longlong)iVar8 + iVar9 + lVar13;
      if ((lVar13 == 0) || ((int)uVar22 == 0)) {
        uVar26 = 0;
      }
      else {
        lVar13 = uVar22 + lVar13;
        lVar18 = FUN_18017ea70();
        *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
        bVar5 = false;
        if (lVar13 != 0) {
          local_730 = (undefined8 *)((ulonglong)local_730 & 0xffffffffffff0000);
          cVar6 = FUN_1804514f0(&local_730,lVar13,2);
          if (cVar6 == '\0') {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
        }
        uVar26 = (ushort)local_730;
        lVar13 = FUN_18017ea70();
        uVar29 = auVar39._0_4_;
        if (*(int *)(lVar13 + 4) != 0) {
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
        }
        if (!bVar5) {
          uVar26 = 0;
        }
      }
      if ((DAT_180cce2e8 & 1) == 0) {
        DAT_180cce2e8 = DAT_180cce2e8 | 1;
        DAT_180cce308 = 0;
        _DAT_180cce310 = ZEXT816(0);
        DAT_180cce320 = 0;
        DAT_180cce328 = 0;
        local_4c8[0] = 1;
        local_4c0 = "deagle";
        local_4b8 = 2;
        local_4b0 = "elite";
        local_4a8 = 3;
        local_4a0 = "fiveseven";
        local_498 = 4;
        local_490 = "glock";
        local_488 = 7;
        local_480 = &DAT_1806bc17c;
        local_478 = 9;
        local_470 = &DAT_1806bc184;
        local_468 = 10;
        local_460 = "famas";
        local_458 = 0xd;
        local_450 = "galilar";
        local_448 = 0x10;
        local_440 = &DAT_1806bc3b8;
        local_438 = 0x11;
        local_430 = "mac10";
        local_428 = 0x13;
        local_420 = &DAT_1806bc334;
        local_418 = 0x17;
        local_410 = "mp5sd";
        local_408 = 0x18;
        local_400 = "ump45";
        local_3f8 = 0x19;
        local_3f0 = "xm1014";
        local_3e8 = 0x1a;
        local_3e0 = "bizon";
        local_3d8 = 0x1b;
        local_3d0 = &DAT_1806bc4a4;
        local_3c8 = 0x1c;
        local_3c0 = "negev";
        local_3b8 = 0x1d;
        local_3b0 = "sawedoff";
        local_3a8 = 0x1e;
        local_3a0 = &DAT_1806bc234;
        local_398 = 0x20;
        local_390 = "hkp2000";
        local_388 = 0x21;
        local_380 = &DAT_1806bc2fc;
        local_378 = 0x22;
        local_370 = &DAT_1806bc178;
        local_368 = 0x23;
        local_360 = &DAT_1806bc450;
        local_358 = 0x24;
        local_350 = &DAT_1806bc1f0;
        local_348 = 0x26;
        local_340 = "scar20";
        local_338 = 0x27;
        local_330 = "sg556";
        local_328 = 0x28;
        local_320 = "ssg08";
        local_318 = 0x2b;
        local_310 = "flashbang";
        local_308 = 0x2c;
        local_300 = "hegrenade";
        local_2f8 = 0x2d;
        local_2f0 = "smokegrenade";
        local_2e8 = 0x2e;
        local_2e0 = "molotov";
        local_2d8 = 0x2f;
        local_2d0 = &DAT_1806bd2e4;
        local_2c8 = 0x30;
        local_2c0 = "incgrenade";
        local_2b8 = 0x31;
        local_2b0 = &DAT_1806bd330;
        local_2a8 = 0x3c;
        local_2a0 = "m4a1_silencer";
        local_298 = 0x3d;
        local_290 = "usp_silencer";
        local_288 = 0x3f;
        local_280 = "cz75a";
        local_278 = 0x40;
        local_270 = "revolver";
        _DAT_180cce2f0 = (ulonglong)uVar29;
        DAT_180cce2f8 = 0;
        DAT_180cce300 = 0;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          puStack_750 = (undefined8 *)0x15;
          local_758 = (undefined1  [8])"tier0.dll:g_pMemAlloc";
          DAT_180c7df28 = (undefined8 *)FUN_180451750(local_758);
        }
        DAT_180cce2f8 =
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
        *(longlong *)DAT_180cce2f8 = DAT_180cce2f8;
        *(longlong *)(DAT_180cce2f8 + 8) = DAT_180cce2f8;
        DAT_180cce308 = 0;
        _DAT_180cce310 = (undefined1  [16])0x0;
        DAT_180cce320 = 7;
        DAT_180cce328 = 8;
        _DAT_180cce2f0 = CONCAT44(DAT_180cce2f0_4,0x3f800000);
        uVar33 = FUN_1801406e0(&DAT_180cce308,0x10,DAT_180cce2f8);
        puVar24 = (undefined8 *)local_4c8;
        do {
          uVar33 = FUN_1801c6f20(uVar33,local_758,puVar24);
          puVar24 = puVar24 + 2;
        } while (puVar24 != &local_268);
        atexit(FUN_180662330);
      }
      uVar25 = (((ulonglong)uVar26 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)(uVar26 >> 8)) * 0x8a97b0004e7feab & DAT_180cce320;
      lVar13 = *(longlong *)(DAT_180cce308 + 8 + uVar25 * 0x10);
      if (lVar13 == DAT_180cce2f8) {
LAB_1801c10e0:
        lVar13 = 0;
      }
      else if ((uint)uVar26 != *(uint *)(lVar13 + 0x10)) {
        do {
          if (lVar13 == *(longlong *)(DAT_180cce308 + uVar25 * 0x10)) goto LAB_1801c10e0;
          lVar13 = *(longlong *)(lVar13 + 8);
        } while ((uint)uVar26 != *(uint *)(lVar13 + 0x10));
      }
      lVar18 = DAT_180cce2f8;
      if (lVar13 != 0) {
        lVar18 = lVar13;
      }
      if (lVar18 != DAT_180cce2f8) {
        local_748 = (undefined8 *)local_758;
        _local_758 = ZEXT816(0);
        FUN_18017acf0(local_758,lVar18 + 0x18);
        local_708 = (undefined1  [16])0x0;
        auStack_6f8 = ZEXT816(0);
        FUN_18015ba30(local_708,"weapon",6);
        puVar16 = (undefined1 *)FUN_1800f43d0(&local_6e8,local_708);
        auVar37 = _local_758;
        uVar1 = *puVar16;
        *puVar16 = local_758[0];
        local_758[0] = uVar1;
        auVar40 = _local_758;
        uVar33 = *(undefined8 *)(puVar16 + 8);
        puStack_750 = auVar37._8_8_;
        *(undefined8 **)(puVar16 + 8) = puStack_750;
        local_758 = auVar40._0_8_;
        puStack_750 = (undefined8 *)uVar33;
        FUN_1801409d0(&puStack_750,uVar1);
      }
    }
  }
  local_748 = (undefined8 *)local_758;
  _local_758 = ZEXT816(0);
  FUN_1801409d0(&puStack_750,0);
  local_758[0] = 4;
  local_6d8 = CONCAT71(local_6d8._1_7_,lVar12 == param_6);
  puStack_750 = (undefined8 *)local_6d8;
  local_708 = (undefined1  [16])0x0;
  auStack_6f8 = ZEXT816(0);
  FUN_18015ba30(local_708,&DAT_1807c5d98,4);
  puVar16 = (undefined1 *)FUN_1800f43d0(&local_6e8,local_708);
  auVar37 = _local_758;
  uVar1 = *puVar16;
  *puVar16 = local_758[0];
  local_758[0] = uVar1;
  auVar40 = _local_758;
  uVar33 = *(undefined8 *)(puVar16 + 8);
  puStack_750 = auVar37._8_8_;
  *(undefined8 **)(puVar16 + 8) = puStack_750;
  local_758 = auVar40._0_8_;
  puStack_750 = (undefined8 *)uVar33;
  FUN_1801409d0(&puStack_750,uVar1);
  *local_6d0 = CONCAT71(uStack_6e7,local_6e8);
  local_6d0[1] = uStack_6e0;
  local_6e8 = 0;
  uStack_6e0 = 0;
  *(undefined1 *)(local_6d0 + 2) = 1;
  FUN_1801409d0(&uStack_6e0,0);
  FUN_18015c010(&local_f8);
}



