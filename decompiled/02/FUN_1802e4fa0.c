// FUN_1802e4fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e4fa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e4fa0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6,longlong param_7,float param_8,char param_9
                  )

{
  ushort *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  char *pcVar17;
  undefined8 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auStack_1c8 [32];
  float local_1a8;
  undefined8 local_1a0;
  char **local_198;
  float local_190;
  float local_188;
  float local_180;
  undefined4 local_178;
  undefined4 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  char *local_158;
  undefined8 uStack_150;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  undefined4 local_134;
  uint local_130;
  uint local_12c;
  undefined8 local_128;
  char *local_118;
  undefined8 uStack_110;
  float local_108 [4];
  char *local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  local_e8 = param_1;
  local_134 = CONCAT13(DAT_180b0b330._7_1_,CONCAT12(DAT_180b0b330._6_1_,DAT_180b0b330._4_2_));
  local_130 = CONCAT13(DAT_180b0b338._3_1_,CONCAT12(DAT_180b0b338._2_1_,(undefined2)DAT_180b0b338));
  puVar1 = (ushort *)*param_5;
  auVar26 = ZEXT1664(in_ZMM2._0_16_);
  auVar25 = ZEXT1664(in_ZMM1._0_16_);
  local_148 = DAT_180b0b3b4;
  local_144 = DAT_180b0b3b4;
  local_140 = DAT_180b0b3b4;
  local_13c = DAT_180b0b32c;
  local_138 = CONCAT31(CONCAT12(DAT_180b0b330._3_1_,
                                CONCAT11(DAT_180b0b330._2_1_,
                                         (char)((ushort)(undefined2)DAT_180b0b330 >> 8))),
                       (char)(undefined2)DAT_180b0b330);
  local_12c = CONCAT31(CONCAT12(DAT_180b0b3bc._3_1_,
                                CONCAT11(DAT_180b0b3bc._2_1_,
                                         (char)((ushort)(undefined2)DAT_180b0b3bc >> 8))),
                       (char)(undefined2)DAT_180b0b3bc);
  if (param_5[1] == 3) {
    iVar16 = *puVar1 - 0x6948;
    if (iVar16 == 0) {
      iVar16 = (byte)puVar1[1] - 0x74;
    }
    uVar11 = DAT_180b0b32c;
    if (iVar16 != 0) goto LAB_1802e513d;
  }
  else {
LAB_1802e513d:
    if (param_5[1] == 4) {
      if (*(int *)puVar1 != 0x74727548) {
        if ((param_5[1] != 4) || (*(int *)puVar1 != 0x7373694d)) goto LAB_1802e5162;
        goto LAB_1802e5171;
      }
      uVar11 = CONCAT13(DAT_180b0b330._3_1_,CONCAT12(DAT_180b0b330._2_1_,(undefined2)DAT_180b0b330))
      ;
    }
    else {
LAB_1802e5162:
      uVar11 = DAT_180b0b3b8;
      if (param_9 != '\0') {
LAB_1802e5171:
        uVar11 = CONCAT13(DAT_180b0b3bc._3_1_,
                          CONCAT12(DAT_180b0b3bc._2_1_,(undefined2)DAT_180b0b3bc));
      }
    }
  }
  auVar28 = ZEXT464(0x3f800000);
  fVar27 = 0.0;
  local_164._0_3_ = (undefined3)uVar11;
  pfVar15 = &local_160;
  if (0.0 <= param_8) {
    pfVar15 = &param_8;
  }
  pfVar13 = (float *)&local_168;
  if (param_8 <= 1.0) {
    pfVar13 = pfVar15;
  }
  local_168 = 1.0;
  local_160 = 0.0;
  local_164 = CONCAT13((char)(int)((float)(uVar11 >> 0x18) * *pfVar13),(undefined3)local_164);
  fVar29 = param_8;
  if (DAT_180b0b3b1 == '\0') {
    local_168._0_3_ = (undefined3)DAT_180b0b3bc._4_4_;
    local_168 = (float)CONCAT13(0x3f,(undefined3)local_168);
    local_15c = 1.0;
    pfVar15 = &local_160;
    if (0.0 <= param_8) {
      pfVar15 = &param_8;
    }
    local_160 = 0.0;
    pfVar13 = &local_15c;
    if (param_8 <= 1.0) {
      pfVar13 = pfVar15;
    }
    local_118 = (char *)0x40c0000040c00000;
    uStack_110 = 0x40c0000040c00000;
    local_1a8 = *(float *)(param_4 + 0x7c);
    local_168._3_1_ = (undefined1)(int)((float)(DAT_180b0b3bc._4_4_ >> 0x18) * *pfVar13);
    local_198 = &local_118;
    local_1a0._0_3_ = (undefined3)local_168;
    local_1a0._3_1_ = local_168._3_1_;
    FUN_180430970(param_1,in_ZMM1._0_8_,puVar1,*(undefined4 *)(param_4 + 0x74));
    local_168._0_3_ = (undefined3)DAT_180b0b3c4;
    local_190 = auVar28._0_4_;
    local_160 = local_190;
    pfVar15 = &local_15c;
    if (fVar27 <= fVar29) {
      pfVar15 = &param_8;
    }
    local_15c = fVar27;
    pfVar13 = &local_160;
    if (fVar29 <= local_190) {
      pfVar13 = pfVar15;
    }
    local_118 = (char *)0x40c0000040c00000;
    uStack_110 = 0x40c0000040c00000;
    local_1a8 = *(float *)(param_4 + 0x7c);
    local_168 = (float)CONCAT13((char)(int)((float)(DAT_180b0b3c4 >> 0x18) * *pfVar13),
                                (undefined3)local_168);
    local_198 = &local_118;
    local_1a0 = CONCAT44(local_1a0._4_4_,local_168);
    FUN_1804330f0(param_1,auVar25._0_8_,auVar26._0_8_,*(undefined4 *)(param_4 + 0x74));
  }
  uVar4 = local_164;
  auVar23._0_8_ = auVar26._0_8_ & 0xffffffff7fffffff;
  auVar23._8_4_ = auVar26._8_4_;
  auVar23._12_4_ = auVar26._12_4_;
  auVar2 = vroundps_avx(auVar23,0);
  auVar23 = vcmpss_avx(ZEXT416((uint)((float)auVar23._0_8_ - auVar2._0_4_)),ZEXT416(0x3f000000),0);
  auVar20._0_8_ = auVar25._0_8_ & 0xffffffff7fffffff;
  auVar20._8_4_ = auVar25._8_4_;
  auVar20._12_4_ = auVar25._12_4_;
  local_1a8 = *(float *)(param_4 + 0x7c);
  auVar3 = vroundps_avx(auVar20,0);
  auVar20 = vcmpss_avx(ZEXT416((uint)((float)auVar20._0_8_ - auVar3._0_4_)),ZEXT416(0x3f000000),0);
  local_1a0 = CONCAT44(local_1a0._4_4_,local_164);
  FUN_1804307e0(param_1,(uint)((float)(auVar20._0_4_ & 0x3f800000) + auVar3._0_4_) |
                        auVar25._0_4_ & 0x80000000,
                (uint)((float)(auVar23._0_4_ & 0x3f800000) + auVar2._0_4_) |
                auVar26._0_4_ & 0x80000000,auVar28._0_8_);
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar14 = DAT_180bbade0;
  }
  else {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar14 == 0) {
    fVar19 = 0.0;
  }
  else {
    uStack_150 = 6;
    local_158 = "HVHGOD";
    FUN_180430010(lVar14,&local_128,&local_158);
    fVar19 = local_128._4_4_;
  }
  local_1a8 = *(float *)(param_4 + 0x7c);
  fVar21 = 30.0;
  auVar30 = ZEXT464((uint)((30.0 - fVar19) * 0.5 + auVar26._0_4_));
  FUN_180430680(param_1,auVar25._0_8_,auVar26._0_8_,*(undefined4 *)(param_4 + 0x74));
  if (param_7 == 0) {
    local_1a0 = 0;
    local_158 = "H";
    uStack_150 = 1;
    local_1a8 = (float)uVar4;
    FUN_1804340b0(param_1,auVar25._0_4_ + 10.0,auVar30._0_8_,&local_158);
    fVar19 = auVar25._0_4_;
  }
  else {
    local_188 = auVar28._0_4_;
    local_160 = local_188;
    local_15c = fVar27;
    local_164 = CONCAT13(local_164._3_1_,0xffffff);
    pfVar15 = &local_15c;
    if (fVar27 <= fVar29) {
      pfVar15 = &param_8;
    }
    pfVar13 = &local_160;
    if (fVar29 <= local_188) {
      pfVar13 = pfVar15;
    }
    local_164 = CONCAT13((char)(int)(*pfVar13 * 255.0),0xffffff);
    local_178 = local_164;
    local_198 = (char **)CONCAT44(local_198._4_4_,fVar27);
    local_1a0 = param_7;
    local_1a8 = 14.0;
    local_190 = fVar27;
    local_180 = local_188;
    FUN_180435220(param_1,auVar25._0_4_ + 9.0,auVar26._0_4_ + 8.0);
    fVar19 = auVar25._0_4_;
  }
  puVar1 = (ushort *)*param_5;
  auVar25 = ZEXT464((uint)(fVar19 + fVar21));
  if ((param_5[1] == 4) && (*(int *)puVar1 == 0x74727548)) {
    pcVar17 = "Damage Taken";
  }
  else {
    if (param_5[1] == 3) {
      iVar16 = *puVar1 - 0x7542;
      if (iVar16 == 0) {
        iVar16 = (byte)puVar1[1] - 0x79;
      }
      if (iVar16 == 0) {
        uVar18 = 8;
        local_158 = "Purchase";
        uStack_150 = 8;
        pcVar17 = "Purchase";
        uStack_110 = 8;
        goto LAB_1802e55d7;
      }
    }
    if ((param_5[1] != 8) || (*(longlong *)puVar1 != 0x686374616d73694d)) {
      pcVar17 = (char *)*param_5;
      uStack_110 = param_5[1];
      uVar18 = param_5[1];
      goto LAB_1802e55d7;
    }
    pcVar17 = "Shot Details";
  }
  uVar18 = 0xc;
  uStack_150 = 0xc;
  uStack_110 = 0xc;
  local_158 = pcVar17;
