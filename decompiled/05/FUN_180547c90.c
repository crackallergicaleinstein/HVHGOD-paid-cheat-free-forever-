// FUN_180547c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180547c90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180547c90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  float param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  float fVar23;
  float fVar24;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  uint local_1d0;
  undefined4 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4 [4];
  float local_194;
  uint local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  longlong local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  local_120 = param_3;
  uVar4 = local_120;
  local_128 = param_2;
  uVar3 = local_128;
  if (1 < (ulonglong)(*(longlong *)(param_4 + 0x18) - *(longlong *)(param_4 + 0x10) >> 2)) {
    local_120._0_4_ = (float)param_3;
    local_128._0_4_ = (float)param_2;
    if ((float)local_128 < (float)local_120) {
      local_128._4_4_ = (float)((ulonglong)param_2 >> 0x20);
      local_120._4_4_ = (float)((ulonglong)param_3 >> 0x20);
      if (local_128._4_4_ < local_120._4_4_) {
        uVar12 = 1;
        fVar15 = 0.5;
        auVar22 = ZEXT464(0x3f800000);
        fVar16 = (float)local_120;
        fVar17 = local_128._4_4_;
        fVar23 = (float)local_128;
        fVar24 = local_120._4_4_;
        if (DAT_180b0d5dc != '\0') {
          fVar21 = 0.25;
          iVar10 = 1;
          fVar19 = local_120._4_4_ - local_128._4_4_;
          local_128 = uVar3;
          local_120 = uVar4;
          do {
            fStack_114 = (float)iVar10 * fVar19 * fVar21 + fVar17;
            local_1c8 = DAT_180b0d5b8;
            fVar18 = local_1c8;
            local_1c8._3_1_ = (char)((uint)DAT_180b0d5b8 >> 0x18);
            local_118 = fVar16;
            local_1b8 = fVar23;
            local_1b4 = fStack_114;
            if (local_1c8._3_1_ != '\0') {
              local_1d0 = *(uint *)(param_1 + 0x30);
              if (((local_1d0 & 0xe0000) == 0) || ((local_1d0 & 0xe0000) != 0xe0000)) {
                pfVar8 = &local_118;
                pfVar7 = &local_1b8;
              }
              else {
                local_108 = fVar16 + fVar15;
                fStack_10c = fStack_114 + fVar15;
                local_110 = fVar23 + fVar15;
                pfVar8 = &local_108;
                pfVar7 = &local_110;
                local_104 = fStack_10c;
              }
              local_1d8 = auVar22._0_4_;
              local_1c8 = fVar18;
              FUN_1804dc7e0(param_1,pfVar7,pfVar8);
            }
            iVar10 = iVar10 + 1;
            uVar3 = local_128;
            uVar4 = local_120;
          } while (iVar10 < 4);
        }
        local_120 = uVar4;
        local_128 = uVar3;
        auVar1 = vmaxss_avx(ZEXT416(*(uint *)(param_4 + 4)),ZEXT416(0x42480000));
        auVar14 = ZEXT1664(auVar1);
        lVar9 = *(longlong *)(param_4 + 0x10);
        pfVar8 = (float *)&local_1c8;
        local_138 = param_4;
        if (fVar15 <= DAT_180b0d5c0) {
          pfVar8 = &DAT_180b0d5c0;
        }
        pfVar7 = &local_1c0;
        if (DAT_180b0d5c0 <= 4.0) {
          pfVar7 = pfVar8;
        }
        local_1c0 = 4.0;
        local_1c8 = fVar15;
        local_190 = auVar1._0_4_;
        fVar19 = param_5 * *pfVar7;
        local_130 = &DAT_180b0d4c8;
        if (1 < (ulonglong)(*(longlong *)(param_4 + 0x18) - lVar9 >> 2)) {
          local_b8 = unaff_XMM13_Qa;
          uStack_b0 = unaff_XMM13_Qb;
          fVar21 = 0.0;
          local_1c0 = 0.0;
          local_1ac = 0.0;
          local_1b0 = auVar22._0_4_;
          local_1c8 = fVar16 - fVar23;
          local_1b8 = fVar24 - fVar17;
          local_1a8 = auVar22._0_4_;
          do {
            uVar11 = *(longlong *)(param_4 + 0x18) - lVar9 >> 2;
            local_1bc = *(float *)(lVar9 + -4 + uVar12 * 4) / auVar14._0_4_;
            fVar17 = (float)(uVar11 - 1);
            fVar16 = ((float)(uVar12 - 1) * local_1c8) / fVar17 + fVar23;
            pfVar8 = &local_1c0;
            if (fVar21 <= local_1bc) {
              pfVar8 = &local_1bc;
            }
            local_110 = fVar16;
            pfVar7 = &local_1b0;
            if (local_1bc <= auVar22._0_4_) {
              pfVar7 = pfVar8;
            }
            fVar18 = fVar24 - local_1b8 * *pfVar7;
            fStack_10c = fVar18;
            local_1bc = *(float *)(lVar9 + uVar12 * 4) / auVar14._0_4_;
            fVar17 = ((float)uVar12 * local_1c8) / fVar17 + fVar23;
            pfVar8 = &local_1ac;
            if (fVar21 <= local_1bc) {
              pfVar8 = &local_1bc;
            }
            local_118 = fVar17;
            pfVar7 = &local_1a8;
            if (local_1bc <= auVar22._0_4_) {
              pfVar7 = pfVar8;
            }
            fVar20 = fVar24 - local_1b8 * *pfVar7;
            fStack_114 = fVar20;
            uVar5 = FUN_180548530(&local_138,uVar12);
            if (DAT_180b0d5bc == 2) {
              auVar1 = vmaxss_avx(ZEXT416((uint)(local_1c8 / (float)uVar11)),auVar22._0_16_);
              local_18c = auVar1._0_4_ + fVar17;
              local_1d0 = 0;
              local_1d8 = fVar21;
              local_188 = fVar24;
              local_184 = fVar17;
              local_180 = fVar20;
              FUN_1804df870(param_1,&local_184,&local_18c,uVar5);
            }
            else {
              if (DAT_180b0d5cc == '\0') {
                local_1a4[1] = DAT_180b0d5d0 * 0.01;
                pfVar8 = local_1a4;
                if (fVar21 <= local_1a4[1]) {
                  pfVar8 = local_1a4 + 1;
                }
                pfVar7 = local_1a4 + 2;
                if (local_1a4[1] <= 0.6) {
                  pfVar7 = pfVar8;
                }
                local_1a4[2] = 0.6;
                local_1a4[0] = fVar21;
                fVar2 = ((float)(uVar5 >> 0x18) / 255.0) * *pfVar7;
                fVar13 = fVar21;
                if (fVar21 <= fVar2) {
                  auVar1 = vminss_avx(auVar22._0_16_,ZEXT416((uint)fVar2));
                  fVar13 = auVar1._0_4_;
                }
                uVar6 = (int)(longlong)(fVar13 * 255.0 + fVar15) << 0x18;
                if (uVar6 != 0) {
                  local_100 = CONCAT44(fStack_10c,local_110);
                  local_f8 = CONCAT44(fStack_114,local_118);
                  local_1d8 = 0.0;
                  local_f0 = fVar17;
                  local_ec = fVar24;
                  local_e8 = fVar16;
                  local_e4 = fVar24;
                  FUN_1804dafe0(param_1,&local_100,4,uVar5 & 0xffffff | uVar6);
                  fVar20 = fStack_114;
                  fVar17 = local_118;
                  fVar18 = fStack_10c;
                  fVar16 = local_110;
                }
              }
              if (DAT_180b0d5d4 != '\0') {
                pfVar8 = local_1a4 + 3;
                if (fVar21 <= DAT_180b0d5d8) {
                  pfVar8 = &DAT_180b0d5d8;
                }
                local_194 = auVar22._0_4_;
                pfVar7 = &local_194;
                if (DAT_180b0d5d8 <= auVar22._0_4_) {
                  pfVar7 = pfVar8;
                }
                local_1a4[3] = fVar21;
                fVar2 = *pfVar7 * 0.15 * ((float)(uVar5 >> 0x18) / 255.0);
                if (fVar21 <= fVar2) {
                  auVar1 = vminss_avx(auVar22._0_16_,ZEXT416((uint)fVar2));
                  uVar6 = (int)(longlong)(auVar1._0_4_ * 255.0 + fVar15) << 0x18;
                  if (uVar6 != 0) {
                    local_1d0 = *(uint *)(param_1 + 0x30);
                    if (((local_1d0 & 0xe0000) == 0) || ((local_1d0 & 0xe0000) != 0xe0000)) {
                      pfVar7 = &local_118;
                      pfVar8 = &local_110;
                    }
                    else {
                      local_17c = fVar17 + fVar15;
                      local_178 = fVar20 + fVar15;
                      local_174 = fVar16 + fVar15;
                      local_170 = fVar18 + fVar15;
                      pfVar7 = &local_17c;
                      pfVar8 = &local_174;
                    }
                    local_1d8 = param_5 * 4.0 + fVar19;
                    FUN_1804dc7e0(param_1,pfVar8,pfVar7,uVar5 & 0xffffff | uVar6);
                    fVar20 = fStack_114;
                    fVar17 = local_118;
                    fVar18 = fStack_10c;
                    fVar16 = local_110;
                  }
                }
              }
              if (DAT_180b0d5bc == 1) {
                local_108 = fVar17;
                local_104 = fVar18;
                if ((uVar5 & 0xff000000) != 0) {
                  local_1d0 = *(uint *)(param_1 + 0x30);
                  if (((local_1d0 & 0xe0000) == 0) || ((local_1d0 & 0xe0000) != 0xe0000)) {
                    pfVar8 = &local_108;
                    pfVar7 = &local_110;
                  }
                  else {
                    local_16c = fVar17 + fVar15;
                    local_168 = fVar18 + fVar15;
                    local_164 = fVar16 + fVar15;
                    pfVar8 = &local_16c;
                    pfVar7 = &local_164;
                    local_160 = local_168;
                  }
                  local_1d8 = fVar19;
                  FUN_1804dc7e0(param_1,pfVar7,pfVar8,uVar5);
                  local_1d0 = *(uint *)(param_1 + 0x30);
                  if (((local_1d0 & 0xe0000) == 0) || ((local_1d0 & 0xe0000) != 0xe0000)) {
                    pfVar8 = &local_108;
LAB_180548448:
                    pfVar7 = &local_118;
                  }
                  else {
                    local_15c = fVar15 + local_118;
                    local_158 = fVar15 + fStack_114;
                    local_154 = fVar15 + local_108;
                    local_150 = fVar15 + local_104;
                    pfVar7 = &local_15c;
                    pfVar8 = &local_154;
                  }
LAB_18054844c:
                  local_1d8 = fVar19;
                  FUN_1804dc7e0(param_1,pfVar8,pfVar7,uVar5);
                }
              }
              else if ((uVar5 & 0xff000000) != 0) {
                local_1d0 = *(uint *)(param_1 + 0x30);
                if (((local_1d0 & 0xe0000) == 0) || ((local_1d0 & 0xe0000) != 0xe0000)) {
                  pfVar8 = &local_110;
                  goto LAB_180548448;
                }
                local_14c = fVar17 + fVar15;
                local_148 = fVar20 + fVar15;
                local_144 = fVar16 + fVar15;
                local_140 = fVar18 + fVar15;
                pfVar7 = &local_14c;
                pfVar8 = &local_144;
                goto LAB_18054844c;
              }
            }
            lVar9 = *(longlong *)(param_4 + 0x10);
            uVar12 = uVar12 + 1;
            auVar14 = ZEXT464(local_190);
          } while (uVar12 < (ulonglong)(*(longlong *)(param_4 + 0x18) - lVar9 >> 2));
        }
      }
    }
  }
}



