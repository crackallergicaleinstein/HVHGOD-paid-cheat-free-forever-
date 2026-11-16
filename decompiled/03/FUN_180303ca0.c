// FUN_180303ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180303ca0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180303ca0(void)

{
  uint3 uVar1;
  bool bVar2;
  undefined1 auVar3 [32];
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  double *pdVar13;
  ulonglong uVar14;
  uint uVar15;
  double dVar16;
  uint uVar17;
  double dVar18;
  longlong lVar19;
  uint uVar20;
  undefined **ppuVar21;
  int iVar22;
  uint uVar23;
  char *pcVar24;
  uint uVar25;
  byte bVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined4 uVar32;
  undefined1 auVar33 [64];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auStack_14e8 [32];
  undefined **local_14c8;
  char *local_14c0;
  double local_14b8;
  longlong local_14b0;
  undefined8 *local_14a8;
  undefined8 *local_14a0;
  undefined8 local_1498;
  undefined8 local_1490;
  undefined8 local_1488;
  undefined8 local_1480;
  undefined8 local_1478;
  double local_1470;
  double local_1468;
  double local_1460;
  undefined8 local_1458;
  double local_1450;
  double local_1448;
  double local_1440;
  double local_1438;
  double local_1430;
  double local_1428;
  double local_1420;
  double local_1418;
  double local_1410;
  double local_1408;
  undefined8 ***local_1400;
  double local_13f8;
  uint local_13f0;
  char *local_13e8;
  double local_13e0;
  double local_13d8;
  double local_13d0;
  double local_13c8;
  double local_13c0;
  double local_13b8;
  byte local_13a8;
  double local_13a0;
  double local_1398;
  ULONGLONG local_1390;
  double local_1388;
  double local_1380;
  longlong local_1378;
  longlong local_1370;
  double dStack_1368;
  undefined1 auStack_1360 [12];
  undefined1 auStack_1354 [4];
  undefined1 auStack_1350 [8];
  undefined8 uStack_1348;
  float local_1340;
  uint uStack_133c;
  undefined8 ***local_1338;
  undefined8 local_1330;
  undefined8 local_1328;
  longlong local_1320;
  undefined8 local_1318;
  longlong lStack_1310;
  undefined8 uStack_1308;
  undefined8 uStack_1300;
  undefined8 **local_12f8;
  longlong local_12f0;
  undefined8 *local_12e8;
  longlong local_12e0;
  char local_12d8 [1536];
  char local_cd8 [1536];
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_14e8;
  DAT_180c6f250 = DAT_180c6f250 + 1;
  DAT_180c6f248 = DAT_180c6f248 + (0x180 - DAT_1808e3a54);
  DAT_180c6f268 = DAT_180c6f268 + (0x60 - DAT_1808e3a58);
  DAT_180c6f260 = DAT_180c6f260 + (ulonglong)DAT_180bbeab8;
  plVar8 = (longlong *)FUN_18017bf40(&local_1378);
  uVar14 = (*plVar8 - DAT_180bda138) / 1000;
  if ((longlong)uVar14 < 0) {
    uVar14 = 0;
  }
  if (DAT_180c6f258 < uVar14) {
    DAT_180c6f258 = uVar14;
  }
  UVar9 = GetTickCount64();
  iVar22 = DAT_180bda150;
  iVar7 = DAT_180bbf12c;
  lVar10 = DAT_180b0dfb0;
  local_1378 = DAT_180b0dfb0;
  local_1380 = 4.94065645841247e-324;
  local_1390 = UVar9;
  if ((DAT_180b0dfb0 != 0) && ((DAT_180bbf12c != 0 || (DAT_180bda150 != 0)))) {
    uVar20 = (uint)DAT_180b90028;
    if ((DAT_180b8fffc == '\0') && (DAT_180b90028 == 0)) {
      uVar32 = 0;
    }
    else {
      uVar32 = 1;
    }
    FUN_18063ab10(local_cd8,0,0x600);
    local_1498 = (undefined8 *)CONCAT44(local_1498._4_4_,DAT_180bda158);
    local_14a0 = (undefined8 *)CONCAT44(local_14a0._4_4_,DAT_180bda154);
    local_14a8 = (undefined8 *)CONCAT44(local_14a8._4_4_,uVar20);
    local_14b0 = CONCAT44(local_14b0._4_4_,uVar32);
    local_14b8 = (double)CONCAT44(local_14b8._4_4_,iVar22);
    local_14c0 = (char *)CONCAT44(local_14c0._4_4_,iVar7);
    local_14c8 = *(undefined ***)(lVar10 + 8);
    FUN_18015ad60(local_cd8,0x600,0xffffffffffffffff,
                  "command=%lld traces_admitted=%d prediction_steps_admitted=%d jumpbug_active=%d landing_active=%d landing_trace_credit=%d landing_prediction_credit=%d source=reserved_command_work server_ack=unverified"
                 );
    local_14c8 = &PTR_180700558;
    if (local_cd8[0] != '\0') {
      local_14c8 = (undefined **)&DAT_1806bcfc0;
    }
    local_14c0 = local_cd8;
    FUN_1800f6900(0);
  }
  if ((DAT_180cd3f20 & 1) == 0) {
    DAT_180cd3f20 = DAT_180cd3f20 | 1;
    DAT_180cd3f28 = 0;
    DAT_180cd3f30 = -NAN;
    _DAT_180cd3f38 = ZEXT832(0);
    _DAT_180cd3f58 = _DAT_180cd3f58 & 0xffffff0000000000;
  }
  auVar33 = ZEXT864(0);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_1318 = _DAT_180bb8890;
  lStack_1310 = lRam0000000180bb8898;
  uStack_1308 = uRam0000000180bb88a0;
  uStack_1300 = uRam0000000180bb88a8;
  auStack_1350 = (undefined1  [8])_DAT_180bb88b0;
  uStack_1348 = uRam0000000180bb88b8;
  auVar33 = ZEXT1664(auVar33._0_16_);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar4 = lStack_1310;
  uVar20 = uStack_133c;
  dVar18 = DAT_180cd3f30;
  lVar19 = DAT_180cd3f28;
  auVar29 = auVar33._0_16_;
  auVar37 = SUB6416(ZEXT464(0x7fc00000),0);
  if (((lVar10 == 0) || (lStack_1310 == 0)) || (DAT_180b8e110 == '\0')) {
    local_1370 = 0;
    dStack_1368 = -NAN;
    _auStack_1360 = ZEXT832(0);
    uStack_133c = uStack_133c & 0xffffff00;
    DAT_180cd3f28 = 0;
    DAT_180cd3f30 = -NAN;
    _DAT_180cd3f38 = ZEXT832(0);
    _DAT_180cd3f58 = CONCAT44(uVar20,auVar33._0_4_) & 0xffffff00ffffffff;
  }
  else {
    local_1398 = *(double *)(lVar10 + 8);
    bVar6 = (byte)_DAT_180b8e114;
    bVar26 = bVar6 & 1;
    if ((DAT_180cd3f28 == lStack_1310) && (local_1398 == (double)((longlong)DAT_180cd3f30 + 1))) {
      if (4096.0 <= (DAT_180b8e130 - DAT_180cd3f38) * (DAT_180b8e130 - DAT_180cd3f38) +
                    (DAT_180b8e134 - DAT_180cd3f3c) * (DAT_180b8e134 - DAT_180cd3f3c) +
                    (DAT_180b8e138 - DAT_180cd3f40) * (DAT_180b8e138 - DAT_180cd3f40))
      goto LAB_180303ffa;
      bVar2 = true;
    }
    else {
LAB_180303ffa:
      bVar2 = false;
    }
    fVar34 = (float)DAT_180b8e118 * (float)DAT_180b8e118 + DAT_180b8e118._4_4_ * DAT_180b8e118._4_4_
    ;
    if (fVar34 == auVar33._0_4_) {
      fVar34 = 0.0;
    }
    else if (fVar34 < 0.0) {
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar37);
      fVar34 = (float)FUN_18061e150();
      auVar29 = auVar33._0_16_;
      auVar37 = auVar40._0_16_;
    }
    else {
      fVar34 = SQRT(fVar34);
    }
    fVar28 = DAT_180cd3f44 * DAT_180cd3f44 + DAT_180cd3f48 * DAT_180cd3f48;
    if (fVar28 == auVar29._0_4_) {
      fVar27 = 0.0;
    }
    else if (fVar28 < 0.0) {
      auVar33 = ZEXT464((uint)fVar28);
      auVar40 = ZEXT1664(auVar29);
      auVar41 = ZEXT1664(auVar37);
      fVar27 = (float)FUN_18061e150();
      auVar29 = auVar40._0_16_;
      auVar37 = auVar41._0_16_;
      fVar28 = auVar33._0_4_;
    }
    else {
      fVar27 = SQRT(fVar28);
    }
    fVar27 = fVar27 - fVar34;
    local_13a0 = (double)CONCAT44(local_13a0._4_4_,fVar27);
    if ((!bVar2) || (UVar9 < DAT_180c6f238)) {
LAB_180304710:
      dVar16 = local_1398;
    }
    else {
      if (bVar26 == DAT_180cd3f5c) {
        if (fVar28 == auVar29._0_4_) {
          fVar28 = 0.0;
        }
        else if (fVar28 < 0.0) {
          auVar33 = ZEXT1664(auVar29);
          auVar40 = ZEXT1664(auVar37);
          fVar28 = (float)FUN_18061e150();
          auVar29 = auVar33._0_16_;
          auVar37 = auVar40._0_16_;
          fVar27 = local_13a0._0_4_;
        }
        else {
          fVar28 = SQRT(fVar28);
        }
        auVar30 = vmaxss_avx(ZEXT416((uint)(fVar28 * 0.2)),ZEXT416(0x41f00000));
        if (fVar27 <= auVar30._0_4_) goto LAB_180304710;
      }
      iVar7 = DAT_180c6f290;
      DAT_180c6f238 = UVar9 + 100;
      if (DAT_180c6f290 == 0) {
        auVar33 = ZEXT1664(auVar29);
        auVar40 = ZEXT1664(auVar37);
        UVar9 = GetTickCount64();
        auVar37 = auVar40._0_16_;
        auVar29 = auVar33._0_16_;
        if (DAT_180c6f288 <= UVar9) {
          local_1318 = (undefined8 *)&DAT_1808ff3d0;
          iVar7 = FUN_1805f68d0(&DAT_1808ff3d0);
          if (iVar7 != 0) goto LAB_1803051d0;
          if (DAT_1808ff41c == 0x7fffffff) {
            DAT_1808ff41c = 0x7ffffffe;
            goto LAB_1803051b2;
          }
          if ((DAT_180c6f290 == 0) && (DAT_180c6f288 <= UVar9)) {
            DAT_180c6f290 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
            if (DAT_180c6f290 == 0) {
              DAT_180c6f288 = UVar9 + 1000;
            }
            else {
              DAT_180c6f288 = 0xffffffffffffffff;
            }
          }
          iVar7 = DAT_180c6f290;
          FUN_1805f68fc(&DAT_1808ff3d0);
          auVar37 = auVar40._0_16_;
          auVar29 = auVar33._0_16_;
        }
      }
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar37);
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if (iVar7 + lVar4 == 0) {
        bVar2 = false;
        dVar18 = local_1380;
      }
      else {
        local_1388 = 0.0;
        cVar5 = FUN_1804514f0(&local_1388,iVar7 + lVar4,8);
        if (cVar5 == '\0') {
          bVar2 = false;
          dVar18 = local_1380;
        }
        else {
          bVar2 = true;
          dVar18 = local_1388;
        }
      }
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      iVar7 = DAT_180c6f284;
      dVar16 = 0.0;
      if (bVar2) {
        dVar16 = dVar18;
      }
      if ((DAT_180c6f284 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f270 <= UVar9)) {
        local_1318 = (undefined8 *)&DAT_1808ff2e0;
        iVar7 = FUN_1805f68d0(&DAT_1808ff2e0);
        if (iVar7 != 0) {
LAB_1803051d0:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ff32c == 0x7fffffff) {
          DAT_1808ff32c = 0x7ffffffe;
LAB_1803051b2:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f284 == 0) && (DAT_180c6f270 <= UVar9)) {
          DAT_180c6f284 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0xed2c77cd);
          if (DAT_180c6f284 == 0) {
            DAT_180c6f270 = UVar9 + 1000;
          }
          else {
            DAT_180c6f270 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c6f284;
        FUN_1805f68fc(&DAT_1808ff2e0);
      }
      auVar29 = auVar40._0_16_;
      if ((dVar16 == 0.0) || (iVar7 == 0)) {
        uVar32 = 0;
LAB_18030432f:
        auVar40 = ZEXT1664(auVar29);
        auVar41 = ZEXT1664(auVar29);
        auVar42 = ZEXT1664(auVar29);
      }
      else {
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        uVar32 = 0;
        if ((longlong)iVar7 + (longlong)dVar16 != 0) {
          uVar32 = auVar33._0_4_;
          local_1318 = (undefined8 *)CONCAT44(uVar32,uVar32);
          lStack_1310 = CONCAT44(lStack_1310._4_4_,uVar32);
          cVar5 = FUN_1804514f0(&local_1318,(longlong)iVar7 + (longlong)dVar16,0xc);
          if (cVar5 == '\0') {
            uVar32 = 0;
          }
          else {
            local_1328 = local_1318;
            local_1320 = CONCAT44(local_1320._4_4_,(undefined4)lStack_1310);
            uVar32 = 1;
          }
        }
        lVar10 = FUN_18017ea70();
        auVar29 = auVar40._0_16_;
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        auVar40 = ZEXT464((uint)local_1328);
        auVar41 = ZEXT464(local_1328._4_4_);
        auVar42 = ZEXT464((uint)local_1320);
        if ((char)uVar32 == '\0') goto LAB_18030432f;
      }
      if ((DAT_180cd3ee0 & 1) == 0) {
        DAT_180cd3ee0 = DAT_180cd3ee0 | 1;
        local_1318 = (undefined8 *)CONCAT44(local_1318._4_4_,0x3e2a4345);
        lStack_1310 = 0;
        local_1328 = &local_1318;
        local_1320 = 1;
        FUN_18044c9c0(DAT_180c64058,&local_1328);
        DAT_180cd3ee8 = lStack_1310;
      }
      if (DAT_180cd3ee8 == 0) {
        uVar20 = 0xffffffff;
      }
      else {
        uVar20 = (uint)*(byte *)(DAT_180cd3ee8 + 0x58);
      }
      fVar34 = (DAT_180b8e124._4_4_ - DAT_180b8e118._4_4_) *
               (DAT_180b8e124._4_4_ - DAT_180b8e118._4_4_) +
               ((float)DAT_180b8e124 - (float)DAT_180b8e118) *
               ((float)DAT_180b8e124 - (float)DAT_180b8e118) +
               (DAT_180b8e12c - DAT_180b8e120) * (DAT_180b8e12c - DAT_180b8e120);
      fVar28 = DAT_180b8e124._4_4_;
      fVar27 = (float)DAT_180b8e124;
      if (fVar34 == auVar33._0_4_) {
        auVar39 = ZEXT864(0);
      }
      else if (fVar34 < 0.0) {
        auVar39._0_8_ = FUN_18061e150(fVar34);
        auVar39._8_56_ = extraout_var;
        auVar39 = ZEXT1664(auVar39._0_16_);
      }
      else {
        auVar39 = ZEXT464((uint)SQRT(fVar34));
      }
      fVar34 = DAT_180cd3f50 * DAT_180cd3f50 + DAT_180cd3f54 * DAT_180cd3f54;
      fVar38 = DAT_180cd3f50;
      fVar35 = DAT_180cd3f54;
      if (fVar34 == auVar33._0_4_) {
        auVar31 = ZEXT864(0);
      }
      else if (fVar34 < 0.0) {
        auVar31._0_8_ = FUN_18061e150(fVar34);
        auVar31._8_56_ = extraout_var_00;
        auVar31 = ZEXT1664(auVar31._0_16_);
      }
      else {
        auVar31 = ZEXT464((uint)SQRT(fVar34));
      }
      fVar34 = fVar28 * fVar28 + fVar27 * fVar27;
      if (fVar34 != auVar33._0_4_) {
        if (fVar34 < 0.0) {
          auVar33._0_8_ = FUN_18061e150(fVar34);
          auVar33._8_56_ = extraout_var_01;
          auVar33 = ZEXT1664(auVar33._0_16_);
        }
        else {
          auVar33 = ZEXT464((uint)SQRT(fVar34));
        }
      }
      FUN_18063ab10(local_cd8,0,0x600);
      dVar16 = local_1398;
      local_13f8 = (double)auVar39._0_4_;
      local_1400 = (undefined8 ***)(double)(auVar31._0_4_ - auVar33._0_4_);
      local_1408 = (double)DAT_180b8e12c;
      local_1410 = (double)fVar28;
      local_1418 = (double)fVar27;
      local_1420 = (double)DAT_180cd3f58;
      local_1428 = (double)fVar35;
      local_1430 = (double)fVar38;
      local_1438 = (double)DAT_180b8e154;
      local_1440 = (double)auVar42._0_4_;
      local_1448 = (double)auVar41._0_4_;
      local_1450 = (double)auVar40._0_4_;
      local_1460 = (double)local_13a0._0_4_;
      local_1468 = (double)DAT_180b8e120;
      local_1470 = (double)DAT_180b8e118._4_4_;
      local_1478 = (double)(float)DAT_180b8e118;
      local_1480 = (double)DAT_180cd3f4c;
      local_1488 = (double)DAT_180cd3f48;
      local_1490 = (undefined8 **)(double)DAT_180cd3f44;
      local_1498 = (undefined8 *)(double)DAT_180b8e138;
      local_14a0 = (undefined8 *)(double)DAT_180b8e134;
      local_14a8 = (undefined8 *)(double)DAT_180b8e130;
      local_1458 = (double)CONCAT44(local_1458._4_4_,uVar32);
      local_14b0 = CONCAT44(local_14b0._4_4_,(uint)bVar26);
      local_14b8 = (double)CONCAT44(local_14b8._4_4_,(uint)DAT_180cd3f5c);
      local_14c0 = (char *)DAT_180cd3f30;
      local_14c8 = (undefined **)local_1398;
      local_13f0 = uVar20;
      local_13a0 = local_1488;
      local_1388 = local_13f8;
      local_1338 = local_1400;
      local_1328 = local_14a0;
      local_1318 = local_14a8;
      local_12f8 = local_1490;
      local_12e8 = local_1498;
      FUN_18015ad60(local_cd8,0x600,0xffffffffffffffff,
                    "command=%lld prior=%lld ground=(%d,%d) origin=(%.3f,%.3f,%.3f) velocity_before=(%.3f,%.3f,%.3f) velocity_after=(%.3f,%.3f,%.3f) speed_loss=%.3f normal_valid=%d normal=(%.4f,%.4f,%.4f) friction=%.3f absolute_velocity_before=(%.3f,%.3f,%.3f) absolute_velocity_after=(%.3f,%.3f,%.3f) absolute_speed_loss=%.3f velocity_source_delta=%.3f server_bunnyhop_unlimited=%d normal_source=cached_ground_state source=client_command_start predicted=0 server_ack=unverified"
                   );
      local_14c8 = &PTR_180700558;
      if (local_cd8[0] != '\0') {
        local_14c8 = (undefined **)&DAT_1806bcfc0;
      }
      local_14c0 = local_cd8;
      FUN_1800f6900(0);
      auVar29 = ZEXT816(0);
      auVar37 = SUB6416(ZEXT464(0x7fc00000),0);
      lVar19 = DAT_180cd3f28;
      dVar18 = DAT_180cd3f30;
    }
    auVar3 = _auStack_1360;
    if (lVar19 == lVar4) {
      if (dVar16 == dVar18) goto LAB_1803047ac;
    }
    local_1370 = lVar4;
    auStack_1360._4_4_ = DAT_180b8e134;
    auStack_1360._0_4_ = DAT_180b8e130;
    auStack_1360._8_4_ = DAT_180b8e138;
    auVar30 = vunpcklps_avx(ZEXT416((uint)(float)DAT_180b8e118),ZEXT416((uint)DAT_180b8e118._4_4_));
    DAT_180b8e118 = auVar30._0_8_;
    _auStack_1354 = DAT_180b8e118;
    uStack_1348 = auVar3._24_8_;
    auStack_1350._4_4_ = DAT_180b8e120;
    auVar30._4_4_ = DAT_180b8e124._4_4_;
    auVar30._0_4_ = (float)DAT_180b8e124;
    auVar30._8_8_ = 0;
    local_1340 = DAT_180b8e12c;
    uVar20 = CONCAT31(uStack_133c._1_3_,bVar6);
    uStack_133c = uVar20 & 0xffffff01;
    DAT_180cd3f28 = lVar4;
    _DAT_180cd3f38 = auStack_1360._0_16_;
    _DAT_180cd3f48 = vunpcklpd_avx(_auStack_1350,auVar30);
    _DAT_180cd3f58 = CONCAT44(uVar20,DAT_180b8e12c) & 0xffffff01ffffffff;
    DAT_180cd3f30 = dVar16;
    dStack_1368 = dVar16;
  }
