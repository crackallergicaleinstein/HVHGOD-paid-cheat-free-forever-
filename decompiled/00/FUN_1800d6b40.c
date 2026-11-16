// FUN_1800d6b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d6b40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d6b40(undefined8 param_1,int param_2,byte param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  char **ppcVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined *puVar25;
  int iVar26;
  uint uVar27;
  undefined **ppuVar28;
  bool bVar29;
  undefined4 uVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  char ***pppcVar39;
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined4 uVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auStack_ba8 [32];
  undefined8 local_b88;
  undefined4 local_b80;
  undefined1 local_b78 [16];
  char *local_b68;
  undefined8 uStack_b60;
  undefined1 local_b58;
  undefined1 local_b57;
  undefined1 local_b56 [2];
  uint local_b54;
  char *local_b48;
  undefined8 uStack_b40;
  undefined1 local_b38 [4];
  uint local_b34;
  undefined1 local_b30 [24];
  undefined1 local_b18 [24];
  uint local_b00 [2];
  char *local_af8;
  undefined8 uStack_af0;
  uint local_ae8;
  undefined1 local_ae0 [24];
  undefined1 local_ac8 [8];
  undefined1 local_ac0 [24];
  undefined1 local_aa8 [24];
  undefined1 local_a90 [24];
  char *local_a78 [10];
  char *local_a28 [2];
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  char *local_9f8;
  char *local_9f0;
  char *local_9e8;
  undefined *local_9e0;
  undefined *local_9d8;
  char *local_9d0;
  char *local_9c8;
  char **local_9c0;
  char *local_9b8 [2];
  char **local_9a8;
  longlong local_9a0;
  char *local_998 [2];
  char *local_988 [2];
  char *local_978;
  char *local_970;
  char *local_968;
  char *local_960;
  char *local_958;
  char *local_950;
  char *local_948;
  char *local_940;
  char *local_938 [2];
  undefined1 local_928;
  char local_927 [7];
  byte local_920 [8];
  undefined1 local_918 [16];
  char **local_908;
  ulonglong uStack_900;
  char **local_8f8;
  char *pcStack_8f0;
  undefined1 local_8e8 [16];
  char ***local_8d8;
  char *pcStack_8d0;
  char *local_8c8;
  undefined8 uStack_8c0;
  int local_8b8 [2];
  char *local_8b0;
  char *local_8a8;
  char *local_8a0;
  undefined1 local_898 [8];
  undefined1 local_890 [24];
  char *local_878;
  char *local_870;
  char *local_868;
  char *local_860;
  char *local_858;
  char *local_850;
  char *local_848;
  char *local_840;
  char *local_838;
  char *local_830;
  char *local_828;
  char *local_820;
  char *local_818;
  char *local_810;
  char *local_808;
  char *local_800;
  char **local_7f8;
  longlong local_7f0;
  undefined1 local_7e8 [32];
  char *local_7c8;
  char *local_7c0;
  char *local_7b8;
  undefined1 local_7b0 [8];
  undefined1 local_7a8 [24];
  undefined1 local_790 [24];
  undefined1 local_778 [24];
  undefined1 local_760 [24];
  char *local_748;
  char *local_740;
  char *local_738;
  undefined1 local_730 [8];
  undefined1 local_728 [24];
  undefined1 local_710 [8];
  undefined1 local_708 [24];
  undefined1 local_6f0 [24];
  undefined1 local_6d8 [24];
  undefined1 local_6c0 [8];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [32];
  char *local_688 [2];
  undefined1 local_678 [32];
  undefined1 local_658 [32];
  undefined1 local_638 [16];
  undefined1 local_628 [32];
  undefined1 local_608 [24];
  undefined1 local_5f0 [24];
  undefined1 *local_5d8;
  undefined8 local_5d0;
  int *local_5c8;
  undefined1 local_5c0 [32];
  undefined1 local_5a0 [32];
  undefined1 local_580 [32];
  undefined1 local_560 [32];
  undefined1 local_540 [32];
  undefined1 local_520 [32];
  undefined1 local_500 [32];
  undefined1 local_4e0 [32];
  undefined1 local_4c0 [32];
  undefined1 local_4a0 [32];
  undefined1 local_480 [24];
  undefined1 local_468 [32];
  undefined1 local_448 [32];
  undefined1 local_428 [32];
  undefined1 local_408 [32];
  undefined1 local_3e8 [32];
  undefined1 local_3c8 [32];
  undefined1 local_3a8 [32];
  undefined1 local_388 [32];
  undefined1 local_368 [32];
  undefined1 local_348 [32];
  undefined1 local_328 [32];
  undefined1 local_308 [32];
  undefined1 local_2e8 [32];
  undefined1 local_2c8 [32];
  undefined1 local_2a8 [32];
  undefined1 local_288 [32];
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  char *local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  undefined1 local_150 [8];
  char *local_148;
  char *local_140;
  char *local_138 [6];
  char *local_108 [2];
  undefined1 local_f8 [16];
  char *local_e8 [22];
  
  local_e8[0] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_ba8);
  local_b00[0] = 0;
  local_b54 = 0;
  local_ae8 = 0;
  local_b34 = 0;
  local_920[0] = param_3;
  local_8b8[0] = param_2;
  FUN_1800d3b30();
  FUN_1800ea640(param_1,local_8b8[0],local_920[0],&local_928);
  bVar3 = local_920[0];
  if (local_8b8[0] < 0xb) {
    if ((local_920[0] == 0) || (puVar24 = &DAT_180cc8048, 1 < local_8b8[0])) {
      puVar24 = &DAT_180cc8058;
    }
    FUN_1800ac940(&local_8b0,0x20);
    FUN_1800f3f60(puVar24,&local_8b0);
    uVar6 = FUN_1800f3e20(puVar24,local_7a8);
    cVar2 = FUN_1800e6c90(&local_8b0,uVar6);
    while (cVar2 != '\0') {
      if (bVar3 != 0) goto LAB_1800d6cc4;
      uVar6 = FUN_1800f3380(&local_8b0);
      bVar3 = FUN_1800f40c0(param_1,uVar6);
      FUN_1800f33e0(&local_8b0);
      uVar6 = FUN_1800f3e20(puVar24,local_7a8);
      cVar2 = FUN_1800e6c90(&local_8b0,uVar6);
    }
    if (bVar3 != 0) {
LAB_1800d6cc4:
      FUN_1800ac940(&local_8b0,0x20);
      FUN_1800f3f60(puVar24,&local_8b0);
      uVar6 = FUN_1800f3e20(puVar24,local_7a8);
      cVar2 = FUN_1800e6c90(&local_8b0,uVar6);
      while (cVar2 != '\0') {
        uVar6 = FUN_1800f3380(&local_8b0);
        cVar2 = FUN_1800f40c0(param_1,uVar6);
        if (cVar2 == '\0') {
          local_8d8 = &local_8f8;
          uVar6 = thunk_FUN_1800f3560(&local_8b0);
          uVar6 = FUN_1800f4a50(&local_8f8,uVar6);
          uVar7 = FUN_1800f3380(&local_8b0);
          uVar7 = FUN_18015b360(local_7a8,uVar7);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          FUN_1800f49f0(uVar7,uVar6);
        }
        FUN_1800f33e0(&local_8b0);
        uVar6 = FUN_1800f3e20(puVar24,local_7a8);
        cVar2 = FUN_1800e6c90(&local_8b0,uVar6);
      }
    }
  }
  if (local_8b8[0] == 0xb) {
    local_a78[0] = "chams enemy";
    local_a78[1] = "chams team";
    local_a78[2] = "chams local";
    local_a78[3] = "chams enemy ragdoll";
    local_a78[4] = "chams team ragdoll";
    local_a78[5] = "chams local ragdoll";
    local_a78[6] = "chams backtrack";
    local_a78[7] = "chams onshot";
    local_a78[8] = "chams enemy equipment";
    local_a78[9] = "chams team equipment";
    ppcVar22 = local_a78;
    bVar3 = local_920[0];
    do {
      pcVar12 = *ppcVar22;
      local_878 = "primary color";
      local_870 = "primary layer";
      local_868 = "primary visibility";
      local_860 = "primary material";
      local_858 = "secondary layer";
      local_850 = "secondary color";
      local_848 = "secondary visibility";
      local_840 = "secondary material";
      local_838 = "overlay layer";
      local_830 = "overlay color";
      local_828 = "overlay visibility";
      local_820 = "chams";
      local_818 = "ragdoll chams";
      local_810 = "backtrack chams";
      local_808 = "onshot chams";
      local_800 = "charms";
      FUN_1800dff00(&local_8f8,&local_878,&local_7f8);
      puVar8 = (undefined8 *)FUN_1800efea0(&local_8f8);
      puVar9 = (undefined8 *)FUN_1800efe90(&local_8f8);
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        puVar10 = (undefined8 *)FUN_18015b110(&local_b68,*puVar8);
        local_908 = (char **)*puVar10;
        uStack_900 = puVar10[1];
        puVar10 = (undefined8 *)FUN_18015b110(&local_b48,pcVar12);
        local_8d8 = (char ***)*puVar10;
        pcStack_8d0 = (char *)puVar10[1];
        uVar6 = FUN_1800dfa30(&local_928,local_7a8,&local_8d8,&local_908);
        bVar4 = FUN_1800f40c0(param_1,uVar6);
        bVar3 = bVar3 | bVar4;
        thunk_FUN_18015c010(local_7a8);
      }
      ppcVar22 = ppcVar22 + 1;
    } while (ppcVar22 != local_a28);
    if (bVar3 != 0) {
      ppcVar22 = local_a78;
      do {
        local_9f8 = *ppcVar22;
        FUN_1800dfc90(&local_8b0,&local_928,&local_9f8,param_1);
        local_9d0._0_4_ = 0xd2;
        FUN_1800e6250(&local_878,&local_9d0);
        local_9b8[0] = (char *)CONCAT44(local_9b8[0]._4_4_,0xd2);
        FUN_1800e6250(&local_860,local_9b8);
        local_9c0 = (char **)CONCAT44(local_9c0._4_4_,0xd2);
        FUN_1800e6250(&local_848,&local_9c0);
        local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
        FUN_1800e6250(&local_830,&local_9d8);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_b68,&local_878,&local_818);
        local_8c8 = (char *)*puVar8;
        uStack_8c0 = puVar8[1];
        uVar6 = FUN_1800f4e60(&local_7f8,&local_8c8);
        FUN_1800dfaf0(&local_8b0,"primary color",uVar6);
        FUN_1800aab30(&local_7f8);
        _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
        local_9d0._0_4_ = 2;
        FUN_1800e6200(&local_8f8,&local_9d0);
        FUN_1800dfaf0(&local_8b0,"primary visibility",&local_8f8);
        FUN_1800aab30(&local_8f8);
        FUN_1800e60e0(local_ac0,&DAT_1806bbee0);
        local_927[0] = '\0';
        FUN_1800e7560(local_aa8,local_927);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_b48,local_ac0,local_a90);
        local_8c8 = (char *)*puVar8;
        uStack_8c0 = puVar8[1];
        FUN_1800f3730(local_b30,&local_8c8);
        FUN_1800e60e0(&local_178,&DAT_1806bbee4);
        local_9c8 = (char *)0x0;
        FUN_1800eb230(&local_160,&local_9c8);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_af8,&local_178,&local_148);
        local_8c8 = (char *)*puVar8;
        uStack_8c0 = puVar8[1];
        FUN_1800f3730(local_b18,&local_8c8);
        puVar8 = (undefined8 *)FUN_1800dff00(local_998,local_b30,local_b00);
        local_8c8 = (char *)*puVar8;
        uStack_8c0 = puVar8[1];
        FUN_1800f4e90(&local_908,&local_8c8,1,2);
        FUN_1800dfaf0(&local_8b0,"secondary layer",&local_908);
        FUN_1800aab30(&local_908);
        _eh_vector_destructor_iterator_(local_b30,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
        local_9d0._0_4_ = 0xd2;
        FUN_1800e6250(&local_878,&local_9d0);
        local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xd2);
        FUN_1800e6250(&local_860,&local_9e0);
        local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xd2);
        FUN_1800e6250(&local_848,&local_9e8);
        local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xff);
        FUN_1800e6250(&local_830,&local_9f0);
        puVar8 = (undefined8 *)FUN_1800dff00(local_988,&local_878,&local_818);
        local_8c8 = (char *)*puVar8;
        uStack_8c0 = puVar8[1];
        uVar6 = FUN_1800f4e60(&local_9a8,&local_8c8);
        FUN_1800dfaf0(&local_8b0,"secondary color",uVar6);
        FUN_1800aab30(&local_9a8);
        _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
        local_9d0 = (char *)CONCAT44(local_9d0._4_4_,2);
        FUN_1800e6200(&local_8d8,&local_9d0);
        FUN_1800dfaf0(&local_8b0,"secondary visibility",&local_8d8);
        FUN_1800aab30(&local_8d8);
        ppcVar22 = ppcVar22 + 1;
      } while (ppcVar22 != local_a28);
    }
  }
  ppuVar28 = &PTR_s_pistol_1806ff2f8;
  dVar35 = 11.0;
  dVar34 = 19.0;
  do {
    pcVar12 = *ppuVar28;
    local_8f8 = (char **)0x1806bdb90;
    pcStack_8f0 = "secondary";
    local_9c8 = pcVar12;
    FUN_1800dff00(&local_908,&local_8f8,local_8e8);
    puVar8 = (undefined8 *)FUN_1800efea0(&local_908);
    puVar9 = (undefined8 *)FUN_1800efe90(&local_908);
    for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      uVar6 = *puVar8;
      uVar7 = FUN_18015bae0(local_778,"chams items - ");
      FUN_1800e5e50(local_708,uVar7,pcVar12);
      thunk_FUN_18015c010(local_778);
      uVar7 = FUN_18015bae0(local_ae0,uVar6);
      uVar7 = FUN_1800e5e50(local_7e8,uVar7," layer material");
      puVar10 = (undefined8 *)FUN_18015ac20(uVar7,&local_b68);
      local_8d8 = (char ***)*puVar10;
      pcStack_8d0 = (char *)puVar10[1];
      puVar10 = (undefined8 *)FUN_18015ac20(local_708,&local_b48);
      local_8c8 = (char *)*puVar10;
      uStack_8c0 = puVar10[1];
      FUN_1800dfa30(&local_928,local_7a8,&local_8c8,&local_8d8);
      thunk_FUN_18015c010(local_7e8);
      thunk_FUN_18015c010(local_ae0);
      FUN_1800ac940(&local_8b0,0x20);
      FUN_1800f4160(param_1,&local_8b0,local_7a8);
      uVar7 = FUN_1800f3ed0(param_1,local_b30);
      cVar2 = FUN_1800e6c90(&local_8b0,uVar7);
      if (cVar2 != '\0') {
        uVar7 = FUN_1800f34a0(&local_8b0);
        cVar2 = FUN_1800f46d0(uVar7);
        if (cVar2 != '\0') {
          uVar7 = FUN_1800f34a0(&local_8b0);
          dVar32 = (double)FUN_1800ea420(uVar7);
          if ((dVar35 <= dVar32) && (dVar32 < dVar34)) {
            uVar7 = FUN_1800f34a0(&local_8b0);
            uVar5 = FUN_1800e62a0(uVar7);
            local_8d8 = &local_7f8;
            bVar3 = FUN_1800bac90(uVar5);
            local_9f0 = (char *)CONCAT44(local_9f0._4_4_,(uint)bVar3);
            uVar7 = FUN_1800e6200(&local_7f8,&local_9f0);
            uVar11 = FUN_1800f3560(&local_8b0);
            FUN_1800f49f0(uVar11,uVar7);
            uVar6 = FUN_18015bae0(&local_7c8,uVar6);
            uVar6 = FUN_1800e5e50(&local_748,uVar6," visibility");
            puVar10 = (undefined8 *)FUN_18015ac20(uVar6,&local_af8);
            local_8d8 = (char ***)*puVar10;
            pcStack_8d0 = (char *)puVar10[1];
            puVar10 = (undefined8 *)FUN_18015ac20(local_708,local_998);
            local_8c8 = (char *)*puVar10;
            uStack_8c0 = puVar10[1];
            FUN_1800dfa30(&local_928,local_778,&local_8c8,&local_8d8);
            thunk_FUN_18015c010(&local_748);
            thunk_FUN_18015c010(&local_7c8);
            cVar2 = FUN_1800f40c0(param_1,local_778);
            if (cVar2 == '\0') {
              local_8d8 = &local_9a8;
              local_9e8 = (char *)CONCAT44(local_9e8._4_4_,1);
              uVar6 = FUN_1800e6200(&local_9a8,&local_9e8);
              uVar7 = FUN_18015b360(local_7e8,local_778);
              uVar7 = FUN_1800f43d0(param_1,uVar7);
              FUN_1800f49f0(uVar7,uVar6);
            }
            thunk_FUN_18015c010(local_778);
            pcVar12 = local_9c8;
          }
        }
      }
      thunk_FUN_18015c010(local_7a8);
      thunk_FUN_18015c010(local_708);
    }
    ppuVar28 = ppuVar28 + 1;
  } while (ppuVar28 != (undefined **)&DAT_1806ff328);
  FUN_1800eb260(param_1,local_8b8[0],local_920[0],local_928);
  puVar8 = (undefined8 *)FUN_18015b110(&local_b68,"configuration scope");
  local_8f8 = (char **)*puVar8;
  pcStack_8f0 = (char *)puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_b48,"trajectory");
  local_908 = (char **)*puVar8;
  uStack_900 = puVar8[1];
  FUN_1800dfa30(&local_928,local_228,&local_908,&local_8f8);
  uVar27 = local_ae8;
  uVar23 = local_b00[0];
  if (local_8b8[0] < 10) {
    local_8b0 = "he grenade";
    local_8a8 = "molotov";
    local_8a0 = "inferno";
    FUN_1800dff00(&local_908,&local_8b0,local_898);
    pcVar12 = (char *)FUN_1800efea0(&local_908);
    local_9f8 = pcVar12;
    pcVar13 = (char *)FUN_1800efe90(&local_908);
    local_9c8 = pcVar13;
    if (pcVar12 != pcVar13) {
      do {
        uVar6 = *(undefined8 *)pcVar12;
        local_8f8 = (char **)0x1806bda70;
        pcStack_8f0 = "glow";
        FUN_1800dff00(&local_7f8,&local_8f8,local_8e8);
        puVar8 = (undefined8 *)FUN_1800efea0(&local_7f8);
        puVar9 = (undefined8 *)FUN_1800efe90(&local_7f8);
        if (puVar8 != puVar9) {
          do {
            puVar10 = (undefined8 *)FUN_18015b110(&local_af8,*puVar8);
            pppcVar39 = (char ***)*puVar10;
            pcVar12 = (char *)puVar10[1];
            uVar7 = FUN_18015bae0(local_708,"esp indicator - ");
            uVar7 = FUN_1800e5e50(local_7a8,uVar7,uVar6);
            local_8d8 = pppcVar39;
            pcStack_8d0 = pcVar12;
            puVar10 = (undefined8 *)FUN_18015ac20(uVar7,local_998);
            local_8c8 = (char *)*puVar10;
            uStack_8c0 = puVar10[1];
            FUN_1800dfa30(&local_928,local_778,&local_8c8,&local_8d8);
            thunk_FUN_18015c010(local_7a8);
            thunk_FUN_18015c010(local_708);
            cVar2 = FUN_1800f40c0(param_1,local_778);
            if (cVar2 == '\0') {
              local_8d8 = &local_9a8;
              FUN_1800e60e0(local_ac0,&DAT_1806bbee0);
              local_927[0] = '\x01';
              FUN_1800e7560(local_aa8,local_927);
              puVar10 = (undefined8 *)FUN_1800dff00(local_988,local_ac0,local_a90);
              local_8c8 = (char *)*puVar10;
              uStack_8c0 = puVar10[1];
              FUN_1800f3730(local_b30,&local_8c8);
              FUN_1800e60e0(&local_178,&DAT_1806bbee4);
              local_9c8 = (char *)0x0;
              FUN_1800eb230(&local_160,&local_9c8);
              puVar10 = (undefined8 *)FUN_1800dff00(local_688,&local_178,&local_148);
              local_8c8 = (char *)*puVar10;
              uStack_8c0 = puVar10[1];
              FUN_1800f3730(local_b18,&local_8c8);
              puVar10 = (undefined8 *)FUN_1800dff00(local_938,local_b30,local_b00);
              local_8c8 = (char *)*puVar10;
              uStack_8c0 = puVar10[1];
              uVar7 = FUN_1800f4e90(&local_9a8,&local_8c8,1,2);
              uVar11 = FUN_18015b360(local_7e8,local_778);
              uVar11 = FUN_1800f43d0(param_1,uVar11);
              FUN_1800f49f0(uVar11,uVar7);
              _eh_vector_destructor_iterator_(local_b30,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
            }
            thunk_FUN_18015c010(local_778);
            puVar8 = puVar8 + 1;
          } while (puVar8 != puVar9);
          pcVar12 = local_9f8;
        }
        pcVar12 = pcVar12 + 8;
        local_9f8 = pcVar12;
      } while (pcVar12 != pcVar13);
      uVar23 = local_b00[0];
      uVar27 = local_ae8;
    }
    if (local_8b8[0] < 10) {
      cVar2 = FUN_1800f40c0(param_1,local_228);
      if (cVar2 == '\0') {
        bVar3 = 0;
        ppuVar28 = &PTR_s_he_grenade_1806ff1c8;
        do {
          puVar25 = *ppuVar28;
          puVar8 = (undefined8 *)FUN_18015b110(&local_af8,"trajectory");
          ppcVar22 = (char **)*puVar8;
          pcVar12 = (char *)puVar8[1];
          uVar6 = FUN_18015bae0(local_708,"trajectory - ");
          uVar6 = FUN_1800e5e50(local_778,uVar6,puVar25);
          local_8f8 = ppcVar22;
          pcStack_8f0 = pcVar12;
          puVar8 = (undefined8 *)FUN_18015ac20(uVar6,&local_8d8);
          local_908 = (char **)*puVar8;
          uStack_900 = puVar8[1];
          uVar6 = FUN_1800dfa30(&local_928,local_7a8,&local_908,&local_8f8);
          bVar4 = FUN_1800f40c0(param_1,uVar6);
          bVar3 = bVar3 | bVar4;
          thunk_FUN_18015c010(local_7a8);
          thunk_FUN_18015c010(local_778);
          thunk_FUN_18015c010(local_708);
          uVar23 = local_b00[0];
          ppuVar28 = ppuVar28 + 1;
        } while (ppuVar28 != (undefined **)&DAT_1806ff1f0);
        if (bVar3 != 0) {
          local_8d8 = &local_8f8;
          local_9f0 = (char *)CONCAT44(local_9f0._4_4_,1);
          uVar6 = FUN_1800e6200(&local_8f8,&local_9f0);
          uVar7 = FUN_18015b360(local_7a8,local_228);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          FUN_1800f49f0(uVar7,uVar6);
        }
      }
      if (local_8b8[0] < 10) {
        local_878 = "straight throw";
        local_870 = "glow";
        local_868 = "glow strength";
        local_860 = "held color";
        local_858 = "thrown color";
        local_850 = "will damage held color";
        local_848 = "will damage thrown color";
        FUN_1800dff00(&local_8f8,&local_878,&local_840);
        puVar8 = (undefined8 *)FUN_1800efea0(&local_8f8);
        puVar9 = (undefined8 *)FUN_1800efe90(&local_8f8);
        for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
          uVar6 = *puVar8;
          puVar10 = (undefined8 *)FUN_18015b110(&local_af8,uVar6);
          local_908 = (char **)*puVar10;
          uStack_900 = puVar10[1];
          puVar10 = (undefined8 *)FUN_18015b110(&local_9a8,"trajectory");
          local_8d8 = (char ***)*puVar10;
          pcStack_8d0 = (char *)puVar10[1];
          FUN_1800dfa30(&local_928,local_708,&local_8d8,&local_908);
          puVar10 = (undefined8 *)FUN_18015b110(local_998,uVar6);
          local_908 = (char **)*puVar10;
          uStack_900 = puVar10[1];
          puVar10 = (undefined8 *)FUN_18015b110(local_988,"trajectory - all");
          local_8d8 = (char ***)*puVar10;
          pcStack_8d0 = (char *)puVar10[1];
          FUN_1800dfa30(&local_928,local_778,&local_8d8,&local_908);
          cVar2 = FUN_1800f40c0(param_1,local_778);
          if ((cVar2 == '\0') && (cVar2 = FUN_1800f40c0(param_1,local_708), cVar2 != '\0')) {
            local_8d8 = &local_7f8;
            uVar6 = FUN_18015b360(local_7a8,local_708);
            uVar6 = FUN_1800f43d0(param_1,uVar6);
            uVar6 = FUN_1800f4a50(&local_7f8,uVar6);
            uVar7 = FUN_18015b360(&local_8b0,local_778);
            uVar7 = FUN_1800f43d0(param_1,uVar7);
            FUN_1800f49f0(uVar7,uVar6);
          }
          thunk_FUN_18015c010(local_778);
          thunk_FUN_18015c010(local_708);
        }
        if (local_8b8[0] < 10) {
          ppuVar28 = &PTR_s_he_grenade_1806ff1c8;
          do {
            puVar25 = *ppuVar28;
            uVar6 = FUN_18015bae0(&local_8b0,"trajectory - ");
            FUN_1800e5e50(local_7a8,uVar6,puVar25);
            thunk_FUN_18015c010(&local_8b0);
            local_9f8 = "projectile trajectory";
            local_9c8 = "trajectory";
            FUN_1800ef480(&local_878,&local_9f8,&local_9c8);
            local_9e8 = "straight throw";
            local_9f0 = "straight throw";
            FUN_1800ef480(&local_868,&local_9e8,&local_9f0);
            local_9d8 = &DAT_1806bd1f0;
            local_9e0 = &DAT_1806bd1f0;
            FUN_1800ef480(&local_858,&local_9d8,&local_9e0);
            local_9b8[0] = "glow strength";
            local_9c0 = (char **)0x1806bd1f8;
            FUN_1800ef480(&local_848,local_9b8,&local_9c0);
            local_948 = "held color";
            local_9d0 = "held color";
            FUN_1800ef480(&local_838,&local_948,&local_9d0);
            local_960 = "thrown color";
            local_950 = "thrown color";
            FUN_1800ef480(&local_828,&local_960,&local_950);
            local_968 = "will damage held color";
            local_978 = "will damage held color";
            FUN_1800ef480(&local_818,&local_968,&local_978);
            local_958 = "will damage thrown color";
            local_970 = "will damage thrown color";
            FUN_1800ef480(&local_808,&local_958,&local_970);
            lVar14 = FUN_1800ef4a0(&local_878);
            lVar15 = FUN_1800efec0(&local_878);
            for (; lVar14 != lVar15; lVar14 = lVar14 + 0x10) {
              puVar8 = (undefined8 *)FUN_1800ef4a0(lVar14);
              puVar9 = (undefined8 *)FUN_1800ef4b0(lVar14);
              puVar8 = (undefined8 *)FUN_18015b110(&local_af8,*puVar8);
              local_8f8 = (char **)*puVar8;
              pcStack_8f0 = (char *)puVar8[1];
              puVar8 = (undefined8 *)FUN_18015b110(&local_9a8,"trajectory");
              local_908 = (char **)*puVar8;
              uStack_900 = puVar8[1];
              FUN_1800dfa30(&local_928,local_708,&local_908,&local_8f8);
              puVar8 = (undefined8 *)FUN_18015b110(local_998,*puVar9);
              local_8f8 = (char **)*puVar8;
              pcStack_8f0 = (char *)puVar8[1];
              puVar8 = (undefined8 *)FUN_18015ac20(local_7a8,local_988);
              local_908 = (char **)*puVar8;
              uStack_900 = puVar8[1];
              FUN_1800dfa30(&local_928,local_778,&local_908,&local_8f8);
              cVar2 = FUN_1800f40c0(param_1,local_778);
              if ((cVar2 == '\0') && (cVar2 = FUN_1800f40c0(param_1,local_708), cVar2 != '\0')) {
                local_8d8 = &local_7f8;
                uVar6 = FUN_18015b360(local_7e8,local_708);
                uVar6 = FUN_1800f43d0(param_1,uVar6);
                uVar6 = FUN_1800f4a50(&local_7f8,uVar6);
                uVar7 = FUN_18015b360(local_ae0,local_778);
                uVar7 = FUN_1800f43d0(param_1,uVar7);
                FUN_1800f49f0(uVar7,uVar6);
              }
              thunk_FUN_18015c010(local_778);
              thunk_FUN_18015c010(local_708);
            }
            thunk_FUN_18015c010(local_7a8);
            ppuVar28 = ppuVar28 + 1;
          } while (ppuVar28 != (undefined **)&DAT_1806ff1f0);
          uVar23 = local_b00[0];
          uVar27 = local_ae8;
        }
      }
    }
  }
  plVar16 = (longlong *)FUN_18015b110(local_a08,"death appearance version");
  local_8f8 = (char **)*plVar16;
  pcStack_8f0 = (char *)plVar16[1];
  plVar16 = (longlong *)FUN_18015b110(local_a18,"impacts");
  local_908 = (char **)*plVar16;
  uStack_900 = plVar16[1];
  FUN_1800dfa30(&local_928,local_4a0,&local_908,&local_8f8);
  cVar2 = FUN_1800f40c0(param_1,local_4a0);
  if (cVar2 == '\0') {
    plVar16 = (longlong *)FUN_18015b110(local_a28,"death effect style");
    local_8f8 = (char **)*plVar16;
    pcStack_8f0 = (char *)plVar16[1];
    plVar16 = (longlong *)FUN_18015b110(local_608,"impacts");
    local_908 = (char **)*plVar16;
    uStack_900 = plVar16[1];
    FUN_1800dfa30(&local_928,local_778,&local_908,&local_8f8);
    if ((local_920[0] == 0) && (cVar2 = FUN_1800f40c0(param_1,local_778), cVar2 != '\0')) {
      uVar6 = FUN_18015b360(local_7a8,local_778);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      cVar2 = FUN_1800ef4c0(uVar6,0);
      if (cVar2 != '\0') {
        local_8d8 = &local_8f8;
        local_9f0 = (char *)CONCAT44(local_9f0._4_4_,4);
        uVar6 = FUN_1800e6200(&local_8f8,&local_9f0);
        uVar7 = FUN_18015b360(local_7a8,local_778);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        FUN_1800f49f0(uVar7,uVar6);
      }
    }
    iVar26 = 0;
    do {
      local_970 = "color";
      local_958 = "death effect color";
      FUN_1800ef480(local_208,&local_970,&local_958);
      local_978 = "end color";
      local_968 = "death effect end color";
      FUN_1800ef480(local_1f8,&local_978,&local_968);
      local_950 = "duration";
      local_960 = "death effect duration";
      FUN_1800ef480(local_1e8,&local_950,&local_960);
      local_9c8 = "size";
      local_948 = "death effect size";
      FUN_1800ef480(local_1d8,&local_9c8,&local_948);
      local_940 = "spread";
      local_9f8 = "death effect spread";
      FUN_1800ef480(local_1c8,&local_940,&local_9f8);
      local_688[0] = "speed";
      local_938[0] = "death effect speed";
      FUN_1800ef480(local_1b8,local_688,local_938);
      local_998[0] = "gravity";
      local_988[0] = "death effect gravity";
      FUN_1800ef480(local_1a8,local_998,local_988);
      local_7f8 = (char **)0x1806bdfd0;
      local_9a8 = (char **)0x1806be5c0;
      FUN_1800ef480(local_198,&local_7f8,&local_9a8);
      local_8d8 = (char ***)&DAT_1806bd1f0;
      local_8c8 = "death effect glow";
      FUN_1800ef480(local_188,&local_8d8,&local_8c8);
      puVar8 = (undefined8 *)FUN_1800ef4a0(local_208);
      puVar9 = (undefined8 *)FUN_1800efeb0(local_208);
      for (; puVar8 != puVar9; puVar8 = puVar8 + 2) {
        puVar10 = (undefined8 *)FUN_18015b110(local_a90,puVar8[1]);
        local_8f8 = (char **)*puVar10;
        pcStack_8f0 = (char *)puVar10[1];
        puVar10 = (undefined8 *)FUN_18015b110(local_6d8,"impacts");
        local_908 = (char **)*puVar10;
        uStack_900 = puVar10[1];
        FUN_1800dfa30(&local_928,local_7a8,&local_908,&local_8f8);
        plVar16 = (longlong *)FUN_18015b110(local_728,*puVar8);
        ppcVar22 = (char **)*plVar16;
        pcVar12 = (char *)plVar16[1];
        uVar6 = FUN_18015bea0(&local_178,iVar26);
        uVar6 = FUN_1800e7600(local_ac0,"death style ",uVar6);
        local_8f8 = ppcVar22;
        pcStack_8f0 = pcVar12;
        plVar16 = (longlong *)FUN_18015ac20(uVar6,&local_7c8);
        local_908 = (char **)*plVar16;
        uStack_900 = plVar16[1];
        FUN_1800dfa30(&local_928,local_708,&local_908,&local_8f8);
        thunk_FUN_18015c010(local_ac0);
        thunk_FUN_18015c010(&local_178);
        cVar2 = FUN_1800f40c0(param_1,local_708);
        if ((cVar2 == '\0') && (cVar2 = FUN_1800f40c0(param_1,local_7a8), cVar2 != '\0')) {
          local_9c0 = &local_af8;
          uVar6 = FUN_18015b360(&local_8f8,local_7a8);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          uVar6 = FUN_1800f4a50(&local_af8,uVar6);
          uVar7 = FUN_18015b360(local_b30,local_708);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          FUN_1800f49f0(uVar7,uVar6);
          plVar16 = (longlong *)FUN_18015b110(&local_748,"color");
          local_8f8 = (char **)*plVar16;
          pcStack_8f0 = (char *)plVar16[1];
          plVar16 = (longlong *)FUN_18015b110(local_ae0,*puVar8);
          local_908 = (char **)*plVar16;
          uStack_900 = plVar16[1];
          cVar2 = FUN_18015a610(&local_908,&local_8f8);
          if (cVar2 == '\0') {
LAB_1800d8983:
            bVar29 = false;
          }
          else {
            uVar6 = FUN_18015b360(local_b30,local_708);
            uVar6 = FUN_1800f43d0(param_1,uVar6);
            local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xad);
            FUN_1800e6250(&local_878,&local_9f0);
            local_b54 = uVar23 | 1;
            local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xc0);
            FUN_1800e6250(&local_860,&local_9e8);
            local_b54 = uVar23 | 3;
            local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xff);
            FUN_1800e6250(&local_848,&local_9e0);
            local_b54 = uVar23 | 7;
            local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
            FUN_1800e6250(&local_830,&local_9d8);
            local_b54 = uVar23 | 0x1f;
            plVar16 = (longlong *)FUN_1800dff00(local_7e8,&local_878,&local_818);
            local_8f8 = (char **)*plVar16;
            pcStack_8f0 = (char *)plVar16[1];
            uVar7 = FUN_1800f4e60(&local_b48,&local_8f8);
            uVar23 = uVar23 | 0x3f;
            local_b54 = uVar23;
            cVar2 = FUN_1800f3780(uVar6,uVar7);
            if (cVar2 == '\0') goto LAB_1800d8983;
            bVar29 = true;
          }
          if ((uVar23 & 0x20) != 0) {
            uVar23 = uVar23 & 0xffffffdf;
            local_b54 = uVar23;
            FUN_1800aab30(&local_b48);
          }
          if ((uVar23 & 0x10) != 0) {
            uVar23 = uVar23 & 0xffffffef;
            local_b54 = uVar23;
            _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
          }
          if (bVar29) {
            local_908 = &local_b68;
            local_9c0 = (char **)CONCAT44(local_9c0._4_4_,0xee);
            FUN_1800e6250(&local_878,&local_9c0);
            local_9b8[0] = (char *)CONCAT44(local_9b8[0]._4_4_,0xee);
            FUN_1800e6250(&local_860,local_9b8);
            local_9d0 = (char *)CONCAT44(local_9d0._4_4_,0xee);
            FUN_1800e6250(&local_848,&local_9d0);
            local_b00[0] = 0xff;
            FUN_1800e6250(&local_830,local_b00);
            plVar16 = (longlong *)FUN_1800dff00(&local_8b0,&local_878,&local_818);
            local_8f8 = (char **)*plVar16;
            pcStack_8f0 = (char *)plVar16[1];
            uVar6 = FUN_1800f4e60(&local_b68,&local_8f8);
            uVar7 = FUN_18015b360(local_b30,local_708);
            uVar7 = FUN_1800f43d0(param_1,uVar7);
            FUN_1800f49f0(uVar7,uVar6);
            _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
          }
        }
        thunk_FUN_18015c010(local_708);
        thunk_FUN_18015c010(local_7a8);
      }
      iVar26 = iVar26 + 1;
    } while (iVar26 < 6);
    thunk_FUN_18015c010(local_778);
    uVar27 = local_ae8;
  }
  cVar2 = FUN_1800f40c0(param_1,local_4a0);
  if (cVar2 == '\0') {
LAB_1800d8b81:
    puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"death effect style");
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"impacts");
    local_b48 = (char *)*puVar8;
    uStack_b40 = puVar8[1];
    FUN_1800dfa30(&local_928,local_708,&local_b48,&local_b68);
    cVar2 = FUN_1800f40c0(param_1,local_708);
    if (cVar2 == '\0') {
LAB_1800d8c8c:
      bVar29 = false;
    }
    else {
      uVar6 = FUN_18015b360(local_b30,local_708);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      cVar2 = FUN_1800ef4c0(uVar6,3);
      if (cVar2 == '\0') goto LAB_1800d8c8c;
      puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"shockwave");
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      puVar8 = (undefined8 *)FUN_18015b110(&local_748,"impacts");
      local_b48 = (char *)*puVar8;
      uStack_b40 = puVar8[1];
      uVar6 = FUN_1800dfa30(&local_928,&local_178,&local_b48,&local_b68);
      uVar23 = uVar23 | 0x40;
      local_b54 = uVar23;
      cVar2 = FUN_1800f40c0(param_1,uVar6);
      if (cVar2 != '\0') goto LAB_1800d8c8c;
      bVar29 = true;
    }
    if ((uVar23 & 0x40) != 0) {
      uVar23 = uVar23 & 0xffffffbf;
      local_b54 = uVar23;
      thunk_FUN_18015c010(&local_178);
    }
    if (bVar29) {
      local_8f8 = &local_b48;
      FUN_1800e60e0(local_7a8,&DAT_1806bbee0);
      local_927[0] = '\x01';
      FUN_1800e7560(local_790,local_927);
      puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,local_7a8,local_778);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      FUN_1800f3730(&local_178,&local_b68);
      FUN_1800e60e0(local_ac0,&DAT_1806bbee4);
      local_8d8 = (char ***)0x0;
      FUN_1800eb230(local_aa8,&local_8d8);
      puVar8 = (undefined8 *)FUN_1800dff00(&local_748,local_ac0,local_a90);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      FUN_1800f3730(&local_160,&local_b68);
      puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,&local_178,&local_148);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
      puVar8 = (undefined8 *)FUN_18015b110(local_728,"shockwave");
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      puVar8 = (undefined8 *)FUN_18015b110(local_6d8,"impacts");
      local_af8 = (char *)*puVar8;
      uStack_af0 = puVar8[1];
      uVar7 = FUN_1800dfa30(&local_928,local_b30,&local_af8,&local_b68);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
      _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_7a8,0x18,2,FUN_1800aab30);
      local_878 = "color";
      local_870 = "end color";
      local_868 = "duration";
      local_860 = "size";
      local_858 = "spread";
      local_850 = "speed";
      local_848 = "glow";
      local_840 = "visibility";
      FUN_1800dff00(&local_8c8,&local_878,&local_838);
      puVar8 = (undefined8 *)FUN_1800efea0(&local_8c8);
      puVar9 = (undefined8 *)FUN_1800efe90(&local_8c8);
      for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        uVar6 = *puVar8;
        puVar10 = (undefined8 *)FUN_18015b110(local_ae0,uVar6);
        local_b68 = (char *)*puVar10;
        uStack_b60 = puVar10[1];
        puVar10 = (undefined8 *)FUN_18015b110(&local_748,"death style 3");
        local_b48 = (char *)*puVar10;
        uStack_b40 = puVar10[1];
        FUN_1800dfa30(&local_928,local_778,&local_b48,&local_b68);
        puVar10 = (undefined8 *)FUN_18015b110(&local_7c8,uVar6);
        local_b68 = (char *)*puVar10;
        uStack_b60 = puVar10[1];
        puVar10 = (undefined8 *)FUN_18015b110(local_728,"death shockwave");
        local_b48 = (char *)*puVar10;
        uStack_b40 = puVar10[1];
        FUN_1800dfa30(&local_928,local_7a8,&local_b48,&local_b68);
        cVar2 = FUN_1800f40c0(param_1,local_778);
        if ((cVar2 != '\0') && (cVar2 = FUN_1800f40c0(param_1,local_7a8), cVar2 == '\0')) {
          local_8f8 = &local_af8;
          uVar6 = FUN_18015b360(local_b30,local_778);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          uVar6 = FUN_1800f4a50(&local_af8,uVar6);
          uVar7 = FUN_18015b360(&local_178,local_7a8);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          FUN_1800f49f0(uVar7,uVar6);
        }
        thunk_FUN_18015c010(local_7a8);
        thunk_FUN_18015c010(local_778);
      }
    }
    thunk_FUN_18015c010(local_708);
  }
  else {
    uVar6 = FUN_18015b360(local_b30,local_4a0);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800ef4c0(uVar6,2);
    if (cVar2 == '\0') goto LAB_1800d8b81;
  }
  if ((local_920[0] == 0) || (cVar2 = FUN_1800f40c0(param_1,local_4a0), cVar2 != '\0')) {
    local_8f8 = &local_b68;
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,2);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f0);
    uVar7 = FUN_18015b360(local_b30,local_4a0);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  local_178 = "hit effect color";
  local_170 = "death effect color";
  local_168 = "bullet impact edge color";
  local_160 = "bullet impact spark color";
  local_158 = "bullet tracer color";
  FUN_1800dff00(&local_8d8,&local_178,local_150);
  puVar8 = (undefined8 *)FUN_1800efea0(&local_8d8);
  puVar9 = (undefined8 *)FUN_1800efe90(&local_8d8);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    puVar10 = (undefined8 *)FUN_18015b110(&local_8b0,*puVar8);
    local_b68 = (char *)*puVar10;
    uStack_b60 = puVar10[1];
    puVar10 = (undefined8 *)FUN_18015b110(local_7e8,"impacts");
    local_b48 = (char *)*puVar10;
    uStack_b40 = puVar10[1];
    FUN_1800dfa30(&local_928,local_778,&local_b48,&local_b68);
    cVar2 = FUN_1800f40c0(param_1,local_778);
    if (cVar2 == '\0') {
LAB_1800d92ef:
      bVar29 = false;
    }
    else {
      uVar6 = FUN_18015b360(local_b30,local_778);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xad);
      FUN_1800e6250(&local_878,&local_9f0);
      local_b54 = uVar23 | 0x80;
      local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xc0);
      FUN_1800e6250(&local_860,&local_9e8);
      local_b54 = uVar23 | 0x180;
      local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xff);
      FUN_1800e6250(&local_848,&local_9e0);
      local_b54 = uVar23 | 0x380;
      local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
      FUN_1800e6250(&local_830,&local_9d8);
      local_b54 = uVar23 | 0xf80;
      puVar10 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_818);
      local_b68 = (char *)*puVar10;
      uStack_b60 = puVar10[1];
      uVar7 = FUN_1800f4e60(&local_af8,&local_b68);
      uVar23 = uVar23 | 0x1f80;
      local_b54 = uVar23;
      cVar2 = FUN_1800f3780(uVar6,uVar7);
      if (cVar2 == '\0') goto LAB_1800d92ef;
      bVar29 = true;
    }
    if ((uVar23 >> 0xc & 1) != 0) {
      uVar23 = uVar23 & 0xffffefff;
      local_b54 = uVar23;
      FUN_1800aab30(&local_af8);
    }
    if ((uVar23 >> 0xb & 1) != 0) {
      uVar23 = uVar23 & 0xfffff7ff;
      local_b54 = uVar23;
      _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
    }
    if (bVar29) {
      local_8f8 = &local_8c8;
      local_9c0 = (char **)CONCAT44(local_9c0._4_4_,0xee);
      FUN_1800e6250(&local_878,&local_9c0);
      local_9b8[0] = (char *)CONCAT44(local_9b8[0]._4_4_,0xee);
      FUN_1800e6250(&local_860,local_9b8);
      local_9d0 = (char *)CONCAT44(local_9d0._4_4_,0xee);
      FUN_1800e6250(&local_848,&local_9d0);
      local_b00[0] = 0xff;
      FUN_1800e6250(&local_830,local_b00);
      puVar10 = (undefined8 *)FUN_1800dff00(&local_748,&local_878,&local_818);
      local_b68 = (char *)*puVar10;
      uStack_b60 = puVar10[1];
      uVar6 = FUN_1800f4e60(&local_8c8,&local_b68);
      uVar7 = FUN_18015b360(local_b30,local_778);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
      _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
    }
    thunk_FUN_18015c010(local_778);
  }
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"bullet impact fill color");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"impacts");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_3c8,&local_b48,&local_b68);
  cVar2 = FUN_1800f40c0(param_1,local_3c8);
  if (cVar2 == '\0') {
LAB_1800d95ca:
    bVar29 = false;
  }
  else {
    uVar6 = FUN_18015b360(local_b30,local_3c8);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xad);
    FUN_1800e6250(&local_878,&local_9f0);
    local_b54 = uVar23 | 0x2000;
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xc0);
    FUN_1800e6250(&local_860,&local_9e8);
    local_b54 = uVar23 | 0x6000;
    local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xff);
    FUN_1800e6250(&local_848,&local_9e0);
    local_b54 = uVar23 | 0xe000;
    local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0x55);
    FUN_1800e6250(&local_830,&local_9d8);
    local_b54 = uVar23 | 0x3e000;
    puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_818);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar7 = FUN_1800f4e60(&local_b48,&local_b68);
    uVar23 = uVar23 | 0x7e000;
    local_b54 = uVar23;
    cVar2 = FUN_1800f3780(uVar6,uVar7);
    if (cVar2 == '\0') goto LAB_1800d95ca;
    bVar29 = true;
  }
  if ((uVar23 >> 0x12 & 1) != 0) {
    uVar23 = uVar23 & 0xfffbffff;
    local_b54 = uVar23;
    FUN_1800aab30(&local_b48);
  }
  if ((uVar23 >> 0x11 & 1) != 0) {
    uVar23 = uVar23 & 0xfffdffff;
    local_b54 = uVar23;
    _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
  }
  if (bVar29) {
    local_8f8 = &local_b48;
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xee);
    FUN_1800e6250(&local_878,&local_9f0);
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xee);
    FUN_1800e6250(&local_860,&local_9e8);
    local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xee);
    FUN_1800e6250(&local_848,&local_9e0);
    local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0x55);
    FUN_1800e6250(&local_830,&local_9d8);
    puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_818);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar6 = FUN_1800f4e60(&local_b48,&local_b68);
    uVar7 = FUN_18015b360(local_b30,local_3c8);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
    _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
  }
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"scoreboard weapons color");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,&DAT_1806beb18);
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_3e8,&local_b48,&local_b68);
  cVar2 = FUN_1800f40c0(param_1,local_3e8);
  if (cVar2 == '\0') {
LAB_1800d988e:
    bVar29 = false;
  }
  else {
    uVar6 = FUN_18015b360(local_b30,local_3e8);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xff);
    FUN_1800e6250(&local_878,&local_9f0);
    local_b54 = uVar23 | 0x80000;
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xff);
    FUN_1800e6250(&local_860,&local_9e8);
    local_b54 = uVar23 | 0x180000;
    local_9e0 = (undefined *)((ulonglong)local_9e0 & 0xffffffff00000000);
    FUN_1800e6250(&local_848,&local_9e0);
    local_b54 = uVar23 | 0x380000;
    local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
    FUN_1800e6250(&local_830,&local_9d8);
    local_b54 = uVar23 | 0xf80000;
    puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_878,&local_818);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar7 = FUN_1800f4e60(&local_b48,&local_b68);
    uVar23 = uVar23 | 0x1f80000;
    local_b54 = uVar23;
    cVar2 = FUN_1800f3780(uVar6,uVar7);
    if (cVar2 == '\0') goto LAB_1800d988e;
    bVar29 = true;
  }
  if ((uVar23 >> 0x18 & 1) != 0) {
    uVar23 = uVar23 & 0xfeffffff;
    local_b54 = uVar23;
    FUN_1800aab30(&local_b48);
  }
  if ((uVar23 >> 0x17 & 1) != 0) {
    uVar23 = uVar23 & 0xff7fffff;
    local_b54 = uVar23;
    _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
  }
  if (bVar29) {
    local_8f8 = &local_b48;
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xee);
    FUN_1800e6250(&local_878,&local_9f0);
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xee);
    FUN_1800e6250(&local_860,&local_9e8);
    local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xee);
    FUN_1800e6250(&local_848,&local_9e0);
    local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
    FUN_1800e6250(&local_830,&local_9d8);
    puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_878,&local_818);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar6 = FUN_1800f4e60(&local_b48,&local_b68);
    uVar7 = FUN_18015b360(local_b30,local_3e8);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
    _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
  }
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"miss color");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,&DAT_1806bea1c);
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_348,&local_b48,&local_b68);
  cVar2 = FUN_1800f40c0(param_1,local_348);
  if (cVar2 == '\0') {
LAB_1800d9b52:
    bVar29 = false;
  }
  else {
    uVar6 = FUN_18015b360(local_b30,local_348);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xee);
    FUN_1800e6250(&local_878,&local_9f0);
    local_b54 = uVar23 | 0x2000000;
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0xee);
    FUN_1800e6250(&local_860,&local_9e8);
    local_b54 = uVar23 | 0x6000000;
    local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0xee);
    FUN_1800e6250(&local_848,&local_9e0);
    local_b54 = uVar23 | 0xe000000;
    local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
    FUN_1800e6250(&local_830,&local_9d8);
    local_b54 = uVar23 | 0x3e000000;
    puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_818);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar7 = FUN_1800f4e60(&local_b48,&local_b68);
    uVar23 = uVar23 | 0x7e000000;
    local_b54 = uVar23;
    cVar2 = FUN_1800f3780(uVar6,uVar7);
    if (cVar2 == '\0') goto LAB_1800d9b52;
    bVar29 = true;
  }
  if ((uVar23 >> 0x1e & 1) != 0) {
    uVar23 = uVar23 & 0xbfffffff;
    local_b54 = uVar23;
    FUN_1800aab30(&local_b48);
  }
  if ((uVar23 >> 0x1d & 1) != 0) {
    uVar23 = uVar23 & 0xdfffffff;
    local_b54 = uVar23;
    _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
  }
  if (bVar29) {
    local_8f8 = &local_b48;
    local_9f0 = (char *)CONCAT44(local_9f0._4_4_,0xeb);
    FUN_1800e6250(&local_878,&local_9f0);
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,0x6e);
    FUN_1800e6250(&local_860,&local_9e8);
    local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0x6e);
    FUN_1800e6250(&local_848,&local_9e0);
    local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,0xff);
    FUN_1800e6250(&local_830,&local_9d8);
    puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_818);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar6 = FUN_1800f4e60(&local_b48,&local_b68);
    uVar7 = FUN_18015b360(local_b30,local_348);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
    _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
  }
  FUN_1800dff00(local_638,&local_928,param_1);
  local_b88 = "invisibility when scoped";
  FUN_1800dfca0(local_638,"chams local","hide body","chams local");
  local_b88 = "visualization color";
  FUN_1800dfca0(local_638,"movement - edgebug","chat log color","movement - edgebug");
  local_7c8 = "edgebug chat log";
  local_7c0 = "pixel surf chat log";
  local_7b8 = "texture bug chat log";
  FUN_1800dff00(&local_8f8,&local_7c8,local_7b0);
  puVar8 = (undefined8 *)FUN_1800efea0(&local_8f8);
  puVar9 = (undefined8 *)FUN_1800efe90(&local_8f8);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    puVar10 = (undefined8 *)FUN_18015b110(local_ae0,*puVar8);
    local_b68 = (char *)*puVar10;
    uStack_b60 = puVar10[1];
    puVar10 = (undefined8 *)FUN_18015b110(&local_748,"movement");
    local_b48 = (char *)*puVar10;
    uStack_b40 = puVar10[1];
    uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
    FUN_1800f42a0(param_1,uVar6);
    thunk_FUN_18015c010(local_b30);
  }
  local_8f8 = (char **)0x1806bf6d8;
  pcStack_8f0 = "movement - texture bug";
  FUN_1800dff00(&local_908,&local_8f8,local_8e8);
  puVar8 = (undefined8 *)FUN_1800efea0(&local_908);
  puVar9 = (undefined8 *)FUN_1800efe90(&local_908);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    uVar6 = *puVar8;
    puVar10 = (undefined8 *)FUN_18015b110(local_ae0,"chat log color");
    local_b68 = (char *)*puVar10;
    uStack_b60 = puVar10[1];
    puVar10 = (undefined8 *)FUN_18015b110(&local_748,uVar6);
    local_b48 = (char *)*puVar10;
    uStack_b40 = puVar10[1];
    uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
    FUN_1800f42a0(param_1,uVar6);
    thunk_FUN_18015c010(local_b30);
  }
  local_b88 = "invisibility when scoped";
  FUN_1800dfca0(local_638,"chams local","lower opacity","chams local");
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"only when scoped");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"chams local");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f42a0(param_1,uVar6);
  thunk_FUN_18015c010(local_b30);
  puVar8 = (undefined8 *)FUN_18015b110(&local_7c8,"legs only when scoped");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"removals");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f42a0(param_1,uVar6);
  thunk_FUN_18015c010(local_b30);
  puVar8 = (undefined8 *)FUN_18015b110(local_728,"opacity");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"chams local");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f42a0(param_1,uVar6);
  thunk_FUN_18015c010(local_b30);
  local_b88 = "replace game crosshair";
  FUN_1800dfca0(local_638,"removals","remove crosshair","crosshair");
  puVar8 = (undefined8 *)FUN_18015b110(local_6d8,"background blur");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"scope overlay");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_368,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"color blur");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"scope overlay");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_248,&local_b48,&local_b68);
  cVar2 = FUN_1800f40c0(param_1,local_248);
  if ((cVar2 == '\0') && (cVar2 = FUN_1800f40c0(param_1,local_368), cVar2 != '\0')) {
    local_8f8 = &local_b68;
    uVar6 = FUN_18015b360(local_b30,local_368);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    uVar6 = FUN_1800f4a50(&local_b68,uVar6);
    uVar7 = FUN_18015b360(&local_178,local_248);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  FUN_1800f42a0(param_1,local_368);
  FUN_1800dfc90(local_890,&local_928,param_1,local_920);
  FUN_1800ac940(local_560,0x20);
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"shape");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"crosshair");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f4160(param_1,local_560,uVar6);
  thunk_FUN_18015c010(local_b30);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_560,uVar6);
  dVar35 = 0.0;
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_560);
    cVar2 = FUN_1800f46d0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_560);
      dVar32 = (double)FUN_1800ea420(uVar6);
      if (dVar35 <= dVar32) {
        uVar6 = FUN_1800f34a0(local_560);
        dVar32 = (double)FUN_1800ea420(uVar6);
        if (dVar32 <= 2.0) goto LAB_1800da2e6;
      }
    }
    local_8f8 = &local_b68;
    local_9f0 = (char *)((ulonglong)local_9f0 & 0xffffffff00000000);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f0);
    uVar7 = FUN_1800f3560(local_560);
    FUN_1800f49f0(uVar7,uVar6);
  }
