// FUN_180373980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180373980 */

void FUN_180373980(undefined8 param_1,longlong *param_2,int param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  ULONGLONG UVar7;
  float *pfVar8;
  ULONGLONG UVar9;
  float *pfVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar21 [64];
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  float local_f8 [6];
  float local_e0 [2];
  undefined1 local_d8 [8];
  float fStack_d0;
  undefined4 uStack_cc;
  
  iVar2 = DAT_180cc91c0;
  auVar19 = ZEXT464(0x40a00000);
  auVar20 = ZEXT464(0x3f800000);
  fVar13 = 0.0;
  if ((DAT_180cc9148 != '\0') && (param_3 == 0x2acab07c)) {
    auVar17 = ZEXT464((uint)DAT_180cc91b0);
    fVar16 = 1000.0;
    auVar25 = ZEXT464(DAT_180cc91c4);
    auVar28 = ZEXT464(DAT_180cc91bc);
    auVar21 = ZEXT464(DAT_180cc91b8);
    auVar18 = ZEXT464(DAT_180cc91b4);
    local_f8[2] = 1000.0;
    local_f8[4] = 0.0;
    local_f8[0] = DAT_180cc91b0;
    sVar4 = thunk_FUN_180624430(DAT_180cc91b0);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 4;
      if (fVar13 <= auVar17._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 2;
      if (auVar17._0_4_ <= fVar16) {
        pfVar8 = pfVar10;
      }
      fVar16 = *pfVar8;
    }
    else {
      fVar16 = 0.0;
    }
    fVar14 = 2000.0;
    local_f8[4] = 2000.0;
    local_f8[0] = auVar18._0_4_;
    local_f8[2] = fVar13;
    sVar4 = thunk_FUN_180624430(auVar18._0_8_);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar13 <= auVar18._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar18._0_4_ <= fVar14) {
        pfVar8 = pfVar10;
      }
      auVar17 = ZEXT464((uint)*pfVar8);
    }
    else {
      auVar17 = ZEXT1664(auVar19._0_16_);
    }
    fVar15 = 10000.0;
    fVar14 = 100.0;
    local_f8[4] = 10000.0;
    local_f8[2] = 100.0;
    local_f8[0] = auVar21._0_4_;
    sVar4 = thunk_FUN_180624430(auVar21._0_8_);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar14 <= auVar21._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar21._0_4_ <= fVar15) {
        pfVar8 = pfVar10;
      }
      auVar18 = ZEXT464((uint)*pfVar8);
    }
    else {
      auVar18 = ZEXT464(0x44160000);
    }
    fVar15 = 20000.0;
    local_f8[4] = 20000.0;
    local_f8[0] = auVar28._0_4_;
    local_f8[2] = fVar14;
    sVar4 = thunk_FUN_180624430(auVar28._0_8_);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar14 <= auVar28._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar28._0_4_ <= fVar15) {
        pfVar8 = pfVar10;
      }
      auVar21 = ZEXT464((uint)*pfVar8);
    }
    else {
      auVar21 = ZEXT464(0x44af0000);
    }
    local_f8[4] = auVar20._0_4_;
    local_f8[0] = auVar25._0_4_;
    local_f8[2] = fVar13;
    sVar4 = thunk_FUN_180624430(auVar25._0_8_);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar13 <= auVar25._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar25._0_4_ <= auVar20._0_4_) {
        pfVar8 = pfVar10;
      }
      fVar14 = *pfVar8;
    }
    else {
      fVar14 = 0.65;
    }
    auVar12 = vmaxss_avx(ZEXT416((uint)(fVar14 * 64.0)),auVar20._0_16_);
    auVar12 = vmaxss_avx(ZEXT416((uint)(auVar12._0_4_ + fVar16)),auVar17._0_16_);
    fVar15 = auVar12._0_4_;
    auVar12 = vmaxss_avx(ZEXT416((uint)(fVar15 + auVar20._0_4_)),auVar18._0_16_);
    fVar24 = auVar12._0_4_;
    auVar12 = vmaxss_avx(ZEXT416((uint)(fVar14 * fVar24 + fVar14 * fVar24)),auVar20._0_16_);
    auVar12 = vmaxss_avx(ZEXT416((uint)(auVar12._0_4_ + fVar24)),auVar21._0_16_);
    uVar22 = auVar12._0_4_;
    if (iVar2 == 0) {
      fVar16 = -2.0;
      fVar15 = -1.0;
    }
    else if (iVar2 == 1) {
      fVar24 = 1e+08;
      uVar22 = 0x4cbebe20;
    }
    *(float *)*param_4 = fVar16;
    *(float *)(*param_4 + 4) = fVar15;
    *(float *)(*param_4 + 8) = fVar24;
    *(undefined4 *)(*param_4 + 0xc) = uVar22;
    *param_2 = (longlong)param_4;
  }
  auVar17 = ZEXT464(0x40400000);
  if (DAT_180cc8d58 != '\0') {
    if ((param_3 == -0x321aba7f) || (param_3 == 0xbb9ee08)) {
      auVar18 = ZEXT464((uint)DAT_180cc8dc4);
      fVar16 = 360.0;
      local_f8[4] = 360.0;
      local_f8[0] = DAT_180cc8dc4;
      local_f8[2] = fVar13;
      sVar4 = thunk_FUN_180624430(DAT_180cc8dc4);
      if (sVar4 < 1) {
        pfVar10 = local_f8 + 2;
        if (fVar13 <= auVar18._0_4_) {
          pfVar10 = local_f8;
        }
        pfVar8 = local_f8 + 4;
        if (auVar18._0_4_ <= fVar16) {
          pfVar8 = pfVar10;
        }
        fVar16 = *pfVar8;
      }
      else {
        fVar16 = 0.0;
      }
      auVar21 = ZEXT464((uint)(fVar16 * 0.017453292));
      auVar18._0_8_ = FUN_180638e00(fVar16 * 0.017453292);
      auVar18._8_56_ = extraout_var;
      auVar18 = ZEXT1664(auVar18._0_16_);
      auVar21._0_8_ = FUN_180637540(auVar21._0_8_);
      auVar21._8_56_ = extraout_var_00;
      auVar12 = vinsertps_avx(ZEXT816(0),auVar21._0_16_,0);
      auVar12 = vinsertps_avx(auVar12,auVar18._0_16_,0x10);
    }
    else {
      if (param_3 != -0x14f26682) goto LAB_180373e47;
      auVar18 = ZEXT464((uint)DAT_180cc8dc0);
      local_f8[4] = auVar19._0_4_;
      local_f8[0] = DAT_180cc8dc0;
      local_f8[2] = fVar13;
      sVar4 = thunk_FUN_180624430(DAT_180cc8dc0);
      if (sVar4 < 1) {
        pfVar10 = local_f8 + 2;
        if (fVar13 <= auVar18._0_4_) {
          pfVar10 = local_f8;
        }
        pfVar8 = local_f8 + 4;
        if (auVar18._0_4_ <= auVar19._0_4_) {
          pfVar8 = pfVar10;
        }
        auVar18 = ZEXT464((uint)*pfVar8);
      }
      else {
        auVar18 = ZEXT1664(auVar17._0_16_);
      }
      auVar21 = ZEXT464((uint)DAT_180cc8dcc);
      fVar16 = 0.1;
      local_f8[4] = auVar17._0_4_;
      local_f8[2] = 0.1;
      local_f8[0] = DAT_180cc8dcc;
      sVar4 = thunk_FUN_180624430(DAT_180cc8dcc);
      if (sVar4 < 1) {
        pfVar10 = local_f8 + 2;
        if (fVar16 <= auVar21._0_4_) {
          pfVar10 = local_f8;
        }
        pfVar8 = local_f8 + 4;
        if (auVar21._0_4_ <= auVar17._0_4_) {
          pfVar8 = pfVar10;
        }
        auVar21 = ZEXT464((uint)*pfVar8);
      }
      else {
        auVar21 = ZEXT1664(auVar20._0_16_);
      }
      auVar25 = ZEXT464((uint)DAT_180cc8dc8);
      local_f8[4] = auVar19._0_4_;
      local_f8[0] = DAT_180cc8dc8;
      local_f8[2] = fVar13;
      sVar4 = thunk_FUN_180624430(DAT_180cc8dc8);
      if (sVar4 < 1) {
        pfVar10 = local_f8 + 2;
        if (fVar13 <= auVar25._0_4_) {
          pfVar10 = local_f8;
        }
        pfVar8 = local_f8 + 4;
        if (auVar25._0_4_ <= auVar19._0_4_) {
          pfVar8 = pfVar10;
        }
        fVar16 = *pfVar8;
      }
      else {
        fVar16 = auVar20._0_4_;
      }
      auVar12 = vinsertps_avx(auVar18._0_16_,auVar21._0_16_,0x10);
      auVar12 = vinsertps_avx(auVar12,auVar18._0_16_,0x20);
      auVar12 = vinsertps_avx(auVar12,ZEXT416((uint)(fVar16 * auVar21._0_4_)),0x30);
    }
    *param_4 = auVar12;
    *param_2 = (longlong)param_4;
  }