LAB_1803047ac:
  uVar17 = (uint)DAT_180cc83cb;
  uVar25 = (uint)DAT_180cc83ca;
  uVar12 = (uint)DAT_180cc83c9;
  uVar23 = (uint)DAT_180cc83c8;
  uVar20 = ((uVar17 * 2 | uVar25) * 2 | uVar12) * 2 | uVar23;
  iVar7 = 0;
  uVar15 = (uint)(DAT_180cc8360 != '\0');
  if ((DAT_1808ff2cc == uVar15) && (DAT_1808ff2c8 == uVar20)) {
    if ((DAT_180cc8360 == '\0') || (iVar22 = 1, DAT_180cc83c9 == 0)) {
      iVar22 = iVar7;
    }
    if (DAT_1808ff2d8 == iVar22) goto LAB_1803048c2;
  }
  if ((DAT_180cc8360 != '\0') && (DAT_180cc83c9 != 0)) {
    iVar7 = 1;
  }
  auVar33 = ZEXT1664(auVar29);
  auVar40 = ZEXT1664(auVar37);
  DAT_1808ff2c8 = uVar20;
  DAT_1808ff2cc = uVar15;
  DAT_1808ff2d8 = iVar7;
  FUN_18063ab10(local_6d8,0,0x600);
  local_14a0 = (undefined8 *)CONCAT44(local_14a0._4_4_,iVar7);
  local_14a8 = (undefined8 *)CONCAT44(local_14a8._4_4_,uVar17);
  local_14b0 = CONCAT44(local_14b0._4_4_,uVar25);
  local_14b8 = (double)CONCAT44(local_14b8._4_4_,uVar12);
  local_14c0 = (char *)CONCAT44(local_14c0._4_4_,uVar23);
  local_14c8 = (undefined **)CONCAT44(local_14c8._4_4_,uVar15);
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "jumpbug_enabled=%d high_jump=%d ramp_boost=%d no_land_penalty=%d no_fall_damage=%d slide_walk=%d server_ack=0"
               );
  local_14c8 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_14c8 = (undefined **)&DAT_1806bcfc0;
  }
  local_14c0 = local_6d8;
  FUN_1800f6900(0);
  auVar29 = auVar33._0_16_;
  auVar37 = auVar40._0_16_;
