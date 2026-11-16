// FUN_180431970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180431970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180431970(longlong *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,float *param_6,uint param_7)

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
  uint uVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 in_ZMM1 [64];
  float fVar29;
  undefined1 in_ZMM2 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [64];
  float fVar34;
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  float fVar40;
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auStack_198 [32];
  float local_178;
  longlong *local_170;
  undefined1 *local_168;
  uint local_158 [2];
  float local_150 [2];
  longlong local_148;
  longlong *local_140;
  ulonglong local_138;
  longlong local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  ulonglong local_e8;
  
  lVar20 = DAT_180bbae18;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  auVar44 = ZEXT1664(in_ZMM2._0_16_);
  auVar42 = ZEXT1664(in_ZMM1._0_16_);
  fVar26 = 0.0;
  if (((0.0 < param_4) && (0.0 < param_5)) && ((char)(param_7 >> 0x18) != '\0')) {
    auVar46 = ZEXT464(0x3f000000);
    local_140 = param_1;
    if (((0.5 < *param_6) || (0.5 < param_6[1])) || ((0.5 < param_6[2] || (0.5 < param_6[3])))) {
      if (DAT_180bbae18 != 0) {
        local_150[0] = (float)DAT_180bbaf70;
        auVar42 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)DAT_180bbaf74));
        if ((0.0 < local_150[0]) && (0.0 < (float)DAT_180bbaf74)) {
          local_100 = (undefined1  [16])0x0;
          local_f0 = 0;
          local_128 = *(longlong *)param_6;
          uStack_120 = *(undefined8 *)(param_6 + 2);
          local_168 = local_100;
          local_170 = &local_128;
          local_178 = param_5;
          FUN_180435770(param_7 >> 0x18,in_ZMM1._0_8_);
          iVar16 = (int)((longlong)(local_100._8_8_ - local_100._0_8_) >> 2) / 2;
          lVar24 = (longlong)iVar16;
          if (2 < iVar16) {
            FUN_1804353e0(param_1,lVar20);
            local_158[0] = param_7 & 0xffffff;
            auVar44 = ZEXT864(0);
            auVar33 = ZEXT864(0);
            lVar20 = 0;
            if (3 < lVar24) {
              pfVar18 = (float *)(local_100._0_8_ + 0x10);
              lVar21 = (lVar24 - 4U >> 2) + 1;
              lVar20 = lVar21 * 4;
              do {
                auVar44 = ZEXT464((uint)(auVar44._0_4_ + pfVar18[-4] + pfVar18[-2] + *pfVar18 +
                                        pfVar18[2]));
                auVar33 = ZEXT464((uint)(auVar33._0_4_ + pfVar18[-3] + pfVar18[-1] + pfVar18[1] +
                                        pfVar18[3]));
                pfVar18 = pfVar18 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
            }
            auVar30 = auVar44._0_16_;
            auVar31 = auVar33._0_16_;
            for (; lVar20 < lVar24; lVar20 = lVar20 + 1) {
              fVar29 = auVar44._0_4_ + *(float *)(local_100._0_8_ + lVar20 * 8);
              auVar44 = ZEXT464((uint)fVar29);
              auVar30 = ZEXT416((uint)fVar29);
              fVar29 = auVar33._0_4_ + *(float *)(local_100._0_8_ + 4 + lVar20 * 8);
              auVar33 = ZEXT464((uint)fVar29);
              auVar31 = ZEXT416((uint)fVar29);
            }
            auVar38._0_4_ = auVar30._0_4_ / (float)iVar16;
            auVar38._4_12_ = auVar30._4_12_;
            auVar44 = ZEXT1664(auVar38);
            local_178 = auVar31._0_4_ / (float)iVar16;
            auVar33 = ZEXT1664(CONCAT124(auVar31._4_12_,local_178));
            local_128 = (param_1[1] - *param_1) / 0x14;
            local_178 = local_178 / auVar42._0_4_;
            auVar36 = ZEXT464((uint)local_150[0]);
            auVar30._0_4_ = auVar38._0_4_ / local_150[0];
            local_170 = (longlong *)CONCAT44(local_170._4_4_,param_7);
            FUN_1804354e0(param_1,auVar38._0_8_,local_100._0_8_,auVar30._0_8_);
            local_138 = (ulonglong)(iVar16 * 2);
            local_118 = (undefined1  [16])0x0;
            local_108 = 0;
            if (iVar16 * 2 != 0) {
              if (0x3fffffffffffffff < local_138) {
                    /* WARNING: Subroutine does not return */
                FUN_1801136f0();
              }
              lVar20 = local_138 * 4;
              lVar21 = FUN_18015bca0(lVar20);
              local_118._0_8_ = lVar21;
              local_108 = lVar20 + lVar21;
              FUN_18063ab10(lVar21,0,lVar20);
              local_118._8_8_ = lVar20 + lVar21;
            }
            lVar20 = 0;
            uVar23 = 0x80000000;
            auVar39 = ZEXT464(0x38d1b717);
            pfVar18 = (float *)local_100._0_8_;
            fVar29 = 0.0;
            if (3 < lVar24) {
              iVar25 = 2;
              local_150[0] = (float)((iVar16 - 4U & 0xfffffffc) + 4);
              lVar21 = 0;
              local_148 = lVar24 + -3;
              do {
                lVar19 = (longlong)((iVar25 + -1) % iVar16);
                fVar35 = pfVar18[lVar19 * 2] - *(float *)(lVar21 + (longlong)pfVar18);
                auVar41 = ZEXT464((uint)fVar35);
                fVar40 = pfVar18[lVar19 * 2 + 1] - pfVar18[lVar20 * 2 + 1];
                auVar37 = ZEXT464((uint)fVar40);
                fVar29 = fVar40 * fVar40 + fVar35 * fVar35;
                if (fVar29 < 0.0) {
                  fVar29 = (float)FUN_18061e150();
                  fVar35 = auVar41._0_4_;
                  fVar40 = auVar37._0_4_;
                }
                else {
                  fVar29 = SQRT(fVar29);
                }
                if (auVar39._0_4_ < fVar29) {
                  *(float *)(local_118._0_8_ + lVar20 * 8) = (float)((uint)fVar40 ^ uVar23) / fVar29
                  ;
                  *(float *)(local_118._0_8_ + 4 + lVar20 * 8) = fVar35 / fVar29;
                  pfVar18 = (float *)local_100._0_8_;
                }
                fVar35 = pfVar18[(longlong)(iVar25 % iVar16) * 2] - pfVar18[lVar20 * 2 + 2];
                auVar41 = ZEXT464((uint)fVar35);
                fVar40 = pfVar18[(longlong)(iVar25 % iVar16) * 2 + 1] - pfVar18[lVar20 * 2 + 3];
                auVar37 = ZEXT464((uint)fVar40);
                fVar29 = fVar40 * fVar40 + fVar35 * fVar35;
                if (fVar29 < 0.0) {
                  fVar29 = (float)FUN_18061e150();
                  fVar35 = auVar41._0_4_;
                  fVar40 = auVar37._0_4_;
                }
                else {
                  fVar29 = SQRT(fVar29);
                }
                if (auVar39._0_4_ < fVar29) {
                  *(float *)(local_118._0_8_ + 8 + lVar20 * 8) =
                       (float)((uint)fVar40 ^ uVar23) / fVar29;
                  *(float *)(local_118._0_8_ + 0xc + lVar20 * 8) = fVar35 / fVar29;
                  pfVar18 = (float *)local_100._0_8_;
                }
                lVar19 = (longlong)((iVar25 + 1) % iVar16);
                fVar35 = pfVar18[lVar19 * 2] - pfVar18[lVar20 * 2 + 4];
                auVar41 = ZEXT464((uint)fVar35);
                fVar40 = pfVar18[lVar19 * 2 + 1] - pfVar18[lVar20 * 2 + 5];
                auVar37 = ZEXT464((uint)fVar40);
                fVar29 = fVar40 * fVar40 + fVar35 * fVar35;
                if (fVar29 < 0.0) {
                  fVar29 = (float)FUN_18061e150();
                  fVar35 = auVar41._0_4_;
                  fVar40 = auVar37._0_4_;
                }
                else {
                  fVar29 = SQRT(fVar29);
                }
                if (auVar39._0_4_ < fVar29) {
                  *(float *)(local_118._0_8_ + 0x10 + lVar20 * 8) =
                       (float)((uint)fVar40 ^ uVar23) / fVar29;
                  *(float *)(local_118._0_8_ + 0x14 + lVar20 * 8) = fVar35 / fVar29;
                  pfVar18 = (float *)local_100._0_8_;
                }
                lVar19 = (longlong)((iVar25 + 2) % iVar16);
                fVar35 = pfVar18[lVar19 * 2] - pfVar18[lVar20 * 2 + 6];
                auVar41 = ZEXT464((uint)fVar35);
                fVar40 = pfVar18[lVar19 * 2 + 1] - pfVar18[lVar20 * 2 + 7];
                auVar37 = ZEXT464((uint)fVar40);
                fVar29 = fVar40 * fVar40 + fVar35 * fVar35;
                if (fVar29 < 0.0) {
                  fVar29 = (float)FUN_18061e150();
                  fVar35 = auVar41._0_4_;
                  fVar40 = auVar37._0_4_;
                }
                else {
                  fVar29 = SQRT(fVar29);
                }
                if (auVar39._0_4_ < fVar29) {
                  *(float *)(local_118._0_8_ + 0x18 + lVar20 * 8) =
                       (float)((uint)fVar40 ^ uVar23) / fVar29;
                  *(float *)(local_118._0_8_ + 0x1c + lVar20 * 8) = fVar35 / fVar29;
                  pfVar18 = (float *)local_100._0_8_;
                }
                iVar25 = iVar25 + 4;
                lVar20 = lVar20 + 4;
                lVar21 = lVar21 + 0x20;
              } while (lVar20 < lVar24 + -3);
              fVar29 = local_150[0];
            }
            fVar35 = auVar44._0_4_;
            fVar40 = auVar33._0_4_;
            if (lVar20 < lVar24) {
              lVar21 = lVar20 * 8;
              do {
                fVar29 = (float)((int)fVar29 + 1);
                fVar32 = pfVar18[(longlong)((int)fVar29 % iVar16) * 2] -
                         *(float *)(lVar21 + (longlong)pfVar18);
                auVar41 = ZEXT464((uint)fVar32);
                fVar34 = pfVar18[(longlong)((int)fVar29 % iVar16) * 2 + 1] - pfVar18[lVar20 * 2 + 1]
                ;
                auVar37 = ZEXT464((uint)fVar34);
                fVar27 = fVar34 * fVar34 + fVar32 * fVar32;
                if (fVar27 < 0.0) {
                  fVar27 = (float)FUN_18061e150();
                  fVar32 = auVar41._0_4_;
                  fVar34 = auVar37._0_4_;
                }
                else {
                  fVar27 = SQRT(fVar27);
                }
                fVar35 = auVar44._0_4_;
                fVar40 = auVar33._0_4_;
                if (auVar39._0_4_ < fVar27) {
                  *(float *)(local_118._0_8_ + lVar20 * 8) = (float)((uint)fVar34 ^ uVar23) / fVar27
                  ;
                  *(float *)(local_118._0_8_ + 4 + lVar20 * 8) = fVar32 / fVar27;
                  pfVar18 = (float *)local_100._0_8_;
                }
                lVar20 = lVar20 + 1;
                lVar21 = lVar21 + 8;
              } while (lVar20 < lVar24);
            }
            uVar11 = local_158[0];
            if (((pfVar18[3] + pfVar18[1]) * auVar46._0_4_ - fVar40) *
                *(float *)(local_118._0_8_ + 4) +
                ((pfVar18[2] + *pfVar18) * auVar46._0_4_ - fVar35) * *(float *)local_118._0_8_ <
                fVar26) {
              iVar25 = 0;
              uVar3 = iVar16 * 2;
              if ((0 < (int)uVar3) && (0x1f < uVar3)) {
                uVar17 = uVar3 & 0x8000001f;
                if ((int)uVar17 < 0) {
                  uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
                }
                lVar21 = 0;
                lVar20 = 0x40;
                do {
                  puVar1 = (uint *)(local_118._0_8_ + lVar20 + -0x40);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  uVar7 = puVar1[4];
                  uVar8 = puVar1[5];
                  uVar9 = puVar1[6];
                  uVar10 = puVar1[7];
                  puVar2 = (uint *)(local_118._0_8_ + lVar20 + -0x40);
                  *puVar2 = *puVar1 ^ 0x80000000;
                  puVar2[1] = uVar4 ^ 0x80000000;
                  puVar2[2] = uVar5 ^ 0x80000000;
                  puVar2[3] = uVar6 ^ 0x80000000;
                  puVar2[4] = uVar7 ^ 0x80000000;
                  puVar2[5] = uVar8 ^ 0x80000000;
                  puVar2[6] = uVar9 ^ 0x80000000;
                  puVar2[7] = uVar10 ^ 0x80000000;
                  puVar1 = (uint *)(local_118._0_8_ + lVar20 + -0x20);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  uVar7 = puVar1[4];
                  uVar8 = puVar1[5];
                  uVar9 = puVar1[6];
                  uVar10 = puVar1[7];
                  puVar2 = (uint *)(local_118._0_8_ + lVar20 + -0x20);
                  *puVar2 = *puVar1 ^ 0x80000000;
                  puVar2[1] = uVar4 ^ 0x80000000;
                  puVar2[2] = uVar5 ^ 0x80000000;
                  puVar2[3] = uVar6 ^ 0x80000000;
                  puVar2[4] = uVar7 ^ 0x80000000;
                  puVar2[5] = uVar8 ^ 0x80000000;
                  puVar2[6] = uVar9 ^ 0x80000000;
                  puVar2[7] = uVar10 ^ 0x80000000;
                  puVar1 = (uint *)(local_118._0_8_ + lVar20);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  uVar7 = puVar1[4];
                  uVar8 = puVar1[5];
                  uVar9 = puVar1[6];
                  uVar10 = puVar1[7];
                  puVar2 = (uint *)(local_118._0_8_ + lVar20);
                  *puVar2 = *puVar1 ^ 0x80000000;
                  puVar2[1] = uVar4 ^ 0x80000000;
                  puVar2[2] = uVar5 ^ 0x80000000;
                  puVar2[3] = uVar6 ^ 0x80000000;
                  puVar2[4] = uVar7 ^ 0x80000000;
                  puVar2[5] = uVar8 ^ 0x80000000;
                  puVar2[6] = uVar9 ^ 0x80000000;
                  puVar2[7] = uVar10 ^ 0x80000000;
                  puVar1 = (uint *)(local_118._0_8_ + lVar20 + 0x20);
                  uVar4 = puVar1[1];
                  uVar5 = puVar1[2];
                  uVar6 = puVar1[3];
                  uVar7 = puVar1[4];
                  uVar8 = puVar1[5];
                  uVar9 = puVar1[6];
                  uVar10 = puVar1[7];
                  puVar2 = (uint *)(local_118._0_8_ + lVar20 + 0x20);
                  *puVar2 = *puVar1 ^ 0x80000000;
                  puVar2[1] = uVar4 ^ 0x80000000;
                  puVar2[2] = uVar5 ^ 0x80000000;
                  puVar2[3] = uVar6 ^ 0x80000000;
                  puVar2[4] = uVar7 ^ 0x80000000;
                  puVar2[5] = uVar8 ^ 0x80000000;
                  puVar2[6] = uVar9 ^ 0x80000000;
                  puVar2[7] = uVar10 ^ 0x80000000;
                  iVar25 = iVar25 + 0x20;
                  lVar21 = lVar21 + 0x20;
                  lVar20 = lVar20 + 0x80;
                } while (lVar21 < (int)(uVar3 - uVar17));
                pfVar18 = (float *)local_100._0_8_;
              }
              lVar20 = (longlong)iVar25;
              if (lVar20 < (longlong)local_138) {
                if ((longlong)(local_138 - lVar20) < 4) goto LAB_180432262;
                lVar21 = lVar20 * 4;
                do {
                  *(uint *)(local_118._0_8_ + lVar20 * 4) =
                       *(uint *)(lVar21 + local_118._0_8_) ^ uVar23;
                  *(uint *)(local_118._0_8_ + (lVar20 + 1) * 4) =
                       (uint)*(float *)(local_118._0_8_ + (lVar20 + 1) * 4) ^ uVar23;
                  *(uint *)(local_118._0_8_ + (lVar20 + 2) * 4) =
                       (uint)*(float *)(local_118._0_8_ + (lVar20 + 2) * 4) ^ uVar23;
                  *(uint *)(local_118._0_8_ + (lVar20 + 3) * 4) =
                       (uint)*(float *)(local_118._0_8_ + (lVar20 + 3) * 4) ^ uVar23;
                  lVar20 = lVar20 + 4;
                  lVar21 = lVar21 + 0x10;
                } while (lVar20 < (longlong)(local_138 - 3));
                for (; lVar20 < (longlong)local_138; lVar20 = lVar20 + 1) {
LAB_180432262:
                  *(uint *)(local_118._0_8_ + lVar20 * 4) =
                       (uint)*(float *)(local_118._0_8_ + lVar20 * 4) ^ uVar23;
                }
                pfVar18 = (float *)local_100._0_8_;
              }
            }
            if (0 < lVar24) {
              lVar20 = 0;
              iVar25 = iVar16 + -1;
              local_148 = 0;
              auVar44 = ZEXT464(0x3f800000);
              auVar33 = ZEXT464(0x40800000);
              while( true ) {
                auVar43 = auVar36._0_16_;
                auVar47 = auVar42._0_16_;
                auVar45 = auVar46._0_16_;
                auVar30 = auVar33._0_16_;
                auVar38 = auVar39._0_16_;
                fVar29 = (*(float *)(local_148 + local_118._0_8_) +
                         *(float *)(local_118._0_8_ + (longlong)(iVar25 % iVar16) * 2 * 4)) *
                         auVar46._0_4_;
                fVar35 = (*(float *)(local_118._0_8_ + (lVar20 * 2 + 1) * 4) +
                         *(float *)(local_118._0_8_ + ((longlong)(iVar25 % iVar16) * 2 + 1) * 4)) *
                         auVar46._0_4_;
                auVar31 = auVar44._0_16_;
                fVar26 = fVar35 * fVar35 + fVar29 * fVar29;
                if (fVar26 < 0.0) {
                  auVar42 = ZEXT1664(auVar31);
                  auVar44 = ZEXT1664(auVar31);
                  auVar46 = ZEXT1664(auVar30);
                  auVar33 = ZEXT1664(auVar38);
                  auVar36 = ZEXT1664(auVar43);
                  auVar39 = ZEXT1664(auVar45);
                  auVar41 = ZEXT1664(auVar47);
                  fVar26 = (float)FUN_18061e150();
                  auVar28 = auVar42._0_16_;
                  auVar43 = auVar36._0_16_;
                  auVar47 = auVar41._0_16_;
                  auVar45 = auVar39._0_16_;
                  auVar31 = auVar44._0_16_;
                  auVar30 = auVar46._0_16_;
                  auVar38 = auVar33._0_16_;
                }
                else {
                  fVar26 = SQRT(fVar26);
                  auVar28 = auVar31;
                }
                fVar40 = auVar28._0_4_;
                if (auVar38._0_4_ < fVar26) {
                  auVar28._0_4_ = auVar31._0_4_ / fVar26;
                  auVar28._4_12_ = auVar31._4_12_;
                  auVar28 = vminss_avx(auVar30,auVar28);
                  fVar40 = auVar28._0_4_;
                  fVar29 = fVar29 / fVar26;
                  fVar35 = fVar35 / fVar26;
                }
                fVar40 = fVar40 * auVar45._0_4_;
                fVar35 = fVar40 * fVar35;
                local_178 = (pfVar18[lVar20 * 2 + 1] - fVar35) / auVar47._0_4_;
                local_170._0_4_ = param_7;
                auVar41 = ZEXT464((uint)(fVar35 + pfVar18[lVar20 * 2 + 1]));
                auVar37 = ZEXT464((uint)(pfVar18[lVar20 * 2] + fVar40 * fVar29));
                auVar44 = ZEXT1664(auVar31);
                auVar33 = ZEXT1664(auVar30);
                auVar39 = ZEXT1664(auVar38);
                auVar36 = ZEXT1664(auVar43);
                auVar46 = ZEXT1664(auVar45);
                auVar42 = ZEXT1664(auVar47);
                FUN_1804354e0(local_140);
                local_178 = auVar41._0_4_ / auVar42._0_4_;
                auVar31._0_4_ = auVar37._0_4_ / auVar36._0_4_;
                auVar31._4_12_ = auVar37._4_12_;
                local_170 = (longlong *)CONCAT44(local_170._4_4_,uVar11);
                FUN_1804354e0(local_140,auVar37._0_8_,auVar41._0_8_,auVar31._0_8_);
                iVar25 = iVar25 + 1;
                lVar20 = lVar20 + 1;
                local_148 = local_148 + 8;
                if (lVar24 <= lVar20) break;
                pfVar18 = (float *)local_100._0_8_;
              }
            }
            plVar12 = local_140;
            iVar25 = 0;
            fVar26 = (float)local_128;
            uVar23 = (int)fVar26 + 1;
            iVar22 = iVar25;
            local_150[0] = fVar26;
            do {
              iVar22 = iVar22 + 1;
              local_148 = CONCAT44(local_148._4_4_,(int)fVar26 + 1 + (iVar22 % iVar16) * 2);
              local_158[0] = uVar23;
              FUN_1802aa650(plVar12 + 3,local_150);
              FUN_1802aa650(plVar12 + 3,local_158);
              FUN_1802aa650(plVar12 + 3,&local_148);
              *(int *)(plVar12[7] + -0x24) = *(int *)(plVar12[7] + -0x24) + 3;
              uVar23 = uVar23 + 2;
            } while (iVar22 < iVar16);
            fVar29 = fVar26;
            do {
              iVar25 = iVar25 + 1;
              iVar22 = (int)fVar26 + 1 + (iVar25 % iVar16) * 2;
              local_178 = (float)((int)fVar29 + 2);
              FUN_180435650(plVar12,(int)fVar29 + 1,iVar22,iVar22 + 1);
              fVar29 = (float)((int)fVar29 + 2);
            } while (iVar25 < iVar16);
            FUN_180159650(local_118);
          }
          FUN_180159650(local_100);
        }
      }
    }
    else if (((0.0 < param_4) && (0.0 < param_5)) && (DAT_180bbae18 != 0)) {
      fVar29 = (float)DAT_180bbaf70;
      fVar26 = (float)DAT_180bbaf74;
      if ((0.0 < fVar29) && (0.0 < fVar26)) {
        auVar41 = ZEXT1664(CONCAT124(in_ZMM1._4_12_,in_ZMM1._0_4_ / fVar29));
        auVar46 = ZEXT1664(CONCAT124(in_ZMM2._4_12_,in_ZMM2._0_4_ / fVar26));
        param_4 = in_ZMM1._0_4_ + param_4;
        auVar36 = ZEXT464((uint)param_4);
        auVar33 = ZEXT464((uint)(param_4 / fVar29));
        param_5 = in_ZMM2._0_4_ + param_5;
        auVar39 = ZEXT464((uint)param_5);
        param_5 = param_5 / fVar26;
        FUN_1804353e0(param_1);
        local_170._0_4_ = param_7;
        local_178 = auVar46._0_4_;
        uVar13 = FUN_1804354e0(param_1,auVar42._0_8_,auVar44._0_8_,auVar41._0_8_);
        local_170._0_4_ = param_7;
        local_178 = auVar46._0_4_;
        uVar14 = FUN_1804354e0(param_1,auVar36._0_8_,auVar44._0_8_,auVar33._0_8_);
        local_170._0_4_ = param_7;
        local_178 = param_5;
        uVar15 = FUN_1804354e0(param_1,auVar36._0_8_,auVar39._0_8_,auVar33._0_8_);
        local_170 = (longlong *)CONCAT44(local_170._4_4_,param_7);
        local_178 = param_5;
        local_178 = (float)FUN_1804354e0(param_1,auVar42._0_8_,auVar39._0_8_,auVar41._0_8_);
        FUN_180435650(param_1,uVar13,uVar14,uVar15);
      }
    }
  }
}



