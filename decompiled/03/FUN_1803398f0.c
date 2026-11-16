// FUN_1803398f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803398f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803398f0(undefined8 param_1,longlong param_2)

{
  unkuint9 Var1;
  int *piVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  ushort uVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  ULONGLONG UVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  float *pfVar21;
  float *pfVar22;
  uint *puVar23;
  byte *pbVar24;
  char *pcVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong *plVar30;
  uint uVar31;
  char cVar32;
  undefined1 auVar33 [16];
  undefined4 uVar34;
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  float fVar47;
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  float fVar50;
  undefined1 auVar51 [64];
  undefined1 auStack_3e8 [32];
  byte *local_3c8;
  longlong local_3c0;
  undefined4 local_3b8;
  undefined2 local_3a8;
  undefined8 local_3a0;
  byte local_398;
  byte bStack_397;
  byte bStack_396;
  byte bStack_395;
  byte bStack_394;
  byte bStack_393;
  byte bStack_392;
  byte bStack_391;
  byte bStack_390;
  byte bStack_38f;
  byte bStack_38e;
  byte bStack_38d;
  byte bStack_38c;
  byte bStack_38b;
  byte bStack_38a;
  byte bStack_389;
  byte bStack_388;
  byte bStack_387;
  byte bStack_386;
  byte bStack_385;
  byte bStack_384;
  byte bStack_383;
  byte bStack_382;
  byte bStack_381;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 *local_368;
  undefined8 *puStack_360;
  longlong *plStack_358;
  undefined1 *puStack_350;
  undefined *local_348;
  longlong *plStack_340;
  int ***pppiStack_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  ulonglong local_328;
  undefined1 local_318 [152];
  float local_280;
  float local_26c;
  char local_25d;
  undefined8 local_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 local_1f8;
  longlong local_1f0;
  int *local_1e8 [2];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined4 local_198 [2];
  longlong local_190;
  float local_188 [2];
  undefined8 local_180;
  longlong local_178;
  int local_170;
  undefined4 local_16c;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_150 [2];
  int **local_148;
  longlong *local_140;
  int *local_138;
  undefined *local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  int *local_118;
  longlong *local_110;
  undefined8 *local_108;
  float *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined8 *local_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_3e8;
  DAT_1808fedf1 = 0;
  DAT_1808fedf0 = (DAT_180b0dfd8 & 2) != 0;
  if (param_2 == 0) {
    DAT_1808fedf1 = 0;
  }
  local_178 = *(longlong *)(param_2 + 8);
  if (local_178 != DAT_1808fee58) {
    _DAT_1808fee28 = _DAT_1808fedf8;
    _DAT_1808fee30 = _DAT_1808fee00;
    lRam00000001808fee38 = DAT_1808fee08;
    uRam00000001808fee40 = _DAT_1808fee10;
    _DAT_1808fee48 = DAT_1808fee18;
    _DAT_1808fee50 = _DAT_1808fee20;
    DAT_1808fee58 = local_178;
  }
  _DAT_1808fedf8 = _DAT_1808fee28;
  _DAT_1808fee00 = _DAT_1808fee30;
  DAT_1808fee08 = lRam00000001808fee38;
  _DAT_1808fee10 = uRam00000001808fee40;
  DAT_1808fee18 = _DAT_1808fee48;
  _DAT_1808fee20 = _DAT_1808fee50;
  if ((DAT_180cc81b0 == '\0') || ((DAT_180b0dfd8 & 2) == 0)) goto LAB_18033b8aa;
  if ((DAT_180cd4040 & 1) == 0) {
    DAT_180cd4040 = DAT_180cd4040 | 1;
    local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,0x6b8c9875);
    local_1f0 = 0;
    local_1d8._8_8_ = 1;
    local_1d8._0_8_ = &local_1f8;
    FUN_18044c9c0(DAT_180c64058,local_1d8);
    DAT_180cd4048 = local_1f0;
  }
  if ((DAT_180cd4048 != 0) && (*(char *)(DAT_180cd4048 + 0x58) != '\0')) {
    uVar26 = uStack_380 >> 8;
    uStack_380 = uVar26 << 8;
    _DAT_1808fee10 = uStack_380;
    uStack_380 = uVar26 << 8;
    plStack_340 = (longlong *)((ulonglong)plStack_340 & 0xffffffffffff0000);
    local_328 = local_328 & 0xffff000000000000;
    _DAT_1808fedf8 = 0xffffffffffffffff;
    _DAT_1808fee00 =
         (ulonglong)CONCAT13(bStack_389,CONCAT12(bStack_38a,CONCAT11(bStack_38b,bStack_38c))) <<
         0x20;
    DAT_1808fee08 = 0xffffffffffffffff;
    DAT_1808fee18 = 0xffffffffffffffff;
    _DAT_1808fee20 = 0;
    _DAT_1808fee28 = 0xffffffffffffffff;
    _DAT_1808fee30 =
         (ulonglong)CONCAT13(bStack_389,CONCAT12(bStack_38a,CONCAT11(bStack_38b,bStack_38c))) <<
         0x20;
    lRam00000001808fee38 = 0xffffffffffffffff;
    uRam00000001808fee40 = uStack_380;
    _DAT_1808fee48 = 0xffffffffffffffff;
    _DAT_1808fee50 = 0;
    DAT_1808fee60 = 0xffffffffffffffff;
    DAT_1808fee68 = (undefined *)0x0;
    DAT_1808fee70 = (int *)0x0;
    DAT_1808fee78 = (int *)0x0;
    _DAT_1808fee80 = 0;
    _DAT_1808fee88 = plStack_340;
    _DAT_1808fee90 = 0xfffffffffffffc00;
    _DAT_1808fee98 = 0;
    DAT_1808feea0 = local_328;
  }
  if (((((DAT_180b90050 != '\0') || (DAT_180b8fffc != '\0')) || (DAT_180b90028 != '\0')) ||
      ((DAT_180b900c0 != '\0' || (DAT_180b8fc30 != '\0')))) || (DAT_180b8fe80 != '\0'))
  goto LAB_18033b8aa;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_398 = (byte)_DAT_180bb8890;
  bStack_397 = (byte)((ulonglong)_DAT_180bb8890 >> 8);
  bStack_396 = (byte)((ulonglong)_DAT_180bb8890 >> 0x10);
  bStack_395 = (byte)((ulonglong)_DAT_180bb8890 >> 0x18);
  bStack_394 = (byte)((ulonglong)_DAT_180bb8890 >> 0x20);
  bStack_393 = (byte)((ulonglong)_DAT_180bb8890 >> 0x28);
  bStack_392 = (byte)((ulonglong)_DAT_180bb8890 >> 0x30);
  bStack_391 = (byte)((ulonglong)_DAT_180bb8890 >> 0x38);
  bStack_390 = (byte)uRam0000000180bb8898;
  bStack_38f = (byte)((ulonglong)uRam0000000180bb8898 >> 8);
  bStack_38e = (byte)((ulonglong)uRam0000000180bb8898 >> 0x10);
  bStack_38d = (byte)((ulonglong)uRam0000000180bb8898 >> 0x18);
  bStack_38c = (byte)((ulonglong)uRam0000000180bb8898 >> 0x20);
  bStack_38b = (byte)((ulonglong)uRam0000000180bb8898 >> 0x28);
  bStack_38a = (byte)((ulonglong)uRam0000000180bb8898 >> 0x30);
  bStack_389 = (byte)((ulonglong)uRam0000000180bb8898 >> 0x38);
  bStack_388 = (byte)uRam0000000180bb88a0;
  bStack_387 = (byte)((ulonglong)uRam0000000180bb88a0 >> 8);
  bStack_386 = (byte)((ulonglong)uRam0000000180bb88a0 >> 0x10);
  bStack_385 = (byte)((ulonglong)uRam0000000180bb88a0 >> 0x18);
  bStack_384 = (byte)((ulonglong)uRam0000000180bb88a0 >> 0x20);
  bStack_383 = (byte)((ulonglong)uRam0000000180bb88a0 >> 0x28);
  bStack_382 = (byte)((ulonglong)uRam0000000180bb88a0 >> 0x30);
  bStack_381 = (byte)((ulonglong)uRam0000000180bb88a0 >> 0x38);
  uStack_380 = uRam0000000180bb88a8;
  local_1b8 = _DAT_180bb88b0;
  uStack_1b0 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar3 = (undefined *)
           CONCAT17(bStack_389,
                    CONCAT16(bStack_38a,
                             CONCAT15(bStack_38b,
                                      CONCAT14(bStack_38c,
                                               CONCAT13(bStack_38d,
                                                        CONCAT12(bStack_38e,
                                                                 CONCAT11(bStack_38f,bStack_390)))))
                            ));
  local_1f8 = puVar3;
  if (puVar3 == (undefined *)0x0) {
  }
  uVar26 = 0xffffffffffffffff;
  iVar13 = DAT_180c6f610;
  if (DAT_180c6f610 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f608) {
      iVar13 = 0;
    }
    else {
      local_208._0_4_ = -1.3225881e-38;
      local_208._4_4_ = 1.4013e-45;
      iVar13 = FUN_1805f68d0(&DAT_180900460);
      if (iVar13 != 0) goto LAB_18033b926;
      if (DAT_1809004ac == 0x7fffffff) {
        DAT_1809004ac = 0x7ffffffe;
        goto LAB_18033b93b;
      }
      if ((DAT_180c6f610 == 0) && (DAT_180c6f608 <= UVar14)) {
        DAT_180c6f610 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
        if (DAT_180c6f610 == 0) {
          DAT_180c6f608 = UVar14 + 1000;
        }
        else {
          DAT_180c6f608 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c6f610;
      FUN_1805f68fc(&DAT_180900460);
    }
  }
  if ((puVar3[iVar13] == '\t') || (puVar3[iVar13] == '\a')) goto LAB_18033b8aa;
  *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
  local_1a8 = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    local_1a8 = *(longlong *)(param_2 + 0x40) + 0x10;
  }
  if (local_1a8 == 0) {
  }
  local_1a0 = local_1a8 + 8;
  if (local_1a8 + 8 == 0) {
  }
  iVar13 = DAT_180c6f5e0;
  if (DAT_180c6f5e0 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f5d8) {
      iVar13 = 0;
    }
    else {
      local_208._0_4_ = -1.3225769e-38;
      local_208._4_4_ = 1.4013e-45;
      iVar13 = FUN_1805f68d0(&DAT_180900410);
      if (iVar13 != 0) goto LAB_18033b926;
      if (DAT_18090045c == 0x7fffffff) {
        DAT_18090045c = 0x7ffffffe;
        goto LAB_18033b93b;
      }
      if ((DAT_180c6f5e0 == 0) && (DAT_180c6f5d8 <= UVar14)) {
        DAT_180c6f5e0 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c6f5e0 == 0) {
          DAT_180c6f5d8 = UVar14 + 1000;
        }
        else {
          DAT_180c6f5d8 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c6f5e0;
      FUN_1805f68fc(&DAT_180900410);
    }
  }
  local_1e8[0] = *(int **)(puVar3 + iVar13);
  piVar2 = (int *)CONCAT17(bStack_391,
                           CONCAT16(bStack_392,
                                    CONCAT15(bStack_393,
                                             CONCAT14(bStack_394,
                                                      CONCAT13(bStack_395,
                                                               CONCAT12(bStack_396,
                                                                        CONCAT11(bStack_397,
                                                                                 local_398)))))));
  if (piVar2 == (int *)0x0) {
    local_170 = 0;
  }
  else {
    iVar13 = DAT_180c6f5f0;
    if (DAT_180c6f5f0 == 0) {
      UVar14 = GetTickCount64();
      if (UVar14 < DAT_180c6f5e8) {
        local_170 = *piVar2;
        goto LAB_180339ec6;
      }
      local_208._0_4_ = -1.3225993e-38;
      local_208._4_4_ = 1.4013e-45;
      iVar13 = FUN_1805f68d0(&DAT_1809004b0);
      if (iVar13 != 0) goto LAB_18033b926;
      if (DAT_1809004fc == 0x7fffffff) {
        DAT_1809004fc = 0x7ffffffe;
        goto LAB_18033b93b;
      }
      if ((DAT_180c6f5f0 == 0) && (DAT_180c6f5e8 <= UVar14)) {
        DAT_180c6f5f0 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
        if (DAT_180c6f5f0 == 0) {
          DAT_180c6f5e8 = UVar14 + 1000;
        }
        else {
          DAT_180c6f5e8 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c6f5f0;
      FUN_1805f68fc(&DAT_1809004b0);
    }
    local_170 = *(int *)((longlong)iVar13 + (longlong)piVar2);
  }
LAB_180339ec6:
  if (local_1e8[0] == (int *)0x0) {
    local_168 = -1;
  }
  else {
    iVar13 = DAT_180c6f5e4;
    if (DAT_180c6f5e4 == 0) {
      UVar14 = GetTickCount64();
      if (UVar14 < DAT_180c6f5c0) {
        local_168 = *local_1e8[0];
        goto LAB_180339fbb;
      }
      local_208._0_4_ = -1.3225657e-38;
      local_208._4_4_ = 1.4013e-45;
      iVar13 = FUN_1805f68d0(&DAT_1809003c0);
      if (iVar13 != 0) goto LAB_18033b926;
      if (DAT_18090040c == 0x7fffffff) {
        DAT_18090040c = 0x7ffffffe;
        goto LAB_18033b93b;
      }
      if ((DAT_180c6f5e4 == 0) && (DAT_180c6f5c0 <= UVar14)) {
        DAT_180c6f5e4 = FUN_1804174b0("CCSPlayer_MovementServices",0xb2c4ee6c);
        if (DAT_180c6f5e4 == 0) {
          DAT_180c6f5c0 = UVar14 + 1000;
        }
        else {
          DAT_180c6f5c0 = 0xffffffffffffffff;
        }
      }
      iVar13 = DAT_180c6f5e4;
      FUN_1805f68fc(&DAT_1809003c0);
    }
    local_168 = *(int *)((longlong)iVar13 + (longlong)local_1e8[0]);
  }
LAB_180339fbb:
  auVar39 = SUB6416(ZEXT464(0x3c800000),0);
  auVar44._12_4_ = 0;
  auVar44._0_12_ = ZEXT812(0);
  auVar44 = auVar44 << 0x20;
  if (DAT_1808fee60 == local_178) {
    if (DAT_1808fee68 != puVar3) goto LAB_18033a01e;
    if ((DAT_1808fee70 != local_1e8[0]) ||
       (puVar17 = (undefined *)CONCAT44(local_208._4_4_,(float)local_208), DAT_1808fee78 != piVar2))
    goto LAB_18033a00a;
LAB_18033aa3b:
    local_208._4_4_ = (float)((ulonglong)puVar17 >> 0x20);
    puVar3 = puVar17;
    if (DAT_1808feea0._5_1_ != '\0') goto LAB_18033aa44;
    local_208._4_4_ = (float)((uint)local_208._4_4_ & 0xffffff00);
    puVar18 = &local_208;
    local_150[0] = (undefined4)DAT_1808feea0;
  }
  else {
LAB_18033a00a:
    if ((DAT_1808fee68 != puVar3) ||
       (((DAT_1808fee70 != local_1e8[0] || (DAT_1808fee78 != piVar2)) || (local_178 < DAT_1808fee60)
        ))) {
LAB_18033a01e:
      uVar29 = uStack_380 >> 8;
      uStack_380 = uVar29 << 8;
      _DAT_1808fee00 =
           (ulonglong)CONCAT13(bStack_389,CONCAT12(bStack_38a,CONCAT11(bStack_38b,bStack_38c))) <<
           0x20;
      _DAT_1808fedf8 = 0xffffffffffffffff;
      DAT_1808fee08 = -1;
      _DAT_1808fee10 = uStack_380;
      DAT_1808fee18 = -1;
      _DAT_1808fee20 = 0;
      local_398 = 0xff;
      bStack_397 = 0xff;
      bStack_396 = 0xff;
      bStack_395 = 0xff;
      bStack_394 = 0xff;
      bStack_393 = 0xff;
      bStack_392 = 0xff;
      bStack_391 = 0xff;
      bStack_390 = 0;
      bStack_38f = 0;
      bStack_38e = 0;
      bStack_38d = 0;
      bStack_388 = 0xff;
      bStack_387 = 0xff;
      bStack_386 = 0xff;
      bStack_385 = 0xff;
      bStack_384 = 0xff;
      bStack_383 = 0xff;
      bStack_382 = 0xff;
      bStack_381 = 0xff;
      uStack_380 = uVar29 << 8;
      local_378 = 0xffffffffffffffff;
      uStack_370 = 0;
      _DAT_1808fee30 =
           (ulonglong)CONCAT13(bStack_389,CONCAT12(bStack_38a,CONCAT11(bStack_38b,bStack_38c))) <<
           0x20;
      _DAT_1808fee28 = 0xffffffffffffffff;
      lRam00000001808fee38 = -1;
      uRam00000001808fee40 = uStack_380;
      _DAT_1808fee48 = -1;
      _DAT_1808fee50 = 0;
    }
    local_368 = (undefined4 *)0xffffffffffffffff;
    puStack_360 = (undefined8 *)0x0;
    plStack_358 = (longlong *)0x0;
    puStack_350 = (undefined1 *)0x0;
    local_348 = (undefined *)0x0;
    plStack_340 = (longlong *)((ulonglong)plStack_340 & 0xffffffffffff0000);
    pppiStack_338 = (int ***)0xfffffffffffffc00;
    uStack_330 = 0;
    uStack_32c = 0;
    local_328 = local_328 & 0xffff000000000000;
    _DAT_1808fee88 = plStack_340;
    _DAT_1808fee90 = -0x400;
    _DAT_1808fee98 = 0;
    DAT_1808feea0 = local_328;
    DAT_1808fee60 = local_178;
    _DAT_1808fee80 = (longlong)local_170;
    DAT_1808fee68 = puVar3;
    DAT_1808fee70 = local_1e8[0];
    DAT_1808fee78 = piVar2;
    if ((DAT_180cd4050 & 1) == 0) {
      DAT_180cd4050 = DAT_180cd4050 | 1;
      local_198[0] = 0x181849b;
      local_190 = 0;
      local_1d8._8_8_ = 1;
      local_1d8._0_8_ = local_198;
      auVar37 = ZEXT1264(ZEXT812(0)) << 0x20;
      auVar48 = ZEXT1664(auVar39);
      FUN_18044c9c0(DAT_180c64058,local_1d8);
      auVar44 = auVar37._0_16_;
      auVar39 = auVar48._0_16_;
      DAT_180cd4058 = local_190;
    }
    lVar27 = DAT_180cd4058;
    if ((DAT_180cd4060 & 1) == 0) {
      DAT_180cd4060 = DAT_180cd4060 | 1;
      local_1d8._0_4_ = 0xc37facff;
      local_1d8._8_8_ = 0;
      local_208 = local_1d8;
      uStack_200 = 1;
      uStack_1ff = 0;
      auVar37 = ZEXT1664(auVar44);
      auVar48 = ZEXT1664(auVar39);
      FUN_18044c9c0(DAT_180c64058,&local_208);
      auVar44 = auVar37._0_16_;
      auVar39 = auVar48._0_16_;
      DAT_180cd4068 = local_1d8._8_8_;
    }
    lVar16 = DAT_180cd4068;
    iVar13 = DAT_180c6f5d0;
    if (DAT_180c6f5d0 == 0) {
      auVar37 = ZEXT1664(auVar44);
      auVar48 = ZEXT1664(auVar39);
      UVar14 = GetTickCount64();
      auVar44 = auVar37._0_16_;
      auVar39 = auVar48._0_16_;
      if (DAT_180c6f5c8 <= UVar14) {
        local_208._0_4_ = -1.3225432e-38;
        local_208._4_4_ = 1.4013e-45;
        iVar13 = FUN_1805f68d0(&DAT_180900320);
        if (iVar13 != 0) goto LAB_18033b926;
        if (DAT_18090036c == 0x7fffffff) {
          DAT_18090036c = 0x7ffffffe;
          goto LAB_18033b93b;
        }
        if ((DAT_180c6f5d0 == 0) && (DAT_180c6f5c8 <= UVar14)) {
          DAT_180c6f5d0 = FUN_1804174b0("CPlayer_MovementServices",0x98ccef82);
          if (DAT_180c6f5d0 == 0) {
            DAT_180c6f5c8 = UVar14 + 1000;
          }
          else {
            DAT_180c6f5c8 = 0xffffffffffffffff;
          }
        }
        iVar13 = DAT_180c6f5d0;
        FUN_1805f68fc(&DAT_180900320);
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
      }
    }
    if ((local_1e8[0] == (int *)0x0) || (iVar13 == 0)) {
      bStack_390 = 0;
      Var1 = (unkuint9)
             CONCAT17(bStack_391,
                      CONCAT16(bStack_392,
                               CONCAT15(bStack_393,
                                        CONCAT14(bStack_394,
                                                 CONCAT13(bStack_395,
                                                          CONCAT12(bStack_396,
                                                                   CONCAT11(bStack_397,local_398))))
                                       )));
    }
    else {
      lVar28 = (longlong)local_1e8[0] + (longlong)iVar13 + 8;
      auVar37 = ZEXT1664(auVar44);
      auVar48 = ZEXT1664(auVar39);
      lVar15 = FUN_18017ea70();
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
      if (lVar28 == 0) {
LAB_18033a309:
        uStack_200 = 0;
      }
      else {
        local_3a0 = (undefined *)0x0;
        cVar9 = FUN_1804514f0(&local_3a0,lVar28,8);
        if (cVar9 == '\0') goto LAB_18033a309;
        uStack_200 = 1;
        local_208 = local_3a0;
      }
      lVar15 = FUN_18017ea70();
      auVar44 = auVar37._0_16_;
      auVar39 = auVar48._0_16_;
      if (*(int *)(lVar15 + 4) != 0) {
        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
      }
      Var1 = CONCAT18(uStack_200,local_208);
    }
    if ((((lVar27 == 0) || (lVar16 == 0)) || ((char)(Var1 >> 0x40) == '\0')) ||
       (piVar2 == (int *)0x0)) {
      puVar17 = local_208;
      goto LAB_18033aa3b;
    }
    cVar9 = *(char *)(lVar27 + 0x58);
    _DAT_1808fee88 = (longlong *)CONCAT71(_DAT_1808fee89,cVar9);
    DAT_1808feea0 =
         CONCAT35(DAT_1808feea0._5_3_,CONCAT14((byte)Var1 >> 1,*(undefined4 *)(lVar16 + 0x58))) &
         0xffffff01ffffffff;
    if (cVar9 == '\0') {
      iVar13 = DAT_180c6f580;
      if (DAT_180c6f580 == 0) {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        UVar14 = GetTickCount64();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (DAT_180c6f578 <= UVar14) {
          local_208._0_4_ = -1.3225208e-38;
          local_208._4_4_ = 1.4013e-45;
          iVar13 = FUN_1805f68d0(&DAT_180900280);
          if (iVar13 != 0) goto LAB_18033b926;
          if (DAT_1809002cc == 0x7fffffff) {
            DAT_1809002cc = 0x7ffffffe;
            goto LAB_18033b93b;
          }
          if ((DAT_180c6f580 == 0) && (DAT_180c6f578 <= UVar14)) {
            DAT_180c6f580 = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
            if (DAT_180c6f580 == 0) {
              DAT_180c6f578 = UVar14 + 1000;
            }
            else {
              DAT_180c6f578 = 0xffffffffffffffff;
            }
          }
          iVar13 = DAT_180c6f580;
          FUN_1805f68fc(&DAT_180900280);
          auVar44 = auVar37._0_16_;
          auVar39 = auVar48._0_16_;
          if (iVar13 != 0) goto LAB_18033a79f;
        }
        lVar27 = 0;
      }
      else {
LAB_18033a79f:
        lVar27 = (longlong)iVar13 + (longlong)local_1e8[0];
      }
      uVar29 = (ulonglong)DAT_180c6f598;
      if (DAT_180c6f598 == 0) {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        UVar14 = GetTickCount64();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (UVar14 < DAT_180c6f590) {
          uVar29 = 0;
        }
        else {
          local_208._0_4_ = -1.3225096e-38;
          local_208._4_4_ = 1.4013e-45;
          iVar13 = FUN_1805f68d0(&DAT_180900230);
          if (iVar13 != 0) goto LAB_18033b926;
          if (DAT_18090027c == 0x7fffffff) {
            DAT_18090027c = 0x7ffffffe;
            goto LAB_18033b93b;
          }
          uVar29 = (ulonglong)DAT_180c6f598;
          if ((DAT_180c6f598 == 0) && (DAT_180c6f590 <= UVar14)) {
            DAT_180c6f598 = FUN_1804174b0("CCSPlayerModernJump",0xbf93929f);
            uVar29 = (ulonglong)DAT_180c6f598;
            if (DAT_180c6f598 == 0) {
              DAT_180c6f590 = UVar14 + 1000;
            }
            else {
              DAT_180c6f590 = 0xffffffffffffffff;
            }
          }
          FUN_1805f68fc(&DAT_180900230);
          auVar44 = auVar37._0_16_;
          auVar39 = auVar48._0_16_;
        }
      }
      if ((lVar27 == 0) || ((int)uVar29 == 0)) {
        local_208 = (undefined *)((ulonglong)local_208 & 0xffffff00ffffffff);
      }
      else {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if (uVar29 + lVar27 == 0) {
LAB_18033a8ad:
          local_3a0._0_5_ = (uint5)(uint)local_3a0;
        }
        else {
          local_3a0 = (undefined *)((ulonglong)local_3a0 & 0xffffffff00000000);
          cVar9 = FUN_1804514f0(&local_3a0,uVar29 + lVar27,4);
          if (cVar9 == '\0') goto LAB_18033a8ad;
          local_3a0._0_5_ = CONCAT14(1,(uint)local_3a0);
        }
        lVar16 = FUN_18017ea70();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
        local_208 = local_3a0;
      }
      fVar50 = (float)local_208;
      local_208._4_4_ = (float)((ulonglong)local_208 >> 0x20);
      uVar29 = (ulonglong)DAT_180c6f558;
      if (DAT_180c6f558 == 0) {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        UVar14 = GetTickCount64();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (UVar14 < DAT_180c6f550) {
          uVar29 = 0;
        }
        else {
          local_3a0 = &DAT_180900140;
          iVar13 = FUN_1805f68d0(&DAT_180900140);
          if (iVar13 != 0) goto LAB_18033b926;
          if (DAT_18090018c == 0x7fffffff) {
            DAT_18090018c = 0x7ffffffe;
            goto LAB_18033b93b;
          }
          uVar29 = (ulonglong)DAT_180c6f558;
          if ((DAT_180c6f558 == 0) && (DAT_180c6f550 <= UVar14)) {
            DAT_180c6f558 = FUN_1804174b0("CCSPlayerModernJump",0xefa846d4);
            uVar29 = (ulonglong)DAT_180c6f558;
            if (DAT_180c6f558 == 0) {
              DAT_180c6f550 = UVar14 + 1000;
            }
            else {
              DAT_180c6f550 = 0xffffffffffffffff;
            }
          }
          FUN_1805f68fc(&DAT_180900140);
          auVar44 = auVar37._0_16_;
          auVar39 = auVar48._0_16_;
        }
      }
      if ((lVar27 == 0) || ((int)uVar29 == 0)) {
        local_3a0._0_5_ = (uint5)(uint)local_3a0;
      }
      else {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if (uVar29 + lVar27 == 0) {
LAB_18033a9df:
          local_3a0._0_5_ = (uint5)(uint)local_3a0;
        }
        else {
          local_3a0 = (undefined *)CONCAT44(local_3a0._4_4_,auVar37._0_4_);
          cVar9 = FUN_1804514f0(&local_3a0,uVar29 + lVar27,4);
          if (cVar9 == '\0') goto LAB_18033a9df;
          local_3a0._0_5_ = CONCAT14(1,(uint)local_3a0);
        }
        lVar27 = FUN_18017ea70();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (*(int *)(lVar27 + 4) != 0) {
          *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + -1;
        }
      }
      puVar3 = (undefined *)CONCAT44(local_208._4_4_,(float)local_208);
      puVar17 = (undefined *)CONCAT44(local_208._4_4_,(float)local_208);
      if ((local_208._4_1_ == '\0') ||
         (puVar17 = puVar3, (char)((ulonglong)local_3a0 >> 0x20) == '\0')) goto LAB_18033aa3b;
      _DAT_1808fee90 = (longlong)(int)fVar50;
      _DAT_1808fee98 = CONCAT44(_DAT_1808fee9c,(uint)local_3a0);
      DAT_1808feea0._0_6_ = CONCAT15(1,(undefined5)DAT_1808feea0);
    }
    else {
      iVar13 = DAT_180c6f5a8;
      if (DAT_180c6f5a8 == 0) {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        UVar14 = GetTickCount64();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (DAT_180c6f5a0 <= UVar14) {
          local_208._0_4_ = -1.322532e-38;
          local_208._4_4_ = 1.4013e-45;
          iVar13 = FUN_1805f68d0(&DAT_1809002d0);
          if (iVar13 != 0) goto LAB_18033b926;
          if (DAT_18090031c == 0x7fffffff) {
            DAT_18090031c = 0x7ffffffe;
            goto LAB_18033b93b;
          }
          if ((DAT_180c6f5a8 == 0) && (DAT_180c6f5a0 <= UVar14)) {
            DAT_180c6f5a8 = FUN_1804174b0("CCSPlayer_MovementServices",0x316c1a66);
            if (DAT_180c6f5a8 == 0) {
              DAT_180c6f5a0 = UVar14 + 1000;
            }
            else {
              DAT_180c6f5a0 = 0xffffffffffffffff;
            }
          }
          iVar13 = DAT_180c6f5a8;
          FUN_1805f68fc(&DAT_1809002d0);
          auVar44 = auVar37._0_16_;
          auVar39 = auVar48._0_16_;
          if (iVar13 != 0) goto LAB_18033a444;
        }
        lVar27 = 0;
      }
      else {
LAB_18033a444:
        lVar27 = (longlong)iVar13 + (longlong)local_1e8[0];
      }
      uVar29 = (ulonglong)DAT_180c6f5b8;
      if (DAT_180c6f5b8 == 0) {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        UVar14 = GetTickCount64();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (UVar14 < DAT_180c6f5b0) {
          uVar29 = 0;
        }
        else {
          local_208._0_4_ = -1.3225545e-38;
          local_208._4_4_ = 1.4013e-45;
          iVar13 = FUN_1805f68d0(&DAT_180900370);
          if (iVar13 != 0) goto LAB_18033b926;
          if (DAT_1809003bc == 0x7fffffff) {
            DAT_1809003bc = 0x7ffffffe;
            goto LAB_18033b93b;
          }
          uVar29 = (ulonglong)DAT_180c6f5b8;
          if ((DAT_180c6f5b8 == 0) && (DAT_180c6f5b0 <= UVar14)) {
            DAT_180c6f5b8 = FUN_1804174b0("CCSPlayerLegacyJump",0x30fc474);
            uVar29 = (ulonglong)DAT_180c6f5b8;
            if (DAT_180c6f5b8 == 0) {
              DAT_180c6f5b0 = UVar14 + 1000;
            }
            else {
              DAT_180c6f5b0 = 0xffffffffffffffff;
            }
          }
          FUN_1805f68fc(&DAT_180900370);
          auVar44 = auVar37._0_16_;
          auVar39 = auVar48._0_16_;
        }
      }
      if ((lVar27 == 0) || ((int)uVar29 == 0)) {
        local_3a8 = local_3a8 & 0xff;
      }
      else {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if (uVar29 + lVar27 == 0) {
LAB_18033a553:
          local_3a8 = local_3a8 & 0xff;
        }
        else {
          local_3a8 = local_3a8 & 0xff00;
          cVar9 = FUN_1804514f0(&local_3a8,uVar29 + lVar27,1);
          if (cVar9 == '\0') goto LAB_18033a553;
          local_3a8 = CONCAT11(1,(char)local_3a8);
        }
        lVar16 = FUN_18017ea70();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (*(int *)(lVar16 + 4) != 0) {
          *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
        }
      }
      uVar7 = local_3a8;
      uVar29 = (ulonglong)DAT_180c6f5ac;
      if (DAT_180c6f5ac == 0) {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        UVar14 = GetTickCount64();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (UVar14 < DAT_180c6f588) {
          uVar29 = 0;
        }
        else {
          local_208._0_4_ = -1.3224984e-38;
          local_208._4_4_ = 1.4013e-45;
          iVar13 = FUN_1805f68d0(&DAT_1809001e0);
          if (iVar13 != 0) goto LAB_18033b926;
          if (DAT_18090022c == 0x7fffffff) {
            DAT_18090022c = 0x7ffffffe;
            goto LAB_18033b93b;
          }
          uVar29 = (ulonglong)DAT_180c6f5ac;
          if ((DAT_180c6f5ac == 0) && (DAT_180c6f588 <= UVar14)) {
            DAT_180c6f5ac = FUN_1804174b0("CCSPlayerLegacyJump",0x21a2a38a);
            uVar29 = (ulonglong)DAT_180c6f5ac;
            if (DAT_180c6f5ac == 0) {
              DAT_180c6f588 = UVar14 + 1000;
            }
            else {
              DAT_180c6f588 = 0xffffffffffffffff;
            }
          }
          FUN_1805f68fc(&DAT_1809001e0);
          auVar44 = auVar37._0_16_;
          auVar39 = auVar48._0_16_;
        }
      }
      if ((lVar27 == 0) || ((int)uVar29 == 0)) {
        puVar17 = (undefined *)((ulonglong)local_208 & 0xffffff00ffffffff);
      }
      else {
        auVar37 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar39);
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        if (uVar29 + lVar27 == 0) {
LAB_18033a67e:
          local_3a0._0_5_ = (uint5)(uint)local_3a0;
        }
        else {
          local_3a0 = (undefined *)CONCAT44(local_3a0._4_4_,auVar37._0_4_);
          cVar9 = FUN_1804514f0(&local_3a0,uVar29 + lVar27,4);
          if (cVar9 == '\0') goto LAB_18033a67e;
          local_3a0._0_5_ = CONCAT14(1,(uint)local_3a0);
        }
        lVar27 = FUN_18017ea70();
        auVar44 = auVar37._0_16_;
        auVar39 = auVar48._0_16_;
        if (*(int *)(lVar27 + 4) != 0) {
          *(int *)(lVar27 + 4) = *(int *)(lVar27 + 4) + -1;
        }
        puVar17 = local_3a0;
      }
      local_208._0_4_ = SUB84(puVar17,0);
      if ((local_3a8._1_1_ == '\0') || ((char)((ulonglong)puVar17 >> 0x20) == '\0'))
      goto LAB_18033aa3b;
      _DAT_1808fee88 = CONCAT11((char)uVar7,DAT_1808fee88);
      _DAT_1808fee98 = CONCAT44((float)local_208,_DAT_1808fee98);
      DAT_1808feea0._0_6_ = CONCAT15(1,(undefined5)DAT_1808feea0);
      puVar3 = puVar17;
    }
LAB_18033aa44:
    auVar37 = ZEXT1664(auVar44);
    auVar48 = ZEXT1664(auVar39);
    uVar34 = (undefined4)DAT_1808feea0;
    local_208 = puVar3;
    puVar18 = (undefined8 *)FUN_180339740(&local_3a0);
    auVar44 = auVar37._0_16_;
    auVar39 = auVar48._0_16_;
    local_150[0] = uVar34;
  }
  uVar43 = *puVar18;
  local_208._0_4_ = (float)uVar43;
  local_208._4_4_ = (float)((ulonglong)uVar43 >> 0x20);
  bVar10 = (byte)((ulonglong)uVar43 >> 0x20);
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar10),SUB6416(ZEXT464(0),0));
  auVar38 = SUB6416(ZEXT464(0x3f800000),0);
  auVar45 = vblendvps_avx(ZEXT416((uint)(float)local_208),auVar38,auVar45);
  local_16c = auVar45._0_4_;
  auVar45 = SUB6416(ZEXT464(0xbf800000),0);
  local_180 = CONCAT44(local_180._4_4_,0xbf800000);
  local_188[0] = -1.0;
  local_164 = 0xbf800000;
  local_160 = auVar44._0_4_;
  local_148 = local_1e8;
  local_140 = &local_178;
  local_138 = &local_170;
  local_130 = &DAT_1808fedf8;
  local_128 = &local_16c;
  local_120 = local_150;
  local_118 = &local_168;
  local_110 = &local_1a8;
  local_108 = &local_180;
  local_100 = local_188;
  local_f8 = &local_164;
  local_f0 = &local_160;
  local_e8 = &DAT_1808fee60;
  local_15c = local_160;
  local_158 = local_160;
  if (bVar10 == 0) {
LAB_18033b88d:
    FUN_18033b950(&local_148,"native-clock-unavailable");
  }
  uVar31 = *(uint *)(local_1a8 + 0x10);
  lVar27 = (longlong)(int)uVar31;
  if (0x20 < uVar31) goto LAB_18033b88d;
  if (0 < (int)uVar31) {
    lVar16 = 0;
    plVar30 = *(longlong **)(local_1a8 + 0x18);
    do {
      plVar30 = plVar30 + 1;
      lVar15 = 0;
      if (*plVar30 != 0) {
        lVar15 = *plVar30 + 0x10;
      }
      if (lVar15 == 0) goto LAB_18033b88d;
      lVar16 = lVar16 + 1;
    } while (lVar16 < lVar27);
  }
  iVar13 = 0;
  if (0 < lVar27) {
    lVar16 = 0;
    lVar15 = 0;
    do {
      lVar28 = *(longlong *)(*(longlong *)(local_1a8 + 0x18) + 8 + lVar16 * 8);
      puVar23 = (uint *)0x0;
      if (lVar28 != 0) {
        puVar23 = (uint *)(lVar28 + 0x10);
      }
      local_398 = (byte)*puVar23;
      bStack_397 = *(byte *)((longlong)puVar23 + 1);
      bStack_396 = *(byte *)((longlong)puVar23 + 2);
      bStack_395 = *(byte *)((longlong)puVar23 + 3);
      uVar31 = *puVar23;
      bStack_394 = (byte)puVar23[1];
      bStack_393 = *(byte *)((longlong)puVar23 + 5);
      bStack_392 = *(byte *)((longlong)puVar23 + 6);
      bStack_391 = *(byte *)((longlong)puVar23 + 7);
      bStack_390 = (byte)*(ulonglong *)(puVar23 + 2);
      bStack_38f = *(byte *)((longlong)puVar23 + 9);
      bStack_38e = *(byte *)((longlong)puVar23 + 10);
      bStack_38d = *(byte *)((longlong)puVar23 + 0xb);
      bStack_38c = (byte)puVar23[3];
      bStack_38b = *(byte *)((longlong)puVar23 + 0xd);
      bStack_38a = *(byte *)((longlong)puVar23 + 0xe);
      bStack_389 = *(byte *)((longlong)puVar23 + 0xf);
      bStack_388 = (byte)puVar23[4];
      bStack_387 = *(byte *)((longlong)puVar23 + 0x11);
      bStack_386 = *(byte *)((longlong)puVar23 + 0x12);
      bStack_385 = *(byte *)((longlong)puVar23 + 0x13);
      bStack_384 = (byte)puVar23[5];
      bStack_383 = *(byte *)((longlong)puVar23 + 0x15);
      bStack_382 = *(byte *)((longlong)puVar23 + 0x16);
      bStack_381 = *(byte *)((longlong)puVar23 + 0x17);
      puVar20 = (ulonglong *)(puVar23 + 6);
      uStack_380._0_1_ = (byte)*puVar20;
      uStack_380._1_1_ = *(byte *)((longlong)puVar23 + 0x19);
      uStack_380._2_1_ = *(byte *)((longlong)puVar23 + 0x1a);
      uStack_380._3_1_ = *(byte *)((longlong)puVar23 + 0x1b);
      uStack_380._4_1_ = (byte)puVar23[7];
      uStack_380._5_1_ = *(byte *)((longlong)puVar23 + 0x1d);
      uStack_380._6_1_ = *(byte *)((longlong)puVar23 + 0x1e);
      uVar6 = *puVar20;
      bVar10 = *(byte *)((longlong)puVar23 + 0x1f);
      uVar29 = *puVar20;
      uVar43 = *(undefined8 *)(puVar23 + 8);
      if ((bStack_390 & 2) == 0) {
LAB_18033ac7c:
        lVar28 = *(longlong *)(*(longlong *)(local_1a8 + 0x18) + 8 + lVar15 * 8);
        iVar13 = iVar13 + 1;
        lVar15 = lVar15 + 1;
        pbVar24 = (byte *)0x0;
        if (lVar28 != 0) {
          pbVar24 = (byte *)(lVar28 + 0x10);
        }
        *pbVar24 = local_398;
        pbVar24[1] = bStack_397;
        pbVar24[2] = bStack_396;
        pbVar24[3] = bStack_395;
        pbVar24[4] = bStack_394;
        pbVar24[5] = bStack_393;
        pbVar24[6] = bStack_392;
        pbVar24[7] = bStack_391;
        pbVar24[8] = bStack_390;
        pbVar24[9] = bStack_38f;
        pbVar24[10] = bStack_38e;
        pbVar24[0xb] = bStack_38d;
        pbVar24[0xc] = bStack_38c;
        pbVar24[0xd] = bStack_38b;
        pbVar24[0xe] = bStack_38a;
        pbVar24[0xf] = bStack_389;
        pbVar24[0x10] = bStack_388;
        pbVar24[0x11] = bStack_387;
        pbVar24[0x12] = bStack_386;
        pbVar24[0x13] = bStack_385;
        pbVar24[0x14] = bStack_384;
        pbVar24[0x15] = bStack_383;
        pbVar24[0x16] = bStack_382;
        pbVar24[0x17] = bStack_381;
        pbVar24[0x18] = (byte)uStack_380;
        pbVar24[0x19] = uStack_380._1_1_;
        pbVar24[0x1a] = uStack_380._2_1_;
        pbVar24[0x1b] = uStack_380._3_1_;
        pbVar24[0x1c] = uStack_380._4_1_;
        pbVar24[0x1d] = uStack_380._5_1_;
        pbVar24[0x1e] = uStack_380._6_1_;
        pbVar24[0x1f] = bVar10;
        *(undefined8 *)(pbVar24 + 0x20) = uVar43;
      }
      else {
        uVar19 = *(ulonglong *)(puVar23 + 2) & 0xfffffffffffffffd;
        local_398 = (byte)uVar31 | 1;
        bStack_397 = (byte)(uVar31 >> 8);
        bStack_396 = (byte)(uVar31 >> 0x10);
        bStack_395 = (byte)(uVar31 >> 0x18);
        bStack_390 = (byte)uVar19;
        bStack_38f = (byte)(uVar19 >> 8);
        bStack_38e = (byte)(uVar19 >> 0x10);
        bStack_38d = (byte)(uVar19 >> 0x18);
        bStack_38c = (byte)(uVar19 >> 0x20);
        bStack_38b = (byte)(uVar19 >> 0x28);
        bStack_38a = (byte)(uVar19 >> 0x30);
        bStack_389 = (byte)(uVar19 >> 0x38);
        if ((uVar19 != 0) || ((uVar31 & 0xfffffff8) != 0)) {
          uStack_380._0_1_ = (byte)uVar6;
          uStack_380._1_1_ = (byte)(uVar6 >> 8);
          uStack_380._2_1_ = (byte)(uVar6 >> 0x10);
          uStack_380._3_1_ = (byte)(uVar6 >> 0x18);
          uStack_380._4_1_ = (byte)(uVar6 >> 0x20);
          uStack_380._5_1_ = (byte)(uVar6 >> 0x28);
          uStack_380._6_1_ = (byte)(uVar6 >> 0x30);
          goto LAB_18033ac7c;
        }
      }
      lVar16 = lVar16 + 1;
      uStack_380 = uVar29;
    } while (lVar16 < lVar27);
  }
  *(int *)(local_1a8 + 0x10) = iVar13;
  *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffffffd;
  *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) & 0xfffffffffffffffd;
  *(ulonglong *)(param_2 + 0x70) = *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffd;
  local_368 = &local_16c;
  puStack_360 = &DAT_1808fee60;
  plStack_358 = &local_1a0;
  puStack_350 = &DAT_1808fedf0;
  local_348 = &DAT_1808fedf8;
  plStack_340 = &local_178;
  pppiStack_338 = &local_148;
  bVar10 = DAT_180b8e114 & 1;
  if ((DAT_180b8e622 == '\0') && (DAT_180b8f808 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((((local_168 < 1) || (local_170 < 1)) || (local_170 < local_168)) ||
     (8 < local_170 - local_168)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (-1 < DAT_1808fee18) {
    if ((local_178 == DAT_1808fee18 + 1) && ((local_168 < DAT_1808fee24 || (DAT_1808fee24 < 1)))) {
      pcVar25 = "air-miss-no-landing";
      if ((DAT_180b8e114 & 1) != 0) {
        pcVar25 = "air-miss";
      }
      auVar37 = ZEXT1664(auVar44);
      auVar48 = ZEXT1664(auVar38);
      auVar49 = ZEXT1664(auVar45);
      auVar51 = ZEXT1664(auVar39);
      FUN_18033b950(&local_148,pcVar25);
      auVar44 = auVar37._0_16_;
      auVar39 = auVar51._0_16_;
      auVar45 = auVar49._0_16_;
      auVar38 = auVar48._0_16_;
    }
    if (DAT_1808fee18 < local_178) {
      DAT_1808fee18 = -1;
    }
  }
  if (bVar10 != 0) {
    if (bVar4) {
      *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffffffd;
    }
    _DAT_1808fee20 = _DAT_1808fee20 & 0xffffffff00000000;
    auVar37 = ZEXT1664(auVar44);
    cVar9 = FUN_18033c2b0(&local_368);
    if (cVar9 == '\0') {
      FUN_18033b950(&local_148,"ground-blocked",auVar37._0_8_);
    }
  }
  *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) & 0xfffffffffffffffd;
  if (bVar4) {
  }
  if (local_1e8[0] == (int *)0x0) {
  }
  if (DAT_180cc8218 == '\0') {
  }
  if ((DAT_180cd4070 & 1) == 0) {
    DAT_180cd4070 = DAT_180cd4070 | 1;
    local_208._0_4_ = 1.7354858e-12;
    uStack_200 = 0;
    uStack_1ff = 0;
    local_398 = (byte)&local_208;
    bStack_397 = (byte)((ulonglong)&local_208 >> 8);
    bStack_396 = (byte)((ulonglong)&local_208 >> 0x10);
    bStack_395 = (byte)((ulonglong)&local_208 >> 0x18);
    bStack_394 = (byte)((ulonglong)&local_208 >> 0x20);
    bStack_393 = (byte)((ulonglong)&local_208 >> 0x28);
    bStack_392 = (byte)((ulonglong)&local_208 >> 0x30);
    bStack_391 = (byte)((ulonglong)&local_208 >> 0x38);
    bStack_390 = 1;
    bStack_38f = 0;
    bStack_38e = 0;
    bStack_38d = 0;
    bStack_38c = 0;
    bStack_38b = 0;
    bStack_38a = 0;
    bStack_389 = 0;
    auVar37 = ZEXT1664(auVar44);
    auVar48 = ZEXT1664(auVar38);
    auVar49 = ZEXT1664(auVar45);
    auVar51 = ZEXT1664(auVar39);
    FUN_18044c9c0(DAT_180c64058,&local_398);
    auVar44 = auVar37._0_16_;
    auVar39 = auVar51._0_16_;
    auVar45 = auVar49._0_16_;
    auVar38 = auVar48._0_16_;
    DAT_180cd4078 = CONCAT71(uStack_1ff,uStack_200);
  }
  puVar3 = local_1f8;
  fVar50 = *(float *)(DAT_180cd4078 + 0x58);
  fVar42 = auVar44._0_4_;
  if (((DAT_180b8e111 == '\0') || ((DAT_180b8e18c & 1) == 0)) || (DAT_180b8e188 < fVar50)) {
    bVar8 = false;
    bVar4 = false;
    if ((((DAT_180b8e111 == '\0') || (bVar5)) || (fVar42 < DAT_180b8e120)) ||
       (DAT_180b8e17c <= fVar42)) goto LAB_18033aed7;
    bVar8 = true;
  }
  else {
    bVar8 = true;
LAB_18033aed7:
    bVar4 = bVar8;
    bVar8 = false;
  }
  if (((fVar42 < DAT_180b8e120) || (bVar5)) && (!bVar4)) {
LAB_18033b8aa:
    _DAT_1808fee10 = _DAT_1808fee10 & 0xffffffffffffff00;
  }
  if ((DAT_1808fee10 != '\0') && (local_178 <= DAT_1808fee08)) {
  }
  if (bVar8) {
    _DAT_1808fee20 = CONCAT44(DAT_1808fee24,4);
    auVar37 = ZEXT1664(auVar44);
    cVar9 = FUN_18033c2b0(&local_368);
    if (cVar9 != '\0') {
      DAT_1808fee18 = local_178;
    }
    uVar43 = auVar37._0_8_;
    goto LAB_18033af37;
  }
  auVar37 = ZEXT1664(auVar44);
  auVar48 = ZEXT1664(auVar38);
  auVar49 = ZEXT1664(auVar45);
  auVar51 = ZEXT1664(auVar39);
  lVar27 = FUN_1803032c0(local_1f8,local_1e8[0]);
  if (*(char *)(lVar27 + 0x48) == '\0') {
  }
  if ((DAT_180cd4030 & 1) == 0) {
    DAT_180cd4030 = DAT_180cd4030 | 1;
    local_1d8._0_4_ = 0x58e37709;
    local_1d8._8_8_ = 0;
    local_398 = (byte)local_1d8;
    bStack_397 = (byte)((ulonglong)local_1d8 >> 8);
    bStack_396 = (byte)((ulonglong)local_1d8 >> 0x10);
    bStack_395 = (byte)((ulonglong)local_1d8 >> 0x18);
    bStack_394 = (byte)((ulonglong)local_1d8 >> 0x20);
    bStack_393 = (byte)((ulonglong)local_1d8 >> 0x28);
    bStack_392 = (byte)((ulonglong)local_1d8 >> 0x30);
    bStack_391 = (byte)((ulonglong)local_1d8 >> 0x38);
    bStack_390 = 1;
    bStack_38f = 0;
    bStack_38e = 0;
    bStack_38d = 0;
    bStack_38c = 0;
    bStack_38b = 0;
    bStack_38a = 0;
    bStack_389 = 0;
    FUN_18044c9c0(DAT_180c64058,&local_398);
    DAT_180cd4038 = local_1d8._8_8_;
  }
  auVar40 = ZEXT464(*(uint *)(DAT_180cd4038 + 0x58));
  iVar13 = DAT_180c6f600;
  if (DAT_180c6f600 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c6f5f8) {
      iVar13 = 0;
    }
    else {
      local_1f8 = &DAT_180900500;
      iVar13 = FUN_1805f68d0(&DAT_180900500);
      if (iVar13 != 0) {
LAB_18033b926:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_18090054c == 0x7fffffff) {
        DAT_18090054c = 0x7ffffffe;
LAB_18033b93b:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6f600 == 0) && (DAT_180c6f5f8 <= UVar14)) {
        DAT_180c6f600 = FUN_1804174b0("C_BaseEntity",0x328a3947);
        if (DAT_180c6f600 == 0) {
          uVar26 = UVar14 + 1000;
        }
        DAT_180c6f5f8 = uVar26;
      }
      iVar13 = DAT_180c6f600;
      FUN_1805f68fc(&DAT_180900500);
    }
  }
  fVar42 = auVar40._0_4_ * *(float *)(puVar3 + iVar13);
  auVar36 = ZEXT464((uint)fVar42);
  sVar12 = thunk_FUN_180624430(fVar42);
  auVar44 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar12),SUB6416(ZEXT464(0),0));
  auVar44 = vblendvps_avx(auVar36._0_16_,auVar40._0_16_,auVar44);
  auVar36 = ZEXT1664(auVar44);
  cVar9 = '\0';
  cVar32 = '\0';
  uVar31 = 0;
  auVar40 = ZEXT464(0x3f7c0000);
  if (bVar4) {
    uVar31 = 1;
    cVar9 = FUN_180303860(1);
    auVar44 = auVar37._0_16_;
    if (cVar9 == '\0') {
LAB_18033b253:
      auVar45 = vunpcklps_avx(auVar44,auVar48._0_16_);
      auVar39._4_4_ = DAT_180b8e168._4_4_;
      auVar39._0_4_ = (float)DAT_180b8e168;
      auVar39._8_8_ = 0;
      auVar39 = vinsertps_avx(auVar39,ZEXT416((uint)(DAT_180b8e170 - 2.0)),0x20);
      auVar44 = vinsertps_avx(auVar39,auVar44,0x30);
    }
    else {
      local_1f8 = (undefined *)CONCAT44(DAT_180b8e168._4_4_,(float)DAT_180b8e168);
      local_1f0 = CONCAT44(local_1f0._4_4_,DAT_180b8e170 - 4.0);
      uVar43 = *(undefined8 *)(lVar27 + 0x18);
      local_398 = (byte)uVar43;
      bStack_397 = (byte)((ulonglong)uVar43 >> 8);
      bStack_396 = (byte)((ulonglong)uVar43 >> 0x10);
      bStack_395 = (byte)((ulonglong)uVar43 >> 0x18);
      bStack_394 = (byte)((ulonglong)uVar43 >> 0x20);
      bStack_393 = (byte)((ulonglong)uVar43 >> 0x28);
      bStack_392 = (byte)((ulonglong)uVar43 >> 0x30);
      bStack_391 = (byte)((ulonglong)uVar43 >> 0x38);
      uVar34 = *(undefined4 *)(lVar27 + 0x20);
      bStack_390 = (byte)uVar34;
      bStack_38f = (byte)((uint)uVar34 >> 8);
      bStack_38e = (byte)((uint)uVar34 >> 0x10);
      bStack_38d = (byte)((uint)uVar34 >> 0x18);
      uVar43 = *(undefined8 *)(lVar27 + 0x24);
      bStack_38c = (byte)uVar43;
      bStack_38b = (byte)((ulonglong)uVar43 >> 8);
      bStack_38a = (byte)((ulonglong)uVar43 >> 0x10);
      bStack_389 = (byte)((ulonglong)uVar43 >> 0x18);
      bStack_388 = (byte)((ulonglong)uVar43 >> 0x20);
      bStack_387 = (byte)((ulonglong)uVar43 >> 0x28);
      bStack_386 = (byte)((ulonglong)uVar43 >> 0x30);
      bStack_385 = (byte)((ulonglong)uVar43 >> 0x38);
      uVar34 = *(undefined4 *)(lVar27 + 0x2c);
      bStack_384 = (byte)uVar34;
      bStack_383 = (byte)((uint)uVar34 >> 8);
      bStack_382 = (byte)((uint)uVar34 >> 0x10);
      bStack_381 = (byte)((uint)uVar34 >> 0x18);
      local_3c0 = lVar27 + 0x30;
      local_3c8 = &local_398;
      FUN_180419610(uVar43,local_318,&DAT_180b8e168,&local_1f8);
      auVar44 = auVar37._0_16_;
      if (local_25d != '\0') goto LAB_18033b253;
      sVar12 = thunk_FUN_180624430(local_26c);
      auVar44 = auVar37._0_16_;
      if ((((0 < sVar12) || (local_26c < auVar37._0_4_)) || (auVar48._0_4_ <= local_26c)) ||
         (local_280 < fVar50)) goto LAB_18033b253;
      bStack_38c = local_318[0x90];
      bStack_38b = local_318[0x91];
      bStack_38a = local_318[0x92];
      bStack_389 = local_318[0x93];
      bStack_384 = SUB41(local_280,0);
      bStack_383 = (byte)((uint)local_280 >> 8);
      bStack_382 = (byte)((uint)local_280 >> 0x10);
      bStack_381 = (byte)((uint)local_280 >> 0x18);
      auVar38[5] = bStack_393;
      auVar38[4] = bStack_394;
      auVar38[6] = bStack_392;
      auVar38[7] = bStack_391;
      auVar38[8] = bStack_390;
      auVar38[9] = bStack_38f;
      auVar38[10] = bStack_38e;
      auVar38[0xb] = bStack_38d;
      auVar38[0xc] = bStack_38c;
      auVar38[0xd] = bStack_38b;
      auVar38[0xe] = bStack_38a;
      auVar38[0xf] = bStack_389;
      auVar38._0_4_ = ((float)local_1f8 - (float)DAT_180b8e168) * local_26c + (float)DAT_180b8e168;
      auVar44 = vinsertps_avx(auVar38,ZEXT416((uint)((local_1f8._4_4_ - DAT_180b8e168._4_4_) *
                                                     local_26c + DAT_180b8e168._4_4_)),0x10);
      auVar44 = vinsertps_avx(auVar44,ZEXT416((uint)(((float)local_1f0 - DAT_180b8e170) * local_26c
                                                    + DAT_180b8e170)),0x20);
      auVar45[4] = bStack_384;
      auVar45._0_4_ = local_318._148_4_;
      auVar45[5] = bStack_383;
      auVar45[6] = bStack_382;
      auVar45[7] = bStack_381;
      auVar45._8_8_ = 0;
    }
    auVar46 = ZEXT1664(auVar45);
    auVar41 = ZEXT1664(auVar44);
    local_398 = auVar44[0];
    bStack_397 = auVar44[1];
    bStack_396 = auVar44[2];
    bStack_395 = auVar44[3];
    bStack_394 = auVar44[4];
    bStack_393 = auVar44[5];
    bStack_392 = auVar44[6];
    bStack_391 = auVar44[7];
    bStack_390 = auVar44[8];
    bStack_38f = auVar44[9];
    bStack_38e = auVar44[10];
    bStack_38d = auVar44[0xb];
    bStack_38c = auVar44[0xc];
    bStack_38b = auVar44[0xd];
    bStack_38a = auVar44[0xe];
    bStack_389 = auVar44[0xf];
    bStack_388 = auVar45[0];
    bStack_387 = auVar45[1];
    bStack_386 = auVar45[2];
    bStack_385 = auVar45[3];
    bStack_384 = auVar45[4];
    bStack_383 = auVar45[5];
    bStack_382 = auVar45[6];
    bStack_381 = auVar45[7];
    local_3b8 = auVar51._0_4_;
    local_3c0 = CONCAT44(local_3c0._4_4_,auVar36._0_4_);
    local_3c8 = &bStack_38c;
    puVar20 = (ulonglong *)FUN_18033c4e0(&local_1f8,&DAT_180b8e13c,&DAT_180b8e118,&local_398);
    uVar43 = auVar36._0_8_;
    fVar42 = auVar48._0_4_;
    auVar44 = auVar40._0_16_;
    if ((char)puVar20[1] == '\0') {
      local_180 = (ulonglong)auVar40._0_4_ << 0x20;
      auVar39 = auVar44;
      auVar45 = auVar44;
    }
    else {
      local_180 = *puVar20;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = local_180;
      auVar39 = vshufps_avx(auVar33,auVar33,0x55);
      auVar45 = ZEXT416((uint)(float)local_180);
    }
    auVar44 = vminss_avx(auVar44,auVar45);
    auVar37 = ZEXT1664(auVar44);
    local_180 = CONCAT44(local_180._4_4_,auVar44._0_4_);
    local_188[0] = fVar42;
    pfVar22 = (float *)&local_180;
    if (auVar44._0_4_ <= auVar39._0_4_) {
      pfVar22 = (float *)((longlong)&local_180 + 4);
    }
    pfVar21 = local_188;
    if (auVar39._0_4_ <= fVar42) {
      pfVar21 = pfVar22;
    }
    local_1d8 = auVar41._0_16_;
    local_1c8 = auVar46._0_8_;
    cVar32 = '\x01';
    local_188[0] = *pfVar21;
  }
  else {
    if (auVar37._0_4_ < DAT_180b8e120) {
    }
    cVar11 = FUN_180303860(1);
    if (cVar11 != '\0') {
      local_1f8 = (undefined *)CONCAT44(DAT_180b8e140,DAT_180b8e13c);
      local_1f0 = CONCAT44(local_1f0._4_4_,DAT_180b8e144 - 16.0);
      uVar43 = *(undefined8 *)(lVar27 + 0x18);
      local_398 = (byte)uVar43;
      bStack_397 = (byte)((ulonglong)uVar43 >> 8);
      bStack_396 = (byte)((ulonglong)uVar43 >> 0x10);
      bStack_395 = (byte)((ulonglong)uVar43 >> 0x18);
      bStack_394 = (byte)((ulonglong)uVar43 >> 0x20);
      bStack_393 = (byte)((ulonglong)uVar43 >> 0x28);
      bStack_392 = (byte)((ulonglong)uVar43 >> 0x30);
      bStack_391 = (byte)((ulonglong)uVar43 >> 0x38);
      uVar34 = *(undefined4 *)(lVar27 + 0x20);
      bStack_390 = (byte)uVar34;
      bStack_38f = (byte)((uint)uVar34 >> 8);
      bStack_38e = (byte)((uint)uVar34 >> 0x10);
      bStack_38d = (byte)((uint)uVar34 >> 0x18);
      uVar43 = *(undefined8 *)(lVar27 + 0x24);
      bStack_38c = (byte)uVar43;
      bStack_38b = (byte)((ulonglong)uVar43 >> 8);
      bStack_38a = (byte)((ulonglong)uVar43 >> 0x10);
      bStack_389 = (byte)((ulonglong)uVar43 >> 0x18);
      bStack_388 = (byte)((ulonglong)uVar43 >> 0x20);
      bStack_387 = (byte)((ulonglong)uVar43 >> 0x28);
      bStack_386 = (byte)((ulonglong)uVar43 >> 0x30);
      bStack_385 = (byte)((ulonglong)uVar43 >> 0x38);
      uVar34 = *(undefined4 *)(lVar27 + 0x2c);
      bStack_384 = (byte)uVar34;
      bStack_383 = (byte)((uint)uVar34 >> 8);
      bStack_382 = (byte)((uint)uVar34 >> 0x10);
      bStack_381 = (byte)((uint)uVar34 >> 0x18);
      local_3c8 = &local_398;
      local_3c0 = lVar27 + 0x30;
      FUN_180419610(uVar43,local_318,&DAT_180b8e13c,&local_1f8);
      if (local_25d == '\0') {
        fVar42 = local_26c;
        sVar12 = thunk_FUN_180624430(local_26c);
        if (((sVar12 < 1) && (auVar37._0_4_ < fVar42)) &&
           ((fVar42 < auVar48._0_4_ && (fVar50 <= local_280)))) {
          fVar35 = ((float)local_1f8 - DAT_180b8e13c) * fVar42 + DAT_180b8e13c;
          local_398 = SUB41(fVar35,0);
          bStack_397 = (byte)((uint)fVar35 >> 8);
          bStack_396 = (byte)((uint)fVar35 >> 0x10);
          bStack_395 = (byte)((uint)fVar35 >> 0x18);
          fVar35 = (local_1f8._4_4_ - DAT_180b8e140) * fVar42 + DAT_180b8e140;
          bStack_394 = SUB41(fVar35,0);
          bStack_393 = (byte)((uint)fVar35 >> 8);
          bStack_392 = (byte)((uint)fVar35 >> 0x10);
          bStack_391 = (byte)((uint)fVar35 >> 0x18);
          fVar42 = ((float)local_1f0 - DAT_180b8e144) * fVar42 + DAT_180b8e144;
          bStack_390 = SUB41(fVar42,0);
          bStack_38f = (byte)((uint)fVar42 >> 8);
          bStack_38e = (byte)((uint)fVar42 >> 0x10);
          bStack_38d = (byte)((uint)fVar42 >> 0x18);
          bStack_38c = local_318[0x90];
          bStack_38b = local_318[0x91];
          bStack_38a = local_318[0x92];
          bStack_389 = local_318[0x93];
          bStack_388 = local_318[0x94];
          bStack_387 = local_318[0x95];
          bStack_386 = local_318[0x96];
          bStack_385 = local_318[0x97];
          bStack_384 = SUB41(local_280,0);
          bStack_383 = (byte)((uint)local_280 >> 8);
          bStack_382 = (byte)((uint)local_280 >> 0x10);
          bStack_381 = (byte)((uint)local_280 >> 0x18);
          uStack_380 = CONCAT71(uStack_380._1_7_,1);
          local_3b8 = auVar51._0_4_;
          local_3c0 = CONCAT44(local_3c0._4_4_,auVar36._0_4_);
          local_3c8 = &bStack_38c;
          puVar18 = (undefined8 *)FUN_18033c4e0(&local_1f8,&DAT_180b8e13c,&DAT_180b8e118,&local_398)
          ;
          local_208._0_4_ = (float)*puVar18;
          local_208._4_4_ = (float)((ulonglong)*puVar18 >> 0x20);
          cVar9 = (char)*(undefined4 *)(puVar18 + 1);
          uVar31 = -(uint)(cVar9 != '\0') & 2;
          if (cVar9 != '\0') {
            local_1d8[1] = bStack_397;
            local_1d8[0] = local_398;
            local_1d8[2] = bStack_396;
            local_1d8[3] = bStack_395;
            local_1d8[4] = bStack_394;
            local_1d8[5] = bStack_393;
            local_1d8[6] = bStack_392;
            local_1d8[7] = bStack_391;
            local_1d8[9] = bStack_38f;
            local_1d8[8] = bStack_390;
            local_1d8[10] = bStack_38e;
            local_1d8[0xb] = bStack_38d;
            local_1d8[0xc] = bStack_38c;
            local_1d8[0xd] = bStack_38b;
            local_1d8[0xe] = bStack_38a;
            local_1d8[0xf] = bStack_389;
            local_1c8 = CONCAT17(bStack_381,
                                 CONCAT16(bStack_382,
                                          CONCAT15(bStack_383,
                                                   CONCAT14(bStack_384,
                                                            CONCAT13(bStack_385,
                                                                     CONCAT12(bStack_386,
                                                                              CONCAT11(bStack_387,
                                                                                       bStack_388)))
                                                           ))));
            cVar32 = (byte)uStack_380;
          }
        }
      }
    }
    cVar11 = FUN_180303860(1);
    uVar43 = auVar36._0_8_;
    fVar42 = auVar48._0_4_;
    if (cVar11 == '\0') {
LAB_18033b751:
      auVar37 = ZEXT464((uint)(float)local_208);
    }
    else {
      local_1f8 = (undefined *)
                  CONCAT44(DAT_180b8e118._4_4_ * 0.03125 + DAT_180b8e140,
                           (float)DAT_180b8e118 * 0.03125 + DAT_180b8e13c);
      local_1f0 = CONCAT44(local_1f0._4_4_,
                           ((DAT_180b8e120 - auVar36._0_4_ * 0.03125 * 0.5) * 0.03125 +
                           DAT_180b8e144) - 2.0);
      uVar43 = *(undefined8 *)(lVar27 + 0x18);
      local_398 = (byte)uVar43;
      bStack_397 = (byte)((ulonglong)uVar43 >> 8);
      bStack_396 = (byte)((ulonglong)uVar43 >> 0x10);
      bStack_395 = (byte)((ulonglong)uVar43 >> 0x18);
      bStack_394 = (byte)((ulonglong)uVar43 >> 0x20);
      bStack_393 = (byte)((ulonglong)uVar43 >> 0x28);
      bStack_392 = (byte)((ulonglong)uVar43 >> 0x30);
      bStack_391 = (byte)((ulonglong)uVar43 >> 0x38);
      uVar34 = *(undefined4 *)(lVar27 + 0x20);
      bStack_390 = (byte)uVar34;
      bStack_38f = (byte)((uint)uVar34 >> 8);
      bStack_38e = (byte)((uint)uVar34 >> 0x10);
      bStack_38d = (byte)((uint)uVar34 >> 0x18);
      uVar43 = *(undefined8 *)(lVar27 + 0x24);
      bStack_38c = (byte)uVar43;
      bStack_38b = (byte)((ulonglong)uVar43 >> 8);
      bStack_38a = (byte)((ulonglong)uVar43 >> 0x10);
      bStack_389 = (byte)((ulonglong)uVar43 >> 0x18);
      bStack_388 = (byte)((ulonglong)uVar43 >> 0x20);
      bStack_387 = (byte)((ulonglong)uVar43 >> 0x28);
      bStack_386 = (byte)((ulonglong)uVar43 >> 0x30);
      bStack_385 = (byte)((ulonglong)uVar43 >> 0x38);
      uVar34 = *(undefined4 *)(lVar27 + 0x2c);
      bStack_384 = (byte)uVar34;
      bStack_383 = (byte)((uint)uVar34 >> 8);
      bStack_382 = (byte)((uint)uVar34 >> 0x10);
      bStack_381 = (byte)((uint)uVar34 >> 0x18);
      local_3c8 = &local_398;
      local_3c0 = lVar27 + 0x30;
      FUN_180419610(uVar43,local_318,&DAT_180b8e13c,&local_1f8);
      uVar43 = auVar36._0_8_;
      fVar42 = auVar48._0_4_;
      if (local_25d != '\0') goto LAB_18033b751;
      sVar12 = thunk_FUN_180624430(local_26c);
      uVar43 = auVar36._0_8_;
      fVar42 = auVar48._0_4_;
      if (((0 < sVar12) || (local_26c <= auVar37._0_4_)) ||
         ((fVar42 <= local_26c || (local_280 < fVar50)))) goto LAB_18033b751;
      fVar50 = ((float)local_1f8 - DAT_180b8e13c) * local_26c + DAT_180b8e13c;
      local_398 = SUB41(fVar50,0);
      bStack_397 = (byte)((uint)fVar50 >> 8);
      bStack_396 = (byte)((uint)fVar50 >> 0x10);
      bStack_395 = (byte)((uint)fVar50 >> 0x18);
      fVar50 = (local_1f8._4_4_ - DAT_180b8e140) * local_26c + DAT_180b8e140;
      bStack_394 = SUB41(fVar50,0);
      bStack_393 = (byte)((uint)fVar50 >> 8);
      bStack_392 = (byte)((uint)fVar50 >> 0x10);
      bStack_391 = (byte)((uint)fVar50 >> 0x18);
      fVar50 = ((float)local_1f0 - DAT_180b8e144) * local_26c + DAT_180b8e144;
      bStack_390 = SUB41(fVar50,0);
      bStack_38f = (byte)((uint)fVar50 >> 8);
      bStack_38e = (byte)((uint)fVar50 >> 0x10);
      bStack_38d = (byte)((uint)fVar50 >> 0x18);
      bStack_38c = local_318[0x90];
      bStack_38b = local_318[0x91];
      bStack_38a = local_318[0x92];
      bStack_389 = local_318[0x93];
      bStack_388 = local_318[0x94];
      bStack_387 = local_318[0x95];
      bStack_386 = local_318[0x96];
      bStack_385 = local_318[0x97];
      bStack_384 = SUB41(local_280,0);
      bStack_383 = (byte)((uint)local_280 >> 8);
      bStack_382 = (byte)((uint)local_280 >> 0x10);
      bStack_381 = (byte)((uint)local_280 >> 0x18);
      uStack_380 = CONCAT71(uStack_380._1_7_,1);
      local_3b8 = auVar51._0_4_;
      local_3c0 = CONCAT44(local_3c0._4_4_,auVar36._0_4_);
      local_3c8 = &bStack_38c;
      FUN_18033c4e0(&local_1f8,&DAT_180b8e13c,&DAT_180b8e118,&local_398);
      uVar43 = auVar36._0_8_;
      fVar42 = auVar48._0_4_;
      if ((char)local_1f0 == '\0') goto LAB_18033b751;
      if (cVar9 == '\0') {
LAB_18033b710:
        uVar31 = 3;
        local_1d8[1] = bStack_397;
        local_1d8[0] = local_398;
        local_1d8[2] = bStack_396;
        local_1d8[3] = bStack_395;
        local_1d8[4] = bStack_394;
        local_1d8[5] = bStack_393;
        local_1d8[6] = bStack_392;
        local_1d8[7] = bStack_391;
        local_1d8[9] = bStack_38f;
        local_1d8[8] = bStack_390;
        local_1d8[10] = bStack_38e;
        local_1d8[0xb] = bStack_38d;
        local_1d8[0xc] = bStack_38c;
        local_1d8[0xd] = bStack_38b;
        local_1d8[0xe] = bStack_38a;
        local_1d8[0xf] = bStack_389;
        local_1c8 = CONCAT17(bStack_381,
                             CONCAT16(bStack_382,
                                      CONCAT15(bStack_383,
                                               CONCAT14(bStack_384,
                                                        CONCAT13(bStack_385,
                                                                 CONCAT12(bStack_386,
                                                                          CONCAT11(bStack_387,
                                                                                   bStack_388)))))))
        ;
        auVar37 = ZEXT864(local_1f8);
        local_208._4_4_ = (float)((ulonglong)local_1f8 >> 0x20);
        local_208._0_4_ = (float)local_1f8;
        cVar9 = (char)local_1f0;
        cVar32 = (byte)uStack_380;
      }
      else {
        auVar37 = ZEXT464((uint)(float)local_208);
        if ((float)local_1f8 < (float)local_208) goto LAB_18033b710;
      }
    }
    if (cVar9 == '\0') {
    }
    local_188[0] = local_208._4_4_;
  }
  fVar47 = auVar40._0_4_;
  fVar50 = auVar51._0_4_;
  fVar35 = auVar37._0_4_;
  if (fVar42 <= fVar35) {
  }
  local_180 = CONCAT44(local_180._4_4_,fVar35);
  if (cVar32 != '\0') {
    local_160 = local_1d8._12_4_;
    local_15c = (undefined4)local_1c8;
    local_158 = local_1c8._4_4_;
    local_3c0 = CONCAT44(local_3c0._4_4_,local_1d8._8_4_);
    local_3c8 = (byte *)CONCAT44(local_3c8._4_4_,fVar50);
    FUN_180339630(&local_1f8,DAT_180b8e144,DAT_180b8e120,uVar43);
    fVar47 = auVar40._0_4_;
    fVar50 = auVar51._0_4_;
    fVar35 = auVar37._0_4_;
    auVar44 = vpcmpeqd_avx(ZEXT116((byte)local_1f0),SUB6416(ZEXT464(0),0));
    auVar44 = vblendvps_avx(ZEXT416((uint)(float)local_1f8),auVar49._0_16_,auVar44);
    local_164 = auVar44._0_4_;
  }
  _DAT_1808fee20 = CONCAT44(DAT_1808fee24,uVar31);
  auVar44 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar35 * 64.0 - 0.001)),2);
  fVar50 = auVar44._0_4_ * fVar50;
  auVar37 = ZEXT464((uint)fVar50);
  if (fVar47 < fVar50) {
    FUN_18033b950(&local_148,"air-deferred",fVar50);
  }
  cVar9 = FUN_18033c2b0(&local_368,fVar50);
  if (cVar9 != '\0') {
    DAT_1808fee18 = local_178;
  }
  uVar43 = auVar37._0_8_;
LAB_18033af37:
  FUN_18033b950(&local_148,"air-blocked",uVar43);
}