LAB_1802e55d7:
  local_1a0 = 0;
  local_1a8 = (float)uVar4;
  local_118 = pcVar17;
  FUN_1804340b0(param_1,fVar19 + fVar21,auVar30._0_8_,&local_118);
  uStack_f0 = uVar18;
  lVar14 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  local_f8 = pcVar17;
  if (lVar14 == 0) {
    fVar19 = 0.0;
  }
  else {
    uStack_150 = 2;
    local_158 = "  ";
    FUN_180430010(lVar14,&local_128,&local_158);
    fVar19 = (float)local_128;
  }
  lVar14 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar14 == 0) {
    local_128._0_4_ = 0.0;
  }
  else {
    local_118 = local_f8;
    uStack_110 = uStack_f0;
    FUN_180430010(local_f8,&local_128,&local_118);
  }
  uVar10 = local_12c;
  uVar9 = local_130;
  uVar8 = local_134;
  uVar7 = local_138;
  uVar6 = local_13c;
  uVar5 = local_140;
  uVar11 = local_144;
  plVar12 = (longlong *)(param_4 + 0x40);
  auVar26 = ZEXT464((uint)(auVar25._0_4_ + (float)local_128 + fVar19));
  local_160 = 0.0;
  local_128 = plVar12;
  do {
    local_f8 = (char *)*plVar12;
    local_158 = (char *)plVar12[1];
    auVar23 = vpcmpeqd_avx(ZEXT416((uint)local_160),SUB6416(ZEXT464(0),0));
    auVar23 = vblendvps_avx(auVar25._0_16_,auVar26._0_16_,auVar23);
    auVar22 = ZEXT1664(auVar23);
    local_128 = plVar12;
    if (local_f8 != (char *)plVar12[1]) {
      pfVar15 = &local_15c;
      if (fVar27 <= fVar29) {
        pfVar15 = &param_8;
      }
      local_108[0] = auVar28._0_4_;
      pfVar13 = local_108;
      if (fVar29 <= auVar28._0_4_) {
        pfVar13 = pfVar15;
      }
      local_15c = fVar27;
      fVar19 = *pfVar13;
      auVar24 = ZEXT464((uint)((float)((int)local_160 * 0x12) + auVar30._0_4_));
      do {
        switch(*(undefined4 *)(local_f8 + 0x24)) {
        case 0:
          local_164 = local_148;
          break;
        default:
          local_164 = uVar11;
          break;
        case 2:
          local_164 = uVar5;
          break;
        case 3:
          local_164 = uVar6;
          break;
        case 4:
          local_164 = uVar7;
          break;
        case 5:
          local_164 = uVar8;
          break;
        case 6:
          local_164 = uVar9;
          break;
        case 7:
          local_164 = uVar10;
        }
        local_1a8 = (float)CONCAT13((char)(int)((float)(local_164 >> 0x18) * fVar19),(int3)local_164
                                   );
        local_118 = local_f8;
        if (0xf < *(ulonglong *)(local_f8 + 0x18)) {
          local_118 = *(char **)local_f8;
        }
        uStack_110 = *(undefined8 *)(local_f8 + 0x10);
        local_1a0 = 0;
        local_168 = local_1a8;
        FUN_1804340b0(local_e8,auVar22._0_8_,auVar24._0_8_,&local_118);
        auVar22 = ZEXT464((uint)(auVar22._0_4_ + *(float *)(local_f8 + 0x20)));
        local_f8 = local_f8 + 0x28;
      } while (local_f8 != local_158);
    }
    local_160 = (float)((int)local_160 + 1);
    plVar12 = local_128 + 3;
    local_128 = plVar12;
  } while ((int)local_160 < 2);
  if (*(longlong *)(local_e8 + 0x60) != *(longlong *)(local_e8 + 0x68)) {
    *(longlong *)(local_e8 + 0x68) = *(longlong *)(local_e8 + 0x68) + -0x10;
  }
}