LAB_1800da2e6:
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"adaptive gap");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"scope overlay");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_268,&local_b48,&local_b68);
  FUN_1800ac940(local_428,0x20);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"scope overlay");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"scope overlay");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f4160(param_1,local_428,uVar6);
  thunk_FUN_18015c010(local_b30);
  if ((local_920[0] == 0) && (cVar2 = FUN_1800f40c0(param_1,local_268), cVar2 == '\0')) {
    uVar6 = FUN_1800f3ed0(param_1,local_b30);
    cVar2 = FUN_1800e6c90(local_428,uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_428);
      cVar2 = FUN_1800ecbf0(uVar6);
      if (cVar2 != '\0') {
        FUN_1800ac940(local_778,0x20);
        uVar6 = FUN_1800f34a0(local_428);
        FUN_1800e6b50(uVar6,local_778,&DAT_1806bbee0);
        uVar6 = FUN_1800f34a0(local_428);
        uVar6 = FUN_1800f3ed0(uVar6,local_b30);
        cVar2 = FUN_1800e6c90(local_778,uVar6);
        if (cVar2 != '\0') {
          uVar6 = FUN_1800f34a0(local_778);
          cVar2 = FUN_1800e09a0(uVar6);
          if (cVar2 != '\0') {
            uVar6 = FUN_1800f34a0(local_778);
            cVar2 = FUN_1800e6720(uVar6);
            if (cVar2 != '\0') {
              local_8f8 = &local_b48;
              FUN_1800e60e0(local_7a8,&DAT_1806bbee0);
              local_927[0] = '\x01';
              FUN_1800e7560(local_790,local_927);
              puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,local_7a8,local_778);
              local_b68 = (char *)*puVar8;
              uStack_b60 = puVar8[1];
              FUN_1800f3730(&local_178,&local_b68);
              FUN_1800e60e0(local_ac0,&DAT_1806bbee4);
              local_8d8 = (char ***)0x0;
              FUN_1800eb230(local_aa8,&local_8d8);
              puVar8 = (undefined8 *)FUN_1800dff00(local_7e8,local_ac0,local_a90);
              local_b68 = (char *)*puVar8;
              uStack_b60 = puVar8[1];
              FUN_1800f3730(&local_160,&local_b68);
              puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,&local_178,&local_148);
              local_b68 = (char *)*puVar8;
              uStack_b60 = puVar8[1];
              uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
              uVar7 = FUN_18015b360(local_b30,local_268);
              uVar7 = FUN_1800f43d0(param_1,uVar7);
              FUN_1800f49f0(uVar7,uVar6);
              _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
              _eh_vector_destructor_iterator_(local_7a8,0x18,2,FUN_1800aab30);
            }
          }
        }
      }
    }
  }
  local_b80 = 0x41a00000;
  uVar30 = 0;
  local_b88 = (char *)((ulonglong)local_b88 & 0xffffffff00000000);
  FUN_1800dff10(local_890,"crosshair",&DAT_1806bee68,0x40800000);
  auVar44 = ZEXT464(0x3fc00000);
  local_b80 = 0x3fc00000;
  local_b88._0_4_ = 0x3f400000;
  FUN_1800dff10(local_890,&DAT_1806beb18,"scoreboard weapons scale",0x3f800000);
  local_b80 = 0x41000000;
  auVar42 = ZEXT464(0x40000000);
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,&DAT_1806beb18,"scoreboard weapons spacing",auVar42._0_8_);
  auVar40 = ZEXT464(0x42c80000);
  local_b80 = 0x42c80000;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,&DAT_1806beb18,"scoreboard weapons inactive opacity",0x420c0000);
  uVar37 = 0x40400000;
  local_b80 = 0x40400000;
  uVar43 = 0x3e4ccccd;
  local_b88._0_4_ = 0x3e4ccccd;
  FUN_1800dff10(local_890,"impacts","death effect duration",0x3f99999a);
  local_b80 = 0x40c00000;
  local_b88._0_4_ = 0x3f000000;
  FUN_1800dff10(local_890,"impacts","death effect size",auVar42._0_8_);
  local_b88._0_4_ = 0x3e800000;
  local_b80 = uVar37;
  FUN_1800dff10(local_890,"impacts","death effect spread",0x3f800000);
  local_b80 = 0x43960000;
  uVar38 = 0x41c80000;
  local_b88._0_4_ = 0x41c80000;
  FUN_1800dff10(local_890,"impacts","death effect speed",auVar40._0_8_);
  uVar37 = 0x44480000;
  local_b80 = 0x44480000;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"impacts","death effect gravity",0x43480000);
  local_b80 = auVar42._0_4_;
  auVar45 = ZEXT464(0x3dcccccd);
  local_b88._0_4_ = 0x3dcccccd;
  FUN_1800dff10(local_890,"impacts","spark duration",0x3f266666);
  local_b80 = 0x40400000;
  local_b88._0_4_ = 0x3f000000;
  FUN_1800dff10(local_890,"impacts","spark size",0x3f800000);
  auVar40 = ZEXT464(0x43c80000);
  local_b80 = 0x43c80000;
  auVar41 = ZEXT464(0x43160000);
  local_b88._0_4_ = uVar38;
  FUN_1800dff10(local_890,"impacts","spark speed",auVar41._0_8_);
  uVar30 = 0;
  local_b88 = (char *)((ulonglong)local_b88._4_4_ << 0x20);
  local_b80 = uVar37;
  FUN_1800dff10(local_890,"impacts","spark gravity",auVar40._0_8_);
  local_b80 = 0x40a00000;
  auVar40 = ZEXT464(0x3f000000);
  local_b88._0_4_ = auVar45._0_4_;
  FUN_1800dff10(local_890,"impacts","bullet tracer duration",auVar40._0_8_);
  local_b80 = 0x40c00000;
  local_b88._0_4_ = auVar40._0_4_;
  FUN_1800dff10(local_890,"impacts","bullet tracer width",0x3fe00000);
  local_b80 = 0x3d4ccccd;
  local_b88._0_4_ = 0x3c23d70a;
  FUN_1800dff10(local_890,"impacts","bullet tracer travel time",0x3ca3d70a);
  local_b80 = 0x3f800000;
  local_b88._0_4_ = 0x3d4ccccd;
  FUN_1800dff10(local_890,"impacts","bullet tracer tail",0x3eb33333);
  local_b80 = 0x40800000;
  local_b88._0_4_ = 0x3e800000;
  FUN_1800dff10(local_890,"impacts","bullet tracer fade curve",0x3f800000);
  local_b80 = auVar44._0_4_;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"impacts","bullet tracer glow strength",0x3f333333);
  local_b80 = 0x40400000;
  local_b88._0_4_ = auVar40._0_4_;
  FUN_1800dff10(local_890,"impacts","bullet tracer glow radius",0x3fa00000);
  local_b80 = auVar44._0_4_;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"impacts","bullet tracer bloom strength",auVar40._0_8_);
  local_b80 = 0x41000000;
  local_b88._0_4_ = 0x3f800000;
  FUN_1800dff10(local_890,"impacts","bullet tracer bloom radius",0x40900000);
  FUN_1800dff00(local_6b8,param_1,&local_928);
  local_b88._0_4_ = 5;
  FUN_1800e0270(local_6b8,"death effect style",4,0);
  local_b88._0_4_ = 3;
  FUN_1800e0270(local_6b8,"static death animation",0,0);
  local_b88._0_4_ = 0x60;
  FUN_1800e0270(local_6b8,"death effect count",0x28,8);
  local_b88._0_4_ = 0x60;
  FUN_1800e0270(local_6b8,"spark count",0x24,8);
  local_b88._0_4_ = 2;
  FUN_1800e0270(local_6b8,"bullet tracer animation",0,0);
  local_b80 = 0x40c00000;
  local_b88._0_4_ = uVar43;
  FUN_1800dff10(local_890,"death shockwave","duration",0x3fe66666);
  local_b80 = 0x40c00000;
  local_b88._0_4_ = auVar40._0_4_;
  FUN_1800dff10(local_890,"death shockwave",&DAT_1806bd190,auVar42._0_8_);
  local_b80 = 0x43960000;
  local_b88._0_4_ = 0x41c80000;
  FUN_1800dff10(local_890,"death shockwave","speed",0x42c80000);
  local_b80 = 0x40400000;
  local_b88._0_4_ = 0x3e800000;
  FUN_1800dff10(local_890,"death shockwave","spread",0x3f800000);
  local_b80 = 0x40400000;
  local_b88._0_4_ = uVar43;
  FUN_1800dff10(local_890,"death thunder","duration",0x3f333333);
  local_b80 = 0x45098000;
  local_b88._0_4_ = auVar41._0_4_;
  FUN_1800dff10(local_890,"death thunder","height",0x44160000);
  local_b80 = 0x40c00000;
  local_b88._0_4_ = auVar40._0_4_;
  FUN_1800dff10(local_890,"death thunder","width",auVar44._0_8_);
  local_b80 = 0x42a00000;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"death thunder","jaggedness",0x41c00000);
  auVar42 = ZEXT464(0x40800000);
  local_b80 = 0x40800000;
  local_b88._0_4_ = uVar43;
  FUN_1800dff10(local_890,"death thunder","blur radius",0x3f99999a);
  local_b80 = 0x41000000;
  local_b88._0_4_ = uVar43;
  FUN_1800dff10(local_890,"death thunder","bloom radius",auVar42._0_8_);
  auVar40 = ZEXT464(0x3f800000);
  local_b80 = 0x3f800000;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"death thunder","bloom strength",0x3f266666);
  auVar41 = ZEXT464(0x42c80000);
  local_b80 = 0x42c80000;
  local_b88 = (char *)CONCAT44(local_b88._4_4_,uVar30);
  FUN_1800dff10(local_890,"death thunder","volume",0x42200000);
  local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,3);
  local_9e8 = (char *)((ulonglong)local_9e8 & 0xffffffff00000000);
  local_9f0 = (char *)CONCAT44(local_9f0._4_4_,8);
  local_b88 = (char *)&local_9f0;
  FUN_1800ef530(&local_878,"branches",&local_9e0,&local_9e8);
  local_9b8[0] = (char *)CONCAT44(local_9b8[0]._4_4_,2);
  local_9c0 = (char **)CONCAT44(local_9c0._4_4_,1);
  local_9d8 = (undefined *)CONCAT44(local_9d8._4_4_,3);
  local_b88 = (char *)&local_9d8;
  FUN_1800ef560(&local_860,"strikes",local_9b8,&local_9c0);
  local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
  local_b00[0] = 0;
  local_9d0 = (char *)CONCAT44(local_9d0._4_4_,1);
  local_b88 = (char *)&local_9d0;
  FUN_1800ef590(&local_848,"visibility",&local_9f8,local_b00);
  FUN_1800dff00(&local_908,&local_878,&local_830);
  lVar14 = FUN_1800efea0(&local_908);
  lVar15 = FUN_1800efe90(&local_908);
  if (lVar14 != lVar15) {
    do {
      puVar8 = (undefined8 *)FUN_1800ef5c0(lVar14);
      local_8d8 = (char ***)FUN_1800ef4b0(lVar14);
      piVar17 = (int *)FUN_1800ef5d0(lVar14);
      piVar18 = (int *)FUN_1800ef4a0(lVar14);
      FUN_1800ac940(&local_7c8,0x20);
      puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,*puVar8);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"death thunder");
      local_b48 = (char *)*puVar8;
      uStack_b40 = puVar8[1];
      uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
      FUN_1800f4160(param_1,&local_7c8,uVar6);
      thunk_FUN_18015c010(local_b30);
      uVar6 = FUN_1800f3ed0(param_1,local_b30);
      cVar2 = FUN_1800e6c90(&local_7c8,uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_1800f34a0(&local_7c8);
        cVar2 = FUN_1800f46d0(uVar6);
        if (cVar2 != '\0') {
          auVar44 = ZEXT864((ulonglong)(double)*piVar17);
          uVar6 = FUN_1800f34a0(&local_7c8);
          dVar32 = (double)FUN_1800ea420(uVar6);
          if (auVar44._0_8_ <= dVar32) {
            auVar44 = ZEXT864((ulonglong)(double)*piVar18);
            uVar6 = FUN_1800f34a0(&local_7c8);
            dVar32 = (double)FUN_1800ea420(uVar6);
            if (dVar32 <= auVar44._0_8_) goto LAB_1800db0f9;
          }
        }
        local_8f8 = &local_af8;
        uVar6 = FUN_1800e6200(&local_af8,local_8d8);
        uVar7 = FUN_1800f3560(&local_7c8);
        FUN_1800f49f0(uVar7,uVar6);
      }
