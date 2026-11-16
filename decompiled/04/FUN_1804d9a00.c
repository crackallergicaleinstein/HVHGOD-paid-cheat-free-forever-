// FUN_1804d9a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9a00 */

void FUN_1804d9a00(int *param_1,float *param_2,int param_3,ulonglong param_4,float param_5,
                  uint param_6,float param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  ushort uVar5;
  uint uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  short sVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  short sVar19;
  float *pfVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  longlong *plVar24;
  short sVar25;
  int iVar26;
  longlong lVar27;
  float *pfVar28;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  short sVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [64];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [64];
  float fVar49;
  undefined4 uVar50;
  undefined1 auVar51 [64];
  float fVar52;
  float fVar53;
  undefined1 auVar54 [64];
  undefined4 uVar55;
  float fVar56;
  undefined1 auVar57 [64];
  undefined1 auVar58 [64];
  float local_128;
  undefined4 local_108;
  int local_e8;
  
  lVar21 = (longlong)param_3;
  uVar23 = (uint)param_4;
  if (param_3 < 2) {
    return;
  }
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  fVar39 = 1.0;
  fVar40 = param_5 * (float)param_1[0x39];
  if (fVar40 < 1.0) {
    if (fVar40 < 0.003921569) {
      return;
    }
    param_5 = (float)param_1[0x38];
    uVar23 = (int)(longlong)((float)(param_4 >> 0x18 & 0xff) * fVar40) << 0x18 | uVar23 & 0xffffff;
    fVar40 = 1.0;
  }
  uVar32 = param_6 | param_1[0xc];
  if ((uVar32 & 0x8000000f) != 0) {
    FUN_1804c5a40("Incorrect parameter. Did you swap \'thickness\' and \'flags\'?");
    return;
  }
  fVar49 = param_5;
  FUN_1804ec010(*(longlong *)(param_1 + 0xe) + 0x50,param_3 * 2);
  fVar47 = 0.5;
  pfVar7 = *(float **)(*(longlong *)(param_1 + 0xe) + 0x58);
  lVar1 = lVar21 + -1;
  lVar31 = 0;
  lVar17 = (longlong)pfVar7 - (longlong)param_2;
  pfVar28 = pfVar7 + lVar21 * 2;
  lVar27 = 0;
  fVar43 = 0.0;
  auVar44 = ZEXT864(0);
  if (3 < lVar1) {
    pfVar14 = param_2 + 2;
    pfVar20 = pfVar28 + 2;
    lVar30 = (lVar21 - 5U >> 2) + 1;
    lVar27 = lVar30 * 4;
    do {
      fVar45 = *pfVar14 - pfVar14[-2];
      fVar38 = pfVar14[1] -
               *(float *)((longlong)pfVar14 + (longlong)param_2 + lVar17 + (-4 - (longlong)pfVar7));
      fVar52 = fVar38 * fVar38 + fVar45 * fVar45;
      fVar34 = fVar43;
      if (0.0 < fVar52) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
        fVar34 = auVar36._0_4_;
        fVar34 = (1.5 - fVar52 * 0.5 * fVar34 * fVar34) * fVar34;
      }
      *(float *)(lVar17 + -8 + (longlong)pfVar14) = -fVar38 * fVar34;
      *(float *)((longlong)pfVar14 + lVar17 + -4) = fVar34 * fVar45;
      pfVar20[-2] = fVar52;
      fVar45 = pfVar14[2] - *pfVar14;
      fVar38 = pfVar14[3] - pfVar14[1];
      fVar52 = fVar38 * fVar38 + fVar45 * fVar45;
      fVar34 = fVar43;
      if (0.0 < fVar52) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
        fVar34 = auVar36._0_4_;
        fVar34 = (1.5 - fVar52 * 0.5 * fVar34 * fVar34) * fVar34;
      }
      *(float *)(lVar17 + (longlong)pfVar14) = -fVar38 * fVar34;
      *(float *)(lVar17 + 4 + (longlong)pfVar14) = fVar34 * fVar45;
      pfVar20[-1] = fVar52;
      fVar45 = pfVar14[4] - pfVar14[2];
      fVar38 = pfVar14[5] - pfVar14[3];
      fVar52 = fVar38 * fVar38 + fVar45 * fVar45;
      fVar34 = fVar43;
      if (0.0 < fVar52) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
        fVar34 = auVar36._0_4_;
        fVar34 = (1.5 - fVar52 * 0.5 * fVar34 * fVar34) * fVar34;
      }
      *(float *)(lVar17 + 8 + (longlong)pfVar14) = -fVar38 * fVar34;
      *(float *)(lVar17 + 0xc + (longlong)pfVar14) = fVar34 * fVar45;
      *pfVar20 = fVar52;
      fVar45 = pfVar14[6] - pfVar14[4];
      fVar38 = pfVar14[7] - pfVar14[5];
      fVar52 = fVar38 * fVar38 + fVar45 * fVar45;
      fVar34 = fVar43;
      if (0.0 < fVar52) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
        fVar34 = auVar36._0_4_;
        fVar34 = (1.5 - fVar52 * 0.5 * fVar34 * fVar34) * fVar34;
      }
      *(float *)(lVar17 + 0x10 + (longlong)pfVar14) = -fVar38 * fVar34;
      *(float *)(lVar17 + 0x14 + (longlong)pfVar14) = fVar34 * fVar45;
      pfVar20[1] = fVar52;
      pfVar20 = pfVar20 + 4;
      pfVar14 = pfVar14 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
  }
  if (lVar27 < lVar1) {
    pfVar14 = param_2 + lVar27 * 2 + 3;
    do {
      fVar45 = pfVar14[-1] - pfVar14[-3];
      fVar38 = *pfVar14 - pfVar14[-2];
      fVar52 = fVar38 * fVar38 + fVar45 * fVar45;
      fVar34 = fVar43;
      if (0.0 < fVar52) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
        fVar34 = auVar36._0_4_;
        fVar34 = (1.5 - fVar52 * 0.5 * fVar34 * fVar34) * fVar34;
      }
      *(float *)((longlong)pfVar14 + lVar17 + -0xc) = -fVar38 * fVar34;
      *(float *)((longlong)pfVar14 + lVar17 + -8) = fVar34 * fVar45;
      pfVar28[lVar27] = fVar52;
      lVar27 = lVar27 + 1;
      pfVar14 = pfVar14 + 2;
    } while (lVar27 < lVar1);
  }
  if ((uVar32 >> 9 & 1) == 0) {
    *(undefined8 *)(pfVar7 + lVar1 * 2) = *(undefined8 *)(pfVar7 + lVar21 * 2 + -4);
    fVar52 = 0.0;
  }
  else {
    fVar45 = *param_2 - param_2[lVar1 * 2];
    fVar38 = param_2[1] - param_2[lVar1 * 2 + 1];
    fVar52 = fVar38 * fVar38 + fVar45 * fVar45;
    fVar34 = fVar43;
    if (0.0 < fVar52) {
      auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar52),ZEXT416((uint)fVar52));
      fVar34 = auVar36._0_4_;
      fVar34 = (1.5 - fVar52 * 0.5 * fVar34 * fVar34) * fVar34;
    }
    pfVar7[lVar1 * 2 + 1] = fVar34 * fVar45;
    pfVar7[lVar1 * 2] = -fVar38 * fVar34;
  }
  pfVar28[lVar1] = fVar52;
  if ((uVar32 >> 0xd & 1) == 0) {
    local_128 = **(float **)(param_1 + 0xe);
    auVar57 = ZEXT464((uint)(*(float **)(param_1 + 0xe))[1]);
    auVar36 = ZEXT416((uint)local_128);
  }
  else {
    if (4.0 < fVar40) {
      if (30.5 <= fVar40) {
        iVar11 = 0x1f;
      }
      else {
        iVar11 = (int)(fVar40 + 0.5);
      }
    }
    else {
      iVar11 = (int)((fVar40 - fVar39) * 4.0 + 0.5) + 0x21;
    }
    auVar36 = *(undefined1 (*) [16])
               (*(longlong *)(*(longlong *)(param_1 + 0xe) + 8) + (longlong)iVar11 * 0x10);
    auVar35 = vshufps_avx(auVar36,auVar36,0xff);
    fVar43 = fVar40 * (float)param_1[0x38] * auVar35._0_4_;
    auVar35 = vshufps_avx(auVar36,auVar36,0x55);
    local_128 = auVar35._0_4_;
    auVar35 = vshufps_avx(auVar36,auVar36,0xaa);
    auVar57 = ZEXT1664(auVar35);
  }
  auVar51 = ZEXT1664(auVar36);
  uVar12 = uVar23 & 0xffffff;
  uVar13 = 0x400;
  fVar40 = fVar43 + fVar49;
  auVar48 = ZEXT464((uint)(fVar40 * 0.5));
  uVar16 = uVar32 & 0xe0000;
  param_6 = uVar32;
  if (uVar16 == 0) {
    uVar13 = uVar32 & 0x400;
LAB_1804da039:
  }
  else {
    if (uVar16 == 0xe0000) {
      param_6 = uVar32 & 0xffffbfff;
      goto LAB_1804da039;
    }
    uVar13 = uVar32 & 0x400;
    if (uVar16 == 0x80000) {
      auVar48 = ZEXT464((uint)(fVar43 * 0.5 + fVar49));
    }
    else {
      if (uVar16 == 0x60000) {
        uVar16 = (uint)(fVar49 * (float)param_1[0x39]);
        auVar48 = ZEXT464((uint)(((fVar49 * (float)param_1[0x39] - (float)(int)uVar16) *
                                  (float)(uVar16 & 1) + (float)((int)uVar16 / 2)) *
                                 (float)param_1[0x38] + fVar43 * 0.5));
        goto LAB_1804da039;
      }
      if (uVar16 == 0x20000) {
        auVar48 = ZEXT464((uint)(fVar43 * 0.5));
      }
    }
  }
  uVar32 = uVar32 & 0x200;
  iVar11 = 2;
  if (uVar13 == 0) {
    iVar11 = 4;
  }
  auVar54 = ZEXT464((uint)(fVar40 - auVar48._0_4_));
  iVar29 = 5;
  if (uVar13 != 0) {
    iVar29 = 2;
  }
  if (uVar32 == 0) {
    iVar26 = iVar11 * (param_3 + -2) + 8;
    iVar11 = (param_3 + -2) * iVar29 + 6;
  }
  else {
    iVar26 = iVar11 * param_3 + 2;
    iVar11 = iVar29 * param_3 + 2;
  }
  auVar58 = auVar57;
  FUN_1804d9590(param_1,iVar11 * 3,iVar26);
  uVar55 = auVar58._0_4_;
  fVar43 = auVar48._0_4_;
  fVar49 = auVar51._0_4_;
  fVar39 = (fVar43 / (auVar54._0_4_ + fVar43)) * (local_128 - fVar49) + fVar49;
  if (param_7 < auVar54._0_4_) {
    auVar54 = ZEXT464((uint)param_7);
    local_128 = ((fVar43 + param_7) / fVar40) * (local_128 - fVar49) + fVar49;
  }
  pfVar14 = *(float **)(param_1 + 0x10);
  plVar22 = (longlong *)(param_1 + 0x10);
  fVar40 = fVar47 * (float)param_1[0x38];
  lVar21 = *(longlong *)(param_1 + 10);
  fVar52 = auVar54._0_4_;
  if (uVar32 == 0) {
    fVar45 = *pfVar7;
    fVar46 = *param_2;
    fVar34 = *pfVar28;
    fVar42 = param_2[1];
    fVar38 = pfVar7[1];
    if ((param_6 >> 0xb & 1) != 0) {
      fVar42 = fVar42 - -fVar45 * param_5 * fVar47;
      fVar46 = fVar46 - fVar38 * param_5 * fVar47;
    }
    uVar6 = param_1[0xd];
    if ((param_6 & 0x6000) == 0x6000) {
      fVar41 = -fVar45 * fVar40;
      plVar24 = (longlong *)(param_1 + 0x12);
      fVar53 = fVar42 - fVar41;
      fVar42 = fVar42 + fVar41;
      fVar41 = fVar46 - fVar38 * fVar40;
      fVar46 = fVar46 + fVar38 * fVar40;
      *pfVar14 = fVar41 - fVar43 * fVar45;
      *(float *)(*plVar22 + 4) = fVar53 - fVar43 * fVar38;
      lVar27 = *plVar22;
      *(float *)(lVar27 + 8) = fVar49;
      *(undefined4 *)(lVar27 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar12;
      lVar27 = *plVar22;
      param_1[0xd] = param_1[0xd] + 1;
      *plVar22 = lVar27 + 0x14;
      *(float *)(lVar27 + 0x14) = fVar41 + fVar45 * fVar52;
      *(float *)(*plVar22 + 4) = fVar38 * fVar52 + fVar53;
      lVar27 = *plVar22;
      *(float *)(lVar27 + 8) = local_128;
      *(undefined4 *)(lVar27 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar12;
      lVar27 = *plVar22;
      *plVar22 = lVar27 + 0x14;
      uVar16 = param_1[0xd] + 1;
      param_1[0xd] = uVar16;
      *(float *)(lVar27 + 0x14) = fVar46 - fVar43 * fVar45;
      sVar15 = (short)uVar6;
      *(float *)(*plVar22 + 4) = fVar42 - fVar43 * fVar38;
      lVar27 = *plVar22;
      *(float *)(lVar27 + 8) = fVar49;
      *(undefined4 *)(lVar27 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(float *)*plVar22 = fVar46 + fVar45 * fVar52;
      *(float *)(*plVar22 + 4) = fVar42 + fVar38 * fVar52;
      lVar27 = *plVar22;
      *(float *)(lVar27 + 8) = local_128;
      *(undefined4 *)(lVar27 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 2;
      *(short *)(*plVar24 + 4) = sVar15 + 3;
      *plVar24 = *plVar24 + 6;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 3;
      *(short *)(*plVar24 + 4) = sVar15 + 1;
      *plVar24 = *plVar24 + 6;
    }
    else {
      *pfVar14 = fVar46 - fVar43 * fVar45;
      *(float *)(*plVar22 + 4) = fVar42 - fVar43 * fVar38;
      lVar27 = *plVar22;
      *(float *)(lVar27 + 8) = fVar49;
      *(undefined4 *)(lVar27 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      lVar27 = *plVar22;
      param_1[0xd] = param_1[0xd] + 1;
      *plVar22 = lVar27 + 0x14;
      *(float *)(lVar27 + 0x14) = fVar45 * fVar52 + fVar46;
      *(float *)(*plVar22 + 4) = fVar38 * fVar52 + fVar42;
      lVar27 = *plVar22;
      *(float *)(lVar27 + 8) = local_128;
      *(undefined4 *)(lVar27 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      uVar16 = uVar6;
    }
    lVar31 = 1;
    param_3 = param_3 + -1;
  }
  else {
    fVar45 = pfVar7[lVar1 * 2];
    fVar38 = pfVar7[lVar1 * 2 + 1];
    fVar34 = pfVar28[lVar1];
    uVar16 = param_1[0xd];
    *pfVar14 = 0.0;
    *(undefined4 *)(*plVar22 + 4) = 0;
    lVar27 = *plVar22;
    *(float *)(lVar27 + 8) = fVar49;
    *(undefined4 *)(lVar27 + 0xc) = uVar55;
    *(uint *)(*plVar22 + 0x10) = uVar23;
    *plVar22 = *plVar22 + 0x14;
    param_1[0xd] = param_1[0xd] + 1;
    *(undefined4 *)*plVar22 = 0;
    *(undefined4 *)(*plVar22 + 4) = 0;
    lVar27 = *plVar22;
    *(float *)(lVar27 + 8) = local_128;
    *(undefined4 *)(lVar27 + 0xc) = uVar55;
    *(uint *)(*plVar22 + 0x10) = uVar23;
    *plVar22 = *plVar22 + 0x14;
    param_1[0xd] = param_1[0xd] + 1;
  }
  plVar24 = (longlong *)(param_1 + 0x12);
  plVar22 = (longlong *)(param_1 + 0x10);
  lVar27 = (longlong)param_3;
  local_108 = auVar57._0_4_;
  if (uVar13 == 0) {
    if (lVar27 <= lVar31) goto LAB_1804daba4;
    pfVar20 = pfVar7 + lVar31 * 2 + 1;
    uVar55 = local_108;
    do {
      fVar43 = *(float *)((longlong)pfVar20 + ((longlong)param_2 - (longlong)pfVar7) + -4);
      fVar49 = *(float *)((longlong)pfVar20 + ((longlong)param_2 - (longlong)pfVar7));
      fVar47 = pfVar28[lVar31];
      fVar52 = *pfVar20;
      fVar42 = fVar52 + fVar38;
      fVar46 = pfVar20[-1];
      fVar9 = fVar46 * fVar38 - fVar52 * fVar45;
      auVar36 = vmaxss_avx(SUB6416(ZEXT464(0xbf7ffd81),0),
                           ZEXT416((uint)(fVar52 * fVar38 + fVar46 * fVar45)));
      auVar36._0_4_ = 1.0 / (auVar36._0_4_ + 1.0);
      auVar36._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar36 = vminss_avx(SUB6416(ZEXT464(0x447a0000),0),auVar36);
      fVar41 = fVar46 + fVar45;
      auVar57 = ZEXT464((uint)fVar41);
      fVar8 = fVar42 * auVar36._0_4_;
      fVar56 = fVar41 * auVar36._0_4_;
      fVar53 = fVar8 * fVar8 + fVar56 * fVar56;
      sVar15 = (short)uVar16;
      if (fVar53 <= 16.0) {
        uVar5 = *(ushort *)(param_1 + 0xd);
        *(float *)*plVar22 = fVar43 - fVar56 * auVar48._0_4_;
        *(float *)(*plVar22 + 4) = fVar49 - fVar8 * auVar48._0_4_;
        lVar17 = *plVar22;
        *(int *)(lVar17 + 8) = auVar51._0_4_;
        *(undefined4 *)(lVar17 + 0xc) = uVar55;
        *(uint *)(*plVar22 + 0x10) = uVar23;
        *plVar22 = *plVar22 + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        *(float *)*plVar22 = fVar56 * auVar54._0_4_ + fVar43;
        *(float *)(*plVar22 + 4) = fVar8 * auVar54._0_4_ + fVar49;
        lVar17 = *plVar22;
        *(float *)(lVar17 + 8) = local_128;
        *(undefined4 *)(lVar17 + 0xc) = uVar55;
        *(uint *)(*plVar22 + 0x10) = uVar23;
        *plVar22 = *plVar22 + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        *(short *)*plVar24 = sVar15;
        *(short *)(*plVar24 + 2) = sVar15 + 2;
        *(short *)(*plVar24 + 4) = sVar15 + 3;
        *plVar24 = *plVar24 + 6;
        *(short *)*plVar24 = sVar15;
        *(short *)(*plVar24 + 2) = sVar15 + 3;
        *(short *)(*plVar24 + 4) = sVar15 + 1;
        uVar16 = (uint)uVar5;
        fVar38 = fVar52;
        fVar45 = fVar46;
      }
      else {
        auVar35 = vmaxss_avx(ZEXT416((uint)fVar34),ZEXT416((uint)fVar47));
        auVar36 = vcmpss_avx(ZEXT416((uint)fVar9),auVar44._0_16_,1);
        auVar36 = vblendvps_avx(auVar48._0_16_,auVar54._0_16_,auVar36);
        fVar34 = auVar36._0_4_ * auVar36._0_4_;
        auVar36 = vmaxss_avx(auVar35,ZEXT416((uint)fVar34));
        fVar34 = fVar34 * fVar53;
        if (auVar36._0_4_ < fVar34) {
          auVar35._0_4_ = auVar36._0_4_ / fVar34;
          auVar35._4_12_ = auVar36._4_12_;
          if (auVar35._0_4_ < 0.0) {
            fVar34 = (float)FUN_18061e150(auVar35._0_8_);
            fVar41 = auVar57._0_4_;
          }
          else {
            fVar34 = SQRT(auVar35._0_4_);
          }
          fVar56 = fVar56 * fVar34;
          fVar8 = fVar8 * fVar34;
        }
        fVar34 = fVar42 * fVar42 + fVar41 * fVar41;
        if (auVar44._0_4_ < fVar34) {
          auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar34),ZEXT416((uint)fVar34));
          fVar41 = auVar36._0_4_ * fVar41;
          fVar42 = auVar36._0_4_ * fVar42;
        }
        fVar38 = ((fVar42 * fVar38 + fVar41 * fVar45) - 1.0) / (fVar41 * fVar38 - fVar42 * fVar45);
        fVar45 = -fVar41 * fVar38;
        fVar38 = fVar42 * fVar38;
        uVar50 = auVar51._0_4_;
        fVar34 = auVar48._0_4_;
        fVar53 = auVar54._0_4_;
        if (auVar44._0_4_ <= fVar9) {
          *(float *)*plVar22 = (fVar41 + fVar38) * fVar53 + fVar43;
          sVar25 = sVar15 + 2;
          *(float *)(*plVar22 + 4) = (fVar42 + fVar45) * fVar53 + fVar49;
          lVar17 = *plVar22;
          sVar19 = sVar15 + 4;
          *(float *)(lVar17 + 8) = local_128;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          lVar17 = *plVar22;
          param_1[0xd] = param_1[0xd] + 1;
          *plVar22 = lVar17 + 0x14;
          *(float *)(lVar17 + 0x14) = fVar43;
          *(float *)(*plVar22 + 4) = fVar49;
          lVar17 = *plVar22;
          *(float *)(lVar17 + 8) = fVar39;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          lVar17 = *plVar22;
          *plVar22 = lVar17 + 0x14;
          uVar16 = param_1[0xd] + 1;
          param_1[0xd] = uVar16;
          *(float *)(lVar17 + 0x14) = fVar43 - fVar56 * fVar34;
          *(float *)(*plVar22 + 4) = fVar49 - fVar8 * fVar34;
          lVar17 = *plVar22;
          *(undefined4 *)(lVar17 + 8) = uVar50;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          lVar17 = *plVar22;
          param_1[0xd] = param_1[0xd] + 1;
          *plVar22 = lVar17 + 0x14;
          *(float *)(lVar17 + 0x14) = (fVar41 - fVar38) * fVar53 + fVar43;
          *(float *)(*plVar22 + 4) = (fVar42 - fVar45) * fVar53 + fVar49;
          lVar17 = *plVar22;
          *(float *)(lVar17 + 8) = local_128;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          *plVar22 = *plVar22 + 0x14;
          param_1[0xd] = param_1[0xd] + 1;
          *(short *)*plVar24 = sVar15;
          *(short *)(*plVar24 + 2) = sVar19;
          *(short *)(*plVar24 + 4) = sVar25;
          *plVar24 = *plVar24 + 6;
          *(short *)*plVar24 = sVar15;
          *(short *)(*plVar24 + 2) = sVar25;
          *(short *)(*plVar24 + 4) = sVar15 + 1;
          sVar33 = sVar15 + 5;
        }
        else {
          *(float *)*plVar22 = fVar43 - (fVar41 + fVar38) * fVar34;
          sVar25 = sVar15 + 5;
          sVar19 = sVar15 + 2;
          *(float *)(*plVar22 + 4) = fVar49 - fVar34 * (fVar42 + fVar45);
          lVar17 = *plVar22;
          *(undefined4 *)(lVar17 + 8) = uVar50;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          lVar17 = *plVar22;
          param_1[0xd] = param_1[0xd] + 1;
          *plVar22 = lVar17 + 0x14;
          *(float *)(lVar17 + 0x14) = fVar43;
          *(float *)(*plVar22 + 4) = fVar49;
          lVar17 = *plVar22;
          *(float *)(lVar17 + 8) = fVar39;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          lVar17 = *plVar22;
          *plVar22 = lVar17 + 0x14;
          uVar16 = param_1[0xd] + 1;
          param_1[0xd] = uVar16;
          *(float *)(lVar17 + 0x14) = fVar43 - (fVar41 - fVar38) * fVar34;
          *(float *)(*plVar22 + 4) = fVar49 - (fVar42 - fVar45) * fVar34;
          lVar17 = *plVar22;
          *(undefined4 *)(lVar17 + 8) = uVar50;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          lVar17 = *plVar22;
          param_1[0xd] = param_1[0xd] + 1;
          *plVar22 = lVar17 + 0x14;
          *(float *)(lVar17 + 0x14) = fVar56 * fVar53 + fVar43;
          *(float *)(*plVar22 + 4) = fVar8 * fVar53 + fVar49;
          lVar17 = *plVar22;
          *(float *)(lVar17 + 8) = local_128;
          *(undefined4 *)(lVar17 + 0xc) = uVar55;
          *(uint *)(*plVar22 + 0x10) = uVar23;
          *plVar22 = *plVar22 + 0x14;
          param_1[0xd] = param_1[0xd] + 1;
          *(short *)*plVar24 = sVar15;
          *(short *)(*plVar24 + 2) = sVar19;
          *(short *)(*plVar24 + 4) = sVar25;
          *plVar24 = *plVar24 + 6;
          *(short *)*plVar24 = sVar15;
          *(short *)(*plVar24 + 2) = sVar25;
          *(short *)(*plVar24 + 4) = sVar15 + 1;
          sVar33 = sVar15 + 4;
        }
        sVar15 = sVar15 + 3;
        *plVar24 = *plVar24 + 6;
        *(short *)*plVar24 = sVar15;
        *(short *)(*plVar24 + 2) = sVar25;
        *(short *)(*plVar24 + 4) = sVar19;
        *plVar24 = *plVar24 + 6;
        *(short *)*plVar24 = sVar15;
        *(short *)(*plVar24 + 2) = sVar19;
        *(short *)(*plVar24 + 4) = sVar33;
        *plVar24 = *plVar24 + 6;
        *(short *)*plVar24 = sVar15;
        *(short *)(*plVar24 + 2) = sVar33;
        uVar16 = uVar16 & 0xffff;
        *(short *)(*plVar24 + 4) = sVar25;
        fVar38 = fVar52;
        fVar45 = fVar46;
      }
      fVar49 = auVar51._0_4_;
      *plVar24 = *plVar24 + 6;
      lVar31 = lVar31 + 1;
      pfVar20 = pfVar20 + 2;
      fVar34 = fVar47;
    } while (lVar31 < lVar27);
  }
  else {
    if (lVar27 <= lVar31) goto LAB_1804daba4;
    lVar27 = lVar27 - lVar31;
    pfVar28 = pfVar7 + lVar31 * 2 + 1;
    do {
      fVar39 = *(float *)(((longlong)param_2 - (longlong)pfVar7) + -4 + (longlong)pfVar28);
      fVar47 = *(float *)(((longlong)param_2 - (longlong)pfVar7) + (longlong)pfVar28);
      sVar15 = (short)uVar16;
      uVar5 = *(ushort *)(param_1 + 0xd);
      fVar34 = pfVar28[-1];
      fVar46 = *pfVar28;
      auVar36 = vmaxss_avx(SUB6416(ZEXT464(0xbf7ffd81),0),
                           ZEXT416((uint)(fVar46 * fVar38 + fVar34 * fVar45)));
      auVar37._0_4_ = 1.0 / (auVar36._0_4_ + 1.0);
      auVar37._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar36 = vminss_avx(SUB6416(ZEXT464(0x447a0000),0),auVar37);
      fVar45 = (fVar34 + fVar45) * auVar36._0_4_;
      fVar38 = (fVar46 + fVar38) * auVar36._0_4_;
      *(float *)*plVar22 = fVar39 - fVar45 * fVar43;
      *(float *)(*plVar22 + 4) = fVar47 - fVar38 * fVar43;
      lVar17 = *plVar22;
      *(float *)(lVar17 + 8) = fVar49;
      *(undefined4 *)(lVar17 + 0xc) = local_108;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(float *)*plVar22 = fVar45 * fVar52 + fVar39;
      *(float *)(*plVar22 + 4) = fVar38 * fVar52 + fVar47;
      lVar17 = *plVar22;
      *(float *)(lVar17 + 8) = local_128;
      *(undefined4 *)(lVar17 + 0xc) = local_108;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 2;
      *(short *)(*plVar24 + 4) = sVar15 + 3;
      *plVar24 = *plVar24 + 6;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 3;
      *(short *)(*plVar24 + 4) = sVar15 + 1;
      uVar16 = (uint)uVar5;
      *plVar24 = *plVar24 + 6;
      lVar27 = lVar27 + -1;
      pfVar28 = pfVar28 + 2;
      fVar38 = fVar46;
      fVar45 = fVar34;
    } while (lVar27 != 0);
  }
  fVar47 = 0.5;
  uVar55 = local_108;
LAB_1804daba4:
  plVar24 = (longlong *)(param_1 + 0x12);
  plVar22 = (longlong *)(param_1 + 0x10);
  if (uVar32 == 0) {
    fVar39 = param_2[lVar1 * 2];
    fVar43 = param_2[lVar1 * 2 + 1];
    fVar52 = pfVar7[lVar1 * 2];
    fVar45 = pfVar7[lVar1 * 2 + 1];
    if ((param_6 >> 0xb & 1) != 0) {
      fVar43 = fVar43 + -fVar52 * param_5 * fVar47;
      fVar39 = fVar39 + fVar45 * param_5 * fVar47;
    }
    fVar47 = auVar48._0_4_ * fVar52;
    fVar38 = auVar48._0_4_ * fVar45;
    sVar15 = (short)uVar16;
    fVar34 = auVar54._0_4_;
    if ((param_6 & 0x6000) == 0x6000) {
      iVar11 = param_1[0xd];
      fVar46 = -fVar52 * fVar40;
      fVar42 = fVar39 - fVar45 * fVar40;
      fVar41 = fVar43 - fVar46;
      fVar46 = fVar46 + fVar43;
      fVar39 = fVar39 + fVar45 * fVar40;
      **(float **)(param_1 + 0x10) = fVar42 - fVar47;
      *(float *)(*plVar22 + 4) = fVar41 - fVar38;
      lVar21 = *plVar22;
      *(float *)(lVar21 + 8) = fVar49;
      *(undefined4 *)(lVar21 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      lVar21 = *plVar22;
      param_1[0xd] = param_1[0xd] + 1;
      *plVar22 = lVar21 + 0x14;
      *(float *)(lVar21 + 0x14) = fVar42 + fVar52 * fVar34;
      *(float *)(*plVar22 + 4) = fVar41 + fVar45 * fVar34;
      lVar21 = *plVar22;
      *(float *)(lVar21 + 8) = local_128;
      *(undefined4 *)(lVar21 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      lVar21 = *plVar22;
      param_1[0xd] = param_1[0xd] + 1;
      *plVar22 = lVar21 + 0x14;
      *(float *)(lVar21 + 0x14) = fVar39 - fVar47;
      *(float *)(*plVar22 + 4) = fVar46 - fVar38;
      lVar21 = *plVar22;
      *(float *)(lVar21 + 8) = fVar49;
      *(undefined4 *)(lVar21 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar12;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(float *)*plVar22 = fVar39 + fVar52 * fVar34;
      *(float *)(*plVar22 + 4) = fVar46 + fVar45 * fVar34;
      lVar21 = *plVar22;
      *(float *)(lVar21 + 8) = local_128;
      *(undefined4 *)(lVar21 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar12;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 2;
      *(short *)(*plVar24 + 4) = sVar15 + 3;
      *plVar24 = *plVar24 + 6;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 3;
      *(short *)(*plVar24 + 4) = sVar15 + 1;
      *plVar24 = *plVar24 + 6;
      sVar15 = (short)iVar11;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 2;
      *(short *)(*plVar24 + 4) = sVar15 + 3;
      *plVar24 = *plVar24 + 6;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 3;
      *(short *)(*plVar24 + 4) = sVar15 + 1;
      *plVar24 = *plVar24 + 6;
    }
    else {
      plVar24 = (longlong *)(param_1 + 0x12);
      **(float **)(param_1 + 0x10) = fVar39 - fVar47;
      *(float *)(*plVar22 + 4) = fVar43 - fVar38;
      lVar21 = *plVar22;
      *(float *)(lVar21 + 8) = fVar49;
      *(undefined4 *)(lVar21 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      lVar21 = *plVar22;
      param_1[0xd] = param_1[0xd] + 1;
      *plVar22 = lVar21 + 0x14;
      *(float *)(lVar21 + 0x14) = fVar52 * fVar34 + fVar39;
      *(float *)(*plVar22 + 4) = fVar45 * fVar34 + fVar43;
      lVar21 = *plVar22;
      *(float *)(lVar21 + 8) = local_128;
      *(undefined4 *)(lVar21 + 0xc) = uVar55;
      *(uint *)(*plVar22 + 0x10) = uVar23;
      *plVar22 = *plVar22 + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 2;
      *(short *)(*plVar24 + 4) = sVar15 + 3;
      *plVar24 = *plVar24 + 6;
      *(short *)*plVar24 = sVar15;
      *(short *)(*plVar24 + 2) = sVar15 + 3;
      *(short *)(*plVar24 + 4) = sVar15 + 1;
      *plVar24 = *plVar24 + 6;
    }
  }
  else {
    iVar11 = param_1[0x20];
    lVar1 = *(longlong *)(param_1 + 10);
    local_e8 = (int)(((longlong)pfVar14 - lVar21) / 0x14);
    lVar27 = (longlong)local_e8;
    puVar2 = (undefined8 *)(lVar1 + (ulonglong)(iVar11 + uVar16) * 0x14);
    uVar10 = puVar2[1];
    puVar3 = (undefined8 *)(lVar1 + lVar27 * 0x14);
    *puVar3 = *puVar2;
    puVar3[1] = uVar10;
    *(undefined4 *)(lVar1 + 0x10 + lVar27 * 0x14) =
         *(undefined4 *)(lVar1 + 0x10 + (ulonglong)(iVar11 + uVar16) * 0x14);
    lVar21 = *(longlong *)(param_1 + 10);
    uVar18 = (ulonglong)(param_1[0x20] + 1 + uVar16);
    puVar2 = (undefined8 *)(lVar21 + uVar18 * 0x14);
    uVar10 = puVar2[1];
    puVar3 = (undefined8 *)(lVar21 + 0x14 + lVar27 * 0x14);
    *puVar3 = *puVar2;
    puVar3[1] = uVar10;
    *(undefined4 *)(lVar21 + 0x24 + lVar27 * 0x14) = *(undefined4 *)(lVar21 + 0x10 + uVar18 * 0x14);
  }
  iVar11 = param_1[8];
  iVar29 = param_1[4] - (int)(*(longlong *)(param_1 + 0x12) - *(longlong *)(param_1 + 6) >> 1);
  lVar21 = *plVar22;
  lVar1 = *(longlong *)(param_1 + 10);
  piVar4 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
  *piVar4 = *piVar4 - iVar29;
  param_1[8] = param_1[8] + ((int)((lVar21 - lVar1) / 0x14) - iVar11);
  param_1[4] = param_1[4] - iVar29;
  return;
}



