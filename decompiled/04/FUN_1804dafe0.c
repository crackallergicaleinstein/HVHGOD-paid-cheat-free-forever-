// FUN_1804dafe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dafe0 */

void FUN_1804dafe0(int *param_1,longlong param_2,int param_3,float param_4,uint param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  undefined2 uVar16;
  longlong lVar17;
  float *pfVar18;
  undefined4 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  short sVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  short sVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  int local_124;
  int local_120;
  longlong local_118;
  
  uVar32 = (ulonglong)param_3;
  if (param_3 < 3) {
    return;
  }
  if (((uint)param_4 & 0xff000000) == 0) {
    return;
  }
  fVar42 = **(float **)(param_1 + 0xe);
  fVar43 = (*(float **)(param_1 + 0xe))[1];
  uVar2 = param_1[0xc];
  if (((param_5 | uVar2) >> 0xc & 1) == 0) {
    FUN_1804d9590(param_1,(param_3 + -2) * 3,param_3);
    iVar3 = param_1[0xd];
    lVar21 = 0;
    if (3 < uVar32) {
      lVar25 = (uVar32 - 4 >> 2) + 1;
      lVar21 = lVar25 * 4;
      puVar19 = (undefined4 *)(param_2 + 8);
      do {
        **(undefined4 **)(param_1 + 0x10) = puVar19[-2];
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = puVar19[-1];
        lVar5 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar5 + 8) = fVar42;
        *(float *)(lVar5 + 0xc) = fVar43;
        *(float *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        **(undefined4 **)(param_1 + 0x10) = *puVar19;
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = puVar19[1];
        lVar5 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar5 + 8) = fVar42;
        *(float *)(lVar5 + 0xc) = fVar43;
        *(float *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        **(undefined4 **)(param_1 + 0x10) = puVar19[2];
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = puVar19[3];
        lVar5 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar5 + 8) = fVar42;
        *(float *)(lVar5 + 0xc) = fVar43;
        *(float *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        **(undefined4 **)(param_1 + 0x10) = puVar19[4];
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = puVar19[5];
        lVar5 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar5 + 8) = fVar42;
        *(float *)(lVar5 + 0xc) = fVar43;
        *(float *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        lVar25 = lVar25 + -1;
        puVar19 = puVar19 + 8;
      } while (lVar25 != 0);
    }
    for (; lVar21 < (longlong)uVar32; lVar21 = lVar21 + 1) {
      **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_2 + lVar21 * 8);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = *(undefined4 *)(param_2 + 4 + lVar21 * 8)
      ;
      lVar25 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar25 + 8) = fVar42;
      *(float *)(lVar25 + 0xc) = fVar43;
      *(float *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
    }
    iVar20 = 2;
    do {
      sVar33 = (short)iVar3 + (short)iVar20;
      iVar20 = iVar20 + 1;
      **(short **)(param_1 + 0x12) = (short)iVar3;
      *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar33 + -1;
      *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar33;
      *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
    } while (iVar20 < param_3);
    return;
  }
  iVar27 = param_3 * 9;
  fVar44 = 0.5;
  fVar46 = (float)param_1[0x38] * 0.5;
  uVar13 = (uint)param_4 & 0xffffff;
  iVar3 = param_3 * 2 + 2;
  FUN_1804d9590(param_1,iVar27,iVar3);
  lVar25 = *(longlong *)(param_1 + 0x10);
  puVar4 = *(undefined2 **)(param_1 + 0x12);
  FUN_1804ec010(*(longlong *)(param_1 + 0xe) + 0x50,param_3 * 2);
  iVar20 = 0;
  lVar22 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xe) + 0x58);
  lVar21 = lVar5 + uVar32 * 8;
  if (param_3 < 4) {
    lVar10 = uVar32 - 1;
  }
  else {
    pfVar18 = (float *)(lVar21 + 8);
    lVar17 = param_2 - lVar5;
    lVar31 = (uVar32 - 1) * 4;
    lVar15 = (uVar32 - 1) * 8;
    pfVar14 = (float *)(lVar5 + 0xc);
    uVar9 = (param_3 - 4U >> 2) + 1;
    uVar29 = (ulonglong)uVar9;
    iVar20 = uVar9 * 4;
    lVar8 = 3;
    do {
      lVar10 = lVar8;
      fVar7 = *(float *)(lVar17 + -0xc + (longlong)pfVar14) - *(float *)(lVar15 + param_2);
      fVar38 = *(float *)(lVar17 + -8 + (longlong)pfVar14) - *(float *)(lVar15 + 4 + param_2);
      fVar45 = fVar38 * fVar38 + fVar7 * fVar7;
      if (0.0 < fVar45) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
        fVar37 = auVar36._0_4_;
        fVar37 = (1.5 - fVar45 * fVar44 * fVar37 * fVar37) * fVar37;
        fVar7 = fVar7 * fVar37;
        fVar38 = fVar38 * fVar37;
      }
      *(float *)(lVar15 + lVar5) = fVar38;
      *(float *)(lVar15 + 4 + lVar5) = -fVar7;
      *(float *)(lVar21 + lVar31) = fVar45;
      fVar7 = *(float *)(lVar17 + -4 + (longlong)pfVar14) -
              *(float *)(lVar17 + -0xc + (longlong)pfVar14);
      fVar38 = *(float *)(lVar17 + (longlong)pfVar14) - *(float *)(lVar17 + -8 + (longlong)pfVar14);
      fVar45 = fVar38 * fVar38 + fVar7 * fVar7;
      if (0.0 < fVar45) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
        fVar37 = auVar36._0_4_;
        fVar37 = (1.5 - fVar45 * fVar44 * fVar37 * fVar37) * fVar37;
        fVar7 = fVar7 * fVar37;
        fVar38 = fVar38 * fVar37;
      }
      pfVar14[-3] = fVar38;
      pfVar14[-2] = -fVar7;
      pfVar18[-2] = fVar45;
      fVar7 = *(float *)((longlong)pfVar14 + lVar17 + 4) -
              *(float *)(lVar17 + -4 + (longlong)pfVar14);
      fVar38 = *(float *)(lVar17 + 8 + (longlong)pfVar14) - *(float *)(lVar17 + (longlong)pfVar14);
      fVar45 = fVar38 * fVar38 + fVar7 * fVar7;
      if (0.0 < fVar45) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
        fVar37 = auVar36._0_4_;
        fVar37 = (1.5 - fVar45 * fVar44 * fVar37 * fVar37) * fVar37;
        fVar7 = fVar7 * fVar37;
        fVar38 = fVar38 * fVar37;
      }
      pfVar14[-1] = fVar38;
      *pfVar14 = -fVar7;
      pfVar18[-1] = fVar45;
      fVar7 = *(float *)(lVar17 + 0xc + (longlong)pfVar14) -
              *(float *)((longlong)pfVar14 + lVar17 + 4);
      fVar38 = *(float *)(lVar17 + 0x10 + (longlong)pfVar14) -
               *(float *)(lVar17 + 8 + (longlong)pfVar14);
      fVar45 = fVar38 * fVar38 + fVar7 * fVar7;
      if (0.0 < fVar45) {
        auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
        fVar37 = auVar36._0_4_;
        fVar37 = (1.5 - fVar45 * fVar44 * fVar37 * fVar37) * fVar37;
        fVar7 = fVar7 * fVar37;
        fVar38 = fVar38 * fVar37;
      }
      pfVar14[1] = fVar38;
      pfVar14[2] = -fVar7;
      *pfVar18 = fVar45;
      lVar15 = (0xc - lVar5) + (longlong)pfVar14;
      lVar22 = lVar22 + 4;
      lVar31 = (4 - lVar21) + (longlong)pfVar18;
      pfVar14 = pfVar14 + 8;
      pfVar18 = pfVar18 + 4;
      uVar29 = uVar29 - 1;
      lVar8 = lVar10 + 4;
    } while (uVar29 != 0);
    if (param_3 <= iVar20) goto LAB_1804db421;
  }
  lVar15 = lVar10 * 8;
  uVar29 = (ulonglong)(uint)(param_3 - iVar20);
  pfVar18 = (float *)(param_2 + lVar22 * 8);
  lVar22 = lVar22 * 4;
  lVar10 = lVar10 * 4;
  do {
    lVar31 = lVar22;
    fVar7 = *pfVar18 - *(float *)(lVar15 + param_2);
    fVar38 = pfVar18[1] - *(float *)(lVar15 + 4 + param_2);
    fVar45 = fVar38 * fVar38 + fVar7 * fVar7;
    if (0.0 < fVar45) {
      auVar36 = vrsqrtss_avx(ZEXT416((uint)fVar45),ZEXT416((uint)fVar45));
      fVar37 = auVar36._0_4_;
      fVar37 = (1.5 - fVar45 * fVar44 * fVar37 * fVar37) * fVar37;
      fVar7 = fVar7 * fVar37;
      fVar38 = fVar38 * fVar37;
    }
    *(float *)(lVar15 + lVar5) = fVar38;
    *(float *)(lVar15 + 4 + lVar5) = -fVar7;
    *(float *)(lVar10 + lVar21) = fVar45;
    lVar15 = (longlong)pfVar18 - param_2;
    uVar29 = uVar29 - 1;
    pfVar18 = pfVar18 + 2;
    lVar22 = lVar31 + 4;
    lVar10 = lVar31;
  } while (uVar29 != 0);