LAB_1800db0f9:
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != lVar15);
    uVar27 = local_ae8;
  }
  lVar14 = 0x28;
  FUN_1800ac940(local_540,0x20);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"rings");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"death shockwave");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f4160(param_1,local_540,uVar6);
  thunk_FUN_18015c010(local_b30);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_540,uVar6);
  dVar32 = 1.0;
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_540);
    cVar2 = FUN_1800f46d0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_540);
      dVar33 = (double)FUN_1800ea420(uVar6);
      if (dVar32 <= dVar33) {
        uVar6 = FUN_1800f34a0(local_540);
        dVar33 = (double)FUN_1800ea420(uVar6);
        if (dVar33 <= 4.0) goto LAB_1800db254;
      }
    }
    local_8f8 = &local_b68;
    local_9f8 = (char *)CONCAT44(local_9f8._4_4_,3);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
    uVar7 = FUN_1800f3560(local_540);
    FUN_1800f49f0(uVar7,uVar6);
  }
LAB_1800db254:
  FUN_1800ac940(local_520,0x20);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"visibility");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"death shockwave");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f4160(param_1,local_520,uVar6);
  thunk_FUN_18015c010(local_b30);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_520,uVar6);
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_520);
    cVar2 = FUN_1800f46d0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_520);
      dVar33 = (double)FUN_1800ea420(uVar6);
      if (dVar35 <= dVar33) {
        uVar6 = FUN_1800f34a0(local_520);
        dVar33 = (double)FUN_1800ea420(uVar6);
        if (dVar33 <= dVar32) goto LAB_1800db390;
      }
    }
    local_8f8 = &local_b68;
    local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
    uVar7 = FUN_1800f3560(local_520);
    FUN_1800f49f0(uVar7,uVar6);
  }