LAB_180373e47:
  iVar2 = DAT_180cc90c4;
  auVar18 = ZEXT464(0x3f4ccccd);
  if (DAT_180cc9058 == '\0') goto LAB_180374039;
  auVar21 = ZEXT464((uint)DAT_180cc90c0);
  auVar25 = ZEXT464(DAT_180cc90d0);
  auVar26 = ZEXT464(DAT_180cc90cc);
  auVar28 = ZEXT464(DAT_180cc90c8);
  local_f8[4] = auVar19._0_4_;
  local_f8[0] = DAT_180cc90c0;
  local_f8[2] = fVar13;
  sVar4 = thunk_FUN_180624430(DAT_180cc90c0);
  if (sVar4 < 1) {
    pfVar10 = local_f8 + 2;
    if (fVar13 <= auVar21._0_4_) {
      pfVar10 = local_f8;
    }
    pfVar8 = local_f8 + 4;
    if (auVar21._0_4_ <= auVar19._0_4_) {
      pfVar8 = pfVar10;
    }
    auVar21 = ZEXT464((uint)*pfVar8);
  }
  else {
    auVar21 = ZEXT464(0x40000000);
  }
  fVar16 = auVar21._0_4_;
  if (iVar2 == 0) {
    fVar15 = 0.75;
    fVar14 = auVar18._0_4_;
  }
  else if (iVar2 == 1) {
    fVar14 = 1.6;
    fVar15 = auVar20._0_4_;
  }
  else {
    local_f8[0] = auVar25._0_4_;
    local_f8[2] = fVar13;
    local_f8[4] = auVar19._0_4_;
    sVar4 = thunk_FUN_180624430(auVar25._0_8_);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar13 <= auVar25._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar25._0_4_ <= auVar19._0_4_) {
        pfVar8 = pfVar10;
      }
      fVar16 = *pfVar8;
    }
    else {
      fVar16 = auVar20._0_4_;
    }
    fVar14 = 8.0;
    auVar21 = ZEXT464((uint)(fVar16 * auVar21._0_4_));
    local_f8[4] = 8.0;
    local_f8[0] = auVar28._0_4_;
    local_f8[2] = fVar13;
    sVar4 = thunk_FUN_180624430(auVar28._0_8_);
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar13 <= auVar28._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar28._0_4_ <= fVar14) {
        pfVar8 = pfVar10;
      }
      auVar25 = ZEXT464((uint)*pfVar8);
    }
    else {
      auVar25 = ZEXT1664(auVar20._0_16_);
    }
    fVar15 = 4.0;
    fVar24 = 0.05;
    local_f8[4] = 4.0;
    local_f8[2] = 0.05;
    local_f8[0] = auVar26._0_4_;
    sVar4 = thunk_FUN_180624430(auVar26._0_8_);
    fVar16 = auVar21._0_4_;
    fVar14 = auVar25._0_4_;
    if (sVar4 < 1) {
      pfVar10 = local_f8 + 2;
      if (fVar24 <= auVar26._0_4_) {
        pfVar10 = local_f8;
      }
      pfVar8 = local_f8 + 4;
      if (auVar26._0_4_ <= fVar15) {
        pfVar8 = pfVar10;
      }
      fVar15 = *pfVar8;
    }
    else {
      fVar15 = 0.5;
    }
  }
  if (param_3 == 0x565eaf76) {
LAB_180374029:
    fVar15 = fVar16;
  }
  else if (param_3 == -0x45675650) {
    fVar15 = fVar14;
  }
  else if (param_3 != 0x2ae72b37) {
    if (param_3 != -0x496d6fd2) goto LAB_180374039;
    goto LAB_180374029;
  }
  *(float *)*param_4 = fVar15;
  *(float *)(*param_4 + 4) = fVar15;
  *(float *)(*param_4 + 8) = fVar15;
  *(float *)(*param_4 + 0xc) = fVar15;
  *param_2 = (longlong)param_4;
