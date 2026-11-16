// FUN_180239730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180239730 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180239730(undefined8 param_1,longlong param_2,undefined8 param_3,float *param_4,
                  float *param_5,longlong param_6,longlong param_7)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined8 *puVar8;
  int *piVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  int *piVar13;
  float *pfVar14;
  ULONGLONG UVar15;
  longlong lVar16;
  int *piVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 extraout_var [56];
  undefined1 auVar24 [64];
  undefined1 extraout_var_00 [56];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auStack_858 [32];
  undefined **local_838;
  char *local_830;
  double local_828;
  double local_820;
  double local_818;
  double local_810;
  double local_808;
  float local_7f8;
  float local_7f4 [3];
  undefined8 local_7e8;
  undefined8 local_7e0;
  float local_7d8 [2];
  float local_7d0 [2];
  undefined8 local_7c8;
  undefined4 local_7c0;
  int local_7b8 [4];
  int local_7a8;
  int local_7a4;
  int local_7a0 [2];
  int local_798;
  int local_794;
  int local_790 [2];
  int local_788;
  float local_784;
  int local_780 [6];
  int local_768;
  float local_764;
  float local_760 [2];
  float local_758;
  undefined4 local_754;
  int local_750 [2];
  undefined8 local_748;
  ulonglong uStack_710;
  undefined8 local_708;
  undefined4 uStack_704;
  undefined4 local_700 [2];
  longlong local_6f8;
  float local_6f0;
  float local_6ec;
  char local_6e8;
  char local_6d8 [1536];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_858;
  local_7e8 = (undefined4 *)CONCAT44(DAT_180b8e708,DAT_180b8e704);
  local_7e0 = CONCAT44(local_7e0._4_4_,DAT_180b8e70c);
  fVar31 = 100.0;
  if (*(char *)(param_6 + 0xa8) == '\0') {
    if (*(char *)(param_6 + 0x118) == '\0') goto LAB_180239925;
    iVar7 = DAT_180c6429c;
    if (DAT_180c6429c == 0) {
      UVar15 = GetTickCount64();
      if (DAT_180c642a0 <= UVar15) {
        local_7c8 = &DAT_1808ed530;
        iVar7 = FUN_1805f68d0(&DAT_1808ed530);
        if (iVar7 != 0) goto LAB_18023a3ff;
        if (DAT_1808ed57c == 0x7fffffff) {
          DAT_1808ed57c = 0x7ffffffe;
          goto LAB_18023a3d4;
        }
        if ((DAT_180c6429c == 0) && (DAT_180c642a0 <= UVar15)) {
          DAT_180c6429c = FUN_1804174b0("C_CSPlayerPawn",0xfe518c17);
          if (DAT_180c6429c == 0) {
            DAT_180c642a0 = UVar15 + 1000;
          }
          else {
            DAT_180c642a0 = 0xffffffffffffffff;
          }
        }
        iVar7 = DAT_180c6429c;
        FUN_1805f68fc(&DAT_1808ed530);
        if (iVar7 != 0) goto LAB_180239c74;
      }
      fVar22 = 0.0;
    }
    else {
LAB_180239c74:
      lVar16 = *(longlong *)(param_7 + 8) + (longlong)iVar7;
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if (lVar16 == 0) {
        bVar4 = false;
        fVar21 = local_7f4[0];
      }
      else {
        local_7f8 = 0.0;
        cVar5 = FUN_1804514f0(&local_7f8,lVar16);
        if (cVar5 == '\0') {
          bVar4 = false;
          fVar21 = local_7f4[0];
        }
        else {
          bVar4 = true;
          fVar21 = local_7f8;
        }
      }
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      fVar22 = 0.0;
      if (bVar4) {
        fVar22 = fVar21;
      }
    }
    local_780[1] = 10;
    local_780[0] = 1;
    iVar7 = *(int *)(param_6 + 0x1a0);
    piVar17 = local_780;
    if (0 < iVar7) {
      piVar17 = (int *)(param_6 + 0x1a0);
    }
    piVar13 = local_780 + 1;
    if (iVar7 < 0xb) {
      piVar13 = piVar17;
    }
    if ((int)fVar22 < *piVar13) goto LAB_180239925;
    fVar21 = *param_5;
    sVar6 = thunk_FUN_180624430(fVar21);
    if (0 < sVar6) goto LAB_180239925;
    fVar22 = param_5[1];
    sVar6 = thunk_FUN_180624430(fVar22);
    if ((0 < sVar6) || (sVar6 = thunk_FUN_180624430(param_5[2]), 0 < sVar6)) goto LAB_180239925;
    local_7f8 = 2.10195e-43;
    local_7f4[0] = 0.0;
    fVar25 = *(float *)(param_6 + 0x180);
    fVar20 = (float)FUN_18023fb40(&DAT_180b8e6e0,*(undefined4 *)(param_6 + 0x184),
                                  *(undefined4 *)(param_6 + 0x188));
    pfVar11 = local_7f4;
    if (-1 < (int)fVar25) {
      pfVar11 = (float *)(param_6 + 0x180);
    }
    pfVar14 = &local_7f8;
    if ((int)fVar25 < 0x97) {
      pfVar14 = pfVar11;
    }
    fVar20 = (fVar20 * (float)(int)*pfVar14) / fVar31;
    local_7f8 = 2.10195e-43;
    local_7f4[0] = 0.0;
    fVar25 = *(float *)(param_6 + 0x194);
    pfVar11 = local_7f4;
    if (-1 < (int)fVar25) {
      pfVar11 = (float *)(param_6 + 0x194);
    }
    pfVar14 = &local_7f8;
    if ((int)fVar25 < 0x97) {
      pfVar14 = pfVar11;
    }
    fVar25 = (float)local_7e8 - ((float)(int)*pfVar14 * fVar21 * fVar20) / fVar31;
    local_7f8 = 2.10195e-43;
    local_7f4[0] = 0.0;
    fVar21 = *(float *)(param_6 + 0x198);
    pfVar11 = local_7f4;
    if (-1 < (int)fVar21) {
      pfVar11 = (float *)(param_6 + 0x198);
    }
    pfVar14 = &local_7f8;
    if ((int)fVar21 < 0x97) {
      pfVar14 = pfVar11;
    }
    fVar21 = local_7e8._4_4_ - ((float)(int)*pfVar14 * fVar22 * fVar20) / fVar31;
  }
  else {
    fVar21 = *param_5;
    sVar6 = thunk_FUN_180624430(fVar21);
    if (sVar6 < 1) {
      fVar22 = param_5[1];
      sVar6 = thunk_FUN_180624430(fVar22);
      if (sVar6 < 1) {
        fVar25 = param_5[2];
        sVar6 = thunk_FUN_180624430(fVar25);
        if ((sVar6 < 1) && (0.0001 <= fVar22 * fVar22 + fVar21 * fVar21 + fVar25 * fVar25)) {
          fVar20 = (float)FUN_18023fb40(&DAT_180b8e6e0,*(undefined4 *)(param_6 + 0x110),
                                        *(undefined4 *)(param_6 + 0x114));
          local_7f4[0] = 2.10195e-43;
          local_7f8 = 0.0;
          fVar25 = *(float *)(param_6 + 0x18c);
          pfVar11 = &local_7f8;
          if (-1 < (int)fVar25) {
            pfVar11 = (float *)(param_6 + 0x18c);
          }
          pfVar14 = local_7f4;
          if ((int)fVar25 < 0x97) {
            pfVar14 = pfVar11;
          }
          fVar25 = (float)local_7e8 - ((float)(int)*pfVar14 / fVar31) * fVar21 * fVar20;
          local_7e8 = (undefined4 *)CONCAT44(local_7e8._4_4_,fVar25);
          local_7f8 = 2.10195e-43;
          local_7f4[0] = 0.0;
          fVar21 = *(float *)(param_6 + 400);
          pfVar11 = local_7f4;
          if (-1 < (int)fVar21) {
            pfVar11 = (float *)(param_6 + 400);
          }
          pfVar14 = &local_7f8;
          if ((int)fVar21 < 0x97) {
            pfVar14 = pfVar11;
          }
          local_7e8 = (undefined4 *)
                      CONCAT44(local_7e8._4_4_ - ((float)(int)*pfVar14 / fVar31) * fVar22 * fVar20,
                               fVar25);
          FUN_180451150(&local_7e8);
        }
      }
    }
LAB_180239925:
    fVar21 = local_7e8._4_4_;
    fVar25 = (float)local_7e8;
  }
  auVar32 = ZEXT464((uint)(DAT_180b8e704 - fVar25));
  auVar24._0_8_ = FUN_180615070(DAT_180b8e708 - fVar21,0x43b40000);
  auVar24._8_56_ = extraout_var;
  auVar33 = ZEXT1664(auVar24._0_16_);
  local_7c8._0_4_ = auVar32._0_4_;
  local_7c8._4_4_ = (int)auVar24._0_8_;
  auVar24 = ZEXT864(0);
  local_7c0 = 0;
  puVar8 = &DAT_180b8e72c;
  if (DAT_180b8e738 == '\0') {
    puVar8 = &local_7c8;
  }
  local_748 = *puVar8;
  iVar7 = FUN_1805f68d0(&DAT_1808edc30);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808edc7c == 0x7fffffff) {
    DAT_1808edc7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  fVar21 = DAT_1808edc80;
  fVar22 = DAT_1808edc84;
  FUN_1805f68fc(&DAT_1808edc30);
  auVar34 = ZEXT464((uint)(((DAT_180b8e704 - (float)local_748) - *param_4) - fVar21));
  uVar23 = FUN_180615070(((DAT_180b8e708 - local_748._4_4_) - param_4[1]) - fVar22,0x43b40000);
  local_7c8 = (undefined *)CONCAT44(local_7c8._4_4_,(int)uVar23);
  fVar21 = (float)FUN_180636420(auVar34._0_8_,uVar23);
  auVar27 = auVar24._0_16_;
  if (param_2 == 0) {
LAB_18023a311:
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_710;
    auVar26 = vinsertps_avx(auVar2 << 0x40,auVar27,0x20);
    _DAT_180b8e770 = vinsertps_avx(auVar26,auVar27,0x30);
    _DAT_180b8e780 = CONCAT44(uStack_704,auVar27._0_4_);
    _DAT_180b8e768 = 0;
    uRam0000000180b8e760 = 0;
    uRam0000000180b8e758 = 0;
    _DAT_180b8e750 = 0xffffffffffffffff;
  }
  sVar6 = thunk_FUN_180624430();
  auVar27 = auVar24._0_16_;
  if (0 < sVar6) goto LAB_18023a311;
  auVar29._0_8_ =
       FUN_180233fd0(*(undefined4 *)(param_6 + 0x68),*(undefined4 *)(param_6 + 0x70),DAT_180b8f7c0);
  auVar29._8_56_ = extraout_var_00;
  local_754 = (int)auVar29._0_8_;
  local_760[0] = DAT_180b8f7c4;
  iVar7 = *(int *)(param_6 + 0x7c);
  local_780[4] = iVar7;
  local_7d0[0] = *(float *)(param_6 + 0x88);
  local_7a0[0] = *(int *)(param_6 + 0x84);
  local_790[0] = *(int *)(param_6 + 0x80);
  local_7b8[2] = *(int *)(param_6 + 0x6c);
  local_750[0] = *(int *)(param_6 + 0x78);
  iVar1 = *(int *)(param_6 + 0x74);
  local_7b8[0] = 100;
  local_780[2] = 1;
  piVar17 = local_780 + 2;
  if (0 < local_750[0]) {
    piVar17 = local_750;
  }
  piVar13 = local_7b8;
  if (local_750[0] < 0x65) {
    piVar13 = piVar17;
  }
  auVar27._0_4_ = (float)*piVar13 / fVar31;
  auVar27._4_12_ = SUB1612(ZEXT816(0),4);
  auVar28 = ZEXT1664(auVar27);
  local_7a8 = 0x1e;
  local_7b8[1] = 1;
  piVar17 = local_7b8 + 1;
  if (0 < local_7b8[2]) {
    piVar17 = local_7b8 + 2;
  }
  piVar13 = &local_7a8;
  if (local_7b8[2] < 0x1f) {
    piVar13 = piVar17;
  }
  auVar26._0_4_ = (float)*piVar13;
  auVar26._4_12_ = SUB1612(ZEXT816(0),4);
  fVar25 = auVar27._0_4_ / auVar26._0_4_;
  auVar30 = ZEXT464(0x3f800000);
  fVar22 = DAT_180b8f7c4;
  if (iVar1 == 1) {
    local_788 = 100;
    local_794 = iVar1;
    local_798 = 500;
    local_7a4 = iVar1;
    piVar17 = &local_7a4;
    if (0 < local_7a0[0]) {
      piVar17 = local_7a0;
    }
    piVar13 = &local_798;
    if (local_7a0[0] < 0x1f5) {
      piVar13 = piVar17;
    }
    auVar2 = vmaxss_avx(ZEXT416((uint)(DAT_180cc9364 - DAT_180b8f7c8)),auVar24._0_16_);
    piVar17 = &local_794;
    if (0 < local_790[0]) {
      piVar17 = local_790;
    }
    piVar9 = &local_788;
    if (local_790[0] < 0x65) {
      piVar9 = piVar17;
    }
    auVar3 = vminss_avx(ZEXT416((uint)((float)*piVar9 / fVar31)),auVar27);
    auVar27 = vminss_avx(ZEXT416((uint)(((float)*piVar13 * auVar2._0_4_) / fVar31 + auVar3._0_4_)),
                         auVar27);
    fVar25 = auVar27._0_4_ / auVar26._0_4_;
  }
  else if (iVar1 == 2) {
    local_7e8 = (undefined4 *)CONCAT44(local_7e8._4_4_,0x1e);
    local_7d8[0] = 1.4013e-45;
    local_784 = 1.0;
    local_7f4[0] = auVar24._0_4_;
    auVar27 = vmaxss_avx(auVar29._0_16_,ZEXT416(0x3dcccccd));
    local_7f8 = fVar21 / auVar27._0_4_;
    pfVar11 = local_7f4;
    if (auVar24._0_4_ <= local_7f8) {
      pfVar11 = &local_7f8;
    }
    pfVar14 = &local_784;
    if (local_7f8 <= 1.0) {
      pfVar14 = pfVar11;
    }
    pfVar11 = local_7d8;
    if (0 < (int)local_7d0[0]) {
      pfVar11 = local_7d0;
    }
    pfVar12 = (float *)&local_7e8;
    if ((int)local_7d0[0] < 0x1f) {
      pfVar12 = pfVar11;
    }
    fVar25 = (float)FUN_180242260(auVar26._0_8_,(float)(int)*pfVar12,*pfVar14);
    fVar25 = auVar28._0_4_ / fVar25;
  }
  local_7d8[0] = auVar30._0_4_;
  local_7e8 = (undefined4 *)CONCAT44(local_7e8._4_4_,auVar24._0_4_);
  local_768 = 0x1e;
  local_780[3] = 0;
  local_758 = local_7d8[0];
  local_764 = -1.0;
  piVar17 = local_780 + 3;
  if (-1 < iVar7) {
    piVar17 = local_780 + 4;
  }
  piVar13 = &local_768;
  if (iVar7 < 0x1f) {
    piVar13 = piVar17;
  }
  pfVar11 = &local_764;
  if (-1.0 <= fVar22) {
    pfVar11 = local_760;
  }
  pfVar14 = &local_758;
  if (fVar22 <= local_7d8[0]) {
    pfVar14 = pfVar11;
  }
  local_7d0[0] = (((float)*piVar13 * *pfVar14) / fVar31 + local_7d8[0]) * fVar25;
  pfVar11 = (float *)&local_7e8;
  if (auVar24._0_4_ <= local_7d0[0]) {
    pfVar11 = local_7d0;
  }
  pfVar14 = local_7d8;
  if (local_7d0[0] <= local_7d8[0]) {
    pfVar14 = pfVar11;
  }
  fVar31 = *pfVar14;
  if ((DAT_180cd3b80 & 1) == 0) {
    DAT_180cd3b80 = DAT_180cd3b80 | 1;
    local_700[0] = 0x7c2d100c;
    local_6f8 = 0;
    local_7e8 = local_700;
    local_7e0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_7e8);
    DAT_180cd3b88 = local_6f8;
  }
  lVar10 = DAT_180cd3b88;
  iVar7 = DAT_180c64298;
  if (DAT_180c64298 == 0) {
    UVar15 = GetTickCount64();
    if (DAT_180c64290 <= UVar15) {
      local_7e8 = (undefined4 *)&DAT_1808ed4e0;
      iVar7 = FUN_1805f68d0(&DAT_1808ed4e0);
      if (iVar7 != 0) {
LAB_18023a3ff:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ed52c == 0x7fffffff) {
        DAT_1808ed52c = 0x7ffffffe;
LAB_18023a3d4:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64298 == 0) && (DAT_180c64290 <= UVar15)) {
        DAT_180c64298 = FUN_1804174b0("C_BasePlayerPawn",0x741b343e);
        if (DAT_180c64298 == 0) {
          DAT_180c64290 = UVar15 + 1000;
        }
        else {
          DAT_180c64290 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c64298;
      FUN_1805f68fc(&DAT_1808ed4e0);
      if (iVar7 != 0) goto LAB_18023a07b;
    }
    auVar27 = auVar30._0_16_;
  }
  else {
LAB_18023a07b:
    lVar19 = *(longlong *)(param_7 + 8) + (longlong)iVar7;
    lVar16 = FUN_18017ea70();
    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
    if (lVar19 == 0) {
      auVar29 = ZEXT464((uint)(float)local_7e8);
      uVar18 = 0;
    }
    else {
      local_7f8 = auVar24._0_4_;
      cVar5 = FUN_1804514f0(&local_7f8,lVar19,4);
      if (cVar5 == '\0') {
        uVar18 = 0;
        auVar29 = ZEXT464((uint)(float)local_7e8);
      }
      else {
        auVar29 = ZEXT464((uint)local_7f8);
        uVar18 = 1;
      }
    }
    lVar16 = FUN_18017ea70();
    if (*(int *)(lVar16 + 4) != 0) {
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
    }
    auVar27 = vpcmpeqd_avx(ZEXT416(uVar18),ZEXT416(0));
    auVar27 = vblendvps_avx(auVar29._0_16_,auVar30._0_16_,auVar27);
  }
  auVar29 = ZEXT1664(auVar27);
  sVar6 = thunk_FUN_180624430(auVar27._0_8_);
  fVar22 = auVar29._0_4_;
  if ((0 < sVar6) || (fVar22 <= auVar24._0_4_)) {
    fVar22 = auVar30._0_4_;
  }
  if (lVar10 == 0) {
    fVar22 = 0.0;
  }
  else {
    fVar22 = *(float *)(lVar10 + 0x58) * 0.022 * fVar22;
  }
  UVar15 = GetTickCount64();
  local_808 = (double)CONCAT44(local_808._4_4_,fVar22);
  local_810 = (double)CONCAT44(local_810._4_4_,local_754);
  local_818 = (double)CONCAT44(local_818._4_4_,fVar31);
  local_820 = (double)CONCAT44(local_820._4_4_,(undefined4)local_7c8);
  local_828 = (double)CONCAT44(local_828._4_4_,auVar34._0_4_);
  local_830 = (char *)CONCAT44(local_830._4_4_,DAT_180b8e708);
  local_838 = (undefined **)CONCAT44(local_838._4_4_,DAT_180b8e704);
  FUN_180234730(&DAT_180b8e750,&local_6f0,*(undefined8 *)(param_2 + 8),(double)UVar15 * 0.001);
  if (local_6e8 == '\0') {
  }
  fVar22 = (float)FUN_180615070(local_748._4_4_ - auVar33._0_4_,0x43b40000);
  FUN_1803e1070(local_6f0,(local_6f0 + (float)local_748) - auVar32._0_4_,fVar22 + local_6ec);
  auVar27 = vunpcklps_avx(auVar32._0_16_,auVar33._0_16_);
  DAT_180b8e72c = auVar27._0_8_;
  _DAT_180b8e734 = auVar24._0_4_;
  DAT_180b8e738 = 1;
  if (UVar15 < DAT_180c64278) {
    DAT_180b8e738 = 1;
  }
  DAT_180c64278 = UVar15 + 1000;
  FUN_18063ab10(local_6d8,0,0x600);
  local_808 = (double)(DAT_180b8e77c * 1000.0);
  local_810 = (double)DAT_180b8e76c;
  local_818 = (double)DAT_180b8e768;
  local_820 = (double)local_6ec;
  local_828 = (double)local_6f0;
  local_830 = (char *)(double)fVar31;
  local_838 = (undefined **)(double)fVar21;
  FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                "error_deg=%.4f base_gain=%.4f correction=(%.4f,%.4f) target_rate=(%.3f,%.3f) lag_ms=%.1f"
               );
  local_838 = &PTR_180700558;
  if (local_6d8[0] != '\0') {
    local_838 = (undefined **)&DAT_1806bcfc0;
  }
  local_830 = local_6d8;
  FUN_1800f6900(0);
}



