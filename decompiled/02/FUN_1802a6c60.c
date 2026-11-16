// FUN_1802a6c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a6c60 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a6c60(undefined8 param_1,float *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [32];
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  longlong *plVar19;
  ulonglong uVar20;
  float *pfVar21;
  undefined8 uVar22;
  uint uVar23;
  undefined8 *_Buf1;
  undefined8 *puVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong uVar27;
  undefined1 *puVar28;
  int *piVar29;
  int iVar30;
  uint uVar31;
  byte *pbVar32;
  char *pcVar33;
  longlong lVar34;
  uint *puVar35;
  uint uVar36;
  undefined *puVar37;
  byte *pbVar38;
  byte *pbVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined4 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined4 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined1 auVar56 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  undefined1 auVar65 [16];
  undefined1 auVar66 [64];
  undefined1 auStackY_24a8 [32];
  float local_2448;
  char local_2444;
  char local_2443;
  char local_2442;
  float local_2440;
  float local_243c;
  float local_2438 [2];
  char local_2430;
  char local_242f;
  uint local_242c;
  float local_2428 [2];
  uint *local_2420;
  undefined4 local_2418;
  undefined4 local_2414;
  uint local_2410;
  longlong local_2408;
  ulonglong local_2400;
  undefined8 local_23f8;
  undefined8 uStack_23f0;
  undefined1 local_23e8 [16];
  undefined1 auStack_23d8 [16];
  uint local_23c8;
  float local_23c4;
  float local_23c0;
  float local_23bc;
  undefined8 local_23b8;
  undefined8 local_23b0;
  float local_23a8;
  float local_23a4;
  uint local_23a0;
  uint local_239c;
  undefined4 local_2398;
  undefined4 local_2394;
  float local_2390;
  float local_238c;
  float local_2388;
  float local_2384;
  float local_2380;
  float local_237c;
  float local_2378;
  float local_2374;
  float local_2370;
  float local_236c;
  float local_2368 [2];
  longlong *local_2360;
  undefined1 local_2358 [4];
  float local_2354;
  undefined1 local_2350 [8];
  float *local_2348;
  longlong local_2340;
  undefined1 local_2338 [8];
  float fStack_2330;
  float fStack_232c;
  float fStack_2328;
  float fStack_2324;
  float fStack_2320;
  float fStack_231c;
  undefined1 local_2318 [8];
  longlong *local_2310;
  undefined2 local_2308;
  undefined4 local_2304;
  undefined4 local_2300;
  undefined8 local_22fc;
  undefined8 uStack_22f4;
  undefined2 local_22ec;
  int local_22e8;
  undefined1 local_22e4;
  undefined8 local_22e0;
  undefined8 uStack_22d8;
  undefined1 local_22d0;
  undefined4 local_22cc;
  undefined1 local_22c8;
  undefined4 local_22c4;
  undefined4 local_22c0;
  undefined4 local_22bc;
  undefined4 local_22b8;
  undefined2 local_22b4;
  undefined1 local_22b0 [16];
  undefined1 local_22a0;
  undefined4 local_229c;
  undefined8 local_2298;
  undefined8 uStack_2290;
  undefined4 local_2288;
  undefined2 local_2284;
  undefined4 local_2280;
  undefined4 local_227c;
  undefined4 local_2278;
  undefined4 local_2274;
  undefined1 local_2270;
  undefined8 local_2268;
  undefined8 *local_2260;
  undefined8 local_2258;
  undefined4 local_2250;
  undefined *local_2248;
  undefined8 uStack_2240;
  undefined8 local_2238;
  undefined8 *local_2230;
  undefined8 local_2228;
  float local_2220;
  undefined8 local_2218;
  undefined8 *local_2210;
  undefined1 *local_2208;
  longlong local_2200;
  undefined *local_21f8;
  undefined8 local_21f0;
  byte *local_21e8;
  longlong local_21e0;
  undefined1 local_21d8 [16];
  undefined *local_21c8;
  undefined8 uStack_21c0;
  undefined8 local_21b8;
  undefined4 local_21b0;
  undefined *local_21a8;
  undefined8 uStack_21a0;
  uint local_2198;
  ulonglong local_2190 [2];
  longlong lStack_2180;
  ulonglong uStack_2178;
  longlong *local_2170;
  ulonglong local_2168;
  ulonglong local_2160;
  undefined4 local_2158;
  undefined4 local_2154;
  undefined1 local_2148 [16];
  undefined1 local_2138 [16];
  longlong lStack_2128;
  ulonglong uStack_2120;
  undefined1 local_2118 [16];
  uint local_2108 [24];
  undefined1 local_20a8 [16];
  undefined4 local_2098;
  uint local_2094 [3];
  float local_2088 [232];
  uint local_1ce8 [2];
  ulonglong local_1ce0 [7];
  undefined4 local_1ca8 [508];
  char local_14b8 [8];
  float afStack_14b0 [5];
  char acStack_149c [4];
  float local_1498;
  char acStack_1494 [4];
  undefined1 auStack_1490 [16];
  char acStack_1480 [4];
  int iStack_147c;
  char acStack_1478 [24];
  undefined8 auStack_1460 [2];
  undefined1 auStack_1450 [4];
  undefined8 auStack_144c [2];
  undefined4 auStack_143c [2];
  byte abStack_1434 [176];
  char cStack_1384;
  char cStack_1290;
  char local_ea0;
  char local_d68;
  char local_ccc;
  char local_c30;
  char local_b94;
  char local_a5c;
  char local_888;
  char local_750;
  float fStack_730;
  char cStack_6cb;
  char local_6b4;
  char local_618;
  char local_4e0;
  undefined1 local_308 [544];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStackY_24a8;
  local_242c = 0;
  local_23f8 = (undefined *)((ulonglong)local_23f8 & 0xffffffff00000000);
  local_23b8 = param_1;
  FUN_18063aed0(local_14b8,param_4,0x11ac);
  iVar30 = 0;
  pfVar26 = &local_1498;
  pcVar33 = local_14b8;
  do {
    fVar41 = (float)FUN_18029b4f0(iVar30,pcVar33);
    *pfVar26 = fVar41;
    iVar30 = iVar30 + 1;
    pcVar33 = pcVar33 + 0x9c;
    pfVar26 = pfVar26 + 0x27;
  } while (iVar30 < 0x1d);
  local_21d8 = (undefined1  [16])0x0;
  local_2310 = (longlong *)FUN_180113860(&DAT_180b909d8);
  plVar19 = DAT_180b909d0;
  local_2360 = DAT_180b909d0;
  local_21d8._8_8_ = local_2310;
  local_21d8._0_8_ = DAT_180b909d0;
  if (local_2310 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2310 + 1) = (int)local_2310[1] + 1;
    UNLOCK();
  }
  LOCK();
  UNLOCK();
  bVar9 = (byte)DAT_180b909d8;
  DAT_180b909d8 = (longlong)local_2310;
  if ((bVar9 & 3) == 2) {
    FUN_1805fa36c(&DAT_180b909d8);
  }
  if ((plVar19 == (longlong *)0x0) || (*plVar19 != param_3[2])) {
LAB_1802a6dd8:
    local_2443 = '\0';
  }
  else {
    uVar20 = plVar19[4];
    UVar11 = GetTickCount64();
    local_2443 = '\x01';
    if (uVar20 <= UVar11) goto LAB_1802a6dd8;
  }
  if (((((local_ea0 == '\0') && (local_ccc == '\0')) && (local_c30 == '\0')) &&
      ((local_a5c == '\0' && (local_888 == '\0')))) &&
     ((local_6b4 == '\0' && ((local_618 == '\0' && (local_4e0 == '\0')))))) {
LAB_1802a6f02:
    cVar7 = '\0';
  }
  else {
    iVar30 = DAT_180c6e314;
    if (DAT_180c6e314 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c6e318) {
        iVar30 = 0;
      }
      else {
        local_2420 = (uint *)&DAT_1808f3e20;
        iVar30 = FUN_1805f68d0(&DAT_1808f3e20);
        if (iVar30 != 0) goto LAB_1802a957e;
        if (DAT_1808f3e6c == 0x7fffffff) {
          DAT_1808f3e6c = 0x7ffffffe;
          goto LAB_1802a9573;
        }
        if ((DAT_180c6e314 == 0) && (DAT_180c6e318 <= UVar11)) {
          DAT_180c6e314 = FUN_1804174b0("C_CSWeaponBase",0x184f0553);
          if (DAT_180c6e314 == 0) {
            DAT_180c6e318 = UVar11 + 1000;
          }
          else {
            DAT_180c6e318 = 0xffffffffffffffff;
          }
        }
        iVar30 = DAT_180c6e314;
        FUN_1805f68fc(&DAT_1808f3e20);
      }
    }
    cVar7 = FUN_1802aae00(param_3[0x7a],iVar30);
    if (cVar7 == '\0') goto LAB_1802a6f02;
    cVar7 = '\x01';
  }
  puVar24 = param_3 + 0x7d;
  lVar12 = param_3[0x7f];
  uVar20 = param_3[0x80];
  _Buf1 = puVar24;
  if (0xf < uVar20) {
    _Buf1 = (undefined8 *)*puVar24;
  }
  local_2444 = cVar7;
  if ((lVar12 == 9) && (iVar30 = memcmp(_Buf1,"hegrenade",9), iVar30 == 0)) {
LAB_1802a708a:
    if ((local_a5c == '\0') && (local_750 == '\0')) goto LAB_1802a7041;
    iVar30 = DAT_180c6e300;
    if (DAT_180c6e300 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c6e308) {
        iVar30 = 0;
      }
      else {
        local_2420 = (uint *)&DAT_1808f3dd0;
        iVar30 = FUN_1805f68d0(&DAT_1808f3dd0);
        if (iVar30 != 0) goto LAB_1802a957e;
        if (DAT_1808f3e1c == 0x7fffffff) {
          DAT_1808f3e1c = 0x7ffffffe;
          goto LAB_1802a9573;
        }
        if ((DAT_180c6e300 == 0) && (DAT_180c6e308 <= UVar11)) {
          DAT_180c6e300 = FUN_1804174b0("C_BaseCSGrenade",0xb3d8aaba);
          if (DAT_180c6e300 == 0) {
            DAT_180c6e308 = UVar11 + 1000;
          }
          else {
            DAT_180c6e308 = 0xffffffffffffffff;
          }
        }
        iVar30 = DAT_180c6e300;
        FUN_1805f68fc(&DAT_1808f3dd0);
      }
    }
    local_2442 = FUN_1802aae00(param_3[0x7a],iVar30);
  }
  else {
    if (0xf < uVar20) {
      puVar24 = (undefined8 *)*puVar24;
    }
    if ((lVar12 == 9) && (iVar30 = memcmp(puVar24,"flashbang",9), iVar30 == 0)) goto LAB_1802a708a;
    puVar24 = param_3 + 0x7d;
    if (0xf < uVar20) {
      puVar24 = (undefined8 *)*puVar24;
    }
    if ((lVar12 == 0xc) && (iVar30 = memcmp(puVar24,"smokegrenade",0xc), iVar30 == 0))
    goto LAB_1802a708a;
    puVar24 = param_3 + 0x7d;
    if (0xf < uVar20) {
      puVar24 = (undefined8 *)*puVar24;
    }
    if ((lVar12 == 7) && (iVar30 = memcmp(puVar24,"molotov",7), iVar30 == 0)) goto LAB_1802a708a;
    puVar24 = param_3 + 0x7d;
    lVar12 = param_3[0x7f];
    uVar20 = param_3[0x80];
    if (0xf < uVar20) {
      puVar24 = (undefined8 *)*puVar24;
    }
    if ((lVar12 == 10) && (iVar30 = memcmp(puVar24,"incgrenade",10), iVar30 == 0))
    goto LAB_1802a708a;
    puVar24 = param_3 + 0x7d;
    if (0xf < uVar20) {
      puVar24 = (undefined8 *)*puVar24;
    }
    if (lVar12 == 5) {
      lVar12 = 0;
      do {
        lVar25 = lVar12 + 1;
        if (*(byte *)((longlong)puVar24 + lVar12) != (&DAT_1806bd2e4)[lVar12]) {
          uVar23 = -(uint)(*(byte *)((longlong)puVar24 + lVar12) < (byte)(&DAT_1806bd2e4)[lVar12]) |
                   1;
          goto LAB_1802a703d;
        }
        lVar12 = lVar25;
      } while (lVar25 != 5);
      uVar23 = 0;
LAB_1802a703d:
      if (uVar23 == 0) goto LAB_1802a708a;
    }
LAB_1802a7041:
    local_2442 = '\0';
  }
  auVar46 = ZEXT864(0);
  if (local_d68 == '\0') {
LAB_1802a7286:
    local_2410 = 0x3f800000;
    auVar45 = SUB6416(ZEXT464(0x3f800000),0);
    auVar53 = auVar45;
  }
  else {
    uVar20 = (ulonglong)DAT_180c6e310;
    if (DAT_180c6e310 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c6e2e8) {
        uVar20 = 0;
      }
      else {
        local_2420 = (uint *)&DAT_1808f3d80;
        iVar30 = FUN_1805f68d0(&DAT_1808f3d80);
        if (iVar30 != 0) goto LAB_1802a957e;
        if (DAT_1808f3dcc == 0x7fffffff) {
          DAT_1808f3dcc = 0x7ffffffe;
          goto LAB_1802a9573;
        }
        uVar20 = (ulonglong)DAT_180c6e310;
        if ((DAT_180c6e310 == 0) && (DAT_180c6e2e8 <= UVar11)) {
          DAT_180c6e310 = FUN_1804174b0("C_CSPlayerPawn",0x7ac97631);
          uVar20 = (ulonglong)DAT_180c6e310;
          if (DAT_180c6e310 == 0) {
            DAT_180c6e2e8 = UVar11 + 1000;
          }
          else {
            DAT_180c6e2e8 = 0xffffffffffffffff;
          }
        }
        FUN_1805f68fc(&DAT_1808f3d80);
      }
    }
    if ((param_3[2] == 0) || ((int)uVar20 == 0)) goto LAB_1802a7286;
    lVar25 = uVar20 + param_3[2];
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (lVar25 == 0) {
      auVar50 = ZEXT464((uint)local_2448);
      uVar23 = 0;
    }
    else {
      local_2440 = auVar46._0_4_;
      cVar8 = FUN_1804514f0(&local_2440,lVar25,4);
      if (cVar8 == '\0') {
        uVar23 = 0;
        auVar50 = ZEXT464((uint)local_2448);
      }
      else {
        auVar50 = ZEXT464((uint)local_2440);
        uVar23 = 1;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    auVar53 = vpcmpeqd_avx(ZEXT416(uVar23),SUB6416(ZEXT464(0),0));
    auVar45 = SUB6416(ZEXT464(0x3f800000),0);
    auVar53 = vblendvps_avx(auVar50._0_16_,auVar45,auVar53);
    local_2410 = auVar53._0_4_;
  }
  auVar58 = ZEXT1664(auVar53);
  auVar53 = vshufps_avx(auVar45,auVar45,0);
  auVar50 = ZEXT1664(auVar53);
  if (local_b94 == '\0') {
LAB_1802a74f7:
    fVar41 = -NAN;
  }
  else {
    uVar20 = (ulonglong)DAT_180c6e2f0;
    if (DAT_180c6e2f0 == 0) {
      UVar11 = GetTickCount64();
      if (UVar11 < DAT_180c6e2f8) {
        uVar20 = 0;
      }
      else {
        local_2420 = (uint *)&DAT_1808f3ce0;
        iVar30 = FUN_1805f68d0(&DAT_1808f3ce0);
        if (iVar30 != 0) goto LAB_1802a957e;
        if (DAT_1808f3d2c == 0x7fffffff) {
          DAT_1808f3d2c = 0x7ffffffe;
          goto LAB_1802a9573;
        }
        uVar20 = (ulonglong)DAT_180c6e2f0;
        if ((DAT_180c6e2f0 == 0) && (DAT_180c6e2f8 <= UVar11)) {
          DAT_180c6e2f0 = FUN_1804174b0("C_CSPlayerPawn",0x63ebd1d8);
          uVar20 = (ulonglong)DAT_180c6e2f0;
          if (DAT_180c6e2f0 == 0) {
            DAT_180c6e2f8 = UVar11 + 1000;
          }
          else {
            DAT_180c6e2f8 = 0xffffffffffffffff;
          }
        }
        FUN_1805f68fc(&DAT_1808f3ce0);
      }
    }
    puVar37 = (undefined *)0x0;
    if ((param_3[2] != 0) && ((int)uVar20 != 0)) {
      lVar25 = uVar20 + param_3[2];
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      if (lVar25 == 0) {
        bVar3 = false;
        puVar35 = local_2420;
      }
      else {
        local_23b0 = (undefined *)0x0;
        cVar8 = FUN_1804514f0(&local_23b0,lVar25,8);
        if (cVar8 == '\0') {
          bVar3 = false;
          puVar35 = local_2420;
        }
        else {
          bVar3 = true;
          puVar35 = (uint *)local_23b0;
        }
      }
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      if (bVar3) {
        puVar37 = (undefined *)puVar35;
      }
    }
    if (puVar37 == (undefined *)0x0) goto LAB_1802a74f7;
    uVar20 = (ulonglong)DAT_180c6e2dc;
    if (DAT_180c6e2dc == 0) {
      UVar11 = GetTickCount64();
      if (DAT_180c6e2e0 <= UVar11) {
        local_2420 = (uint *)&DAT_1808f3d30;
        iVar30 = FUN_1805f68d0(&DAT_1808f3d30);
        if (iVar30 != 0) goto LAB_1802a957e;
        if (DAT_1808f3d7c == 0x7fffffff) {
          DAT_1808f3d7c = 0x7ffffffe;
          goto LAB_1802a9573;
        }
        uVar20 = (ulonglong)DAT_180c6e2dc;
        if ((DAT_180c6e2dc == 0) && (DAT_180c6e2e0 <= UVar11)) {
          DAT_180c6e2dc = FUN_1804174b0("CCSPlayer_HostageServices",0x695fdf3c);
          uVar20 = (ulonglong)DAT_180c6e2dc;
          if (DAT_180c6e2dc == 0) {
            DAT_180c6e2e0 = UVar11 + 1000;
          }
          else {
            DAT_180c6e2e0 = 0xffffffffffffffff;
          }
        }
        FUN_1805f68fc(&DAT_1808f3d30);
        if ((int)uVar20 != 0) goto LAB_1802a749a;
      }
      goto LAB_1802a74f7;
    }
LAB_1802a749a:
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (puVar37 + uVar20 == (undefined *)0x0) {
      bVar3 = false;
      fVar42 = local_2448;
    }
    else {
      local_2440 = 0.0;
      cVar8 = FUN_1804514f0(&local_2440,puVar37 + uVar20,4);
      if (cVar8 == '\0') {
        bVar3 = false;
        fVar42 = local_2448;
      }
      else {
        bVar3 = true;
        fVar42 = local_2440;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    fVar41 = -NAN;
    if (bVar3) {
      fVar41 = fVar42;
    }
  }
  iVar30 = DAT_180c6e2c8;
  if (local_b94 == '\0') {
LAB_1802a75dc:
    local_2430 = '\0';
  }
  else {
    if (((int)fVar41 + 1U & 0xfffffffe) == 0) {
      if ((DAT_180c6e2c8 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e2d0 <= UVar11)) {
        local_2420 = (uint *)&DAT_1808f3c90;
        iVar30 = FUN_1805f68d0(&DAT_1808f3c90);
        if (iVar30 != 0) goto LAB_1802a957e;
        if (DAT_1808f3cdc == 0x7fffffff) {
          DAT_1808f3cdc = 0x7ffffffe;
          goto LAB_1802a9573;
        }
        if ((DAT_180c6e2c8 == 0) && (DAT_180c6e2d0 <= UVar11)) {
          DAT_180c6e2c8 = FUN_1804174b0("C_CSPlayerPawn",0x43ac7bea);
          if (DAT_180c6e2c8 == 0) {
            DAT_180c6e2d0 = UVar11 + 1000;
          }
          else {
            DAT_180c6e2d0 = 0xffffffffffffffff;
          }
        }
        iVar30 = DAT_180c6e2c8;
        FUN_1805f68fc(&DAT_1808f3c90);
      }
      cVar8 = FUN_1802aae00(param_3[2],iVar30);
      if (cVar8 == '\0') goto LAB_1802a75dc;
    }
    local_2430 = '\x01';
  }
  iVar30 = DAT_180c6e2d8;
  auVar60 = auVar58._0_16_;
  auVar57 = auVar46._0_16_;
  auVar45 = auVar50._0_16_;
  local_23c8 = auVar50._0_4_;
  auVar53 = auVar45;
  if (local_6b4 != '\0') {
    if ((DAT_180c6e2d8 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e2b0 <= UVar11)) {
      local_2420 = (uint *)&DAT_1808f3c40;
      iVar30 = FUN_1805f68d0(&DAT_1808f3c40);
      if (iVar30 != 0) goto LAB_1802a957e;
      if (DAT_1808f3c8c == 0x7fffffff) {
        DAT_1808f3c8c = 0x7ffffffe;
        goto LAB_1802a9573;
      }
      if ((DAT_180c6e2d8 == 0) && (DAT_180c6e2b0 <= UVar11)) {
        DAT_180c6e2d8 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
        if (DAT_180c6e2d8 == 0) {
          DAT_180c6e2b0 = UVar11 + 1000;
        }
        else {
          DAT_180c6e2b0 = 0xffffffffffffffff;
        }
      }
      iVar30 = DAT_180c6e2d8;
      FUN_1805f68fc(&DAT_1808f3c40);
    }
    iVar10 = FUN_1802aae90(*param_3,iVar30);
    iVar30 = DAT_180c6e2b8;
    if ((DAT_180c6e2b8 == 0) && (UVar11 = GetTickCount64(), DAT_180c6e2c0 <= UVar11)) {
      local_2420 = (uint *)&DAT_1808f3bf0;
      iVar30 = FUN_1805f68d0(&DAT_1808f3bf0);
      if (iVar30 != 0) {
LAB_1802a957e:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f3c3c == 0x7fffffff) {
        DAT_1808f3c3c = 0x7ffffffe;
LAB_1802a9573:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e2b8 == 0) && (DAT_180c6e2c0 <= UVar11)) {
        DAT_180c6e2b8 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
        if (DAT_180c6e2b8 == 0) {
          DAT_180c6e2c0 = UVar11 + 1000;
        }
        else {
          DAT_180c6e2c0 = 0xffffffffffffffff;
        }
      }
      iVar30 = DAT_180c6e2b8;
      FUN_1805f68fc(&DAT_1808f3bf0);
    }
    iVar30 = FUN_1802aae90(param_3[0x7a],iVar30);
    auVar60 = auVar58._0_16_;
    auVar57 = auVar46._0_16_;
    auVar45 = auVar50._0_16_;
    if (cVar7 == '\0') {
      local_243c = auVar50._0_4_;
      local_2448 = auVar46._0_4_;
      local_2438[0] = (float)(iVar30 - iVar10) * 0.015625;
      pfVar26 = &local_2448;
      if (auVar46._0_4_ <= local_2438[0]) {
        pfVar26 = local_2438;
      }
      pfVar21 = &local_243c;
      if (local_2438[0] <= local_243c) {
        pfVar21 = pfVar26;
      }
      auVar53 = ZEXT416((uint)(local_243c - *pfVar21));
    }
    else {
      auVar53 = ZEXT816(0);
    }
    local_23c8 = auVar53._0_4_;
  }
  lVar12 = 0;
  local_2108[0] = 0;
  local_2108[1] = 0;
  local_2108[2] = 0;
  local_2108[3] = 0;
  local_2108[4] = 0;
  local_2108[5] = 0;
  local_2108[6] = 0;
  local_2108[7] = 0;
  local_2108[8] = 0;
  local_2108[9] = 0;
  local_2108[10] = 0;
  local_2108[0xb] = 0;
  local_2108[0xc] = 0;
  local_2108[0xd] = 0;
  local_2108[0xe] = 0;
  local_2108[0xf] = 0;
  local_2108[0x10] = 0;
  local_2108[0x11] = 0;
  local_2108[0x12] = 0;
  local_2108[0x13] = 0;
  local_2108[0x14] = 0;
  local_2108[0x15] = 0;
  local_2108[0x16] = 0;
  local_2108[0x17] = 0;
  local_20a8 = (undefined1  [16])0x0;
  local_2098 = 0;
  uVar23 = 0;
  do {
    local_2108[lVar12] = uVar23;
    uVar23 = uVar23 + 1;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x1d);
  auVar46 = ZEXT1664(auVar45);
  auVar50 = ZEXT1664(auVar57);
  auVar58 = ZEXT1664(auVar53);
  auVar51 = ZEXT1664(auVar60);
  FUN_1802ad500(local_2108,local_2094,local_14b8);
  FUN_1802a9600(local_308);
  local_23c0 = *param_2;
  auVar64 = ZEXT464((uint)local_23c0);
  local_23bc = param_2[1];
  auVar66 = ZEXT464((uint)local_23bc);
  local_23c4 = param_2[2] - local_23c0;
  local_2440 = param_2[3] - local_23bc;
  _eh_vector_constructor_iterator_(local_1ce8,0x48,0x1d,FUN_1802a97b0,FUN_1801ccd30);
  FUN_18063ab10(local_2088,0,0x3a0);
  FUN_1802aaf20(local_2088);
  local_2118 = (undefined1  [16])0x0;
  lVar12 = 0;
  local_2408 = 0;
  local_2420 = local_2108;
  auVar62 = ZEXT464(0x40000000);
  auVar56 = ZEXT464(0x3ecccccd);
  fVar41 = 3.0;
  do {
    cVar6 = local_2430;
    cVar5 = local_2442;
    cVar8 = local_2443;
    cVar7 = local_2444;
    uVar22 = 0xf;
    uVar44 = 0;
    pcVar33 = (char *)0x0;
    pbVar32 = (byte *)(param_3 + 0x7d);
    uVar23 = *local_2420;
    lVar34 = (longlong)(int)uVar23;
    lVar25 = lVar34 * 0x9c;
    if (((local_14b8[lVar25] == '\0') || (uVar23 == 0)) || (uVar23 == 5)) goto LAB_1802a7f7d;
    lStack_2128 = 0;
    uStack_2120 = 0xf;
    local_2138._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar53[0xf] = 0;
    auVar53._0_15_ = local_2138._1_15_;
    local_2138 = auVar53 << 8;
    if ((uVar23 < 0x1c) && ((0x8800018U >> (uVar23 & 0x1f) & 1) != 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    fVar42 = auVar50._0_4_;
    switch(uVar23) {
    case 1:
      plVar19 = param_3 + 8;
      if ((longlong *)local_2138 != plVar19) {
        if (0xf < (ulonglong)param_3[0xb]) {
          plVar19 = (longlong *)*plVar19;
        }
        FUN_180113930(local_2138,plVar19,param_3[10]);
      }
      goto LAB_1802a82b7;
    case 2:
      local_21b0 = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_21b8 = 0x7000000000000000;
      local_21a8 = &DAT_1807d13a0;
      uStack_21a0 = 8;
      local_2268 = 1;
      local_2260 = &local_21b8;
      local_23f8 = &DAT_1807d13a0;
      uStack_23f0 = 8;
      FUN_1801d97f0(local_23e8,&local_23f8,&local_2268);
      local_242c = local_242c | 2;
      goto LAB_1802a8277;
    case 3:
      iVar30 = *(int *)(param_3 + 3);
      goto LAB_1802a7aa6;
    case 4:
      if (*(int *)((longlong)param_3 + 0x3e4) < 1) {
        auVar58 = ZEXT1664(auVar50._0_16_);
        goto LAB_1802a82bb;
      }
      local_2438[0] = (float)*(int *)(param_3 + 0x7c) / (float)*(int *)((longlong)param_3 + 0x3e4);
      pfVar26 = &local_2448;
      if (fVar42 <= local_2438[0]) {
        pfVar26 = local_2438;
      }
      goto LAB_1802a7ac6;
    default:
      goto switchD_1802a79d8_caseD_5;
    case 6:
      cVar7 = *(int *)((longlong)param_3 + 0x24) < 1;
      FUN_180113930(local_2138,"NOARM",5);
      break;
    case 7:
      cVar7 = *(char *)((longlong)param_3 + 0x34);
      FUN_180113930(local_2138,&DAT_1807d139c,3);
      break;
    case 8:
      cVar7 = *(char *)((longlong)param_3 + 0x39);
      FUN_180113930(local_2138,"BLIND",5);
      break;
    case 9:
      cVar7 = *(char *)((longlong)param_3 + 0x37);
      FUN_180113930(local_2138,&DAT_1807d13c4,4);
      break;
    case 10:
      FUN_180113930(local_2138,"RELOAD",6);
      break;
    case 0xb:
      cVar7 = *(char *)((longlong)param_3 + 0x3a);
      FUN_180113930(local_2138,"IMMUNE",6);
      break;
    case 0xc:
      cVar7 = auVar51._0_4_ < 0.98;
      FUN_180113930(local_2138,&DAT_1807d13dc,4);
      break;
    case 0xd:
      if (((param_3[0x7f] == 0) || (*(int *)(param_3 + 0x7c) < 1)) || (local_2444 != '\0')) {
        cVar7 = '\x01';
      }
      else {
        cVar7 = '\0';
      }
      FUN_180113930(local_2138,&DAT_1807d13e4,4);
      break;
    case 0xe:
      if (*(char *)((longlong)param_3 + 0x35) == '\0') {
        if (0xf < (ulonglong)param_3[0x80]) {
          pbVar32 = *(byte **)pbVar32;
        }
        if (param_3[0x7f] == 2) {
          bVar40 = *pbVar32 < 99;
          if ((*pbVar32 == 99) && (bVar40 = pbVar32[1] < 0x34, pbVar32[1] == 0x34)) {
            pbVar32 = (byte *)pcVar33;
          }
          else {
            pbVar32 = (byte *)(ulonglong)(-(uint)bVar40 | 1);
          }
          if ((int)pbVar32 == 0) goto LAB_1802a7cb0;
        }
        cVar7 = '\0';
      }
      else {
LAB_1802a7cb0:
        cVar7 = '\x01';
      }
      FUN_180113930(local_2138,&DAT_1806bd32c,2);
      break;
    case 0xf:
      FUN_180113930(local_2138,&DAT_1807d13cc,4);
      cVar7 = cVar6;
      break;
    case 0x10:
      cVar7 = *(char *)(param_3 + 7);
      FUN_180113930(local_2138,"DEFUSE",6);
      break;
    case 0x11:
      FUN_180113930(local_2138,&DAT_1807d13fc,3);
      cVar7 = cVar5;
      break;
    case 0x12:
      local_2250 = *(undefined4 *)(param_3 + 4);
      local_2258 = 0x1000000000000000;
      local_2248 = &DAT_1807d126c;
      uStack_2240 = 3;
      local_2238 = 1;
      local_2230 = &local_2258;
      local_23f8 = &DAT_1807d126c;
      uStack_23f0 = 3;
      FUN_1801d97f0(local_23e8,&local_23f8,&local_2238);
      local_242c = local_242c | 8;
      goto LAB_1802a8277;
    case 0x13:
      FUN_180113930(local_2138,&DAT_1807d1400,3);
      cVar7 = cVar8;
      break;
    case 0x14:
      if ((local_2443 == '\0') || ((char)local_2360[3] != '\0')) {
        cVar7 = '\0';
      }
      else {
        cVar7 = '\x01';
      }
      FUN_180113930(local_2138,"DELAY",5);
      break;
    case 0x15:
      if (local_2138 != pbVar32) {
        if (0xf < (ulonglong)param_3[0x80]) {
          pbVar32 = *(byte **)pbVar32;
        }
        FUN_180113930(local_2138,pbVar32,param_3[0x7f]);
      }
      goto LAB_1802a82b7;
    case 0x16:
      pcVar33 = (char *)pbVar32;
      if (0xf < (ulonglong)param_3[0x80]) {
        pcVar33 = *(char **)pbVar32;
      }
      goto LAB_1802a82b7;
    case 0x17:
      auVar58 = ZEXT1664(auVar58._0_16_);
      goto LAB_1802a82bb;
    case 0x18:
      if (*(char *)((longlong)param_3 + 0x35) == '\0') {
        if (0xf < (ulonglong)param_3[0x80]) {
          pbVar32 = *(byte **)pbVar32;
        }
        if (param_3[0x7f] == 2) {
          bVar40 = *pbVar32 < 99;
          if ((*pbVar32 != 99) || (bVar40 = pbVar32[1] < 0x34, pbVar32[1] != 0x34)) {
            pcVar33 = (char *)(ulonglong)(-(uint)bVar40 | 1);
          }
          if ((int)pcVar33 == 0) goto LAB_1802a7eba;
        }
        pcVar33 = &DAT_1806bd330;
        cVar7 = '\0';
      }
      else {
LAB_1802a7eba:
        pcVar33 = &DAT_1806bd330;
        cVar7 = '\x01';
      }
      break;
    case 0x19:
      pcVar33 = "defuser";
      cVar7 = *(char *)((longlong)param_3 + 0x34);
      break;
    case 0x1a:
      if (*(char *)((longlong)param_3 + 0x36) == '\0') {
        if (0xf < (ulonglong)param_3[0x80]) {
          pbVar32 = *(byte **)pbVar32;
        }
        if (param_3[0x7f] == 5) {
          pbVar38 = (byte *)pcVar33;
          do {
            pbVar39 = pbVar38 + 1;
            if (pbVar32[(longlong)pbVar38] != pbVar38[0x1806bd304]) {
              pcVar33 = (char *)(ulonglong)
                                (-(uint)(pbVar32[(longlong)pbVar38] < pbVar38[0x1806bd304]) | 1);
              break;
            }
            pbVar38 = pbVar39;
          } while (pbVar39 != (byte *)0x5);
          if ((int)pcVar33 == 0) goto LAB_1802a7f26;
        }
        cVar7 = '\0';
      }
      else {
LAB_1802a7f26:
        cVar7 = '\x01';
      }
      pcVar33 = "taser";
      break;
    case 0x1b:
      iVar30 = *(int *)((longlong)param_3 + 0x24);
LAB_1802a7aa6:
      local_2438[0] = (float)iVar30 / 100.0;
      pfVar26 = &local_2448;
      if (fVar42 <= local_2438[0]) {
        pfVar26 = local_2438;
      }
LAB_1802a7ac6:
      local_243c = auVar46._0_4_;
      local_2448 = fVar42;
      pfVar21 = &local_243c;
      if (local_2438[0] <= auVar46._0_4_) {
        pfVar21 = pfVar26;
      }
      auVar58 = ZEXT464((uint)*pfVar21);
      goto LAB_1802a82bb;
    case 0x1c:
      local_2448 = 0.0;
      pfVar26 = &local_2448;
      if (0 < (int)*(float *)(param_3 + 5)) {
        pfVar26 = (float *)(param_3 + 5);
      }
      local_2220 = *pfVar26;
      local_2228 = 0x1000000000000000;
      local_21c8 = &DAT_1807d13f4;
      uStack_21c0 = 5;
      local_2218 = 1;
      local_2210 = &local_2228;
      local_23f8 = &DAT_1807d13f4;
      uStack_23f0 = 5;
      FUN_1801d97f0(local_23e8,&local_23f8,&local_2218);
      local_242c = local_242c | 4;
LAB_1802a8277:
      FUN_18015c010(local_2138);
      local_2138 = local_23e8;
      auVar45[0xf] = 0;
      auVar45._0_15_ = local_23e8._1_15_;
      local_23e8 = auVar45 << 8;
      lStack_2128 = auStack_23d8._0_8_;
      uStack_2120 = auStack_23d8._8_8_;
      auStack_23d8._8_8_ = uVar22;
      auStack_23d8._0_8_ = uVar44;
      auVar46 = ZEXT1664(auVar46._0_16_);
      auVar50 = ZEXT1664(auVar50._0_16_);
      auVar56 = ZEXT1664(auVar56._0_16_);
      auVar51 = ZEXT1664(auVar51._0_16_);
      auVar62 = ZEXT1664(auVar62._0_16_);
      auVar64 = ZEXT1664(auVar64._0_16_);
      auVar66 = ZEXT1664(auVar66._0_16_);
      FUN_18015c010(local_23e8);
LAB_1802a82b7:
      auVar58 = ZEXT1664(auVar46._0_16_);
      goto LAB_1802a82bb;
    }
    auVar58 = ZEXT1664(auVar46._0_16_);
    lVar12 = local_2408;
    if (cVar7 == '\0') {
switchD_1802a79d8_caseD_5:
      FUN_18015c010(local_2138);
    }
    else {
LAB_1802a82bb:
      uVar20 = (ulonglong)(byte)local_14b8[lVar25 + 1];
      local_23f8 = (undefined *)0x100000000;
      uStack_23f0 = 0x200000003;
      if (3 < (byte)local_14b8[lVar25 + 1]) {
        uVar20 = 3;
      }
      local_2448 = *(float *)(local_23e8 + uVar20 * 4 + -0x10);
      bVar9 = FUN_18029b970(local_2448);
      FUN_18029cb80(local_2318,afStack_14b0 + lVar34 * 0x27 + 1);
      uVar20 = DAT_180b90850;
      if (bVar3) {
        auVar53 = vmaxss_avx(ZEXT416((uint)(*(float *)(acStack_149c + lVar25 + 4) +
                                           *(float *)(acStack_149c + lVar25 + 4))),auVar46._0_16_);
        auVar56 = ZEXT1664(auVar53);
        if ((uVar23 == 3) && (cStack_1290 != '\0')) {
          cVar7 = '\x01';
        }
        else {
          cVar7 = '\0';
        }
        local_242f = cVar7;
        fVar42 = (float)FUN_18029b6b0(auStack_143c[lVar34 * 0x27]);
        fVar42 = fVar42 / 9.0;
        local_23f8 = (undefined *)CONCAT44(local_23f8._4_4_,fVar42);
        fVar43 = (float)FUN_18029b730(auStack_143c[lVar34 * 0x27 + 1]);
        local_2400 = CONCAT44(local_2400._4_4_,fVar43);
        fVar41 = auVar50._0_4_;
        local_243c = fVar41;
        local_2438[0] = fVar41;
        if (cVar7 != '\0') {
          iVar30 = 0;
          if (0 < *(int *)(param_3 + 3)) {
            iVar30 = *(int *)(param_3 + 3);
          }
          pauVar13 = (undefined1 (*) [16])FUN_18015bea0(local_23e8,iVar30);
          auVar65 = auVar66._0_16_;
          auVar63 = auVar64._0_16_;
          auVar60 = auVar56._0_16_;
          auVar57 = auVar58._0_16_;
          auVar45 = auVar50._0_16_;
          auVar53 = auVar46._0_16_;
          if (&local_2138 != pauVar13) {
            FUN_18015c010(local_2138);
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar60 = auVar56._0_16_;
            auVar57 = auVar58._0_16_;
            auVar45 = auVar50._0_16_;
            auVar53 = auVar46._0_16_;
            local_2138 = *pauVar13;
            lStack_2128 = *(longlong *)pauVar13[1];
            uStack_2120 = *(ulonglong *)(pauVar13[1] + 8);
            *(undefined8 *)pauVar13[1] = 0;
            *(undefined8 *)(pauVar13[1] + 8) = 0xf;
            (*pauVar13)[0] = 0;
          }
          auVar46 = ZEXT1664(auVar53);
          auVar50 = ZEXT1664(auVar45);
          auVar58 = ZEXT1664(auVar57);
          auVar56 = ZEXT1664(auVar60);
          auVar64 = ZEXT1664(auVar63);
          auVar66 = ZEXT1664(auVar65);
          FUN_18015c010(local_23e8);
          puVar28 = local_2138;
          if (0xf < uStack_2120) {
            puVar28 = (undefined1 *)local_2138._0_8_;
          }
          if (uVar20 == 0) {
            uVar27 = DAT_180bbade0;
            if (DAT_180bbadc8 != DAT_180bbadd0) {
              uVar27 = *(ulonglong *)(DAT_180bbadd0 + -8);
            }
            if (uVar27 != 0) goto LAB_1802a8410;
            local_2388 = auVar50._0_4_;
            local_2384 = local_2388;
          }
          else {
            uVar27 = uVar20;
LAB_1802a8410:
            local_2200 = lStack_2128;
            local_2208 = puVar28;
            FUN_180430010(uVar27,&local_2388,&local_2208);
          }
          local_243c = local_2384 * fVar42;
          local_2438[0] = local_2388 * fVar42;
          auVar51 = ZEXT464((uint)local_2438[0]);
          if (bVar9 == 0) {
            fVar41 = local_243c + fVar43;
          }
          else {
            if (uVar20 == 0) {
              uVar20 = DAT_180bbade0;
              if (DAT_180bbadc8 != DAT_180bbadd0) {
                uVar20 = *(ulonglong *)(DAT_180bbadd0 + -8);
              }
              if (uVar20 == 0) {
                fVar41 = auVar50._0_4_;
                local_23b0 = (undefined *)CONCAT44(fVar41,fVar41);
                auVar53 = vmaxss_avx(ZEXT416((uint)(fVar42 * fVar41)),ZEXT416((uint)local_2438[0]));
                fVar41 = auVar53._0_4_ + fVar43;
                goto LAB_1802a856f;
              }
            }
            local_21f8 = &DAT_1807d1404;
            local_21f0 = 3;
            FUN_180430010(uVar20,&local_23b0,&local_21f8);
            auVar53 = vmaxss_avx(ZEXT416((uint)(fVar42 * (float)local_23b0)),auVar51._0_16_);
            fVar41 = auVar53._0_4_ + fVar43;
          }
        }
LAB_1802a856f:
        fVar42 = local_2448;
        if (bVar9 == 0) {
          fVar41 = fVar41 + auVar56._0_4_;
          fVar43 = local_23c4;
        }
        else {
          fVar43 = fVar41 + auVar56._0_4_;
          fVar41 = local_2440;
        }
        local_2398 = auVar64._0_4_;
        local_2394 = auVar66._0_4_;
        local_2390 = local_23c4;
        local_238c = local_2440;
        lVar12 = (longlong)(int)local_2448;
        fVar55 = local_23c4;
        fVar61 = local_2440;
        pauVar13 = (undefined1 (*) [16])FUN_18029b9f0(local_2148,&local_2398,fVar43,fVar41);
        uVar44 = auVar58._0_8_;
        auVar53 = *pauVar13;
        auVar51 = ZEXT1664(auVar53);
        auVar45 = vshufps_avx(auVar53,auVar53,0xaa);
        auVar57 = vshufps_avx(auVar53,auVar53,0xff);
        auVar60 = vshufps_avx(auVar53,auVar53,0x55);
        auVar62 = ZEXT1664(auVar60);
        fVar41 = auVar53._0_4_;
        fVar43 = auVar60._0_4_;
        if (fVar42 == 0.0) {
          auVar53 = ZEXT416((uint)(auVar64._0_4_ - fVar41));
        }
        else if (fVar42 == 1.4013e-45) {
          auVar53 = ZEXT416((uint)(auVar66._0_4_ - fVar43));
        }
        else if (fVar42 == 2.8026e-45) {
          auVar53 = ZEXT416((uint)(((auVar57._0_4_ + fVar43) - auVar66._0_4_) - fVar61));
        }
        else {
          auVar53 = ZEXT416((uint)(((auVar45._0_4_ + fVar41) - auVar64._0_4_) - fVar55));
        }
        auVar53 = vmaxss_avx(auVar53,ZEXT416(*(uint *)(local_2118 + lVar12 * 4)));
        *(int *)(local_2118 + lVar12 * 4) = auVar53._0_4_;
        if (local_14b8[lVar25 + 1] == '\0') {
          auVar51 = ZEXT464((uint)((auVar45._0_4_ + fVar41) - auVar56._0_4_));
        }
        else if (local_14b8[lVar25 + 1] == '\x01') {
          auVar62 = ZEXT464((uint)((auVar57._0_4_ + fVar43) - auVar56._0_4_));
        }
        auVar53 = vpcmpeqd_avx(ZEXT416((uint)bVar9),SUB6416(ZEXT464(0),0));
        auVar53 = vblendvps_avx(auVar56._0_16_,auVar45,auVar53);
        auVar64 = ZEXT1664(auVar53);
        auVar45 = vpcmpeqd_avx(ZEXT416((uint)bVar9),SUB6416(ZEXT464(0),0));
        auVar45 = vblendvps_avx(auVar57,auVar56._0_16_,auVar45);
        auVar56 = ZEXT1664(auVar45);
        if (acStack_149c[lVar25] != '\0') {
          local_2418 = 0x50000000;
          FUN_1804307e0(local_23b8,auVar51._0_8_,auVar62._0_8_,auVar53._0_8_);
          uVar44 = auVar58._0_8_;
        }
        pauVar14 = (undefined1 (*) [32])FUN_18029b580(local_23e8,local_14b8 + lVar25,uVar44);
        uVar44 = local_23b8;
        _local_2338 = *pauVar14;
        local_237c = auVar46._0_4_;
        local_2380 = auVar50._0_4_;
        pfVar26 = &local_2380;
        if (local_2380 <= local_2338._0_4_) {
          pfVar26 = (float *)local_2338;
        }
        pfVar21 = &local_237c;
        if (local_2338._0_4_ <= local_237c) {
          pfVar21 = pfVar26;
        }
        local_2374 = local_237c;
        local_2378 = local_2380;
        auVar45 = local_2338._0_16_;
        auVar53 = vshufps_avx(auVar45,auVar45,0x55);
        pfVar26 = &local_2378;
        if (local_2380 <= auVar53._0_4_) {
          pfVar26 = (float *)(local_2338 + 4);
        }
        pfVar15 = &local_2374;
        if (auVar53._0_4_ <= local_237c) {
          pfVar15 = pfVar26;
        }
        local_236c = local_237c;
        local_2370 = local_2380;
        auVar53 = vshufps_avx(auVar45,auVar45,0xaa);
        pfVar26 = &local_2370;
        if (local_2380 <= auVar53._0_4_) {
          pfVar26 = &fStack_2330;
        }
        pfVar16 = &local_236c;
        if (auVar53._0_4_ <= local_237c) {
          pfVar16 = pfVar26;
        }
        local_2354 = local_237c;
        local_2368[0] = local_2380;
        auVar53 = vshufps_avx(auVar45,auVar45,0xff);
        pfVar26 = local_2368;
        if (local_2380 <= auVar53._0_4_) {
          pfVar26 = &fStack_232c;
        }
        pfVar17 = &local_2354;
        if (auVar53._0_4_ <= local_237c) {
          pfVar17 = pfVar26;
        }
        local_2428[0] = local_237c;
        local_2448 = local_2380;
        auVar53 = local_2338._16_16_;
        pfVar26 = &local_2448;
        if (local_2380 <= local_2338._16_4_) {
          pfVar26 = &fStack_2328;
        }
        pfVar18 = local_2428;
        if (local_2338._16_4_ <= local_237c) {
          pfVar18 = pfVar26;
        }
        uVar23 = (uint)(*pfVar18 * 255.0);
        local_2448 = local_237c;
        local_2428[0] = local_2380;
        auVar45 = vshufps_avx(auVar53,auVar53,0x55);
        pfVar26 = local_2428;
        if (local_2380 <= auVar45._0_4_) {
          pfVar26 = &fStack_2324;
        }
        pfVar18 = &local_2448;
        if (auVar45._0_4_ <= local_237c) {
          pfVar18 = pfVar26;
        }
        uVar31 = (uint)(*pfVar18 * 255.0);
        auVar45 = vshufps_avx(auVar53,auVar53,0xaa);
        pfVar26 = local_2428;
        if (local_2380 <= auVar45._0_4_) {
          pfVar26 = &fStack_2320;
        }
        pfVar18 = &local_2448;
        if (auVar45._0_4_ <= local_237c) {
          pfVar18 = pfVar26;
        }
        uVar36 = (uint)(*pfVar18 * 255.0);
        auVar53 = vshufps_avx(auVar53,auVar53,0xff);
        pfVar26 = local_2428;
        if (local_2380 <= auVar53._0_4_) {
          pfVar26 = &fStack_231c;
        }
        pfVar18 = &local_2448;
        if (auVar53._0_4_ <= local_237c) {
          pfVar18 = pfVar26;
        }
        local_2414 = CONCAT13((char)(int)(*pfVar18 * 255.0),
                              CONCAT12((char)uVar36,CONCAT11((char)uVar31,(char)uVar23)));
        if (acStack_1478[lVar25] == '\x02') {
          if (bVar9 == 0) {
            uVar36 = uVar36 & 0xff;
            uVar31 = uVar31 & 0xff;
            uVar23 = uVar23 & 0xff;
          }
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar50 = ZEXT1664(auVar50._0_16_);
          auVar58 = ZEXT1664(auVar51._0_16_);
          auVar51 = ZEXT1664(auVar62._0_16_);
          auVar56 = ZEXT1664(auVar56._0_16_);
          auVar64 = ZEXT1664(auVar64._0_16_);
          FUN_180430a80(local_23b8,
                        ((((int)(*pfVar18 * 255.0) & 0xffU) << 8 | uVar36 & 0xff) << 8 |
                        uVar31 & 0xff) << 8 | uVar23 & 0xff,
                        ((((int)(*pfVar17 * 255.0) & 0xffU) << 8 | (int)(*pfVar16 * 255.0) & 0xffU)
                         << 8 | (int)(*pfVar15 * 255.0) & 0xffU) << 8 |
                        (int)(*pfVar21 * 255.0) & 0xffU);
        }
        else {
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar50 = ZEXT1664(auVar50._0_16_);
          auVar58 = ZEXT1664(auVar51._0_16_);
          auVar51 = ZEXT1664(auVar62._0_16_);
          auVar56 = ZEXT1664(auVar56._0_16_);
          auVar64 = ZEXT1664(auVar64._0_16_);
          FUN_1804307e0(local_23b8);
        }
        auVar45 = auVar51._0_16_;
        auVar53 = auVar58._0_16_;
        auVar60 = auVar64._0_16_;
        auVar57 = auVar56._0_16_;
        if (acStack_1494[lVar25] == '\0') {
          auVar62 = ZEXT464(0x40000000);
        }
        else {
          FUN_18029cb80(local_2358,auStack_1490 + lVar25);
          auVar62 = ZEXT464(0x40000000);
          FUN_180433010(uVar44,auVar58._0_4_ - auVar46._0_4_,auVar51._0_4_ - auVar46._0_4_,
                        auVar64._0_4_ + 2.0);
          auVar45 = auVar51._0_16_;
          auVar53 = auVar58._0_16_;
          auVar60 = auVar64._0_16_;
          auVar57 = auVar56._0_16_;
        }
        if (local_242f != '\0') {
          vunpcklps_avx(ZEXT416((uint)local_2438[0]),ZEXT416((uint)local_243c));
          auVar57 = vunpcklps_avx(auVar60,auVar57);
          auVar53 = vunpcklps_avx(auVar53,auVar45);
          FUN_18029b7b0(local_2350,auVar53._0_8_,auVar57._0_8_,local_14b8[lVar25 + 1]);
          local_2308 = 0x100;
          local_2304 = auVar50._0_4_;
          local_2300 = 0;
          local_22ec = 0;
          local_22d0 = 0;
          local_22cc = 1;
          local_22c8 = 0;
          local_22c4 = 0x3f68f5c3;
          local_22c0 = 0x3e8a3d71;
          local_22bc = 0x3e8a3d71;
          local_22b8 = auVar46._0_4_;
          local_22b4 = 1;
          local_22b0 = auVar46._0_16_;
          local_22a0 = 1;
          local_229c = auVar50._0_4_;
          local_2298 = 0;
          uStack_2290 = 0x411000003f800000;
          local_2288 = auVar62._0_4_;
          local_2284 = 0;
          local_2280 = 0x3f6bebec;
          local_227c = 0x3e828283;
          local_2278 = 0x3e8c8c8d;
          local_2274 = auVar46._0_4_;
          local_2270 = 0;
          local_22fc = *(undefined8 *)((longlong)auStack_1460 + lVar25);
          uStack_22f4 = *(undefined8 *)((longlong)auStack_1460 + lVar25 + 8);
          local_22e4 = auStack_1450[lVar25];
          local_22e0 = *(undefined8 *)((longlong)auStack_144c + lVar25);
          uStack_22d8 = *(undefined8 *)((longlong)auStack_144c + lVar25 + 8);
          local_22e8 = (int)local_23f8;
          local_23e8 = local_2138;
          auStack_23d8._8_8_ = uStack_2120;
          auStack_23d8._0_8_ = lStack_2128;
          lStack_2128 = 0;
          uStack_2120 = 0xf;
          auVar57[0xf] = 0;
          auVar57._0_15_ = local_2138._1_15_;
          local_2138 = auVar57 << 8;
          auVar46 = ZEXT1664(auVar46._0_16_);
          auVar50 = ZEXT1664(auVar50._0_16_);
          auVar62 = ZEXT1664(auVar62._0_16_);
          FUN_18029d120(uVar44);
        }
        FUN_18015c010(local_2138);
        fVar41 = 3.0;
        auVar64 = ZEXT464((uint)local_23c0);
        auVar66 = ZEXT464((uint)local_23bc);
        auVar51 = ZEXT464(local_2410);
        auVar56 = ZEXT464(0x3ecccccd);
        lVar12 = local_2408;
      }
      else {
        if (*(int *)(acStack_1480 + lVar25 + 4) == 2) {
          uVar20 = DAT_180b90838;
        }
        else {
          uVar20 = DAT_180b90820;
          if (*(int *)(acStack_1480 + lVar25 + 4) == 0) {
            uVar20 = DAT_180b90850;
          }
        }
        local_2400 = uVar20;
        if ((byte *)pcVar33 == (byte *)0x0) {
          plVar19 = (longlong *)0x0;
        }
        else {
          local_23e8 = (undefined1  [16])0x0;
          auStack_23d8 = (undefined1  [16])0x0;
          lVar34 = -1;
          do {
            lVar34 = lVar34 + 1;
          } while (pcVar33[lVar34] != 0);
          uVar44 = FUN_18015ba30(local_23e8,pcVar33);
          local_23f8 = (undefined *)(CONCAT44(local_23f8._4_4_,local_242c) | 1);
          local_242c = local_242c | 1;
          plVar19 = (longlong *)FUN_1803db750(uVar44,local_23e8,auVar56._0_8_);
        }
        if ((local_242c & 1) != 0) {
          local_242c = local_242c & 0xfffffffe;
          FUN_18015c010(local_23e8);
        }
        if (((byte *)pcVar33 != (byte *)0x0) && ((plVar19 == (longlong *)0x0 || (*plVar19 == 0)))) {
          FUN_18015c010(local_2138);
          goto LAB_1802a7f7d;
        }
        if (acStack_1480[lVar25] == '\x01') {
          pbVar32 = local_2138;
          if (0xf < uStack_2120) {
            pbVar32 = (byte *)local_2138._0_8_;
          }
          pbVar38 = pbVar32 + lStack_2128;
          if (pbVar32 != pbVar38) {
            do {
              iVar30 = toupper((uint)*pbVar32);
              *pbVar32 = (byte)iVar30;
              pbVar32 = pbVar32 + 1;
            } while (pbVar32 != pbVar38);
          }
        }
        pbVar32 = (byte *)local_2138._0_8_;
        if (acStack_1480[lVar25] == '\x02') {
          pbVar38 = local_2138;
          if (0xf < uStack_2120) {
            pbVar38 = (byte *)local_2138._0_8_;
          }
          pbVar39 = pbVar38 + lStack_2128;
          if (pbVar38 != pbVar39) {
            do {
              iVar30 = tolower((uint)*pbVar38);
              *pbVar38 = (byte)iVar30;
              pbVar38 = pbVar38 + 1;
            } while (pbVar38 != pbVar39);
            pbVar32 = (byte *)local_2138._0_8_;
          }
        }
        pbVar38 = local_2138;
        if (0xf < uStack_2120) {
          pbVar38 = pbVar32;
        }
        if (uVar20 == 0) {
          if (DAT_180bbadc8 == DAT_180bbadd0) {
            uVar20 = DAT_180bbade0;
          }
          else {
            uVar20 = *(ulonglong *)(DAT_180bbadd0 + -8);
          }
          if (uVar20 != 0) goto LAB_1802a8ee4;
          local_23a8 = auVar50._0_4_;
          local_23a4 = auVar50._0_4_;
        }
        else {
LAB_1802a8ee4:
          local_21e0 = lStack_2128;
          local_21e8 = pbVar38;
          FUN_180430010(uVar20,&local_23a8,&local_21e8);
        }
        if (plVar19 == (longlong *)0x0) {
          fVar43 = local_23a8 * *(float *)(acStack_149c + lVar25 + 4);
          fVar42 = local_23a4 * *(float *)(acStack_149c + lVar25 + 4);
        }
        else {
          iVar30 = *(int *)((longlong)plVar19 + 0x24);
          iVar10 = 1;
          if (1 < iVar30) {
            iVar10 = iVar30;
          }
          auVar53 = vminss_avx(ZEXT416((uint)(12.0 / (float)iVar10)),auVar46._0_16_);
          fVar43 = (float)(int)plVar19[4] * auVar53._0_4_;
          fVar42 = (float)iVar30 * auVar53._0_4_;
        }
        auVar56 = ZEXT464((uint)fVar42);
        auVar58 = ZEXT464((uint)fVar43);
        if ((uVar23 == 1) && (cStack_1384 != '\0')) {
          uVar20 = FUN_18029cc90(param_3[1]);
          auVar53 = auVar56._0_16_;
          auVar65 = auVar66._0_16_;
          auVar63 = auVar64._0_16_;
          auVar60 = auVar62._0_16_;
          auVar57 = auVar50._0_16_;
          auVar45 = auVar46._0_16_;
          if (uVar20 == 0) goto LAB_1802a8fff;
          fVar42 = auVar58._0_4_ + auVar56._0_4_ + fVar41;
          auVar48 = ZEXT416((uint)fVar42);
          auVar49 = ZEXT416((uint)fVar42);
          auVar54 = auVar53;
        }
        else {
          uVar20 = 0;
LAB_1802a8fff:
          auVar65 = auVar66._0_16_;
          auVar63 = auVar64._0_16_;
          auVar60 = auVar62._0_16_;
          auVar57 = auVar50._0_16_;
          auVar45 = auVar46._0_16_;
          auVar48 = auVar58._0_16_;
          auVar53 = auVar56._0_16_;
          auVar49 = auVar48;
          auVar54 = auVar53;
          if ((((uVar23 == 0x16) && (plVar19 != (longlong *)0x0)) && (cStack_6cb != '\0')) &&
             (0 < *(int *)((longlong)param_3 + 0x3e4))) {
            local_23f8 = (undefined *)CONCAT44(local_23f8._4_4_,(int)uVar20);
            piVar29 = (int *)&local_23f8;
            if (0 < *(int *)(param_3 + 0x7c)) {
              piVar29 = (int *)(param_3 + 0x7c);
            }
            pfVar21 = (float *)FUN_18015bea0(local_23e8,*piVar29);
            pfVar26 = pfVar21;
            if (0xf < *(ulonglong *)(pfVar21 + 6)) {
              pfVar26 = *(float **)pfVar21;
            }
            if (local_2400 == 0) {
              if (DAT_180bbadc8 == DAT_180bbadd0) {
                uVar27 = DAT_180bbade0;
              }
              else {
                uVar27 = *(ulonglong *)(DAT_180bbadd0 + -8);
              }
              if (uVar27 != 0) goto LAB_1802a908a;
              auVar51 = ZEXT1664(auVar50._0_16_);
              local_23a0 = auVar50._0_4_;
              auVar59 = ZEXT1664(auVar50._0_16_);
              local_239c = local_23a0;
            }
            else {
              uVar27 = local_2400;
LAB_1802a908a:
              local_2348 = pfVar26;
              local_2340 = *(undefined8 *)(pfVar21 + 4);
              FUN_180430010(uVar27,&local_23a0,&local_2348);
              auVar59 = ZEXT464(local_239c);
              auVar51 = ZEXT464(local_23a0);
            }
            FUN_18015c010(local_23e8);
            auVar49 = auVar58._0_16_;
            auVar65 = auVar66._0_16_;
            auVar63 = auVar64._0_16_;
            auVar60 = auVar62._0_16_;
            auVar57 = auVar50._0_16_;
            auVar45 = auVar46._0_16_;
            auVar48 = ZEXT416((uint)(auVar51._0_4_ * fStack_730 + fVar41 + auVar58._0_4_));
            auVar54 = auVar56._0_16_;
            auVar53 = vmaxss_avx(ZEXT416((uint)(auVar59._0_4_ * fStack_730)),auVar54);
          }
        }
        lVar12 = local_2408;
        local_23e8 = local_2138;
        auStack_23d8._8_8_ = uStack_2120;
        auStack_23d8._0_8_ = lStack_2128;
        local_2190[0] = local_2138._0_8_;
        local_2190[1] = local_2138._8_8_;
        lStack_2180 = lStack_2128;
        uStack_2178 = uStack_2120;
        lStack_2128 = 0;
        uStack_2120 = 0xf;
        auVar4[0xf] = 0;
        auVar4._0_15_ = local_2138._1_15_;
        local_2138 = auVar4 << 8;
        local_2168 = local_2400;
        local_2158 = auVar49._0_4_;
        local_2154 = auVar54._0_4_;
        local_1ce8[local_2408 * 0x12] = uVar23;
        puVar2 = local_1ce0 + local_2408 * 9;
        local_2198 = uVar23;
        local_2170 = plVar19;
        local_2160 = uVar20;
        uVar47 = local_2158;
        uVar52 = local_2154;
        if (puVar2 != local_2190) {
          auVar46 = ZEXT1664(auVar45);
          auVar50 = ZEXT1664(auVar57);
          auVar58 = ZEXT1664(auVar49);
          auVar56 = ZEXT1664(auVar54);
          auVar51 = ZEXT1664(auVar48);
          auVar62 = ZEXT1664(auVar53);
          auVar64 = ZEXT1664(auVar60);
          auVar66 = ZEXT1664(auVar63);
          auVar59 = ZEXT1664(auVar65);
          FUN_18015c010(puVar2);
          uVar52 = auVar56._0_4_;
          uVar47 = auVar58._0_4_;
          auVar65 = auVar59._0_16_;
          auVar63 = auVar66._0_16_;
          auVar60 = auVar64._0_16_;
          auVar53 = auVar62._0_16_;
          auVar48 = auVar51._0_16_;
          auVar57 = auVar50._0_16_;
          auVar45 = auVar46._0_16_;
          *puVar2 = local_23e8._0_8_;
          local_1ce0[lVar12 * 9 + 1] = local_23e8._8_8_;
          local_1ce0[lVar12 * 9 + 2] = auStack_23d8._0_8_;
          local_1ce0[lVar12 * 9 + 3] = auStack_23d8._8_8_;
          lStack_2180 = 0;
          uStack_2178 = 0xf;
          local_2190[0] = local_2190[0] & 0xffffffffffffff00;
        }
        local_1ce0[lVar12 * 9 + 4] = (ulonglong)plVar19;
        local_1ce0[lVar12 * 9 + 5] = local_2400;
        local_1ce0[lVar12 * 9 + 6] = uVar20;
        local_1ca8[lVar12 * 0x12] = uVar47;
        local_1ca8[lVar12 * 0x12 + 1] = uVar52;
        auVar46 = ZEXT1664(auVar45);
        auVar50 = ZEXT1664(auVar57);
        auVar58 = ZEXT1664(auVar48);
        auVar56 = ZEXT1664(auVar53);
        auVar62 = ZEXT1664(auVar60);
        auVar64 = ZEXT1664(auVar63);
        auVar66 = ZEXT1664(auVar65);
        FUN_18015c010(local_2190);
        fVar42 = *(float *)(local_14b8 + lVar25 + 8);
        local_2088[local_2408 * 8] = local_2448;
        local_2088[local_2408 * 8 + 1] = auVar58._0_4_;
        local_2088[local_2408 * 8 + 2] = auVar56._0_4_;
        (local_2088 + local_2408 * 8 + 3)[0] = 0.0;
        (local_2088 + local_2408 * 8 + 3)[1] = 0.0;
        (local_2088 + local_2408 * 8 + 5)[0] = 0.0;
        (local_2088 + local_2408 * 8 + 5)[1] = 0.0;
        local_2088[local_2408 * 8 + 7] = fVar42;
        lVar12 = local_2408 + 1;
        local_2408 = lVar12;
        FUN_18015c010(local_2138);
        auVar51 = ZEXT464(local_2410);
        auVar56 = ZEXT464(0x3ecccccd);
      }
    }
LAB_1802a7f7d:
    local_2420 = local_2420 + 1;
    auVar58 = ZEXT464(local_23c8);
    if (local_2420 == local_2094) {
      local_2348 = local_2088;
      local_2398 = auVar64._0_4_;
      local_2394 = auVar66._0_4_;
      local_2390 = local_23c4;
      local_238c = local_2440;
      local_2340 = lVar12;
      FUN_18029bc90(&local_2398,&local_2348,local_2118);
      if (lVar12 != 0) {
        local_23c0 = auVar46._0_4_;
        local_23bc = auVar50._0_4_;
        local_2400 = CONCAT44(local_2400._4_4_,local_23c0);
        local_23f8 = (undefined *)CONCAT44(local_23f8._4_4_,local_23bc);
        local_2448 = local_23c0;
        local_2428[0] = local_23bc;
        local_243c = local_23c0;
        local_2438[0] = local_23bc;
        puVar35 = local_1ce8;
        pfVar26 = local_2088 + 4;
        fVar43 = 4.0;
        fVar42 = 255.0;
        fVar55 = 0.5;
        do {
          lVar12 = (longlong)(int)*puVar35 * 0x9c;
          fVar61 = afStack_14b0[(longlong)(int)*puVar35 * 0x27 + 4];
          pfVar21 = local_2438;
          if (auVar50._0_4_ <= fVar61) {
            pfVar21 = afStack_14b0 + (longlong)(int)*puVar35 * 0x27 + 4;
          }
          pfVar15 = &local_243c;
          if (fVar61 <= auVar46._0_4_) {
            pfVar15 = pfVar21;
          }
          local_2440 = (float)(int)(fVar42 * *pfVar15);
          if (acStack_149c[lVar12] != '\0') {
            FUN_1804307e0(local_23b8,pfVar26[-1] - auVar62._0_4_,*pfVar26 - auVar46._0_4_,
                          fVar43 + pfVar26[1]);
          }
          uVar44 = local_23b8;
          if (*(longlong *)(puVar35 + 10) == 0) {
            auVar58 = ZEXT464((uint)pfVar26[-1]);
            if (*(longlong *)(puVar35 + 0xe) != 0) {
              FUN_180435220(local_23b8,pfVar26[-1],*pfVar26);
              auVar58 = ZEXT464((uint)(auVar58._0_4_ + fVar41 + pfVar26[2]));
            }
            uVar22 = FUN_18015b360(local_23e8,puVar35 + 2);
            FUN_18029d120(uVar44,auVar58._0_8_,*pfVar26,uVar22);
            fVar42 = 255.0;
          }
          else {
            if ((local_2442 != '\0') && (*puVar35 == 0x16)) {
              FUN_18029cb80(local_2358,abStack_1434 + lVar12 + 4);
            }
            uVar44 = local_23b8;
            auVar53 = vpcmpeqd_avx(ZEXT416((uint)abStack_1434[lVar12]),ZEXT416(0));
            vblendvps_avx(auVar50._0_16_,auVar46._0_16_,auVar53);
            auVar53 = vpcmpeqd_avx(ZEXT416((uint)abStack_1434[lVar12]),ZEXT416(0));
            vblendvps_avx(auVar46._0_16_,auVar50._0_16_,auVar53);
            FUN_180435220(local_23b8,pfVar26[-1],
                          (pfVar26[2] - (float)puVar35[0x11]) * fVar55 + *pfVar26,puVar35[0x10]);
            if (((*puVar35 == 0x16) && (abStack_1434[lVar12 + 1] != 0)) &&
               (0 < *(int *)((longlong)param_3 + 0x3e4))) {
              local_2440 = 0.0;
              pfVar21 = &local_2440;
              if (0 < (int)*(float *)(param_3 + 0x7c)) {
                pfVar21 = (float *)(param_3 + 0x7c);
              }
              uVar22 = FUN_18015bea0(local_23e8,*pfVar21);
              FUN_18029d120(uVar44,(float)puVar35[0x10] + pfVar26[-1] + fVar41,*pfVar26,uVar22);
            }
          }
          pfVar26 = pfVar26 + 8;
          puVar35 = puVar35 + 0x12;
          local_2408 = local_2408 + -1;
        } while (local_2408 != 0);
      }
      _eh_vector_destructor_iterator_(local_1ce8,0x48,0x1d,FUN_1801ccd30);
      plVar19 = local_2310;
      if (local_2310 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2310 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_2310)(local_2310);
          LOCK();
          piVar29 = (int *)((longlong)plVar19 + 0xc);
          iVar30 = *piVar29;
          *piVar29 = *piVar29 + -1;
          UNLOCK();
          if (iVar30 == 1) {
            (**(code **)(*plVar19 + 8))(plVar19);
          }
        }
      }
    }
  } while( true );
}



