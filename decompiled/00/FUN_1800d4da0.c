// FUN_1800d4da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d4da0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d4da0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  undefined4 uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 *puVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_408 [32];
  undefined1 local_3e8 [16];
  char *local_3d8;
  undefined1 *puStack_3d0;
  undefined1 local_3c8 [8];
  undefined8 local_3c0;
  char *local_3b8;
  ulonglong uStack_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined8 local_378;
  undefined1 local_370 [16];
  undefined8 local_360;
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined1 local_340 [16];
  undefined8 local_330;
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined1 local_310 [16];
  undefined8 local_300;
  undefined1 local_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 auStack_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 local_298 [16];
  undefined1 auStack_288 [16];
  undefined1 local_278 [16];
  undefined1 auStack_268 [16];
  undefined **local_258;
  undefined8 local_250;
  undefined8 local_248;
  char *local_240;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 auStack_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  char local_d8 [8];
  undefined1 local_d0 [16];
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  undefined1 local_b0 [16];
  ulonglong uStack_a0;
  ulonglong uStack_98;
  undefined1 local_90 [16];
  ulonglong uStack_80;
  ulonglong uStack_78;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_408;
  puVar2 = (undefined8 *)*param_1;
  local_68 = "scope";
  uStack_60 = 5;
  local_218 = (undefined1  [16])0x0;
  local_208 = (undefined1  [16])0x0;
  FUN_18015ba30(local_218,*param_2,param_2[1]);
  pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_218," profiles",9);
  local_2f8 = *pauVar9;
  auStack_2e8 = pauVar9[1];
  (*pauVar9)[0] = 0;
  *(undefined8 *)pauVar9[1] = 0;
  *(undefined8 *)(pauVar9[1] + 8) = 0xf;
  local_3e8._0_8_ = local_2f8;
  if (0xf < (ulonglong)auStack_2e8._8_8_) {
    local_3e8._0_8_ = local_2f8._0_8_;
  }
  uVar3 = *puVar2;
  local_58 = (undefined1 *)0x0;
  local_50 = (ulonglong)local_50._4_4_ << 0x20;
  local_3d8 = local_68;
  puStack_3d0 = (undefined1 *)uStack_60;
  local_3e8._8_8_ = auStack_2e8._0_8_;
  uVar8 = FUN_1800aa290(local_3e8,&local_3d8);
  FUN_18015abc0(&local_58,0xc,&DAT_1806bbf8c,uVar8);
  local_3a8 = (undefined1  [16])0x0;
  local_398 = (undefined1  [16])0x0;
  lVar12 = -1;
  do {
    lVar14 = lVar12 + 1;
    lVar12 = lVar12 + 1;
  } while (*(char *)((longlong)&local_58 + lVar14) != '\0');
  FUN_18015ba30(local_3a8,&local_58);
  cVar7 = FUN_1800f40c0(uVar3,local_3a8);
  FUN_18015c010(local_3a8);
  FUN_18015c010(local_2f8);
  FUN_18015c010(local_218);
  if (cVar7 == '\0') {
    local_258 = &PTR_s_silent_1806ff0c0;
    local_250 = param_1[1];
    local_248 = param_1[2];
    local_240 = local_d8;
    local_1f8 = (undefined1  [16])0x0;
    local_1e8 = (undefined1  [16])0x0;
    local_d8[0] = cVar7;
    FUN_18015ba30(local_1f8,*param_2,param_2[1]);
    pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_1f8," - rifle",8);
    local_90 = *pauVar9;
    uStack_80 = *(ulonglong *)pauVar9[1];
    uStack_78 = *(ulonglong *)(pauVar9[1] + 8);
    *(undefined8 *)(pauVar9[1] + 8) = 0xf;
    (*pauVar9)[0] = 0;
    *(undefined8 *)pauVar9[1] = 0;
    FUN_18015c010(local_1f8);
    local_1d8 = (undefined1  [16])0x0;
    local_1c8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_1d8,*param_2,param_2[1]);
    pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_1d8," - all weapons",0xe);
    local_2d8 = *pauVar9;
    auStack_2c8 = pauVar9[1];
    (*pauVar9)[0] = 0;
    *(undefined8 *)pauVar9[1] = 0;
    *(undefined8 *)(pauVar9[1] + 8) = 0xf;
    local_3e8._0_8_ = local_2d8;
    if (0xf < (ulonglong)auStack_2c8._8_8_) {
      local_3e8._0_8_ = local_2d8._0_8_;
    }
    local_58 = local_90;
    if (0xf < uStack_78) {
      local_58 = (undefined1 *)local_90._0_8_;
    }
    local_3e8._8_8_ = auStack_2c8._0_8_;
    local_50 = uStack_80;
    FUN_1800d59d0(&local_258,&local_58,local_3e8,0);
    FUN_18015c010(local_2d8);
    FUN_18015c010(local_1d8);
    lVar12 = 0;
    do {
      puVar4 = (&PTR_s_pistol_1806ff160)[(int)(&DAT_1806ff148)[lVar12]];
      local_198 = (undefined1  [16])0x0;
      local_188 = (undefined1  [16])0x0;
      FUN_18015ba30(local_198,*param_2,param_2[1]);
      pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_198,&DAT_1806bfbdc,3);
      local_1b8 = *pauVar9;
      auStack_1a8 = pauVar9[1];
      *(undefined8 *)(pauVar9[1] + 8) = 0xf;
      (*pauVar9)[0] = 0;
      *(undefined8 *)pauVar9[1] = 0;
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (puVar4[lVar14] != '\0');
      pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_1b8,puVar4);
      local_b0 = *pauVar9;
      uStack_a0 = *(ulonglong *)pauVar9[1];
      uStack_98 = *(ulonglong *)(pauVar9[1] + 8);
      *(undefined8 *)(pauVar9[1] + 8) = 0xf;
      (*pauVar9)[0] = 0;
      *(undefined8 *)pauVar9[1] = 0;
      FUN_18015c010(local_1b8);
      FUN_18015c010(local_198);
      puVar4 = (&PTR_s_Pistols_1806ffe00)[lVar12];
      local_158 = (undefined1  [16])0x0;
      local_148 = (undefined1  [16])0x0;
      FUN_18015ba30(local_158,*param_2,param_2[1]);
      pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_158," - group - ",0xb);
      local_178 = *pauVar9;
      auStack_168 = pauVar9[1];
      *(undefined8 *)(pauVar9[1] + 8) = 0xf;
      (*pauVar9)[0] = 0;
      *(undefined8 *)pauVar9[1] = 0;
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (puVar4[lVar14] != '\0');
      pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_178,puVar4);
      local_d0 = *pauVar9;
      uStack_c0 = *(ulonglong *)pauVar9[1];
      uStack_b8 = *(ulonglong *)(pauVar9[1] + 8);
      (*pauVar9)[0] = 0;
      *(undefined8 *)pauVar9[1] = 0;
      *(undefined8 *)(pauVar9[1] + 8) = 0xf;
      FUN_18015c010(local_178);
      FUN_18015c010(local_158);
      local_58 = local_d0;
      if (0xf < uStack_b8) {
        local_58 = (undefined1 *)local_d0._0_8_;
      }
      local_68 = local_b0;
      if (0xf < uStack_98) {
        local_68 = (char *)local_b0._0_8_;
      }
      local_50 = uStack_c0;
      uStack_60 = uStack_a0;
      FUN_1800d59d0(&local_258,&local_68,&local_58,0);
      if (lVar12 == 5) {
        local_3b8 = local_d0;
        if (0xf < uStack_b8) {
          local_3b8 = (char *)local_d0._0_8_;
        }
        uStack_3b0 = uStack_c0;
        local_138 = (undefined1  [16])0x0;
        local_128 = (undefined1  [16])0x0;
        FUN_18015ba30(local_138,*param_2,param_2[1]);
        pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_138," - lmg",6);
        local_2b8 = *pauVar9;
        auStack_2a8 = pauVar9[1];
        (*pauVar9)[0] = 0;
        *(undefined8 *)pauVar9[1] = 0;
        *(undefined8 *)(pauVar9[1] + 8) = 0xf;
        local_3d8 = local_2b8;
        if (0xf < (ulonglong)auStack_2a8._8_8_) {
          local_3d8 = (char *)local_2b8._0_8_;
        }
        local_3e8._8_8_ = uStack_3b0;
        local_3e8._0_8_ = local_3b8;
        puStack_3d0 = (undefined1 *)auStack_2a8._0_8_;
        FUN_1800d59d0(&local_258,&local_3d8,local_3e8,1);
        FUN_18015c010(local_2b8);
        FUN_18015c010(local_138);
      }
      FUN_18015c010(local_d0);
      FUN_18015c010(local_b0);
      lVar12 = lVar12 + 1;
    } while (lVar12 < 6);
    if (local_d8[0] != '\0') {
      local_68 = local_3e8;
      local_3e8 = ZEXT816(0);
      FUN_1801409d0(local_3e8 + 8,0);
      local_3e8[0] = 5;
      local_3e8._8_8_ = 1;
      uVar3 = param_1[2];
      local_3d8 = "scope";
      puStack_3d0 = (undefined1 *)0x5;
      local_118 = (undefined1  [16])0x0;
      local_108 = (undefined1  [16])0x0;
      FUN_18015ba30(local_118,*param_2,param_2[1]);
      pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_118," profiles",9);
      local_298 = *pauVar9;
      auStack_288 = pauVar9[1];
      (*pauVar9)[0] = 0;
      *(undefined8 *)pauVar9[1] = 0;
      *(undefined8 *)(pauVar9[1] + 8) = 0xf;
      pcVar11 = local_298;
      if (0xf < (ulonglong)auStack_288._8_8_) {
        pcVar11 = (char *)local_298._0_8_;
      }
      local_58 = (undefined1 *)0x0;
      local_50 = local_50 & 0xffffffff00000000;
      local_3b8 = local_3d8;
      uStack_3b0 = (ulonglong)puStack_3d0;
      puStack_3d0 = (undefined1 *)auStack_288._0_8_;
      local_3d8 = pcVar11;
      uVar8 = FUN_1800aa290(&local_3d8,&local_3b8);
      FUN_18015abc0(&local_58,0xc,&DAT_1806bbf8c,uVar8);
      local_238 = (undefined1  [16])0x0;
      local_228 = 0;
      local_220 = 0;
      lVar12 = -1;
      do {
        lVar14 = lVar12 + 1;
        lVar12 = lVar12 + 1;
      } while (*(char *)((longlong)&local_58 + lVar14) != '\0');
      FUN_18015ba30(local_238,&local_58);
      puVar10 = (undefined1 *)FUN_1800f43d0(uVar3,local_238);
      auVar5 = local_3e8;
      uVar1 = *puVar10;
      *puVar10 = local_3e8[0];
      local_3e8[0] = uVar1;
      auVar6 = local_3e8;
      uVar3 = *(undefined8 *)(puVar10 + 8);
      local_3e8._8_8_ = auVar5._8_8_;
      *(undefined8 *)(puVar10 + 8) = local_3e8._8_8_;
      local_3e8._0_8_ = auVar6._0_8_;
      local_3e8._8_8_ = uVar3;
      FUN_1801409d0(local_3e8 + 8,uVar1);
      FUN_18015c010(local_298);
      FUN_18015c010(local_118);
      local_58 = local_3c8;
      local_388 = ZEXT816(0);
      FUN_1801409d0(local_388 + 8,0);
      local_388[0] = 4;
      local_68 = (char *)CONCAT71(local_68._1_7_,1);
      local_388._8_8_ = local_68;
      local_378 = 0;
      local_370 = ZEXT816(0);
      FUN_1801409d0(local_370 + 8,0);
      local_370[0] = 4;
      local_68 = (char *)CONCAT71(local_68._1_7_,1);
      local_370._8_8_ = local_68;
      local_360 = 0;
      local_358 = ZEXT816(0);
      FUN_1801409d0(local_358 + 8,0);
      local_358[0] = 4;
      local_68 = (char *)CONCAT71(local_68._1_7_,1);
      local_358._8_8_ = local_68;
      local_348 = 0;
      local_340 = ZEXT816(0);
      FUN_1801409d0(local_340 + 8,0);
      local_340[0] = 4;
      local_68 = (char *)CONCAT71(local_68._1_7_,1);
      local_340._8_8_ = local_68;
      local_330 = 0;
      local_328 = ZEXT816(0);
      FUN_1801409d0(local_328 + 8,0);
      local_328[0] = 4;
      local_68 = (char *)CONCAT71(local_68._1_7_,1);
      local_328._8_8_ = local_68;
      local_318 = 0;
      local_310 = ZEXT816(0);
      FUN_1801409d0(local_310 + 8,0);
      local_310[0] = 4;
      local_68 = (char *)CONCAT71(local_68._1_7_,1);
      local_310._8_8_ = local_68;
      local_300 = 0;
      local_3d8 = local_388;
      puStack_3d0 = local_2f8;
      FUN_1800f4e90(local_3c8,&local_3d8,0,2);
      uVar3 = param_1[2];
      local_3d8 = "configured groups";
      puStack_3d0 = (undefined1 *)0x11;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_f8,*param_2,param_2[1]);
      pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_f8," profiles",9);
      local_278 = *pauVar9;
      auStack_268 = pauVar9[1];
      (*pauVar9)[0] = 0;
      *(undefined8 *)pauVar9[1] = 0;
      *(undefined8 *)(pauVar9[1] + 8) = 0xf;
      pcVar11 = local_278;
      if (0xf < (ulonglong)auStack_268._8_8_) {
        pcVar11 = (char *)local_278._0_8_;
      }
      local_68 = (char *)0x0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      local_3b8 = local_3d8;
      uStack_3b0 = (ulonglong)puStack_3d0;
      puStack_3d0 = (undefined1 *)auStack_268._0_8_;
      local_3d8 = pcVar11;
      uVar8 = FUN_1800aa290(&local_3d8,&local_3b8);
      FUN_18015abc0(&local_68,0xc,&DAT_1806bbf8c,uVar8);
      local_3a8 = (undefined1  [16])0x0;
      local_398 = ZEXT816(0);
      lVar12 = -1;
      do {
        lVar13 = lVar12 + 1;
        lVar14 = lVar12 + 1;
        lVar12 = lVar13;
      } while (*(char *)((longlong)&local_68 + lVar14) != '\0');
      FUN_18015ba30(local_3a8,&local_68,lVar13);
      puVar10 = (undefined1 *)FUN_1800f43d0(uVar3,local_3a8);
      uVar1 = *puVar10;
      *puVar10 = local_3c8[0];
      uVar3 = *(undefined8 *)(puVar10 + 8);
      *(undefined8 *)(puVar10 + 8) = local_3c0;
      local_3c8[0] = uVar1;
      local_3c0 = uVar3;
      FUN_1801409d0(&local_3c0,uVar1);
      FUN_18015c010(local_278);
      FUN_18015c010(local_f8);
      _eh_vector_destructor_iterator_(local_388,0x18,6,FUN_1800aab30);
      *(undefined1 *)param_1[3] = 1;
    }
    FUN_18015c010(local_90);
  }
}



