// FUN_1802e5b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e5b50 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e5b50(longlong param_1,undefined4 *param_2,float param_3,int *param_4,int param_5)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  short sVar7;
  undefined8 uVar8;
  uint *puVar9;
  float *pfVar10;
  uint *puVar11;
  float *pfVar12;
  int iVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong uVar17;
  char *pcVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar36 [64];
  undefined1 auVar40 [64];
  float fVar41;
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auStack_2228 [32];
  float local_2208;
  uint local_2200;
  undefined4 local_21f8;
  float local_21f0 [12];
  undefined4 local_21c0;
  float local_21b8 [6];
  float local_21a0 [11];
  uint local_2174 [3];
  undefined1 *local_2168;
  char *local_2160;
  undefined4 local_2158;
  undefined4 local_2154;
  undefined4 local_2150;
  undefined4 local_2148;
  undefined4 uStack_2144;
  undefined4 uStack_2140;
  undefined4 uStack_213c;
  undefined4 uStack_2138;
  undefined4 uStack_2134;
  undefined4 uStack_2130;
  undefined4 uStack_212c;
  undefined1 local_2128 [16];
  undefined4 uStack_2118;
  undefined2 uStack_2114;
  undefined1 uStack_2112;
  undefined1 uStack_2111;
  undefined2 uStack_2110;
  undefined1 uStack_210e;
  undefined1 uStack_210d;
  float fStack_210c;
  undefined4 local_2108;
  undefined4 uStack_2104;
  undefined4 local_2100;
  undefined4 *local_20f8;
  undefined1 local_20f0 [2696];
  char local_1668 [108];
  ulonglong local_15fc [334];
  int local_b88;
  undefined1 local_b78 [2704];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2228;
  if (*(char *)(param_2 + 0x2d) != '\0') {
    fVar33 = (float)param_2[0x21];
    fVar24 = 3.0;
    auVar34 = ZEXT464(0x3e4ccccd);
    local_21b8[0] = 0.2;
    local_21b8[4] = 3.0;
    local_21b8[2] = fVar33;
    local_20f8 = param_2;
    sVar7 = thunk_FUN_180624430(fVar33);
    if (sVar7 < 1) {
      pfVar12 = local_21b8;
      if (auVar34._0_4_ <= fVar33) {
        pfVar12 = local_21b8 + 2;
      }
      pfVar10 = local_21b8 + 4;
      if (fVar33 <= fVar24) {
        pfVar10 = pfVar12;
      }
      fVar33 = *pfVar10;
    }
    else {
      fVar33 = 0.7;
    }
    iVar13 = param_2[0x26];
    local_21f0[6] = (float)iVar13;
    local_21a0[2] = fVar33;
    sVar7 = thunk_FUN_180624430(fVar33 + param_3);
    auVar28 = ZEXT864(0);
    if ((((0 < sVar7) || (fVar33 <= 0.0)) || (param_3 < 0.0)) || (fVar33 <= param_3)) {
      local_21f0[6] = 0.0;
    }
    else {
      local_21f8 = 4.2039e-45;
      local_21a0[4] = fVar24;
      local_21f0[2] = 1.4013e-45;
      pfVar12 = local_21a0;
      if (auVar34._0_4_ <= fVar33) {
        pfVar12 = local_21a0 + 2;
      }
      local_21a0[0] = auVar34._0_4_;
      pfVar10 = local_21a0 + 4;
      if (fVar33 <= fVar24) {
        pfVar10 = pfVar12;
      }
      auVar32 = ZEXT864(0);
      fVar33 = *pfVar10;
      pfVar12 = local_21f0 + 2;
      if (0 < iVar13) {
        pfVar12 = local_21f0 + 6;
      }
      pfVar10 = (float *)&local_21f8;
      if (iVar13 < 4) {
        pfVar10 = pfVar12;
      }
      iVar13 = 0;
      fVar24 = *pfVar10;
      if (0 < (int)fVar24) {
        uVar14 = 0x80000000;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        fVar31 = 0.012;
        fVar41 = 0.23;
        auVar44 = ZEXT464(0x3d23d70a);
        auVar25 = vminss_avx(ZEXT416((uint)(fVar33 * 0.18)),SUB6416(ZEXT464(0x3df5c28f),0));
        auVar34 = ZEXT1664(auVar25);
        do {
          fVar27 = param_3 - (float)iVar13 * auVar34._0_4_;
          fVar19 = auVar28._0_4_;
          if (fVar19 <= fVar27) {
            local_21a0[6] = fVar27 / fVar31;
            local_21a0[7] = 1.0;
            auVar25._0_4_ = (float)((uint)fVar27 ^ uVar14);
            auVar25._4_4_ = uVar37;
            auVar25._8_4_ = uVar38;
            auVar25._12_4_ = uVar39;
            local_21a0[5] = fVar19;
            pfVar12 = local_21a0 + 5;
            if (fVar19 <= local_21a0[6]) {
              pfVar12 = local_21a0 + 6;
            }
            pfVar10 = local_21a0 + 7;
            if (local_21a0[6] <= 1.0) {
              pfVar10 = pfVar12;
            }
            auVar20 = vmaxss_avx(ZEXT416((uint)(fVar33 * fVar41)),auVar44._0_16_);
            auVar20._0_4_ = auVar25._0_4_ / auVar20._0_4_;
            auVar20._4_12_ = auVar25._4_12_;
            fVar27 = *pfVar10;
            fVar19 = (float)FUN_180627ae0(auVar20._0_8_);
            auVar25 = vmaxss_avx(ZEXT416((uint)(fVar19 * (3.0 - (fVar27 + fVar27)) * fVar27 * fVar27
                                               )),auVar32._0_16_);
            auVar32 = ZEXT1664(auVar25);
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)fVar24);
      }
      auVar25 = vminss_avx(ZEXT416((uint)(fVar33 * 0.2)),SUB6416(ZEXT464(0x3df5c28f),0));
      auVar34 = ZEXT464(0x3e4ccccd);
      local_21a0[9] = (fVar33 - param_3) / auVar25._0_4_;
      pfVar12 = local_21a0 + 8;
      if (auVar28._0_4_ <= local_21a0[9]) {
        pfVar12 = local_21a0 + 9;
      }
      local_21a0[10] = 1.0;
      pfVar10 = local_21a0 + 10;
      if (local_21a0[9] <= 1.0) {
        pfVar10 = pfVar12;
      }
      local_21a0[8] = auVar28._0_4_;
      fVar33 = *pfVar10;
      local_21f0[6] = (3.0 - (fVar33 + fVar33)) * fVar33 * auVar32._0_4_ * fVar33;
    }
    auVar32 = ZEXT464(0x3f800000);
    if (auVar28._0_4_ < local_21f0[6]) {
      fVar33 = (float)param_2[0x22];
      fVar24 = 2200.0;
      fVar31 = 150.0;
      local_21f0[0] = 2200.0;
      local_21f0[2] = 150.0;
      local_21f8 = fVar33;
      sVar7 = thunk_FUN_180624430(fVar33);
      if (sVar7 < 1) {
        pfVar12 = local_21f0 + 2;
        if (fVar31 <= fVar33) {
          pfVar12 = (float *)&local_21f8;
        }
        pfVar10 = local_21f0;
        if (fVar33 <= fVar24) {
          pfVar10 = pfVar12;
        }
        auVar44 = ZEXT464((uint)*pfVar10);
      }
      else {
        auVar44 = ZEXT464(0x44160000);
      }
      fVar33 = (float)param_2[0x24];
      fVar24 = 80.0;
      puVar1 = param_2 + 0x25;
      uVar14 = *puVar1;
      local_21f8 = 80.0;
      local_21f0[0] = auVar28._0_4_;
      local_21f0[2] = fVar33;
      sVar7 = thunk_FUN_180624430(fVar33);
      if (sVar7 < 1) {
        pfVar12 = local_21f0;
        if (auVar28._0_4_ <= fVar33) {
          pfVar12 = local_21f0 + 2;
        }
        pfVar10 = (float *)&local_21f8;
        if (fVar33 <= fVar24) {
          pfVar10 = pfVar12;
        }
        local_2208 = *pfVar10;
      }
      else {
        local_2208 = 24.0;
      }
      local_21f0[10] = (float)*param_2;
      local_21f0[0xb] = (float)param_2[1];
      local_21c0 = param_2[2];
      local_2200 = uVar14;
      uVar8 = FUN_1802ca130(local_20f0,param_2[0xb],local_21f0 + 10,auVar44._0_8_);
      FUN_18063aed0(local_1668 + 0x60,uVar8,0xa84);
      if (param_5 < local_b88) {
        FUN_18063aed0(local_b78,uVar8,0xa84);
        local_2168 = local_b78;
        local_2174[0] = 0;
        local_b88 = 0;
        local_2160 = local_1668 + 0x60;
        puVar11 = local_2174;
        if (-1 < (int)*puVar1) {
          puVar11 = puVar1;
        }
        local_2174[1] = 8;
        iVar13 = 1;
        iVar16 = 0x20;
        puVar9 = local_2174 + 1;
        if ((int)*puVar1 < 9) {
          puVar9 = puVar11;
        }
        uVar14 = *puVar9;
        uVar17 = (ulonglong)uVar14;
        FUN_1802e65b0(&local_2168,0,0x20,1);
        do {
          if ((int)((int)(8 / (longlong)iVar13) * uVar14 + 0x20) <= param_5) break;
          iVar13 = iVar13 * 2;
        } while (iVar13 < 8);
        if (0 < (int)uVar14) {
          do {
            FUN_1802e65b0(&local_2168,iVar16,8,iVar13);
            iVar16 = iVar16 + 8;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (local_b88 <= *param_4) {
        iVar16 = 0;
        *param_4 = *param_4 - local_b88;
        local_1668[0] = '\0';
        local_1668[1] = '\0';
        local_1668[2] = '\0';
        local_1668[3] = '\0';
        local_1668[4] = '\0';
        local_1668[5] = '\0';
        local_1668[6] = '\0';
        local_1668[7] = '\0';
        local_1668[8] = '\0';
        local_1668[9] = '\0';
        local_1668[10] = '\0';
        local_1668[0xb] = '\0';
        local_1668[0xc] = '\0';
        local_1668[0xd] = '\0';
        local_1668[0xe] = '\0';
        local_1668[0xf] = '\0';
        local_1668[0x10] = '\0';
        local_1668[0x11] = '\0';
        local_1668[0x12] = '\0';
        local_1668[0x13] = '\0';
        local_1668[0x14] = '\0';
        local_1668[0x15] = '\0';
        local_1668[0x16] = '\0';
        local_1668[0x17] = '\0';
        local_1668[0x18] = '\0';
        local_1668[0x19] = '\0';
        local_1668[0x1a] = '\0';
        local_1668[0x1b] = '\0';
        local_1668[0x1c] = '\0';
        local_1668[0x1d] = '\0';
        local_1668[0x1e] = '\0';
        local_1668[0x1f] = '\0';
        local_1668[0x20] = '\0';
        local_1668[0x21] = '\0';
        local_1668[0x22] = '\0';
        local_1668[0x23] = '\0';
        local_1668[0x24] = '\0';
        local_1668[0x25] = '\0';
        local_1668[0x26] = '\0';
        local_1668[0x27] = '\0';
        local_1668[0x28] = '\0';
        local_1668[0x29] = '\0';
        local_1668[0x2a] = '\0';
        local_1668[0x2b] = '\0';
        local_1668[0x2c] = '\0';
        local_1668[0x2d] = '\0';
        local_1668[0x2e] = '\0';
        local_1668[0x2f] = '\0';
        local_1668[0x30] = '\0';
        local_1668[0x31] = '\0';
        local_1668[0x32] = '\0';
        local_1668[0x33] = '\0';
        local_1668[0x34] = '\0';
        local_1668[0x35] = '\0';
        local_1668[0x36] = '\0';
        local_1668[0x37] = '\0';
        local_1668[0x38] = '\0';
        local_1668[0x39] = '\0';
        local_1668[0x3a] = '\0';
        local_1668[0x3b] = '\0';
        local_1668[0x3c] = '\0';
        local_1668[0x3d] = '\0';
        local_1668[0x3e] = '\0';
        local_1668[0x3f] = '\0';
        local_1668[0x40] = '\0';
        local_1668[0x41] = '\0';
        local_1668[0x42] = '\0';
        local_1668[0x43] = '\0';
        local_1668[0x44] = '\0';
        local_1668[0x45] = '\0';
        local_1668[0x46] = '\0';
        local_1668[0x47] = '\0';
        local_1668[0x48] = '\0';
        local_1668[0x49] = '\0';
        local_1668[0x4a] = '\0';
        local_1668[0x4b] = '\0';
        local_1668[0x4c] = '\0';
        local_1668[0x4d] = '\0';
        local_1668[0x4e] = '\0';
        local_1668[0x4f] = '\0';
        local_1668[0x50] = '\0';
        local_1668[0x51] = '\0';
        local_1668[0x52] = '\0';
        local_1668[0x53] = '\0';
        local_1668[0x54] = '\0';
        local_1668[0x55] = '\0';
        local_1668[0x56] = '\0';
        local_1668[0x57] = '\0';
        local_1668[0x58] = '\0';
        local_1668[0x59] = '\0';
        local_1668[0x5a] = '\0';
        local_1668[0x5b] = '\0';
        local_1668[0x5c] = '\0';
        local_1668[0x5d] = '\0';
        local_1668[0x5e] = '\0';
        local_1668[0x5f] = '\0';
        iVar13 = local_b88;
        if (0 < local_b88) {
          pcVar18 = local_1668;
          puVar15 = local_15fc;
          do {
            auVar21._8_8_ = 0;
            auVar21._0_8_ = *(ulonglong *)((longlong)puVar15 + -0xc);
            auVar25 = vshufps_avx(auVar21,auVar21,0x55);
            local_21f0[0xb] = (float)auVar25._0_4_;
            local_21c0 = *(undefined4 *)((longlong)puVar15 + -4);
            local_21f0[10] = (float)*(ulonglong *)((longlong)puVar15 + -0xc);
            auVar28 = ZEXT1664(auVar28._0_16_);
            auVar34 = ZEXT1664(auVar34._0_16_);
            auVar32 = ZEXT1664(auVar32._0_16_);
            cVar6 = FUN_1802c9810(local_21f0 + 10,param_2[0x27]);
            if (cVar6 == '\0') {
LAB_1802e613e:
              cVar6 = '\0';
            }
            else {
              auVar22._8_8_ = 0;
              auVar22._0_8_ = *puVar15;
              auVar25 = vshufps_avx(auVar22,auVar22,0x55);
              local_2154 = auVar25._0_4_;
              local_2150 = (undefined4)puVar15[1];
              local_2158 = (undefined4)*puVar15;
              cVar6 = FUN_1802c9810(&local_2158,param_2[0x27]);
              if (cVar6 == '\0') goto LAB_1802e613e;
              cVar6 = '\x01';
            }
            iVar13 = local_b88;
            iVar16 = iVar16 + 1;
            *pcVar18 = cVar6;
            puVar15 = (ulonglong *)((longlong)puVar15 + 0x1c);
            pcVar18 = pcVar18 + 1;
          } while (iVar16 < iVar13);
        }
        local_2174[2] = *(undefined4 *)(param_1 + 0x1c);
        auVar36 = ZEXT464(0x41000000);
        auVar44 = ZEXT464(0x40800000);
        auVar45 = ZEXT464(0x3fc00000);
        auVar40 = ZEXT464(0x40c00000);
        auVar42 = ZEXT464(0x3f000000);
        local_21f0[2] = 0.0;
        do {
          fVar33 = local_21f0[2];
          auVar35 = auVar36._0_16_;
          local_21f0[4] = auVar34._0_4_;
          auVar21 = auVar34._0_16_;
          auVar25 = auVar28._0_16_;
          auVar20 = auVar44._0_16_;
          auVar22 = auVar32._0_16_;
          auVar23 = auVar40._0_16_;
          auVar26 = auVar42._0_16_;
          auVar43 = auVar45._0_16_;
          if (local_21f0[2] == 0.0) {
            if (*(char *)((longlong)param_2 + 0xa1) != '\0') {
              fVar24 = (float)param_2[0x2a];
              auVar34 = ZEXT1664(auVar25);
              auVar28 = ZEXT1664(auVar20);
              auVar32 = ZEXT1664(auVar21);
              auVar44 = ZEXT1664(auVar22);
              auVar40 = ZEXT1664(auVar35);
              auVar42 = ZEXT1664(auVar23);
              auVar45 = ZEXT1664(auVar26);
              auVar30 = ZEXT1664(auVar43);
              local_21f8 = fVar24;
              local_21f0[0] = local_21f0[4];
              local_21f0[4] = (float)auVar36._0_4_;
              sVar7 = thunk_FUN_180624430();
              auVar43 = auVar30._0_16_;
              auVar35 = auVar40._0_16_;
              auVar22 = auVar44._0_16_;
              auVar21 = auVar32._0_16_;
              auVar20 = auVar28._0_16_;
              auVar25 = auVar34._0_16_;
              auVar26 = auVar45._0_16_;
              auVar23 = auVar42._0_16_;
              if (sVar7 < 1) {
                pfVar12 = local_21f0;
                if (auVar32._0_4_ <= fVar24) {
                  pfVar12 = (float *)&local_21f8;
                }
                pfVar10 = local_21f0 + 4;
                if (fVar24 <= auVar40._0_4_) {
                  pfVar10 = pfVar12;
                }
                fVar24 = *pfVar10;
              }
              else {
                fVar24 = auVar28._0_4_;
              }
              *(float *)(param_1 + 0x1c) = fVar24;
LAB_1802e6208:
              local_21f8 = (float)param_2[0x1f];
              uVar14 = (uint)local_21f8 >> 0x18;
              if (fVar33 != 0.0) goto LAB_1802e62fc;
              fVar24 = (float)param_2[0x2b];
              local_21f0[8] = auVar22._0_4_;
              local_21f0[4] = auVar25._0_4_;
              auVar34 = ZEXT1664(auVar25);
              auVar28 = ZEXT1664(auVar20);
              auVar32 = ZEXT1664(auVar21);
              auVar44 = ZEXT1664(auVar22);
              auVar36 = ZEXT1664(auVar35);
              auVar40 = ZEXT1664(auVar23);
              auVar42 = ZEXT1664(auVar26);
              auVar45 = ZEXT1664(auVar43);
              local_21f0[0] = fVar24;
              sVar7 = thunk_FUN_180624430();
              auVar43 = auVar45._0_16_;
              auVar35 = auVar36._0_16_;
              auVar22 = auVar44._0_16_;
              auVar21 = auVar32._0_16_;
              auVar20 = auVar28._0_16_;
              auVar25 = auVar34._0_16_;
              auVar26 = auVar42._0_16_;
              auVar23 = auVar40._0_16_;
              if (sVar7 < 1) {
                pfVar12 = local_21f0 + 4;
                if (auVar34._0_4_ <= fVar24) {
                  pfVar12 = local_21f0;
                }
                pfVar10 = local_21f0 + 8;
                if (fVar24 <= auVar44._0_4_) {
                  pfVar10 = pfVar12;
                }
                fVar24 = *pfVar10;
              }
              else {
                fVar24 = 0.65;
              }
              auVar29 = SUB6416(ZEXT464(0x40400000),0);
              local_21f8 = (float)CONCAT13((char)(int)((float)uVar14 * local_21f0[6] * fVar24),
                                           (undefined3)local_21f8);
              goto LAB_1802e6332;
            }
          }
          else {
            if (*(char *)(param_2 + 0x28) == '\0') {
              fVar24 = auVar28._0_4_;
            }
            else {
              fVar24 = (float)param_2[0x29];
              local_21f8 = auVar44._0_4_;
              auVar34 = ZEXT1664(auVar25);
              auVar28 = ZEXT1664(auVar20);
              auVar32 = ZEXT1664(auVar21);
              auVar44 = ZEXT1664(auVar22);
              auVar36 = ZEXT1664(auVar35);
              auVar40 = ZEXT1664(auVar23);
              auVar42 = ZEXT1664(auVar26);
              auVar45 = ZEXT1664(auVar43);
              local_21f0[0] = fVar24;
              sVar7 = thunk_FUN_180624430();
              auVar43 = auVar45._0_16_;
              auVar35 = auVar36._0_16_;
              auVar22 = auVar44._0_16_;
              auVar21 = auVar32._0_16_;
              auVar20 = auVar28._0_16_;
              auVar25 = auVar34._0_16_;
              auVar26 = auVar42._0_16_;
              auVar23 = auVar40._0_16_;
              if (sVar7 < 1) {
                pfVar12 = local_21f0 + 4;
                if (auVar32._0_4_ <= fVar24) {
                  pfVar12 = local_21f0;
                }
                pfVar10 = (float *)&local_21f8;
                if (fVar24 <= auVar28._0_4_) {
                  pfVar10 = pfVar12;
                }
                fVar24 = *pfVar10;
              }
              else {
                fVar24 = 1.2;
              }
            }
            *(float *)(param_1 + 0x1c) = fVar24;
            if (fVar33 != 2.8026e-45) goto LAB_1802e6208;
            local_21f8 = (float)param_2[0x20];
            uVar14 = (uint)local_21f8 >> 0x18;
LAB_1802e62fc:
            local_21f8 = (float)CONCAT13((char)(int)((float)uVar14 * local_21f0[6]),
                                         (undefined3)local_21f8);
            auVar29 = vpcmpeqd_avx(ZEXT416((uint)fVar33),SUB6416(ZEXT464(1),0));
            auVar29 = vblendvps_avx(SUB6416(ZEXT464(0x3f19999a),0),auVar43,auVar29);
LAB_1802e6332:
            fVar24 = (float)param_2[0x23];
            local_21f0[0] = auVar23._0_4_;
            local_21f0[8] = auVar26._0_4_;
            auVar28 = ZEXT1664(auVar25);
            auVar30 = ZEXT1664(auVar29);
            auVar44 = ZEXT1664(auVar20);
            auVar34 = ZEXT1664(auVar21);
            auVar32 = ZEXT1664(auVar22);
            auVar36 = ZEXT1664(auVar35);
            auVar40 = ZEXT1664(auVar23);
            auVar42 = ZEXT1664(auVar26);
            auVar45 = ZEXT1664(auVar43);
            local_21f0[4] = fVar24;
            sVar7 = thunk_FUN_180624430();
            fVar31 = local_21f8;
            if (sVar7 < 1) {
              pfVar12 = local_21f0 + 8;
              if (auVar42._0_4_ <= fVar24) {
                pfVar12 = local_21f0 + 4;
              }
              pfVar10 = local_21f0;
              if (fVar24 <= auVar40._0_4_) {
                pfVar10 = pfVar12;
              }
              fVar24 = *pfVar10;
            }
            else {
              fVar24 = auVar45._0_4_;
            }
            iVar16 = 0;
            fVar24 = auVar30._0_4_ * fVar24;
            if (0 < iVar13) {
              pcVar18 = local_1668;
              uVar5 = local_21f8._2_1_;
              puVar15 = local_15fc;
              do {
                if (*pcVar18 != '\0') {
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = *puVar15;
                  uVar17 = *(ulonglong *)((longlong)puVar15 + -0xc);
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar17;
                  plVar2 = *(longlong **)(param_1 + 8);
                  auVar35._12_4_ = 0;
                  auVar35._0_12_ = ZEXT812(0);
                  local_2128 = auVar35 << 0x20;
                  auVar25 = vshufps_avx(auVar23,auVar23,0x55);
                  uStack_2140 = auVar25._0_4_;
                  uStack_213c = *(undefined4 *)((longlong)puVar15 + -4);
                  auVar20 = vshufps_avx(auVar26,auVar26,0x55);
                  uStack_2134 = auVar20._0_4_;
                  uVar4 = puVar15[1];
                  uStack_2130 = (int)uVar4;
                  fStack_210c = fVar24 * *(float *)((longlong)puVar15 + 0xc);
                  uStack_2138 = (undefined4)*puVar15;
                  local_2100 = *(undefined4 *)(param_1 + 0x1c);
                  uStack_2111 = (undefined1)((uint)fVar31 >> 0x18);
                  uStack_210d = uStack_2111;
                  uStack_2104 = *(undefined4 *)(param_1 + 0x18);
                  uStack_212c = auVar28._0_4_;
                  uStack_2118 = uStack_212c;
                  local_2108 = uStack_212c;
                  uStack_2144 = (int)uVar17;
                  local_2148 = 0;
                  uStack_2114 = (undefined2)local_21f8;
                  uStack_2112 = uVar5;
                  uStack_2110 = (undefined2)local_21f8;
                  uStack_210e = uVar5;
                  if (plVar2 == *(longlong **)(param_1 + 0x10)) {
                    auVar28 = ZEXT1664(auVar28._0_16_);
                    auVar44 = ZEXT1664(auVar44._0_16_);
                    auVar34 = ZEXT1664(auVar34._0_16_);
                    auVar32 = ZEXT1664(auVar32._0_16_);
                    auVar36 = ZEXT1664(auVar36._0_16_);
                    auVar40 = ZEXT1664(auVar40._0_16_);
                    auVar42 = ZEXT1664(auVar42._0_16_);
                    auVar45 = ZEXT1664(auVar45._0_16_);
                    FUN_1802eafb0(param_1,plVar2,&local_2148);
                  }
                  else {
                    auVar3._12_4_ = uStack_212c;
                    auVar3._0_12_ = ZEXT812(0);
                    auVar3._16_2_ = (undefined2)local_21f8;
                    auVar3[0x12] = uVar5;
                    auVar3[0x13] = uStack_2111;
                    auVar3._20_2_ = (undefined2)local_21f8;
                    auVar3[0x16] = uVar5;
                    auVar3[0x17] = uStack_2111;
                    auVar3._24_4_ = fStack_210c;
                    auVar3._28_4_ = 0;
                    *plVar2 = uVar17 << 0x20;
                    plVar2[1] = CONCAT44(uStack_213c,auVar25._0_4_);
                    plVar2[2] = CONCAT44(auVar20._0_4_,uStack_2138);
                    plVar2[3] = CONCAT44(uStack_212c,(int)uVar4);
                    *(undefined1 (*) [32])(plVar2 + 4) = auVar3 << 0x20;
                    plVar2[8] = CONCAT44(uStack_2104,uStack_212c);
                    *(undefined4 *)(plVar2 + 9) = local_2100;
                    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x4c;
                  }
                  *(undefined4 *)(*(longlong *)(param_1 + 8) + -0xc) = 0x3f800000;
                  iVar13 = local_b88;
                }
                iVar16 = iVar16 + 1;
                pcVar18 = pcVar18 + 1;
                puVar15 = (ulonglong *)((longlong)puVar15 + 0x1c);
              } while (iVar16 < iVar13);
              param_2 = local_20f8;
              fVar33 = local_21f0[2];
            }
          }
          local_21f0[2] = (float)((int)fVar33 + 1);
        } while ((int)local_21f0[2] < 3);
        *(uint *)(param_1 + 0x1c) = local_2174[2];
      }
    }
  }
}



