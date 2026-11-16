// FUN_1803d9460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d9460 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d9460(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 extraout_var [56];
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auStack_198 [48];
  byte local_168;
  int local_164;
  char local_160;
  char local_15f [3];
  int local_15c;
  ulonglong local_158;
  longlong local_150;
  uint local_148;
  uint uStack_144;
  uint local_140;
  longlong local_138;
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  longlong local_120;
  undefined4 local_118;
  uint uStack_114;
  undefined8 *local_110;
  char *local_108;
  undefined8 uStack_100;
  int local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  uint uStack_c4;
  char local_b8 [64];
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  if (param_2 == 0) goto LAB_1803d9d95;
  local_138 = param_2;
  local_110 = param_1;
  lVar9 = FUN_18017ea70();
  iVar15 = 0;
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x160 == 0) {
    bVar19 = false;
    iVar8 = local_164;
  }
  else {
    local_15c = 0;
    cVar4 = FUN_1804514f0(&local_15c,param_2 + 0x160,4);
    if (cVar4 == '\0') {
      bVar19 = false;
      iVar8 = local_164;
    }
    else {
      bVar19 = true;
      iVar8 = local_15c;
    }
  }
  local_168 = bVar19;
  local_15c = iVar8;
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x168 == 0) {
    cVar4 = '\0';
    lVar9 = local_138;
  }
  else {
    local_150 = 0;
    cVar4 = FUN_1804514f0(&local_150,param_2 + 0x168,8);
    if (cVar4 == '\0') {
      cVar4 = '\0';
      lVar9 = local_138;
    }
    else {
      cVar4 = '\x01';
      lVar9 = local_150;
    }
  }
  local_160 = cVar4;
  local_120 = lVar9;
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (((((bool)bVar19 == false) || (0x3ff < iVar8 - 1U)) || (cVar4 == '\0')) || (lVar9 == 0))
  goto LAB_1803d9d95;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x170 == 0) {
    bVar17 = false;
    iVar12 = local_164;
  }
  else {
    local_158 = local_158 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_158,param_2 + 0x170,4);
    if (cVar4 == '\0') {
      bVar17 = false;
      iVar12 = local_164;
    }
    else {
      bVar17 = true;
      iVar12 = (int)(float)local_158;
    }
  }
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if (bVar17) {
    bVar17 = iVar12 != iVar8;
  }
  else {
    bVar17 = (bool)bVar19;
  }
  if (bVar17 != false) goto LAB_1803d9d95;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x178 == 0) {
    bVar17 = false;
    iVar12 = local_164;
  }
  else {
    local_158 = local_158 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_158,param_2 + 0x178,4);
    if (cVar4 == '\0') {
      bVar17 = false;
      iVar12 = local_164;
    }
    else {
      bVar17 = true;
      iVar12 = (int)(float)local_158;
    }
  }
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if (bVar17) {
    bVar17 = iVar12 != iVar8;
  }
  else {
    bVar17 = (bool)bVar19;
  }
  if (bVar17 != false) goto LAB_1803d9d95;
  auVar24 = ZEXT864(0);
  iVar12 = -1;
  uStack_f0 = 0;
  local_f8 = -1;
  uStack_ec = uStack_ec & 0xffffff00;
  uStack_c4 = uStack_c4 & 0xffffff00;
  iStack_f4 = iVar8;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 400 == 0) {
    bVar17 = false;
    iVar13 = local_164;
  }
  else {
    local_158 = local_158 & 0xffffffff00000000;
    cVar4 = FUN_1804514f0(&local_158,param_2 + 400,4);
    if (cVar4 == '\0') {
      bVar17 = false;
      iVar13 = local_164;
    }
    else {
      bVar17 = true;
      iVar13 = (int)(float)local_158;
    }
  }
  lVar9 = FUN_18017ea70();
  if (*(int *)(lVar9 + 4) != 0) {
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
  }
  if (bVar17) {
    bVar17 = iVar13 == iVar8;
  }
  else {
    bVar17 = (bool)(bVar19 ^ 1);
  }
  if (bVar17 == false) {
LAB_1803d97eb:
    lVar9 = 0;
  }
  else {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (param_2 + 0x1a0 == 0) {
      bVar17 = false;
      iVar13 = local_164;
    }
    else {
      local_158 = local_158 & 0xffffffff00000000;
      cVar4 = FUN_1804514f0(&local_158,param_2 + 0x1a0,4);
      if (cVar4 == '\0') {
        bVar17 = false;
        iVar13 = local_164;
      }
      else {
        bVar17 = true;
        iVar13 = (int)(float)local_158;
      }
    }
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (bVar17) {
      bVar17 = iVar13 == iVar8;
    }
    else {
      bVar17 = (bool)(bVar19 ^ 1);
    }
    if (bVar17 == false) goto LAB_1803d97eb;
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (param_2 + 0x198 == 0) {
      bVar17 = false;
      lVar9 = local_138;
    }
    else {
      local_150 = 0;
      cVar4 = FUN_1804514f0(&local_150,param_2 + 0x198,8);
      if (cVar4 == '\0') {
        bVar17 = false;
        lVar9 = local_138;
      }
      else {
        bVar17 = true;
        lVar9 = local_150;
      }
    }
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (!bVar17) {
      lVar9 = 0;
    }
  }
  local_164 = 0;
  local_128 = lVar9;
  if (0 < iVar8) {
    uVar16 = CONCAT44(uStack_144,local_148);
    auVar22 = ZEXT464(0x461c4000);
    lVar10 = local_120;
    local_150 = lVar9;
    cVar4 = local_15f[0];
    do {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      if (lVar10 == 0) {
        bVar17 = false;
      }
      else {
        local_158 = 0;
        cVar5 = FUN_1804514f0(&local_158,lVar10,8);
        if (cVar5 == '\0') {
          bVar17 = false;
        }
        else {
          bVar17 = true;
          uVar16 = local_158;
        }
      }
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if (bVar17) {
        if (uVar16 != 0) {
          local_b8[0] = '\0';
          local_b8[1] = '\0';
          local_b8[2] = '\0';
          local_b8[3] = '\0';
          local_b8[4] = '\0';
          local_b8[5] = '\0';
          local_b8[6] = '\0';
          local_b8[7] = '\0';
          local_b8[8] = '\0';
          local_b8[9] = '\0';
          local_b8[10] = '\0';
          local_b8[0xb] = '\0';
          local_b8[0xc] = '\0';
          local_b8[0xd] = '\0';
          local_b8[0xe] = '\0';
          local_b8[0xf] = '\0';
          local_b8[0x10] = '\0';
          local_b8[0x11] = '\0';
          local_b8[0x12] = '\0';
          local_b8[0x13] = '\0';
          local_b8[0x14] = '\0';
          local_b8[0x15] = '\0';
          local_b8[0x16] = '\0';
          local_b8[0x17] = '\0';
          local_b8[0x18] = '\0';
          local_b8[0x19] = '\0';
          local_b8[0x1a] = '\0';
          local_b8[0x1b] = '\0';
          local_b8[0x1c] = '\0';
          local_b8[0x1d] = '\0';
          local_b8[0x1e] = '\0';
          local_b8[0x1f] = '\0';
          local_b8[0x20] = '\0';
          local_b8[0x21] = '\0';
          local_b8[0x22] = '\0';
          local_b8[0x23] = '\0';
          local_b8[0x24] = '\0';
          local_b8[0x25] = '\0';
          local_b8[0x26] = '\0';
          local_b8[0x27] = '\0';
          local_b8[0x28] = '\0';
          local_b8[0x29] = '\0';
          local_b8[0x2a] = '\0';
          local_b8[0x2b] = '\0';
          local_b8[0x2c] = '\0';
          local_b8[0x2d] = '\0';
          local_b8[0x2e] = '\0';
          local_b8[0x2f] = '\0';
          local_b8[0x30] = '\0';
          local_b8[0x31] = '\0';
          local_b8[0x32] = '\0';
          local_b8[0x33] = '\0';
          local_b8[0x34] = '\0';
          local_b8[0x35] = '\0';
          local_b8[0x36] = '\0';
          local_b8[0x37] = '\0';
          local_b8[0x38] = '\0';
          local_b8[0x39] = '\0';
          local_b8[0x3a] = '\0';
          local_b8[0x3b] = '\0';
          local_b8[0x3c] = '\0';
          local_b8[0x3d] = '\0';
          local_b8[0x3e] = '\0';
          local_b8[0x3f] = '\0';
          uVar14 = uVar16;
LAB_1803d98b0:
          auVar22 = ZEXT1664(auVar22._0_16_);
          auVar24 = ZEXT1664(auVar24._0_16_);
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          if (uVar14 == 0) {
            bVar17 = false;
          }
          else {
            local_15f[0] = '\0';
            cVar5 = FUN_1804514f0(local_15f,uVar14,1);
            if (cVar5 == '\0') {
              bVar17 = false;
            }
            else {
              bVar17 = true;
              cVar4 = local_15f[0];
            }
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if (!bVar17) goto LAB_1803d9938;
          cVar5 = cVar4 + ' ';
          if (0x19 < (byte)(cVar4 + 0xbfU)) {
            cVar5 = cVar4;
          }
          local_b8[uVar14 - uVar16] = cVar5;
          if (cVar4 != '\0') goto code_r0x0001803d9925;
          uVar14 = 0xffffffffffffffff;
          do {
            uStack_100 = uVar14 + 1;
            lVar9 = uVar14 + 1;
            uVar14 = uStack_100;
          } while (local_b8[lVar9] != '\0');
          local_108 = local_b8;
          iVar8 = FUN_1803d6a10(&local_108);
          uVar3 = uStack_144;
          if (iVar8 == 0) {
LAB_1803d9938:
            iVar12 = local_f8;
            goto LAB_1803d993b;
          }
          if (local_128 == 0) {
            uStack_144 = uStack_144 & 0xffffff00;
            local_158 = CONCAT44(uVar3,local_148) & 0xffffff00ffffffff;
          }
          else {
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            if (local_150 == 0) {
LAB_1803d9a26:
              uStack_114 = uStack_114 & 0xffffff00;
            }
            else {
              local_158 = CONCAT44(local_158._4_4_,auVar24._0_4_);
              cVar5 = FUN_1804514f0(&local_158,local_150,4);
              if (cVar5 == '\0') goto LAB_1803d9a26;
              local_118 = (float)local_158;
              uStack_114 = CONCAT31(uStack_114._1_3_,1);
            }
            lVar9 = FUN_18017ea70();
            if (*(int *)(lVar9 + 4) != 0) {
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
            }
            local_158 = CONCAT44(uStack_114,local_118);
          }
          if ((char)(local_158 >> 0x20) == '\0') {
LAB_1803d9a83:
            uVar6 = 0;
          }
          else {
            fVar21 = (float)local_158;
            sVar7 = thunk_FUN_180624430(local_158 & 0xffffffff);
            if (((0 < sVar7) || (fVar21 <= auVar24._0_4_)) || (auVar22._0_4_ <= fVar21))
            goto LAB_1803d9a83;
            uVar6 = 1;
            iVar8 = iVar8 + 10;
          }
          if (iVar8 <= local_164) goto LAB_1803d9938;
          uStack_ec = CONCAT31(uStack_ec._1_3_,uVar6);
          iVar12 = iVar15;
          local_164 = iVar8;
          local_f8 = iVar15;
        }
      }
LAB_1803d993b:
      param_2 = local_138;
      local_150 = local_150 + 4;
      iVar15 = iVar15 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar15 < local_15c);
    if (iVar12 < 0) {
      iVar8 = local_15c;
      bVar19 = local_168;
    }
    else {
      lVar9 = local_138 + 0x1c0;
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      bVar17 = false;
      if (lVar9 != 0) {
        local_164 = 0;
        cVar4 = FUN_1804514f0(&local_164,lVar9,4);
        if (cVar4 == '\0') {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
      }
      iVar15 = local_164;
      lVar9 = FUN_18017ea70();
      iVar8 = local_15c;
      bVar19 = local_168;
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      if (bVar17) {
        bVar18 = iVar15 == local_15c;
      }
      else {
        bVar18 = local_168 ^ 1;
      }
      if (bVar18 != 0) {
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (param_2 + 0x1c8 == 0) {
          bVar17 = false;
          lVar9 = CONCAT44(uStack_144,local_148);
        }
        else {
          local_128 = 0;
          cVar4 = FUN_1804514f0(&local_128,param_2 + 0x1c8,8);
          if (cVar4 == '\0') {
            bVar17 = false;
            lVar9 = CONCAT44(uStack_144,local_148);
          }
          else {
            bVar17 = true;
            lVar9 = local_128;
          }
        }
        lVar10 = FUN_18017ea70();
        uVar16 = uStack_100;
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if ((!bVar17) || (lVar9 == 0)) {
          uStack_100._4_4_ = uStack_100._4_4_ & 0xffffff00;
          auVar23._8_4_ = (undefined4)uStack_100;
          auVar23._0_8_ = local_108;
          auVar23._12_4_ = uStack_100._4_4_;
          uStack_100 = uVar16 & 0xffffff00ffffffff;
        }
        else {
          lVar9 = lVar9 + (longlong)iVar12 * 0xc;
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          if (lVar9 == 0) {
LAB_1803d9baf:
            uStack_12c = uStack_12c & 0xffffff00;
          }
          else {
            local_148 = auVar24._0_4_;
            uStack_144 = local_148;
            local_140 = local_148;
            cVar4 = FUN_1804514f0(&local_148,lVar9,0xc);
            if (cVar4 == '\0') goto LAB_1803d9baf;
            local_138 = CONCAT44(uStack_144,local_148);
            uStack_130 = local_140;
            uStack_12c = CONCAT31(uStack_12c._1_3_,1);
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          auVar23._8_4_ = uStack_130;
          auVar23._0_8_ = local_138;
          auVar23._12_4_ = uStack_12c;
        }
        if (auVar23[0xc] != '\0') {
          auVar20 = vshufps_avx(auVar23,auVar23,0x55);
          fVar21 = auVar20._0_4_ * auVar20._0_4_ + auVar23._0_4_ * auVar23._0_4_ +
                   auVar23._8_4_ * auVar23._8_4_;
          auVar22 = ZEXT464((uint)fVar21);
          sVar7 = thunk_FUN_180624430(fVar21);
          auVar23 = auVar24._0_16_;
          if (sVar7 < 1) {
            if (auVar22._0_4_ < 0.0) {
              auVar22._0_8_ = FUN_18061e150(auVar22._0_8_);
              auVar23 = auVar24._0_16_;
              auVar22._8_56_ = extraout_var;
              auVar20 = auVar22._0_16_;
            }
            else {
              auVar20._0_4_ = SQRT(auVar22._0_4_);
              auVar20._4_12_ = auVar22._4_12_;
            }
            if (0.01 < auVar20._0_4_) {
              auVar2 = vcmpss_avx(auVar20,ZEXT416(0x42c80000),1);
              auVar23 = vblendvps_avx(auVar23,auVar20,auVar2);
              uStack_f0 = auVar23._0_4_;
            }
          }
        }
      }
    }
  }
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  if (param_2 + 0x168 == 0) {
    bVar17 = false;
    lVar9 = CONCAT44(uStack_144,local_148);
  }
  else {
    local_138 = 0;
    cVar4 = FUN_1804514f0(&local_138,param_2 + 0x168,8);
    if (cVar4 == '\0') {
      bVar17 = false;
      lVar9 = CONCAT44(uStack_144,local_148);
    }
    else {
      bVar17 = true;
      lVar9 = local_138;
    }
  }
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if (bVar17) {
    cVar4 = lVar9 != local_120;
  }
  else {
    cVar4 = local_160;
  }
  if (cVar4 == '\0') {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    bVar17 = false;
    if (param_2 + 0x160 != 0) {
      local_164 = 0;
      cVar4 = FUN_1804514f0(&local_164,param_2 + 0x160,4);
      if (cVar4 == '\0') {
        bVar17 = false;
      }
      else {
        bVar17 = true;
      }
    }
    iVar15 = local_164;
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (bVar17) {
      bVar19 = iVar15 != iVar8;
    }
    if (bVar19 == 0) {
      if (iVar12 < 0) {
        uVar1 = CONCAT44(uStack_c4,local_c8);
      }
      else {
        puVar11 = (undefined8 *)FUN_1803d9dd0(local_b8,param_2,iVar12,iVar8);
        uStack_e8 = *puVar11;
        uStack_e0 = puVar11[1];
        local_d8 = puVar11[2];
        uStack_d0 = puVar11[3];
        uVar1 = puVar11[4];
      }
      *local_110 = CONCAT44(iStack_f4,local_f8);
      local_110[1] = CONCAT44(uStack_ec,uStack_f0);
      local_110[2] = uStack_e8;
      local_110[3] = uStack_e0;
      local_110[4] = local_d8;
      local_110[5] = uStack_d0;
      local_110[6] = uVar1;
      *(undefined1 *)(local_110 + 7) = 1;
    }
  }
  param_1 = local_110;
LAB_1803d9d95:
  *(undefined1 *)(param_1 + 7) = 0;
code_r0x0001803d9925:
  uVar14 = uVar14 + 1;
  if (0x3f < uVar14 - uVar16) goto LAB_1803d9938;
  goto LAB_1803d98b0;
}



