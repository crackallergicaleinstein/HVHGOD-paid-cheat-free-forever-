// FUN_180430c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430c00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180430c00(longlong *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  float param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,float *param_10)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  uint uVar30;
  undefined1 auVar31 [64];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [64];
  undefined1 auStack_1f8 [32];
  float local_1d8;
  longlong *local_1d0;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined8 local_1a0;
  int local_198;
  longlong *local_190;
  ulonglong local_188;
  longlong local_178;
  undefined8 uStack_170;
  undefined4 *local_168;
  float *local_160;
  undefined4 *local_158;
  float *local_150;
  undefined4 *local_148;
  undefined4 *local_140;
  undefined4 *local_138;
  undefined4 *local_130;
  undefined1 local_128 [16];
  longlong local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined4 local_f8 [2];
  float local_f0 [2];
  undefined4 local_e8 [2];
  float local_e0 [2];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  fVar26 = 0.0;
  if ((0.0 < param_4) && (0.0 < param_5)) {
    auVar39 = ZEXT464(0x3f000000);
    local_190 = param_1;
    local_f8[0] = param_2;
    local_e8[0] = param_3;
    if ((0.5 < *param_10) || (((0.5 < param_10[1] || (0.5 < param_10[2])) || (0.5 < param_10[3]))))
    {
      local_110 = (undefined1  [16])0x0;
      local_100 = 0;
      local_178 = *(longlong *)param_10;
      uStack_170 = *(undefined8 *)(param_10 + 2);
      local_1c8 = local_110;
      local_1d0 = &local_178;
      local_1d8 = param_5;
      FUN_180435770();
      iVar12 = (int)((longlong)(local_110._8_8_ - local_110._0_8_) >> 2) / 2;
      lVar22 = (longlong)iVar12;
      local_198 = iVar12;
      if (2 < iVar12) {
        auVar41 = ZEXT464(0x3f800000);
        local_f0[0] = 1.0 / param_4;
        local_e0[0] = 1.0 / param_5;
        local_168 = local_f8;
        local_160 = local_f0;
        local_158 = local_e8;
        local_150 = local_e0;
        local_148 = &param_6;
        local_140 = &param_7;
        local_138 = &param_9;
        local_130 = &param_8;
        FUN_1804353e0(param_1,0);
        auVar29 = ZEXT864(0);
        fVar35 = 0.0;
        lVar16 = 0;
        if (3 < lVar22) {
          pfVar14 = (float *)(local_110._0_8_ + 0x10);
          lVar18 = (lVar22 - 4U >> 2) + 1;
          lVar16 = lVar18 * 4;
          do {
            auVar29 = ZEXT464((uint)(auVar29._0_4_ + pfVar14[-4] + pfVar14[-2] + *pfVar14 +
                                    pfVar14[2]));
            fVar35 = fVar35 + pfVar14[-3] + pfVar14[-1] + pfVar14[1] + pfVar14[3];
            pfVar14 = pfVar14 + 8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
        auVar28 = auVar29._0_16_;
        for (; lVar16 < lVar22; lVar16 = lVar16 + 1) {
          fVar24 = auVar29._0_4_ + *(float *)(local_110._0_8_ + lVar16 * 2 * 4);
          auVar29 = ZEXT464((uint)fVar24);
          auVar28 = ZEXT416((uint)fVar24);
          fVar35 = fVar35 + *(float *)(local_110._0_8_ + (lVar16 * 2 + 1) * 4);
        }
        auVar29 = ZEXT1664(CONCAT124(auVar28._4_12_,auVar28._0_4_ / (float)iVar12));
        fVar35 = fVar35 / (float)iVar12;
        local_188 = (ulonglong)(iVar12 * 2);
        local_128 = (undefined1  [16])0x0;
        local_118 = 0;
        pfVar14 = (float *)local_110._0_8_;
        local_178 = lVar22;
        if (local_188 != 0) {
          if (0x3fffffffffffffff < local_188) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          lVar16 = local_188 * 4;
          lVar18 = FUN_18015bca0(lVar16);
          local_128._0_8_ = lVar18;
          local_118 = lVar16 + lVar18;
          FUN_18063ab10(lVar18,0,lVar16);
          local_128._8_8_ = lVar16 + lVar18;
          pfVar14 = (float *)local_110._0_8_;
        }
        lVar16 = 0;
        uVar30 = 0x80000000;
        auVar37 = ZEXT464(0x38d1b717);
        iVar19 = 0;
        if (3 < lVar22) {
          iVar19 = 2;
          local_1a8 = (iVar12 - 4U & 0xfffffffc) + 4;
          lVar18 = 0;
          local_1a0 = lVar22 + -3;
          do {
            lVar15 = (longlong)((iVar19 + -1) % iVar12);
            fVar25 = pfVar14[lVar15 * 2] - *(float *)(lVar18 + (longlong)pfVar14);
            auVar31 = ZEXT464((uint)fVar25);
            fVar32 = pfVar14[lVar15 * 2 + 1] - pfVar14[lVar16 * 2 + 1];
            auVar34 = ZEXT464((uint)fVar32);
            fVar24 = fVar32 * fVar32 + fVar25 * fVar25;
            if (fVar24 < 0.0) {
              fVar24 = (float)FUN_18061e150();
              fVar25 = auVar31._0_4_;
              fVar32 = auVar34._0_4_;
            }
            else {
              fVar24 = SQRT(fVar24);
            }
            if (auVar37._0_4_ < fVar24) {
              *(float *)(local_128._0_8_ + lVar16 * 8) = fVar32 / fVar24;
              *(float *)(local_128._0_8_ + 4 + lVar16 * 8) = (float)((uint)fVar25 ^ uVar30) / fVar24
              ;
              pfVar14 = (float *)local_110._0_8_;
            }
            fVar25 = pfVar14[(longlong)(iVar19 % iVar12) * 2] - pfVar14[lVar16 * 2 + 2];
            auVar31 = ZEXT464((uint)fVar25);
            fVar32 = pfVar14[(longlong)(iVar19 % iVar12) * 2 + 1] - pfVar14[lVar16 * 2 + 3];
            auVar34 = ZEXT464((uint)fVar32);
            fVar24 = fVar32 * fVar32 + fVar25 * fVar25;
            if (fVar24 < 0.0) {
              fVar24 = (float)FUN_18061e150();
              fVar25 = auVar31._0_4_;
              fVar32 = auVar34._0_4_;
            }
            else {
              fVar24 = SQRT(fVar24);
            }
            if (auVar37._0_4_ < fVar24) {
              *(float *)(local_128._0_8_ + 8 + lVar16 * 8) = fVar32 / fVar24;
              *(float *)(local_128._0_8_ + 0xc + lVar16 * 8) =
                   (float)((uint)fVar25 ^ uVar30) / fVar24;
              pfVar14 = (float *)local_110._0_8_;
            }
            lVar15 = (longlong)((iVar19 + 1) % iVar12);
            fVar25 = pfVar14[lVar15 * 2] - pfVar14[lVar16 * 2 + 4];
            auVar31 = ZEXT464((uint)fVar25);
            fVar32 = pfVar14[lVar15 * 2 + 1] - pfVar14[lVar16 * 2 + 5];
            auVar34 = ZEXT464((uint)fVar32);
            fVar24 = fVar32 * fVar32 + fVar25 * fVar25;
            if (fVar24 < 0.0) {
              fVar24 = (float)FUN_18061e150();
              fVar25 = auVar31._0_4_;
              fVar32 = auVar34._0_4_;
            }
            else {
              fVar24 = SQRT(fVar24);
            }
            if (auVar37._0_4_ < fVar24) {
              *(float *)(local_128._0_8_ + 0x10 + lVar16 * 8) = fVar32 / fVar24;
              *(float *)(local_128._0_8_ + 0x14 + lVar16 * 8) =
                   (float)((uint)fVar25 ^ uVar30) / fVar24;
              pfVar14 = (float *)local_110._0_8_;
            }
            lVar15 = (longlong)((iVar19 + 2) % iVar12);
            fVar25 = pfVar14[lVar15 * 2] - pfVar14[lVar16 * 2 + 6];
            auVar31 = ZEXT464((uint)fVar25);
            fVar32 = pfVar14[lVar15 * 2 + 1] - pfVar14[lVar16 * 2 + 7];
            auVar34 = ZEXT464((uint)fVar32);
            fVar24 = fVar25 * fVar25 + fVar32 * fVar32;
            if (fVar24 < 0.0) {
              fVar24 = (float)FUN_18061e150();
              fVar25 = auVar31._0_4_;
              fVar32 = auVar34._0_4_;
            }
            else {
              fVar24 = SQRT(fVar24);
            }
            if (auVar37._0_4_ < fVar24) {
              *(float *)(local_128._0_8_ + 0x18 + lVar16 * 8) = fVar32 / fVar24;
              *(float *)(local_128._0_8_ + 0x1c + lVar16 * 8) =
                   (float)((uint)fVar25 ^ uVar30) / fVar24;
              pfVar14 = (float *)local_110._0_8_;
            }
            iVar19 = iVar19 + 4;
            lVar16 = lVar16 + 4;
            lVar18 = lVar18 + 0x20;
          } while (lVar16 < lVar22 + -3);
          iVar19 = local_1a8;
        }
        fVar24 = auVar29._0_4_;
        if (lVar16 < lVar22) {
          lVar18 = lVar16 * 8;
          do {
            iVar19 = iVar19 + 1;
            fVar32 = pfVar14[(longlong)(iVar19 % iVar12) * 2] -
                     *(float *)(lVar18 + (longlong)pfVar14);
            auVar31 = ZEXT464((uint)fVar32);
            fVar33 = pfVar14[(longlong)(iVar19 % iVar12) * 2 + 1] - pfVar14[lVar16 * 2 + 1];
            auVar34 = ZEXT464((uint)fVar33);
            fVar25 = fVar32 * fVar32 + fVar33 * fVar33;
            if (fVar25 < 0.0) {
              fVar25 = (float)FUN_18061e150();
              fVar32 = auVar31._0_4_;
              fVar33 = auVar34._0_4_;
            }
            else {
              fVar25 = SQRT(fVar25);
            }
            fVar24 = auVar29._0_4_;
            if (auVar37._0_4_ < fVar25) {
              *(float *)(local_128._0_8_ + lVar16 * 8) = fVar33 / fVar25;
              *(float *)(local_128._0_8_ + 4 + lVar16 * 8) = (float)((uint)fVar32 ^ uVar30) / fVar25
              ;
              pfVar14 = (float *)local_110._0_8_;
            }
            lVar16 = lVar16 + 1;
            lVar18 = lVar18 + 8;
          } while (lVar16 < lVar22);
        }
        lVar16 = local_178;
        iVar19 = local_198;
        if (((pfVar14[3] + pfVar14[1]) * auVar39._0_4_ - fVar35) * *(float *)(local_128._0_8_ + 4) +
            ((pfVar14[2] + *pfVar14) * auVar39._0_4_ - fVar24) * *(float *)local_128._0_8_ < fVar26)
        {
          iVar17 = 0;
          uVar3 = iVar12 * 2;
          if ((0 < (int)uVar3) && (0x1f < uVar3)) {
            uVar13 = uVar3 & 0x8000001f;
            if ((int)uVar13 < 0) {
              uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
            }
            lVar15 = 0;
            lVar18 = 0x40;
            do {
              puVar1 = (uint *)(local_128._0_8_ + lVar18 + -0x40);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              uVar7 = puVar1[4];
              uVar8 = puVar1[5];
              uVar9 = puVar1[6];
              uVar10 = puVar1[7];
              puVar2 = (uint *)(local_128._0_8_ + lVar18 + -0x40);
              *puVar2 = *puVar1 ^ 0x80000000;
              puVar2[1] = uVar4 ^ 0x80000000;
              puVar2[2] = uVar5 ^ 0x80000000;
              puVar2[3] = uVar6 ^ 0x80000000;
              puVar2[4] = uVar7 ^ 0x80000000;
              puVar2[5] = uVar8 ^ 0x80000000;
              puVar2[6] = uVar9 ^ 0x80000000;
              puVar2[7] = uVar10 ^ 0x80000000;
              puVar1 = (uint *)(local_128._0_8_ + lVar18 + -0x20);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              uVar7 = puVar1[4];
              uVar8 = puVar1[5];
              uVar9 = puVar1[6];
              uVar10 = puVar1[7];
              puVar2 = (uint *)(local_128._0_8_ + lVar18 + -0x20);
              *puVar2 = *puVar1 ^ 0x80000000;
              puVar2[1] = uVar4 ^ 0x80000000;
              puVar2[2] = uVar5 ^ 0x80000000;
              puVar2[3] = uVar6 ^ 0x80000000;
              puVar2[4] = uVar7 ^ 0x80000000;
              puVar2[5] = uVar8 ^ 0x80000000;
              puVar2[6] = uVar9 ^ 0x80000000;
              puVar2[7] = uVar10 ^ 0x80000000;
              puVar1 = (uint *)(local_128._0_8_ + lVar18);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              uVar7 = puVar1[4];
              uVar8 = puVar1[5];
              uVar9 = puVar1[6];
              uVar10 = puVar1[7];
              puVar2 = (uint *)(local_128._0_8_ + lVar18);
              *puVar2 = *puVar1 ^ 0x80000000;
              puVar2[1] = uVar4 ^ 0x80000000;
              puVar2[2] = uVar5 ^ 0x80000000;
              puVar2[3] = uVar6 ^ 0x80000000;
              puVar2[4] = uVar7 ^ 0x80000000;
              puVar2[5] = uVar8 ^ 0x80000000;
              puVar2[6] = uVar9 ^ 0x80000000;
              puVar2[7] = uVar10 ^ 0x80000000;
              puVar1 = (uint *)(local_128._0_8_ + lVar18 + 0x20);
              uVar4 = puVar1[1];
              uVar5 = puVar1[2];
              uVar6 = puVar1[3];
              uVar7 = puVar1[4];
              uVar8 = puVar1[5];
              uVar9 = puVar1[6];
              uVar10 = puVar1[7];
              puVar2 = (uint *)(local_128._0_8_ + lVar18 + 0x20);
              *puVar2 = *puVar1 ^ 0x80000000;
              puVar2[1] = uVar4 ^ 0x80000000;
              puVar2[2] = uVar5 ^ 0x80000000;
              puVar2[3] = uVar6 ^ 0x80000000;
              puVar2[4] = uVar7 ^ 0x80000000;
              puVar2[5] = uVar8 ^ 0x80000000;
              puVar2[6] = uVar9 ^ 0x80000000;
              puVar2[7] = uVar10 ^ 0x80000000;
              iVar17 = iVar17 + 0x20;
              lVar15 = lVar15 + 0x20;
              lVar18 = lVar18 + 0x80;
            } while (lVar15 < (int)(uVar3 - uVar13));
            pfVar14 = (float *)local_110._0_8_;
          }
          lVar18 = (longlong)iVar17;
          if (lVar18 < (longlong)local_188) {
            if ((longlong)(local_188 - lVar18) < 4) goto LAB_1804313d2;
            lVar15 = lVar18 * 4;
            do {
              *(uint *)(local_128._0_8_ + lVar18 * 4) = *(uint *)(lVar15 + local_128._0_8_) ^ uVar30
              ;
              *(uint *)(local_128._0_8_ + (lVar18 + 1) * 4) =
                   (uint)*(float *)(local_128._0_8_ + (lVar18 + 1) * 4) ^ uVar30;
              *(uint *)(local_128._0_8_ + (lVar18 + 2) * 4) =
                   (uint)*(float *)(local_128._0_8_ + (lVar18 + 2) * 4) ^ uVar30;
              *(uint *)(local_128._0_8_ + (lVar18 + 3) * 4) =
                   (uint)*(float *)(local_128._0_8_ + (lVar18 + 3) * 4) ^ uVar30;
              lVar18 = lVar18 + 4;
              lVar15 = lVar15 + 0x10;
            } while (lVar18 < (longlong)(local_188 - 3));
            for (; lVar18 < (longlong)local_188; lVar18 = lVar18 + 1) {
LAB_1804313d2:
              *(uint *)(local_128._0_8_ + lVar18 * 4) =
                   (uint)*(float *)(local_128._0_8_ + lVar18 * 4) ^ uVar30;
            }
            pfVar14 = (float *)local_110._0_8_;
          }
        }
        local_188 = (local_190[1] - *local_190) / 0x14;
        if (0 < lVar22) {
          lVar18 = 0;
          local_1a0._0_4_ = (uint)(uint3)local_1a0;
          iVar12 = iVar12 + -1;
          lVar22 = 0;
          auVar29 = ZEXT464(0x40800000);
          while( true ) {
            auVar38 = auVar39._0_16_;
            auVar28 = auVar29._0_16_;
            auVar36 = auVar37._0_16_;
            fVar24 = (*(float *)(local_128._0_8_ + lVar22) +
                     *(float *)(local_128._0_8_ + (longlong)(iVar12 % iVar19) * 2 * 4)) *
                     auVar39._0_4_;
            fVar35 = (*(float *)(local_128._0_8_ + (lVar18 * 2 + 1) * 4) +
                     *(float *)(local_128._0_8_ + ((longlong)(iVar12 % iVar19) * 2 + 1) * 4)) *
                     auVar39._0_4_;
            auVar40 = auVar41._0_16_;
            fVar26 = fVar35 * fVar35 + fVar24 * fVar24;
            if (fVar26 < 0.0) {
              auVar39 = ZEXT1664(auVar40);
              auVar29 = ZEXT1664(auVar28);
              auVar41 = ZEXT1664(auVar36);
              auVar37 = ZEXT1664(auVar38);
              auVar31 = ZEXT1664(auVar40);
              fVar26 = (float)FUN_18061e150();
              auVar27 = auVar39._0_16_;
              auVar38 = auVar37._0_16_;
              auVar40 = auVar31._0_16_;
              auVar28 = auVar29._0_16_;
              auVar36 = auVar41._0_16_;
            }
            else {
              fVar26 = SQRT(fVar26);
              auVar27 = auVar40;
            }
            if (auVar36._0_4_ < fVar26) {
              auVar27._0_4_ = auVar40._0_4_ / fVar26;
              auVar27._4_12_ = auVar40._4_12_;
              auVar27 = vminss_avx(auVar28,auVar27);
              fVar24 = fVar24 / fVar26;
              fVar35 = fVar35 / fVar26;
            }
            fVar26 = pfVar14[lVar18 * 2];
            fVar25 = pfVar14[lVar18 * 2 + 1];
            auVar31 = ZEXT1664(auVar27);
            auVar29 = ZEXT1664(auVar28);
            auVar37 = ZEXT1664(auVar36);
            auVar39 = ZEXT1664(auVar38);
            auVar41 = ZEXT1664(auVar40);
            FUN_1804316e0(&local_168,&local_1a8);
            iVar17 = local_1a8;
            local_1d8 = auVar39._0_4_;
            fVar32 = auVar31._0_4_ * local_1d8;
            fVar35 = fVar35 * fVar32;
            fVar24 = fVar24 * fVar32;
            local_1d0._0_4_ = local_1a8;
            FUN_1804354e0(local_190,fVar26 - fVar24,fVar25 - fVar35,auVar39._0_8_);
            lVar15 = local_1a0;
            local_1a0._3_5_ = SUB85(lVar15,3);
            local_1a0._0_3_ = CONCAT12(local_1a8._2_1_,CONCAT11(local_1a8._1_1_,(char)iVar17));
            local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,(uint)local_1a0);
            local_1d8 = auVar39._0_4_;
            FUN_1804354e0(local_190,fVar24 + fVar26,fVar35 + fVar25,auVar39._0_8_);
            iVar12 = iVar12 + 1;
            lVar18 = lVar18 + 1;
            lVar22 = lVar22 + 8;
            if (lVar16 <= lVar18) break;
            pfVar14 = (float *)local_110._0_8_;
          }
          iVar12 = local_198;
        }
        uVar20 = local_188;
        plVar11 = local_190;
        iVar19 = 0;
        iVar17 = (int)local_188;
        if (0 < (int)(iVar12 - 2U)) {
          iVar21 = 0;
          uVar23 = (ulonglong)(iVar12 - 2U);
          local_1a8 = iVar17;
          do {
            local_190 = (longlong *)CONCAT44(local_190._4_4_,iVar21 + 4 + iVar17);
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar17 + 2 + iVar21);
            FUN_1802aa650(plVar11 + 3,&local_1a8);
            FUN_1802aa650(plVar11 + 3,&local_1a0);
            FUN_1802aa650(plVar11 + 3,&local_190);
            *(int *)(plVar11[7] + -0x24) = *(int *)(plVar11[7] + -0x24) + 3;
            iVar21 = iVar21 + 2;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
          iVar12 = local_198;
        }
        uVar20 = uVar20 & 0xffffffff;
        do {
          iVar19 = iVar19 + 1;
          iVar21 = iVar17 + (iVar19 % iVar12) * 2;
          local_1d8 = (float)((int)uVar20 + 1);
          FUN_180435650(plVar11,uVar20,iVar21,iVar21 + 1);
          uVar20 = (ulonglong)((int)uVar20 + 2);
        } while (iVar19 < iVar12);
        FUN_180159650(local_128);
      }
      FUN_180159650(local_110);
    }
    else {
      local_1b8 = param_9;
      local_1c0 = param_8;
      local_1c8 = (undefined1 *)CONCAT44(local_1c8._4_4_,param_7);
      local_1d0 = (longlong *)CONCAT44(local_1d0._4_4_,param_6);
      local_1d8 = param_5;
      FUN_180430a80();
    }
  }
}



