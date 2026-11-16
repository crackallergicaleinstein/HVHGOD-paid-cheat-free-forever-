// FUN_1802cf5c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cf5c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802cf5c0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  undefined *puVar14;
  longlong lVar15;
  int *piVar16;
  float *pfVar17;
  int *piVar18;
  char *pcVar19;
  uint uVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float *extraout_XMM0_Qa;
  float *pfVar32;
  undefined1 extraout_var [56];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [64];
  float fVar40;
  float *pfVar41;
  undefined1 auVar42 [64];
  undefined1 auStack_808 [32];
  undefined **local_7e8;
  char *local_7e0;
  double local_7d8;
  double local_7d0;
  float local_7c8 [2];
  undefined8 local_7c0;
  float local_7b8;
  float local_7b0;
  char local_7ac;
  float local_7a8;
  char local_7a4;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined *puStack_780;
  int local_778;
  undefined4 uStack_774;
  undefined1 local_768 [16];
  float local_758;
  float fStack_754;
  float local_750;
  float local_748;
  float local_744;
  float local_740;
  int local_73c [15];
  undefined8 local_700;
  char *local_6f8;
  float local_6f0 [2];
  undefined8 local_6e8;
  char local_6d8 [1544];
  ulonglong local_d0;
  
  if (param_2 == 0) {
    return;
  }
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_808;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar13 = DAT_1808fd148;
  lVar12 = DAT_1808da460;
  uVar22 = 1000;
  if ((DAT_1808fd148 != DAT_1808da460) || (lVar23 = DAT_180c6eb20, DAT_180c6eb20 == 0)) {
    UVar11 = GetTickCount64();
    if ((lVar13 == lVar12) && (UVar11 < DAT_180c6eb28)) {
      lVar23 = 0;
    }
    else {
      local_6e8 = &DAT_1808fd150;
      iVar9 = FUN_1805f68d0(&DAT_1808fd150);
      if (iVar9 != 0) goto LAB_1802d0504;
      if (DAT_1808fd19c == 0x7fffffff) {
        DAT_1808fd19c = 0x7ffffffe;
        goto LAB_1802d04f9;
      }
      if (DAT_1808fd148 == lVar12) {
        if ((DAT_180c6eb20 == 0) && (DAT_180c6eb28 <= UVar11)) goto LAB_1802cf71b;
      }
      else {
        DAT_1808fd138 = 1000;
LAB_1802cf71b:
        lVar13 = -1;
        do {
          local_768._8_8_ = lVar13 + 1;
          pcVar19 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar13;
          lVar13 = local_768._8_8_;
        } while (*pcVar19 != '\0');
        local_768._0_8_ = &DAT_1808267c0;
        local_798 = (float *)0x1807d40a8;
        uStack_790 = (undefined8 *)0x23;
        DAT_180c6eb20 = FUN_1800e5d20(&local_798,local_768);
        DAT_1808fd148 = lVar12;
        DAT_180c6eb28 = 0xffffffffffffffff;
        if (DAT_180c6eb20 == 0) {
          DAT_180c6eb28 = DAT_1808fd138 + UVar11;
          if (DAT_1808fd138 < 60000) {
            DAT_1808fd138 = DAT_1808fd138 * 2;
          }
          else {
            DAT_1808fd138 = 60000;
          }
        }
        else {
          DAT_1808fd138 = 1000;
        }
      }
      lVar23 = DAT_180c6eb20;
      FUN_1805f68fc(&DAT_1808fd150);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar13 = DAT_1808fd140;
  lVar12 = DAT_1808da460;
  if ((DAT_1808fd140 != DAT_1808da460) || (lVar15 = DAT_180c6eb10, DAT_180c6eb10 == 0)) {
    UVar11 = GetTickCount64();
    if ((lVar13 == lVar12) && (UVar11 < DAT_180c6eb18)) {
      lVar15 = 0;
    }
    else {
      local_6e8 = &DAT_1808fd0e0;
      iVar9 = FUN_1805f68d0(&DAT_1808fd0e0);
      if (iVar9 != 0) goto LAB_1802d0504;
      if (DAT_1808fd12c == 0x7fffffff) {
        DAT_1808fd12c = 0x7ffffffe;
        goto LAB_1802d04f9;
      }
      if (DAT_1808fd140 == lVar12) {
        if ((DAT_180c6eb10 == 0) && (DAT_180c6eb18 <= UVar11)) goto LAB_1802cf890;
      }
      else {
        DAT_1808fd130 = 1000;
LAB_1802cf890:
        lVar13 = -1;
        do {
          local_768._8_8_ = lVar13 + 1;
          lVar15 = lVar13 + 1;
          lVar13 = local_768._8_8_;
        } while ("client.dll:>E8????????0F28D8895C2420"[lVar15] != '\0');
        local_768._0_8_ = "client.dll:>E8????????0F28D8895C2420";
        local_798 = (float *)0x1807d4190;
        uStack_790 = (undefined8 *)0x1e;
        DAT_180c6eb10 = FUN_1800e5d20(&local_798,local_768);
        DAT_1808fd140 = lVar12;
        DAT_180c6eb18 = 0xffffffffffffffff;
        if (DAT_180c6eb10 == 0) {
          DAT_180c6eb18 = DAT_1808fd130 + UVar11;
          uVar22 = DAT_1808fd130 * 2;
          if (59999 < DAT_1808fd130) {
            uVar22 = 60000;
          }
        }
        DAT_1808fd130 = uVar22;
      }
      lVar15 = DAT_180c6eb10;
      FUN_1805f68fc(&DAT_1808fd0e0);
    }
  }
  if ((lVar23 == 0) || (lVar15 == 0)) {
    pcVar19 = "bullet_event_reader";
LAB_1802d046f:
    FUN_1802cc7a0(pcVar19);
  }
  local_700 = 0;
  local_6f8 = "userid";
  cVar4 = FUN_1804513c0(lVar23,1,2);
  if (cVar4 == '\0') {
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  FUN_180252bd0(local_768,lVar23,param_2,&local_700);
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  if (local_768[8] == '\0') {
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_798 = _DAT_180bb8890;
  uStack_790 = puRam0000000180bb8898;
  uStack_788 = uRam0000000180bb88a0;
  puStack_780 = puRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((float *)local_768._0_8_ != local_798) {
  }
  cVar4 = FUN_1804513c0(lVar15,1,2);
  if (cVar4 == '\0') {
    fVar38 = 0.0;
    cVar4 = '\0';
  }
  else {
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    fVar38 = 0.0;
    local_7e8 = (undefined **)((ulonglong)local_7e8 & 0xffffffff00000000);
    FUN_1802e7770(&local_7b0,lVar15,param_2,&DAT_1806bdfa4);
    lVar12 = FUN_18017ea70();
    cVar4 = local_7ac;
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
  }
  cVar5 = FUN_1804513c0(lVar15,1,2);
  if (cVar5 == '\0') {
    cVar5 = '\0';
  }
  else {
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,fVar38);
    FUN_1802e7770(&local_7a8,lVar15,param_2,&DAT_1806bdfa8);
    lVar12 = FUN_18017ea70();
    cVar5 = local_7a4;
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
  }
  cVar6 = FUN_1804513c0(lVar15,1,2);
  cVar7 = '\0';
  if (cVar6 != '\0') {
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,fVar38);
    FUN_1802e7770(&local_6e8,lVar15,param_2,&DAT_1806bdfb4);
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    cVar7 = local_6e8._4_1_;
  }
  if (((cVar4 == '\0') || (cVar5 == '\0')) || (cVar7 == '\0')) {
    pcVar19 = "bullet_event_position";
    goto LAB_1802d046f;
  }
  local_758 = local_7b0;
  fStack_754 = local_7a8;
  local_750 = (float)local_6e8;
  fVar25 = local_7a8;
  fVar28 = (float)local_6e8;
  fVar40 = local_7b0;
  sVar8 = thunk_FUN_180624430(local_7b0);
  lVar12 = DAT_180bb8958;
  if (0 < sVar8) {
  }
  if (((uint)fVar25 & 0x7f800000) == 0x7f800000) {
  }
  if (((uint)fVar28 & 0x7f800000) == 0x7f800000) {
  }
  if (DAT_180bb8958 == 0) {
LAB_1802cfc28:
    auVar37 = ZEXT464(0xbf800000);
  }
  else {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if (lVar12 == 0) {
      bVar1 = false;
      puVar24 = local_6e8;
    }
    else {
      local_7c0 = (undefined *)0x0;
      cVar4 = FUN_1804514f0(&local_7c0,lVar12,8);
      if (cVar4 == '\0') {
        bVar1 = false;
        puVar24 = local_6e8;
      }
      else {
        bVar1 = true;
        puVar24 = local_7c0;
      }
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    puVar14 = (undefined *)0x0;
    if (bVar1) {
      puVar14 = puVar24;
    }
    if (puVar14 == (undefined *)0x0) goto LAB_1802cfc28;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    uVar20 = 0;
    if (puVar14 + 0x30 != (undefined *)0x0) {
      local_7c8[0] = fVar38;
      cVar4 = FUN_1804514f0(local_7c8,puVar14 + 0x30,4);
      if (cVar4 == '\0') {
        uVar20 = 0;
      }
      else {
        uVar20 = 1;
      }
    }
    auVar37 = ZEXT464((uint)local_7c8[0]);
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    auVar33 = vpcmpeqd_avx(ZEXT416(uVar20),SUB6416(ZEXT464(0),0));
    auVar33 = vblendvps_avx(auVar37._0_16_,SUB6416(ZEXT464(0xbf800000),0),auVar33);
    auVar37 = ZEXT1664(auVar33);
  }
  local_6f0[0] = auVar37._0_4_;
  sVar8 = thunk_FUN_180624430(auVar37._0_8_);
  if (0 < sVar8) {
  }
  if (auVar37._0_4_ < fVar38) {
  }
  local_768 = ZEXT816(0x180cc9b08);
  iVar9 = FUN_1805f68d0(&DAT_180cc9b08);
  fVar38 = local_750;
  lVar13 = DAT_180cc9a10;
  lVar12 = DAT_180cc9a08;
  auVar37._8_56_ = extraout_var;
  auVar37._0_8_ = extraout_XMM0_Qa;
  if (iVar9 != 0) {
LAB_1802d0504:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
LAB_1802d04f9:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_768[8] = 1;
  local_7c8[0] = -3.4028235e+38;
  auVar42 = ZEXT464((uint)local_6f0[0]);
  uVar22 = (ulonglong)(uint)local_6f0[0];
  fVar36 = 1.0;
  lVar23 = DAT_180cc9a08;
  pfVar32 = extraout_XMM0_Qa;
  if (DAT_180cc9a08 == DAT_180cc9a10) {
LAB_1802d0088:
    fVar28 = local_7a8;
    fVar25 = (float)local_6e8;
    fVar40 = local_7b0;
  }
  else {
    do {
      if (((*(char *)(lVar23 + 0x50) != '\0') && (*(char *)(lVar23 + 0x13a9) == '\0')) &&
         ((*(char *)(lVar23 + 0x13a0) != '\0' && (*(char *)(lVar23 + 0x13a1) != '\0')))) {
        fVar27 = auVar42._0_4_ - *(float *)(lVar23 + 0x68);
        auVar37 = ZEXT464((uint)fVar27);
        if ((-0.05 <= fVar27) && (fVar27 <= fVar36)) {
          lVar15 = 0x13ac;
          if (*(char *)(lVar23 + 0x13b8) == '\0') {
            lVar15 = 0x44;
          }
          local_798 = *(float **)(lVar15 + lVar23);
          auVar33._8_8_ = 0;
          auVar33._0_8_ = local_798;
          fVar30 = fVar28 - *(float *)(lVar15 + 8 + lVar23);
          auVar33 = vshufps_avx(auVar33,auVar33,0x55);
          fVar31 = fVar25 - auVar33._0_4_;
          fVar40 = fVar40 - SUB84(local_798,0);
          fVar27 = fVar31 * fVar31;
          if (fVar36 <= fVar40 * fVar40 + fVar27 + fVar30 * fVar30) {
            fVar28 = *(float *)(lVar23 + 0x28) * 0.017453292;
            auVar37 = ZEXT464((uint)fVar28);
            auVar39 = ZEXT464((uint)(*(float *)(lVar23 + 0x2c) * 0.017453292));
            fVar25 = (float)FUN_180637540(fVar28);
            fVar26 = (float)FUN_180638e00(auVar37._0_8_);
            fVar26 = -fVar26;
            fVar27 = (float)FUN_180637540(auVar39._0_8_);
            fVar27 = fVar27 * fVar25;
            fVar28 = (float)FUN_180638e00(auVar39._0_8_);
            fVar28 = fVar28 * fVar25;
            local_7c0 = (undefined *)CONCAT44(fVar31,fVar40);
            local_7b8 = fVar30;
            FUN_180450e30(&local_7c0);
            uVar22 = auVar42._0_8_;
            fVar27 = fVar27 * (float)local_7c0;
            if (0.9 < fVar28 * local_7c0._4_4_ + fVar27 + fVar26 * local_7b8) goto LAB_1802cffff;
            fVar25 = local_7a8;
            fVar28 = (float)local_6e8;
          }
          auVar37 = ZEXT464((uint)fVar27);
          fVar40 = local_7b0;
        }
      }
      pfVar32 = auVar37._0_8_;
      uVar22 = auVar42._0_8_;
      lVar23 = lVar23 + 0x13d0;
    } while (lVar23 != lVar13);
    lVar23 = 0;
    if (lVar12 == lVar13) goto LAB_1802d0088;
    do {
      if (*(char *)(lVar12 + 0x50) != '\0') {
        if (*(char *)(lVar12 + 0x13a9) != '\0') {
          if (*(char *)(lVar12 + 0x13a0) != '\0') {
            if (*(char *)(lVar12 + 0x13a1) != '\0') {
              fVar27 = auVar42._0_4_ - *(float *)(lVar12 + 0x68);
              auVar37 = ZEXT464(0xbd4ccccd);
              if (-0.05 <= fVar27) {
                if (fVar27 <= fVar36) {
                  lVar15 = 0x13ac;
                  if (*(char *)(lVar12 + 0x13b8) == '\0') {
                    lVar15 = 0x44;
                  }
                  local_7c0 = *(undefined **)(lVar15 + lVar12);
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = local_7c0;
                  fVar28 = fVar28 - *(float *)(lVar15 + 8 + lVar12);
                  auVar33 = vshufps_avx(auVar34,auVar34,0x55);
                  fVar25 = fVar25 - auVar33._0_4_;
                  fVar40 = fVar40 - SUB84(local_7c0,0);
                  auVar37 = ZEXT464((uint)(fVar25 * fVar25));
                  if (fVar36 <= fVar40 * fVar40 + fVar25 * fVar25 + fVar28 * fVar28) {
                    fVar30 = *(float *)(lVar12 + 0x28) * 0.017453292;
                    auVar37 = ZEXT464((uint)fVar30);
                    auVar39 = ZEXT464((uint)(*(float *)(lVar12 + 0x2c) * 0.017453292));
                    fVar26 = (float)FUN_180637540(fVar30);
                    fVar29 = (float)FUN_180638e00(auVar37._0_8_);
                    fVar29 = -fVar29;
                    fVar30 = (float)FUN_180637540(auVar39._0_8_);
                    fVar30 = fVar30 * fVar26;
                    local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,fVar30);
                    fVar31 = (float)FUN_180638e00(auVar39._0_8_);
                    fVar31 = fVar31 * fVar26;
                    local_748 = fVar40;
                    local_744 = fVar25;
                    local_740 = fVar28;
                    FUN_180450e30(&local_748);
                    fVar30 = (fVar31 * local_744 + fVar30 * local_748 + fVar29 * local_740) * 4.0;
                    auVar37 = ZEXT464((uint)fVar30);
                    fVar30 = fVar30 - ABS(fVar27);
                    if (local_7c8[0] < fVar30) {
                      local_798 = (float *)CONCAT44(fVar25,fVar40);
                      uStack_790 = (undefined8 *)CONCAT44(uStack_790._4_4_,fVar28);
                      FUN_180450e30(&local_798);
                      auVar37 = ZEXT464((uint)((float)local_7c0 * (float)local_798));
                      if (0.9 < fVar31 * local_798._4_4_ + (float)local_7c0 * (float)local_798 +
                                fVar29 * (float)uStack_790) {
                        lVar23 = lVar12;
                        local_7c8[0] = fVar30;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pfVar32 = auVar37._0_8_;
      uVar22 = auVar42._0_8_;
      lVar12 = lVar12 + 0x13d0;
      fVar25 = local_7a8;
      fVar28 = (float)local_6e8;
      fVar40 = local_7b0;
    } while (lVar12 != lVar13);
    if (lVar23 == 0) goto LAB_1802d0088;
LAB_1802cffff:
    local_798 = *(float **)(lVar23 + 0x70);
    auVar35._8_8_ = 0;
    auVar35._0_8_ = local_798;
    fVar28 = (float)local_6e8 - *(float *)(lVar23 + 0x78);
    auVar33 = vshufps_avx(auVar35,auVar35,0x55);
    fVar25 = local_7a8 - auVar33._0_4_;
    fVar40 = local_7b0 - SUB84(local_798,0);
    fVar36 = fVar40 * fVar40 + fVar25 * fVar25 + fVar28 * fVar28;
    fVar28 = local_7a8;
    fVar25 = (float)local_6e8;
    fVar40 = local_7b0;
    if ((*(char *)(lVar23 + 0x13a9) == '\0') ||
       (pfVar32 = (float *)(ulonglong)(uint)*(float *)(lVar23 + 0x60),
       fVar36 < *(float *)(lVar23 + 0x60))) {
      pfVar41 = (float *)CONCAT44(fStack_754,local_758);
      *(float **)(lVar23 + 0x54) = pfVar41;
      *(float *)(lVar23 + 0x5c) = fVar38;
      *(float *)(lVar23 + 0x60) = fVar36;
      pfVar32 = (float *)(ulonglong)(uint)local_6f0[0];
      *(float *)(lVar23 + 0x6c) = local_6f0[0];
      *(undefined1 *)(lVar23 + 0x13a9) = 1;
      uVar22 = (ulonglong)(uint)local_6f0[0];
      goto LAB_1802d009e;
    }
  }
  pfVar41 = (float *)CONCAT44(fStack_754,local_758);
LAB_1802d009e:
  if ((DAT_180b0c5c0 != '\0') && (DAT_180b0c628 != 1)) {
    uStack_790 = (undefined8 *)CONCAT44((int)uVar22,fVar38);
    local_798 = pfVar41;
    uStack_788 = GetTickCount64();
    puVar2 = DAT_180cc9a28;
    if (DAT_180cc9a28 == DAT_180cc9a30) {
      pfVar32 = (float *)FUN_180231380(&DAT_180cc9a20,DAT_180cc9a28,&local_798);
    }
    else {
      *DAT_180cc9a28 = (ulonglong)local_798;
      puVar2[1] = (ulonglong)uStack_790;
      puVar2[2] = uStack_788;
      DAT_180cc9a28 = DAT_180cc9a28 + 3;
      pfVar32 = local_798;
    }
    if (0x40 < (ulonglong)(((longlong)DAT_180cc9a28 - DAT_180cc9a20) / 0x18)) {
      pfVar32 = (float *)FUN_18063aed0(DAT_180cc9a20,DAT_180cc9a20 + 0x18,
                                       (longlong)DAT_180cc9a28 - (DAT_180cc9a20 + 0x18));
      DAT_180cc9a28 = DAT_180cc9a28 + -3;
    }
    uVar22 = (ulonglong)(uint)local_6f0[0];
  }
  if (DAT_180b0c6c8 != '\0') {
    FUN_1802d1e00(pfVar32,&local_758,uVar22);
  }
  if ((DAT_180b0c5c0 != '\0') && (DAT_180b0c628 - 1U < 2)) {
    local_6e8 = (undefined *)GetTickCount64();
    local_798 = local_6f0;
    uStack_790 = &local_6e8;
    FUN_1802e77b0(&DAT_180cc9a50,&local_798);
    puVar24 = local_6e8;
    puVar3 = DAT_180cc9a58;
    puVar2 = DAT_180cc9a50;
    iVar9 = 0;
    fVar36 = local_6f0[0];
    if (DAT_180cc9a50 != DAT_180cc9a58) {
      fVar27 = 0.001;
      auVar37 = ZEXT864(0);
      puVar21 = DAT_180cc9a50;
      do {
        puVar14 = (undefined *)puVar21[3];
        if (puVar14 == (undefined *)0x0) {
          auVar33 = vmaxss_avx(ZEXT416((uint)(fVar36 - *(float *)((longlong)puVar21 + 0xc))),
                               auVar37._0_16_);
          uVar22 = auVar33._0_8_;
        }
        else {
          if (puVar24 < puVar14) {
            uVar22 = 0;
          }
          else {
            uVar22 = (longlong)puVar24 - (longlong)puVar14;
          }
          if ((longlong)uVar22 < 0) {
            uVar22 = (ulonglong)(uint)((float)uVar22 * fVar27);
          }
          else {
            uVar22 = (ulonglong)(uint)((float)(longlong)uVar22 * fVar27);
          }
        }
        local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,0xffffffff);
        iVar10 = FUN_1802c95e0(*(undefined4 *)((longlong)puVar21 + 0x14),(int)puVar21[4],uVar22,
                               (int)puVar21[2]);
        iVar9 = iVar9 + iVar10;
        puVar21 = puVar21 + 5;
      } while (puVar21 != puVar3);
    }
    local_73c[1] = 0x60;
    local_73c[0] = 8;
    piVar18 = local_73c;
    if (7 < DAT_180b0c638) {
      piVar18 = &DAT_180b0c638;
    }
    piVar16 = local_73c + 1;
    if (DAT_180b0c638 < 0x61) {
      piVar16 = piVar18;
    }
    iVar10 = *piVar16;
    if (0x200 - iVar9 < *piVar16) {
      iVar10 = 0x200 - iVar9;
    }
    if ((7 < iVar10) && ((ulonglong)(((longlong)puVar3 - (longlong)puVar2) / 0x28) < 0x80)) {
      local_798 = pfVar41;
      uStack_790 = (undefined8 *)CONCAT44(fVar36,fVar38);
      local_7c8[0] = 2.0;
      local_7c0 = (undefined *)CONCAT44(local_7c0._4_4_,0x3dcccccd);
      pfVar32 = (float *)&local_7c0;
      if (0.1 <= DAT_180b0c63c) {
        pfVar32 = &DAT_180b0c63c;
      }
      pfVar17 = local_7c8;
      if (DAT_180b0c63c <= 2.0) {
        pfVar17 = pfVar32;
      }
      DAT_180cc9b90 = DAT_180cc9b90 + 1;
      uStack_788 = CONCAT44(DAT_180cc9b90,*pfVar17);
      puStack_780 = puVar24;
      local_778 = iVar10;
      if (puVar3 == DAT_180cc9a60) {
        FUN_1802ea4d0(&DAT_180cc9a50,puVar3,&local_798);
      }
      else {
        *puVar3 = (ulonglong)pfVar41;
        puVar3[1] = (ulonglong)uStack_790;
        puVar3[2] = uStack_788;
        puVar3[3] = (ulonglong)puVar24;
        puVar3[4] = CONCAT44(uStack_774,iVar10);
        DAT_180cc9a58 = DAT_180cc9a58 + 5;
      }
    }
    LOCK();
    iVar9 = DAT_180bb8abc + 1;
    UNLOCK();
    uVar20 = DAT_180bb8abc + 1;
    DAT_180bb8abc = iVar9;
    if ((uVar20 == 1) || ((uVar20 & 0x3f) == 0)) {
      FUN_18063ab10(local_6d8,0,0x600);
      local_7d0 = (double)fVar25;
      local_7d8 = (double)fVar28;
      local_7e0 = (char *)(double)fVar40;
      local_7e8 = (undefined **)CONCAT44(local_7e8._4_4_,uVar20);
      FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                    "count=%u position=(%.2f,%.2f,%.2f) source=bullet_impact");
      local_7e8 = &PTR_180700558;
      if (local_6d8[0] != '\0') {
        local_7e8 = (undefined **)&DAT_1806bcfc0;
      }
      local_7e0 = local_6d8;
      FUN_1800f6900(0,local_7e0,"Impacts","SPARK_IMPACT_CONFIRMED");
    }
  }
  FUN_1805f68fc(&DAT_180cc9b08);
}