LAB_1804db421:
  iVar23 = 0;
  lVar22 = *(longlong *)(param_1 + 0x10);
  iVar20 = param_1[0xd];
  param_2 = param_2 - lVar5;
  *(ulonglong *)(param_1 + 0x10) = lVar22 + uVar32 * 0x14;
  param_1[0xd] = iVar20 + param_3;
  pfVar18 = (float *)(lVar22 + 4);
  sVar33 = (short)iVar20;
  if (((param_5 | uVar2) & 0x400) == 0) {
    local_124 = 0;
    local_118 = 0;
    pfVar14 = (float *)(lVar5 + 4);
    lVar22 = uVar32 * 8 + -8;
    lVar10 = uVar32 * 4 + -4;
    local_120 = param_3 + -1;
    iVar20 = iVar23;
    do {
      fVar44 = *(float *)(lVar22 + lVar5);
      fVar45 = *(float *)(lVar22 + 4 + lVar5);
      fVar7 = *pfVar14;
      fVar38 = pfVar14[-1];
      fVar37 = *(float *)(param_2 + -4 + (longlong)pfVar14);
      fVar41 = *(float *)(param_2 + (longlong)pfVar14);
      auVar36 = vmaxss_avx(SUB6416(ZEXT464(0xbf7ffd81),0),
                           ZEXT416((uint)(fVar38 * fVar44 + fVar7 * fVar45)));
      auVar36._0_4_ = 1.0 / (auVar36._0_4_ + 1.0);
      auVar36._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar36 = vminss_avx(SUB6416(ZEXT464(0x447a0000),0),auVar36);
      fVar39 = (fVar38 + fVar44) * auVar36._0_4_;
      fVar40 = (fVar7 + fVar45) * auVar36._0_4_;
      fVar6 = fVar40 * fVar40 + fVar39 * fVar39;
      if (16.0 < fVar6) {
        auVar36 = vmaxss_avx(ZEXT416(*(uint *)(lVar10 + lVar21)),
                             ZEXT416(*(uint *)(local_118 + lVar21)));
        fVar34 = fVar46 * fVar46 * fVar6;
        if (auVar36._0_4_ < fVar34) {
          auVar35._0_4_ = auVar36._0_4_ / fVar34;
          auVar35._4_12_ = auVar36._4_12_;
          if (auVar35._0_4_ < 0.0) {
            fVar34 = (float)FUN_18061e150(auVar35._0_8_);
          }
          else {
            fVar34 = SQRT(auVar35._0_4_);
          }
          fVar39 = fVar39 * fVar34;
          fVar40 = fVar40 * fVar34;
        }
      }
      pfVar18[1] = fVar42;
      pfVar18[2] = fVar43;
      pfVar18[3] = param_4;
      sVar28 = (short)local_120 + sVar33;
      pfVar18[-1] = fVar37 - fVar39 * fVar46;
      *pfVar18 = fVar41 - fVar40 * fVar46;
      iVar24 = param_1[0xd];
      pfVar18 = pfVar18 + 5;
      uVar16 = (undefined2)iVar23;
      sVar11 = (short)iVar24;
      if ((16.0 >= fVar6) || (1 < local_124)) {
        **(float **)(param_1 + 0x10) = fVar37 + fVar39 * fVar46;
        *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar41 + fVar40 * fVar46;
        lVar22 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar22 + 8) = fVar42;
        *(float *)(lVar22 + 0xc) = fVar43;
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar13;
        sVar12 = (short)iVar20 + sVar33;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        **(undefined2 **)(param_1 + 0x12) = uVar16;
        *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar11;
        *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar12;
        *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
        **(undefined2 **)(param_1 + 0x12) = uVar16;
        *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar12;
        *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar28;
        *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
      }
      else {
        sVar12 = (short)iVar20 + sVar33;
        local_124 = local_124 + 1;
        **(float **)(param_1 + 0x10) = fVar44 * fVar46 + fVar37;
        *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar45 * fVar46 + fVar41;
        lVar22 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar22 + 8) = fVar42;
        *(float *)(lVar22 + 0xc) = fVar43;
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar13;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        **(float **)(param_1 + 0x10) = fVar38 * fVar46 + fVar37;
        *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar7 * fVar46 + fVar41;
        lVar22 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar22 + 8) = fVar42;
        *(float *)(lVar22 + 0xc) = fVar43;
        *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar13;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
        param_1[0xd] = param_1[0xd] + 1;
        **(undefined2 **)(param_1 + 0x12) = uVar16;
        *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar11;
        *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar12;
        *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
        **(undefined2 **)(param_1 + 0x12) = uVar16;
        *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar12;
        *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar28;
        *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
        **(short **)(param_1 + 0x12) = sVar11;
        *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar11 + 1;
        *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar12;
        *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
        iVar24 = iVar24 + 1;
      }
      uVar16 = (undefined2)iVar24;
      lVar22 = (-4 - lVar5) + (longlong)pfVar14;
      pfVar14 = pfVar14 + 2;
      iVar30 = iVar20 + 1;
      lVar10 = local_118;
      local_120 = iVar20;
      local_118 = local_118 + 4;
      iVar23 = iVar24;
      iVar20 = iVar30;
    } while (iVar30 < param_3);
  }
  else {
    pfVar14 = (float *)(lVar5 + 4);
    iVar20 = param_3 + -1;
    iVar24 = iVar23;
    do {
      fVar44 = *(float *)((longlong)pfVar14 + param_2 + -4);
      fVar45 = *(float *)((longlong)pfVar14 + param_2);
      sVar11 = (short)iVar24 + sVar33;
      fVar7 = *(float *)(lVar5 + (longlong)iVar20 * 8);
      fVar38 = *(float *)(lVar5 + 4 + (longlong)iVar20 * 8);
      auVar36 = vmaxss_avx(SUB6416(ZEXT464(0xbf7ffd81),0),
                           ZEXT416((uint)(fVar7 * pfVar14[-1] + fVar38 * *pfVar14)));
      fVar37 = pfVar14[-1];
      auVar36 = vminss_avx(SUB6416(ZEXT464(0x447a0000),0),
                           ZEXT416((uint)(1.0 / (auVar36._0_4_ + 1.0))));
      fVar41 = *pfVar14;
      pfVar18[1] = fVar42;
      pfVar18[2] = fVar43;
      pfVar18[3] = param_4;
      fVar7 = (fVar7 + fVar37) * auVar36._0_4_ * fVar46;
      fVar38 = (fVar38 + fVar41) * auVar36._0_4_ * fVar46;
      *pfVar18 = fVar45 - fVar38;
      pfVar18[-1] = fVar44 - fVar7;
      iVar30 = param_1[0xd];
      **(float **)(param_1 + 0x10) = fVar7 + fVar44;
      *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar38 + fVar45;
      lVar21 = *(longlong *)(param_1 + 0x10);
      *(float *)(lVar21 + 8) = fVar42;
      *(float *)(lVar21 + 0xc) = fVar43;
      *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = uVar13;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      **(undefined2 **)(param_1 + 0x12) = (short)iVar23;
      uVar16 = (undefined2)iVar30;
      *(undefined2 *)(*(longlong *)(param_1 + 0x12) + 2) = uVar16;
      *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar11;
      *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
      **(undefined2 **)(param_1 + 0x12) = (short)iVar23;
      *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar11;
      iVar26 = iVar24 + 1;
      *(short *)(*(longlong *)(param_1 + 0x12) + 4) = (short)iVar20 + sVar33;
      *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
      pfVar18 = pfVar18 + 5;
      pfVar14 = pfVar14 + 2;
      iVar20 = iVar24;
      iVar23 = iVar30;
      iVar24 = iVar26;
    } while (iVar26 < param_3);
  }
  iVar20 = 2;
  *puVar4 = uVar16;
  puVar4[3] = uVar16;
  do {
    sVar11 = (short)iVar20 + sVar33;
    iVar20 = iVar20 + 1;
    **(short **)(param_1 + 0x12) = sVar33;
    *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar11 + -1;
    *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar11;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
  } while (iVar20 < param_3);
  iVar20 = (int)((*(longlong *)(param_1 + 0x10) - lVar25) / 0x14);
  iVar23 = (int)(*(longlong *)(param_1 + 0x12) - (longlong)puVar4 >> 1);
  if ((iVar23 < iVar27) || (iVar20 < iVar3)) {
    iVar27 = iVar27 - iVar23;
    piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
    *piVar1 = *piVar1 - iVar27;
    param_1[8] = param_1[8] + (iVar20 - iVar3);
    param_1[4] = param_1[4] - iVar27;
  }
  return;
}