LAB_1800db390:
  local_b88._0_4_ = 1;
  FUN_1800e0270(local_6b8,"impact visibility",0,0);
  local_b88 = (char *)CONCAT44(local_b88._4_4_,1);
  FUN_1800e0270(local_6b8,"tracer visibility",0,0);
  iVar26 = -1;
  do {
    if (iVar26 < 0) {
      uVar6 = FUN_18015bae0(local_ac0,"static death materials");
      uVar23 = uVar23 | 0x80000000;
      local_b54 = uVar23;
    }
    else {
      uVar6 = FUN_18015bea0(&local_178,iVar26);
      local_b34 = uVar27 | 1;
      uVar6 = FUN_1800e7600(local_b30,"death style ",uVar6);
      uVar27 = uVar27 | 3;
      local_b34 = uVar27;
    }
    FUN_18015b330(local_7a8,uVar6);
    if ((uVar27 & 2) != 0) {
      uVar27 = uVar27 & 0xfffffffd;
      local_b34 = uVar27;
      thunk_FUN_18015c010(local_b30);
    }
    if ((uVar27 & 1) != 0) {
      uVar27 = uVar27 & 0xfffffffe;
      local_b34 = uVar27;
      thunk_FUN_18015c010(&local_178);
    }
    if ((int)uVar23 < 0) {
      uVar23 = uVar23 & 0x7fffffff;
      local_b54 = uVar23;
      thunk_FUN_18015c010(local_ac0);
    }
    FUN_1800ac940(&local_7c8,0x20);
    puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"visibility");
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    puVar8 = (undefined8 *)FUN_18015ac20(local_7a8,local_7e8);
    local_b48 = (char *)*puVar8;
    uStack_b40 = puVar8[1];
    uVar6 = FUN_1800dfa30(&local_928,local_778,&local_b48,&local_b68);
    FUN_1800f4160(param_1,&local_7c8,uVar6);
    thunk_FUN_18015c010(local_778);
    uVar6 = FUN_1800f3ed0(param_1,local_778);
    cVar2 = FUN_1800e6c90(&local_7c8,uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(&local_7c8);
      cVar2 = FUN_1800f46d0(uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_1800f34a0(&local_7c8);
        dVar33 = (double)FUN_1800ea420(uVar6);
        if (dVar35 <= dVar33) {
          uVar6 = FUN_1800f34a0(&local_7c8);
          dVar33 = (double)FUN_1800ea420(uVar6);
          if (dVar33 <= dVar32) goto LAB_1800db5c1;
        }
      }
      local_8f8 = &local_af8;
      local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
      uVar6 = FUN_1800e6200(&local_af8,&local_9f8);
      uVar7 = FUN_1800f3560(&local_7c8);
      FUN_1800f49f0(uVar7,uVar6);
    }
