// FUN_180432700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180432700 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180432700(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  uint uVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auStack_158 [32];
  float local_138;
  uint local_130;
  uint local_128 [2];
  int local_120 [2];
  longlong local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  iVar12 = (int)param_2[1] / 2;
  lVar23 = (longlong)iVar12;
  if (iVar12 < 3) {
  }
  if ((char)(param_3 >> 0x18) == '\0') {
  }
  local_110 = param_1;
  local_f8 = param_2;
  FUN_1804353e0(param_1,0);
  local_128[0] = param_3 & 0xffffff;
  fVar27 = 0.0;
  auVar29._12_4_ = 0;
  auVar29._0_12_ = ZEXT812(0);
  auVar29 = auVar29 << 0x20;
  auVar30 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar31._12_4_ = 0;
  auVar31._0_12_ = ZEXT812(0);
  auVar31 = auVar31 << 0x20;
  auVar32 = ZEXT1264(ZEXT812(0)) << 0x20;
  lVar17 = 0;
  if (lVar23 < 4) {
    if (0 < iVar12) {
      lVar15 = *param_2;
      goto LAB_18043283b;
    }
  }
  else {
    lVar15 = *param_2;
    pfVar14 = (float *)(lVar15 + 0x10);
    lVar19 = (lVar23 - 4U >> 2) + 1;
    lVar17 = lVar19 * 4;
    do {
      auVar30 = ZEXT464((uint)(auVar30._0_4_ + pfVar14[-4] + pfVar14[-2] + *pfVar14 + pfVar14[2]));
      auVar32 = ZEXT464((uint)(auVar32._0_4_ + pfVar14[-3] + pfVar14[-1] + pfVar14[1] + pfVar14[3]))
      ;
      pfVar14 = pfVar14 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    while( true ) {
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      if (lVar23 <= lVar17) break;
LAB_18043283b:
      auVar30 = ZEXT464((uint)(auVar30._0_4_ + *(float *)(lVar15 + lVar17 * 8)));
      auVar32 = ZEXT464((uint)(auVar32._0_4_ + *(float *)(lVar15 + 4 + lVar17 * 8)));
      lVar17 = lVar17 + 1;
    }
  }
  auVar30 = ZEXT1664(CONCAT124(auVar29._4_12_,auVar29._0_4_ / (float)iVar12));
  auVar32 = ZEXT1664(CONCAT124(auVar31._4_12_,auVar31._0_4_ / (float)iVar12));
  iVar13 = iVar12 * 2;
  local_e0 = (undefined1  [16])0x0;
  local_d0 = 0;
  if (iVar13 != 0) {
    if (0x3fffffffffffffff < (ulonglong)(longlong)iVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    lVar17 = (longlong)iVar13 * 4;
    lVar15 = FUN_18015bca0(lVar17);
    local_e0._0_8_ = lVar15;
    local_d0 = lVar17 + lVar15;
    FUN_18063ab10(lVar15,0,lVar17);
    local_e0._8_8_ = lVar17 + lVar15;
  }
  fVar34 = auVar30._0_4_;
  fVar25 = auVar32._0_4_;
  iVar13 = 0;
  uVar21 = 0;
  uVar33 = 0x80000000;
  auVar41 = ZEXT464(0x38d1b717);
  if (lVar23 < 4) {
    if (0 < iVar12) {
      lVar17 = *param_2;
      goto LAB_180432b74;
    }
  }
  else {
    lVar17 = *param_2;
    iVar13 = 2;
    pfVar14 = (float *)(lVar17 + 8);
    local_118 = -8 - lVar17;
    local_100 = (lVar23 - 4U >> 2) + 1;
    local_120[0] = (int)local_100 * 4;
    local_108 = local_100 * 4;
    lVar15 = 0;
    local_f0 = 8 - lVar17;
    local_e8 = 0x10 - lVar17;
    do {
      lVar19 = (longlong)((iVar13 + -1) % iVar12);
      fVar34 = *(float *)(lVar17 + lVar19 * 8) - pfVar14[-2];
      auVar36 = ZEXT464((uint)fVar34);
      fVar26 = *(float *)(lVar17 + 4 + lVar19 * 8) - pfVar14[-1];
      auVar38 = ZEXT464((uint)fVar26);
      fVar25 = fVar26 * fVar26 + fVar34 * fVar34;
      if (fVar25 < 0.0) {
        fVar25 = (float)FUN_18061e150();
        fVar34 = auVar36._0_4_;
        fVar26 = auVar38._0_4_;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      if (auVar41._0_4_ < fVar25) {
        *(float *)(lVar15 + local_e0._0_8_) = fVar26 / fVar25;
        *(float *)((longlong)pfVar14 + local_118 + local_e0._0_8_ + 4) =
             (float)((uint)fVar34 ^ uVar33) / fVar25;
      }
      fVar34 = *(float *)(lVar17 + (longlong)(iVar13 % iVar12) * 8) - *pfVar14;
      auVar36 = ZEXT464((uint)fVar34);
      fVar26 = *(float *)(lVar17 + 4 + (longlong)(iVar13 % iVar12) * 8) - pfVar14[1];
      auVar38 = ZEXT464((uint)fVar26);
      fVar25 = fVar26 * fVar26 + fVar34 * fVar34;
      if (fVar25 < 0.0) {
        fVar25 = (float)FUN_18061e150();
        fVar34 = auVar36._0_4_;
        fVar26 = auVar38._0_4_;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      if (auVar41._0_4_ < fVar25) {
        *(float *)((longlong)pfVar14 + local_e0._0_8_ + 8 + local_118) = fVar26 / fVar25;
        *(float *)((longlong)pfVar14 + local_e0._0_8_ + 0xc + local_118) =
             (float)((uint)fVar34 ^ uVar33) / fVar25;
      }
      lVar19 = (longlong)((iVar13 + 1) % iVar12);
      fVar34 = *(float *)(lVar17 + lVar19 * 8) - pfVar14[2];
      auVar36 = ZEXT464((uint)fVar34);
      fVar26 = *(float *)(lVar17 + 4 + lVar19 * 8) - pfVar14[3];
      auVar38 = ZEXT464((uint)fVar26);
      fVar25 = fVar26 * fVar26 + fVar34 * fVar34;
      if (fVar25 < 0.0) {
        fVar25 = (float)FUN_18061e150();
        fVar34 = auVar36._0_4_;
        fVar26 = auVar38._0_4_;
      }
      else {
        fVar25 = SQRT(fVar25);
      }
      if (auVar41._0_4_ < fVar25) {
        *(float *)((longlong)pfVar14 + (8 - lVar17) + local_e0._0_8_) = fVar26 / fVar25;
        *(float *)((longlong)pfVar14 + local_118 + local_e0._0_8_ + 0x14) =
             (float)((uint)fVar34 ^ uVar33) / fVar25;
      }
      lVar19 = (longlong)((iVar13 + 2) % iVar12);
      fVar35 = *(float *)(lVar17 + lVar19 * 8) - pfVar14[4];
      auVar36 = ZEXT464((uint)fVar35);
      fVar37 = *(float *)(lVar17 + 4 + lVar19 * 8) - pfVar14[5];
      auVar38 = ZEXT464((uint)fVar37);
      fVar26 = fVar37 * fVar37 + fVar35 * fVar35;
      if (fVar26 < 0.0) {
        fVar26 = (float)FUN_18061e150();
        fVar35 = auVar36._0_4_;
        fVar37 = auVar38._0_4_;
      }
      else {
        fVar26 = SQRT(fVar26);
      }
      fVar34 = auVar30._0_4_;
      fVar25 = auVar32._0_4_;
      if (auVar41._0_4_ < fVar26) {
        *(float *)((longlong)pfVar14 + (0x10 - lVar17) + local_e0._0_8_) = fVar37 / fVar26;
        *(float *)((longlong)pfVar14 + local_118 + local_e0._0_8_ + 0x1c) =
             (float)((uint)fVar35 ^ uVar33) / fVar26;
      }
      iVar13 = iVar13 + 4;
      pfVar14 = pfVar14 + 8;
      local_100 = local_100 + -1;
      lVar15 = lVar15 + 0x20;
    } while (local_100 != 0);
    local_100 = 0;
    iVar13 = local_120[0];
    param_2 = local_f8;
    for (uVar21 = local_108; local_f8 = param_2, (longlong)uVar21 < lVar23; uVar21 = uVar21 + 1) {
LAB_180432b74:
      iVar13 = iVar13 + 1;
      fVar35 = *(float *)(lVar17 + (longlong)(iVar13 % iVar12) * 8) -
               *(float *)(lVar17 + uVar21 * 8);
      auVar36 = ZEXT464((uint)fVar35);
      fVar37 = *(float *)(lVar17 + 4 + (longlong)(iVar13 % iVar12) * 8) -
               *(float *)(lVar17 + 4 + uVar21 * 8);
      auVar38 = ZEXT464((uint)fVar37);
      fVar26 = fVar37 * fVar37 + fVar35 * fVar35;
      if (fVar26 < 0.0) {
        fVar26 = (float)FUN_18061e150();
        fVar35 = auVar36._0_4_;
        fVar37 = auVar38._0_4_;
      }
      else {
        fVar26 = SQRT(fVar26);
      }
      fVar34 = auVar30._0_4_;
      fVar25 = auVar32._0_4_;
      if (auVar41._0_4_ < fVar26) {
        *(float *)(local_e0._0_8_ + uVar21 * 8) = fVar37 / fVar26;
        *(float *)(local_e0._0_8_ + 4 + uVar21 * 8) = (float)((uint)fVar35 ^ uVar33) / fVar26;
      }
      param_2 = local_f8;
    }
  }
  uVar11 = local_128[0];
  pfVar14 = (float *)*param_2;
  auVar30 = ZEXT464(0x3f000000);
  if (((pfVar14[3] + pfVar14[1]) * 0.5 - fVar25) * *(float *)(local_e0._0_8_ + 4) +
      ((pfVar14[2] + *pfVar14) * 0.5 - fVar34) * *(float *)local_e0._0_8_ < fVar27) {
    uVar18 = iVar12 * 2;
    iVar13 = 0;
    if ((0 < (int)uVar18) && (0x1f < uVar18)) {
      uVar16 = uVar18 & 0x8000001f;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
      }
      lVar15 = 0;
      lVar17 = 0x40;
      do {
        puVar2 = (uint *)(lVar17 + -0x40 + local_e0._0_8_);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        uVar7 = puVar2[4];
        uVar8 = puVar2[5];
        uVar9 = puVar2[6];
        uVar10 = puVar2[7];
        puVar3 = (uint *)(lVar17 + -0x40 + local_e0._0_8_);
        *puVar3 = *puVar2 ^ 0x80000000;
        puVar3[1] = uVar4 ^ 0x80000000;
        puVar3[2] = uVar5 ^ 0x80000000;
        puVar3[3] = uVar6 ^ 0x80000000;
        puVar3[4] = uVar7 ^ 0x80000000;
        puVar3[5] = uVar8 ^ 0x80000000;
        puVar3[6] = uVar9 ^ 0x80000000;
        puVar3[7] = uVar10 ^ 0x80000000;
        puVar2 = (uint *)(lVar17 + -0x20 + local_e0._0_8_);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        uVar7 = puVar2[4];
        uVar8 = puVar2[5];
        uVar9 = puVar2[6];
        uVar10 = puVar2[7];
        puVar3 = (uint *)(lVar17 + -0x20 + local_e0._0_8_);
        *puVar3 = *puVar2 ^ 0x80000000;
        puVar3[1] = uVar4 ^ 0x80000000;
        puVar3[2] = uVar5 ^ 0x80000000;
        puVar3[3] = uVar6 ^ 0x80000000;
        puVar3[4] = uVar7 ^ 0x80000000;
        puVar3[5] = uVar8 ^ 0x80000000;
        puVar3[6] = uVar9 ^ 0x80000000;
        puVar3[7] = uVar10 ^ 0x80000000;
        puVar2 = (uint *)(lVar17 + local_e0._0_8_);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        uVar7 = puVar2[4];
        uVar8 = puVar2[5];
        uVar9 = puVar2[6];
        uVar10 = puVar2[7];
        puVar3 = (uint *)(lVar17 + local_e0._0_8_);
        *puVar3 = *puVar2 ^ 0x80000000;
        puVar3[1] = uVar4 ^ 0x80000000;
        puVar3[2] = uVar5 ^ 0x80000000;
        puVar3[3] = uVar6 ^ 0x80000000;
        puVar3[4] = uVar7 ^ 0x80000000;
        puVar3[5] = uVar8 ^ 0x80000000;
        puVar3[6] = uVar9 ^ 0x80000000;
        puVar3[7] = uVar10 ^ 0x80000000;
        puVar2 = (uint *)(lVar17 + 0x20 + local_e0._0_8_);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        uVar7 = puVar2[4];
        uVar8 = puVar2[5];
        uVar9 = puVar2[6];
        uVar10 = puVar2[7];
        puVar3 = (uint *)(lVar17 + 0x20 + local_e0._0_8_);
        *puVar3 = *puVar2 ^ 0x80000000;
        puVar3[1] = uVar4 ^ 0x80000000;
        puVar3[2] = uVar5 ^ 0x80000000;
        puVar3[3] = uVar6 ^ 0x80000000;
        puVar3[4] = uVar7 ^ 0x80000000;
        puVar3[5] = uVar8 ^ 0x80000000;
        puVar3[6] = uVar9 ^ 0x80000000;
        puVar3[7] = uVar10 ^ 0x80000000;
        iVar13 = iVar13 + 0x20;
        lVar15 = lVar15 + 0x20;
        lVar17 = lVar17 + 0x80;
      } while (lVar15 < (int)(uVar18 - uVar16));
    }
    lVar17 = (longlong)iVar13;
    lVar15 = (longlong)(int)uVar18;
    if (lVar17 < lVar15) {
      if (3 < lVar15 - lVar17) {
        lVar19 = lVar17 * 4;
        do {
          *(uint *)(local_e0._0_8_ + lVar17 * 4) = *(uint *)(lVar19 + local_e0._0_8_) ^ uVar33;
          *(uint *)(local_e0._0_8_ + (lVar17 + 1) * 4) =
               (uint)*(float *)(local_e0._0_8_ + (lVar17 + 1) * 4) ^ uVar33;
          *(uint *)(local_e0._0_8_ + (lVar17 + 2) * 4) =
               (uint)*(float *)(local_e0._0_8_ + (lVar17 + 2) * 4) ^ uVar33;
          *(uint *)(local_e0._0_8_ + (lVar17 + 3) * 4) =
               (uint)*(float *)(local_e0._0_8_ + (lVar17 + 3) * 4) ^ uVar33;
          lVar17 = lVar17 + 4;
          lVar19 = lVar19 + 0x10;
        } while (lVar17 < lVar15 + -3);
        if (lVar15 <= lVar17) goto LAB_180432da3;
      }
      do {
        *(uint *)(local_e0._0_8_ + lVar17 * 4) =
             (uint)*(float *)(local_e0._0_8_ + lVar17 * 4) ^ uVar33;
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar15);
    }
  }
LAB_180432da3:
  local_108 = (local_110[1] - *local_110) / 0x14;
  if (0 < lVar23) {
    lVar17 = *param_2;
    lVar15 = 0;
    iVar13 = iVar12 + -1;
    auVar32 = ZEXT464(0x3f800000);
    auVar36 = ZEXT464(0x40800000);
    while( true ) {
      auVar31 = auVar30._0_16_;
      auVar39 = auVar36._0_16_;
      auVar40 = auVar41._0_16_;
      auVar29 = auVar32._0_16_;
      fVar25 = (*(float *)(local_e0._0_8_ + (longlong)(iVar13 % iVar12) * 2 * 4) +
               *(float *)(local_e0._0_8_ + lVar15 * 2 * 4)) * auVar30._0_4_;
      fVar34 = (*(float *)(local_e0._0_8_ + (lVar15 * 2 + 1) * 4) +
               *(float *)(local_e0._0_8_ + ((longlong)(iVar13 % iVar12) * 2 + 1) * 4)) *
               auVar30._0_4_;
      fVar27 = fVar25 * fVar25 + fVar34 * fVar34;
      if (fVar27 < 0.0) {
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar41 = ZEXT1664(auVar39);
        auVar36 = ZEXT1664(auVar40);
        fVar27 = (float)FUN_18061e150();
        auVar31 = auVar32._0_16_;
        auVar39 = auVar41._0_16_;
        auVar40 = auVar36._0_16_;
        auVar29 = auVar30._0_16_;
      }
      else {
        fVar27 = SQRT(fVar27);
      }
      auVar28 = auVar29;
      if (auVar40._0_4_ < fVar27) {
        fVar25 = fVar25 / fVar27;
        fVar34 = fVar34 / fVar27;
        auVar28._0_4_ = auVar29._0_4_ / fVar27;
        auVar28._4_12_ = auVar29._4_12_;
      }
      fVar27 = *(float *)(lVar17 + lVar15 * 8);
      fVar26 = *(float *)(lVar17 + 4 + lVar15 * 8);
      auVar28 = vminss_avx(auVar39,auVar28);
      local_138 = auVar31._0_4_;
      fVar35 = auVar28._0_4_ * local_138;
      fVar34 = fVar35 * fVar34;
      fVar35 = fVar35 * fVar25;
      auVar32 = ZEXT1664(auVar29);
      auVar30 = ZEXT1664(auVar31);
      auVar36 = ZEXT1664(auVar39);
      auVar41 = ZEXT1664(auVar40);
      local_130 = param_3;
      FUN_1804354e0(local_110);
      local_130 = uVar11;
      local_138 = auVar30._0_4_;
      FUN_1804354e0(local_110,fVar35 + fVar27,fVar26 + fVar34,auVar30._0_8_);
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 1;
      if (lVar23 <= lVar15) break;
    }
  }
  uVar21 = local_108;
  iVar13 = 0;
  iVar20 = (int)local_108;
  if (0 < (int)(iVar12 - 2U)) {
    plVar1 = local_110 + 3;
    iVar22 = 0;
    uVar24 = (ulonglong)(iVar12 - 2U);
    local_120[0] = iVar20;
    do {
      local_118 = CONCAT44(local_118._4_4_,iVar22 + 4 + iVar20);
      local_128[0] = iVar20 + 2 + iVar22;
      FUN_1802aa650(plVar1,local_120);
      FUN_1802aa650(plVar1,local_128);
      FUN_1802aa650(plVar1,&local_118);
      *(int *)(local_110[7] + -0x24) = *(int *)(local_110[7] + -0x24) + 3;
      iVar22 = iVar22 + 2;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  uVar21 = uVar21 & 0xffffffff;
  do {
    iVar13 = iVar13 + 1;
    iVar22 = iVar20 + (iVar13 % iVar12) * 2;
    local_138 = (float)((int)uVar21 + 1);
    FUN_180435650(local_110,uVar21,iVar22,iVar22 + 1);
    uVar21 = (ulonglong)((int)uVar21 + 2);
  } while (iVar13 < iVar12);
  FUN_180159650(local_e0);
}



