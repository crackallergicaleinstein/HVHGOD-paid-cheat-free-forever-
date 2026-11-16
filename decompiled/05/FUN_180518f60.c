// FUN_180518f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180518f60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180518f60(float *param_1)

{
  char *****pppppcVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  char cVar9;
  char *****pppppcVar10;
  longlong lVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auStack_298 [32];
  char *local_278;
  float local_270;
  char *local_268;
  char *****local_260;
  undefined4 local_258;
  undefined8 local_248;
  char *****local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  float local_208;
  float local_204;
  undefined4 local_200;
  float local_1fc;
  char *****local_1f8;
  undefined1 *local_1f0;
  undefined1 **local_1e8;
  char *****local_1e0;
  undefined1 **local_1d8;
  char *****local_1d0;
  char *****local_1c8;
  char *****local_1c0;
  undefined **local_1b8;
  undefined8 local_1b0;
  char *****local_1a8;
  undefined1 *local_1a0;
  char *****local_198;
  char *****local_190;
  char *****local_188;
  undefined1 *local_180;
  char *****local_178;
  char *****local_170;
  char *****local_168;
  char *****local_160;
  char *****local_158;
  char *****local_150;
  char *****local_148;
  char *****local_140;
  char *****local_138;
  undefined1 local_130;
  undefined1 local_12f [7];
  char *****local_128;
  float local_120;
  undefined1 *local_118;
  undefined *local_110;
  char *pcStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined1 local_f0 [16];
  char local_e0;
  char local_df;
  char local_de;
  char local_dd;
  char local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  if (DAT_180bbecdb == '\0') {
    pppppcVar10 = (char *****)FUN_180509ec0(&DAT_180c8fdb8);
    if (DAT_180c7e118 != pppppcVar10) {
      DAT_180c62f48 = 0;
      DAT_180c62fe0 = 0;
      DAT_1808e4f84 = 0xffffffff;
      DAT_180bbecdf = 0;
      DAT_180bbecde = 0;
      lVar11 = FUN_180439770();
      *(undefined8 *)(lVar11 + 0x420) = 0;
      DAT_180c7e118 = pppppcVar10;
    }
    FUN_1804c28a0(pppppcVar10);
    local_12f[0] = 0;
    local_118 = local_12f;
    local_130 = 0;
    uVar15 = 0;
    local_200 = 0x3f800000;
    auVar24 = ZEXT464(0x40e00000);
    auVar22 = ZEXT464(0x436b0000);
    auVar18 = ZEXT464(0x43af0000);
    auVar23 = ZEXT464(0x3dcccccd);
    auVar26 = ZEXT464(0x42700000);
    auVar19 = ZEXT464(0x41f6d82c);
    auVar20 = ZEXT464(0x3f19999a);
    auVar21 = ZEXT464(0x41a80000);
    auVar25 = ZEXT464(0x43660000);
    local_240 = pppppcVar10;
    do {
      FUN_1804c2920(uVar15);
      lVar8 = DAT_180bb8ae8;
      local_204 = DAT_180b0a41c;
      auVar7 = vpcmpeqd_avx(ZEXT416(uVar15),SUB6416(ZEXT464(0),0));
      auVar7 = vblendvps_avx(SUB6416(ZEXT464(0x43c30000),0),SUB6416(ZEXT464(0x43110000),0),auVar7);
      fVar5 = auVar7._0_4_ * DAT_180b0a41c;
      fVar17 = *param_1;
      fVar6 = DAT_180b0a41c * 48.0;
      fVar2 = param_1[1];
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar8 + 0x14d0);
      *(float *)(lVar11 + 0x118) = fVar5 + fVar17;
      *(float *)(lVar11 + 0x11c) = fVar6 + fVar2;
      *(undefined1 *)(lVar11 + 0x159) = 1;
      local_208 = local_204 * 238.0;
      local_204 = local_204 * 427.0;
      *(undefined1 *)(*(longlong *)(lVar8 + 0x14d0) + 0xce) = 1;
      plVar4 = *(longlong **)(lVar8 + 0x14d0);
      uVar13 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
      pcVar12 = "##legit_column";
      cVar9 = '#';
      uVar14 = uVar13;
      do {
        pcVar12 = pcVar12 + 1;
        if (((cVar9 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
          pcVar12 = pcVar12 + 2;
          uVar14 = uVar13;
        }
        else {
          uVar14 = crc32(uVar14,cVar9);
        }
        cVar9 = *pcVar12;
      } while (cVar9 != '\0');
      uVar14 = ~uVar14;
      if (*(uint *)(*plVar4 + 0x1534) == uVar14) {
        FUN_1804cf810(uVar14,0xb,"##legit_column");
      }
      local_278._0_4_ = 0x80;
      FUN_1804bb960("##legit_column",uVar14,&local_208,0);
      local_248 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
      if (uVar15 == 0) {
        FUN_180113930(&DAT_1808e6650,"Legitbot / Aim",0xe);
        local_110 = (undefined *)0x0;
        pcStack_108 = (char *)0x0;
        uStack_100 = (char *)0x0;
        puStack_f8 = (undefined *)0x0;
        local_f0 = (undefined1  [16])0x0;
        local_260 = (char *****)CONCAT44(local_260._4_4_,4);
        local_268 = "Aim Assist";
        local_270 = auVar24._0_4_;
        local_278 = (char *)CONCAT44(local_278._4_4_,auVar22._0_4_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        auVar19 = ZEXT1664(auVar19._0_16_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        FUN_180485630(&local_110,&local_248,0);
        local_128 = (char *****)0x1808674a8;
        local_138 = (char *****)&local_128;
        cVar9 = *(char *)pppppcVar10;
        local_1c8 = (char *****)&local_138;
        local_270 = auVar18._0_4_;
        local_1c0 = pppppcVar10;
        FUN_18055f2c0(&local_110,"Aim Assist",pppppcVar10,&local_1c8);
        if (cVar9 != *(char *)pppppcVar10) {
          *(char *)(pppppcVar10 + 2) = *(char *)pppppcVar10;
          FUN_18050cd00();
        }
        local_120 = (float)FUN_180233fd0(*(undefined4 *)(pppppcVar10 + 0xd),0,0);
        local_258 = auVar18._0_4_;
        local_260 = (char *****)&local_138;
        local_268 = (char *)CONCAT44(local_268._4_4_,auVar23._0_4_);
        local_278 = (char *)CONCAT44(local_278._4_4_,auVar26._0_4_);
        local_138 = pppppcVar10;
        fVar17 = local_120;
        FUN_18054f870(&local_110);
        if (fVar17 != local_120) {
          *(float *)(pppppcVar10 + 0xd) = local_120;
          FUN_18050cd00();
        }
        if (DAT_180bbecdb == '\0') {
          local_128 = pppppcVar10;
          FUN_1804c2800("Aim Motion");
          cVar9 = FUN_180486160(&local_110,"Aim Motion");
          if (DAT_180bbecdb == '\0') {
            if (cVar9 != '\0') {
              FUN_180488320("##settings");
            }
            cVar9 = FUN_180488630("##settings","Aim Motion",auVar18._0_8_);
            uVar16 = extraout_XMM0_Qa;
            if (cVar9 != '\0') {
              FUN_18051a440(&local_128);
              uVar16 = FUN_1804aeac0();
            }
          }
          else {
            FUN_180493f00("Aim Motion");
            uVar16 = FUN_18051a440(&local_128);
            if (DAT_180c62d18 != DAT_180c62d20) {
              uVar16 = FUN_18015c010(DAT_180c62d20 + -0x20);
              DAT_180c62d20 = DAT_180c62d20 + -0x20;
            }
            DAT_1808e4e38 = 0xffffffff;
          }
          iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar3 < 2) {
            uVar16 = FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
          }
        }
        else {
          local_128 = pppppcVar10;
          FUN_180493f00();
          uVar16 = FUN_18051a440(&local_128);
          if (DAT_180c62d18 != DAT_180c62d20) {
            uVar16 = FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        local_1e8 = &local_118;
        local_1e0 = pppppcVar10;
        if (DAT_180bbecdb == '\0') {
          FUN_1804c2800("Aim Conditions");
          cVar9 = FUN_180486160(&local_110,"Aim Conditions");
          if (DAT_180bbecdb == '\0') {
            if (cVar9 != '\0') {
              FUN_180488320("##settings");
            }
            cVar9 = FUN_180488630("##settings","Aim Conditions",auVar18._0_8_);
            if (cVar9 != '\0') {
              uVar16 = FUN_180488c60();
              FUN_18051a6b0(uVar16,(char *)((longlong)pppppcVar10 + 0x95));
              FUN_180488f10();
              FUN_1804aeac0();
            }
          }
          else {
            FUN_1805619d0(extraout_XMM0_Qa_00,&local_1e8);
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
          FUN_1805619d0(uVar16,&local_1e8);
        }
        fVar17 = (float)(int)local_f0._8_4_ * auVar19._0_4_ + auVar20._0_4_ + uStack_100._4_4_ +
                 auVar21._0_4_;
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
        FUN_180113930(&DAT_1808e6650,"Legitbot / Targeting",0x14);
        local_238 = 0;
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        local_218 = (undefined1  [16])0x0;
        local_260 = (char *****)CONCAT44(local_260._4_4_,3);
        local_268 = "Targeting";
        local_278 = (char *)CONCAT44(local_278._4_4_,auVar22._0_4_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        auVar19 = ZEXT1664(auVar19._0_16_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        local_270 = fVar17;
        FUN_180485630(&local_238,&local_248,0);
        local_110 = &DAT_180858228;
        pcStack_108 = "Chest";
        uStack_100 = "Stomach";
        puStack_f8 = &DAT_18085820c;
        local_f0._0_8_ = &DAT_180858204;
        local_e0 = *(char *)((longlong)pppppcVar10 + 0x9d);
        local_df = *(char *)((longlong)pppppcVar10 + 0x9e);
        local_de = *(char *)((longlong)pppppcVar10 + 0x9f);
        local_dd = *(char *)(pppppcVar10 + 0x14);
        local_dc = *(char *)((longlong)pppppcVar10 + 0xa1);
        local_1b8 = &local_110;
        local_1b0 = 5;
        local_278 = "Head (default)";
        FUN_180486f50(&local_238,"Aim Hitboxes",&local_1b8,&local_e0);
        if (local_e0 != *(char *)((longlong)pppppcVar10 + 0x9d)) {
          *(char *)((longlong)pppppcVar10 + 0x9d) = local_e0;
          FUN_18050cd00();
        }
        if (local_df != *(char *)((longlong)pppppcVar10 + 0x9e)) {
          *(char *)((longlong)pppppcVar10 + 0x9e) = local_df;
          FUN_18050cd00();
        }
        if (local_de != *(char *)((longlong)pppppcVar10 + 0x9f)) {
          *(char *)((longlong)pppppcVar10 + 0x9f) = local_de;
          FUN_18050cd00();
        }
        if (local_dd != *(char *)(pppppcVar10 + 0x14)) {
          *(char *)(pppppcVar10 + 0x14) = local_dd;
          FUN_18050cd00();
        }
        if (local_dc != *(char *)((longlong)pppppcVar10 + 0xa1)) {
          *(char *)((longlong)pppppcVar10 + 0xa1) = local_dc;
          FUN_18050cd00();
        }
        if (DAT_180bbecdb == '\0') {
          local_128 = pppppcVar10;
          FUN_1804c2800("Target Selection");
          cVar9 = FUN_180486160(&local_238,"Target Selection");
          if (DAT_180bbecdb == '\0') {
            if (cVar9 != '\0') {
              FUN_180488320("##settings");
            }
            cVar9 = FUN_180488630("##settings","Target Selection",auVar18._0_8_);
            if (cVar9 != '\0') {
              FUN_18051a810(&local_128);
              FUN_1804aeac0();
            }
          }
          else {
            FUN_180493f00("Target Selection");
            FUN_18051a810(&local_128);
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
          local_128 = pppppcVar10;
          FUN_180493f00();
          FUN_18051a810(&local_128);
          if (DAT_180c62d18 != DAT_180c62d20) {
            FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        cVar9 = *(char *)((longlong)pppppcVar10 + 0x94);
        FUN_180486500(&local_238,"Keep Current Target",(char *)((longlong)pppppcVar10 + 0x94));
        if (cVar9 != *(char *)((longlong)pppppcVar10 + 0x94)) {
          FUN_18050cd00();
        }
        fVar17 = (float)(int)local_218._8_4_ * auVar19._0_4_ + auVar20._0_4_ + uStack_228._4_4_ +
                 auVar21._0_4_;
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
        FUN_180113930(&DAT_1808e6650,"Legitbot / Recoil",0x11);
        local_238 = 0;
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        local_218 = (undefined1  [16])0x0;
        local_260 = (char *****)CONCAT44(local_260._4_4_,2);
        local_268 = "Recoil Control";
        local_278 = (char *)CONCAT44(local_278._4_4_,auVar22._0_4_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        auVar19 = ZEXT1664(auVar19._0_16_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        local_270 = fVar17;
        FUN_180485630(&local_238,&local_248,0);
        local_1a0 = &local_130;
        pppppcVar1 = pppppcVar10 + 0x15;
        cVar9 = *(char *)pppppcVar1;
        local_198 = (char *****)&local_1a8;
        local_270 = auVar18._0_4_;
        local_1a8 = pppppcVar10;
        local_190 = pppppcVar1;
        FUN_180561a30(&local_238);
        if (cVar9 != *(char *)pppppcVar1) {
          *(char *)(pppppcVar10 + 0x17) = *(char *)pppppcVar1;
          FUN_18050cd00();
        }
        local_180 = &local_130;
        pppppcVar1 = pppppcVar10 + 0x23;
        cVar9 = *(char *)pppppcVar1;
        local_178 = (char *****)&local_188;
        local_270 = auVar18._0_4_;
        local_188 = pppppcVar10;
        local_170 = pppppcVar1;
        FUN_180561e80(&local_238);
        if (cVar9 != *(char *)pppppcVar1) {
          *(char *)(pppppcVar10 + 0x25) = *(char *)pppppcVar1;
          FUN_18050cd00();
        }
        fVar17 = (float)(int)local_218._8_4_ * auVar19._0_4_ + auVar20._0_4_ + uStack_228._4_4_;
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
        FUN_180113930(&DAT_1808e6650,"Legitbot / Trigger",0x12);
        local_110 = (undefined *)0x0;
        pcStack_108 = (char *)0x0;
        uStack_100 = (char *)0x0;
        puStack_f8 = (undefined *)0x0;
        local_f0 = (undefined1  [16])0x0;
        local_260 = (char *****)CONCAT44(local_260._4_4_,7);
        local_268 = "Triggerbot";
        local_270 = auVar24._0_4_;
        local_278 = (char *)CONCAT44(local_278._4_4_,auVar22._0_4_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        auVar19 = ZEXT1664(auVar19._0_16_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        FUN_180485630(&local_110,&local_248,0);
        pppppcVar1 = pppppcVar10 + 0x35;
        local_138 = (char *****)0x1808674f0;
        local_128 = (char *****)&local_138;
        cVar9 = *(char *)pppppcVar1;
        local_168 = (char *****)&local_128;
        local_270 = auVar18._0_4_;
        local_160 = pppppcVar1;
        FUN_18055f2c0(&local_110,"Triggerbot",pppppcVar1,&local_168);
        if (cVar9 != *(char *)pppppcVar1) {
          *(char *)(pppppcVar10 + 0x37) = *(char *)pppppcVar1;
          FUN_18050cd00();
        }
        pppppcVar1 = pppppcVar10 + 0x42;
        local_138 = (char *****)0x180867608;
        local_128 = (char *****)&local_138;
        cVar9 = *(char *)pppppcVar1;
        local_158 = (char *****)&local_128;
        local_270 = auVar18._0_4_;
        local_150 = pppppcVar1;
        FUN_18055f2c0(&local_110,"Pro-Spread",pppppcVar1,&local_158);
        if (cVar9 != *(char *)pppppcVar1) {
          *(char *)(pppppcVar10 + 0x44) = *(char *)pppppcVar1;
          FUN_18050cd00();
        }
        local_278._0_4_ = 0xffffffff;
        FUN_18051a1b0(&local_240,&local_110,1,pppppcVar10 + 0x50);
        local_278 = (char *)CONCAT44(local_278._4_4_,0xffffffff);
        FUN_18051a1b0(&local_240,&local_110,0,(char *)((longlong)pppppcVar10 + 0x2a4));
        local_1f0 = local_12f;
        local_1f8 = pppppcVar10;
        if (DAT_180bbecdb == '\0') {
          FUN_1804c2800("Shot Accuracy");
          cVar9 = FUN_180486160(&local_110,"Shot Accuracy");
          if (DAT_180bbecdb == '\0') {
            if (cVar9 != '\0') {
              FUN_180488320("##settings");
            }
            cVar9 = FUN_180488630("##settings","Shot Accuracy",auVar18._0_8_);
            uVar16 = extraout_XMM0_Qa_01;
            if (cVar9 != '\0') {
              FUN_18051aa10(&local_1f8);
              uVar16 = FUN_1804aeac0();
            }
          }
          else {
            FUN_180493f00("Shot Accuracy");
            uVar16 = FUN_18051aa10(&local_1f8);
            if (DAT_180c62d18 != DAT_180c62d20) {
              uVar16 = FUN_18015c010(DAT_180c62d20 + -0x20);
              DAT_180c62d20 = DAT_180c62d20 + -0x20;
            }
            DAT_1808e4e38 = 0xffffffff;
          }
          iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar3 < 2) {
            uVar16 = FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
          }
        }
        else {
          FUN_180493f00();
          uVar16 = FUN_18051aa10(&local_1f8);
          if (DAT_180c62d18 != DAT_180c62d20) {
            uVar16 = FUN_18015c010(DAT_180c62d20 + -0x20);
            DAT_180c62d20 = DAT_180c62d20 + -0x20;
          }
          DAT_1808e4e38 = 0xffffffff;
        }
        if (DAT_180bbecdb == '\0') {
          local_128 = pppppcVar10;
          FUN_1804c2800("Shot Timing");
          cVar9 = FUN_180486160(&local_110,"Shot Timing");
          if (DAT_180bbecdb == '\0') {
            if (cVar9 != '\0') {
              FUN_180488320("##settings");
            }
            cVar9 = FUN_180488630("##settings","Shot Timing",auVar25._0_8_);
            uVar16 = extraout_XMM0_Qa_03;
            if (cVar9 != '\0') {
              local_138 = pppppcVar10;
              FUN_180488c60();
              FUN_18051ab60(&local_138);
              FUN_180488f10();
              uVar16 = FUN_1804aeac0();
            }
          }
          else {
            uVar16 = FUN_1805622d0(extraout_XMM0_Qa_02,&local_128);
          }
          iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar3 < 2) {
            uVar16 = FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
          }
        }
        else {
          local_128 = pppppcVar10;
          uVar16 = FUN_1805622d0(uVar16,&local_128);
        }
        local_1d8 = &local_118;
        local_1d0 = pppppcVar10;
        if (DAT_180bbecdb == '\0') {
          FUN_1804c2800("Trigger Conditions");
          cVar9 = FUN_180486160(&local_110,"Trigger Conditions");
          if (DAT_180bbecdb == '\0') {
            if (cVar9 != '\0') {
              FUN_180488320("##settings");
            }
            cVar9 = FUN_180488630("##settings","Trigger Conditions",auVar18._0_8_);
            if (cVar9 != '\0') {
              uVar16 = FUN_180488c60();
              FUN_18051a6b0(uVar16,(char *)((longlong)pppppcVar10 + 0x99));
              FUN_180488f10();
              FUN_1804aeac0();
            }
          }
          else {
            FUN_180562340(extraout_XMM0_Qa_04,&local_1d8);
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
          FUN_180562340(uVar16,&local_1d8);
        }
        fVar17 = (float)(int)local_f0._8_4_ * auVar19._0_4_ + auVar20._0_4_ + uStack_100._4_4_ +
                 auVar21._0_4_;
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
        FUN_180113930(&DAT_1808e6650,"Legitbot / Auto Wall",0x14);
        local_238 = 0;
        uStack_230 = 0;
        uStack_228 = 0;
        uStack_220 = 0;
        local_218 = (undefined1  [16])0x0;
        local_260 = (char *****)CONCAT44(local_260._4_4_,3);
        local_268 = "Auto Wall";
        local_278 = (char *)CONCAT44(local_278._4_4_,auVar22._0_4_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        auVar19 = ZEXT1664(auVar19._0_16_);
        auVar20 = ZEXT1664(auVar20._0_16_);
        auVar21 = ZEXT1664(auVar21._0_16_);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        local_270 = fVar17;
        FUN_180485630(&local_238,&local_248,0);
        pppppcVar1 = pppppcVar10 + 0x70;
        local_138 = (char *****)0x180858700;
        local_128 = (char *****)&local_138;
        cVar9 = *(char *)pppppcVar1;
        local_148 = (char *****)&local_128;
        local_270 = auVar18._0_4_;
        local_140 = pppppcVar1;
        FUN_18055f2c0(&local_238,"Auto Wall",pppppcVar1,&local_148);
        if (cVar9 != *(char *)pppppcVar1) {
          *(char *)(pppppcVar10 + 0x72) = *(char *)pppppcVar1;
          FUN_18050cd00();
        }
        local_278._0_4_ = 2;
        FUN_18051a1b0(&local_240,&local_238,0,pppppcVar10 + 0x7d);
        local_278 = (char *)CONCAT44(local_278._4_4_,3);
        FUN_18051a1b0(&local_240,&local_238,1);
        fVar17 = (float)(int)local_218._8_4_ * auVar19._0_4_ + auVar20._0_4_ + uStack_228._4_4_;
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
      lVar11 = DAT_180bb8ae8;
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      lVar11 = *(longlong *)(lVar11 + 0x14d0);
      *(undefined4 *)(lVar11 + 0x118) = (undefined4)local_248;
      *(float *)(lVar11 + 0x11c) = fVar17;
      *(undefined1 *)(lVar11 + 0x159) = 1;
      local_1fc = DAT_180b0a41c * 9.0;
      FUN_1804f6ea0(&local_200);
      FUN_1804bbd00();
      iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar3 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < 2);
    iVar3 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar3 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar3 + -1;
    }
  }
}



