// FUN_180517d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180517d40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180517d40(float *param_1)

{
  undefined8 ****ppppuVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  char *pcVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auStack_2f8 [32];
  char *local_2d8;
  char *local_2d0;
  char *local_2c8;
  undefined8 *****local_2c0;
  undefined4 local_2b8;
  float local_2a8;
  float local_2a4;
  undefined4 local_2a0;
  float local_29c;
  undefined8 *****local_298;
  undefined1 *local_290;
  undefined8 *****local_288;
  undefined8 ****local_280;
  undefined8 *****local_278;
  undefined1 *local_270;
  undefined **local_268;
  undefined8 local_260;
  undefined8 *****local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  undefined8 ****local_240;
  undefined1 *local_238;
  undefined8 ****local_230;
  undefined8 *****local_228;
  undefined8 ****local_220;
  undefined8 *****local_218;
  undefined1 *local_210;
  undefined8 *****local_208;
  undefined1 *local_200;
  undefined8 *****local_1f8;
  undefined1 *local_1f0;
  undefined8 *****local_1e8;
  undefined8 ****local_1e0;
  undefined8 *****local_1d8;
  undefined1 *local_1d0;
  undefined8 *****local_1c8;
  undefined1 *local_1c0;
  undefined8 *****local_1b8;
  undefined8 ****local_1b0;
  undefined8 *****local_1a8;
  undefined1 *local_1a0;
  undefined8 *****local_198;
  undefined1 *local_190;
  undefined8 *****local_188;
  undefined1 *local_180;
  undefined8 *****local_178;
  undefined1 *local_170;
  undefined8 *****local_168;
  undefined1 local_160 [8];
  undefined8 *****local_158;
  undefined8 local_150;
  undefined8 *****local_148;
  undefined8 *****local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined *local_108;
  char *local_100;
  char *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  char local_d8;
  char local_d7;
  char local_d6;
  char local_d5;
  char local_d4;
  char local_d3;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_2f8;
  if (DAT_180bbecdb == '\0') {
    ppppuVar11 = (undefined8 ****)FUN_180509800(&DAT_180c7e1f0);
    if (DAT_180c7e0c8 != ppppuVar11) {
      DAT_180c62f48 = 0;
      DAT_180c62fe0 = 0;
      DAT_1808e4f84 = 0xffffffff;
      DAT_180bbecdf = 0;
      DAT_180bbecde = 0;
      lVar12 = FUN_180439770();
      *(undefined8 *)(lVar12 + 0x420) = 0;
      DAT_180c7e0c8 = ppppuVar11;
    }
    FUN_1804c28a0(ppppuVar11);
    uVar17 = 0;
    auVar23 = ZEXT464(0x3f800000);
    local_2a0 = 0x3f800000;
    auVar28 = ZEXT464(0x80000000);
    auVar27 = ZEXT464(0x40e00000);
    auVar24 = ZEXT464(0x436b0000);
    auVar20 = ZEXT464(0x43af0000);
    auVar21 = ZEXT464(0x41f6d82c);
    auVar22 = ZEXT464(0x3f19999a);
    auVar25 = ZEXT464(0x41a80000);
    auVar26 = ZEXT464(0x42c80000);
    do {
      FUN_1804c2920(uVar17);
      lVar9 = DAT_180bb8ae8;
      local_2a4 = DAT_180b0a41c;
      auVar7 = vpcmpeqd_avx(ZEXT416(uVar17),SUB6416(ZEXT464(0),0));
      auVar7 = vblendvps_avx(SUB6416(ZEXT464(0x43c30000),0),SUB6416(ZEXT464(0x43110000),0),auVar7);
      fVar5 = auVar7._0_4_ * DAT_180b0a41c;
      fVar18 = *param_1;
      fVar6 = DAT_180b0a41c * 48.0;
      fVar2 = param_1[1];
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      lVar12 = *(longlong *)(lVar9 + 0x14d0);
      *(float *)(lVar12 + 0x118) = fVar5 + fVar18;
      *(float *)(lVar12 + 0x11c) = fVar6 + fVar2;
      *(undefined1 *)(lVar12 + 0x159) = 1;
      local_2a8 = local_2a4 * 238.0;
      local_2a4 = local_2a4 * 427.0;
      *(undefined1 *)(*(longlong *)(lVar9 + 0x14d0) + 0xce) = 1;
      plVar4 = *(longlong **)(lVar9 + 0x14d0);
      uVar15 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
      pcVar13 = "##rage_column";
      cVar14 = '#';
      uVar16 = uVar15;
      do {
        pcVar13 = pcVar13 + 1;
        if (((cVar14 == '#') && (*pcVar13 == '#')) && (pcVar13[1] == '#')) {
          pcVar13 = pcVar13 + 2;
          uVar16 = uVar15;
        }
        else {
          uVar16 = crc32(uVar16,cVar14);
        }
        cVar14 = *pcVar13;
      } while (cVar14 != '\0');
      uVar16 = ~uVar16;
      if (*(uint *)(*plVar4 + 0x1534) == uVar16) {
        FUN_1804cf810(uVar16,0xb,"##rage_column");
      }
      local_2d8._0_4_ = 0x80;
      FUN_1804bb960("##rage_column",uVar16,&local_2a8,0);
      local_150 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
      if (uVar17 == 0) {
        FUN_180113930(&DAT_1808e6650,"Ragebot / Main",0xe);
        local_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        local_118 = (undefined1  [16])0x0;
        local_2c0 = (undefined8 *****)CONCAT44(local_2c0._4_4_,4);
        local_2c8 = "Firing & Limits";
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,auVar24._0_4_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar19 = ZEXT1664(auVar27._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        local_2d0._0_4_ = (float)auVar27._0_4_;
        FUN_180485630(&local_138,&local_150,0);
        cVar14 = DAT_180c7e1f0;
        local_148 = (undefined8 *****)&DAT_180c7e1f0;
        local_298 = &local_148;
        local_290 = &DAT_180c7e1f0;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055f710(&local_138);
        if (cVar14 != DAT_180c7e1f0) {
          DAT_180c7e200 = DAT_180c7e1f0;
          FUN_18050cd00();
        }
        ppppuVar1 = ppppuVar11 + 0x56;
        local_148 = (undefined8 *****)0x1808584e8;
        local_168 = &local_148;
        cVar14 = *(char *)ppppuVar1;
        local_288 = &local_168;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        local_280 = ppppuVar1;
        FUN_18055f2c0(&local_138,"Silent Aim",ppppuVar1,&local_288);
        if (cVar14 != *(char *)ppppuVar1) {
          *(char *)(ppppuVar11 + 0x58) = *(char *)ppppuVar1;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cadb70;
        local_168 = (undefined8 *****)FUN_180517a90;
        local_278 = &local_168;
        local_270 = &DAT_180cadb70;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055fb70(&local_138);
        if (cVar14 != DAT_180cadb70) {
          DAT_180cadb80 = DAT_180cadb70;
          FUN_18050cd00();
        }
        fVar18 = *(float *)(ppppuVar11 + 0xa4);
        local_2c8 = (char *)CONCAT44(local_2c8._4_4_,auVar23._0_4_);
        local_2d0 = "%.0f deg";
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,0x43340000);
        FUN_180487560(&local_138,"Field of View",ppppuVar11 + 0xa4,0);
        if (fVar18 != *(float *)(ppppuVar11 + 0xa4)) {
          FUN_18050cd00();
        }
        fVar18 = (float)(int)local_118._8_4_ * auVar21._0_4_ + auVar22._0_4_ + uStack_128._4_4_ +
                 auVar25._0_4_;
        if (DAT_180bbecdb != '\0') {
          if (DAT_180c62d18 != DAT_180c62d20) {
            FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar3 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
        }
        FUN_180113930(&DAT_1808e6650,"Ragebot / Selection",0x13);
        local_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        local_118 = (undefined1  [16])0x0;
        local_2c0 = (undefined8 *****)CONCAT44(local_2c0._4_4_,8);
        local_2c8 = "Targeting & Accuracy";
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,fVar18);
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,auVar24._0_4_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar19._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        FUN_180485630(&local_138,&local_150,0);
        local_108 = &DAT_180858228;
        local_100 = "Chest";
        local_f8 = "Stomach";
        local_f0 = &DAT_18085820c;
        local_e8 = &DAT_180858204;
        local_e0 = &DAT_180830bd4;
        local_d8 = *(char *)(ppppuVar11 + 0xdc);
        local_d7 = *(char *)((longlong)ppppuVar11 + 0x6e1);
        local_d6 = *(char *)((longlong)ppppuVar11 + 0x6e2);
        local_d5 = *(char *)((longlong)ppppuVar11 + 0x6e3);
        local_d4 = *(char *)((longlong)ppppuVar11 + 0x6e4);
        local_d3 = *(char *)((longlong)ppppuVar11 + 0x6e5);
        local_268 = &local_108;
        local_260 = 6;
        local_2d8 = "Select";
        FUN_180486f50(&local_138,"Hitboxes",&local_268,&local_d8);
        if (local_d8 != *(char *)(ppppuVar11 + 0xdc)) {
          *(char *)(ppppuVar11 + 0xdc) = local_d8;
          FUN_18050cd00();
        }
        if (local_d7 != *(char *)((longlong)ppppuVar11 + 0x6e1)) {
          *(char *)((longlong)ppppuVar11 + 0x6e1) = local_d7;
          FUN_18050cd00();
        }
        if (local_d6 != *(char *)((longlong)ppppuVar11 + 0x6e2)) {
          *(char *)((longlong)ppppuVar11 + 0x6e2) = local_d6;
          FUN_18050cd00();
        }
        if (local_d5 != *(char *)((longlong)ppppuVar11 + 0x6e3)) {
          *(char *)((longlong)ppppuVar11 + 0x6e3) = local_d5;
          FUN_18050cd00();
        }
        if (local_d4 != *(char *)((longlong)ppppuVar11 + 0x6e4)) {
          *(char *)((longlong)ppppuVar11 + 0x6e4) = local_d4;
          FUN_18050cd00();
        }
        if (local_d3 != *(char *)((longlong)ppppuVar11 + 0x6e5)) {
          *(char *)((longlong)ppppuVar11 + 0x6e5) = local_d3;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad430;
        local_168 = (undefined8 *****)&DAT_180cad2e8;
        local_258 = &local_168;
        local_250 = &DAT_180cad430;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055ffc0(&local_138);
        if (cVar14 != DAT_180cad430) {
          DAT_180cad440 = DAT_180cad430;
          FUN_18050cd00();
        }
        local_160[0] = 1;
        iVar3 = *(int *)((longlong)ppppuVar11 + 0x524);
        local_150 = CONCAT44(local_150._4_4_,(float)iVar3);
        local_248 = local_160;
        local_2b8 = auVar20._0_4_;
        local_2c0 = (undefined8 *****)&local_248;
        local_2c8 = (char *)CONCAT44(local_2c8._4_4_,auVar23._0_4_);
        local_2d0 = "%.0f%%";
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,auVar26._0_4_);
        local_240 = ppppuVar11;
        FUN_18054db60(&local_138,"Hit Chance",&local_150,0);
        fVar18 = (float)(~auVar28._0_4_ & (uint)local_150);
        auVar8 = vroundps_avx(ZEXT416((uint)fVar18),0);
        auVar19 = ZEXT464(0x3f000000);
        auVar7 = vcmpss_avx(ZEXT416((uint)(fVar18 - auVar8._0_4_)),auVar19._0_16_,0);
        iVar10 = (int)(float)((uint)((float)(auVar7._0_4_ & 0x3f800000) + auVar8._0_4_) |
                             auVar28._0_4_ & (uint)local_150);
        if (iVar10 != iVar3) {
          *(int *)((longlong)ppppuVar11 + 0x524) = iVar10;
          FUN_18050cd00();
        }
        local_160[0] = 0;
        iVar3 = *(int *)(ppppuVar11 + 0xa5);
        local_150 = CONCAT44(local_150._4_4_,(float)iVar3);
        local_238 = local_160;
        local_2d0 = &DAT_180829c34;
        if (iVar3 == 0x83) {
          local_2d0 = &DAT_180867178;
        }
        local_2b8 = auVar20._0_4_;
        local_2c0 = (undefined8 *****)&local_238;
        local_2c8 = (char *)CONCAT44(local_2c8._4_4_,auVar23._0_4_);
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,0x43030000);
        local_230 = ppppuVar11;
        FUN_18054db60(&local_138,"Min Damage",&local_150,0);
        fVar18 = (float)(~auVar28._0_4_ & (uint)local_150);
        auVar8 = vroundps_avx(ZEXT416((uint)fVar18),0);
        auVar7 = vcmpss_avx(ZEXT416((uint)(fVar18 - auVar8._0_4_)),auVar19._0_16_,0);
        iVar10 = (int)(float)((uint)((float)(auVar7._0_4_ & 0x3f800000) + auVar8._0_4_) |
                             auVar28._0_4_ & (uint)local_150);
        if (iVar10 != iVar3) {
          *(int *)(ppppuVar11 + 0xa5) = iVar10;
          FUN_18050cd00();
        }
        fVar18 = *(float *)(ppppuVar11 + 0xc1);
        local_2b8 = auVar20._0_4_;
        local_2c0 = &local_168;
        local_2c8 = (char *)CONCAT44(local_2c8._4_4_,auVar23._0_4_);
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,auVar26._0_4_);
        local_168 = (undefined8 *****)ppppuVar11;
        FUN_18054e130(&local_138);
        if (fVar18 != *(float *)(ppppuVar11 + 0xc1)) {
          FUN_18050cd00();
        }
        ppppuVar1 = ppppuVar11 + 0x7d;
        local_168 = (undefined8 *****)0x1808672a0;
        local_148 = &local_168;
        cVar14 = *(char *)ppppuVar1;
        local_228 = &local_148;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        local_220 = ppppuVar1;
        FUN_18055f2c0(&local_138,"Force Body Aim",ppppuVar1,&local_228);
        if (cVar14 != *(char *)ppppuVar1) {
          *(char *)(ppppuVar11 + 0x7f) = *(char *)ppppuVar1;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cc82f8;
        local_168 = (undefined8 *****)0x180858618;
        local_148 = &local_168;
        local_218 = &local_148;
        local_210 = &DAT_180cc82f8;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055f2c0(&local_138,"Quick Stop",&DAT_180cc82f8,&local_218);
        if (cVar14 != DAT_180cc82f8) {
          DAT_180cc8308 = DAT_180cc82f8;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad5e0;
        local_168 = (undefined8 *****)0x180858608;
        local_148 = &local_168;
        local_208 = &local_148;
        local_200 = &DAT_180cad5e0;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055f2c0(&local_138,"Quick Scope",&DAT_180cad5e0);
        if (cVar14 != DAT_180cad5e0) {
          DAT_180cad5f0 = DAT_180cad5e0;
          FUN_18050cd00();
        }
        fVar18 = (float)(int)local_118._8_4_ * auVar21._0_4_ + auVar22._0_4_ + uStack_128._4_4_;
        if (DAT_180bbecdb != '\0') {
          if (DAT_180c62d18 != DAT_180c62d20) {
            FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar3 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
        }
      }
      else {
        FUN_180113930(&DAT_1808e6650,"Ragebot / Other",0xf);
        local_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        local_118 = (undefined1  [16])0x0;
        local_2c0 = (undefined8 *****)CONCAT44(local_2c0._4_4_,8);
        local_2c8 = "Assists & History";
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,auVar24._0_4_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar19 = ZEXT1664(auVar27._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        local_2d0._0_4_ = (float)auVar27._0_4_;
        FUN_180485630(&local_138,&local_150,0);
        cVar14 = DAT_180cad3c0;
        local_140 = (undefined8 *****)&DAT_180cad2e8;
        local_1f8 = &local_140;
        local_1f0 = &DAT_180cad3c0;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_180560460(&local_138);
        if (cVar14 != DAT_180cad3c0) {
          DAT_180cad3d0 = DAT_180cad3c0;
          FUN_18050cd00();
        }
        ppppuVar1 = ppppuVar11 + 99;
        local_140 = (undefined8 *****)0x1808585d8;
        local_158 = &local_140;
        cVar14 = *(char *)ppppuVar1;
        local_1e8 = &local_158;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        local_1e0 = ppppuVar1;
        FUN_18055f2c0(&local_138,"Remove Spread",ppppuVar1,&local_1e8);
        if (cVar14 != *(char *)ppppuVar1) {
          *(char *)(ppppuVar11 + 0x65) = *(char *)ppppuVar1;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad358;
        local_158 = (undefined8 *****)0x1808585c0;
        local_140 = &local_158;
        local_1d8 = &local_140;
        local_1d0 = &DAT_180cad358;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055f2c0(&local_138,"Duck Peek Assist",&DAT_180cad358,&local_1d8);
        if (cVar14 != DAT_180cad358) {
          DAT_180cad368 = DAT_180cad358;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad2e8;
        local_158 = (undefined8 *****)&DAT_180cad2e8;
        local_1c8 = &local_158;
        local_1c0 = &DAT_180cad2e8;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_180560880(&local_138);
        if (cVar14 != DAT_180cad2e8) {
          DAT_180cad2f8 = DAT_180cad2e8;
          FUN_18050cd00();
        }
        ppppuVar1 = ppppuVar11 + 0x70;
        local_158 = (undefined8 *****)0x180858498;
        local_140 = &local_158;
        cVar14 = *(char *)ppppuVar1;
        local_1b8 = &local_140;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        local_1b0 = ppppuVar1;
        FUN_18055f2c0(&local_138,"Double Tap",ppppuVar1,&local_1b8);
        if (cVar14 != *(char *)ppppuVar1) {
          *(char *)(ppppuVar11 + 0x72) = *(char *)ppppuVar1;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad648;
        local_158 = (undefined8 *****)&DAT_180cad2e8;
        local_1a8 = &local_158;
        local_1a0 = &DAT_180cad648;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_180560ca0(&local_138);
        if (cVar14 != DAT_180cad648) {
          DAT_180cad658 = DAT_180cad648;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad4a0;
        local_158 = (undefined8 *****)&DAT_180cad2e8;
        local_198 = &local_158;
        local_190 = &DAT_180cad4a0;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_1805610f0(&local_138);
        if (cVar14 != DAT_180cad4a0) {
          DAT_180cad4b0 = DAT_180cad4a0;
          FUN_18050cd00();
        }
        cVar14 = DAT_180cad578;
        local_158 = (undefined8 *****)0x180867258;
        local_140 = &local_158;
        local_188 = &local_140;
        local_180 = &DAT_180cad578;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_18055f2c0(&local_138,"Auto Revolver",&DAT_180cad578,&local_188);
        if (cVar14 != DAT_180cad578) {
          DAT_180cad588 = DAT_180cad578;
          FUN_18050cd00();
        }
        fVar18 = (float)(int)local_118._8_4_ * auVar21._0_4_ + auVar22._0_4_ + uStack_128._4_4_ +
                 auVar25._0_4_;
        if (DAT_180bbecdb != '\0') {
          if (DAT_180c62d18 != DAT_180c62d20) {
            FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar3 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
        }
        FUN_180113930(&DAT_1808e6650,"Ragebot / Anti-Aim",0x12);
        local_138 = 0;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_120 = 0;
        local_118 = (undefined1  [16])0x0;
        local_2c0 = (undefined8 *****)CONCAT44(local_2c0._4_4_,4);
        local_2c8 = "Anti-Aim";
        local_2d8 = (char *)CONCAT44(local_2d8._4_4_,auVar24._0_4_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar19._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        local_2d0._0_4_ = fVar18;
        FUN_180485630(&local_138,&local_150,0);
        cVar14 = DAT_180cad6b8;
        local_158 = (undefined8 *****)&DAT_180cad6b8;
        local_178 = &local_158;
        local_170 = &DAT_180cad6b8;
        local_2d0 = (char *)CONCAT44(local_2d0._4_4_,auVar20._0_4_);
        FUN_180561540(&local_138);
        if (cVar14 != DAT_180cad6b8) {
          DAT_180cad6c8 = DAT_180cad6b8;
          FUN_18050cd00();
        }
        FUN_18054e820(&local_138,"Pitch",FUN_180517150,auVar20._0_8_);
        FUN_18054e820(&local_138,&DAT_180858658,FUN_1805172f0,auVar20._0_8_);
        FUN_18054e820(&local_138,"Direction Overrides",FUN_180517700,auVar20._0_8_);
        fVar18 = (float)(int)local_118._8_4_ * auVar21._0_4_ + auVar22._0_4_ + uStack_128._4_4_;
        if (DAT_180bbecdb != '\0') {
          if (DAT_180c62d18 != DAT_180c62d20) {
            FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar3 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
        }
      }
      lVar12 = DAT_180bb8ae8;
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      local_29c = DAT_180b0a41c;
      lVar12 = *(longlong *)(lVar12 + 0x14d0);
      *(float *)(lVar12 + 0x11c) =
           (*(float *)(lVar12 + 0x2c) - *(float *)(lVar12 + 0x9c)) + fVar18 * DAT_180b0a41c;
      *(undefined1 *)(lVar12 + 0x159) = 1;
      local_29c = local_29c * 2.0;
      FUN_1804f6ea0(&local_2a0);
      FUN_1804bbd00();
      iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar3 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < 2);
    iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar3 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
    }
  }
}



