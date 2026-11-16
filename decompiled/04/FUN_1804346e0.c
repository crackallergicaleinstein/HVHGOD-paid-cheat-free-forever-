// FUN_1804346e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804346e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804346e0(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
                  longlong param_6,float *param_7,uint param_8)

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
  uint uVar13;
  float *pfVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  uint uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [64];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auStack_1c8 [32];
  float local_1a8;
  ulonglong *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_180;
  uint local_178;
  float local_168 [6];
  longlong *local_150;
  ulonglong local_148;
  longlong local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  ulonglong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  if ((((param_6 != 0) && (fVar35 = 0.0, 0.0 < param_4)) && (0.0 < param_5)) &&
     ((char)(param_8 >> 0x18) != '\0')) {
    auVar45 = ZEXT464(0x3f000000);
    local_150 = param_1;
    local_138 = param_2;
    local_12c = param_3;
    if (((0.5 < *param_7) || (0.5 < param_7[1])) || ((0.5 < param_7[2] || (0.5 < param_7[3])))) {
      local_100 = (undefined1  [16])0x0;
      local_f0 = 0;
      local_128 = *(ulonglong *)param_7;
      uStack_120 = *(undefined8 *)(param_7 + 2);
      local_198 = local_100;
      local_1a0 = &local_128;
      local_1a8 = param_5;
      FUN_180435770();
      iVar12 = (int)((longlong)(local_100._8_8_ - local_100._0_8_) >> 2) / 2;
      lVar23 = (longlong)iVar12;
      if (2 < iVar12) {
        auVar43 = ZEXT464(0x3f800000);
        local_134 = 1.0 / param_4;
        local_168[2] = 1.0 / param_5;
        FUN_1804353e0(param_1,param_6);
        local_168[0] = (float)(param_8 & 0xffffff);
        auVar30 = ZEXT864(0);
        fVar38 = 0.0;
        lVar18 = 0;
        if (3 < lVar23) {
          pfVar14 = (float *)(local_100._0_8_ + 0x10);
          lVar19 = (lVar23 - 4U >> 2) + 1;
          lVar18 = lVar19 * 4;
          do {
            auVar30 = ZEXT464((uint)(auVar30._0_4_ + pfVar14[-4] + pfVar14[-2] + *pfVar14 +
                                    pfVar14[2]));
            fVar38 = fVar38 + pfVar14[-3] + pfVar14[-1] + pfVar14[1] + pfVar14[3];
            pfVar14 = pfVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
        auVar29 = auVar30._0_16_;
        for (; lVar18 < lVar23; lVar18 = lVar18 + 1) {
          fVar26 = auVar30._0_4_ + *(float *)(local_100._0_8_ + lVar18 * 2 * 4);
          auVar30 = ZEXT464((uint)fVar26);
          auVar29 = ZEXT416((uint)fVar26);
          fVar38 = fVar38 + *(float *)(local_100._0_8_ + (lVar18 * 2 + 1) * 4);
        }
        auVar30 = ZEXT1664(CONCAT124(auVar29._4_12_,auVar29._0_4_ / (float)iVar12));
        fVar38 = fVar38 / (float)iVar12;
        local_148 = (ulonglong)(iVar12 * 2);
        local_118 = (undefined1  [16])0x0;
        local_108 = 0;
        pfVar14 = (float *)local_100._0_8_;
        if (local_148 != 0) {
          if (0x3fffffffffffffff < local_148) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          lVar18 = local_148 * 4;
          lVar19 = FUN_18015bca0(lVar18);
          local_118._0_8_ = lVar19;
          local_108 = lVar19 + lVar18;
          FUN_18063ab10(lVar19,0,lVar18);
          local_118._8_8_ = lVar19 + lVar18;
          pfVar14 = (float *)local_100._0_8_;
        }
        lVar18 = 0;
        uVar31 = 0x80000000;
        auVar39 = ZEXT464(0x38d1b717);
        fVar26 = 0.0;
        if (3 < lVar23) {
          iVar24 = 2;
          local_168[1] = (float)((iVar12 - 4U & 0xfffffffc) + 4);
          lVar19 = 0;
          local_140 = lVar23 + -3;
          do {
            lVar15 = (longlong)((iVar24 + -1) % iVar12);
            fVar32 = pfVar14[lVar15 * 2] - *(float *)((longlong)pfVar14 + lVar19);
            auVar34 = ZEXT464((uint)fVar32);
            fVar27 = pfVar14[lVar15 * 2 + 1] - pfVar14[lVar18 * 2 + 1];
            auVar36 = ZEXT464((uint)fVar27);
            fVar26 = fVar27 * fVar27 + fVar32 * fVar32;
            if (fVar26 < 0.0) {
              fVar26 = (float)FUN_18061e150();
              fVar32 = auVar34._0_4_;
              fVar27 = auVar36._0_4_;
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (auVar39._0_4_ < fVar26) {
              *(float *)(local_118._0_8_ + lVar18 * 8) = fVar27 / fVar26;
              *(float *)(local_118._0_8_ + 4 + lVar18 * 8) = (float)((uint)fVar32 ^ uVar31) / fVar26
              ;
              pfVar14 = (float *)local_100._0_8_;
            }
            fVar32 = pfVar14[(longlong)(iVar24 % iVar12) * 2] - pfVar14[lVar18 * 2 + 2];
            auVar34 = ZEXT464((uint)fVar32);
            fVar27 = pfVar14[(longlong)(iVar24 % iVar12) * 2 + 1] - pfVar14[lVar18 * 2 + 3];
            auVar36 = ZEXT464((uint)fVar27);
            fVar26 = fVar27 * fVar27 + fVar32 * fVar32;
            if (fVar26 < 0.0) {
              fVar26 = (float)FUN_18061e150();
              fVar32 = auVar34._0_4_;
              fVar27 = auVar36._0_4_;
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (auVar39._0_4_ < fVar26) {
              *(float *)(local_118._0_8_ + 8 + lVar18 * 8) = fVar27 / fVar26;
              *(float *)(local_118._0_8_ + 0xc + lVar18 * 8) =
                   (float)((uint)fVar32 ^ uVar31) / fVar26;
              pfVar14 = (float *)local_100._0_8_;
            }
            lVar15 = (longlong)((iVar24 + 1) % iVar12);
            fVar32 = pfVar14[lVar15 * 2] - pfVar14[lVar18 * 2 + 4];
            auVar34 = ZEXT464((uint)fVar32);
            fVar27 = pfVar14[lVar15 * 2 + 1] - pfVar14[lVar18 * 2 + 5];
            auVar36 = ZEXT464((uint)fVar27);
            fVar26 = fVar27 * fVar27 + fVar32 * fVar32;
            if (fVar26 < 0.0) {
              fVar26 = (float)FUN_18061e150();
              fVar32 = auVar34._0_4_;
              fVar27 = auVar36._0_4_;
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (auVar39._0_4_ < fVar26) {
              *(float *)(local_118._0_8_ + 0x10 + lVar18 * 8) = fVar27 / fVar26;
              *(float *)(local_118._0_8_ + 0x14 + lVar18 * 8) =
                   (float)((uint)fVar32 ^ uVar31) / fVar26;
              pfVar14 = (float *)local_100._0_8_;
            }
            lVar15 = (longlong)((iVar24 + 2) % iVar12);
            fVar32 = pfVar14[lVar15 * 2] - pfVar14[lVar18 * 2 + 6];
            auVar34 = ZEXT464((uint)fVar32);
            fVar27 = pfVar14[lVar15 * 2 + 1] - pfVar14[lVar18 * 2 + 7];
            auVar36 = ZEXT464((uint)fVar27);
            fVar26 = fVar27 * fVar27 + fVar32 * fVar32;
            if (fVar26 < 0.0) {
              fVar26 = (float)FUN_18061e150();
              fVar32 = auVar34._0_4_;
              fVar27 = auVar36._0_4_;
            }
            else {
              fVar26 = SQRT(fVar26);
            }
            if (auVar39._0_4_ < fVar26) {
              *(float *)(local_118._0_8_ + 0x18 + lVar18 * 8) = fVar27 / fVar26;
              *(float *)(local_118._0_8_ + 0x1c + lVar18 * 8) =
                   (float)((uint)fVar32 ^ uVar31) / fVar26;
              pfVar14 = (float *)local_100._0_8_;
            }
            iVar24 = iVar24 + 4;
            lVar18 = lVar18 + 4;
            lVar19 = lVar19 + 0x20;
          } while (lVar18 < lVar23 + -3);
          fVar26 = local_168[1];
        }
        fVar32 = auVar30._0_4_;
        if (lVar18 < lVar23) {
          lVar19 = lVar18 * 8;
          do {
            fVar26 = (float)((int)fVar26 + 1);
            fVar33 = pfVar14[(longlong)((int)fVar26 % iVar12) * 2] -
                     *(float *)((longlong)pfVar14 + lVar19);
            auVar34 = ZEXT464((uint)fVar33);
            fVar41 = pfVar14[(longlong)((int)fVar26 % iVar12) * 2 + 1] - pfVar14[lVar18 * 2 + 1];
            auVar36 = ZEXT464((uint)fVar41);
            fVar27 = fVar41 * fVar41 + fVar33 * fVar33;
            if (fVar27 < 0.0) {
              fVar27 = (float)FUN_18061e150();
              fVar33 = auVar34._0_4_;
              fVar41 = auVar36._0_4_;
            }
            else {
              fVar27 = SQRT(fVar27);
            }
            fVar32 = auVar30._0_4_;
            if (auVar39._0_4_ < fVar27) {
              *(float *)(local_118._0_8_ + lVar18 * 8) = fVar41 / fVar27;
              *(float *)(local_118._0_8_ + 4 + lVar18 * 8) = (float)((uint)fVar33 ^ uVar31) / fVar27
              ;
              pfVar14 = (float *)local_100._0_8_;
            }
            lVar18 = lVar18 + 1;
            lVar19 = lVar19 + 8;
          } while (lVar18 < lVar23);
        }
        fVar26 = local_168[0];
        if (((pfVar14[3] + pfVar14[1]) * auVar45._0_4_ - fVar38) * *(float *)(local_118._0_8_ + 4) +
            ((pfVar14[2] + *pfVar14) * auVar45._0_4_ - fVar32) * *(float *)local_118._0_8_ < fVar35)
        {
          iVar24 = 0;
          uVar4 = iVar12 * 2;
          if ((0 < (int)uVar4) && (0x1f < uVar4)) {
            uVar13 = uVar4 & 0x8000001f;
            if ((int)uVar13 < 0) {
              uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
            }
            lVar19 = 0;
            lVar18 = 0x40;
            do {
              puVar2 = (uint *)(local_118._0_8_ + lVar18 + -0x40);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              uVar8 = puVar2[4];
              uVar9 = puVar2[5];
              uVar10 = puVar2[6];
              uVar11 = puVar2[7];
              puVar3 = (uint *)(local_118._0_8_ + lVar18 + -0x40);
              *puVar3 = *puVar2 ^ 0x80000000;
              puVar3[1] = uVar5 ^ 0x80000000;
              puVar3[2] = uVar6 ^ 0x80000000;
              puVar3[3] = uVar7 ^ 0x80000000;
              puVar3[4] = uVar8 ^ 0x80000000;
              puVar3[5] = uVar9 ^ 0x80000000;
              puVar3[6] = uVar10 ^ 0x80000000;
              puVar3[7] = uVar11 ^ 0x80000000;
              puVar2 = (uint *)(local_118._0_8_ + lVar18 + -0x20);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              uVar8 = puVar2[4];
              uVar9 = puVar2[5];
              uVar10 = puVar2[6];
              uVar11 = puVar2[7];
              puVar3 = (uint *)(local_118._0_8_ + lVar18 + -0x20);
              *puVar3 = *puVar2 ^ 0x80000000;
              puVar3[1] = uVar5 ^ 0x80000000;
              puVar3[2] = uVar6 ^ 0x80000000;
              puVar3[3] = uVar7 ^ 0x80000000;
              puVar3[4] = uVar8 ^ 0x80000000;
              puVar3[5] = uVar9 ^ 0x80000000;
              puVar3[6] = uVar10 ^ 0x80000000;
              puVar3[7] = uVar11 ^ 0x80000000;
              puVar2 = (uint *)(local_118._0_8_ + lVar18);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              uVar8 = puVar2[4];
              uVar9 = puVar2[5];
              uVar10 = puVar2[6];
              uVar11 = puVar2[7];
              puVar3 = (uint *)(local_118._0_8_ + lVar18);
              *puVar3 = *puVar2 ^ 0x80000000;
              puVar3[1] = uVar5 ^ 0x80000000;
              puVar3[2] = uVar6 ^ 0x80000000;
              puVar3[3] = uVar7 ^ 0x80000000;
              puVar3[4] = uVar8 ^ 0x80000000;
              puVar3[5] = uVar9 ^ 0x80000000;
              puVar3[6] = uVar10 ^ 0x80000000;
              puVar3[7] = uVar11 ^ 0x80000000;
              puVar2 = (uint *)(local_118._0_8_ + lVar18 + 0x20);
              uVar5 = puVar2[1];
              uVar6 = puVar2[2];
              uVar7 = puVar2[3];
              uVar8 = puVar2[4];
              uVar9 = puVar2[5];
              uVar10 = puVar2[6];
              uVar11 = puVar2[7];
              puVar3 = (uint *)(local_118._0_8_ + lVar18 + 0x20);
              *puVar3 = *puVar2 ^ 0x80000000;
              puVar3[1] = uVar5 ^ 0x80000000;
              puVar3[2] = uVar6 ^ 0x80000000;
              puVar3[3] = uVar7 ^ 0x80000000;
              puVar3[4] = uVar8 ^ 0x80000000;
              puVar3[5] = uVar9 ^ 0x80000000;
              puVar3[6] = uVar10 ^ 0x80000000;
              puVar3[7] = uVar11 ^ 0x80000000;
              iVar24 = iVar24 + 0x20;
              lVar19 = lVar19 + 0x20;
              lVar18 = lVar18 + 0x80;
            } while (lVar19 < (int)(uVar4 - uVar13));
            pfVar14 = (float *)local_100._0_8_;
          }
          lVar18 = (longlong)iVar24;
          if (lVar18 < (longlong)local_148) {
            if ((longlong)(local_148 - lVar18) < 4) goto LAB_180434e92;
            lVar19 = lVar18 * 4;
            do {
              *(uint *)(local_118._0_8_ + lVar18 * 4) = *(uint *)(lVar19 + local_118._0_8_) ^ uVar31
              ;
              *(uint *)(local_118._0_8_ + (lVar18 + 1) * 4) =
                   (uint)*(float *)(local_118._0_8_ + (lVar18 + 1) * 4) ^ uVar31;
              *(uint *)(local_118._0_8_ + (lVar18 + 2) * 4) =
                   (uint)*(float *)(local_118._0_8_ + (lVar18 + 2) * 4) ^ uVar31;
              *(uint *)(local_118._0_8_ + (lVar18 + 3) * 4) =
                   (uint)*(float *)(local_118._0_8_ + (lVar18 + 3) * 4) ^ uVar31;
              lVar18 = lVar18 + 4;
              lVar19 = lVar19 + 0x10;
            } while (lVar18 < (longlong)(local_148 - 3));
            for (; lVar18 < (longlong)local_148; lVar18 = lVar18 + 1) {
LAB_180434e92:
              *(uint *)(local_118._0_8_ + lVar18 * 4) =
                   (uint)*(float *)(local_118._0_8_ + lVar18 * 4) ^ uVar31;
            }
            pfVar14 = (float *)local_100._0_8_;
          }
        }
        local_128 = (local_150[1] - *local_150) / 0x14;
        if (0 < lVar23) {
          lVar18 = 0;
          local_130 = auVar43._0_4_;
          local_168[1] = fVar35;
          local_148 = CONCAT44(local_148._4_4_,auVar43._0_4_);
          local_168[4] = fVar35;
          iVar24 = iVar12 + -1;
          local_140 = 0;
          auVar30 = ZEXT464(0x40800000);
          while( true ) {
            auVar44 = auVar45._0_16_;
            auVar40 = auVar30._0_16_;
            auVar29 = auVar39._0_16_;
            auVar42 = auVar43._0_16_;
            fVar32 = (*(float *)(local_140 + local_118._0_8_) +
                     *(float *)(local_118._0_8_ + (longlong)(iVar24 % iVar12) * 2 * 4)) *
                     auVar45._0_4_;
            fVar27 = (*(float *)(local_118._0_8_ + (lVar18 * 2 + 1) * 4) +
                     *(float *)(local_118._0_8_ + ((longlong)(iVar24 % iVar12) * 2 + 1) * 4)) *
                     auVar45._0_4_;
            fVar38 = fVar32 * fVar32 + fVar27 * fVar27;
            if (fVar38 < 0.0) {
              auVar45 = ZEXT1664(auVar29);
              auVar30 = ZEXT1664(auVar40);
              auVar43 = ZEXT1664(auVar42);
              auVar39 = ZEXT1664(auVar44);
              fVar38 = (float)FUN_18061e150();
              auVar44 = auVar39._0_16_;
              auVar40 = auVar30._0_16_;
              auVar29 = auVar45._0_16_;
              auVar42 = auVar43._0_16_;
            }
            else {
              fVar38 = SQRT(fVar38);
            }
            fVar41 = auVar42._0_4_;
            fVar33 = fVar41;
            if (auVar29._0_4_ < fVar38) {
              auVar28._0_4_ = fVar41 / fVar38;
              auVar28._4_12_ = auVar42._4_12_;
              auVar28 = vminss_avx(auVar40,auVar28);
              fVar33 = auVar28._0_4_;
              fVar32 = fVar32 / fVar38;
              fVar27 = fVar27 / fVar38;
            }
            fVar38 = pfVar14[lVar18 * 2];
            fVar37 = pfVar14[lVar18 * 2 + 1];
            local_168[0] = (fVar38 - local_138) * local_134;
            pfVar14 = local_168 + 1;
            if (fVar35 <= local_168[0]) {
              pfVar14 = local_168;
            }
            pfVar16 = &local_130;
            if (local_168[0] <= fVar41) {
              pfVar16 = pfVar14;
            }
            local_168[0] = (fVar37 - local_12c) * local_168[2];
            pfVar14 = local_168 + 4;
            if (0.0 <= local_168[0]) {
              pfVar14 = local_168;
            }
            pfVar17 = (float *)&local_148;
            if (local_168[0] <= fVar41) {
              pfVar17 = pfVar14;
            }
            fVar35 = *pfVar17;
            fVar33 = fVar33 * auVar44._0_4_;
            fVar27 = fVar33 * fVar27;
            fVar33 = fVar33 * fVar32;
            local_1a0._0_4_ = param_8;
            auVar34 = ZEXT464((uint)*pfVar16);
            auVar39 = ZEXT1664(auVar29);
            auVar30 = ZEXT1664(auVar40);
            auVar43 = ZEXT1664(auVar42);
            auVar45 = ZEXT1664(auVar44);
            local_1a8 = fVar35;
            FUN_1804354e0(local_150);
            local_1a0 = (ulonglong *)CONCAT44(local_1a0._4_4_,fVar26);
            local_1a8 = fVar35;
            FUN_1804354e0(local_150,fVar33 + fVar38,fVar27 + fVar37,auVar34._0_8_);
            iVar24 = iVar24 + 1;
            lVar18 = lVar18 + 1;
            local_140 = local_140 + 8;
            if (lVar23 <= lVar18) break;
            fVar35 = 0.0;
            pfVar14 = (float *)local_100._0_8_;
          }
        }
        uVar21 = local_128;
        iVar24 = 0;
        iVar25 = (int)local_128;
        if (0 < (int)(iVar12 - 2U)) {
          local_148 = CONCAT44(local_148._4_4_,iVar25);
          plVar1 = local_150 + 3;
          iVar22 = 0;
          uVar20 = (ulonglong)(iVar12 - 2U);
          do {
            local_168[2] = (float)(iVar22 + 4 + iVar25);
            local_168[4] = (float)(iVar22 + iVar25 + 2);
            FUN_1802aa650(plVar1,&local_148);
            FUN_1802aa650(plVar1,local_168 + 4);
            FUN_1802aa650(plVar1,local_168 + 2);
            *(int *)(local_150[7] + -0x24) = *(int *)(local_150[7] + -0x24) + 3;
            iVar22 = iVar22 + 2;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        uVar21 = uVar21 & 0xffffffff;
        do {
          iVar24 = iVar24 + 1;
          iVar22 = iVar25 + (iVar24 % iVar12) * 2;
          local_1a8 = (float)((int)uVar21 + 1);
          FUN_180435650(local_150,uVar21,iVar22,iVar22 + 1);
          uVar21 = (ulonglong)((int)uVar21 + 2);
        } while (iVar24 < iVar12);
        FUN_180159650(local_118);
      }
      FUN_180159650(local_100);
    }
    else {
      local_178 = param_8;
      local_180 = 0x3f800000;
      local_188 = 0x3f800000;
      local_190 = 0;
      local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
      local_1a0 = (ulonglong *)param_6;
      local_1a8 = param_5;
      FUN_180435220(param_1);
    }
  }
}