LAB_1803048c2:
  uVar15 = _DAT_180cc82ec;
  uVar20 = (uint)CONCAT41(_DAT_180cc82ec,DAT_180cc82eb);
  uVar12 = (uint)CONCAT42(_DAT_180cc82ec,CONCAT11(DAT_180cc82eb,DAT_180cc82ea));
  local_13a8 = DAT_180cc82e9;
  uVar1 = CONCAT12(DAT_180cc82ea,CONCAT11(DAT_180cc82e9,DAT_180cc82e8));
  uVar17 = ((((_DAT_180cc82ec & 0xff) * 2 | uVar20 & 0xff) * 2 | uVar12 & 0xff) * 2 |
           (uint)DAT_180cc82e9) * 2 | uVar1 & 0xff;
  if ((DAT_180c6f240 <= local_1390) &&
     ((((DAT_1808ff2d4 != DAT_180cc82f4 || (DAT_1808ff2d0 != uVar17)) ||
       (DAT_1808ff2c4 != (DAT_180cc8280 != '\0'))) ||
      (DAT_1808ff2c0 !=
       CONCAT13(DAT_180cc82f0._3_1_,CONCAT12(DAT_180cc82f0._2_1_,(undefined2)DAT_180cc82f0)))))) {
    DAT_180c6f240 = local_1390 + 0xfa;
    DAT_1808ff2d4 = DAT_180cc82f4;
    iVar7 = CONCAT13(DAT_180cc82f0._3_1_,CONCAT12(DAT_180cc82f0._2_1_,(undefined2)DAT_180cc82f0));
    DAT_1808ff2c4 = (uint)(DAT_180cc8280 != '\0');
    auVar33 = ZEXT1664(auVar29);
    auVar40 = ZEXT1664(auVar37);
    DAT_1808ff2c0 = iVar7;
    DAT_1808ff2d0 = uVar17;
    bVar6 = FUN_1802ff9f0();
    local_1398 = (double)CONCAT44(local_1398._4_4_,200);
    local_13a0 = (double)CONCAT44(local_13a0._4_4_,0x19);
    FUN_18063ab10(local_12d8,0,0x600);
    pdVar13 = &local_13a0;
    if (0x18 < DAT_1808ff2d4) {
      pdVar13 = (double *)&DAT_1808ff2d4;
    }
    pdVar11 = &local_1398;
    if (DAT_1808ff2d4 < 0xc9) {
      pdVar11 = pdVar13;
    }
    local_14b8 = (double)((float)*(int *)pdVar11 / 200.0);
    local_1478 = (double)(CONCAT44(local_1478._4_4_,uVar15) & 0xffffffff000000ff);
    local_1480 = (double)(CONCAT44(local_1480._4_4_,uVar20) & 0xffffffff000000ff);
    local_1488 = (double)(CONCAT44(local_1488._4_4_,uVar12) & 0xffffffff000000ff);
    local_1490 = (undefined8 **)CONCAT44(local_1490._4_4_,(uint)local_13a8);
    local_1498 = (undefined8 *)(CONCAT44(local_1498._4_4_,(uint)uVar1) & 0xffffffff000000ff);
    local_14a0 = (undefined8 *)CONCAT44(local_14a0._4_4_,iVar7);
    local_14a8 = (undefined8 *)CONCAT44(local_14a8._4_4_,(uint)bVar6);
    local_14b0 = CONCAT44(local_14b0._4_4_,DAT_1808ff2d0);
    local_14c0 = (char *)CONCAT44(local_14c0._4_4_,DAT_1808ff2d4);
    local_14c8 = (undefined **)CONCAT44(local_14c8._4_4_,DAT_1808ff2c4);
    FUN_18015ad60(local_12d8,0x600,0xffffffffffffffff,
                  "enabled=%d turn_speed_pct=%d gain_fraction=%.3f options_mask=0x%x selected_quantized=%d subticks=%d avoid_collisions=%d view_angles=%d movement_keys=%d only_jump=%d stop_shift=%d"
                 );
    local_14c8 = &PTR_180700558;
    if (local_12d8[0] != '\0') {
      local_14c8 = (undefined **)&DAT_1806bcfc0;
    }
    local_14c0 = local_12d8;
    FUN_1800f6900(0);
    auVar29 = auVar33._0_16_;
    auVar37 = auVar40._0_16_;
  }
  if (DAT_180c6f230 <= local_1390) {
    DAT_180c6f230 = local_1390 + 2000;
    if (DAT_180b8fbfc == '\0') {
      pcVar24 = "none";
      if (DAT_180b8fba8 != '\0') {
        pcVar24 = "analog";
      }
      local_1318 = &DAT_180b8fbc8;
      if (DAT_180b8fba8 == '\0') {
        local_1318 = &DAT_180b8e118;
      }
    }
    else {
      pcVar24 = "quantized-yaw";
      if (DAT_180b8fc1e != '\0') {
        pcVar24 = "quantized-fixed";
      }
      local_1318 = &DAT_180b8fc00;
    }
    local_1318 = (undefined8 *)*local_1318;
    if ((DAT_180cd3ef0 & 1) == 0) {
      DAT_180cd3ef0 = DAT_180cd3ef0 | 1;
      local_1328 = (undefined8 *)CONCAT44(local_1328._4_4_,0x2f5504fa);
      local_1320 = 0;
      local_12e0 = 1;
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar37);
      local_12e8 = &local_1328;
      FUN_18044c9c0(DAT_180c64058,&local_12e8);
      auVar29 = auVar33._0_16_;
      auVar37 = auVar40._0_16_;
      DAT_180cd3ef8 = local_1320;
    }
    lVar10 = DAT_180cd3ef8;
    if ((DAT_180cd3f00 & 1) == 0) {
      DAT_180cd3f00 = DAT_180cd3f00 | 1;
      local_12e8 = (undefined8 *)CONCAT44(local_12e8._4_4_,0xa239062b);
      local_12e0 = 0;
      local_12f8 = &local_12e8;
      local_12f0 = 1;
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar37);
      FUN_18044c9c0(DAT_180c64058,&local_12f8);
      auVar29 = auVar33._0_16_;
      auVar37 = auVar40._0_16_;
      DAT_180cd3f08 = local_12e0;
    }
    lVar19 = DAT_180cd3f08;
    if ((DAT_180cd3f10 & 1) == 0) {
      DAT_180cd3f10 = DAT_180cd3f10 | 1;
      local_12f8 = (undefined8 **)CONCAT44(local_12f8._4_4_,0x1da56b38);
      local_12f0 = 0;
      local_1338 = &local_12f8;
      local_1330 = 1;
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar37);
      FUN_18044c9c0(DAT_180c64058,&local_1338);
      auVar29 = auVar33._0_16_;
      auVar37 = auVar40._0_16_;
      DAT_180cd3f18 = local_12f0;
    }
    if (DAT_180cd3f18 == 0) {
      auVar30 = auVar37;
    }
    else {
      auVar30 = ZEXT416(*(uint *)(DAT_180cd3f18 + 0x58));
    }
    if (lVar19 != 0) {
      auVar37 = ZEXT416(*(uint *)(lVar19 + 0x58));
    }
    if (lVar10 == 0) {
      fVar34 = NAN;
    }
    else {
      fVar34 = *(float *)(lVar10 + 0x58);
    }
    fVar28 = (float)DAT_180b8e118 * (float)DAT_180b8e118 + DAT_180b8e118._4_4_ * DAT_180b8e118._4_4_
    ;
    auVar36 = ZEXT416((uint)fVar28);
    if (fVar28 == auVar29._0_4_) {
      fVar28 = 0.0;
    }
    else if (fVar28 < 0.0) {
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT464((uint)fVar28);
      auVar41 = ZEXT1664(auVar37);
      auVar42 = ZEXT1664(auVar30);
      fVar28 = (float)FUN_18061e150();
      auVar30 = auVar42._0_16_;
      auVar37 = auVar41._0_16_;
      auVar29 = auVar33._0_16_;
      auVar36 = auVar40._0_16_;
    }
    else {
      fVar28 = SQRT(fVar28);
    }
    fVar27 = local_1318._4_4_ * local_1318._4_4_ + (float)local_1318 * (float)local_1318;
    if (fVar27 == auVar29._0_4_) {
      fVar38 = 0.0;
    }
    else if (fVar27 < 0.0) {
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar36);
      auVar41 = ZEXT1664(auVar37);
      auVar42 = ZEXT1664(auVar30);
      fVar38 = (float)FUN_18061e150();
      auVar30 = auVar42._0_16_;
      auVar37 = auVar41._0_16_;
      auVar29 = auVar33._0_16_;
      auVar36 = auVar40._0_16_;
    }
    else {
      fVar38 = SQRT(fVar27);
    }
    if (fVar27 == auVar29._0_4_) {
      fVar27 = 0.0;
    }
    else if (fVar27 < 0.0) {
      auVar33 = ZEXT1664(auVar29);
      auVar40 = ZEXT1664(auVar36);
      auVar41 = ZEXT1664(auVar37);
      auVar42 = ZEXT1664(auVar30);
      fVar27 = (float)FUN_18061e150();
      auVar30 = auVar42._0_16_;
      auVar37 = auVar41._0_16_;
      auVar29 = auVar33._0_16_;
      auVar36 = auVar40._0_16_;
    }
    else {
      fVar27 = SQRT(fVar27);
    }
    fVar35 = auVar36._0_4_;
    if (fVar35 != auVar29._0_4_) {
      if (fVar35 < 0.0) {
        auVar33 = ZEXT1664(auVar37);
        auVar41 = ZEXT1664(auVar30);
        auVar40._0_8_ = FUN_18061e150();
        auVar30 = auVar41._0_16_;
        auVar37 = auVar33._0_16_;
        auVar40._8_56_ = extraout_var_02;
        auVar29 = auVar40._0_16_;
      }
      else {
        auVar29._0_4_ = SQRT(fVar35);
        auVar29._4_12_ = auVar36._4_12_;
      }
    }
    uVar32 = _DAT_180b8e114;
    if (((local_1378 == 0) || (lVar10 = *(longlong *)(local_1378 + 0x40), lVar10 == 0)) ||
       (lVar10 == -0x10)) {
      local_13a0 = (double)CONCAT44(local_13a0._4_4_,0xffffffff);
    }
    else {
      local_13a0 = (double)CONCAT44(local_13a0._4_4_,*(undefined4 *)(lVar10 + 0x20));
    }
    if ((DAT_180b8fffc == '\0') && (DAT_180b90028 == 0)) {
      local_1380 = (double)((ulonglong)local_1380 & 0xffffffff00000000);
    }
    if (local_1378 == 0) {
      local_1390 = 0xffffffffffffffff;
    }
    else {
      local_1390 = *(undefined8 *)(local_1378 + 8);
    }
    auVar33 = ZEXT1664(auVar29);
    auVar40 = ZEXT1664(auVar37);
    auVar41 = ZEXT1664(auVar30);
    FUN_18063ab10(local_12d8,0,0x600);
    local_13b8 = (double)auVar41._0_4_;
    local_13c0 = (double)auVar40._0_4_;
    local_13c8 = (double)fVar34;
    local_13d0 = (double)(fVar38 - fVar28);
    local_13d8 = (double)fVar27;
    local_13e0 = (double)auVar33._0_4_;
    local_1458 = (double)DAT_180b8e17c;
    local_1460 = (double)DAT_180b8e174._4_4_;
    local_1468 = (double)(float)DAT_180b8e174;
    local_1470 = (double)DAT_180b8e120;
    local_1478 = (double)DAT_180b8e118._4_4_;
    local_1480 = (double)(float)DAT_180b8e118;
    local_13f0 = CONCAT13(DAT_180cc82f0._3_1_,
                          CONCAT12(DAT_180cc82f0._2_1_,(undefined2)DAT_180cc82f0));
    local_13f8 = (double)CONCAT44(local_13f8._4_4_,uVar17);
    local_1400 = (undefined8 ***)CONCAT44(local_1400._4_4_,DAT_180cc82f4);
    local_1408 = (double)CONCAT44(local_1408._4_4_,(uint)DAT_180b8e580);
    local_1410 = (double)CONCAT44(local_1410._4_4_,(uint)DAT_180c646fa);
    local_1418 = (double)CONCAT44(local_1418._4_4_,(uint)DAT_180b8fe80);
    local_1420 = (double)CONCAT44(local_1420._4_4_,(uint)DAT_180b8fc30);
    local_1428 = (double)CONCAT44(local_1428._4_4_,(uint)DAT_180b900c0);
    local_1430 = (double)DAT_180c6f258;
    local_1438 = (double)DAT_180c6f260;
    local_1440 = (double)DAT_180c6f268;
    local_1448 = (double)DAT_180c6f248;
    local_1450 = (double)CONCAT44(local_1450._4_4_,local_13a0._0_4_);
    local_1488 = (double)CONCAT44(local_1488._4_4_,(uint)DAT_180b8e111);
    local_1490 = (undefined8 **)(CONCAT44(local_1490._4_4_,uVar32) & 0xffffffff00000001);
    local_1498 = (undefined8 *)CONCAT44(local_1498._4_4_,SUB84(local_1380,0));
    local_14a0 = (undefined8 *)CONCAT44(local_14a0._4_4_,(uint)DAT_1808fedf1);
    local_14a8 = (undefined8 *)CONCAT44(local_14a8._4_4_,(uint)DAT_1808fedf0);
    local_14b0 = CONCAT44(local_14b0._4_4_,(uint)(DAT_180cc8280 != '\0'));
    local_14b8 = (double)CONCAT44(local_14b8._4_4_,(uint)(DAT_180cc8360 != '\0'));
    local_14c0 = (char *)CONCAT44(local_14c0._4_4_,(uint)(DAT_180cc81b0 != '\0'));
    local_14c8 = (undefined **)local_1390;
    local_13e8 = pcVar24;
    FUN_18015ad60(local_12d8,0x600,0xffffffffffffffff,
                  "command=%lld bhop=%d jumpbug=%d airstrafe=%d jump_held=%d bhop_press=%d jumpbug_active=%d grounded=%d predicted_valid=%d network_velocity=(%.3f,%.3f,%.3f) predicted_velocity=(%.3f,%.3f,%.3f) subticks=%d traces=%llu predictions=%llu budget_exhausted=%llu worst_us=%llu edgebug_active=%d pixelsurf_active=%d texturebug_active=%d quickstop=%d autostop=%d strafe_speed_pct=%d strafe_options_mask=0x%x strafe_requested_subticks=%d strafe_route=%s observed_speed=%.3f modeled_speed=%.3f modeled_gain=%.3f air_accel=%.3f air_cap=%.3f server_maxspeed=%.3f server_ack=0"
                 );
    ppuVar21 = &PTR_180700558;
    local_14c8 = &PTR_180700558;
    if (local_12d8[0] != '\0') {
      local_14c8 = (undefined **)&DAT_1806bcfc0;
    }
    local_14c0 = local_12d8;
    FUN_1800f6900(0);
    lVar10 = DAT_180c6f260;
    if (DAT_180c6f260 != 0) {
      FUN_18063ab10(local_12d8,0,0x600);
      local_14a8 = (undefined8 *)DAT_180c6f258;
      local_14b0 = lVar10;
      local_14b8 = (double)DAT_180c6f268;
      local_14c0 = (char *)DAT_180c6f248;
      local_14c8 = (undefined **)DAT_180c6f250;
      FUN_18015ad60(local_12d8,0x600,0xffffffffffffffff,
                    "commands=%llu traces=%llu predictions=%llu budget_exhausted=%llu worst_us=%llu"
                   );
      if (local_12d8[0] != '\0') {
        ppuVar21 = (undefined **)&DAT_1806bcfc0;
      }
      local_14c0 = local_12d8;
      local_14c8 = ppuVar21;
      FUN_1800f6900(0);
    }
    DAT_180c6f258 = 0;
    DAT_180c6f260 = 0;
    DAT_180c6f268 = 0;
    DAT_180c6f248 = 0;
    DAT_180c6f250 = 0;
  }
}