LAB_1800db5c1:
    thunk_FUN_18015c010(local_7a8);
    iVar26 = iVar26 + 1;
  } while (iVar26 < 6);
  local_7c8 = "primary layer material";
  local_7c0 = "secondary layer material";
  local_7b8 = "overlay layer material";
  FUN_1800dff00(&local_908,&local_7c8,local_7b0);
  puVar8 = (undefined8 *)FUN_1800efea0(&local_908);
  puVar9 = (undefined8 *)FUN_1800efe90(&local_908);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    uVar6 = *puVar8;
    FUN_1800ac940(local_728,0x20);
    puVar10 = (undefined8 *)FUN_18015b110(&local_8b0,uVar6);
    local_b68 = (char *)*puVar10;
    uStack_b60 = puVar10[1];
    puVar10 = (undefined8 *)FUN_18015b110(local_7e8,"static death materials");
    local_b48 = (char *)*puVar10;
    uStack_b40 = puVar10[1];
    uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
    FUN_1800f4160(param_1,local_728,uVar6);
    thunk_FUN_18015c010(local_b30);
    uVar6 = FUN_1800f3ed0(param_1,local_b30);
    cVar2 = FUN_1800e6c90(local_728,uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_728);
      cVar2 = FUN_1800f46d0(uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_1800f34a0(local_728);
        dVar33 = (double)FUN_1800ea420(uVar6);
        if (dVar35 <= dVar33) {
          uVar6 = FUN_1800f34a0(local_728);
          dVar33 = (double)FUN_1800ea420(uVar6);
          if (dVar33 < dVar34) goto LAB_1800db783;
        }
      }
      local_8f8 = &local_af8;
      local_9f8 = (char *)CONCAT44(local_9f8._4_4_,2);
      uVar6 = FUN_1800e6200(&local_af8,&local_9f8);
      uVar7 = FUN_1800f3560(local_728);
      FUN_1800f49f0(uVar7,uVar6);
    }
LAB_1800db783:
  }
  uVar38 = 0x43960000;
  local_b80 = 0x43960000;
  uVar37 = 0x41c80000;
  local_b88._4_4_ = (uint)((ulonglong)local_b88 >> 0x20);
  local_b88._0_4_ = 0x41c80000;
  FUN_1800dff10(local_890,"camera","first zoom percent",auVar41._0_8_);
  local_b88 = (char *)CONCAT44(local_b88._4_4_,uVar37);
  local_b80 = uVar38;
  FUN_1800dff10(local_890,"camera","second zoom percent",auVar41._0_8_);
  FUN_1800ac940(local_500,0x20);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"scoped zoom mode");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"camera");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f4160(param_1,local_500,uVar6);
  thunk_FUN_18015c010(local_b30);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_500,uVar6);
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_500);
    cVar2 = FUN_1800f46d0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_500);
      dVar34 = (double)FUN_1800ea420(uVar6);
      if (dVar35 <= dVar34) {
        uVar6 = FUN_1800f34a0(local_500);
        dVar35 = (double)FUN_1800ea420(uVar6);
        if (dVar35 <= dVar32) goto LAB_1800db928;
      }
    }
    local_8f8 = &local_b68;
    local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
    uVar7 = FUN_1800f3560(local_500);
    FUN_1800f49f0(uVar7,uVar6);
  }
