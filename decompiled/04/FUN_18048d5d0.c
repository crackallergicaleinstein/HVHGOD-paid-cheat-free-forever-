// FUN_18048d5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048d5d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048d5d0(ulonglong param_1,byte *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  undefined2 *puVar11;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar14 [16];
  undefined1 extraout_var [56];
  ulonglong uVar15;
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  float fVar21;
  float fVar22;
  undefined1 auStack_208 [32];
  float local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  char local_1c8;
  float local_1c4;
  float local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba [10];
  ulonglong local_1b0;
  byte *pbStack_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined1 local_190 [16];
  ulonglong uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  undefined1 auStack_160 [16];
  char local_150;
  undefined7 uStack_14f;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  ulonglong local_c8;
  
  lVar3 = DAT_180bb8ae8;
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  if (DAT_180bbecdb == '\0') {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    plVar2 = *(longlong **)(lVar3 + 0x14d0);
    fVar22 = *(float *)(plVar2 + 0x23);
    fVar19 = *(float *)((longlong)plVar2 + 0x11c);
    if ((plVar2[0x39] != 0) ||
       (pfVar10 = (float *)(plVar2 + 0x50), *(longlong *)(lVar3 + 0x2338) != 0)) {
      pfVar10 = (float *)(plVar2 + 0x4a);
    }
    fVar21 = 0.5;
    fVar12 = *pfVar10 - fVar22;
    auVar14 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 25.5 + 0.5)),1);
    auVar18 = ZEXT1664(auVar14);
    auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 3.0 + 0.5)),1);
    local_d0 = auVar5._0_4_ + fVar22;
    local_d8 = (fVar12 + fVar22) - auVar5._0_4_;
    local_d4 = auVar14._0_4_ + fVar19;
    local_cc = fVar19;
    iVar9 = FUN_1804b0a90(param_1,0,
                          *(undefined4 *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4));
    if (*(int *)(*plVar2 + 0x1534) == iVar9) {
      FUN_1804cf810(iVar9,0xb,param_1);
    }
    local_1c0 = auVar18._0_4_;
    local_1c4 = fVar12;
    FUN_1804c6420(&local_1c4,0xbf800000);
    local_1e8 = (float)CONCAT31(local_1e8._1_3_,param_3);
    puVar11 = (undefined2 *)FUN_1804aad60(local_1ba,iVar9,&local_d0,&local_d8);
    fVar12 = auVar18._0_4_;
    local_1bc = *puVar11;
    local_1c8 = *(char *)(puVar11 + 1);
    if (local_1c8 != '\0') {
      *param_2 = *param_2 == 0;
    }
    auVar16 = ZEXT464(0x3f800000);
    auVar20 = ZEXT864(0);
    if (param_3 != '\0') {
      FUN_1804c2800(param_1);
      uStack_1a0 = 0;
      local_190 = (undefined1  [16])0x0;
      uStack_19c = auVar20._0_4_;
      uStack_198 = (byte *)CONCAT44(auVar16._0_4_,auVar16._0_4_);
      uStack_180 = 0;
      local_1b0 = param_1;
      pbStack_1a8 = param_2;
      FUN_18045efc0(&local_1b0,&local_d0,&local_d8);
      fVar12 = auVar18._0_4_;
      iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar1 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        fVar12 = auVar18._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
      }
    }
    lVar3 = plVar2[0x59];
    fVar19 = fVar12 * fVar21 + fVar19;
    auVar14 = vpcmpeqd_avx(ZEXT116((byte)local_1bc),SUB6416(ZEXT464(0),0));
    auVar14 = vblendvps_avx(auVar16._0_16_,auVar20._0_16_,auVar14);
    fVar12 = (float)FUN_1804aaa10(iVar9 + 7,auVar14._0_8_,0x41900000);
    fVar17 = 255.0;
    if (auVar20._0_4_ < fVar12) {
      local_1e8 = DAT_180b0a41c * 5.0;
      fVar13 = ((float)(DAT_180b0a42c >> 0x18) / 255.0) * fVar12;
      if (auVar20._0_4_ <= fVar13) {
        auVar14 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar13));
        fVar13 = auVar14._0_4_;
      }
      else {
        fVar13 = 0.0;
      }
      local_1e0 = local_1e0 & 0xffffffff00000000;
      FUN_1804df870(lVar3,&local_d0,&local_d8,
                    (int)(longlong)(fVar13 * 255.0 + fVar21) << 0x18 | DAT_180b0a42c & 0xffffff);
    }
    auVar14 = vpcmpeqd_avx(ZEXT116(*param_2),SUB6416(ZEXT464(0),0));
    auVar14 = vblendvps_avx(auVar16._0_16_,auVar20._0_16_,auVar14);
    auVar18._0_8_ = FUN_1804aaa10(iVar9 + 8,auVar14._0_8_,0x41b00000);
    auVar18._8_56_ = extraout_var;
    fVar13 = auVar20._0_4_;
    auVar14 = auVar18._0_16_;
    auVar20 = ZEXT1664(auVar14);
    if (fVar13 < (float)auVar18._0_8_) {
      local_1e8 = DAT_180b0a41c * 1.6;
      fVar4 = ((float)(DAT_1808da478 >> 0x18) / fVar17) * (float)auVar18._0_8_;
      if (fVar13 <= fVar4) {
        auVar14 = vminss_avx(auVar16._0_16_,ZEXT416((uint)fVar4));
        fVar13 = auVar14._0_4_;
      }
      local_1c4 = DAT_180b0a41c * 18.4 + fVar22;
      local_1c0 = fVar19;
      FUN_180464960(lVar3,&local_1c4,DAT_180b0a41c * 8.0,
                    (int)(longlong)(fVar13 * fVar17 + fVar21) << 0x18 | DAT_1808da478 & 0xffffff);
      auVar14 = auVar20._0_16_;
    }
    uVar6 = DAT_180c62ca8;
    if (param_3 == '\0') {
      uVar8 = DAT_180b0a4a0;
    }
    else {
      auVar14 = vmaxss_avx(auVar14,ZEXT416((uint)(fVar12 * 0.6)));
      uVar8 = FUN_180462ad0(DAT_1808da474,DAT_1808da478,auVar14._0_8_);
    }
    fVar12 = (float)FUN_180463350(uVar6,0x41533333);
    local_1c0 = fVar19 - fVar12 * fVar21;
    local_1c4 = DAT_180b0a41c * 35.4 + fVar22;
    local_1d8 = 0;
    local_1e8 = (float)uVar8;
    local_1e0 = param_1;
    FUN_180463450(lVar3,uVar6,0x41533333,&local_1c4);
  }
  else {
    local_1b0 = local_1b0 & 0xffffffff00000000;
    uStack_1a0 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uVar15 = CONCAT71(uStack_14f,param_3);
    local_190 = (undefined1  [16])0x0;
    uStack_174 = 0x3f800000;
    local_170 = 0x3f800000;
    auStack_160 = ZEXT816(0);
    uStack_138 = (ulonglong)uStack_19c << 0x20;
    local_148 = local_1b0;
    uStack_178 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0x3f80000000000000;
    local_108 = CONCAT44(uStack_16c,0x3f800000);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    if (param_1 != 0) {
      pbStack_1a8 = (byte *)param_1;
      uStack_198 = param_2;
      local_150 = param_3;
      uStack_140 = param_1;
      pbStack_130 = param_2;
      local_e8 = uVar15;
      uVar8 = FUN_180493b90();
      puVar7 = DAT_180c62d38;
      local_148 = CONCAT44(local_148._4_4_,uVar8);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_148);
      }
      else {
        *DAT_180c62d38 = local_148;
        puVar7[1] = uStack_140;
        puVar7[2] = uStack_138;
        puVar7[3] = (ulonglong)pbStack_130;
        puVar7[4] = local_190._0_8_;
        puVar7[5] = local_190._8_8_;
        puVar7[6] = uStack_180;
        puVar7[7] = CONCAT44(uStack_174,uStack_178);
        puVar7[8] = CONCAT44(uStack_16c,local_170);
        puVar7[9] = uStack_168;
        puVar7[10] = auStack_160._0_8_;
        puVar7[0xb] = auStack_160._8_8_;
        puVar7[0xc] = uVar15;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