LAB_180374039:
  fVar16 = 1.8;
  if ((DAT_180cc90d8 != '\0') && (param_3 == 0x24470a87)) {
    if (DAT_180cc9144 == 1) {
      fVar14 = 1.8;
    }
    else if (DAT_180cc9144 == 2) {
      fVar14 = 2.6;
    }
    else {
      auVar21 = ZEXT464((uint)DAT_180cc9140);
      local_f8[4] = auVar19._0_4_;
      local_f8[2] = auVar20._0_4_;
      local_f8[0] = DAT_180cc9140;
      sVar4 = thunk_FUN_180624430(DAT_180cc9140);
      if (sVar4 < 1) {
        pfVar10 = local_f8 + 2;
        if (auVar20._0_4_ <= auVar21._0_4_) {
          pfVar10 = local_f8;
        }
        pfVar8 = local_f8 + 4;
        if (auVar21._0_4_ <= auVar19._0_4_) {
          pfVar8 = pfVar10;
        }
        fVar14 = *pfVar8;
      }
      else {
        fVar14 = 2.2;
      }
    }
    *(float *)*param_4 = fVar14;
    *(float *)(*param_4 + 4) = fVar14;
    *(float *)(*param_4 + 8) = fVar14;
    *(float *)(*param_4 + 0xc) = fVar14;
    *param_2 = (longlong)param_4;
  }
  if (((DAT_180cc8f70 != '\0') && (param_3 == -0x409bb73)) && (lVar6 = *param_2, lVar6 != 0)) {
    lVar5 = FUN_18017ea70();
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
    _local_d8 = (undefined1  [16])0x0;
    cVar3 = FUN_1804514f0(local_d8,lVar6,0x10);
    fVar14 = (float)local_d8._0_4_;
    uVar22 = local_d8._4_4_;
    fVar15 = fStack_d0;
    uVar23 = uStack_cc;
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    if (cVar3 != '\0') {
      auVar21 = ZEXT464((uint)DAT_180cc8fe0);
      fVar24 = (float)DAT_180cc8fd8 / 255.0;
      fVar27 = (float)DAT_180cc8fd9 / 255.0;
      local_e0[0] = (float)DAT_180cc8fda / 255.0;
      local_f8[4] = auVar20._0_4_;
      local_f8[0] = DAT_180cc8fe0;
      local_d8._4_4_ = uVar22;
      local_d8._0_4_ = fVar14;
      fStack_d0 = fVar15;
      uStack_cc = uVar23;
      local_f8[2] = fVar13;
      sVar4 = thunk_FUN_180624430(DAT_180cc8fe0);
      if (sVar4 < 1) {
        pfVar10 = local_f8 + 2;
        if (fVar13 <= auVar21._0_4_) {
          pfVar10 = local_f8;
        }
        pfVar8 = local_f8 + 4;
        if (auVar21._0_4_ <= auVar20._0_4_) {
          pfVar8 = pfVar10;
        }
        fVar15 = *pfVar8;
      }
      else {
        fVar15 = 0.35;
      }
      fVar1 = auVar20._0_4_ - fVar15;
      auVar12._4_12_ = local_d8._4_12_;
      auVar12._0_4_ = (fVar24 * fVar15 + fVar1) * fVar14;
      auVar12 = vinsertps_avx(auVar12,ZEXT416((uint)((fVar27 * fVar15 + fVar1) *
                                                    (float)local_d8._4_4_)),0x10);
      auVar12 = vinsertps_avx(auVar12,ZEXT416((uint)((fVar15 * local_e0[0] + fVar1) * fStack_d0)),
                              0x20);
      *param_4 = auVar12;
      *param_2 = (longlong)param_4;
    }
  }
  if (DAT_180cc8ce8 != '\0') {
    if (param_3 == 0x374c1b3c) {
      *(undefined8 *)*param_4 = 0x3f8000003f800000;
      *(undefined8 *)(*param_4 + 8) = 0x3f8000003f800000;
    }
    else if (param_3 == 0xf592812) {
      auVar20 = ZEXT464(DAT_180cc8d50);
      local_f8[0] = auVar19._0_4_;
      local_f8[2] = (float)DAT_180cc8d50;
      local_e0[0] = fVar13;
      sVar4 = thunk_FUN_180624430(DAT_180cc8d50);
      if (sVar4 < 1) {
        pfVar10 = local_e0;
        if (fVar13 <= auVar20._0_4_) {
          pfVar10 = local_f8 + 2;
        }
        pfVar8 = local_f8;
        if (auVar20._0_4_ <= auVar19._0_4_) {
          pfVar8 = pfVar10;
        }
        fVar16 = *pfVar8;
      }
      *(float *)*param_4 = fVar16;
      *(float *)(*param_4 + 4) = fVar16;
      *(float *)(*param_4 + 8) = fVar16;
      *(float *)(*param_4 + 0xc) = fVar16;
    }
    else {
      if (param_3 != 0x2dbee393) {
        return;
      }
      UVar7 = GetTickCount64();
      if ((longlong)UVar7 < 0) {
        UVar9 = (ULONGLONG)((uint)UVar7 & 1);
      }
      else {
        UVar9 = UVar7;
      }
      auVar19 = ZEXT464(DAT_180cc8d54);
      dVar11 = (double)UVar7 * 0.001;
      local_f8[0] = auVar17._0_4_;
      local_f8[2] = (float)DAT_180cc8d54;
      local_e0[0] = fVar13;
      sVar4 = thunk_FUN_180624430(UVar9);
      fVar16 = auVar18._0_4_;
      if (sVar4 < 1) {
        pfVar10 = local_e0;
        if (fVar13 <= auVar19._0_4_) {
          pfVar10 = local_f8 + 2;
        }
        pfVar8 = local_f8;
        if (auVar19._0_4_ <= auVar17._0_4_) {
          pfVar8 = pfVar10;
        }
        fVar16 = *pfVar8;
      }
      dVar11 = (double)FUN_18060b150((double)fVar16 * dVar11,0x40b0000000000000);
      fVar13 = (float)dVar11;
      *(float *)*param_4 = fVar13;
      *(float *)(*param_4 + 4) = fVar13;
      *(float *)(*param_4 + 8) = fVar13;
      *(float *)(*param_4 + 0xc) = fVar13;
    }
    *param_2 = (longlong)param_4;
  }
  return;
}