LAB_1800db928:
  local_b80 = 0x40c00000;
  uVar37 = 0x3f000000;
  local_b88._0_4_ = 0x3f000000;
  FUN_1800dff10(local_890,"crosshair","thickness",auVar40._0_8_);
  local_b80 = 0x41200000;
  local_b88._0_4_ = uVar37;
  FUN_1800dff10(local_890,"pen crosshair",&DAT_1806bd190,0x40400000);
  local_b80 = auVar42._0_4_;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"pen crosshair","outline",auVar40._0_8_);
  FUN_1800dfc90(local_480,&local_928,param_1,local_920);
  FUN_1800e0520(local_480,"layout",0,3);
  FUN_1800e0520(local_480,"line style",0,2);
  FUN_1800e0520(local_480,"color mode",0,1);
  FUN_1800e0520(local_480,"blur region",1);
  local_b80 = 0x42000000;
  uVar37 = 0x40000000;
  local_b88._0_4_ = 0x40000000;
  FUN_1800dff10(local_890,"scope overlay","dash length",0x41000000);
  uVar38 = 0x3d4ccccd;
  local_b88._0_4_ = 0x3d4ccccd;
  local_b80 = uVar37;
  FUN_1800dff10(local_890,"scope overlay","gradient speed",0x3e800000);
  local_b80 = auVar40._0_4_;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"scope overlay","blur amount",0x3eb33333);
  local_b80 = auVar40._0_4_;
  local_b88._0_4_ = uVar30;
  FUN_1800dff10(local_890,"crosshair","blur amount",0x3eb33333);
  local_b80 = auVar40._0_4_;
  local_b88._0_4_ = auVar45._0_4_;
  FUN_1800dff10(local_890,"crosshair","glow strength",0x3f333333);
  local_b80 = 0x3ee66666;
  local_b88 = (char *)CONCAT44(local_b88._4_4_,uVar38);
  FUN_1800dff10(local_890,"scope overlay","clear center",0x3e6147ae);
  if (local_920[0] == 0) {
    local_8d8 = (char ***)0x1806bef28;
    pcStack_8d0 = "color blur";
    FUN_1800dff00(&local_8c8,&local_8d8,&local_8c8);
    plVar16 = (longlong *)FUN_1800efea0(&local_8c8);
    plVar19 = (longlong *)FUN_1800efe90(&local_8c8);
    for (; plVar16 != plVar19; plVar16 = plVar16 + 1) {
      local_7f8 = (char **)*plVar16;
      local_7f0 = -1;
      do {
        local_7f0 = local_7f0 + 1;
      } while (*(char *)((longlong)local_7f8 + local_7f0) != '\0');
      local_9a8 = (char **)0x1806beea0;
      local_9a0 = 0xd;
      FUN_1800dfa30(&local_928,local_7a8,&local_9a8,&local_7f8);
      cVar2 = FUN_1800f40c0(param_1,local_7a8);
      if (cVar2 == '\0') {
        local_8f8 = &local_b48;
        FUN_1800e60e0(&local_878,&DAT_1806bbee0);
        local_927[0] = '\0';
        FUN_1800e7560(&local_860,local_927);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_878,&local_848);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(&local_178,&local_b68);
        FUN_1800e60e0(local_ac0,&DAT_1806bbee4);
        FUN_1800e60e0(local_608,&DAT_1806bbed8);
        local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
        FUN_1800e6250(local_5f0,&local_9f8);
        puVar8 = (undefined8 *)FUN_1800dff00(local_7e8,local_608,&local_5d8);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(local_778,&local_b68);
        FUN_1800e60e0(local_708,&DAT_1806bbedc);
        local_9f0 = (char *)((ulonglong)local_9f0 & 0xffffffff00000000);
        FUN_1800e6250(local_6f0,&local_9f0);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,local_708,local_6d8);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(local_760,&local_b68);
        puVar8 = (undefined8 *)FUN_1800dff00(local_728,local_778,&local_748);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(local_aa8,&local_b68);
        puVar8 = (undefined8 *)FUN_1800dff00(local_6d8,local_ac0,local_a90);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(&local_160,&local_b68);
        puVar8 = (undefined8 *)FUN_1800dff00(local_a90,&local_178,&local_148);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
        uVar7 = FUN_18015b360(local_b30,local_7a8);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        FUN_1800f49f0(uVar7,uVar6);
        _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_778,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_708,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_608,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(&local_878,0x18,2,FUN_1800aab30);
      }
      FUN_18015c010(local_7a8);
    }
  }
  local_138[0] = "size";
  local_138[1] = "height";
  local_138[2] = "vertical offset";
  local_138[3] = "style colors";
  local_138[4] = "color";
  local_138[5] = "secondary color";
  ppcVar22 = local_138;
  do {
    puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,*ppcVar22);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    puVar8 = (undefined8 *)FUN_18015b110(local_7e8,&DAT_1806bef70);
    local_b48 = (char *)*puVar8;
    uStack_b40 = puVar8[1];
    uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
    FUN_1800f42a0(param_1,uVar6);
    thunk_FUN_18015c010(local_b30);
    ppcVar22 = ppcVar22 + 1;
  } while (ppcVar22 != local_108);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"override name");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"name changer");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_3a8,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,&DAT_1806bd758);
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"name changer");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_580,&local_b48,&local_b68);
  if ((local_8b8[0] < 9) &&
     ((cVar2 = FUN_1800f40c0(param_1,local_3a8), cVar2 != '\0' ||
      (cVar2 = FUN_1800f40c0(param_1,local_580), cVar2 != '\0')))) {
    local_927[0] = '\0';
    FUN_1800e7560(&local_7c8,local_927);
    puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_7c8,local_7b0);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
    FUN_1800ef5e0(param_1,&local_8d8,local_3a8,uVar6);
    FUN_1800aab30(&local_b48);
    _eh_vector_destructor_iterator_(&local_7c8,0x18,1,FUN_1800aab30);
    cVar2 = FUN_1800ecbf0(&local_8d8);
    if (cVar2 == '\0') {
      uVar6 = FUN_1800f4a50(&local_af8,&local_8d8);
      uVar27 = uVar27 | 0x40;
    }
    else {
      local_918[0] = 0;
      FUN_1800e7560(local_728,local_918);
      local_b34 = uVar27 | 0xc;
      puVar8 = (undefined8 *)FUN_1800dff00(local_7e8,local_728,local_710);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar6 = FUN_1800f4e90(&local_7f8,&local_b68,1,2);
      local_b34 = uVar27 | 0x1c;
      uVar6 = FUN_1800ea540(&local_8d8,&local_908,&DAT_1806bbee0,uVar6);
      uVar27 = uVar27 | 0x3c;
    }
    local_b34 = uVar27;
    FUN_1800f4a50(&local_8c8,uVar6);
    if ((uVar27 & 0x40) != 0) {
      uVar27 = uVar27 & 0xffffffbf;
      local_b34 = uVar27;
      FUN_1800aab30(&local_af8);
    }
    if ((uVar27 & 0x20) != 0) {
      uVar27 = uVar27 & 0xffffffdf;
      local_b34 = uVar27;
      FUN_1800aab30(&local_908);
    }
    if ((uVar27 & 0x10) != 0) {
      uVar27 = uVar27 & 0xffffffef;
      local_b34 = uVar27;
      FUN_1800aab30(&local_7f8);
    }
    if ((uVar27 & 8) != 0) {
      uVar27 = uVar27 & 0xfffffff7;
      local_b34 = uVar27;
      _eh_vector_destructor_iterator_(local_728,0x18,1,FUN_1800aab30);
    }
    cVar2 = FUN_1800e09a0(&local_8c8);
    if ((cVar2 == '\0') || (cVar2 = FUN_1800e6720(&local_8c8), cVar2 == '\0')) {
      local_8f8 = &local_b68;
      uVar6 = FUN_1800ef6e0(&local_b68,&PTR_180700558);
      uVar7 = FUN_18015b360(local_b30,local_580);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
    }
    FUN_1800aab30(&local_8c8);
    FUN_1800aab30(&local_8d8);
  }
  FUN_1800f42a0(param_1,local_3a8);
  if ((local_920[0] == 0) && (cVar2 = FUN_1800f40c0(param_1,local_580), cVar2 == '\0')) {
LAB_1800dc3d8:
    local_8f8 = &local_b68;
    uVar6 = FUN_1800ef6e0(&local_b68,&PTR_180700558);
    uVar7 = FUN_18015b360(local_b30,local_580);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  else {
    cVar2 = FUN_1800f40c0(param_1,local_580);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_580);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      cVar2 = FUN_1800f46b0(uVar6);
      if (cVar2 == '\0') goto LAB_1800dc3d8;
    }
  }
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,&DAT_1806bec48);
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,&DAT_1806bec48);
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_288,&local_b48,&local_b68);
  if ((local_920[0] == 0) && (cVar2 = FUN_1800f40c0(param_1,local_288), cVar2 == '\0')) {
    local_8f8 = &local_b48;
    FUN_1800e60e0(local_708,&DAT_1806bbee0);
    local_918[0] = 0;
    FUN_1800e7560(local_6f0,local_918);
    puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,local_708,local_6d8);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    FUN_1800f3730(&local_878,&local_b68);
    FUN_1800e60e0(&local_178,&DAT_1806bbee4);
    FUN_1800e60e0(local_778,&DAT_1806bbed8);
    local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
    FUN_1800e6250(local_760,&local_9f8);
    puVar8 = (undefined8 *)FUN_1800dff00(&local_748,local_778,&local_748);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    FUN_1800f3730(local_ac0,&local_b68);
    FUN_1800e60e0(local_7a8,&DAT_1806bbedc);
    local_9f0 = (char *)((ulonglong)local_9f0 & 0xffffffff00000000);
    FUN_1800e6250(local_790,&local_9f0);
    puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,local_7a8,local_778);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    FUN_1800f3730(local_aa8,&local_b68);
    puVar8 = (undefined8 *)FUN_1800dff00(local_728,local_ac0,local_a90);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    FUN_1800f3730(&local_160,&local_b68);
    puVar8 = (undefined8 *)FUN_1800dff00(local_6d8,&local_178,&local_148);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    FUN_1800f3730(&local_860,&local_b68);
    puVar8 = (undefined8 *)FUN_1800dff00(local_a90,&local_878,&local_848);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
    uVar7 = FUN_18015b360(local_b30,local_288);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
    _eh_vector_destructor_iterator_(&local_878,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_7a8,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_778,0x18,2,FUN_1800aab30);
    _eh_vector_destructor_iterator_(local_708,0x18,2,FUN_1800aab30);
  }
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"clantag");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"name changer");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_388,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"clan tag");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"clan tag");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_2a8,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(&local_7c8,"animation");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"clan tag");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_628,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(local_728,"refresh rate seconds");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"clan tag");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_5a0,&local_b48,&local_b68);
  bVar3 = FUN_1800f40c0(param_1,local_388);
  if ((bVar3 != 0) && (cVar2 = FUN_1800f40c0(param_1,local_2a8), cVar2 == '\0')) {
    local_8f8 = &local_b68;
    uVar6 = FUN_18015b360(local_b30,local_388);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    uVar6 = FUN_1800f4a50(&local_b68,uVar6);
    uVar7 = FUN_18015b360(&local_178,local_2a8);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  FUN_1800f42a0(param_1,local_388);
  cVar2 = FUN_1800f40c0(param_1,local_628);
  if ((cVar2 == '\0') && ((local_920[0] == 0 || (bVar3 != 0)))) {
    local_8f8 = &local_b68;
    local_9f8 = (char *)CONCAT44(local_9f8._4_4_,(uint)bVar3);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
    uVar7 = FUN_18015b360(local_b30,local_628);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  cVar2 = FUN_1800f40c0(param_1,local_5a0);
  if ((cVar2 == '\0') && ((local_920[0] == 0 || (bVar3 != 0)))) {
    local_8f8 = &local_b68;
    auVar36 = vpcmpeqd_avx(ZEXT416((uint)bVar3),SUB6416(ZEXT464(0),0));
    auVar36 = vblendvps_avx(SUB6416(ZEXT464(0x3e000000),0),auVar45._0_16_,auVar36);
    local_9f8 = (char *)CONCAT44(local_9f8._4_4_,auVar36._0_4_);
    uVar6 = FUN_1800e7670(&local_b68,&local_9f8);
    uVar7 = FUN_18015b360(local_b30,local_5a0);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  cVar2 = FUN_1800f40c0(param_1,local_628);
  if (cVar2 != '\0') {
    uVar6 = FUN_18015b360(local_b30,local_628);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46d0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_628);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      puVar24 = (undefined1 *)FUN_1800e6ad0(uVar6,local_b78,0);
      cVar2 = FUN_18015af00(*puVar24,0);
      if (cVar2 == '\0') {
        uVar6 = FUN_18015b360(local_b30,local_628);
        uVar6 = FUN_1800f43d0(param_1,uVar6);
        puVar24 = (undefined1 *)FUN_1800e6ad0(uVar6,local_b78,1);
        cVar2 = FUN_18015abb0(*puVar24,0);
        if (cVar2 == '\0') goto LAB_1800dcb52;
      }
    }
    local_8f8 = &local_b68;
    local_9f8 = (char *)((ulonglong)local_9f8 & 0xffffffff00000000);
    uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
    uVar7 = FUN_18015b360(local_b30,local_628);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
LAB_1800dcb52:
  cVar2 = FUN_1800f40c0(param_1,local_5a0);
  if (cVar2 != '\0') {
    uVar6 = FUN_18015b360(local_b30,local_5a0);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46f0(uVar6);
    if (cVar2 == '\0') {
      uVar30 = auVar45._0_4_;
    }
    else {
      uVar6 = FUN_18015b360(&local_178,local_5a0);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      uVar30 = FUN_1800e6880(uVar6);
    }
    local_9e8 = (char *)CONCAT44(local_9e8._4_4_,uVar30);
    local_8f8 = &local_b68;
    cVar2 = FUN_1800e7540();
    uVar30 = auVar45._0_4_;
    if (cVar2 != '\0') {
      local_9f8 = (char *)CONCAT44(local_9f8._4_4_,0x40a00000);
      local_9f0 = (char *)CONCAT44(local_9f0._4_4_,uVar30);
      puVar20 = (undefined4 *)FUN_1800e75c0(&local_9e8,&local_9f0,&local_9f8);
      uVar30 = *puVar20;
    }
    local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,uVar30);
    uVar6 = FUN_1800e7670(&local_b68,&local_9e0);
    uVar7 = FUN_18015b360(local_b30,local_5a0);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
  }
  local_878 = "mini jump";
  local_870 = "air duck";
  local_868 = "planning budget ms";
  local_860 = "diagnostics";
  local_858 = "pixel surf record";
  local_850 = "pixel surf observe only";
  local_848 = "pixel surf on-screen log";
  local_840 = "velocity debug";
  local_838 = "debug: fixed-yaw movement A/B";
  local_830 = "debug: compensate strafe yaw";
  FUN_1800dff00(&local_8f8,&local_878,&local_828);
  puVar8 = (undefined8 *)FUN_1800efea0(&local_8f8);
  puVar9 = (undefined8 *)FUN_1800efe90(&local_8f8);
  for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
    puVar10 = (undefined8 *)FUN_18015b110(local_7e8,*puVar8);
    local_b68 = (char *)*puVar10;
    uStack_b60 = puVar10[1];
    puVar10 = (undefined8 *)FUN_18015b110(local_ae0,"movement");
    local_b48 = (char *)*puVar10;
    uStack_b40 = puVar10[1];
    uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
    FUN_1800f42a0(param_1,uVar6);
    thunk_FUN_18015c010(local_b30);
  }
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"release time");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"movement - mini jump");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f42a0(param_1,uVar6);
  thunk_FUN_18015c010(local_b30);
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"reset peak on land");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"movement - velocity debug");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  uVar6 = FUN_1800dfa30(&local_928,local_b30,&local_b48,&local_b68);
  FUN_1800f42a0(param_1,uVar6);
  thunk_FUN_18015c010(local_b30);
  puVar8 = (undefined8 *)FUN_18015b110(&local_7c8,"no landing inaccuracy");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"movement");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_2c8,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"jumpbug");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"movement");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_658,&local_b48,&local_b68);
  FUN_1800ac940(local_7e8,0x20);
  FUN_1800f4160(param_1,local_7e8,local_2c8);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_7e8,uVar6);
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_7e8);
    cVar2 = FUN_1800ecbf0(uVar6);
    if (cVar2 != '\0') {
      FUN_1800ac940(&local_748,0x20);
      uVar6 = FUN_1800f34a0(local_7e8);
      FUN_1800e6b50(uVar6,&local_748,&DAT_1806bbee4);
      uVar6 = FUN_1800f34a0(local_7e8);
      uVar6 = FUN_1800f3ed0(uVar6,local_b30);
      cVar2 = FUN_1800e6c90(&local_748,uVar6);
      if (cVar2 == '\0') {
LAB_1800dd063:
        bVar29 = false;
      }
      else {
        uVar6 = FUN_1800f34a0(&local_748);
        cVar2 = FUN_1800ecbf0(uVar6);
        if (cVar2 == '\0') goto LAB_1800dd063;
        uVar6 = FUN_1800f34a0(&local_748);
        cVar2 = FUN_1800e6540(uVar6,&DAT_1806bbed8);
        if (cVar2 == '\0') goto LAB_1800dd063;
        uVar6 = FUN_1800f3560(&local_748);
        uVar6 = FUN_1800e65e0(uVar6,&DAT_1806bbed8);
        cVar2 = FUN_1800f46d0(uVar6);
        if (cVar2 == '\0') goto LAB_1800dd063;
        uVar6 = FUN_1800f3560(&local_748);
        uVar6 = FUN_1800e65e0(uVar6,&DAT_1806bbed8);
        iVar26 = FUN_1800e62a0(uVar6);
        if (iVar26 == 0) goto LAB_1800dd063;
        bVar29 = true;
      }
      uVar6 = FUN_1800f3560(local_7e8);
      cVar2 = FUN_1800e0850(local_918,uVar6);
      if ((cVar2 != '\0') || (bVar29)) {
        cVar2 = FUN_1800f40c0(param_1,local_658);
        if (cVar2 != '\0') {
          uVar6 = FUN_18015b360(local_b30,local_658);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          cVar2 = FUN_1800e0850(local_918,uVar6);
          if (cVar2 != '\0') goto LAB_1800dd11e;
        }
        local_8f8 = &local_b68;
        uVar6 = FUN_1800f3560(local_7e8);
        uVar6 = FUN_1800f4a50(&local_b68,uVar6);
        uVar7 = FUN_18015b360(local_b30,local_658);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        FUN_1800f49f0(uVar7,uVar6);
      }
    }
  }
LAB_1800dd11e:
  FUN_1800f42a0(param_1,local_2c8);
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"options");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"movement - jumpbug");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_678,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"slide walk");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"movement");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_2e8,&local_b48,&local_b68);
  FUN_1800ac940(local_728,0x20);
  FUN_1800f4160(param_1,local_728,local_2e8);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_728,uVar6);
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_728);
    cVar2 = FUN_1800ecbf0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f34a0(local_728);
      local_918[0] = 0;
      FUN_1800e7560(&local_7c8,local_918);
      puVar8 = (undefined8 *)FUN_1800dff00(local_7e8,&local_7c8,local_7b0);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar7 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
      FUN_1800ea540(uVar6,&local_8d8,&DAT_1806bbee0,uVar7);
      FUN_1800aab30(&local_b48);
      _eh_vector_destructor_iterator_(&local_7c8,0x18,1,FUN_1800aab30);
      FUN_1800ac940(local_6d8,0x20);
      uVar6 = FUN_1800f34a0(local_728);
      FUN_1800e6b50(uVar6,local_6d8,&DAT_1806bbee4);
      uVar6 = FUN_1800f34a0(local_728);
      uVar6 = FUN_1800f3ed0(uVar6,local_b30);
      cVar2 = FUN_1800e6c90(local_6d8,uVar6);
      if (cVar2 == '\0') {
LAB_1800dd3d4:
        bVar29 = false;
      }
      else {
        uVar6 = FUN_1800f34a0(local_6d8);
        cVar2 = FUN_1800ecbf0(uVar6);
        if (cVar2 == '\0') goto LAB_1800dd3d4;
        uVar6 = FUN_1800f34a0(local_6d8);
        cVar2 = FUN_1800e6540(uVar6,&DAT_1806bbed8);
        if (cVar2 == '\0') goto LAB_1800dd3d4;
        uVar6 = FUN_1800f3560(local_6d8);
        uVar6 = FUN_1800e65e0(uVar6,&DAT_1806bbed8);
        cVar2 = FUN_1800f46d0(uVar6);
        if (cVar2 == '\0') goto LAB_1800dd3d4;
        uVar6 = FUN_1800f3560(local_6d8);
        uVar6 = FUN_1800e65e0(uVar6,&DAT_1806bbed8);
        iVar26 = FUN_1800e62a0(uVar6);
        if (iVar26 == 0) goto LAB_1800dd3d4;
        bVar29 = true;
      }
      cVar2 = FUN_1800e09a0(&local_8d8);
      if (((cVar2 != '\0') && (cVar2 = FUN_1800e6720(&local_8d8), cVar2 != '\0')) || (bVar29)) {
        cVar2 = FUN_1800f40c0(param_1,local_678);
        if (cVar2 == '\0') {
LAB_1800dd4cb:
          local_8f8 = &local_af8;
          local_927[0] = '\x01';
          FUN_1800e7560(&local_878,local_927);
          local_b58 = 1;
          FUN_1800e7560(&local_860,&local_b58);
          local_b57 = 1;
          FUN_1800e7560(&local_848,&local_b57);
          local_b56[0] = 1;
          FUN_1800e7560(&local_830,local_b56);
          puVar8 = (undefined8 *)FUN_1800dff00(&local_748,&local_878,&local_818);
          local_b68 = (char *)*puVar8;
          uStack_b60 = puVar8[1];
          uVar6 = FUN_1800f4e90(&local_af8,&local_b68,1,2);
          uVar7 = FUN_18015b360(local_b30,local_678);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          FUN_1800f49f0(uVar7,uVar6);
          _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
        }
        else {
          uVar6 = FUN_18015b360(local_b30,local_678);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          cVar2 = FUN_1800f46c0(uVar6);
          if (cVar2 == '\0') goto LAB_1800dd4cb;
          uVar6 = FUN_18015b360(local_b30,local_678);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          lVar15 = FUN_1800f3d40(uVar6);
          if (lVar15 != 4) goto LAB_1800dd4cb;
          local_8f8 = &local_b68;
          local_927[0] = '\x01';
          uVar6 = FUN_1800e6480(&local_b68,local_927);
          uVar7 = FUN_18015b360(local_b30,local_678);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          uVar7 = FUN_1800f4600(uVar7,1);
          FUN_1800f49f0(uVar7,uVar6);
        }
        cVar2 = FUN_1800f40c0(param_1,local_658);
        if (cVar2 == '\0') {
          local_8f8 = &local_b68;
          uVar6 = FUN_1800f3560(local_728);
          uVar6 = FUN_1800f4a50(&local_b68,uVar6);
          uVar7 = FUN_18015b360(local_b30,local_658);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
        }
        else {
          uVar6 = FUN_18015b360(local_b30,local_658);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          cVar2 = FUN_1800ecbf0(uVar6);
          if (cVar2 == '\0') goto LAB_1800dd697;
          local_8f8 = &local_b68;
          local_b56[0] = 1;
          uVar6 = FUN_1800e6480(&local_b68,local_b56);
          uVar7 = FUN_18015b360(local_b30,local_658);
          uVar7 = FUN_1800f43d0(param_1,uVar7);
          uVar7 = FUN_1800e65e0(uVar7,&DAT_1806bbee0);
        }
        FUN_1800f49f0(uVar7,uVar6);
      }
