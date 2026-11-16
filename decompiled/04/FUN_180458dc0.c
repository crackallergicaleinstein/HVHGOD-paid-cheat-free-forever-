// FUN_180458dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180458dc0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180458dc0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  float fVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auStack_1e8 [32];
  float local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1a8;
  float local_1a4;
  float local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  float local_178;
  float local_174;
  undefined8 *local_170;
  float *pfStack_168;
  undefined8 *local_160;
  undefined8 *local_158;
  longlong local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108;
  float local_f8 [2];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  
  lVar11 = DAT_180bb8ae8;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  uVar6 = DAT_180c62ca8;
  lVar18 = *(longlong *)(lVar11 + 0x14d0);
  local_f0 = *(undefined8 *)(lVar18 + 0x2c8);
  local_180 = DAT_180c62ca8;
  if ((*(longlong *)(lVar18 + 0x1c8) != 0) || (lVar10 = 0x280, *(longlong *)(lVar11 + 0x2338) != 0))
  {
    lVar10 = 0x250;
  }
  fVar23 = *(float *)(lVar18 + 0x118);
  local_1a0 = *(float *)(lVar18 + lVar10) - fVar23;
  auVar26 = ZEXT464((uint)local_1a0);
  auVar22 = ZEXT464((uint)(DAT_180b0a41c * 7.0));
  fVar25 = 0.5;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 7.0 + 0.5)),1);
  local_e8 = CONCAT44(auVar4._0_4_ + auVar4._0_4_,local_1a0);
  local_150 = param_1;
  FUN_1804c6420(&local_e8,0xbf800000);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar28 = ZEXT464(0x3f800000);
  auVar4 = vmaxss_avx(auVar28._0_16_,auVar4);
  local_1c8 = (float)DAT_180b0a420;
  FUN_180463160(local_f0,(fVar23 - auVar22._0_4_) + auVar4._0_4_,
                (auVar26._0_4_ + fVar23 + auVar22._0_4_) - auVar4._0_4_);
  local_e8 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 16.0 + fVar25)),1);
  local_1a4 = auVar4._0_4_;
  auVar4 = vinsertps_avx(auVar22._0_16_,auVar26._0_16_,0xe);
  auVar26 = ZEXT1664(auVar4);
  local_1a8 = auVar4._0_4_;
  local_f8[0] = local_1a4;
  FUN_1804c6420(&local_1a8,0xbf800000);
  local_1a4 = fVar25 * local_f8[0] + local_e8._4_4_;
  local_e0 = CONCAT44(local_e0._4_4_,local_1a4);
  fVar9 = 6.0;
  auVar4 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(DAT_180b0a41c * 6.0 + (float)local_e8 + fVar25)),1
                       );
  local_1a8 = auVar4._0_4_;
  local_1c8 = 11.0;
  FUN_180463dc0(local_f0,&local_1a8,DAT_1808da474,&DAT_180829a3c);
  fVar23 = DAT_1808da478;
  auVar30 = ZEXT464(0x41533333);
  fVar19 = (float)FUN_180463350(uVar6,auVar30._0_8_);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)local_e0 - fVar19 * fVar25) + fVar25)),1);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 16.5 + (float)local_e8 + fVar25)),
                        1);
  local_1a8 = auVar5._0_4_;
  local_1a4 = auVar4._0_4_;
  lVar18 = 0;
  local_1b8 = 0;
  local_1c0 = "Skybox";
  local_1c8 = fVar23;
  FUN_180463450(local_f0,uVar6,auVar30._0_8_,&local_1a8);
  pfStack_168 = local_f8;
  local_170 = &local_e8;
  local_160 = &local_f0;
  local_158 = &local_e0;
  auVar4 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((auVar26._0_4_ + (float)local_e8) - fVar9 * DAT_180b0a41c) +
                                      fVar25)),1);
  FUN_180459860(&local_170,"##sky_folder",auVar4._0_8_,&DAT_180829a44);
  auVar4 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((auVar26._0_4_ + (float)local_e8) - DAT_180b0a41c * 22.0) +
                                      fVar25)),1);
  FUN_180459860(&local_170,"##sky_refresh",auVar4._0_8_,&DAT_180829a4c);
  local_1a8 = auVar26._0_4_;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar9 * DAT_180b0a41c + fVar25)),1);
  local_1a4 = auVar4._0_4_;
  auVar22 = ZEXT464(0xbf800000);
  FUN_1804c6420(&local_1a8);
  if ((DAT_180cd6f98 & 1) == 0) {
    DAT_180cd6f98 = DAT_180cd6f98 | 1;
    _DAT_180cd6f80 = (undefined1  [16])0x0;
    _DAT_180cd6f90 = 0;
    local_148 = (undefined1  [16])0x0;
    local_138 = (undefined1  [16])0x0;
    FUN_18015ba30(local_148,"Default",7);
    local_128 = (undefined1  [16])0x0;
    local_118 = (undefined1  [16])0x0;
    FUN_18015ba30(local_128,&PTR_180700558,0);
    local_108 = 0;
    _DAT_180cd6f80 = (undefined1  [16])0x0;
    _DAT_180cd6f90 = 0;
    lVar11 = FUN_18015bca0(0x48);
    DAT_180cd6f88 = lVar11;
    DAT_180cd6f80 = lVar11;
    local_190 = &DAT_180cd6f80;
    pfStack_168 = (float *)lVar11;
    local_170 = (undefined8 *)lVar11;
    local_160 = &DAT_180cd6f80;
    _DAT_180cd6f90 = lVar11 + 0x48;
    local_198 = lVar11;
    FUN_18015b360(lVar11,local_148);
    FUN_18015b360(lVar11 + 0x20,local_128);
    *(undefined1 *)(lVar11 + 0x40) = local_108;
    DAT_180cd6f88 = lVar11 + 0x48;
    _eh_vector_destructor_iterator_(local_148,0x48,1,FUN_180156fb0);
    atexit(FUN_1806639a0);
  }
  lVar11 = (DAT_180cd6f88 - DAT_180cd6f80) / 0x12 + (DAT_180cd6f88 - DAT_180cd6f80 >> 0x3f);
  puVar16 = (undefined8 *)((lVar11 >> 2) - (lVar11 >> 0x3f));
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 30.0 + fVar25)),1);
  auVar27 = ZEXT1664(auVar4);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.0 + fVar25)),1);
  auVar29 = ZEXT1664(auVar4);
  fVar23 = DAT_180b0a41c * 5.0;
  auVar21 = ZEXT864(0);
  local_1a8 = 0;
  local_1a4 = 0.0;
  local_190 = puVar16;
  FUN_1804b2d30(2,&local_1a8);
  local_1a8 = auVar21._0_4_;
  local_1a4 = (float)local_1a8;
  FUN_1804b2d30(0xe,&local_1a8);
  local_1a8 = auVar26._0_4_;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416(0x40900000),1);
  fVar19 = auVar4._0_4_ * auVar29._0_4_;
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar19 + auVar27._0_4_ * 4.5 + fVar25)),1);
  local_1a4 = auVar4._0_4_;
  cVar7 = FUN_1804bb8c0("##sky_list",&local_1a8,fVar19,0x88);
  lVar11 = DAT_180bb8ae8;
  if (cVar7 != '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x14d0) + 0x2c8);
    lVar10 = (longlong)(int)puVar16;
    if (0 < (int)puVar16) {
      local_1a8 = auVar26._0_4_;
      auVar24 = ZEXT464(0x41900000);
      uVar17 = 0;
      do {
        FUN_1804c2920(uVar17);
        local_e0 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
        auVar4 = vpcmpgtd_avx(ZEXT416((uint)puVar16),ZEXT416(uVar17 + 1));
        auVar4 = vblendvps_avx(auVar21._0_16_,auVar29._0_16_,auVar4);
        local_1a4 = auVar4._0_4_ + auVar27._0_4_;
        FUN_1804c6420(&local_1a8,auVar22._0_8_);
        fVar19 = auVar26._0_4_ + (float)local_e0;
        fVar9 = auVar27._0_4_ + local_e0._4_4_;
        local_e8 = CONCAT44(fVar9,fVar19);
        plVar3 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
        if ((((local_e0._4_4_ < *(float *)((longlong)plVar3 + 0x274)) &&
             (*(float *)((longlong)plVar3 + 0x26c) < fVar9)) &&
            ((float)local_e0 < *(float *)(plVar3 + 0x4e))) && (*(float *)(plVar3 + 0x4d) < fVar19))
        {
          uVar14 = ~*(uint *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4);
          pcVar12 = "#sky";
          cVar7 = '#';
          uVar15 = uVar14;
          do {
            if (((cVar7 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
              pcVar12 = pcVar12 + 2;
              uVar15 = uVar14;
            }
            else {
              uVar15 = crc32(uVar15,cVar7);
            }
            cVar7 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar7 != '\0');
          uVar15 = ~uVar15;
          if (*(uint *)(*plVar3 + 0x1534) == uVar15) {
            FUN_1804cf810(uVar15,0xb,&DAT_180829b70);
          }
          local_1c8 = (float)CONCAT31(local_1c8._1_3_,1);
          pbVar13 = (byte *)FUN_1804aad60(local_f8,uVar15,&local_e0,&local_e8);
          bVar1 = pbVar13[2];
          auVar4 = vpcmpeqd_avx(ZEXT116(*pbVar13),SUB6416(ZEXT464(0),0));
          auVar4 = vblendvps_avx(auVar28._0_16_,auVar21._0_16_,auVar4);
          auVar22._0_8_ = FUN_1804aaa10(uVar15 + 1,auVar4._0_8_,auVar24._0_8_);
          auVar22._8_56_ = extraout_var;
          auVar22 = ZEXT1664(auVar22._0_16_);
          auVar4 = vpcmpeqd_avx(ZEXT416(uVar17),SUB6416(ZEXT464(0),0));
          auVar4 = vblendvps_avx(auVar21._0_16_,auVar28._0_16_,auVar4);
          auVar26._0_8_ = FUN_1804aaa10(uVar15 + 2,auVar4._0_8_,auVar24._0_8_);
          auVar26._8_56_ = extraout_var_00;
          auVar26 = ZEXT1664(auVar26._0_16_);
          uVar8 = FUN_180462ad0(DAT_180b0a408,DAT_180b0a418,auVar22._0_4_ * 0.6);
          local_1c0 = (char *)((ulonglong)local_1c0 & 0xffffffff00000000);
          local_1c8 = fVar23;
          FUN_1804df870(lVar11,&local_e0,&local_e8,uVar8);
          pcVar12 = (char *)(DAT_180cd6f80 + lVar18);
          fVar19 = DAT_1808da478;
          if (pcVar12[0x40] != '\0') {
            fVar19 = DAT_180b0a40c;
          }
          if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
            pcVar12 = *(char **)pcVar12;
          }
          auVar4 = vmaxss_avx(auVar22._0_16_,auVar26._0_16_);
          fVar9 = (float)FUN_180462ad0(fVar19,DAT_180b0a424,auVar4._0_8_);
          fVar19 = local_e8._4_4_ + local_e0._4_4_;
          fVar20 = (float)FUN_180463350(local_180,auVar30._0_8_);
          auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar19 - fVar20) * fVar25 + fVar25)),1);
          auVar5 = vroundss_avx(ZEXT816(0),
                                ZEXT416((uint)(DAT_180b0a41c * 9.0 + (float)local_e0 + fVar25)),1);
          local_188 = auVar5._0_4_;
          local_184 = auVar4._0_4_;
          local_1b8 = 0;
          local_1c8 = fVar9;
          local_1c0 = pcVar12;
          FUN_180463450(lVar11,local_180,auVar30._0_8_,&local_188);
          if (auVar21._0_4_ < auVar26._0_4_) {
            fVar19 = auVar26._0_4_ * 0.5882353;
            auVar4 = auVar21._0_16_;
            if (auVar21._0_4_ <= fVar19) {
              auVar4 = vminss_avx(auVar28._0_16_,ZEXT416((uint)fVar19));
            }
            auVar22 = ZEXT1664(auVar4);
            fVar19 = DAT_180b0a41c * fVar25;
            local_178 = (float)local_e8 - fVar19;
            local_174 = local_e8._4_4_ - fVar19;
            local_198 = CONCAT44(fVar19 + local_e0._4_4_,fVar19 + (float)local_e0);
            auVar4 = vmaxss_avx(ZEXT416((uint)(fVar23 - fVar19)),auVar21._0_16_);
            local_1c8 = 0.0;
            fVar19 = DAT_180b0a41c;
            FUN_1804dc420(lVar11,&local_198,&local_178,auVar4._0_8_);
            local_1b8 = CONCAT44(local_1b8._4_4_,0x7f7fffff);
            local_1c0 = (char *)CONCAT44(local_1c0._4_4_,0x200);
            local_1c8 = fVar19;
            FUN_1804d9a00(lVar11,*(undefined8 *)(lVar11 + 0x58),*(undefined4 *)(lVar11 + 0x50),
                          (int)(longlong)(auVar22._0_4_ * 255.0 + fVar25) << 0x18 | 0xd6ccc8);
            *(undefined4 *)(lVar11 + 0x50) = 0;
            auVar24 = ZEXT464(0x41900000);
          }
          if (bVar1 != 0) {
            puVar16 = (undefined8 *)(DAT_180cd6f80 + 0x20 + lVar18);
            if (0xf < *(ulonglong *)(DAT_180cd6f80 + 0x38 + lVar18)) {
              puVar16 = (undefined8 *)*puVar16;
            }
            FUN_18015abc0(local_150 + 0x31,0x60,&DAT_1806bbe98,puVar16);
          }
          auVar22 = ZEXT464(0xbf800000);
          auVar26 = ZEXT464((uint)local_1a0);
          puVar16 = local_190;
        }
        iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar2 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
        }
        lVar18 = lVar18 + 0x48;
        lVar10 = lVar10 + -1;
        uVar17 = uVar17 + 1;
      } while (lVar10 != 0);
    }
  }
  FUN_1804bbd00();
  FUN_1804b2de0(2);
}



