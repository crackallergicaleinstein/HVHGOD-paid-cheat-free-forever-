// FUN_18048dbc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048dbc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048dbc0(longlong *param_1,byte *param_2)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined2 *puVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar17;
  longlong lVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  undefined1 auStack_278 [32];
  float local_258;
  ulonglong local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_228;
  longlong local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  longlong local_1e8;
  undefined1 local_1e0 [4];
  float local_1dc [3];
  undefined4 local_1d0;
  uint uStack_1cc;
  char *pcStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  byte *pbStack_1b8;
  undefined1 local_1b0 [16];
  longlong lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  longlong local_168;
  char *pcStack_160;
  longlong lStack_158;
  byte *pbStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong local_108;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e8;
  
  lVar18 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  if (DAT_180bbecdb == '\0') {
    fVar16 = DAT_180b0a41c * 5.9;
    fVar24 = 0.5;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    plVar3 = *(longlong **)(lVar18 + 0x14d0);
    local_1e8 = plVar3[0x59];
    auVar27 = ZEXT864(0);
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 + 0.5)),1);
    local_218 = (ulonglong)auVar5._0_4_ << 0x20;
    FUN_1804c6420(&local_218,0xbf800000);
    lVar6 = DAT_180bbb218;
    lVar18 = DAT_180bb8ae8;
    fVar16 = DAT_180b0a41c;
    lVar8 = (longlong)DAT_180bbb210;
    if ((DAT_180bbb210 == 0) ||
       (*(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1,
       *(longlong *)(lVar6 + -0x10 + lVar8 * 0x10) != *(longlong *)(lVar18 + 0x14d0))) {
      local_210 = 0.0;
    }
    else {
      auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 * 7.0 + fVar24)),1);
      local_210 = auVar5._0_4_;
    }
    lVar18 = *(longlong *)(lVar18 + 0x14d0);
    fVar22 = *(float *)(lVar18 + 0x11c);
    fVar26 = local_210 + *(float *)(lVar18 + 0x118);
    local_208 = param_1[1];
    local_218 = DAT_180c62ca8;
    local_210 = *(float *)(plVar3 + 0x4a) - local_210;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 * 21.0 + fVar24)),1);
    auVar25 = ZEXT1664(auVar5);
    fVar15 = auVar5._0_4_;
    local_200 = fVar16 * 7.5;
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 * 5.0 + fVar24)),1);
    auVar19 = ZEXT1664(auVar5);
    local_1fc = auVar5._0_4_;
    local_1f4 = fVar22;
    if (local_208 != 0) {
      puVar14 = (ulonglong *)*param_1;
      local_1f8 = local_200 + local_200;
      fVar21 = fVar26;
      do {
        fVar20 = 4.0;
        local_250 = *puVar14;
        local_228 = 0;
        local_238 = 0;
        local_240 = 0;
        auVar5 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(fVar16 * 13.2 + fVar24)),1);
        local_248 = 0;
        auVar5 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar5);
        local_258 = auVar27._0_4_;
        fVar16 = local_210;
        fVar15 = local_1f8;
        FUN_1804ea040(local_1dc,local_218,auVar5._0_8_,0x7f7fffff);
        auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar15 + local_1dc[0] + fVar24)),1);
        auVar23 = ZEXT1664(auVar5);
        if ((fVar26 < fVar21) && (fVar16 < auVar5._0_4_ + fVar21)) {
          fVar22 = fVar22 + auVar19._0_4_ + auVar25._0_4_;
          fVar21 = fVar26;
        }
        local_f8 = auVar5._0_4_ + fVar21;
        local_f4 = fVar22 + auVar25._0_4_;
        local_f0 = fVar21;
        local_ec = fVar22;
        FUN_1804c2920((int)(fVar22 * fVar20) + (int)(fVar21 * -4.0) * -100000);
        pcVar9 = "#chip";
        uVar12 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
        cVar11 = '#';
        uVar13 = uVar12;
        do {
          if (((cVar11 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
            pcVar9 = pcVar9 + 2;
            uVar13 = uVar12;
          }
          else {
            uVar13 = crc32(uVar13,cVar11);
          }
          cVar11 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar11 != '\0');
        uVar13 = ~uVar13;
        if (*(uint *)(*plVar3 + 0x1534) == uVar13) {
          FUN_1804cf810(uVar13,0xb,&DAT_180857fac);
        }
        iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar2 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
        }
        local_258 = (float)CONCAT31(local_258._1_3_,1);
        puVar10 = (undefined2 *)FUN_1804aad60(local_1e0,uVar13,&local_f0,&local_f8);
        uVar1 = *puVar10;
        if (*(char *)(puVar10 + 1) != '\0') {
          *param_2 = *param_2 == 0;
        }
        auVar19 = ZEXT464(0x3f800000);
        auVar5 = vpcmpeqd_avx(ZEXT116(*param_2),SUB6416(ZEXT464(0),0));
        auVar5 = vblendvps_avx(auVar19._0_16_,auVar27._0_16_,auVar5);
        uVar17 = FUN_1804aaa10(uVar13 + 1,auVar5._0_8_,0x41a00000);
        auVar5 = vpcmpeqd_avx(ZEXT116((byte)uVar1),SUB6416(ZEXT464(0),0));
        auVar5 = vblendvps_avx(auVar19._0_16_,auVar27._0_16_,auVar5);
        fVar15 = (float)FUN_1804aaa10(uVar13 + 2,auVar5._0_8_,0x41900000);
        fVar16 = DAT_180b0a41c * 4.0;
        auVar19 = ZEXT464((uint)(fVar15 * fVar24));
        uVar7 = FUN_180462ad0(DAT_180b0a480,DAT_1808da470,uVar17);
        uVar7 = FUN_180462ad0(uVar7,DAT_180b0a454,auVar19._0_8_);
        local_250 = local_250 & 0xffffffff00000000;
        local_258 = fVar16;
        FUN_1804df870(local_1e8,&local_f0,&local_f8,uVar7);
        uVar7 = FUN_180462ad0(DAT_180b0a504,DAT_1808da478,auVar19._0_8_);
        uVar7 = FUN_180462ad0(uVar7,DAT_180b0a424,uVar17);
        local_1f0 = fVar21 + local_200;
        uVar4 = *puVar14;
        fVar16 = (float)FUN_180463350(local_218,0x41533333);
        local_1ec = (auVar25._0_4_ - fVar16) * fVar24 + fVar22;
        local_248 = 0;
        local_258 = (float)uVar7;
        local_250 = uVar4;
        FUN_180463450(local_1e8,local_218,0x41533333,&local_1f0);
        fVar15 = auVar25._0_4_;
        auVar19 = ZEXT464((uint)local_1fc);
        param_2 = param_2 + 1;
        puVar14 = puVar14 + 1;
        local_208 = local_208 + -1;
        fVar21 = fVar21 + auVar23._0_4_ + local_1fc;
        fVar16 = DAT_180b0a41c;
      } while (local_208 != 0);
    }
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar16 * 4.0 + fVar24)),1);
    local_208 = CONCAT44(auVar5._0_4_ + ((fVar22 + fVar15) - local_1f4),local_210 - fVar26);
    FUN_1804c6420(&local_208,0xbf800000);
  }
  else {
    local_1b0 = (undefined1  [16])0x0;
    uStack_194 = 0x3f800000;
    local_190 = 0x3f800000;
    lStack_180 = *param_1;
    lStack_178 = param_1[1];
    uStack_1c0 = 5;
    uStack_198 = 0;
    lStack_1a0 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0x3f80000000000000;
    local_1d0 = 0;
    pcStack_1c8 = "Elements";
    local_168 = (ulonglong)uStack_1cc << 0x20;
    lStack_158 = CONCAT44(uStack_1bc,5);
    lStack_188 = 0;
    local_128 = CONCAT44(uStack_18c,0x3f800000);
    local_170 = 1;
    lVar18 = CONCAT71(uStack_16f,1);
    uStack_120 = 0;
    pcStack_160 = "Elements";
    pbStack_1b8 = param_2;
    pbStack_150 = param_2;
    lStack_118 = lStack_180;
    lStack_110 = lStack_178;
    local_108 = lVar18;
    uVar7 = FUN_180493b90();
    plVar3 = DAT_180c62d38;
    local_168 = CONCAT44(local_168._4_4_,uVar7);
    if (DAT_180c62d38 == DAT_180c62d40) {
      FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_168);
    }
    else {
      *DAT_180c62d38 = local_168;
      plVar3[1] = (longlong)pcStack_160;
      plVar3[2] = lStack_158;
      plVar3[3] = (longlong)pbStack_150;
      plVar3[4] = local_1b0._0_8_;
      plVar3[5] = local_1b0._8_8_;
      plVar3[6] = lStack_1a0;
      plVar3[7] = CONCAT44(uStack_194,uStack_198);
      plVar3[8] = CONCAT44(uStack_18c,local_190);
      plVar3[9] = lStack_188;
      plVar3[10] = lStack_180;
      plVar3[0xb] = lStack_178;
      plVar3[0xc] = lVar18;
      DAT_180c62d38 = DAT_180c62d38 + 0xd;
    }
  }
}