LAB_1800dd697:
      FUN_1800aab30(&local_8d8);
    }
  }
  FUN_1800f42a0(param_1,local_2e8);
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"ramp boost");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"movement");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_308,&local_b48,&local_b68);
  FUN_1800ac940(local_5c0,0x20);
  FUN_1800f4160(param_1,local_5c0,local_308);
  uVar6 = FUN_1800f3ed0(param_1,local_b30);
  cVar2 = FUN_1800e6c90(local_5c0,uVar6);
  if (cVar2 != '\0') {
    uVar6 = FUN_1800f34a0(local_5c0);
    cVar2 = FUN_1800ecbf0(uVar6);
    if ((cVar2 != '\0') && (cVar2 = FUN_1800f40c0(param_1,local_678), cVar2 == '\0')) {
      uVar6 = FUN_1800f34a0(local_5c0);
      local_b56[0] = 0;
      FUN_1800e7560(local_728,local_b56);
      puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,local_728,local_710);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar7 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
      FUN_1800ea540(uVar6,&local_8c8,&DAT_1806bbee0,uVar7);
      FUN_1800aab30(&local_b48);
      _eh_vector_destructor_iterator_(local_728,0x18,1,FUN_1800aab30);
      cVar2 = FUN_1800e09a0(&local_8c8);
      if ((cVar2 == '\0') || (cVar2 = FUN_1800e6720(&local_8c8), cVar2 == '\0')) {
        bVar29 = false;
      }
      else {
        bVar29 = true;
      }
      FUN_1800ac940(local_608,0x20);
      uVar6 = FUN_1800f34a0(local_5c0);
      FUN_1800e6b50(uVar6,local_608,&DAT_1806bbee4);
      uVar6 = FUN_1800f34a0(local_5c0);
      uVar6 = FUN_1800f3ed0(uVar6,local_b30);
      cVar2 = FUN_1800e6c90(local_608,uVar6);
      if (cVar2 == '\0') {
LAB_1800dd940:
        bVar1 = false;
      }
      else {
        uVar6 = FUN_1800f34a0(local_608);
        cVar2 = FUN_1800ecbf0(uVar6);
        if (cVar2 == '\0') goto LAB_1800dd940;
        uVar6 = FUN_1800f34a0(local_608);
        cVar2 = FUN_1800e6540(uVar6,&DAT_1806bbed8);
        if (cVar2 == '\0') goto LAB_1800dd940;
        uVar6 = FUN_1800f3560(local_608);
        uVar6 = FUN_1800e65e0(uVar6,&DAT_1806bbed8);
        cVar2 = FUN_1800f46d0(uVar6);
        if (cVar2 == '\0') goto LAB_1800dd940;
        uVar6 = FUN_1800f3560(local_608);
        uVar6 = FUN_1800e65e0(uVar6,&DAT_1806bbed8);
        iVar26 = FUN_1800e62a0(uVar6);
        if (iVar26 == 0) goto LAB_1800dd940;
        bVar1 = true;
      }
      local_8f8 = &local_af8;
      local_b57 = 1;
      FUN_1800e7560(&local_878,&local_b57);
      if ((bVar29) || (bVar1)) {
        local_b58 = 1;
      }
      else {
        local_b58 = 0;
      }
      FUN_1800e7560(&local_860,&local_b58);
      local_918[0] = 1;
      FUN_1800e7560(&local_848,local_918);
      local_927[0] = '\x01';
      FUN_1800e7560(&local_830,local_927);
      puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_818);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar6 = FUN_1800f4e90(&local_af8,&local_b68,1,2);
      uVar7 = FUN_18015b360(local_b30,local_678);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
      _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
      FUN_1800ac940(local_778,0x20);
      FUN_1800f4160(param_1,local_778,local_658);
      uVar6 = FUN_1800f3ed0(param_1,&local_178);
      cVar2 = FUN_1800e6ca0(local_778,uVar6);
      if (cVar2 == '\0') {
        uVar6 = FUN_1800f34a0(local_778);
        cVar2 = FUN_1800ecbf0(uVar6);
        if (cVar2 == '\0') goto LAB_1800ddb38;
        uVar6 = FUN_1800f34a0(local_778);
        local_b57 = 0;
        FUN_1800e7560(local_a90,&local_b57);
        local_b34 = uVar27 | 0x180;
        puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,local_a90,local_a78);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        uVar7 = FUN_1800f4e90(&local_7f8,&local_b68,1,2);
        local_b34 = uVar27 | 0x380;
        uVar6 = FUN_1800ea540(uVar6,&local_908,&DAT_1806bbee0,uVar7);
        uVar27 = uVar27 | 0x780;
      }
      else {
LAB_1800ddb38:
        local_b58 = 0;
        FUN_1800e7560(local_6d8,&local_b58);
        local_b34 = uVar27 | 0x1800;
        puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,local_6d8,local_6c0);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        uVar6 = FUN_1800f4e90(&local_af8,&local_b68,1,2);
        uVar27 = uVar27 | 0x3800;
      }
      FUN_1800f4a30(&local_8d8,uVar6);
      if ((uVar27 >> 0xd & 1) != 0) {
        uVar27 = uVar27 & 0xffffdfff;
        FUN_1800aab30(&local_af8);
      }
      if ((uVar27 >> 0xc & 1) != 0) {
        uVar27 = uVar27 & 0xffffefff;
        local_b34 = uVar27;
        _eh_vector_destructor_iterator_(local_6d8,0x18,1,FUN_1800aab30);
      }
      if ((uVar27 >> 10 & 1) != 0) {
        uVar27 = uVar27 & 0xfffffbff;
        FUN_1800aab30(&local_908);
      }
      if ((uVar27 >> 9 & 1) != 0) {
        uVar27 = uVar27 & 0xfffffdff;
        FUN_1800aab30(&local_7f8);
      }
      if ((uVar27 >> 8 & 1) != 0) {
        _eh_vector_destructor_iterator_(local_a90,0x18,1,FUN_1800aab30);
      }
      if (((bVar29) || (bVar1)) &&
         ((cVar2 = FUN_1800e09a0(&local_8d8), cVar2 == '\0' ||
          (cVar2 = FUN_1800e6720(&local_8d8), cVar2 == '\0')))) {
        local_8f8 = &local_b68;
        uVar6 = FUN_1800f3560(local_5c0);
        uVar6 = FUN_1800f4a50(&local_b68,uVar6);
        uVar7 = FUN_18015b360(local_b30,local_658);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        FUN_1800f49f0(uVar7,uVar6);
      }
      FUN_1800aab30(&local_8d8);
      FUN_1800aab30(&local_8c8);
    }
  }
  FUN_1800f42a0(param_1,local_308);
  cVar2 = FUN_1800f40c0(param_1,local_678);
  if (cVar2 != '\0') {
    uVar6 = FUN_18015b360(local_b30,local_678);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46c0(uVar6);
    if (((cVar2 == '\0') || (lVar15 = FUN_1800f3d40(uVar6), lVar15 != 4)) ||
       (cVar2 = FUN_1800ef730(uVar6,local_b78[0],0), cVar2 == '\0')) {
      local_b56[0] = 1;
      FUN_1800e7560(&local_878,local_b56);
      local_b57 = 0;
      FUN_1800e7560(&local_860,&local_b57);
      local_b58 = 1;
      FUN_1800e7560(&local_848,&local_b58);
      local_918[0] = 1;
      FUN_1800e7560(&local_830,local_918);
      puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_878,&local_818);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar7 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
      FUN_1800f49f0(uVar6,uVar7);
      _eh_vector_destructor_iterator_(&local_878,0x18,4,FUN_1800aab30);
    }
  }
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"spin speed");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"anti aim");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_468,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"spin speed rev/s");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"anti aim");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_328,&local_b48,&local_b68);
  cVar2 = FUN_1800f40c0(param_1,local_328);
  if ((cVar2 == '\0') && (cVar2 = FUN_1800f40c0(param_1,local_468), cVar2 != '\0')) {
    uVar6 = FUN_18015b360(local_b30,local_468);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46f0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_468);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      fVar31 = (float)FUN_1800e6880(uVar6);
      local_8f8 = &local_b68;
      auVar36._0_4_ = (fVar31 * 64.0) / 360.0;
      auVar36._4_12_ = SUB6012((undefined1  [60])0x0,0);
      uVar30 = FUN_1800b4ef0(auVar36._0_8_,auVar40._0_8_,0xc0a00000,0x40a00000);
      local_9f8 = (char *)CONCAT44(local_9f8._4_4_,uVar30);
      uVar6 = FUN_1800e7670(&local_b68,&local_9f8);
      uVar7 = FUN_18015b360(local_b30,local_328);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
    }
  }
  FUN_1800f42a0(param_1,local_468);
  local_8d8 = (char ***)0x1806bc708;
  pcStack_8d0 = "anti aim";
  FUN_1800dff00(&local_8c8,&local_8d8,&local_8c8);
  plVar16 = (longlong *)FUN_1800efea0(&local_8c8);
  plVar19 = (longlong *)FUN_1800efe90(&local_8c8);
  for (; plVar16 != plVar19; plVar16 = plVar16 + 1) {
    local_9a8 = (char **)*plVar16;
    local_9a0 = -1;
    do {
      local_9a0 = local_9a0 + 1;
    } while (*(char *)((longlong)local_9a8 + local_9a0) != '\0');
    local_7f8 = (char **)0x1806bcbc0;
    local_7f0 = 0x10;
    FUN_1800dfa30(&local_928,&local_8b0,&local_9a8,&local_7f8);
    cVar2 = FUN_1800f40c0(param_1,&local_8b0);
    if (cVar2 == '\0') {
      if (local_920[0] == 0) {
        local_8f8 = &local_b68;
        local_9f8 = (char *)CONCAT44(local_9f8._4_4_,1);
        uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
        goto LAB_1800de1a0;
      }
    }
    else {
      uVar6 = FUN_18015b360(local_b30,&local_8b0);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      cVar2 = FUN_1800f46d0(uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_18015b360(&local_178,&local_8b0);
        uVar6 = FUN_1800f43d0(param_1,uVar6);
        puVar24 = (undefined1 *)FUN_1800e6ad0(uVar6,local_b78,0);
        cVar2 = FUN_18015af00(*puVar24,0);
        if (cVar2 == '\0') {
          uVar6 = FUN_18015b360(local_b30,&local_8b0);
          uVar6 = FUN_1800f43d0(param_1,uVar6);
          puVar24 = (undefined1 *)FUN_1800e6ad0(uVar6,local_b38,1);
          cVar2 = FUN_18015abb0(*puVar24,0);
          if (cVar2 == '\0') goto LAB_1800de1cd;
        }
      }
      local_8f8 = &local_b48;
      local_9f8 = (char *)CONCAT44(local_9f8._4_4_,1);
      uVar6 = FUN_1800e6200(&local_b48,&local_9f8);
LAB_1800de1a0:
      uVar7 = FUN_18015b360(local_b30,&local_8b0);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
    }
LAB_1800de1cd:
    FUN_18015c010(&local_8b0);
  }
  local_8f8 = (char **)&DAT_1806bd5ec;
  pcStack_8f0 = (char *)0x4;
  local_908 = (char **)0x1806bf550;
  uStack_900 = 0x14;
  FUN_1800dfa30(&local_928,local_4c0,&local_908,&local_8f8);
  local_8f8 = (char **)0x1806bff40;
  pcStack_8f0 = (char *)0x10;
  local_908 = (char **)0x1806bf550;
  uStack_900 = 0x14;
  FUN_1800dfa30(&local_928,local_4e0,&local_908,&local_8f8);
  local_8f8 = (char **)0x1806bf548;
  pcStack_8f0 = (char *)0x7;
  local_908 = (char **)0x1806bf550;
  uStack_900 = 0x14;
  FUN_1800dfa30(&local_928,local_6a8,&local_908,&local_8f8);
  cVar2 = FUN_1800f40c0(param_1,local_6a8);
  if ((cVar2 == '\0') &&
     ((cVar2 = FUN_1800f40c0(param_1,local_4c0), cVar2 != '\0' ||
      (cVar2 = FUN_1800f40c0(param_1,local_4e0), cVar2 != '\0')))) {
    local_b56[0] = 0;
    FUN_1800e7560(&local_878,local_b56);
    local_b57 = 0;
    FUN_1800e7560(&local_860,&local_b57);
    local_b58 = 1;
    FUN_1800e7560(&local_848,&local_b58);
    local_918[0] = 0;
    FUN_1800e7560(&local_830,local_918);
    local_b38[0] = 1;
    FUN_1800e7560(&local_818,local_b38);
    puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_878,&local_800);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    FUN_1800f4e60(&local_8d8,&local_b68);
    _eh_vector_destructor_iterator_(&local_878,0x18,5,FUN_1800aab30);
    lVar15 = FUN_1800aa200();
    if (local_920[0] == 0) {
      bVar29 = SBORROW4(local_8b8[0],0xc);
      iVar26 = local_8b8[0] + -0xc;
    }
    else {
      bVar29 = SBORROW4(local_8b8[0],2);
      iVar26 = local_8b8[0] + -2;
    }
    if (bVar29 == iVar26 < 0) {
      lVar14 = 0x18;
    }
    FUN_1800ac940(local_7a8,0x20);
    FUN_1800f4160(lVar14 + lVar15,local_7a8,local_6a8);
    uVar6 = FUN_1800f3e20(lVar14 + lVar15,local_b30);
    cVar2 = FUN_1800e6c90(local_7a8,uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_1800f3560(local_7a8);
      uVar6 = FUN_1800f4a50(&local_b68,uVar6);
      FUN_1800f49f0(&local_8d8,uVar6);
    }
    cVar2 = FUN_1800f40c0(param_1,local_4c0);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_4c0);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      cVar2 = FUN_1800f46d0(uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_18015b360(local_b30,local_4c0);
        uVar6 = FUN_1800f43d0(param_1,uVar6);
        iVar26 = FUN_1800e62a0(uVar6);
        local_927[0] = iVar26 == 1;
        local_8f8 = &local_b68;
        uVar6 = FUN_1800e6480(&local_b68,local_927);
        uVar7 = FUN_1800f4600(&local_8d8,1);
        FUN_1800f49f0(uVar7,uVar6);
        local_8f8 = &local_b48;
        local_b78[0] = local_927[0] == '\0';
        uVar6 = FUN_1800e6480(&local_b48,local_b78);
        uVar7 = FUN_1800f4600(&local_8d8,2);
        FUN_1800f49f0(uVar7,uVar6);
      }
    }
    cVar2 = FUN_1800f40c0(param_1,local_4e0);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_4e0);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      cVar2 = FUN_1800ecbf0(uVar6);
      if (cVar2 != '\0') {
        uVar6 = FUN_18015b360(local_b30,local_4e0);
        uVar6 = FUN_1800f43d0(param_1,uVar6);
        local_b78[0] = 0;
        FUN_1800e7560(local_ae0,local_b78);
        puVar8 = (undefined8 *)FUN_1800dff00(local_7e8,local_ae0,local_ac8);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        uVar7 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
        FUN_1800ea540(uVar6,&local_908,&DAT_1806bbee0,uVar7);
        FUN_1800aab30(&local_b48);
        _eh_vector_destructor_iterator_(local_ae0,0x18,1,FUN_1800aab30);
        cVar2 = FUN_1800e09a0(&local_908);
        if (cVar2 != '\0') {
          local_8f8 = &local_b68;
          uVar6 = FUN_1800f4a50(&local_b68,&local_908);
          uVar7 = FUN_1800f4600(&local_8d8,3);
          FUN_1800f49f0(uVar7,uVar6);
        }
        FUN_1800aab30(&local_908);
      }
    }
    local_8f8 = &local_b68;
    uVar6 = FUN_1800f4a30(&local_b68,&local_8d8);
    uVar7 = FUN_18015b360(local_b30,local_6a8);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
    FUN_1800aab30(&local_8d8);
  }
  FUN_1800f42a0(param_1,local_4c0);
  FUN_1800f42a0(param_1,local_4e0);
  cVar2 = FUN_1800f40c0(param_1,local_6a8);
  if (cVar2 != '\0') {
    uVar6 = FUN_18015b360(local_b30,local_6a8);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46c0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_6a8);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      lVar14 = FUN_1800f3d40(uVar6);
      if (lVar14 == 6) {
        uVar6 = FUN_18015b360(local_b30,local_6a8);
        uVar6 = FUN_1800f43d0(param_1,uVar6);
        uVar7 = FUN_18015b360(&local_178,local_6a8);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        uVar7 = FUN_1800f4020(uVar7,local_ac0);
        uVar7 = FUN_1800f3650(uVar7,local_7a8,5);
        FUN_1800ef9a0(uVar6,local_778,uVar7);
      }
    }
  }
  cVar2 = FUN_1800f40c0(param_1,local_6a8);
  if (cVar2 != '\0') {
    uVar6 = FUN_18015b360(local_b30,local_6a8);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46c0(uVar6);
    if (cVar2 != '\0') {
      uVar6 = FUN_18015b360(local_b30,local_6a8);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      lVar14 = FUN_1800f3d40(uVar6);
      if (lVar14 == 5) {
        uVar6 = FUN_18015b360(local_b30,local_6a8);
        uVar6 = FUN_1800f43d0(param_1,uVar6);
        cVar2 = FUN_1800ef730(uVar6,local_b78[0],0);
        if (cVar2 != '\0') goto LAB_1800de99a;
      }
    }
    local_8f8 = &local_b48;
    local_b78[0] = 0;
    FUN_1800e7560(&local_878,local_b78);
    local_b38[0] = 0;
    FUN_1800e7560(&local_860,local_b38);
    local_b56[0] = 1;
    FUN_1800e7560(&local_848,local_b56);
    local_b57 = 0;
    FUN_1800e7560(&local_830,&local_b57);
    local_b58 = 1;
    FUN_1800e7560(&local_818,&local_b58);
    puVar8 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_878,&local_800);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
    uVar7 = FUN_18015b360(local_b30,local_6a8);
    uVar7 = FUN_1800f43d0(param_1,uVar7);
    FUN_1800f49f0(uVar7,uVar6);
    _eh_vector_destructor_iterator_(&local_878,0x18,5,FUN_1800aab30);
  }
LAB_1800de99a:
  local_9f0 = (char *)CONCAT44(local_9f0._4_4_,1);
  local_9f8 = (char *)CONCAT44(local_9f8._4_4_,0x1c);
  local_b88 = (char *)&local_9f8;
  FUN_1800f97f0(local_108,local_b78[0],"subticks",&local_9f0);
  local_9e0 = (undefined *)CONCAT44(local_9e0._4_4_,0x19);
  local_9e8 = (char *)CONCAT44(local_9e8._4_4_,200);
  local_b88 = (char *)&local_9e8;
  FUN_1800f9810(local_f8,local_b78[0],"strafe speed",&local_9e0);
  ppcVar22 = local_108;
  do {
    puVar8 = (undefined8 *)FUN_1800ef4b0(ppcVar22);
    piVar17 = (int *)FUN_1800ef5d0(ppcVar22);
    uVar6 = FUN_1800ef4a0(ppcVar22);
    puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,*puVar8);
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"movement - airstrafe");
    local_b48 = (char *)*puVar8;
    uStack_b40 = puVar8[1];
    FUN_1800dfa30(&local_928,local_708,&local_b48,&local_b68);
    cVar2 = FUN_1800f40c0(param_1,local_708);
    if (cVar2 != '\0') {
      local_8f8 = &local_af8;
      uVar7 = FUN_18015b360(local_b30,local_708);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      cVar2 = FUN_1800f46d0(uVar7);
      if (cVar2 == '\0') {
        uVar30 = 100;
        if (*piVar17 == 1) {
          uVar30 = 0x10;
        }
      }
      else {
        uVar7 = FUN_18015b360(&local_178,local_708);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        uVar30 = FUN_1800e62a0(uVar7);
        local_9f8 = (char *)CONCAT44(local_9f8._4_4_,uVar30);
        puVar20 = (undefined4 *)FUN_1800b0180(&local_9f8,piVar17,uVar6);
        uVar30 = *puVar20;
      }
      local_9f0 = (char *)CONCAT44(local_9f0._4_4_,uVar30);
      uVar6 = FUN_1800e6200(&local_af8,&local_9f0);
      uVar7 = FUN_18015b360(local_ac0,local_708);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
    }
    thunk_FUN_18015c010(local_708);
    ppcVar22 = ppcVar22 + 2;
  } while (ppcVar22 != local_e8);
  if (local_920[0] == 0) {
    lVar14 = FUN_1800aa200();
    puVar20 = (undefined4 *)FUN_1800efea0(lVar14);
    puVar21 = (undefined4 *)FUN_1800efe90(lVar14);
    for (; puVar20 != puVar21; puVar20 = puVar20 + 0x1c) {
      puVar25 = *(undefined **)(puVar20 + 2);
      if (((puVar25 != &DAT_180cc83d0) && ((undefined *)0x180cc81af < puVar25)) &&
         (puVar25 < &DAT_180cc8bd8)) {
        local_908 = (char **)0x0;
        uStack_900 = uStack_900 & 0xffffffff00000000;
        FUN_18015abc0(&local_908,0xc,&DAT_1806bbf8c,*puVar20);
        if (((local_8b8[0] < 0xc) && (cVar2 = FUN_1800e6540(param_1,&local_908), cVar2 == '\0')) &&
           (cVar2 = FUN_1800e6540(lVar14 + 0x28,&local_908), cVar2 != '\0')) {
          local_8f8 = &local_b68;
          uVar6 = FUN_1800e6a70(lVar14 + 0x28,&local_908);
          uVar6 = FUN_1800f4a50(&local_b68,uVar6);
          uVar7 = FUN_1800e65e0(param_1,&local_908);
          FUN_1800f49f0(uVar7,uVar6);
        }
      }
    }
    local_148 = "ragebot";
    local_140 = "legitbot";
    ppcVar22 = &local_148;
    do {
      pcVar12 = *ppcVar22;
      puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"auto fire");
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      puVar8 = (undefined8 *)FUN_18015b110(local_7e8,pcVar12);
      local_b48 = (char *)*puVar8;
      uStack_b40 = puVar8[1];
      FUN_1800dfa30(&local_928,local_7a8,&local_b48,&local_b68);
      cVar2 = FUN_1800f40c0(param_1,local_7a8);
      if (cVar2 == '\0') {
        local_8f8 = &local_af8;
        FUN_1800e60e0(local_ac0,&DAT_1806bbee0);
        local_b78[0] = 0;
        FUN_1800e7560(local_aa8,local_b78);
        puVar8 = (undefined8 *)FUN_1800dff00(local_ae0,local_ac0,local_a90);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(&local_878,&local_b68);
        FUN_1800e60e0(&local_178,&DAT_1806bbee4);
        local_8d8 = (char ***)0x0;
        FUN_1800eb230(&local_160,&local_8d8);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_748,&local_178,&local_148);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        FUN_1800f3730(&local_860,&local_b68);
        puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,&local_878,&local_848);
        local_b68 = (char *)*puVar8;
        uStack_b60 = puVar8[1];
        uVar6 = FUN_1800f4e90(&local_af8,&local_b68,1,2);
        uVar7 = FUN_18015b360(local_b30,local_7a8);
        uVar7 = FUN_1800f43d0(param_1,uVar7);
        FUN_1800f49f0(uVar7,uVar6);
        _eh_vector_destructor_iterator_(&local_878,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
        _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
      }
      thunk_FUN_18015c010(local_7a8);
      ppcVar22 = ppcVar22 + 1;
    } while (ppcVar22 != local_138);
    FUN_1800dff00(&local_8c8,&local_928,param_1);
    local_9f8._0_4_ = 1;
    FUN_1800e6200(&local_908,&local_9f8);
    FUN_1800e09b0(&local_8c8,"yaw mode",&local_908);
    FUN_1800aab30(&local_908);
    local_9f8._0_4_ = 0x41f00000;
    FUN_1800e7670(&local_8d8,&local_9f8);
    FUN_1800e09b0(&local_8c8,"custom pitch",&local_8d8);
    FUN_1800aab30(&local_8d8);
    local_9f8._0_4_ = 0xc2b40000;
    FUN_1800e7670(&local_7f8,&local_9f8);
    FUN_1800e09b0(&local_8c8,"force left degrees",&local_7f8);
    FUN_1800aab30(&local_7f8);
    local_9f8._0_4_ = 0x42b40000;
    FUN_1800e7670(&local_9a8,&local_9f8);
    FUN_1800e09b0(&local_8c8,"force right degrees",&local_9a8);
    FUN_1800aab30(&local_9a8);
    local_9f8._0_4_ = 0x42040000;
    FUN_1800e7670(&local_8f8,&local_9f8);
    FUN_1800e09b0(&local_8c8,"alignment offset",&local_8f8);
    FUN_1801409d0(&pcStack_8f0,(ulonglong)local_8f8 & 0xff);
    local_9f8._0_4_ = 0x42340000;
    FUN_1800e7670(local_998,&local_9f8);
    FUN_1800e09b0(&local_8c8,"jitter amount",local_998);
    FUN_1800aab30(local_998);
    local_9f8 = (char *)CONCAT44(local_9f8._4_4_,auVar40._0_4_);
    FUN_1800e7670(local_988,&local_9f8);
    FUN_1800e09b0(&local_8c8,"spin speed rev/s",local_988);
    FUN_1800aab30(local_988);
    local_748 = "jitter";
    local_740 = "spinbot";
    local_738 = "hide shot v2";
    FUN_1800dff00(local_688,&local_748,local_730);
    puVar8 = (undefined8 *)FUN_1800efea0(local_688);
    puVar9 = (undefined8 *)FUN_1800efe90(local_688);
    for (; puVar8 != puVar9; puVar8 = puVar8 + 1) {
      uVar6 = *puVar8;
      FUN_1800e60e0(&local_178,&DAT_1806bbee0);
      local_b78[0] = 0;
      FUN_1800e7560(&local_160,local_b78);
      puVar10 = (undefined8 *)FUN_1800dff00(&local_8b0,&local_178,&local_148);
      local_b68 = (char *)*puVar10;
      uStack_b60 = puVar10[1];
      FUN_1800f3730(&local_878,&local_b68);
      FUN_1800e60e0(local_b30,&DAT_1806bbee4);
      local_8d8 = (char ***)0x0;
      FUN_1800eb230(local_b18,&local_8d8);
      puVar10 = (undefined8 *)FUN_1800dff00(local_7e8,local_b30,local_b00);
      local_b68 = (char *)*puVar10;
      uStack_b60 = puVar10[1];
      FUN_1800f3730(&local_860,&local_b68);
      puVar10 = (undefined8 *)FUN_1800dff00(local_ae0,&local_878,&local_848);
      local_b68 = (char *)*puVar10;
      uStack_b60 = puVar10[1];
      FUN_1800f4e90(&local_8f8,&local_b68,1,2);
      FUN_1800e09b0(&local_8c8,uVar6,&local_8f8);
      FUN_1800aab30(&local_8f8);
      _eh_vector_destructor_iterator_(&local_878,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_b30,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
    }
  }
  cVar2 = FUN_1800d4d00(param_1);
  if (cVar2 != '\0') {
    FUN_1800e6010(1,"Config","CONFIG_SCOPE_MIGRATED",
                  "source=six_engine_groups target=weapon_profiles");
  }
  puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"max backtrack ticks");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"ragebot");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_408,&local_b48,&local_b68);
  puVar8 = (undefined8 *)FUN_18015b110(local_ae0,"max backtrack ms");
  local_b68 = (char *)*puVar8;
  uStack_b60 = puVar8[1];
  puVar8 = (undefined8 *)FUN_18015b110(&local_748,"ragebot");
  local_b48 = (char *)*puVar8;
  uStack_b40 = puVar8[1];
  FUN_1800dfa30(&local_928,local_448,&local_b48,&local_b68);
  cVar2 = FUN_1800f40c0(param_1,local_448);
  if ((cVar2 == '\0') && (cVar2 = FUN_1800f40c0(param_1,local_408), cVar2 != '\0')) {
    uVar6 = FUN_18015b360(local_b30,local_408);
    uVar6 = FUN_1800f43d0(param_1,uVar6);
    cVar2 = FUN_1800f46d0(uVar6);
    if (cVar2 != '\0') {
      local_8f8 = &local_b68;
      uVar6 = FUN_18015b360(local_b30,local_408);
      uVar6 = FUN_1800f43d0(param_1,uVar6);
      uVar30 = FUN_1800e62a0(uVar6);
      uVar30 = FUN_1800b4e70(uVar30);
      local_9f8 = (char *)CONCAT44(local_9f8._4_4_,uVar30);
      uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
      uVar7 = FUN_18015b360(&local_178,local_448);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
    }
  }
  FUN_1800f42a0(param_1,local_408);
  puVar25 = &DAT_180c7e978;
  if (local_8b8[0] < 4) {
    cVar2 = FUN_1800f40c0(param_1,local_448);
    if (cVar2 == '\0') {
      local_8f8 = &local_b68;
      local_9f8 = (char *)CONCAT44(local_9f8._4_4_,0xbc);
      uVar6 = FUN_1800e6200(&local_b68,&local_9f8);
      uVar7 = FUN_18015b360(local_b30,local_448);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
    }
    puVar8 = (undefined8 *)FUN_18015b110(&local_8b0,"backtrack");
    local_b68 = (char *)*puVar8;
    uStack_b60 = puVar8[1];
    puVar8 = (undefined8 *)FUN_18015b110(local_7e8,"ragebot");
    local_b48 = (char *)*puVar8;
    uStack_b40 = puVar8[1];
    FUN_1800dfa30(&local_928,local_7a8,&local_b48,&local_b68);
    cVar2 = FUN_1800f40c0(param_1,local_7a8);
    if (cVar2 == '\0') {
      local_8f8 = &local_b48;
      FUN_1800e60e0(local_ac0,&DAT_1806bbee0);
      local_b78[0] = 1;
      FUN_1800e7560(local_aa8,local_b78);
      puVar8 = (undefined8 *)FUN_1800dff00(&local_7c8,local_ac0,local_a90);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      FUN_1800f3730(&local_878,&local_b68);
      FUN_1800e60e0(&local_178,&DAT_1806bbee4);
      local_8d8 = (char ***)0x0;
      FUN_1800eb230(&local_160,&local_8d8);
      puVar8 = (undefined8 *)FUN_1800dff00(local_728,&local_178,&local_148);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      FUN_1800f3730(&local_860,&local_b68);
      puVar8 = (undefined8 *)FUN_1800dff00(local_6d8,&local_878,&local_848);
      local_b68 = (char *)*puVar8;
      uStack_b60 = puVar8[1];
      uVar6 = FUN_1800f4e90(&local_b48,&local_b68,1,2);
      uVar7 = FUN_18015b360(local_b30,local_7a8);
      uVar7 = FUN_1800f43d0(param_1,uVar7);
      FUN_1800f49f0(uVar7,uVar6);
      _eh_vector_destructor_iterator_(&local_878,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(&local_178,0x18,2,FUN_1800aab30);
      _eh_vector_destructor_iterator_(local_ac0,0x18,2,FUN_1800aab30);
    }
    FUN_1800dff00(&local_8c8,&local_928,param_1);
    FUN_1800e0b40(&local_8c8,&DAT_180c7e290);
    lVar14 = FUN_1800ef4a0(&DAT_180c7e978);
    lVar15 = FUN_1800f2bb0(&DAT_180c7e978);
    for (; lVar14 != lVar15; lVar14 = lVar14 + 0x6e8) {
      FUN_1800e0b40(&local_8c8,lVar14);
    }
    puVar20 = (undefined4 *)&DAT_180c812e8;
    do {
      FUN_1800e0b40(&local_8c8,puVar20);
      puVar20 = puVar20 + 0x1ba;
    } while (puVar20 != &DAT_180c8fdb8);
    FUN_18015c010(local_7a8);
  }
  local_5d8 = &local_928;
  local_5c8 = local_8b8;
  local_5d0 = param_1;
  FUN_1800e1840(&local_5d8,&DAT_180c7e290);
  do {
    FUN_1800e1840(&local_5d8,puVar25);
    puVar25 = puVar25 + 0x6e8;
  } while (puVar25 != &DAT_180c812e8);
  lVar14 = FUN_1800ef4a0(&DAT_180c812e8);
  lVar15 = FUN_1800f2ba0(&DAT_180c812e8);
  for (; lVar14 != lVar15; lVar14 = lVar14 + 0x6e8) {
    FUN_1800e1840(&local_5d8,lVar14);
  }
  thunk_FUN_18015c010(local_448);
  thunk_FUN_18015c010(local_408);
  thunk_FUN_18015c010(local_6a8);
  thunk_FUN_18015c010(local_4e0);
  thunk_FUN_18015c010(local_4c0);
  thunk_FUN_18015c010(local_328);
  thunk_FUN_18015c010(local_468);
  thunk_FUN_18015c010(local_308);
  thunk_FUN_18015c010(local_2e8);
  thunk_FUN_18015c010(local_678);
  thunk_FUN_18015c010(local_658);
  thunk_FUN_18015c010(local_2c8);
  thunk_FUN_18015c010(local_5a0);
  thunk_FUN_18015c010(local_628);
  thunk_FUN_18015c010(local_2a8);
  thunk_FUN_18015c010(local_388);
  thunk_FUN_18015c010(local_288);
  thunk_FUN_18015c010(local_580);
  thunk_FUN_18015c010(local_3a8);
  thunk_FUN_18015c010(local_268);
  thunk_FUN_18015c010(local_248);
  thunk_FUN_18015c010(local_368);
  thunk_FUN_18015c010(local_348);
  thunk_FUN_18015c010(local_3e8);
  thunk_FUN_18015c010(local_3c8);
  thunk_FUN_18015c010(local_4a0);
  thunk_FUN_18015c010(local_228);
}



